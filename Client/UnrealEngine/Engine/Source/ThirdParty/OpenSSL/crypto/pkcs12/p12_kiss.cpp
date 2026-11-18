// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// PKCS12_parse @ 14f7bd350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS12_parse(longlong param_1,char *param_2,longlong *param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f7bd374;
  pcVar7 = (char *)0x0;
  if (param_3 != (longlong *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    ERR_put_error(0x23,0x76,0x69,"crypto\\pkcs12\\p12_kiss.c",0x2f,0x14f7bd374);
    return 0;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = PKCS12_verify_mac(param_1,0,0);
    param_2 = pcVar7;
    if (iVar1 == 0) {
      iVar1 = PKCS12_verify_mac(param_1,"",0);
      param_2 = "";
      if (iVar1 == 0) {
        uVar8 = 0x42;
        goto LAB_14f7bd50e;
      }
    }
  }
  else {
    iVar1 = PKCS12_verify_mac(param_1,param_2,0xffffffff);
    if (iVar1 == 0) {
      uVar8 = 0x46;
LAB_14f7bd50e:
      uVar6 = 0x71;
      pcVar2 = pcVar7;
      goto LAB_14f7bd514;
    }
  }
  pcVar2 = (char *)OPENSSL_sk_new_null();
  if (pcVar2 == (char *)0x0) {
    uVar8 = 0x4e;
    uVar6 = 0x41;
  }
  else {
    iVar1 = FUN_14f7bda10(param_1,param_2,0xffffffff,param_3,pcVar2);
    if (iVar1 != 0) {
      pcVar3 = (char *)OPENSSL_sk_pop(pcVar2);
      do {
        if (pcVar3 == (char *)0x0) {
          OPENSSL_sk_pop_free(pcVar2,X509_free);
          return 1;
        }
        if ((((param_3 != (longlong *)0x0) && (*param_3 != 0)) && (param_4 != (longlong *)0x0)) &&
           (*param_4 == 0)) {
          ERR_set_mark();
          iVar1 = X509_check_private_key(pcVar3,*param_3);
          if (iVar1 != 0) {
            *param_4 = (longlong)pcVar3;
            pcVar3 = pcVar7;
          }
          ERR_pop_to_mark();
        }
        pcVar5 = pcVar3;
        if ((param_5 != (longlong *)0x0) && (pcVar3 != (char *)0x0)) {
          if (*param_5 == 0) {
            lVar4 = OPENSSL_sk_new_null();
            *param_5 = lVar4;
            if (lVar4 == 0) goto LAB_14f7bd528;
          }
          iVar1 = OPENSSL_sk_push(*param_5,pcVar3);
          pcVar5 = pcVar7;
          if (iVar1 == 0) goto LAB_14f7bd528;
        }
        X509_free(pcVar5);
        pcVar3 = (char *)OPENSSL_sk_pop(pcVar2);
      } while( true );
    }
    uVar8 = 0x53;
    uVar6 = 0x72;
  }
LAB_14f7bd514:
  ERR_put_error(0x23,0x76,uVar6,"crypto\\pkcs12\\p12_kiss.c",uVar8,uVar9);
  pcVar3 = pcVar7;
LAB_14f7bd528:
  if (param_3 != (longlong *)0x0) {
    EVP_PKEY_free(*param_3);
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    X509_free(*param_4);
    *param_4 = 0;
  }
  X509_free(pcVar3);
  OPENSSL_sk_pop_free(pcVar2,X509_free);
  return 0;
}

// FUN_14f7bd590 @ 14f7bd590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14f7bd590(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7bd5ac;
  lVar5 = 0;
  puVar7 = (undefined4 *)0x0;
  lVar2 = PKCS12_SAFEBAG_get0_attr(param_1,0x9c);
  if (lVar2 != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  lVar2 = PKCS12_SAFEBAG_get0_attr(param_1,0x9d);
  if (lVar2 != 0) {
    puVar7 = *(undefined4 **)(lVar2 + 8);
  }
  iVar1 = PKCS12_SAFEBAG_get_nid(param_1);
  if (iVar1 == 0x96) {
    if (param_4 == (longlong *)0x0) {
      return 1;
    }
    if (*param_4 == 0) {
      uVar3 = PKCS12_SAFEBAG_get0_p8inf(param_1);
      lVar5 = EVP_PKCS82PKEY(uVar3);
      *param_4 = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  if (iVar1 == 0x97) {
    if (param_4 == (longlong *)0x0) {
      return 1;
    }
    if (*param_4 != 0) {
      return 1;
    }
    lVar5 = PKCS12_decrypt_skey(param_1,param_2,param_3);
    if (lVar5 == 0) {
      return 0;
    }
    lVar2 = EVP_PKCS82PKEY(lVar5);
    *param_4 = lVar2;
    PKCS8_PRIV_KEY_INFO_free(lVar5);
    if (*param_4 != 0) {
      return 1;
    }
    return 0;
  }
  if (iVar1 != 0x98) {
    if (iVar1 != 0x9b) {
      return 1;
    }
    uVar3 = PKCS12_SAFEBAG_get0_safes(param_1);
    iVar6 = 0;
    iVar1 = OPENSSL_sk_num(uVar3);
    if (0 < iVar1) {
      do {
        uVar4 = OPENSSL_sk_value(uVar3,iVar6);
        iVar1 = FUN_14f7bd590(uVar4,param_2,param_3,param_4,param_5);
        if (iVar1 == 0) {
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(uVar3);
      } while (iVar6 < iVar1);
    }
    return 1;
  }
  iVar1 = PKCS12_SAFEBAG_get_bag_nid(param_1);
  if (iVar1 != 0x9e) {
    return 1;
  }
  lVar2 = PKCS12_SAFEBAG_get1_cert(param_1);
  if (lVar2 == 0) {
    return 0;
  }
  if ((puVar7 == (undefined4 *)0x0) ||
     (iVar1 = X509_keyid_set1(lVar2,*(undefined8 *)(puVar7 + 2),*puVar7), iVar1 != 0)) {
    if ((lVar5 != 0) && (iVar1 = ASN1_STRING_to_UTF8(&local_28,lVar5), -1 < iVar1)) {
      iVar1 = X509_alias_set1(lVar2,local_28,iVar1);
      CRYPTO_free(local_28,"crypto\\pkcs12\\p12_kiss.c",0xe3);
      if (iVar1 == 0) goto LAB_14f7bd718;
    }
    iVar1 = OPENSSL_sk_push(param_5,lVar2);
    if (iVar1 != 0) {
      return 1;
    }
  }
LAB_14f7bd718:
  X509_free(lVar2);
  return 0;
}

// FUN_14f7bd7c0 @ 14f7bd7c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7bd7c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  bool bVar6;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7bd7e1;
  local_38 = 0;
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_1,local_38);
      local_30 = 0;
      puVar5 = (undefined4 *)0x0;
      lVar3 = PKCS12_SAFEBAG_get0_attr(uVar2,0x9c);
      if (lVar3 != 0) {
        local_30 = *(longlong *)(lVar3 + 8);
      }
      lVar3 = PKCS12_SAFEBAG_get0_attr(uVar2,0x9d);
      if (lVar3 != 0) {
        puVar5 = *(undefined4 **)(lVar3 + 8);
      }
      iVar1 = PKCS12_SAFEBAG_get_nid(uVar2);
      if (iVar1 == 0x96) {
        if ((param_4 != (longlong *)0x0) && (*param_4 == 0)) {
          uVar2 = PKCS12_SAFEBAG_get0_p8inf(uVar2);
          lVar3 = EVP_PKCS82PKEY(uVar2);
          *param_4 = lVar3;
          bVar6 = lVar3 == 0;
LAB_14f7bd9b8:
          if (bVar6) {
            return 0;
          }
        }
      }
      else if (iVar1 == 0x97) {
        if ((param_4 != (longlong *)0x0) && (*param_4 == 0)) {
          lVar3 = PKCS12_decrypt_skey(uVar2,param_2,param_3);
          if (lVar3 == 0) {
            return 0;
          }
          lVar4 = EVP_PKCS82PKEY(lVar3);
          *param_4 = lVar4;
          PKCS8_PRIV_KEY_INFO_free(lVar3);
          bVar6 = *param_4 == 0;
          goto LAB_14f7bd9b8;
        }
      }
      else if (iVar1 == 0x98) {
        iVar1 = PKCS12_SAFEBAG_get_bag_nid(uVar2);
        if (iVar1 == 0x9e) {
          lVar3 = PKCS12_SAFEBAG_get1_cert(uVar2);
          if (lVar3 == 0) {
            return 0;
          }
          if ((puVar5 != (undefined4 *)0x0) &&
             (iVar1 = X509_keyid_set1(lVar3,*(undefined8 *)(puVar5 + 2),*puVar5), iVar1 == 0)) {
LAB_14f7bd9e9:
            X509_free(lVar3);
            return 0;
          }
          if ((local_30 != 0) && (iVar1 = ASN1_STRING_to_UTF8(&local_28,local_30), -1 < iVar1)) {
            iVar1 = X509_alias_set1(lVar3,local_28,iVar1);
            CRYPTO_free(local_28,"crypto\\pkcs12\\p12_kiss.c",0xe3);
            if (iVar1 == 0) goto LAB_14f7bd9e9;
          }
          iVar1 = OPENSSL_sk_push(param_5,lVar3);
          if (iVar1 == 0) goto LAB_14f7bd9e9;
        }
      }
      else if (iVar1 == 0x9b) {
        uVar2 = PKCS12_SAFEBAG_get0_safes(uVar2);
        iVar1 = FUN_14f7bd7c0(uVar2,param_2,param_3,param_4,param_5);
        bVar6 = iVar1 == 0;
        goto LAB_14f7bd9b8;
      }
      local_38 = local_38 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (local_38 < iVar1);
  }
  return 1;
}

// FUN_14f7bda10 @ 14f7bda10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7bda10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = PKCS12_unpack_authsafes();
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(lVar2);
  if (0 < iVar1) {
    do {
      lVar3 = OPENSSL_sk_value(lVar2,iVar4);
      iVar1 = OBJ_obj2nid(*(undefined8 *)(lVar3 + 0x18));
      if (iVar1 == 0x15) {
        lVar3 = PKCS12_unpack_p7data(lVar3);
LAB_14f7bdaa8:
        if (lVar3 == 0) {
LAB_14f7bdb1e:
          OPENSSL_sk_pop_free(lVar2,PKCS7_free);
          return 0;
        }
        iVar1 = FUN_14f7bd7c0(lVar3,param_2,param_3,param_4,param_5);
        if (iVar1 == 0) {
          OPENSSL_sk_pop_free(lVar3,PKCS12_SAFEBAG_free);
          goto LAB_14f7bdb1e;
        }
        OPENSSL_sk_pop_free(lVar3,PKCS12_SAFEBAG_free);
      }
      else if (iVar1 == 0x1a) {
        lVar3 = PKCS12_unpack_p7encdata(lVar3,param_2,param_3);
        goto LAB_14f7bdaa8;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(lVar2);
    } while (iVar4 < iVar1);
  }
  OPENSSL_sk_pop_free(lVar2,PKCS7_free);
  return 1;
}

// FUN_14f7bdb40 @ 14f7bdb40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdb40(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7bdb60 @ 14f7bdb60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdb60(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7bdb80 @ 14f7bdb80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdb80(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7bdba0 @ 14f7bdba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdba0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7bdbc0 @ 14f7bdbc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdbc0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7bdbe0 @ 14f7bdbe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdbe0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7bdc00 @ 14f7bdc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdc00(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f7bdc20 @ 14f7bdc20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdc20(void)

{
  OPENSSL_sk_pop();
  return;
}

// FUN_14f7bdc40 @ 14f7bdc40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdc40(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7bdc60 @ 14f7bdc60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bdc60(void)

{
  OPENSSL_sk_push();
  return;
}

