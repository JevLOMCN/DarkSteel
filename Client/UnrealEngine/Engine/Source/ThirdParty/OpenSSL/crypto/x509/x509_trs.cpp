// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 20

// caseD_1 @ 14f70a070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void switchD_14f70a790::caseD_1(longlong param_1,undefined8 param_2,uint param_3)

{
  FUN_14f70a130(*(undefined4 *)(param_1 + 0x18),param_2,param_3 | 0x18);
  return;
}

// caseD_5 @ 14f70a0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void switchD_14f70a790::caseD_5(longlong param_1,undefined8 param_2,uint param_3)

{
  FUN_14f70a130(*(undefined4 *)(param_1 + 0x18),param_2,param_3 & 0xffffffe7);
  return;
}

// caseD_0 @ 14f70a0d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 switchD_14f70a790::caseD_0(undefined8 param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = X509_check_purpose(param_2,0xffffffff,0);
  if ((((int)uVar1 != 1) || ((param_3 & 4) != 0)) || ((*(uint *)(param_2 + 0xd0) & 0x2000) == 0)) {
    uVar1 = 3;
  }
  return uVar1;
}

// FUN_14f70a130 @ 14f70a130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f70a130(int param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    iVar5 = 0;
    if (plVar1[1] != 0) {
      iVar4 = 0;
      iVar2 = OPENSSL_sk_num();
      if (0 < iVar2) {
        do {
          uVar3 = OPENSSL_sk_value(plVar1[1],iVar4);
          iVar2 = OBJ_obj2nid(uVar3);
          if (iVar2 == param_1) {
            return 2;
          }
          if ((iVar2 == 0x38e) && ((param_3 & 0x10) != 0)) {
            return 2;
          }
          iVar4 = iVar4 + 1;
          iVar2 = OPENSSL_sk_num(plVar1[1]);
        } while (iVar4 < iVar2);
      }
    }
    if (*plVar1 != 0) {
      iVar2 = OPENSSL_sk_num();
      if (0 < iVar2) {
        do {
          uVar3 = OPENSSL_sk_value(*plVar1,iVar5);
          iVar2 = OBJ_obj2nid(uVar3);
          if ((iVar2 == param_1) || ((iVar2 == 0x38e && ((param_3 & 0x10) != 0)))) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          iVar2 = OPENSSL_sk_num(*plVar1);
        } while (iVar5 < iVar2);
      }
      return 2;
    }
  }
  if (((((param_3 & 8) != 0) && (uVar3 = X509_check_purpose(param_2,0xffffffff,0), (int)uVar3 == 1))
      && ((param_3 & 4) == 0)) && ((*(uint *)(param_2 + 0xd0) & 0x2000) != 0)) {
    return uVar3;
  }
  return 3;
}

// X509_TRUST_add @ 14f70a260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_TRUST_add(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5,
              undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  int local_48 [10];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f70a27e;
  if (param_1 - 1U < 8) {
    iVar1 = param_1 + -1;
LAB_14f70a2c6:
    if (iVar1 != -1) {
      if (iVar1 < 0) {
        piVar2 = (int *)0x0;
      }
      else if (iVar1 < 8) {
        piVar2 = (int *)(&DAT_154df9350 + (longlong)iVar1 * 0x28);
      }
      else {
        piVar2 = (int *)OPENSSL_sk_value(DAT_1553e2ed0,iVar1 + -8);
      }
      goto LAB_14f70a34c;
    }
  }
  else if (DAT_1553e2ed0 == 0) {
    iVar1 = -1;
  }
  else {
    local_48[0] = param_1;
    iVar1 = OPENSSL_sk_find(DAT_1553e2ed0,local_48);
    if (-1 < iVar1) {
      iVar1 = iVar1 + 8;
      goto LAB_14f70a2c6;
    }
    iVar1 = -1;
  }
  piVar2 = (int *)CRYPTO_malloc(0x28,"crypto\\x509\\x509_trs.c");
  if (piVar2 == (int *)0x0) {
    ERR_put_error(0xb,0x85,0x41,"crypto\\x509\\x509_trs.c",0x8b);
    return 0;
  }
  piVar2[1] = 1;
LAB_14f70a34c:
  if ((*(byte *)(piVar2 + 1) & 2) != 0) {
    CRYPTO_free(*(undefined8 *)(piVar2 + 4),"crypto\\x509\\x509_trs.c",0x94);
  }
  lVar3 = CRYPTO_strdup(param_4,"crypto\\x509\\x509_trs.c",0x96);
  *(longlong *)(piVar2 + 4) = lVar3;
  if (lVar3 == 0) {
    ERR_put_error(0xb,0x85,0x41,"crypto\\x509\\x509_trs.c",0x97);
    if (iVar1 != -1) {
      return 0;
    }
  }
  else {
    piVar2[1] = piVar2[1] & 1;
    piVar2[1] = piVar2[1] | param_2 & 0xfffffffe | 2;
    piVar2[6] = param_5;
    *piVar2 = param_1;
    *(undefined8 *)(piVar2 + 2) = param_3;
    *(undefined8 *)(piVar2 + 8) = param_6;
    if (iVar1 != -1) {
      return 1;
    }
    if ((DAT_1553e2ed0 == 0) && (DAT_1553e2ed0 = OPENSSL_sk_new(&LAB_14f70a8f0), DAT_1553e2ed0 == 0)
       ) {
      uVar4 = 0xa8;
    }
    else {
      iVar1 = OPENSSL_sk_push(DAT_1553e2ed0,piVar2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar4 = 0xac;
    }
    ERR_put_error(0xb,0x85,0x41,"crypto\\x509\\x509_trs.c",uVar4);
  }
  CRYPTO_free(*(undefined8 *)(piVar2 + 4),"crypto\\x509\\x509_trs.c",0xb3);
  CRYPTO_free(piVar2,"crypto\\x509\\x509_trs.c",0xb4);
  return 0;
}

// X509_TRUST_cleanup @ 14f70a4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_TRUST_cleanup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_sk_pop_free(DAT_1553e2ed0,FUN_14f70a910,param_3,param_4,0x14f70a4aa);
  DAT_1553e2ed0 = 0;
  return;
}

// X509_TRUST_get0 @ 14f70a4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * X509_TRUST_get0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 8) {
    return &DAT_154df9350 + (longlong)param_1 * 0x28;
  }
  puVar1 = (undefined *)OPENSSL_sk_value(DAT_1553e2ed0,param_1 + -8);
  return puVar1;
}

// X509_TRUST_get_by_id @ 14f70a540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_TRUST_get_by_id(int param_1)

{
  int iVar1;
  int local_38 [12];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f70a54a;
  if (param_1 - 1U < 8) {
    return param_1 + -1;
  }
  if (DAT_1553e2ed0 != 0) {
    local_38[0] = param_1;
    iVar1 = OPENSSL_sk_find(DAT_1553e2ed0,local_38);
    if (-1 < iVar1) {
      return iVar1 + 8;
    }
  }
  return -1;
}

// X509_TRUST_get_count @ 14f70a5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_TRUST_get_count(void)

{
  int iVar1;
  
  if (DAT_1553e2ed0 == 0) {
    return 8;
  }
  iVar1 = OPENSSL_sk_num();
  return iVar1 + 8;
}

// X509_TRUST_set @ 14f70a600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_TRUST_set(int *param_1,int param_2)

{
  int iVar1;
  int local_38 [10];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f70a610;
  if (param_2 - 1U < 8) {
    iVar1 = param_2 + -1;
  }
  else {
    if (DAT_1553e2ed0 == 0) goto LAB_14f70a65d;
    local_38[0] = param_2;
    iVar1 = OPENSSL_sk_find(DAT_1553e2ed0,local_38);
    if (iVar1 < 0) goto LAB_14f70a65d;
    iVar1 = iVar1 + 8;
  }
  if (iVar1 != -1) {
    *param_1 = param_2;
    return 1;
  }
LAB_14f70a65d:
  ERR_put_error(0xb,0x8d,0x7b,"crypto\\x509\\x509_trs.c",0x74);
  return 0;
}

// X509_check_trust @ 14f70a6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 X509_check_trust(longlong param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int local_38 [2];
  undefined8 uStack_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f70a6d5;
  if (param_2 == 0) {
    uVar1 = FUN_14f70a130(0x38e,param_1,param_3 | 8);
    return uVar1;
  }
  if (param_2 - 1U < 8) {
    iVar3 = param_2 + -1;
  }
  else {
    if (DAT_1553e2ed0 == 0) goto LAB_14f70a7bf;
    local_38[0] = param_2;
    iVar3 = OPENSSL_sk_find(DAT_1553e2ed0,local_38);
    if (iVar3 < 0) goto LAB_14f70a7bf;
    iVar3 = iVar3 + 8;
  }
  if (iVar3 != -1) {
    if (iVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f70a75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*_DAT_00000008)(0,param_1,param_3);
      return uVar1;
    }
    if (iVar3 < 8) {
      switch(iVar3) {
      case 0:
        goto switchD_14f70a790_caseD_0;
      default:
        uVar1 = FUN_14f70a130(*(undefined4 *)((longlong)iVar3 * 0x28 + 0x154df9368),param_1,
                              param_3 | 0x18);
        return uVar1;
      case 5:
      case 6:
        uVar1 = FUN_14f70a130(*(undefined4 *)((longlong)iVar3 * 0x28 + 0x154df9368),param_1,
                              param_3 & 0xffffffe7);
        return uVar1;
      }
    }
    lVar2 = OPENSSL_sk_value(DAT_1553e2ed0,iVar3 + -8);
                    /* WARNING: Could not recover jumptable at 0x00014f70a7bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(lVar2 + 8))(lVar2,param_1,param_3);
    return uVar1;
  }
LAB_14f70a7bf:
  uVar1 = (*(code *)PTR_FUN_154df9340)(param_2,param_1,param_3);
  return uVar1;
switchD_14f70a790_caseD_0:
  uStack_10 = 0x14f70a0e0;
  uStack_30 = 0x14f70a0f7;
  uVar1 = X509_check_purpose(param_1,0xffffffff,0);
  if ((((int)uVar1 != 1) || ((param_3 & 4) != 0)) || ((*(uint *)(param_1 + 0xd0) & 0x2000) == 0)) {
    uVar1 = 3;
  }
  return uVar1;
}

// FUN_14f70a7f0 @ 14f70a7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a7f0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70a810 @ 14f70a810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a810(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f70a830 @ 14f70a830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a830(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f70a850 @ 14f70a850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a850(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f70a870 @ 14f70a870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a870(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70a890 @ 14f70a890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a890(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f70a8b0 @ 14f70a8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a8b0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f70a8d0 @ 14f70a8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a8d0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f70a910 @ 14f70a910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a910(longlong param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 4) & 1) != 0)) {
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x10),"crypto\\x509\\x509_trs.c",0xbf);
    }
    CRYPTO_free(param_1,"crypto\\x509\\x509_trs.c",0xc0);
  }
  return;
}

