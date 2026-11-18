// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 50

// FUN_14f6cc330 @ 14f6cc330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cc330(void)

{
  OBJ_bsearch_();
  return;
}

// X509_VERIFY_PARAM_add0_policy @ 14f6cc360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_VERIFY_PARAM_add0_policy(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(longlong *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x28),param_2);
  return iVar1 != 0;
}

// X509_VERIFY_PARAM_add0_table @ 14f6cc3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_VERIFY_PARAM_add0_table(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_1553e2ae0 == 0) {
    DAT_1553e2ae0 = OPENSSL_sk_new(&LAB_14f6ccfe0);
    if (DAT_1553e2ae0 == 0) {
      return false;
    }
  }
  else {
    iVar1 = OPENSSL_sk_find(DAT_1553e2ae0,param_1);
    if (-1 < iVar1) {
      uVar2 = OPENSSL_sk_delete(DAT_1553e2ae0,iVar1);
      X509_VERIFY_PARAM_free(uVar2);
    }
  }
  iVar1 = OPENSSL_sk_push(DAT_1553e2ae0,param_1);
  return iVar1 != 0;
}

// X509_VERIFY_PARAM_add1_host @ 14f6cc450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_add1_host(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14f6cce80(param_1,1,param_2,param_3);
  return;
}

// X509_VERIFY_PARAM_free @ 14f6cc4a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_free(longlong param_1)

{
  if (param_1 != 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x28),ASN1_OBJECT_free);
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x30),FUN_14f6cd280);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x40),"crypto\\x509\\x509_vpm.c",0x68);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x48),"crypto\\x509\\x509_vpm.c",0x69);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x58),"crypto\\x509\\x509_vpm.c",0x6a);
    CRYPTO_free(param_1,"crypto\\x509\\x509_vpm.c",0x6b);
  }
  return;
}

// X509_VERIFY_PARAM_get0 @ 14f6cc540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** X509_VERIFY_PARAM_get0(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 < 5) {
    return &PTR_s_default_1534a6250 + (longlong)param_1 * 0xd;
  }
  ppuVar1 = (undefined **)OPENSSL_sk_value(DAT_1553e2ae0,param_1 + -5);
  return ppuVar1;
}

// X509_VERIFY_PARAM_get0_peername @ 14f6cc5a0

undefined8 X509_VERIFY_PARAM_get0_peername(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}

// X509_VERIFY_PARAM_get_count @ 14f6cc5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_VERIFY_PARAM_get_count(void)

{
  int iVar1;
  
  if (DAT_1553e2ae0 != 0) {
    iVar1 = OPENSSL_sk_num();
    return iVar1 + 5;
  }
  return 5;
}

// X509_VERIFY_PARAM_get_depth @ 14f6cc600

undefined4 X509_VERIFY_PARAM_get_depth(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}

// X509_VERIFY_PARAM_inherit @ 14f6cc650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_VERIFY_PARAM_inherit(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar4 = *(uint *)(param_2 + 0x10) | *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((uVar4 & 8) != 0) {
    return 1;
  }
  uVar6 = uVar4 & 1;
  uVar5 = uVar4 & 2;
  if ((((((((((uVar5 != 0) ||
             ((*(int *)(param_2 + 0x18) != 0 && ((uVar6 != 0 || (*(int *)(param_1 + 0x18) == 0))))))
            && (*(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18), uVar5 != 0)) ||
           ((*(int *)(param_2 + 0x1c) != 0 && ((uVar6 != 0 || (*(int *)(param_1 + 0x1c) == 0))))))
          && (*(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c), uVar5 != 0)) ||
         ((*(int *)(param_2 + 0x20) != -1 && ((uVar6 != 0 || (*(int *)(param_1 + 0x20) == -1))))))
        && (*(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20), uVar5 != 0)) ||
       ((*(int *)(param_2 + 0x24) != -1 && ((uVar6 != 0 || (*(int *)(param_1 + 0x24) == -1)))))) &&
      (*(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24), uVar5 != 0)) ||
     ((*(byte *)(param_1 + 0x14) & 2) == 0)) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffd;
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  if ((uVar4 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | *(uint *)(param_2 + 0x14);
  if ((uVar5 == 0) &&
     ((*(longlong *)(param_2 + 0x28) == 0 || ((uVar6 == 0 && (*(longlong *)(param_1 + 0x28) != 0))))
     )) {
LAB_14f6cc762:
    if ((*(int *)(param_2 + 0x38) != 0) && ((uVar6 != 0 || (*(int *)(param_1 + 0x38) == 0))))
    goto LAB_14f6cc771;
LAB_14f6cc77b:
    if ((*(longlong *)(param_2 + 0x30) != 0) &&
       ((uVar6 != 0 || (*(longlong *)(param_1 + 0x30) == 0)))) goto LAB_14f6cc78d;
LAB_14f6cc7ce:
    if ((*(longlong *)(param_2 + 0x48) != 0) &&
       ((uVar6 != 0 || (*(longlong *)(param_1 + 0x48) == 0)))) goto LAB_14f6cc7e0;
  }
  else {
    iVar2 = X509_VERIFY_PARAM_set1_policies(param_1,*(undefined8 *)(param_2 + 0x28));
    if (iVar2 == 0) {
      return 0;
    }
    if (uVar5 == 0) goto LAB_14f6cc762;
LAB_14f6cc771:
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    if (uVar5 == 0) goto LAB_14f6cc77b;
LAB_14f6cc78d:
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x30),FUN_14f6cd280);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar3 = OPENSSL_sk_deep_copy(*(longlong *)(param_2 + 0x30),FUN_14f6cd250,FUN_14f6cd280);
      *(longlong *)(param_1 + 0x30) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (uVar5 == 0) goto LAB_14f6cc7ce;
LAB_14f6cc7e0:
    iVar2 = FUN_14f6ccdc0(param_1 + 0x48,param_1 + 0x50,*(undefined8 *)(param_2 + 0x48),
                          *(undefined8 *)(param_2 + 0x50));
    if (iVar2 == 0) {
      return 0;
    }
    if (uVar5 != 0) goto LAB_14f6cc80f;
  }
  if (*(longlong *)(param_2 + 0x58) == 0) {
    return 1;
  }
  if ((uVar6 == 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
LAB_14f6cc80f:
  iVar2 = X509_VERIFY_PARAM_set1_ip
                    (param_1,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60));
  if (iVar2 != 0) {
    return 1;
  }
  return 0;
}

// X509_VERIFY_PARAM_lookup @ 14f6cc850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_lookup(undefined8 param_1)

{
  int iVar1;
  undefined8 local_78 [14];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6cc85a;
  local_78[0] = param_1;
  if (DAT_1553e2ae0 != 0) {
    iVar1 = OPENSSL_sk_find(DAT_1553e2ae0,local_78);
    if (-1 < iVar1) {
      OPENSSL_sk_value(DAT_1553e2ae0,iVar1);
      return;
    }
  }
  OBJ_bsearch_(local_78,&PTR_s_default_1534a6250,5,0x68,&LAB_14f6cd2e0);
  return;
}

// X509_VERIFY_PARAM_move_peername @ 14f6cc8d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_move_peername(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x40) != lVar1) {
    CRYPTO_free(*(longlong *)(param_1 + 0x40),"crypto\\x509\\x509_vpm.c",0x1a1);
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return;
}

// X509_VERIFY_PARAM_new @ 14f6cc940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_VERIFY_PARAM_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x68,"crypto\\x509\\x509_vpm.c",0x56);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x9f,0x41,"crypto\\x509\\x509_vpm.c",0x58);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xffffffffffffffff;
  return lVar1;
}

// X509_VERIFY_PARAM_set1 @ 14f6cc9b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_set1(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 | 1;
  X509_VERIFY_PARAM_inherit();
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}

// X509_VERIFY_PARAM_set1_email @ 14f6cc9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_set1_email(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14f6ccdc0(param_1 + 0x48,param_1 + 0x50,param_2,param_3);
  return;
}

// X509_VERIFY_PARAM_set1_host @ 14f6cca20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_set1_host(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14f6cce80(param_1,0,param_2,param_3);
  return;
}

// X509_VERIFY_PARAM_set1_ip @ 14f6cca50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_VERIFY_PARAM_set1_ip(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (((param_3 & 0xffffffffffffffeb) == 0) && (param_3 != 0x14)) {
    uVar1 = FUN_14f6ccdc0(param_1 + 0x58,param_1 + 0x60,param_2,param_3);
    return uVar1;
  }
  return 0;
}

// X509_VERIFY_PARAM_set1_ip_asc @ 14f6ccaa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 X509_VERIFY_PARAM_set1_ip_asc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  iVar1 = a2i_ipadd(local_38);
  lVar4 = (longlong)iVar1;
  if ((iVar1 == 0) || ((lVar4 != 4 && (lVar4 != 0x10)))) {
    uVar3 = 0;
  }
  else {
    lVar2 = CRYPTO_memdup(local_38,lVar4,"crypto\\x509\\x509_vpm.c",0xf7);
    uVar3 = 0;
    if (lVar2 != 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x58),"crypto\\x509\\x509_vpm.c",0xfe);
      *(longlong *)(param_1 + 0x58) = lVar2;
      if ((longlong *)(param_1 + 0x60) != (longlong *)0x0) {
        *(longlong *)(param_1 + 0x60) = lVar4;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

// X509_VERIFY_PARAM_set1_name @ 14f6ccb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_VERIFY_PARAM_set1_name(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  CRYPTO_free(*param_1,"crypto\\x509\\x509_vpm.c",0x107);
  lVar1 = CRYPTO_strdup(param_2,"crypto\\x509\\x509_vpm.c",0x108);
  *param_1 = lVar1;
  return lVar1 != 0;
}

// X509_VERIFY_PARAM_set1_policies @ 14f6ccbd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_VERIFY_PARAM_set1_policies(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x28),ASN1_OBJECT_free);
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    return 1;
  }
  lVar2 = OPENSSL_sk_new_null();
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_2,iVar4);
      lVar2 = OBJ_dup(uVar3);
      if (lVar2 == 0) {
        return 0;
      }
      iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x28),lVar2);
      if (iVar1 == 0) {
        ASN1_OBJECT_free(lVar2);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar4 < iVar1);
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80;
  return 1;
}

// X509_VERIFY_PARAM_set_auth_level @ 14f6cccd0

void X509_VERIFY_PARAM_set_auth_level(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

// X509_VERIFY_PARAM_set_depth @ 14f6ccce0

void X509_VERIFY_PARAM_set_depth(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

// X509_VERIFY_PARAM_set_flags @ 14f6cccf0

undefined8 X509_VERIFY_PARAM_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  if ((param_2 & 0x780) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80;
  }
  return 1;
}

// X509_VERIFY_PARAM_set_hostflags @ 14f6ccd10

void X509_VERIFY_PARAM_set_hostflags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}

// X509_VERIFY_PARAM_set_purpose @ 14f6ccd30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_set_purpose(longlong param_1)

{
  X509_PURPOSE_set(param_1 + 0x18);
  return;
}

// X509_VERIFY_PARAM_set_time @ 14f6ccd50

void X509_VERIFY_PARAM_set_time(longlong param_1,undefined8 param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}

// X509_VERIFY_PARAM_set_trust @ 14f6ccd60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_set_trust(longlong param_1)

{
  X509_TRUST_set(param_1 + 0x1c);
  return;
}

// X509_VERIFY_PARAM_table_cleanup @ 14f6ccd80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_VERIFY_PARAM_table_cleanup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_sk_pop_free(DAT_1553e2ae0,X509_VERIFY_PARAM_free,param_3,param_4,0x14f6ccd8a);
  DAT_1553e2ae0 = 0;
  return;
}

// FUN_14f6ccdc0 @ 14f6ccdc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ccdc0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 == 0) {
    param_4 = 0;
    lVar1 = param_4;
  }
  else {
    if (param_4 == 0) {
      param_4 = -1;
      do {
        param_4 = param_4 + 1;
      } while (*(char *)(param_3 + param_4) != '\0');
    }
    lVar1 = CRYPTO_memdup(param_3,param_4,"crypto\\x509\\x509_vpm.c",0xf7);
    if (lVar1 == 0) {
      return 0;
    }
  }
  CRYPTO_free(*param_1,"crypto\\x509\\x509_vpm.c",0xfe);
  *param_1 = lVar1;
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_4;
  }
  return 1;
}

// FUN_14f6cce80 @ 14f6cce80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6cce80(longlong param_1,int param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t _MaxCount;
  
  if (param_4 == 0) {
    if (param_3 == (void *)0x0) goto LAB_14f6ccefb;
    param_4 = 0xffffffffffffffff;
    do {
      param_4 = param_4 + 1;
    } while (*(char *)((longlong)param_3 + param_4) != '\0');
LAB_14f6cceea:
    if ((param_4 != 0) && (*(char *)((longlong)param_3 + (param_4 - 1)) == '\0')) {
      param_4 = param_4 - 1;
    }
LAB_14f6ccefd:
    if (param_2 == 0) {
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x30),FUN_14f6cd280);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if ((param_3 != (void *)0x0) && (param_4 != 0)) {
      lVar3 = CRYPTO_strndup(param_3,param_4,"crypto\\x509\\x509_vpm.c",0x3b);
      if (lVar3 == 0) goto LAB_14f6ccece;
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = OPENSSL_sk_new_null();
        *(longlong *)(param_1 + 0x30) = lVar4;
        if (lVar4 == 0) {
          CRYPTO_free(lVar3,"crypto\\x509\\x509_vpm.c",0x41);
          return 0;
        }
      }
      iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x30),lVar3);
      if (iVar1 == 0) {
        CRYPTO_free(lVar3,"crypto\\x509\\x509_vpm.c",0x46);
        iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x30));
        if (iVar1 == 0) {
          OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        return 0;
      }
    }
    uVar5 = 1;
  }
  else {
    if (param_3 == (void *)0x0) {
LAB_14f6ccefb:
      param_4 = 0;
      goto LAB_14f6ccefd;
    }
    _MaxCount = param_4 - 1;
    if (param_4 < 2) {
      _MaxCount = param_4;
    }
    pvVar2 = memchr(param_3,0,_MaxCount);
    if (pvVar2 == (void *)0x0) goto LAB_14f6cceea;
LAB_14f6ccece:
    uVar5 = 0;
  }
  return uVar5;
}

// FUN_14f6cd010 @ 14f6cd010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd010(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6cd030 @ 14f6cd030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd030(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6cd050 @ 14f6cd050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd050(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6cd070 @ 14f6cd070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd070(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6cd090 @ 14f6cd090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd090(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6cd0b0 @ 14f6cd0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd0b0(void)

{
  OPENSSL_sk_deep_copy();
  return;
}

// FUN_14f6cd0d0 @ 14f6cd0d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd0d0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6cd0f0 @ 14f6cd0f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd0f0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6cd110 @ 14f6cd110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd110(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6cd130 @ 14f6cd130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd130(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6cd150 @ 14f6cd150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd150(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6cd170 @ 14f6cd170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd170(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f6cd190 @ 14f6cd190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd190(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6cd1b0 @ 14f6cd1b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd1b0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f6cd1d0 @ 14f6cd1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd1d0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6cd1f0 @ 14f6cd1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd1f0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6cd210 @ 14f6cd210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd210(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6cd230 @ 14f6cd230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd230(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6cd250 @ 14f6cd250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd250(undefined8 param_1)

{
  CRYPTO_strdup(param_1,"crypto\\x509\\x509_vpm.c",0x1c);
  return;
}

// FUN_14f6cd280 @ 14f6cd280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cd280(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\x509\\x509_vpm.c",0x21);
  return;
}

