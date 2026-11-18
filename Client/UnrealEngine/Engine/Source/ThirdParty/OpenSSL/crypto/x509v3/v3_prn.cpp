// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// X509V3_EXT_print @ 14f7bbff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509V3_EXT_print(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar10;
  undefined8 local_38;
  longlong local_30;
  undefined4 uVar8;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar7 = 1;
  uVar8 = 1;
  lVar9 = 0;
  local_30 = 0;
  uVar3 = X509_EXTENSION_get_data(param_2);
  local_38 = ASN1_STRING_get0_data(uVar3);
  uVar1 = ASN1_STRING_length(uVar3);
  lVar4 = X509V3_EXT_get(param_2);
  if (lVar4 == 0) {
    if ((param_3 & 0xf0000) == 0) {
      return 0;
    }
    if ((param_3 & 0xf0000) == 0x10000) {
      BIO_printf(param_1,"%*s<Not Supported>",param_4,"");
      return 1;
    }
LAB_14f7bc073:
    if ((param_3 & 0xf0000) == 0x20000) {
      uVar7 = ASN1_parse_dump(param_1,local_38,uVar1,param_4,CONCAT44(uVar10,0xffffffff));
    }
    else if ((param_3 & 0xf0000) == 0x30000) {
      uVar7 = BIO_dump_indent(param_1,local_38,uVar1,param_4);
    }
    return uVar7;
  }
  if (*(code **)(lVar4 + 8) == (code *)0x0) {
    lVar5 = (**(code **)(lVar4 + 0x20))(0,&local_38,uVar1);
  }
  else {
    uVar3 = (**(code **)(lVar4 + 8))();
    lVar5 = ASN1_item_d2i(0,&local_38,uVar1,uVar3);
  }
  if (lVar5 == 0) {
    if ((param_3 & 0xf0000) == 0) {
      return 0;
    }
    if ((param_3 & 0xf0000) == 0x10000) {
      BIO_printf(param_1,"%*s<Parse Error>",param_4,"");
      return 1;
    }
    goto LAB_14f7bc073;
  }
  if (*(code **)(lVar4 + 0x30) == (code *)0x0) {
    lVar6 = lVar9;
    if (*(code **)(lVar4 + 0x40) == (code *)0x0) {
      if ((*(code **)(lVar4 + 0x50) != (code *)0x0) &&
         (iVar2 = (**(code **)(lVar4 + 0x50))(lVar4,lVar5,param_1,param_4), lVar6 = 0, iVar2 != 0))
      goto LAB_14f7bc1da;
    }
    else {
      local_30 = (**(code **)(lVar4 + 0x40))(lVar4,lVar5,0);
      if (local_30 != 0) {
        X509V3_EXT_val_prn(param_1,local_30,param_4,*(uint *)(lVar4 + 4) & 4);
        uVar8 = uVar7;
        goto LAB_14f7bc1da;
      }
    }
  }
  else {
    lVar6 = (**(code **)(lVar4 + 0x30))(lVar4,lVar5);
    if (lVar6 != 0) {
      BIO_printf(param_1,"%*s%s",param_4,"",lVar6);
      lVar9 = lVar6;
      uVar8 = uVar7;
      goto LAB_14f7bc1da;
    }
  }
  lVar9 = lVar6;
  uVar8 = 0;
LAB_14f7bc1da:
  OPENSSL_sk_pop_free(local_30,X509V3_conf_free);
  CRYPTO_free(lVar9,"crypto\\x509v3\\v3_prn.c",0x82);
  if (*(code **)(lVar4 + 8) == (code *)0x0) {
    (**(code **)(lVar4 + 0x18))(lVar5);
    return uVar8;
  }
  uVar3 = (**(code **)(lVar4 + 8))();
  ASN1_item_free(lVar5,uVar3);
  return uVar8;
}

// X509V3_EXT_print_fp @ 14f7bc250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
X509V3_EXT_print_fp(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = BIO_new_fp(param_1,0);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = X509V3_EXT_print(lVar2,param_2,param_3,param_4);
    BIO_free(lVar2);
  }
  return uVar1;
}

// X509V3_EXT_val_prn @ 14f7bc2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_val_prn(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if ((param_4 == 0) || (iVar1 = OPENSSL_sk_num(param_2), iVar1 == 0)) {
      BIO_printf(param_1,"%*s",param_3,"");
      iVar1 = OPENSSL_sk_num(param_2);
      if (iVar1 == 0) {
        BIO_puts(param_1,"<EMPTY>\n");
      }
    }
    iVar3 = 0;
    iVar1 = OPENSSL_sk_num(param_2);
    if (0 < iVar1) {
      do {
        if (param_4 == 0) {
          if (0 < iVar3) {
            BIO_printf(param_1,", ");
          }
        }
        else {
          BIO_printf(param_1,"%*s",param_3,"");
        }
        lVar2 = OPENSSL_sk_value(param_2,iVar3);
        if (*(longlong *)(lVar2 + 8) == 0) {
          BIO_puts(param_1,*(undefined8 *)(lVar2 + 0x10));
        }
        else if (*(longlong *)(lVar2 + 0x10) == 0) {
          BIO_puts(param_1,*(longlong *)(lVar2 + 8));
        }
        else {
          BIO_printf(param_1,"%s:%s");
        }
        if (param_4 != 0) {
          BIO_puts(param_1,"\n");
        }
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(param_2);
      } while (iVar3 < iVar1);
    }
  }
  return;
}

// X509V3_extensions_print @ 14f7bc410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509V3_extensions_print
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar1 = OPENSSL_sk_num(param_3);
  if (iVar1 < 1) {
    return 1;
  }
  if (param_2 != 0) {
    BIO_printf(param_1,"%*s%s:\n",param_5,"",param_2);
    param_5 = param_5 + 4;
  }
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_3);
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_3,iVar4);
      if ((param_5 != 0) && (iVar1 = BIO_printf(param_1,"%*s",param_5,""), iVar1 < 1)) {
        return 0;
      }
      uVar3 = X509_EXTENSION_get_object(uVar2);
      i2a_ASN1_OBJECT(param_1,uVar3);
      iVar1 = X509_EXTENSION_get_critical(uVar2);
      pcVar5 = "";
      if (iVar1 != 0) {
        pcVar5 = "critical";
      }
      iVar1 = BIO_printf(param_1,": %s\n",pcVar5);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = X509V3_EXT_print(param_1,uVar2,param_4,param_5 + 4);
      if (iVar1 == 0) {
        BIO_printf(param_1,"%*s",param_5 + 4,"");
        uVar2 = X509_EXTENSION_get_data(uVar2);
        ASN1_STRING_print(param_1,uVar2);
      }
      iVar1 = BIO_write(param_1,"\n",1);
      if (iVar1 < 1) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_3);
    } while (iVar4 < iVar1);
  }
  return 1;
}

// FUN_14f7bc5c0 @ 14f7bc5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bc5c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7bc5e0 @ 14f7bc5e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bc5e0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f7bc600 @ 14f7bc600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bc600(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7bc620 @ 14f7bc620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bc620(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7bc640 @ 14f7bc640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7bc640(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7bc660 @ 14f7bc660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7bc660(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
             undefined4 param_5,int param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  
  param_4 = param_4 & 0xf0000;
  if (param_4 == 0) {
    return 0;
  }
  if (param_4 == 0x10000) {
    pcVar2 = "%*s<Parse Error>";
    if (param_6 == 0) {
      pcVar2 = "%*s<Not Supported>";
    }
    BIO_printf(param_1,pcVar2,param_5,"");
  }
  else {
    if (param_4 == 0x20000) {
      uVar1 = ASN1_parse_dump();
      return uVar1;
    }
    if (param_4 == 0x30000) {
      uVar1 = BIO_dump_indent();
      return uVar1;
    }
  }
  return 1;
}

