// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// SCT_LIST_free @ 14f6cfa60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_LIST_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,SCT_free);
  return;
}

// SCT_LIST_validate @ 14f6cfa90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint SCT_LIST_validate(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  iVar7 = 0;
  uVar10 = 1;
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
  }
  if (0 < iVar1) {
    do {
      uVar9 = 0;
      piVar3 = (int *)OPENSSL_sk_value(param_1,iVar7);
      if (piVar3 != (int *)0x0) {
        uVar8 = 0xffffffff;
        local_res18 = 0;
        local_res20 = 0;
        if (*piVar3 == 0) {
          lVar4 = CTLOG_STORE_get0_log_by_id
                            (param_2[2],*(undefined8 *)(piVar3 + 6),*(undefined8 *)(piVar3 + 8));
          if (lVar4 == 0) {
            piVar3[0x18] = 1;
            uVar9 = 0;
          }
          else {
            lVar5 = SCT_CTX_new();
            uVar9 = 0xffffffff;
            if (lVar5 != 0) {
              uVar6 = CTLOG_get0_public_key(lVar4);
              iVar2 = X509_PUBKEY_set(&local_res20,uVar6);
              uVar9 = uVar8;
              if ((iVar2 == 1) && (iVar2 = SCT_CTX_set1_pubkey(lVar5,local_res20), iVar2 == 1)) {
                if (piVar3[0x16] == 1) {
                  if (param_2[1] != 0) {
                    uVar6 = X509_get0_pubkey();
                    iVar2 = X509_PUBKEY_set(&local_res18,uVar6);
                    if ((iVar2 != 1) ||
                       (iVar2 = SCT_CTX_set1_issuer_pubkey(lVar5,local_res18), iVar2 != 1))
                    goto LAB_14f6cfc1d;
                    goto LAB_14f6cfbd2;
                  }
                  piVar3[0x18] = 4;
                }
                else {
LAB_14f6cfbd2:
                  SCT_CTX_set_time(lVar5,param_2[3]);
                  iVar2 = SCT_CTX_set1_cert(lVar5,*param_2,0);
                  if (iVar2 == 1) {
                    iVar2 = SCT_CTX_verify(lVar5,piVar3);
                    piVar3[0x18] = (iVar2 != 1) + 2;
                  }
                  else {
                    piVar3[0x18] = 4;
                  }
                }
                uVar9 = (uint)(piVar3[0x18] == 2);
              }
            }
LAB_14f6cfc1d:
            X509_PUBKEY_free(local_res18);
            X509_PUBKEY_free(local_res20);
            SCT_CTX_free(lVar5);
            if ((int)uVar9 < 0) {
              return uVar9;
            }
          }
        }
        else {
          piVar3[0x18] = 5;
        }
        uVar10 = uVar10 & uVar9;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return uVar10;
}

// SCT_free @ 14f6cfc80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_free(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\ct\\ct_sct.c",0x29);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x30),"crypto\\ct\\ct_sct.c",0x2a);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x48),"crypto\\ct\\ct_sct.c",0x2b);
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\ct\\ct_sct.c",0x2c);
    CRYPTO_free(param_1,"crypto\\ct\\ct_sct.c",0x2d);
  }
  return;
}

// SCT_get_signature_nid @ 14f6cfd90

undefined8 SCT_get_signature_nid(int *param_1)

{
  if ((*param_1 == 0) && ((char)param_1[0x10] == '\x04')) {
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      return 0x29c;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x03') {
      return 0x31a;
    }
  }
  return 0;
}

// SCT_get_validation_status @ 14f6cfde0

undefined4 SCT_get_validation_status(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}

// SCT_is_complete @ 14f6cfe00

bool SCT_is_complete(int *param_1)

{
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      return *(longlong *)(param_1 + 2) != 0;
    }
    if ((((*(longlong *)(param_1 + 6) != 0) && ((char)param_1[0x10] == '\x04')) &&
        ((*(char *)((longlong)param_1 + 0x41) == '\x01' ||
         (*(char *)((longlong)param_1 + 0x41) == '\x03')))) &&
       ((*(longlong *)(param_1 + 0x12) != 0 && (*(longlong *)(param_1 + 0x14) != 0)))) {
      return true;
    }
  }
  return false;
}

// SCT_new @ 14f6cfe60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * SCT_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x68,"crypto\\ct\\ct_sct.c",0x18);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x32,100,0x41,"crypto\\ct\\ct_sct.c",0x1b);
    return (undefined4 *)0x0;
  }
  puVar1[0x16] = 0xffffffff;
  *puVar1 = 0xffffffff;
  return puVar1;
}

// SCT_set0_extensions @ 14f6cfed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_set0_extensions(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x30),"crypto\\ct\\ct_sct.c",0x91);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

// SCT_set0_log_id @ 14f6cff30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_set0_log_id(int *param_1,undefined8 param_2,longlong param_3)

{
  if ((*param_1 == 0) && (param_3 != 0x20)) {
    ERR_put_error(0x32,0x65,100,"crypto\\ct\\ct_sct.c",0x53,0x14f6cff45);
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 6),"crypto\\ct\\ct_sct.c",0x57);
  *(undefined8 *)(param_1 + 6) = param_2;
  *(longlong *)(param_1 + 8) = param_3;
  param_1[0x18] = 0;
  return 1;
}

// SCT_set0_signature @ 14f6cffd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_set0_signature(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x48),"crypto\\ct\\ct_sct.c",0xab);
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

// SCT_set1_extensions @ 14f6d0030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_set1_extensions(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6d0045;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x30),"crypto\\ct\\ct_sct.c",0x99);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto\\ct\\ct_sct.c",0x9f);
    *(longlong *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x32,0x72,0x41,"crypto\\ct\\ct_sct.c",0xa1,uVar2);
      return 0;
    }
    *(longlong *)(param_1 + 0x38) = param_3;
  }
  return 1;
}

// SCT_set1_log_id @ 14f6d00f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_set1_log_id(int *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6d0105;
  if ((*param_1 == 0) && (param_3 != 0x20)) {
    ERR_put_error(0x32,0x73,100,"crypto\\ct\\ct_sct.c",0x61,0x14f6d0105);
    return 0;
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 6),"crypto\\ct\\ct_sct.c",0x65);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto\\ct\\ct_sct.c",0x6b);
    *(longlong *)(param_1 + 6) = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x32,0x73,0x41,"crypto\\ct\\ct_sct.c",0x6d,uVar2);
      return 0;
    }
    *(longlong *)(param_1 + 8) = param_3;
  }
  return 1;
}

// SCT_set1_signature @ 14f6d01f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_set1_signature(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f6d0205;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x48),"crypto\\ct\\ct_sct.c",0xb3);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto\\ct\\ct_sct.c",0xb9);
    *(longlong *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x32,0x74,0x41,"crypto\\ct\\ct_sct.c",0xbb,uVar2);
      return 0;
    }
    *(longlong *)(param_1 + 0x50) = param_3;
  }
  return 1;
}

// SCT_set_log_entry_type @ 14f6d02b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_set_log_entry_type(longlong param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 < 2) {
    *(uint *)(param_1 + 0x58) = param_2;
    return 1;
  }
  ERR_put_error(0x32,0x66,0x66,"crypto\\ct\\ct_sct.c",0x4c);
  return 0;
}

// SCT_set_signature_nid @ 14f6d0310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_set_signature_nid(longlong param_1,int param_2)

{
  if (param_2 == 0x29c) {
    *(undefined2 *)(param_1 + 0x40) = 0x104;
    *(undefined4 *)(param_1 + 0x60) = 0;
    return 1;
  }
  if (param_2 != 0x31a) {
    ERR_put_error(0x32,0x67,0x65,"crypto\\ct\\ct_sct.c",0x8a);
    return 0;
  }
  *(undefined2 *)(param_1 + 0x40) = 0x304;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 1;
}

// SCT_set_source @ 14f6d0390

undefined8 SCT_set_source(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 != 1) {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x60) = 0;
      return 1;
    }
    if (param_2 != 3) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 1;
}

// SCT_set_timestamp @ 14f6d03d0

void SCT_set_timestamp(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

// SCT_set_version @ 14f6d03f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_set_version(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    ERR_put_error(0x32,0x68,0x67,"crypto\\ct\\ct_sct.c",0x38);
    return 0;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return 1;
}

// SCT_signature_is_complete @ 14f6d0440

undefined8 SCT_signature_is_complete(int *param_1)

{
  if ((((*param_1 == 0) && ((char)param_1[0x10] == '\x04')) &&
      ((*(char *)((longlong)param_1 + 0x41) == '\x01' ||
       (*(char *)((longlong)param_1 + 0x41) == '\x03')))) &&
     ((*(longlong *)(param_1 + 0x12) != 0 && (*(longlong *)(param_1 + 0x14) != 0)))) {
    return 1;
  }
  return 0;
}

// SCT_validate @ 14f6d0480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong SCT_validate(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_res8;
  undefined8 local_res18;
  
  uVar5 = 0xffffffff;
  local_res8 = 0;
  local_res18 = 0;
  if (*param_1 != 0) {
    param_1[0x18] = 5;
    return 0;
  }
  lVar2 = CTLOG_STORE_get0_log_by_id
                    (param_2[2],*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
  if (lVar2 == 0) {
    param_1[0x18] = 1;
    return 0;
  }
  lVar3 = SCT_CTX_new();
  uVar6 = 0xffffffff;
  if (lVar3 == 0) goto LAB_14f6d05c3;
  uVar4 = CTLOG_get0_public_key(lVar2);
  iVar1 = X509_PUBKEY_set(&local_res18,uVar4);
  uVar6 = uVar5;
  if (iVar1 != 1) goto LAB_14f6d05c3;
  iVar1 = SCT_CTX_set1_pubkey(lVar3,local_res18);
  if (iVar1 != 1) goto LAB_14f6d05c3;
  if (param_1[0x16] == 1) {
    if (param_2[1] != 0) {
      uVar4 = X509_get0_pubkey();
      iVar1 = X509_PUBKEY_set(&local_res8,uVar4);
      if (iVar1 != 1) goto LAB_14f6d05c3;
      iVar1 = SCT_CTX_set1_issuer_pubkey(lVar3,local_res8);
      if (iVar1 != 1) goto LAB_14f6d05c3;
      goto LAB_14f6d0581;
    }
LAB_14f6d054f:
    param_1[0x18] = 4;
  }
  else {
LAB_14f6d0581:
    SCT_CTX_set_time(lVar3,param_2[3]);
    iVar1 = SCT_CTX_set1_cert(lVar3,*param_2,0);
    if (iVar1 != 1) goto LAB_14f6d054f;
    iVar1 = SCT_CTX_verify(lVar3,param_1);
    param_1[0x18] = (iVar1 != 1) + 2;
  }
  uVar6 = (ulonglong)(param_1[0x18] == 2);
LAB_14f6d05c3:
  X509_PUBKEY_free(local_res8);
  X509_PUBKEY_free(local_res18);
  SCT_CTX_free(lVar3);
  return uVar6;
}

// FUN_14f6d0600 @ 14f6d0600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d0600(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6d0620 @ 14f6d0620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d0620(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6d0640 @ 14f6d0640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6d0640(void)

{
  OPENSSL_sk_value();
  return;
}

