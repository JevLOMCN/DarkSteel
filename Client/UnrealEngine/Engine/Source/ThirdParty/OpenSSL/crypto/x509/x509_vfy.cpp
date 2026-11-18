// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 108

// X509_CRL_diff @ 14f6aa1d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_CRL_diff(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong local_res8;
  
  if ((*(longlong *)(param_1 + 0xa0) != 0) || (*(longlong *)(param_2 + 0xa0) != 0)) {
    ERR_put_error(0xb,0x69,0x7f,"crypto\\x509\\x509_vfy.c",0x7c9);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x98) == 0) || (*(longlong *)(param_2 + 0x98) == 0)) {
    ERR_put_error(0xb,0x69,0x82,"crypto\\x509\\x509_vfy.c",0x7ce);
    return 0;
  }
  uVar2 = X509_CRL_get_issuer(param_2);
  uVar3 = X509_CRL_get_issuer(param_1);
  iVar1 = X509_NAME_cmp(uVar3,uVar2);
  if (iVar1 != 0) {
    ERR_put_error(0xb,0x69,0x81,"crypto\\x509\\x509_vfy.c",0x7d3);
    return 0;
  }
  iVar1 = FUN_14f6adfc0(param_1,param_2,0x5a);
  if (iVar1 == 0) {
    ERR_put_error(0xb,0x69,0x6e,"crypto\\x509\\x509_vfy.c",0x7d8);
    return 0;
  }
  iVar1 = FUN_14f6adfc0(param_1,param_2,0x302);
  if (iVar1 == 0) {
    ERR_put_error(0xb,0x69,0x80,"crypto\\x509\\x509_vfy.c",0x7dc);
    return 0;
  }
  iVar1 = ASN1_INTEGER_cmp(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_1 + 0x98));
  if (iVar1 < 1) {
    ERR_put_error(0xb,0x69,0x84,"crypto\\x509\\x509_vfy.c",0x7e1);
    return 0;
  }
  if ((param_3 != 0) &&
     ((iVar1 = X509_CRL_verify(param_1,param_3), iVar1 < 1 ||
      (iVar1 = X509_CRL_verify(param_2,param_3), iVar1 < 1)))) {
    ERR_put_error(0xb,0x69,0x83,"crypto\\x509\\x509_vfy.c",0x7e7);
    return 0;
  }
  lVar4 = X509_CRL_new();
  if ((lVar4 != 0) && (iVar1 = X509_CRL_set_version(lVar4,1), iVar1 != 0)) {
    uVar2 = X509_CRL_get_issuer(param_2);
    iVar1 = X509_CRL_set_issuer_name(lVar4,uVar2);
    if (iVar1 != 0) {
      uVar2 = X509_CRL_get0_lastUpdate(param_2);
      iVar1 = X509_CRL_set1_lastUpdate(lVar4,uVar2);
      if (iVar1 != 0) {
        uVar2 = X509_CRL_get0_nextUpdate(param_2);
        iVar1 = X509_CRL_set1_nextUpdate(lVar4,uVar2);
        if (iVar1 != 0) {
          iVar5 = 0;
          iVar1 = X509_CRL_add1_ext_i2d(lVar4,0x8c,*(undefined8 *)(param_1 + 0x98),1,0);
          if (iVar1 != 0) {
            iVar6 = 0;
            iVar1 = X509_CRL_get_ext_count(param_2);
            if (0 < iVar1) {
              do {
                uVar2 = X509_CRL_get_ext(param_2,iVar6);
                iVar1 = X509_CRL_add_ext(lVar4,uVar2,0xffffffff);
                if (iVar1 == 0) goto LAB_14f6aa544;
                iVar6 = iVar6 + 1;
                iVar1 = X509_CRL_get_ext_count(param_2);
              } while (iVar6 < iVar1);
            }
            uVar2 = X509_CRL_get_REVOKED(param_2);
            iVar1 = OPENSSL_sk_num(uVar2);
            if (0 < iVar1) {
              do {
                uVar3 = OPENSSL_sk_value(uVar2,iVar5);
                iVar1 = X509_CRL_get0_by_serial(param_1,&local_res8,uVar3);
                if (iVar1 == 0) {
                  local_res8 = X509_REVOKED_dup(uVar3);
                  if (local_res8 == 0) goto LAB_14f6aa544;
                  iVar1 = X509_CRL_add0_revoked(lVar4,local_res8);
                  if (iVar1 == 0) {
                    X509_REVOKED_free(local_res8);
                    goto LAB_14f6aa544;
                  }
                }
                iVar5 = iVar5 + 1;
                iVar1 = OPENSSL_sk_num(uVar2);
              } while (iVar5 < iVar1);
            }
            if (param_3 == 0) {
              return lVar4;
            }
            if (param_4 == 0) {
              return lVar4;
            }
            iVar1 = X509_CRL_sign(lVar4,param_3,param_4);
            if (iVar1 != 0) {
              return lVar4;
            }
          }
        }
      }
    }
  }
LAB_14f6aa544:
  ERR_put_error(0xb,0x69,0x41,"crypto\\x509\\x509_vfy.c",0x825);
  X509_CRL_free(lVar4);
  return 0;
}

// X509_STORE_CTX_cleanup @ 14f6aa5e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_cleanup(longlong param_1)

{
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      X509_VERIFY_PARAM_free();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  X509_policy_tree_free(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x98),X509_free);
  *(undefined8 *)(param_1 + 0x98) = 0;
  CRYPTO_free_ex_data(5,param_1,param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}

// X509_STORE_CTX_free @ 14f6aa690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_free(longlong param_1)

{
  if (param_1 != 0) {
    X509_STORE_CTX_cleanup();
    CRYPTO_free(param_1,"crypto\\x509\\x509_vfy.c",0x8da);
  }
  return;
}

// X509_STORE_CTX_get0_chain @ 14f6aa6e0

undefined8 X509_STORE_CTX_get0_chain(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}

// X509_STORE_CTX_get0_param @ 14f6aa710

undefined8 X509_STORE_CTX_get0_param(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

// X509_STORE_CTX_get1_chain @ 14f6aa750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_CTX_get1_chain(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    return 0;
  }
  uVar1 = X509_chain_up_ref();
  return uVar1;
}

// X509_STORE_CTX_get_current_cert @ 14f6aa7e0

undefined8 X509_STORE_CTX_get_current_cert(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}

// X509_STORE_CTX_get_error @ 14f6aa7f0

undefined4 X509_STORE_CTX_get_error(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}

// X509_STORE_CTX_get_error_depth @ 14f6aa800

undefined4 X509_STORE_CTX_get_error_depth(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}

// X509_STORE_CTX_get_ex_data @ 14f6aa810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0xe0);
  return;
}

// X509_STORE_CTX_init @ 14f6aa8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_CTX_init(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6aa8d5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[0x12] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  if (param_2 == 0) {
    param_1[0x11] = 0;
LAB_14f6aa970:
    pcVar2 = FUN_14f6ad150;
  }
  else {
    param_1[0x11] = *(longlong *)(param_2 + 0x78);
    pcVar2 = *(code **)(param_2 + 0x38);
    if (pcVar2 == (code *)0x0) goto LAB_14f6aa970;
  }
  param_1[9] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x30), pcVar2 == (code *)0x0)) {
    pcVar2 = X509_STORE_CTX_get1_issuer;
  }
  param_1[8] = (longlong)pcVar2;
  if ((param_2 == 0) || (puVar3 = *(undefined1 **)(param_2 + 0x28), puVar3 == (undefined1 *)0x0)) {
    puVar3 = &LAB_14f6af5b0;
  }
  param_1[7] = (longlong)puVar3;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x20), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_14f6af100;
  }
  param_1[6] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x40), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_14f6ad830;
  }
  param_1[10] = (longlong)pcVar2;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x48) == 0)) {
    param_1[0xb] = 0;
  }
  else {
    param_1[0xb] = *(longlong *)(param_2 + 0x48);
  }
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x50), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_14f6ac650;
  }
  param_1[0xc] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x58), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_14f6abeb0;
  }
  param_1[0xd] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x60), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_14f6ad530;
  }
  param_1[0xe] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x68), pcVar2 == (code *)0x0)) {
    pcVar2 = X509_STORE_CTX_get1_certs;
  }
  param_1[0xf] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x70), pcVar2 == (code *)0x0)) {
    pcVar2 = X509_STORE_CTX_get1_crls;
  }
  param_1[0x10] = (longlong)pcVar2;
  lVar4 = X509_VERIFY_PARAM_new();
  param_1[4] = lVar4;
  if (lVar4 == 0) {
    uVar6 = 0x938;
    goto LAB_14f6aab35;
  }
  if (param_2 == 0) {
    *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 0x11;
LAB_14f6aaaad:
    uVar5 = X509_VERIFY_PARAM_lookup("default");
    iVar1 = X509_VERIFY_PARAM_inherit(param_1[4],uVar5);
    if (iVar1 != 0) {
      if (*(int *)(param_1[4] + 0x1c) == 0) {
        uVar6 = X509_PURPOSE_get_by_id(*(undefined4 *)(param_1[4] + 0x18));
        lVar4 = X509_PURPOSE_get0(uVar6);
        if (lVar4 != 0) {
          uVar6 = X509_PURPOSE_get_trust(lVar4);
          *(undefined4 *)(param_1[4] + 0x1c) = uVar6;
        }
      }
      iVar1 = CRYPTO_new_ex_data(5,param_1,param_1 + 0x1c);
      if (iVar1 != 0) {
        return 1;
      }
      uVar6 = 0x95c;
      goto LAB_14f6aab35;
    }
  }
  else {
    iVar1 = X509_VERIFY_PARAM_inherit(lVar4,*(undefined8 *)(param_2 + 0x18));
    if (iVar1 != 0) goto LAB_14f6aaaad;
  }
  uVar6 = 0x949;
LAB_14f6aab35:
  ERR_put_error(0xb,0x8f,0x41,"crypto\\x509\\x509_vfy.c",uVar6,uVar7);
  X509_STORE_CTX_cleanup(param_1);
  return 0;
}

// X509_STORE_CTX_new @ 14f6aab70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_STORE_CTX_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0xf8,"crypto\\x509\\x509_vfy.c",0x8cb);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x8e,0x41,"crypto\\x509\\x509_vfy.c",0x8ce);
    lVar1 = 0;
  }
  return lVar1;
}

// X509_STORE_CTX_purpose_inherit @ 14f6aabd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_CTX_purpose_inherit(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6aabea;
  iVar3 = param_2;
  if ((param_3 != 0) && (iVar3 = param_3, param_2 == 0)) {
    param_2 = param_3;
  }
  if (iVar3 == 0) {
LAB_14f6aac6e:
    if (param_4 != 0) {
LAB_14f6aac72:
      iVar1 = X509_TRUST_get_by_id(param_4);
      if (iVar1 == -1) {
        uVar5 = 0x8bd;
        uVar4 = 0x78;
        goto LAB_14f6aac25;
      }
    }
    if ((iVar3 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x18) == 0)) {
      *(int *)(*(longlong *)(param_1 + 0x20) + 0x18) = iVar3;
    }
    if ((param_4 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) == 0)) {
      *(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) = param_4;
    }
    uVar6 = 1;
  }
  else {
    iVar1 = X509_PURPOSE_get_by_id(iVar3);
    if (iVar1 != -1) {
      lVar2 = X509_PURPOSE_get0(iVar1);
      if (*(int *)(lVar2 + 4) == 0) {
        iVar1 = X509_PURPOSE_get_by_id(param_2);
        if (iVar1 == -1) {
          uVar5 = 0x8b0;
          goto LAB_14f6aac1f;
        }
        lVar2 = X509_PURPOSE_get0(iVar1);
      }
      if (param_4 == 0) {
        param_4 = *(int *)(lVar2 + 4);
        goto LAB_14f6aac6e;
      }
      goto LAB_14f6aac72;
    }
    uVar5 = 0x8a8;
LAB_14f6aac1f:
    uVar4 = 0x79;
LAB_14f6aac25:
    ERR_put_error(0xb,0x86,uVar4,"crypto\\x509\\x509_vfy.c",uVar5,uVar6);
    uVar6 = 0;
  }
  return uVar6;
}

// X509_STORE_CTX_set0_dane @ 14f6aace0

void X509_STORE_CTX_set0_dane(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  return;
}

// X509_STORE_CTX_set0_param @ 14f6aacf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set0_param(longlong param_1,undefined8 param_2)

{
  X509_VERIFY_PARAM_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}

// X509_STORE_CTX_set0_verified_chain @ 14f6aad70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set0_verified_chain(longlong param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x98),X509_free);
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}

// X509_STORE_CTX_set_default @ 14f6aade0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_default(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = X509_VERIFY_PARAM_lookup(param_2);
  if (lVar1 == 0) {
    return;
  }
  X509_VERIFY_PARAM_inherit(*(undefined8 *)(param_1 + 0x20),lVar1);
  return;
}

// X509_STORE_CTX_set_depth @ 14f6aae20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_depth(longlong param_1)

{
  X509_VERIFY_PARAM_set_depth(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_STORE_CTX_set_error @ 14f6aae40

void X509_STORE_CTX_set_error(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}

// X509_STORE_CTX_set_ex_data @ 14f6aae60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0xe0);
  return;
}

// X509_STORE_CTX_set_flags @ 14f6aae90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_flags(longlong param_1)

{
  X509_VERIFY_PARAM_set_flags(*(undefined8 *)(param_1 + 0x20));
  return;
}

// X509_STORE_CTX_set_purpose @ 14f6aaeb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_purpose(undefined8 param_1,undefined4 param_2)

{
  X509_STORE_CTX_purpose_inherit(param_1,0,param_2,0);
  return;
}

// X509_STORE_CTX_set_time @ 14f6aaee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_time(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  X509_VERIFY_PARAM_set_time(*(undefined8 *)(param_1 + 0x20),param_3);
  return;
}

// X509_STORE_CTX_set_trust @ 14f6aaf10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_trust(undefined8 param_1,undefined4 param_2)

{
  X509_STORE_CTX_purpose_inherit(param_1,0,0,param_2);
  return;
}

// X509_STORE_CTX_set_verify_cb @ 14f6aaf50

void X509_STORE_CTX_set_verify_cb(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}

// X509_cmp_current_time @ 14f6aaf60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_cmp_current_time(undefined8 param_1)

{
  X509_cmp_time(param_1,0);
  return;
}

// X509_cmp_time @ 14f6aaf80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_cmp_time(int *param_1,__time64_t *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res8 [4];
  int local_res18 [2];
  __time64_t local_res20;
  
  uVar3 = 0;
  if (param_1[1] == 0x17) {
    iVar1 = *param_1;
    if (iVar1 != 0xd) {
      return 0;
    }
  }
  else {
    if (param_1[1] != 0x18) {
      return 0;
    }
    iVar1 = *param_1;
    if (iVar1 != 0xf) {
      return 0;
    }
  }
  uVar4 = uVar3;
  uVar6 = uVar3;
  if (0 < iVar1 + -1) {
    do {
      iVar1 = ascii_isdigit(*(undefined1 *)(*(longlong *)(param_1 + 2) + uVar4));
      if (iVar1 == 0) goto LAB_14f6ab00f;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *param_1 + -1);
  }
  if (*(char *)((longlong)(*param_1 + -1) + *(longlong *)(param_1 + 2)) == 'Z') {
    if (param_2 == (__time64_t *)0x0) {
      _time64(&local_res20);
    }
    else {
      local_res20 = *param_2;
    }
    lVar2 = ASN1_TIME_adj(0,local_res20,0,0);
    if ((lVar2 != 0) && (iVar1 = ASN1_TIME_diff(local_res8,local_res18,param_1,lVar2), iVar1 != 0))
    {
      if ((local_res8[0] < 0) || (local_res18[0] < 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    ASN1_TIME_free(lVar2);
  }
  else {
LAB_14f6ab00f:
    uVar3 = 0;
  }
  return uVar3;
}

// X509_get_pubkey_parameters @ 14f6ab0a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get_pubkey_parameters(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6ab0b0;
  if ((param_1 != 0) && (iVar1 = EVP_PKEY_missing_parameters(), iVar1 == 0)) {
    return 1;
  }
  iVar1 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 < 1) {
    ERR_put_error(0xb,0x6e,0x6b,"crypto\\x509\\x509_vfy.c",0x7b0,uVar4);
    return 0;
  }
  do {
    uVar4 = OPENSSL_sk_value(param_2,iVar1);
    lVar3 = X509_get0_pubkey(uVar4);
    if (lVar3 == 0) {
      ERR_put_error(0xb,0x6e,0x6c,"crypto\\x509\\x509_vfy.c",0x7a8);
      return 0;
    }
    iVar2 = EVP_PKEY_missing_parameters(lVar3);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
    iVar2 = OPENSSL_sk_num(param_2);
  } while (iVar1 < iVar2);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar4 = OPENSSL_sk_value(param_2,iVar1);
    uVar4 = X509_get0_pubkey(uVar4);
    EVP_PKEY_copy_parameters(uVar4,lVar3);
  }
  if (param_1 != 0) {
    EVP_PKEY_copy_parameters(param_1,lVar3);
  }
  return 1;
}

// X509_gmtime_adj @ 14f6ab1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_gmtime_adj(longlong param_1,undefined4 param_2)

{
  __time64_t local_res8;
  
  _time64(&local_res8);
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) == 0)) {
    if (*(int *)(param_1 + 4) == 0x17) {
      ASN1_UTCTIME_adj(param_1,local_res8,0,param_2);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x18) {
      ASN1_GENERALIZEDTIME_adj(param_1,local_res8,0,param_2);
      return;
    }
  }
  ASN1_TIME_adj(param_1,local_res8,0,param_2);
  return;
}

// X509_time_adj @ 14f6ab280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_time_adj(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  X509_time_adj_ex(param_1,0,param_2,param_3);
  return;
}

// X509_time_adj_ex @ 14f6ab2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_time_adj_ex(longlong param_1,undefined4 param_2,undefined4 param_3,__time64_t *param_4)

{
  __time64_t local_res8;
  
  if (param_4 == (__time64_t *)0x0) {
    _time64(&local_res8);
  }
  else {
    local_res8 = *param_4;
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) == 0)) {
    if (*(int *)(param_1 + 4) == 0x17) {
      ASN1_UTCTIME_adj(param_1,local_res8,param_2,param_3);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x18) {
      ASN1_GENERALIZEDTIME_adj(param_1,local_res8,param_2,param_3);
      return;
    }
  }
  ASN1_TIME_adj(param_1,local_res8,param_2,param_3);
  return;
}

// X509_verify_cert @ 14f6ab370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_verify_cert(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6ab380;
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 8) == 0) {
    ERR_put_error(0xb,0x7f,0x69,"crypto\\x509\\x509_vfy.c",0x104,0x14f6ab380);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    ERR_put_error(0xb,0x7f,0x42,"crypto\\x509\\x509_vfy.c",0x10e,0x14f6ab380);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  iVar2 = X509_up_ref();
  if (iVar2 == 0) {
    ERR_put_error(0xb,0x7f,0x44,"crypto\\x509\\x509_vfy.c",0x114,uVar4);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0xffffffff;
  }
  lVar3 = OPENSSL_sk_new_null();
  *(longlong *)(param_1 + 0x98) = lVar3;
  if ((lVar3 != 0) && (iVar2 = OPENSSL_sk_push(lVar3,*(undefined8 *)(param_1 + 8)), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x94) = 1;
    iVar2 = FUN_14f6ad180(param_1,*(undefined8 *)(param_1 + 8));
    if (iVar2 == 0) {
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar3;
      *(undefined4 *)(param_1 + 0xb0) = 0x42;
      uVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    if ((lVar1 == 0) || (iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), iVar2 < 1)) {
      uVar4 = FUN_14f6af9e0(param_1);
    }
    else {
      uVar4 = FUN_14f6ae570(param_1);
    }
    if (0 < (int)uVar4) {
      return uVar4;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      return uVar4;
    }
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return uVar4;
  }
  X509_free(*(undefined8 *)(param_1 + 8));
  ERR_put_error(0xb,0x7f,0x41,"crypto\\x509\\x509_vfy.c",0x120,uVar4);
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
  return 0xffffffff;
}

// FUN_14f6ab570 @ 14f6ab570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6ab570(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      lVar2 = OPENSSL_sk_dup();
      *param_2 = lVar2;
      return lVar2 != 0;
    }
    iVar4 = 0;
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      do {
        uVar3 = OPENSSL_sk_value(param_1,iVar4);
        iVar1 = OPENSSL_sk_push(lVar2,uVar3);
        if (iVar1 == 0) {
          OPENSSL_sk_free(lVar2);
          *param_2 = 0;
          return false;
        }
        iVar4 = iVar4 + 1;
        iVar1 = OPENSSL_sk_num(param_1);
      } while (iVar4 < iVar1);
    }
  }
  return true;
}

// FUN_14f6ab630 @ 14f6ab630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ab630(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  uint local_res8;
  uint local_res10;
  undefined4 uVar14;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
  iVar3 = X509_check_purpose(lVar5,0xffffffff,0);
  uVar8 = 0;
  local_res8 = uVar8;
  if (iVar3 == 1) {
    local_res8 = *(uint *)(lVar5 + 0xd0) >> 0xd & 1;
  }
  iVar3 = 3;
  local_60 = 0;
  local_res10 = 0;
  if ((iVar2 != 1) || (*(int *)(param_1 + 0x94) != 1)) {
    ERR_put_error(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",0xb96);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  bVar13 = *(longlong *)(param_1 + 0x10) != 0;
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x28) & 3) == 0)) {
    local_58 = 0;
    local_50 = 0;
    if ((*(uint *)(lVar1 + 0x28) & 0xc) != 0) goto LAB_14f6ab72e;
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (uVar12 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14), (uVar12 >> 0xf & 1) != 0)) {
    bVar13 = bVar13 | 2;
    local_58 = 0;
  }
  else {
    local_58 = 0;
    if ((uVar12 >> 0x14 & 1) == 0) {
      local_58 = 1;
    }
  }
  local_50 = 1;
LAB_14f6ab72e:
  if (((lVar1 == 0) || (iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), iVar2 < 1)) ||
     (iVar2 = FUN_14f6ab570(*(undefined8 *)(lVar1 + 0x10),&local_60), iVar2 != 0)) {
    iVar2 = FUN_14f6ab570(*(undefined8 *)(param_1 + 0x10),&local_60);
    if (iVar2 != 0) {
      if (0x3fffffff < *(int *)(*(longlong *)(param_1 + 0x20) + 0x20)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0x3fffffff;
      }
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x20) + 1;
      uVar12 = local_res8;
      iVar2 = 3;
      if (bVar13 != 0) {
        while( true ) {
          iVar3 = iVar2;
          local_68 = 0;
          if ((bVar13 & 2) == 0) goto LAB_14f6aba02;
          uVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          uVar12 = uVar4;
          if ((bVar13 & 4) != 0) {
            uVar12 = uVar8;
          }
          uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar12 - 1);
          if ((int)uVar4 <= iVar9) break;
LAB_14f6ab99d:
          uVar12 = local_res8;
          if ((bVar13 & 1) == 0) {
            if (((bVar13 & 4) == 0) ||
               (local_res10 = uVar8 - 1, uVar8 = local_res10, (int)local_res10 < 1)) {
              if ((local_58 != 0) && (((bVar13 & 4) == 0 && (1 < *(int *)(param_1 + 0x94))))) {
                bVar13 = bVar13 | 4;
                local_res10 = *(int *)(param_1 + 0x94) - 1;
                local_res8 = 0;
                uVar12 = local_res8;
                uVar8 = local_res10;
                goto LAB_14f6aba02;
              }
              goto LAB_14f6abc32;
            }
          }
          else {
LAB_14f6aba02:
            uVar6 = local_60;
            if ((bVar13 & 1) != 0) {
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
              if (iVar2 != *(int *)(param_1 + 0x94)) {
                uVar14 = 0xc8c;
LAB_14f6abc09:
                ERR_put_error(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",uVar14);
                goto LAB_14f6abc22;
              }
              uVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2 + -1);
              uVar8 = local_res10;
              if (((uVar12 == 0) && (iVar2 <= iVar9)) &&
                 (local_68 = FUN_14f6ae6c0(param_1,uVar6,uVar7), local_68 != 0)) {
                OPENSSL_sk_delete_ptr(uVar6,local_68);
                iVar2 = X509_up_ref(local_68);
                if (iVar2 == 0) {
                  uVar14 = 0xca4;
                  goto LAB_14f6abc09;
                }
                iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),local_68);
                if (iVar2 == 0) {
                  X509_free(local_68);
                  uVar14 = 0xcad;
                  goto LAB_14f6abbae;
                }
                *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
                local_res8 = FUN_14f6abf80();
                iVar3 = FUN_14f6acc30(param_1,*(int *)(param_1 + 0x94) + -1);
                uVar12 = local_res8;
                if (iVar3 - 1U < 2) goto LAB_14f6abc32;
              }
              else {
                bVar10 = bVar13 & 0xfe;
                bVar13 = bVar10 | 2;
                if (local_50 == 0) {
                  bVar13 = bVar10;
                }
              }
            }
          }
LAB_14f6abb54:
          iVar2 = iVar3;
          if (bVar13 == 0) goto LAB_14f6abc32;
        }
        uVar7 = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x98) = 0;
        iVar2 = (**(code **)(param_1 + 0x40))(&local_68,param_1,uVar6);
        *(undefined8 *)(param_1 + 0x98) = uVar7;
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0xb0) = 0x46;
        }
        else {
          uVar8 = local_res10;
          if (iVar2 < 1) goto LAB_14f6ab99d;
          if ((bVar13 & 4) == 0) {
            if (local_res8 == 0) goto LAB_14f6ab930;
            if (uVar4 == *(uint *)(param_1 + 0x94)) {
              iVar2 = X509_cmp(uVar6,local_68);
              if (iVar2 != 0) {
                X509_free(local_68);
                goto LAB_14f6ab99d;
              }
              X509_free(uVar6);
              uVar4 = uVar4 - 1;
              *(uint *)(param_1 + 0x94) = uVar4;
              OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),uVar4,local_68);
            }
LAB_14f6abafd:
            if ((int)uVar4 < *(int *)(param_1 + 0x94)) {
              uVar14 = 0xc5f;
              goto LAB_14f6abc09;
            }
            bVar13 = bVar13 & 0xfe;
            iVar3 = FUN_14f6adb00(param_1,uVar4);
            if (1 < iVar3 - 1U) {
              uVar12 = local_res8;
              if (local_res8 != 0) goto LAB_14f6ab99d;
              goto LAB_14f6abb54;
            }
            goto LAB_14f6abc32;
          }
          if ((((int)uVar12 < (int)uVar4) && (0 < (int)uVar12)) && (local_res8 == 0)) {
            bVar13 = bVar13 & 0xfb;
            uVar11 = (ulonglong)(uVar4 - uVar12);
            uVar4 = uVar4 - (uVar4 - uVar12);
            do {
              uVar6 = OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
              X509_free(uVar6);
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            *(uint *)(param_1 + 0x94) = uVar4;
            if (lVar1 != 0) {
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
              if ((0 < iVar2) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar1 + 0x2c))) {
                *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
                X509_free(*(undefined8 *)(lVar1 + 0x20));
                *(undefined8 *)(lVar1 + 0x20) = 0;
              }
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
              if ((0 < iVar2) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar1 + 0x30))) {
                *(undefined4 *)(lVar1 + 0x30) = 0xffffffff;
              }
            }
LAB_14f6ab930:
            lVar5 = local_68;
            iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),local_68);
            if (iVar2 != 0) {
              local_res8 = FUN_14f6abf80(lVar5);
              goto LAB_14f6abafd;
            }
            X509_free(local_68);
            uVar14 = 0xc37;
LAB_14f6abbae:
            ERR_put_error(0xb,0x6a,0x41,"crypto\\x509\\x509_vfy.c",uVar14);
            *(undefined4 *)(param_1 + 0xb0) = 0x11;
            goto LAB_14f6abc2c;
          }
          ERR_put_error(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",0xc19);
          X509_free(local_68);
LAB_14f6abc22:
          *(undefined4 *)(param_1 + 0xb0) = 1;
        }
LAB_14f6abc2c:
        iVar3 = 2;
      }
LAB_14f6abc32:
      OPENSSL_sk_free(local_60);
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      if ((((iVar2 <= iVar9) && (iVar3 == 3)) &&
          ((lVar1 == 0 ||
           (((*(byte *)(lVar1 + 0x28) & 4) == 0 || (iVar3 = FUN_14f6accd0(param_1), iVar3 == 3))))))
         && (iVar2 == *(int *)(param_1 + 0x94))) {
        iVar3 = FUN_14f6adb00(param_1,iVar2);
      }
      if (iVar3 == 1) {
        return 1;
      }
      if (iVar3 == 2) {
        return 0;
      }
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      if (iVar2 <= iVar9) {
        if (((lVar1 != 0) && (iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), 0 < iVar3)) &&
           (((*(byte *)(lVar1 + 0x28) & 3) == 0 || (-1 < *(int *)(lVar1 + 0x30))))) {
          *(int *)(param_1 + 0xac) = iVar2 + -1;
          uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar6;
          *(undefined4 *)(param_1 + 0xb0) = 0x41;
                    /* WARNING: Could not recover jumptable at 0x00014f6abd57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          return uVar6;
        }
        if (local_res8 == 0) {
          *(int *)(param_1 + 0xac) = iVar2 + -1;
          if (*(int *)(param_1 + 0x94) < iVar2) {
            uVar6 = OPENSSL_sk_value();
            *(undefined8 *)(param_1 + 0xb8) = uVar6;
            *(undefined4 *)(param_1 + 0xb0) = 2;
                    /* WARNING: Could not recover jumptable at 0x00014f6abe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            return uVar6;
          }
          uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar6;
          *(undefined4 *)(param_1 + 0xb0) = 0x14;
                    /* WARNING: Could not recover jumptable at 0x00014f6abe4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          return uVar6;
        }
        iVar3 = OPENSSL_sk_num();
        *(int *)(param_1 + 0xac) = iVar2 + -1;
        if (iVar3 == 1) {
          uVar6 = OPENSSL_sk_value();
          *(undefined8 *)(param_1 + 0xb8) = uVar6;
          *(undefined4 *)(param_1 + 0xb0) = 0x12;
                    /* WARNING: Could not recover jumptable at 0x00014f6abdb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          return uVar6;
        }
        uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x13;
                    /* WARNING: Could not recover jumptable at 0x00014f6abde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar6;
      }
      *(int *)(param_1 + 0xac) = iVar2 + -1;
      uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0xb8) = uVar6;
      *(undefined4 *)(param_1 + 0xb0) = 0x16;
                    /* WARNING: Could not recover jumptable at 0x00014f6abcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar6;
    }
    uVar14 = 0xbc4;
  }
  else {
    uVar14 = 0xbb9;
  }
  ERR_put_error(0xb,0x6a,0x41,"crypto\\x509\\x509_vfy.c",uVar14);
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
  return 0;
}

// FUN_14f6abeb0 @ 14f6abeb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6abeb0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong local_res8;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
     ((*(uint *)(param_2 + 0x7c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = X509_CRL_get0_by_cert(param_2,&local_res8,param_3);
  if (iVar1 != 0) {
    if (*(int *)(local_res8 + 0x30) == 8) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f6abf80 @ 14f6abf80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6abf80(longlong param_1)

{
  int iVar1;
  
  iVar1 = X509_check_purpose(param_1,0xffffffff,0);
  if (iVar1 != 1) {
    return 0;
  }
  return *(uint *)(param_1 + 0xd0) >> 0xd & 1;
}

// FUN_14f6abfd0 @ 14f6abfd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6abfd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x24) < 1) {
    return 1;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
      if (0 < iVar6) {
        lVar5 = X509_get0_pubkey(lVar4);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
        if (0 < iVar3) {
          if (lVar5 != 0) {
            if (5 < iVar3) {
              iVar3 = 5;
            }
            iVar2 = EVP_PKEY_security_bits(lVar5);
            if (*(int *)(&DAT_153489de8 + (longlong)(iVar3 + -1) * 4) <= iVar2) goto LAB_14f6ac0ce;
          }
          *(int *)(param_1 + 0xac) = iVar6;
          lVar5 = lVar4;
          if (lVar4 == 0) {
            lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
          }
          *(longlong *)(param_1 + 0xb8) = lVar5;
          *(undefined4 *)(param_1 + 0xb0) = 0x43;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
LAB_14f6ac0ce:
      if ((iVar6 < iVar1 + -1) && (iVar3 = FUN_14f6ada60(param_1,lVar4), iVar3 == 0)) {
        *(int *)(param_1 + 0xac) = iVar6;
        if (lVar4 == 0) {
          lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
        }
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x44;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return 1;
}

// FUN_14f6ac160 @ 14f6ac160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6ac160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  longlong local_res10;
  
  lVar6 = 0;
  local_res8 = 0;
  local_res10 = 0;
  lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac),param_3,
                           param_4,0x14f6ac170);
  *(longlong *)(param_1 + 0xb8) = lVar4;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if ((*(uint *)(lVar4 + 0xd0) & 0x400) != 0) {
    return 1;
  }
  while( true ) {
    iVar1 = *(int *)(param_1 + 0xd4);
    if (*(code **)(param_1 + 0x58) == (code *)0x0) {
      iVar2 = FUN_14f6ae7f0(param_1,&local_res8,&local_res10,lVar4);
      lVar5 = local_res10;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x58))(param_1,&local_res8,lVar4);
      lVar5 = lVar6;
    }
    if (iVar2 == 0) break;
    *(undefined8 *)(param_1 + 200) = local_res8;
    iVar3 = (**(code **)(param_1 + 0x60))(param_1);
    iVar2 = 0;
    if (iVar3 == 0) goto LAB_14f6ac2bf;
    if (lVar5 == 0) {
LAB_14f6ac260:
      iVar2 = (**(code **)(param_1 + 0x68))(param_1,local_res8,lVar4);
      if (iVar2 == 0) goto LAB_14f6ac2bf;
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x60))(param_1,lVar5);
      iVar2 = 0;
      if ((iVar3 == 0) || (iVar2 = (**(code **)(param_1 + 0x68))(param_1,lVar5,lVar4), iVar2 == 0))
      goto LAB_14f6ac2bf;
      if (iVar2 != 2) goto LAB_14f6ac260;
    }
    X509_CRL_free(local_res8);
    X509_CRL_free(lVar5);
    local_res8 = 0;
    local_res10 = 0;
    lVar5 = lVar6;
    if (iVar1 == *(int *)(param_1 + 0xd4)) break;
    if (*(int *)(param_1 + 0xd4) == 0x807f) goto LAB_14f6ac2bf;
  }
  *(undefined4 *)(param_1 + 0xb0) = 3;
  iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
LAB_14f6ac2bf:
  X509_CRL_free(local_res8);
  X509_CRL_free(lVar5);
  *(undefined8 *)(param_1 + 200) = 0;
  return iVar2;
}

// FUN_14f6ac300 @ 14f6ac300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ac300(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_res8;
  
  iVar11 = 0;
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar4 = -1;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    local_res8 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) >> 6 & 1;
  }
  else {
    uVar10 = 0;
    local_res8 = 6;
  }
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      lVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9);
      if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
         ((*(uint *)(lVar6 + 0xd0) & 0x200) != 0)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x22;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((uVar10 == 0) && ((*(uint *)(lVar6 + 0xd0) & 0x400) != 0)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x28;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      uVar3 = X509_check_ca(lVar6);
      if (iVar4 == -1) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) == 0) || (uVar3 < 2))
        goto LAB_14f6ac475;
        *(undefined4 *)(param_1 + 0xb0) = 0x18;
LAB_14f6ac519:
        *(int *)(param_1 + 0xac) = iVar9;
        lVar8 = lVar6;
        if (lVar6 == 0) {
          lVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9);
        }
        *(longlong *)(param_1 + 0xb8) = lVar8;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        if (iVar4 == 0) {
          if (uVar3 == 0) goto LAB_14f6ac475;
          *(undefined4 *)(param_1 + 0xb0) = 0x25;
          goto LAB_14f6ac519;
        }
        if ((uVar3 == 0) ||
           (((iVar9 + 1 < iVar1 || ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0))
            && (uVar3 != 1)))) {
          *(undefined4 *)(param_1 + 0xb0) = 0x18;
          goto LAB_14f6ac519;
        }
LAB_14f6ac475:
        uVar3 = 1;
        if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0) && (1 < iVar1)) {
          lVar8 = X509_get0_pubkey(lVar6);
          if (lVar8 != 0) {
            iVar2 = EVP_PKEY_id(lVar8);
            if (iVar2 != 0x198) {
              uVar3 = 1;
              goto LAB_14f6ac4da;
            }
            uVar7 = EVP_PKEY_get0_EC_KEY(lVar8);
            uVar3 = EC_KEY_decoded_from_explicit_params(uVar7);
            if (-1 < (int)uVar3) {
              uVar3 = (uint)(uVar3 == 0);
            }
            if ((int)uVar3 < 0) goto LAB_14f6ac509;
            if (uVar3 == 0) {
              *(undefined4 *)(param_1 + 0xb0) = 0x4f;
              goto LAB_14f6ac519;
            }
            if (0 < (int)uVar3) goto LAB_14f6ac4da;
            goto LAB_14f6ac515;
          }
LAB_14f6ac509:
          *(undefined4 *)(param_1 + 0xb0) = 1;
          goto LAB_14f6ac519;
        }
LAB_14f6ac4da:
        if ((((*(byte *)(lVar6 + 0xd0) & 0x10) == 0) && (*(int *)(lVar6 + 200) != -1)) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0)) {
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          goto LAB_14f6ac519;
        }
LAB_14f6ac515:
        if (uVar3 == 0) goto LAB_14f6ac519;
      }
      if ((0 < local_res8) &&
         (iVar4 = FUN_14f6ad750(param_1,lVar6,local_res8,iVar9,iVar4), iVar4 == 0)) {
        return 0;
      }
      if (((1 < iVar9) && (*(int *)(lVar6 + 200) != -1)) && (*(int *)(lVar6 + 200) + iVar5 < iVar11)
         ) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x19;
        iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar4 == 0) {
          return 0;
        }
      }
      if ((0 < iVar9) && ((*(byte *)(lVar6 + 0xd0) & 0x20) == 0)) {
        iVar11 = iVar11 + 1;
      }
      if ((*(uint *)(lVar6 + 0xd0) & 0x400) == 0) {
        iVar4 = 1;
      }
      else {
        if (*(int *)(lVar6 + 0xcc) != -1) {
          if (*(int *)(lVar6 + 0xcc) < iVar5) {
            *(int *)(param_1 + 0xac) = iVar9;
            *(longlong *)(param_1 + 0xb8) = lVar6;
            *(undefined4 *)(param_1 + 0xb0) = 0x26;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) {
              return 0;
            }
          }
          iVar5 = *(int *)(lVar6 + 0xcc);
        }
        iVar5 = iVar5 + 1;
        iVar4 = 0;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  return 1;
}

// FUN_14f6ac650 @ 14f6ac650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ac650(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0xac);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    if (iVar3 < iVar2 + -1) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3 + 1);
    }
    else {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2 + -1);
      iVar3 = (**(code **)(param_1 + 0x48))(param_1,lVar4,lVar4);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x21;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    if (lVar4 == 0) {
      return 1;
    }
  }
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    if (((*(byte *)(lVar4 + 0xd0) & 2) != 0) && ((*(byte *)(lVar4 + 0xd4) & 2) == 0)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x23;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_1 + 0xd0) & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x2c;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (((*(byte *)(param_1 + 0xd0) & 8) == 0) &&
       (iVar3 = FUN_14f6ac980(param_1,*(undefined8 *)(param_1 + 0xc0)), iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x36;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_2 + 0x90) & 2) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  if ((*(byte *)(param_1 + 0xd0) & 0x40) != 0) goto LAB_14f6ac87a;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 >> 0x15 & 1) != 0) goto LAB_14f6ac87a;
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x20) + 8;
  }
  *(longlong *)(param_1 + 200) = param_2;
  uVar5 = X509_CRL_get0_lastUpdate(param_2);
  iVar3 = X509_cmp_time(uVar5,lVar7);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0xf;
    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  else if (0 < iVar3) {
    *(undefined4 *)(param_1 + 0xb0) = 0xb;
    iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  lVar6 = X509_CRL_get0_nextUpdate(param_2);
  if (lVar6 != 0) {
    uVar5 = X509_CRL_get0_nextUpdate(param_2);
    iVar3 = X509_cmp_time(uVar5,lVar7);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x10;
    }
    else {
      if ((-1 < iVar3) || ((*(byte *)(param_1 + 0xd0) & 2) != 0)) goto LAB_14f6ac86f;
      *(undefined4 *)(param_1 + 0xb0) = 0xc;
    }
    iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
LAB_14f6ac86f:
  *(undefined8 *)(param_1 + 200) = 0;
LAB_14f6ac87a:
  lVar4 = X509_get0_pubkey(lVar4);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 6;
  }
  else {
    iVar3 = X509_CRL_check_suiteb
                      (param_2,lVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar3 = X509_CRL_verify(param_2,lVar4);
    if (0 < iVar3) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xb0) = 8;
  }
  iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar3 != 0) {
    return 1;
  }
  return 0;
}

// FUN_14f6ac910 @ 14f6ac910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6ac910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = OPENSSL_sk_num(param_2);
  uVar2 = OPENSSL_sk_value(param_2,iVar1 + -1);
  iVar1 = OPENSSL_sk_num(param_3);
  uVar3 = OPENSSL_sk_value(param_3,iVar1 + -1);
  iVar1 = X509_cmp(uVar2,uVar3);
  return iVar1 == 0;
}

// FUN_14f6ac980 @ 14f6ac980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6ac980(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_70;
  undefined8 *local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6ac98c;
  if (param_1[0x1b] != 0) {
    return 0;
  }
  iVar1 = X509_STORE_CTX_init(local_108,*param_1,param_2,param_1[2]);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  local_f0 = param_1[3];
  uVar3 = param_1[4];
  X509_VERIFY_PARAM_free(local_e8);
  local_d0 = param_1[7];
  local_e8 = uVar3;
  local_30 = param_1;
  uVar2 = X509_verify_cert(local_108);
  if (0 < (int)uVar2) {
    uVar3 = param_1[0x13];
    iVar1 = OPENSSL_sk_num(uVar3);
    uVar3 = OPENSSL_sk_value(uVar3,iVar1 + -1);
    iVar1 = OPENSSL_sk_num(local_70);
    uVar4 = OPENSSL_sk_value(local_70,iVar1 + -1);
    iVar1 = X509_cmp(uVar3,uVar4);
    uVar2 = (uint)(iVar1 == 0);
  }
  X509_STORE_CTX_cleanup(local_108);
  return uVar2;
}

// FUN_14f6aca90 @ 14f6aca90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6aca90(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 >> 0x15 & 1) == 0) {
      lVar5 = 0;
      goto LAB_14f6acad3;
    }
LAB_14f6acb72:
    uVar3 = 1;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x20) + 8;
LAB_14f6acad3:
    if (param_3 != 0) {
      *(undefined8 *)(param_1 + 200) = param_2;
    }
    uVar3 = X509_CRL_get0_lastUpdate(param_2);
    iVar2 = X509_cmp_time(uVar3,lVar5);
    if (iVar2 == 0) {
      if (param_3 != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0xf;
LAB_14f6acb03:
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 != 0) goto LAB_14f6acb25;
      }
    }
    else if (iVar2 < 1) {
LAB_14f6acb25:
      lVar4 = X509_CRL_get0_nextUpdate(param_2);
      if (lVar4 == 0) {
LAB_14f6acb63:
        if (param_3 != 0) {
          *(undefined8 *)(param_1 + 200) = 0;
        }
        goto LAB_14f6acb72;
      }
      uVar3 = X509_CRL_get0_nextUpdate(param_2);
      iVar2 = X509_cmp_time(uVar3,lVar5);
      if (iVar2 == 0) {
        if (param_3 != 0) {
          *(undefined4 *)(param_1 + 0xb0) = 0x10;
LAB_14f6acb57:
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 != 0) goto LAB_14f6acb63;
        }
      }
      else {
        if ((-1 < iVar2) || ((*(byte *)(param_1 + 0xd0) & 2) != 0)) goto LAB_14f6acb63;
        if (param_3 != 0) {
          *(undefined4 *)(param_1 + 0xb0) = 0xc;
          goto LAB_14f6acb57;
        }
      }
    }
    else if (param_3 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0xb;
      goto LAB_14f6acb03;
    }
    uVar3 = 0;
  }
  return uVar3;
}

// FUN_14f6acbc0 @ 14f6acbc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6acbc0(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = X509_get0_pubkey();
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  iVar1 = EVP_PKEY_id(lVar3);
  if (iVar1 == 0x198) {
    uVar4 = EVP_PKEY_get0_EC_KEY(lVar3);
    uVar2 = EC_KEY_decoded_from_explicit_params(uVar4);
    if (-1 < (int)uVar2) {
      uVar2 = (uint)(uVar2 == 0);
    }
    return uVar2;
  }
  return 1;
}

// FUN_14f6acc30 @ 14f6acc30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6acc30(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0xe8) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 0x28) & 5) != 0)) && (param_2 != 0)) {
    lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
    if (lVar2 != 0) {
      iVar1 = FUN_14f6ae220(param_1,lVar2,param_2);
      if (iVar1 < 0) {
        return 2;
      }
      if (0 < iVar1) {
        *(int *)(param_1 + 0x94) = param_2 + -1;
        return 1;
      }
    }
  }
  return 3;
}

// FUN_14f6accd0 @ 14f6accd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6accd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  iVar7 = *(int *)(param_1 + 0x94) + -1;
  uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar7);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8));
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      pcVar5 = (char *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 8),iVar6);
      if ((((*pcVar5 == '\x02') && (pcVar5[1] == '\x01')) && (pcVar5[2] == '\0')) &&
         (iVar3 = X509_verify(uVar4,*(undefined8 *)(pcVar5 + 0x18)), 0 < iVar3)) {
        X509_free(*(undefined8 *)(lVar1 + 0x20));
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0xf0) = 1;
        *(int *)(lVar1 + 0x2c) = iVar7;
        *(char **)(lVar1 + 0x18) = pcVar5;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        if (*(int *)(param_1 + 0x94) < iVar2) {
          do {
            uVar4 = OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
            X509_free(uVar4);
            iVar2 = iVar2 + -1;
          } while (*(int *)(param_1 + 0x94) < iVar2);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return 3;
}

// FUN_14f6acdf0 @ 14f6acdf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6acdf0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (*(longlong *)(param_2 + 0x98) != 0)) {
    uVar2 = X509_CRL_get_issuer();
    uVar3 = X509_CRL_get_issuer(param_2);
    iVar1 = X509_NAME_cmp(uVar3,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_14f6adfc0(param_1,param_2,0x5a);
      if (iVar1 != 0) {
        iVar1 = FUN_14f6adfc0(param_1,param_2,0x302);
        if (iVar1 != 0) {
          iVar1 = ASN1_INTEGER_cmp(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0x98));
          if (iVar1 < 1) {
            iVar1 = ASN1_INTEGER_cmp(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_2 + 0x98)
                                    );
            return 0 < iVar1;
          }
        }
      }
    }
  }
  return false;
}

// FUN_14f6acec0 @ 14f6acec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6acec0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6acede;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 0x30));
  iVar4 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    CRYPTO_free(*(longlong *)(param_2 + 0x40),"crypto\\x509\\x509_vfy.c",0x2eb);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_2 + 0x30),iVar4);
      iVar2 = X509_check_host(param_1,uVar3,0,*(undefined4 *)(param_2 + 0x38),
                              (undefined8 *)(param_2 + 0x40),uVar5);
      if (0 < iVar2) {
        return true;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar1 == 0;
}

// FUN_14f6acf80 @ 14f6acf80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6acf80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if ((*(longlong *)(lVar4 + 0x30) != 0) && (iVar2 = FUN_14f6acec0(uVar1,lVar4), iVar2 < 1)) {
    lVar3 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar3;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((*(longlong *)(lVar4 + 0x48) != 0) &&
     (iVar2 = X509_check_email(uVar1,*(longlong *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50),0),
     iVar2 < 1)) {
    lVar3 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar3;
    *(undefined4 *)(param_1 + 0xb0) = 0x3f;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((*(longlong *)(lVar4 + 0x58) != 0) &&
     (iVar2 = X509_check_ip(uVar1,*(longlong *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x60),0),
     iVar2 < 1)) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x40;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f6ad0e0 @ 14f6ad0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ad0e0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (lVar1 == 0) {
    lVar1 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
  }
  *(longlong *)(param_1 + 0xb8) = lVar1;
  if (param_2 != 0) {
    *(int *)(param_1 + 0xb0) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6ad13d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(0,param_1);
  return;
}

// FUN_14f6ad150 @ 14f6ad150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6ad150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = x509_likely_issued(param_3);
  return iVar1 == 0;
}

// FUN_14f6ad180 @ 14f6ad180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6ad180(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = X509_get0_pubkey(param_2);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
  if (iVar1 < 1) {
    return true;
  }
  if (lVar3 == 0) {
    return false;
  }
  if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar2 = EVP_PKEY_security_bits(lVar3);
  return *(int *)(&DAT_153489de8 + (longlong)(iVar1 + -1) * 4) <= iVar2;
}

// FUN_14f6ad200 @ 14f6ad200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ad200(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = X509_chain_check_suiteb(0,param_2,0,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14))
  ;
  if (iVar1 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_2 == 0) {
    param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
  }
  *(longlong *)(param_1 + 0xb8) = param_2;
  *(int *)(param_1 + 0xb0) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f6ad28e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  return uVar2;
}

// FUN_14f6ad2a0 @ 14f6ad2a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ad2a0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  do {
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 1;
      }
      lVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2);
    } while ((iVar2 != 0) && ((*(byte *)(lVar6 + 0xd0) & 0x20) != 0));
    if ((*(uint *)(lVar6 + 0xd0) & 0x400) != 0) {
      uVar7 = X509_get_subject_name(lVar6);
      uVar8 = X509_get_issuer_name(lVar6);
      iVar12 = 0;
      iVar3 = X509_NAME_entry_count(uVar7);
      iVar11 = iVar3 + -1;
      if (iVar11 < 1) {
        iVar12 = 0x48;
      }
      else {
        iVar4 = X509_NAME_entry_count(uVar8);
        iVar5 = X509_NAME_entry_count(uVar7);
        if (iVar5 == iVar4 + 1) {
          uVar9 = X509_NAME_get_entry(uVar7,iVar3 + -2);
          iVar3 = X509_NAME_ENTRY_set(uVar9);
          uVar9 = X509_NAME_get_entry(uVar7,iVar11);
          iVar4 = X509_NAME_ENTRY_set(uVar9);
          if (iVar4 == iVar3) {
            iVar12 = 0x48;
          }
          else {
            lVar10 = X509_NAME_dup(uVar7);
            if (lVar10 == 0) {
              ERR_put_error(0xb,0x95,0x41,"crypto\\x509\\x509_vfy.c",0x2a2);
              *(undefined4 *)(param_1 + 0xb0) = 0x11;
              return 0;
            }
            uVar7 = X509_NAME_delete_entry(lVar10,iVar11);
            uVar9 = X509_NAME_ENTRY_get_object(uVar7);
            iVar3 = OBJ_obj2nid(uVar9);
            if ((iVar3 != 0xd) || (iVar3 = X509_NAME_cmp(lVar10,uVar8), iVar3 != 0)) {
              iVar12 = 0x48;
            }
            X509_NAME_ENTRY_free(uVar7);
            X509_NAME_free(lVar10);
            if (iVar12 == 0) goto LAB_14f6ad424;
          }
        }
        else {
          iVar12 = 0x48;
        }
      }
      *(int *)(param_1 + 0xac) = iVar2;
      *(longlong *)(param_1 + 0xb8) = lVar6;
      *(int *)(param_1 + 0xb0) = iVar12;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
LAB_14f6ad424:
    iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    while (iVar3 = iVar3 + -1, iVar2 < iVar3) {
      lVar10 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3);
      lVar10 = *(longlong *)(lVar10 + 0x108);
      if ((lVar10 != 0) &&
         ((iVar11 = NAME_CONSTRAINTS_check(lVar6,lVar10), iVar11 != 0 ||
          ((((iVar2 == 0 &&
             (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x38), (uVar1 & 0x20) == 0)) &&
            (((uVar1 & 1) != 0 || (iVar11 = FUN_14f6aeee0(lVar6,2), iVar11 == 0)))) &&
           (iVar11 = NAME_CONSTRAINTS_check_CN(lVar6,lVar10), iVar11 != 0)))))) {
        if (iVar11 == 0x11) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar2;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(int *)(param_1 + 0xb0) = iVar11;
        iVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar11 == 0) {
          return 0;
        }
      }
    }
  } while( true );
}

// FUN_14f6ad530 @ 14f6ad530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ad530(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6ad53c;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),0), iVar1 == 0)) {
    ERR_put_error(0xb,0x91,0x41,"crypto\\x509\\x509_vfy.c",0x664);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0;
  }
  iVar1 = X509_policy_check(param_1 + 0xa0,param_1 + 0xa8,*(undefined8 *)(param_1 + 0x98),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14),uVar4);
  if (*(int *)(param_1 + 0xf0) != 0) {
    OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
  }
  if (iVar1 == 0) {
    ERR_put_error(0xb,0x91,0x41,"crypto\\x509\\x509_vfy.c",0x66e);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0;
  }
  if (iVar1 == -1) {
    iVar3 = 1;
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if (1 < iVar1) {
      do {
        lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3);
        if ((*(uint *)(lVar2 + 0xd0) & 0x800) != 0) {
          *(int *)(param_1 + 0xac) = iVar3;
          *(longlong *)(param_1 + 0xb8) = lVar2;
          *(undefined4 *)(param_1 + 0xb0) = 0x2a;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 == 0) {
            return 0;
          }
        }
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      } while (iVar3 < iVar1);
      return 1;
    }
  }
  else {
    if (iVar1 == -2) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x2b;
                    /* WARNING: Could not recover jumptable at 0x00014f6ad6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar4;
    }
    if (iVar1 != 1) {
      ERR_put_error(0xb,0x91,0x44,"crypto\\x509\\x509_vfy.c",0x688);
      return 0;
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x800) != 0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      iVar1 = (**(code **)(param_1 + 0x38))(2,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

// FUN_14f6ad750 @ 14f6ad750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ad750(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 3;
  if ((*(int *)(param_1 + 0x94) <= param_4) &&
     (param_3 == *(int *)(*(longlong *)(param_1 + 0x20) + 0x18))) {
    iVar1 = X509_check_trust(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),4);
  }
  if (iVar1 == 1) {
LAB_14f6ad80a:
    uVar2 = 1;
  }
  else {
    if (iVar1 != 2) {
      iVar1 = X509_check_purpose(param_2,param_3,0 < param_5);
      if ((iVar1 != 0) &&
         ((iVar1 == 1 || ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) == 0))))
      goto LAB_14f6ad80a;
    }
    *(int *)(param_1 + 0xac) = param_4;
    if (param_2 == 0) {
      param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_4);
    }
    *(longlong *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 0x1a;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  }
  return uVar2;
}

// FUN_14f6ad830 @ 14f6ad830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ad830(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong uVar9;
  
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar8 & 4) == 0) {
    return 1;
  }
  uVar7 = 0;
  iVar2 = 0;
  if ((uVar8 & 8) == 0) {
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      return 1;
    }
  }
  else {
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    iVar2 = iVar2 + -1;
  }
  uVar9 = uVar7;
  if (-1 < iVar2) {
    do {
      *(int *)(param_1 + 0xac) = (int)uVar9;
      local_res8 = 0;
      local_res10 = 0;
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar9);
      *(longlong *)(param_1 + 0xb8) = lVar5;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if ((*(uint *)(lVar5 + 0xd0) & 0x400) == 0) {
        while( true ) {
          iVar1 = *(int *)(param_1 + 0xd4);
          if (*(code **)(param_1 + 0x58) == (code *)0x0) {
            iVar3 = FUN_14f6ae7f0(param_1,&local_res8,&local_res10,lVar5);
            uVar6 = local_res10;
          }
          else {
            iVar3 = (**(code **)(param_1 + 0x58))(param_1,&local_res8,lVar5);
            uVar6 = uVar7;
          }
          if (iVar3 == 0) break;
          *(undefined8 *)(param_1 + 200) = local_res8;
          iVar4 = (**(code **)(param_1 + 0x60))(param_1);
          iVar3 = 0;
          if (iVar4 == 0) goto LAB_14f6ad9f0;
          if (uVar6 == 0) {
LAB_14f6ad991:
            iVar3 = (**(code **)(param_1 + 0x68))(param_1,local_res8,lVar5);
            if (iVar3 == 0) goto LAB_14f6ad9f0;
          }
          else {
            iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar6);
            iVar3 = 0;
            if ((iVar4 == 0) ||
               (iVar3 = (**(code **)(param_1 + 0x68))(param_1,uVar6,lVar5), iVar3 == 0))
            goto LAB_14f6ad9f0;
            if (iVar3 != 2) goto LAB_14f6ad991;
          }
          X509_CRL_free(local_res8);
          X509_CRL_free(uVar6);
          local_res8 = 0;
          local_res10 = 0;
          uVar6 = uVar7;
          if (iVar1 == *(int *)(param_1 + 0xd4)) break;
          if (*(int *)(param_1 + 0xd4) == 0x807f) goto LAB_14f6ad9f0;
        }
        *(undefined4 *)(param_1 + 0xb0) = 3;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
LAB_14f6ad9f0:
        X509_CRL_free(local_res8);
        X509_CRL_free(uVar6);
        *(undefined8 *)(param_1 + 200) = 0;
        if (iVar3 == 0) {
          return 0;
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 <= iVar2);
  }
  return 1;
}

// FUN_14f6ada60 @ 14f6ada60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6ada60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int local_res8 [2];
  
  local_res8[0] = -1;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
  if (iVar1 < 1) {
    return 1;
  }
  if (5 < iVar1) {
    iVar1 = 5;
  }
  uVar2 = X509_get_signature_info(param_2,0,0,local_res8,0,0x14f6ada6c);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  return (ulonglong)(*(int *)(&DAT_153489de8 + (longlong)(iVar1 + -1) * 4) <= local_res8[0]);
}

// FUN_14f6adb00 @ 14f6adb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6adb00(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 5) != 0)) && (0 < param_2)) &&
     ((param_2 < iVar2 && (uVar4 = FUN_14f6acc30(param_1,param_2), (int)uVar4 - 1U < 2)))) {
    return uVar4;
  }
  iVar7 = 0;
  iVar3 = param_2;
  if (param_2 < iVar2) {
    do {
      iVar7 = iVar3;
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar7);
      iVar3 = X509_check_trust(lVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
      if (iVar3 == 1) goto LAB_14f6adca8;
      if (iVar3 == 2) goto LAB_14f6adc43;
      iVar3 = iVar7 + 1;
    } while (iVar7 + 1 < iVar2);
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) != 0) {
LAB_14f6adca8:
      if ((lVar1 == 0) || (iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), iVar2 < 1)) {
        return 1;
      }
      if (*(int *)(lVar1 + 0x30) < 0) {
        *(int *)(lVar1 + 0x30) = param_2;
      }
      if (*(int *)(lVar1 + 0x2c) < 0) {
        return 3;
      }
      return 1;
    }
  }
  else if ((param_2 == iVar2) && ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) != 0))
  {
    lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    lVar6 = FUN_14f6af370(param_1,lVar5);
    if (lVar6 != 0) {
      iVar2 = X509_check_trust(lVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
      if (iVar2 == 2) {
        X509_free(lVar6);
LAB_14f6adc43:
        *(int *)(param_1 + 0xac) = iVar7;
        if (lVar5 == 0) {
          lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar7);
        }
        *(longlong *)(param_1 + 0xb8) = lVar5;
        *(undefined4 *)(param_1 + 0xb0) = 0x1c;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        return (ulonglong)((iVar2 != 0) + 2);
      }
      OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),0,lVar6);
      X509_free(lVar5);
      *(undefined4 *)(param_1 + 0x94) = 0;
      goto LAB_14f6adca8;
    }
  }
  return 3;
}

// FUN_14f6adcf0 @ 14f6adcf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6adcf0(longlong param_1,longlong param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar2 = X509_CRL_get_issuer(param_2);
  iVar5 = *(int *)(param_1 + 0xac);
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  if (iVar5 != iVar1 + -1) {
    iVar5 = iVar5 + 1;
  }
  uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
  iVar1 = X509_check_akid(uVar3,*(undefined8 *)(param_2 + 0x80));
  if ((iVar1 == 0) && ((*param_4 & 0x20) != 0)) {
    *param_4 = *param_4 | 0x1c;
    *param_3 = uVar3;
  }
  else {
    iVar5 = iVar5 + 1;
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if (iVar5 < iVar1) {
      do {
        uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
        uVar4 = X509_get_subject_name(uVar3);
        iVar1 = X509_NAME_cmp(uVar4,uVar2);
        if ((iVar1 == 0) &&
           (iVar1 = X509_check_akid(uVar3,*(undefined8 *)(param_2 + 0x80)), iVar1 == 0)) {
          *param_4 = *param_4 | 0xc;
          *param_3 = uVar3;
          return;
        }
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      } while (iVar5 < iVar1);
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) != 0) {
      iVar1 = 0;
      iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
      if (0 < iVar5) {
        do {
          uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),iVar1);
          uVar4 = X509_get_subject_name(uVar3);
          iVar5 = X509_NAME_cmp(uVar4,uVar2);
          if ((iVar5 == 0) &&
             (iVar5 = X509_check_akid(uVar3,*(undefined8 *)(param_2 + 0x80)), iVar5 == 0)) {
            *param_3 = uVar3;
            *param_4 = *param_4 | 4;
            return;
          }
          iVar1 = iVar1 + 1;
          iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
        } while (iVar1 < iVar5);
      }
    }
  }
  return;
}

// FUN_14f6ade90 @ 14f6ade90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ade90(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_2 + 0x90);
  if ((uVar1 & 0x10) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xd0) & 0x10) == 0) {
    if ((uVar1 & 8) != 0) {
      return 0;
    }
  }
  else if ((uVar1 & 4) != 0) {
    return 0;
  }
  *param_4 = *(uint *)(param_2 + 0x94);
  iVar5 = 0;
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xf8));
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0xf8),iVar5);
      iVar2 = FUN_14f6ae0c0(puVar3,param_2,param_3);
      if ((iVar2 != 0) &&
         ((*(undefined8 **)(param_2 + 0x88) == (undefined8 *)0x0 ||
          (iVar2 = FUN_14f6aef80(*puVar3,**(undefined8 **)(param_2 + 0x88)), iVar2 != 0)))) {
        *param_4 = *param_4 & *(uint *)(puVar3 + 3);
        goto LAB_14f6adfa9;
      }
      iVar5 = iVar5 + 1;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xf8));
    } while (iVar5 < iVar2);
  }
  if (((*(longlong **)(param_2 + 0x88) == (longlong *)0x0) || (**(longlong **)(param_2 + 0x88) == 0)
      ) && ((param_3 & 0x20) != 0)) {
LAB_14f6adfa9:
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

// FUN_14f6adfc0 @ 14f6adfc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6adfc0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = X509_CRL_get_ext_by_NID(param_1,param_3,0xffffffff);
  lVar5 = 0;
  lVar4 = lVar5;
  if (-1 < iVar1) {
    iVar2 = X509_CRL_get_ext_by_NID(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    uVar3 = X509_CRL_get_ext(param_1,iVar1);
    lVar4 = X509_EXTENSION_get_data(uVar3);
  }
  iVar1 = X509_CRL_get_ext_by_NID(param_2,param_3,0xffffffff);
  if (-1 < iVar1) {
    iVar2 = X509_CRL_get_ext_by_NID(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    uVar3 = X509_CRL_get_ext(param_2,iVar1);
    lVar5 = X509_EXTENSION_get_data(uVar3);
  }
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      return true;
    }
  }
  else if (lVar5 != 0) {
    iVar1 = ASN1_OCTET_STRING_cmp(lVar4,lVar5);
    return iVar1 == 0;
  }
  return false;
}

// FUN_14f6ae0c0 @ 14f6ae0c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6ae0c0(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = X509_CRL_get_issuer(param_2);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return param_3 >> 5 & 1;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    do {
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),iVar4);
      if (*piVar3 == 4) {
        iVar1 = X509_NAME_cmp(*(undefined8 *)(piVar3 + 2),uVar2);
        if (iVar1 == 0) {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
    } while (iVar4 < iVar1);
  }
  return 0;
}

// FUN_14f6ae180 @ 14f6ae180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6ae180(undefined8 param_1,char param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res20;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6ae18c;
  local_res20 = 0;
  if (param_2 == '\0') {
    iVar1 = i2d_X509(param_1,&local_res20);
  }
  else {
    if (param_2 != '\x01') {
      uVar3 = 0xa34;
      uVar2 = 0x85;
      goto LAB_14f6ae1fc;
    }
    uVar2 = X509_get_X509_PUBKEY();
    iVar1 = i2d_X509_PUBKEY(uVar2,&local_res20);
  }
  if ((-1 < iVar1) && (local_res20 != 0)) {
    *param_3 = iVar1;
    return local_res20;
  }
  uVar3 = 0xa39;
  uVar2 = 0x41;
LAB_14f6ae1fc:
  ERR_put_error(0xb,0x6b,uVar2,"crypto\\x509\\x509_vfy.c",uVar3,uVar4);
  return 0;
}

// FUN_14f6ae220 @ 14f6ae220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14f6ae220(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined1 *local_98;
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f6ae236;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  plVar2 = *(longlong **)(param_1 + 0xe8);
  puVar16 = (undefined1 *)0x0;
  local_b8 = 0;
  local_b4 = 0x100;
  uVar5 = 5;
  if (param_3 == 0) {
    uVar5 = 10;
  }
  local_b0 = 0x100;
  local_98 = (undefined1 *)0x0;
  uVar14 = 0x100;
  uVar15 = 0x100;
  uVar4 = uVar5 & 3;
  if (param_3 < *(int *)(param_1 + 0x94)) {
    uVar4 = uVar5;
  }
  local_a8 = uVar4 & 0xfffffffc;
  if (*(int *)((longlong)plVar2 + 0x2c) < 0) {
    local_a8 = uVar4;
  }
  puVar7 = puVar16;
  local_a4 = param_3;
  local_90 = param_2;
  if ((*(uint *)(plVar2 + 5) & local_a8) != 0) {
    puVar7 = (undefined1 *)OPENSSL_sk_num(plVar2[1]);
  }
  local_ac = (uint)puVar7;
  puVar11 = puVar16;
  puVar12 = puVar16;
  puVar13 = puVar16;
  do {
    if ((int)puVar7 <= (int)puVar13) {
LAB_14f6ae4e0:
      CRYPTO_free(puVar12,"crypto\\x509\\x509_vfy.c",0xace);
      return puVar16;
    }
    pbVar8 = (byte *)OPENSSL_sk_value(plVar2[1],puVar13);
    bVar1 = *pbVar8;
    if ((local_a8 >> (bVar1 & 0x1f) & 1) != 0) {
      if (bVar1 != local_b4) {
        uVar15 = 0x100;
        local_b4 = (uint)bVar1;
        uVar14 = (uint)*(byte *)((ulonglong)pbVar8[2] + *(longlong *)(*plVar2 + 8));
      }
      bVar1 = pbVar8[1];
      if (bVar1 == local_b0) {
        uVar10 = (ulonglong)pbVar8[2];
        if ((pbVar8[2] != 0) && (*(byte *)(*(longlong *)(*plVar2 + 8) + uVar10) < uVar14))
        goto LAB_14f6ae44c;
      }
      else {
        local_b0 = (uint)bVar1;
        CRYPTO_free(puVar12,"crypto\\x509\\x509_vfy.c",0xa91);
        local_a0 = (undefined1 *)0x0;
        if (bVar1 == 0) {
          uVar5 = i2d_X509(local_90,&local_a0);
        }
        else {
          if (bVar1 != 1) {
            local_c8 = CONCAT44(local_c8._4_4_,0xa34);
            uVar9 = 0x85;
            goto LAB_14f6ae476;
          }
          uVar9 = X509_get_X509_PUBKEY(local_90);
          uVar5 = i2d_X509_PUBKEY(uVar9,&local_a0);
        }
        puVar11 = (undefined1 *)(ulonglong)uVar5;
        if (((int)uVar5 < 0) || (local_a0 == (undefined1 *)0x0)) {
          local_c8 = CONCAT44(local_c8._4_4_,0xa39);
          uVar9 = 0x41;
LAB_14f6ae476:
          ERR_put_error(0xb,0x6b,uVar9,"crypto\\x509\\x509_vfy.c");
          return &DAT_ffffffff;
        }
        uVar15 = 0x100;
        uVar10 = (ulonglong)pbVar8[2];
        uVar14 = (uint)*(byte *)(*(longlong *)(*plVar2 + 8) + uVar10);
        puVar12 = local_a0;
      }
      if ((int)uVar10 != (int)uVar15) {
        local_b8 = (uint)puVar11;
        lVar3 = *(longlong *)(*(longlong *)*plVar2 + uVar10 * 8);
        uVar15 = uVar10;
        local_98 = puVar12;
        if (lVar3 != 0) {
          local_98 = local_88;
          local_c0 = 0;
          local_c8 = lVar3;
          iVar6 = EVP_Digest(puVar12,puVar11,local_88,&local_b8);
          if (iVar6 == 0) {
            puVar16 = &DAT_ffffffff;
            goto LAB_14f6ae4e0;
          }
        }
      }
      if (((ulonglong)local_b8 == *(ulonglong *)(pbVar8 + 0x10)) &&
         (iVar6 = memcmp(local_98,*(void **)(pbVar8 + 8),(ulonglong)local_b8), iVar6 == 0)) {
        puVar16 = (undefined1 *)(ulonglong)(local_b4 - 2 < 2);
        if ((local_b4 - 2 < 2) || (*(int *)((longlong)plVar2 + 0x2c) < 0)) {
          *(int *)((longlong)plVar2 + 0x2c) = local_a4;
          plVar2[3] = (longlong)pbVar8;
          CRYPTO_free(plVar2[4],"crypto\\x509\\x509_vfy.c",0xac5);
          plVar2[4] = local_90;
          X509_up_ref(local_90);
        }
        goto LAB_14f6ae4e0;
      }
    }
LAB_14f6ae44c:
    puVar7 = (undefined1 *)(ulonglong)local_ac;
    puVar13 = (undefined1 *)(ulonglong)((int)puVar13 + 1);
  } while( true );
}

// FUN_14f6ae530 @ 14f6ae530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6ae530(longlong param_1)

{
  X509_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

// FUN_14f6ae570 @ 14f6ae570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ae570(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  lVar4 = *(longlong *)(param_1 + 8);
  X509_free(*(undefined8 *)(lVar1 + 0x20));
  *(undefined8 *)(lVar1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  iVar2 = FUN_14f6ae220(param_1,*(undefined8 *)(param_1 + 8),0);
  if ((iVar2 == 0) && (((*(byte *)(lVar1 + 0x28) & 5) != 0 || (-1 < *(int *)(lVar1 + 0x2c))))) {
    uVar3 = FUN_14f6af9e0(param_1);
    return uVar3;
  }
  X509_get_pubkey_parameters(0,*(undefined8 *)(param_1 + 0x98));
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
      return 0xffffffff;
    }
    iVar2 = FUN_14f6ad200(param_1,lVar4);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x41;
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_14f6ad200(param_1,lVar4);
    if ((iVar2 == 0) ||
       (((*(byte *)(lVar1 + 0x34) & 1) == 0 && (iVar2 = FUN_14f6acf80(param_1), iVar2 == 0)))) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    uVar3 = 1;
  }
  *(longlong *)(param_1 + 0xb8) = lVar4;
  uVar3 = (**(code **)(param_1 + 0x38))(uVar3,param_1);
  return uVar3;
}

// FUN_14f6ae6c0 @ 14f6ae6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ae6c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar7 = 0;
  iVar8 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 < 1) {
    return 0;
  }
  do {
    uVar4 = OPENSSL_sk_value(param_2,iVar8);
    iVar2 = (**(code **)(param_1 + 0x48))(param_1,param_3,uVar4);
    if (iVar2 != 0) {
      if (((*(byte *)(param_3 + 0xd0) & 0x20) == 0) ||
         (iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98)), iVar2 != 1)) {
        uVar1 = *(undefined8 *)(param_1 + 0x98);
        iVar2 = OPENSSL_sk_num(uVar1);
        iVar6 = 0;
        if (0 < iVar2) {
          do {
            uVar5 = OPENSSL_sk_value(uVar1,iVar6);
            iVar3 = X509_cmp(uVar5,uVar4);
            if (iVar3 == 0) goto LAB_14f6ae795;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
      }
      iVar2 = x509_check_cert_time(param_1,uVar4,0xffffffff);
      uVar7 = uVar4;
      if (iVar2 != 0) {
        return uVar4;
      }
    }
LAB_14f6ae795:
    iVar8 = iVar8 + 1;
    iVar2 = OPENSSL_sk_num(param_2);
    if (iVar2 <= iVar8) {
      return uVar7;
    }
  } while( true );
}

// FUN_14f6ae7f0 @ 14f6ae7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6ae7f0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined4 local_28 [2];
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_res8[0] = 0;
  local_20 = 0;
  local_10 = 0;
  uVar2 = X509_get_issuer_name(param_4);
  local_28[0] = *(undefined4 *)(param_1 + 0xd4);
  iVar1 = FUN_14f6aeb10(param_1,&local_20,&local_10,&local_18,local_res8,local_28,
                        *(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    lVar3 = (**(code **)(param_1 + 0x80))(param_1,uVar2);
    if ((lVar3 == 0) && (local_20 != 0)) goto LAB_14f6ae8e2;
    FUN_14f6aeb10(param_1,&local_20,&local_10,&local_18,local_res8,local_28,lVar3);
    OPENSSL_sk_pop_free(lVar3,X509_CRL_free);
  }
  if (local_20 == 0) {
    return 0;
  }
LAB_14f6ae8e2:
  *(undefined8 *)(param_1 + 0xc0) = local_18;
  *(undefined4 *)(param_1 + 0xd0) = local_res8[0];
  *(undefined4 *)(param_1 + 0xd4) = local_28[0];
  *param_2 = local_20;
  *param_3 = local_10;
  return 1;
}

// FUN_14f6ae940 @ 14f6ae940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6ae940(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res18 [2];
  
  uVar6 = *param_3;
  lVar8 = 0;
  uVar7 = 0;
  local_res18[0] = 0;
  uVar2 = *(uint *)(param_4 + 0x90);
  if ((uVar2 & 2) != 0) {
    return 0;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) == 0) {
    if ((uVar2 & 0x60) != 0) {
      return 0;
    }
  }
  else if ((uVar2 & 0x40) == 0) {
    if (*(longlong *)(param_4 + 0xa0) != 0) {
      return 0;
    }
  }
  else if ((*(uint *)(param_4 + 0x94) & ~uVar6) == 0) {
    return 0;
  }
  uVar3 = X509_CRL_get_issuer(param_4);
  uVar4 = X509_get_issuer_name(param_5);
  iVar1 = X509_NAME_cmp(uVar4,uVar3);
  if (iVar1 == 0) {
    uVar7 = 0x20;
    local_res18[0] = 0x20;
  }
  else if ((*(byte *)(param_4 + 0x90) & 0x20) == 0) {
    return 0;
  }
  if ((*(uint *)(param_4 + 0x7c) & 0x200) == 0) {
    uVar7 = uVar7 | 0x100;
    local_res18[0] = uVar7;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 >> 0x15 & 1) == 0) goto LAB_14f6aea44;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x20) + 8;
LAB_14f6aea44:
    uVar3 = X509_CRL_get0_lastUpdate(param_4);
    uVar2 = X509_cmp_time(uVar3,lVar8);
    if (uVar2 < 0x80000000) goto LAB_14f6aea93;
    lVar5 = X509_CRL_get0_nextUpdate(param_4);
    if (lVar5 != 0) {
      uVar3 = X509_CRL_get0_nextUpdate(param_4);
      iVar1 = X509_cmp_time(uVar3,lVar8);
      if ((iVar1 == 0) || ((iVar1 < 0 && ((*(byte *)(param_1 + 0xd0) & 2) == 0))))
      goto LAB_14f6aea93;
    }
  }
  local_res18[0] = uVar7 | 0x40;
LAB_14f6aea93:
  FUN_14f6adcf0(param_1,param_4,param_2,local_res18);
  uVar2 = local_res18[0];
  if ((local_res18[0] & 4) == 0) {
    return 0;
  }
  iVar1 = FUN_14f6ade90(param_5,param_4,local_res18[0],local_res18);
  if (iVar1 != 0) {
    if ((local_res18[0] & ~uVar6) == 0) {
      return 0;
    }
    uVar6 = uVar6 | local_res18[0];
    uVar2 = uVar2 | 0x80;
  }
  *param_3 = uVar6;
  return uVar2;
}

// FUN_14f6aeb10 @ 14f6aeb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6aeb10(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4,
                  int *param_5,uint *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = 0;
  local_78 = 0;
  iVar10 = *param_5;
  local_60 = 0;
  local_68 = 0;
  local_58 = uVar4;
  iVar1 = OPENSSL_sk_num(param_7);
  uVar8 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_7,uVar8);
      local_74 = *param_6;
      iVar1 = FUN_14f6ae940(param_1,&local_60,&local_74,uVar3,uVar4);
      if ((iVar10 <= iVar1) && (iVar1 != 0)) {
        if ((iVar1 == iVar10) && (uVar9 != 0)) {
          uVar4 = X509_CRL_get0_lastUpdate(uVar3);
          uVar5 = X509_CRL_get0_lastUpdate(uVar9);
          iVar2 = ASN1_TIME_diff(&local_70,&local_6c,uVar5,uVar4);
          if ((iVar2 == 0) || ((local_70 < 1 && (local_6c < 1)))) {
            uVar6 = (ulonglong)local_78;
            goto LAB_14f6aec38;
          }
        }
        uVar6 = (ulonglong)local_74;
        local_68 = local_60;
        local_78 = local_74;
        uVar9 = uVar3;
        iVar10 = iVar1;
      }
LAB_14f6aec38:
      uVar5 = local_68;
      uVar7 = (int)uVar8 + 1;
      iVar1 = OPENSSL_sk_num(param_7);
      uVar8 = (ulonglong)uVar7;
      uVar4 = local_58;
    } while ((int)uVar7 < iVar1);
    if (uVar9 != 0) {
      X509_CRL_free(*param_2);
      *param_2 = uVar9;
      *param_4 = uVar5;
      *param_5 = iVar10;
      *param_6 = (uint)uVar6;
      X509_CRL_up_ref(uVar9);
      X509_CRL_free(*param_3);
      *param_3 = 0;
      FUN_14f6aecf0(param_1,param_3,param_5,uVar9,param_7);
    }
  }
  return 0x1bf < iVar10;
}

// FUN_14f6aecf0 @ 14f6aecf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6aecf0(longlong param_1,undefined8 *param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x2000) != 0) &&
     (((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0xd0) | *(uint *)(param_4 + 0x7c)) >> 0xc & 1) !=
      0)) {
    uVar7 = 0;
    iVar1 = OPENSSL_sk_num(param_5);
    uVar6 = uVar7;
    if (0 < iVar1) {
      do {
        uVar2 = OPENSSL_sk_value(param_5,uVar6);
        iVar1 = FUN_14f6acdf0(uVar2,param_4);
        if (iVar1 != 0) {
          uVar5 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
          if ((uVar5 & 2) == 0) {
            if ((uVar5 >> 0x15 & 1) == 0) goto LAB_14f6aedcb;
          }
          else {
            uVar7 = *(longlong *)(param_1 + 0x20) + 8;
LAB_14f6aedcb:
            uVar3 = X509_CRL_get0_lastUpdate(uVar2);
            uVar5 = X509_cmp_time(uVar3,uVar7);
            if (uVar5 < 0x80000000) goto LAB_14f6aee18;
            lVar4 = X509_CRL_get0_nextUpdate(uVar2);
            if (lVar4 != 0) {
              uVar3 = X509_CRL_get0_nextUpdate(uVar2);
              iVar1 = X509_cmp_time(uVar3,uVar7);
              if ((iVar1 == 0) || ((iVar1 < 0 && ((*(byte *)(param_1 + 0xd0) & 2) == 0))))
              goto LAB_14f6aee18;
            }
          }
          *param_3 = *param_3 | 2;
LAB_14f6aee18:
          X509_CRL_up_ref(uVar2);
          *param_2 = uVar2;
          return;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar1 = OPENSSL_sk_num(param_5);
      } while ((int)uVar5 < iVar1);
    }
    *param_2 = 0;
  }
  return;
}

// FUN_14f6aee30 @ 14f6aee30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6aee30(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  (**(code **)(param_2 + 0x40))();
  *(undefined8 *)(param_2 + 0x98) = uVar1;
  return;
}

// FUN_14f6aee80 @ 14f6aee80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6aee80(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14f6ae6c0(param_2,*(undefined8 *)(param_2 + 0x28));
  *param_1 = lVar2;
  if (lVar2 != 0) {
    iVar1 = X509_up_ref(lVar2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  *param_1 = 0;
  return 0;
}

// FUN_14f6aeee0 @ 14f6aeee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6aeee0(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  lVar2 = X509_get_ext_d2i(param_1,0x55,0,0);
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(lVar2);
  uVar5 = 0;
  if (0 < iVar1) {
    do {
      piVar3 = (int *)OPENSSL_sk_value(lVar2,iVar4);
      if (*piVar3 == param_2) {
        uVar5 = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(lVar2);
      uVar5 = 0;
    } while (iVar4 < iVar1);
  }
  GENERAL_NAMES_free(lVar2);
  return uVar5;
}

// FUN_14f6aef80 @ 14f6aef80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6aef80(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6aef8e;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return true;
  }
  if (*param_1 == 1) {
    lVar5 = *(longlong *)(param_1 + 4);
    if (lVar5 == 0) {
      return false;
    }
    if (*param_2 == 1) {
      if (*(longlong *)(param_2 + 4) == 0) {
        return false;
      }
      iVar1 = X509_NAME_cmp(lVar5);
      return iVar1 == 0;
    }
    uVar3 = *(undefined8 *)(param_2 + 2);
  }
  else {
    if (*param_2 != 1) goto LAB_14f6af051;
    lVar5 = *(longlong *)(param_2 + 4);
    if (lVar5 == 0) {
      return false;
    }
    uVar3 = *(undefined8 *)(param_1 + 2);
  }
  if (lVar5 != 0) {
    iVar6 = 0;
    iVar1 = OPENSSL_sk_num(uVar3);
    if (0 < iVar1) {
      do {
        piVar2 = (int *)OPENSSL_sk_value(uVar3,iVar6);
        if ((*piVar2 == 4) &&
           (iVar1 = X509_NAME_cmp(lVar5,*(undefined8 *)(piVar2 + 2),param_3,param_4,uVar7),
           iVar1 == 0)) {
          return true;
        }
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(uVar3);
      } while (iVar6 < iVar1);
    }
    return false;
  }
LAB_14f6af051:
  iVar6 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  if (0 < iVar1) {
    do {
      uVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar6);
      iVar4 = 0;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
      if (0 < iVar1) {
        do {
          uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_2 + 2),iVar4);
          iVar1 = GENERAL_NAME_cmp(uVar7,uVar3);
          if (iVar1 == 0) {
            return true;
          }
          iVar4 = iVar4 + 1;
          iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
        } while (iVar4 < iVar1);
      }
      iVar6 = iVar6 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
    } while (iVar6 < iVar1);
  }
  return false;
}

// FUN_14f6af100 @ 14f6af100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6af100(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar6 = iVar1 + -1;
  lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar2 = (**(code **)(param_1 + 0x48))(param_1,lVar3,lVar3);
    lVar5 = lVar3;
    if (iVar2 != 0) goto LAB_14f6af1ea;
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) == 0) {
      if (0 < iVar6) {
        iVar6 = iVar1 + -2;
        *(int *)(param_1 + 0xac) = iVar6;
        lVar4 = lVar3;
        goto LAB_14f6af1d8;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      lVar4 = lVar3;
      if (lVar3 == 0) {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else {
    lVar5 = 0;
  }
LAB_14f6af2f2:
  do {
    do {
      iVar1 = x509_check_cert_time(param_1,lVar3,iVar6);
      if (iVar1 == 0) {
        return 0;
      }
      *(longlong *)(param_1 + 0xc0) = lVar5;
      *(longlong *)(param_1 + 0xb8) = lVar3;
      *(int *)(param_1 + 0xac) = iVar6;
      iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar6 = iVar6 + -1;
      lVar4 = lVar3;
      if (-1 < iVar6) {
LAB_14f6af1d8:
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
        lVar5 = lVar4;
      }
LAB_14f6af1ea:
      if (iVar6 < 0) {
        return 1;
      }
    } while ((lVar3 == lVar5) &&
            (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x4000) == 0 ||
             ((*(uint *)(lVar5 + 0xd0) & 0x2000) == 0))));
    iVar1 = (uint)(lVar3 != lVar5) + iVar6;
    if (((lVar3 != lVar5) || ((*(byte *)(lVar5 + 0xd0) & 0x10) != 0)) &&
       (iVar2 = x509_signing_allowed(lVar5,lVar3), iVar2 != 0)) {
      *(int *)(param_1 + 0xac) = iVar1;
      lVar4 = lVar5;
      if (lVar5 == 0) {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar1);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(int *)(param_1 + 0xb0) = iVar2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    lVar4 = X509_get0_pubkey(lVar5);
    if (lVar4 == 0) {
      *(int *)(param_1 + 0xac) = iVar1;
      lVar4 = lVar5;
      if (lVar5 == 0) {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar1);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 6;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    }
    else {
      iVar1 = X509_verify(lVar3,lVar4);
      if (0 < iVar1) goto LAB_14f6af2f2;
      iVar1 = FUN_14f6af940(param_1,lVar3,iVar6,7);
    }
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}

// FUN_14f6af370 @ 14f6af370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6af370(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar2 = X509_get_subject_name(param_2);
  lVar3 = (**(code **)(param_1 + 0x78))(param_1,uVar2);
  uVar4 = 0;
  if (lVar3 != 0) {
    iVar1 = OPENSSL_sk_num(lVar3);
    uVar4 = uVar6;
    if (0 < iVar1) {
      do {
        uVar4 = OPENSSL_sk_value(lVar3,uVar6);
        iVar1 = X509_cmp(uVar4,param_2);
        if (iVar1 == 0) {
          if ((uVar4 != 0) && (iVar1 = X509_up_ref(uVar4), iVar1 == 0)) {
            uVar4 = 0;
          }
          break;
        }
        uVar4 = 0;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar1 = OPENSSL_sk_num(lVar3);
      } while ((int)uVar5 < iVar1);
    }
    OPENSSL_sk_pop_free(lVar3,X509_free);
  }
  return uVar4;
}

// FUN_14f6af450 @ 14f6af450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6af450(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x28));
  uVar6 = uVar4;
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x28),uVar6);
      uVar3 = X509_get_subject_name(uVar2);
      iVar1 = X509_NAME_cmp(param_2,uVar3);
      if (iVar1 == 0) {
        iVar1 = X509_up_ref(uVar2);
        if (iVar1 == 0) {
          OPENSSL_sk_pop_free(uVar4,X509_free);
          ERR_put_error(0xb,0x98,0x44,"crypto\\x509\\x509_vfy.c",0x17d);
          *(undefined4 *)(param_1 + 0xb0) = 1;
          return 0;
        }
        if (((uVar4 == 0) && (uVar4 = OPENSSL_sk_new_null(), uVar4 == 0)) ||
           (iVar1 = OPENSSL_sk_push(uVar4,uVar2), iVar1 == 0)) {
          X509_free(uVar2);
          OPENSSL_sk_pop_free(uVar4,X509_free);
          ERR_put_error(0xb,0x98,0x41,"crypto\\x509\\x509_vfy.c",0x186);
          *(undefined4 *)(param_1 + 0xb0) = 0x11;
          return 0;
        }
      }
      uVar5 = (int)uVar6 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x28));
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar1);
  }
  return uVar4;
}

// FUN_14f6af5c0 @ 14f6af5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af5c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6af5e0 @ 14f6af5e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af5e0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6af600 @ 14f6af600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af600(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6af620 @ 14f6af620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af620(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6af640 @ 14f6af640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af640(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6af660 @ 14f6af660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af660(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6af680 @ 14f6af680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af680(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6af6a0 @ 14f6af6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af6a0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6af6c0 @ 14f6af6c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af6c0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6af6e0 @ 14f6af6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af6e0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6af700 @ 14f6af700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af700(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6af720 @ 14f6af720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6af720(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = OPENSSL_sk_num();
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_1,iVar4);
      iVar2 = X509_cmp(uVar3,param_2);
      if (iVar2 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}

// FUN_14f6af7a0 @ 14f6af7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af7a0(void)

{
  OPENSSL_sk_delete_ptr();
  return;
}

// FUN_14f6af7c0 @ 14f6af7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af7c0(void)

{
  OPENSSL_sk_dup();
  return;
}

// FUN_14f6af7e0 @ 14f6af7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af7e0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6af800 @ 14f6af800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af800(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6af820 @ 14f6af820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af820(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6af840 @ 14f6af840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af840(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f6af860 @ 14f6af860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af860(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6af880 @ 14f6af880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af880(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6af8a0 @ 14f6af8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af8a0(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f6af8c0 @ 14f6af8c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af8c0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6af8e0 @ 14f6af8e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af8e0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6af900 @ 14f6af900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af900(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6af920 @ 14f6af920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af920(__time64_t *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6af931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _time64(param_1);
  return;
}

// FUN_14f6af940 @ 14f6af940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af940(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0xac) = param_3;
  if (param_2 == 0) {
    param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
  }
  *(longlong *)(param_1 + 0xb8) = param_2;
  if (param_4 != 0) {
    *(int *)(param_1 + 0xb0) = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6af99b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(0,param_1);
  return;
}

// FUN_14f6af9b0 @ 14f6af9b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6af9b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014f6af9cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(0,param_1);
  return;
}

// FUN_14f6af9e0 @ 14f6af9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6af9e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_14f6ab630();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_14f6ac300(param_1);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_14f6abfd0(param_1);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = FUN_14f6acf80(param_1);
      }
    }
  }
  X509_get_pubkey_parameters(0,*(undefined8 *)(param_1 + 0x98));
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(param_1 + 0x50))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = X509_chain_check_suiteb
                    (param_1 + 0xac,0,*(undefined8 *)(param_1 + 0x98),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
  if (iVar2 != 0) {
    uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    *(int *)(param_1 + 0xb0) = iVar2;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    iVar2 = FUN_14f6af100(param_1);
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))();
  }
  if ((((iVar2 != 0) && (iVar2 = FUN_14f6ad2a0(param_1), iVar2 != 0)) &&
      (iVar2 = X509v3_asid_validate_path(param_1), iVar2 != 0)) &&
     (iVar2 = X509v3_addr_validate_path(param_1), iVar2 != 0)) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80) != 0) {
      iVar2 = (**(code **)(param_1 + 0x70))(param_1);
    }
    return iVar2;
  }
  return 0;
}

// x509_check_cert_time @ 14f6afb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_check_cert_time(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 >> 0x15 & 1) == 0) {
      lVar5 = 0;
      goto LAB_14f6afb74;
    }
LAB_14f6afc69:
    uVar3 = 1;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x20) + 8;
LAB_14f6afb74:
    uVar3 = X509_get0_notBefore(param_2);
    iVar2 = X509_cmp_time(uVar3,lVar5);
    if ((iVar2 < 0) || (-1 < param_3)) {
      lVar4 = param_2;
      if (iVar2 == 0) {
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0xd;
LAB_14f6afbbb:
        *(longlong *)(param_1 + 0xb8) = lVar4;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) goto LAB_14f6afbce;
      }
      else if (0 < iVar2) {
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
          *(undefined4 *)(param_1 + 0xb0) = 9;
        }
        else {
          *(undefined4 *)(param_1 + 0xb0) = 9;
        }
        goto LAB_14f6afbbb;
      }
      uVar3 = X509_get0_notAfter(param_2);
      iVar2 = X509_cmp_time(uVar3,lVar5);
      if (iVar2 < 1) {
        if (param_3 < 0) goto LAB_14f6afbce;
        if (iVar2 != 0) goto LAB_14f6afc83;
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0xe;
      }
      else {
LAB_14f6afc83:
        if (-1 < iVar2) goto LAB_14f6afc69;
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 10;
      }
      *(longlong *)(param_1 + 0xb8) = param_2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 != 0) goto LAB_14f6afc69;
    }
LAB_14f6afbce:
    uVar3 = 0;
  }
  return uVar3;
}

