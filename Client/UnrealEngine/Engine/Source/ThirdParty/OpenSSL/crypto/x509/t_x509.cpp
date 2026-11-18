// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// X509_aux_print @ 14f764b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 X509_aux_print(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_d8 [32];
  int local_b8;
  char *local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a0 = param_2;
  iVar2 = X509_trusted(param_2);
  if (iVar2 != 0) {
    lVar3 = X509_get0_trust_objects(param_2);
    lVar4 = X509_get0_reject_objects(param_2);
    if (lVar3 == 0) {
      BIO_printf(param_1,"%*sNo Trusted Uses.\n",param_3,"");
    }
    else {
      local_b8 = param_3 + 2;
      local_b0 = "";
      bVar1 = true;
      BIO_printf(param_1,"%*sTrusted Uses:\n%*s",param_3,"");
      local_a8 = 0;
      iVar2 = OPENSSL_sk_num(lVar3);
      if (local_a8 < iVar2) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            BIO_puts(param_1,", ");
          }
          uVar5 = OPENSSL_sk_value(lVar3,local_a8);
          OBJ_obj2txt(local_98,0x50,uVar5);
          BIO_puts(param_1,local_98);
          local_a8 = local_a8 + 1;
          iVar2 = OPENSSL_sk_num(lVar3);
        } while (local_a8 < iVar2);
      }
      BIO_puts(param_1,"\n");
    }
    if (lVar4 == 0) {
      BIO_printf(param_1,"%*sNo Rejected Uses.\n",param_3,"");
    }
    else {
      local_b8 = param_3 + 2;
      local_b0 = "";
      bVar1 = true;
      BIO_printf(param_1,"%*sRejected Uses:\n%*s",param_3,"");
      local_a8 = 0;
      iVar2 = OPENSSL_sk_num(lVar4);
      if (local_a8 < iVar2) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            BIO_puts(param_1,", ");
          }
          uVar5 = OPENSSL_sk_value(lVar4,local_a8);
          OBJ_obj2txt(local_98,0x50,uVar5);
          BIO_puts(param_1,local_98);
          local_a8 = local_a8 + 1;
          iVar2 = OPENSSL_sk_num(lVar4);
        } while (local_a8 < iVar2);
      }
      BIO_puts(param_1,"\n");
    }
    uVar5 = local_a0;
    pcVar6 = (char *)X509_alias_get0(local_a0,&local_a8);
    if (pcVar6 != (char *)0x0) {
      local_b8 = local_a8;
      local_b0 = pcVar6;
      BIO_printf(param_1,"%*sAlias: %.*s\n",param_3,"");
    }
    lVar3 = X509_keyid_get0(uVar5,&local_a4);
    if (lVar3 != 0) {
      BIO_printf(param_1,"%*sKey Id: ",param_3,"");
      local_a8 = 0;
      if (0 < local_a4) {
        do {
          pcVar6 = "";
          if (local_a8 != 0) {
            pcVar6 = ":";
          }
          BIO_printf(param_1,"%s%02X",pcVar6,*(undefined1 *)(local_a8 + lVar3));
          local_a8 = local_a8 + 1;
        } while (local_a8 < local_a4);
      }
      BIO_write(param_1,"\n",1);
    }
  }
  return 1;
}

// X509_ocspid_print @ 14f764e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 X509_ocspid_print(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [24];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f764e86;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar5 = 0;
  iVar1 = BIO_printf(param_1,"        Subject OCSP hash: ");
  lVar3 = lVar5;
  if (0 < iVar1) {
    uVar2 = X509_get_subject_name(param_2);
    iVar1 = i2d_X509_NAME(uVar2,0);
    lVar3 = CRYPTO_malloc((longlong)iVar1,"crypto\\x509\\t_x509.c",0xee);
    local_58 = lVar3;
    if (lVar3 != 0) {
      i2d_X509_NAME(uVar2,&local_58);
      local_68 = EVP_sha1();
      local_60 = 0;
      iVar1 = EVP_Digest(lVar3,(longlong)iVar1,local_50,0);
      lVar6 = lVar5;
      if (iVar1 != 0) {
        do {
          iVar1 = BIO_printf(param_1,"%02X",local_50[lVar6]);
          if (iVar1 < 1) goto LAB_14f765018;
          lVar6 = lVar6 + 1;
        } while (lVar6 < 0x14);
        CRYPTO_free(lVar3,"crypto\\x509\\t_x509.c",0xf8);
        lVar3 = 0;
        iVar1 = BIO_printf(param_1,"\n        Public key OCSP hash: ");
        if ((0 < iVar1) && (lVar6 = X509_get0_pubkey_bitstr(param_2), lVar6 != 0)) {
          uVar2 = EVP_sha1();
          iVar1 = ASN1_STRING_length(lVar6);
          uVar4 = ASN1_STRING_get0_data(lVar6);
          local_60 = 0;
          local_68 = uVar2;
          iVar1 = EVP_Digest(uVar4,(longlong)iVar1,local_50,0);
          if (iVar1 != 0) {
            while (iVar1 = BIO_printf(param_1,"%02X",local_50[lVar5]), 0 < iVar1) {
              lVar5 = lVar5 + 1;
              if (0x13 < lVar5) {
                BIO_printf(param_1,"\n");
                return 1;
              }
            }
          }
        }
      }
    }
  }
LAB_14f765018:
  CRYPTO_free(lVar3,"crypto\\x509\\t_x509.c",0x112);
  return 0;
}

// X509_print @ 14f765060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_print(undefined8 param_1,undefined8 param_2)

{
  X509_print_ex(param_1,param_2,0,0);
  return;
}

// X509_print_ex @ 14f765090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_print_ex(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar15;
  longlong local_48;
  longlong local_40;
  ulonglong uVar10;
  
  local_40 = 0x14f7650aa;
  uVar10 = 0;
  uVar9 = 0;
  bVar14 = (param_3 & 0xf0000) != 0x40000;
  uVar1 = 10;
  if (bVar14) {
    uVar1 = 0x20;
  }
  uVar12 = 0xc;
  if (bVar14) {
    uVar12 = uVar10;
  }
  if (param_3 == 0) {
    uVar12 = 0x10;
  }
  uVar11 = uVar10;
  if (((param_4 & 1) == 0) &&
     ((iVar2 = BIO_write(param_1,"Certificate:\n",0xd), iVar2 < 1 ||
      (iVar2 = BIO_write(param_1,"    Data:\n",10), iVar2 < 1)))) goto LAB_14f765649;
  if ((param_4 & 2) == 0) {
    uVar3 = X509_get_version(param_2);
    if (uVar3 < 3) {
      in_stack_ffffffffffffffa8 =
           CONCAT44((int)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20),uVar3);
      iVar2 = BIO_printf(param_1,"%8sVersion: %ld (0x%lx)\n","",uVar3 + 1,in_stack_ffffffffffffffa8)
      ;
    }
    else {
      iVar2 = BIO_printf(param_1,"%8sVersion: Unknown (%ld)\n","",uVar3);
    }
    if (iVar2 < 1) goto LAB_14f765649;
  }
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((param_4 & 4) == 0) {
    iVar2 = BIO_write(param_1,"        Serial Number:",0x16);
    if (iVar2 < 1) goto LAB_14f765649;
    puVar4 = (uint *)X509_get_serialNumber(param_2);
    if ((int)*puVar4 < 5) {
      ERR_set_mark();
      iVar2 = ASN1_INTEGER_get(puVar4);
      ERR_pop_to_mark();
      if (iVar2 != -1) {
        if (puVar4[1] == 0x102) {
          iVar2 = -iVar2;
          pcVar8 = "-";
        }
        else {
          pcVar8 = "";
        }
        iVar2 = BIO_printf(param_1," %s%lu (%s0x%lx)\n",pcVar8,iVar2,pcVar8,iVar2);
        uVar15 = (undefined4)((ulonglong)pcVar8 >> 0x20);
        if (iVar2 < 1) goto LAB_14f765649;
        goto LAB_14f7652a7;
      }
    }
    pcVar8 = "";
    if (puVar4[1] == 0x102) {
      pcVar8 = " (Negative)";
    }
    iVar2 = BIO_printf(param_1,"\n%12s%s","",pcVar8);
    uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    uVar11 = uVar9;
    if (iVar2 < 1) goto LAB_14f765649;
    uVar3 = *puVar4;
    uVar7 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)uVar3) {
      do {
        uVar13 = (int)uVar11 + 1;
        uVar5 = 0x3a;
        if (uVar13 == uVar3) {
          uVar5 = 10;
        }
        iVar2 = BIO_printf(param_1,"%02x%c",*(undefined1 *)(*(longlong *)(puVar4 + 2) + uVar7),uVar5
                          );
        uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        uVar11 = uVar9;
        if (iVar2 < 1) goto LAB_14f765649;
        uVar3 = *puVar4;
        uVar7 = uVar7 + 1;
        uVar11 = (ulonglong)uVar13;
      } while ((int)uVar13 < (int)uVar3);
    }
  }
LAB_14f7652a7:
  if ((param_4 & 8) == 0) {
    uVar5 = X509_get0_tbs_sigalg(param_2);
    iVar2 = BIO_puts(param_1,"    ");
    uVar11 = uVar10;
    if ((iVar2 < 1) || (iVar2 = X509_signature_print(param_1,uVar5,0), uVar11 = uVar9, iVar2 < 1))
    goto LAB_14f765649;
  }
  if ((param_4 & 0x10) == 0) {
    iVar2 = BIO_printf(param_1,"        Issuer:%c",uVar1);
    uVar11 = uVar9;
    if (iVar2 < 1) goto LAB_14f765649;
    uVar5 = X509_get_issuer_name(param_2);
    iVar2 = X509_NAME_print_ex(param_1,uVar5,uVar12,param_3);
    if ((iVar2 < 0) || (iVar2 = BIO_write(param_1,"\n",1), iVar2 < 1)) goto LAB_14f765649;
  }
  if ((param_4 & 0x20) == 0) {
    iVar2 = BIO_write(param_1,"        Validity\n",0x11);
    uVar11 = uVar9;
    if ((iVar2 < 1) || (iVar2 = BIO_write(param_1,"            Not Before: ",0x18), iVar2 < 1))
    goto LAB_14f765649;
    uVar5 = X509_get0_notBefore(param_2);
    iVar2 = ASN1_TIME_print(param_1,uVar5);
    if ((iVar2 == 0) || (iVar2 = BIO_write(param_1,"\n            Not After : ",0x19), iVar2 < 1))
    goto LAB_14f765649;
    uVar5 = X509_get0_notAfter(param_2);
    iVar2 = ASN1_TIME_print(param_1,uVar5);
    if ((iVar2 == 0) || (iVar2 = BIO_write(param_1,"\n",1), iVar2 < 1)) goto LAB_14f765649;
  }
  if ((param_4 & 0x40) == 0) {
    iVar2 = BIO_printf(param_1,"        Subject:%c",uVar1);
    uVar11 = uVar9;
    if (iVar2 < 1) goto LAB_14f765649;
    uVar5 = X509_get_subject_name(param_2);
    iVar2 = X509_NAME_print_ex(param_1,uVar5,uVar12,param_3);
    if ((iVar2 < 0) || (iVar2 = BIO_write(param_1,"\n",1), iVar2 < 1)) goto LAB_14f765649;
  }
  if (-1 < (char)param_4) {
    uVar5 = X509_get_X509_PUBKEY(param_2);
    X509_PUBKEY_get0_param(&local_40,0,0,0,uVar5);
    uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
    iVar2 = BIO_write(param_1,"        Subject Public Key Info:\n",0x21);
    uVar11 = uVar9;
    if ((((iVar2 < 1) || (iVar2 = BIO_printf(param_1,"%12sPublic Key Algorithm: ",""), iVar2 < 1))
        || (iVar2 = i2a_ASN1_OBJECT(param_1,local_40), iVar2 < 1)) ||
       (iVar2 = BIO_puts(param_1,"\n"), iVar2 < 1)) goto LAB_14f765649;
    lVar6 = X509_get0_pubkey(param_2);
    if (lVar6 == 0) {
      BIO_printf(param_1,"%12sUnable to load Public Key\n","");
      ERR_print_errors(param_1);
    }
    else {
      EVP_PKEY_print_public(param_1,lVar6,0x10);
    }
  }
  if (((param_4 >> 0xc & 1) != 0) ||
     (((X509_get0_uids(param_2,&local_48,&local_40), local_48 == 0 ||
       ((iVar2 = BIO_printf(param_1,"%8sIssuer Unique ID: ",""), uVar11 = uVar9, 0 < iVar2 &&
        (iVar2 = X509_signature_dump(param_1,local_48,0xc), iVar2 != 0)))) &&
      ((local_40 == 0 ||
       ((iVar2 = BIO_printf(param_1,"%8sSubject Unique ID: ",""), uVar11 = uVar9, 0 < iVar2 &&
        (iVar2 = X509_signature_dump(param_1,local_40,0xc), iVar2 != 0)))))))) {
    if ((param_4 >> 8 & 1) == 0) {
      uVar5 = X509_get0_extensions(param_2);
      X509V3_extensions_print(param_1,"X509v3 extensions",uVar5,param_4,CONCAT44(uVar15,8));
    }
    if ((param_4 >> 9 & 1) == 0) {
      X509_get0_signature(&local_40,&local_48,param_2);
      iVar2 = X509_signature_print(param_1,local_48,local_40);
      uVar11 = uVar9;
      if (iVar2 < 1) goto LAB_14f765649;
    }
    if (((param_4 >> 10 & 1) != 0) ||
       (iVar2 = X509_aux_print(param_1,param_2,0), uVar11 = uVar9, iVar2 != 0)) {
      uVar11 = 1;
    }
  }
LAB_14f765649:
  CRYPTO_free(0,"crypto\\x509\\t_x509.c",0xd9);
  return uVar11;
}

// X509_print_ex_fp @ 14f765680

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
X509_print_ex_fp(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f7656a0;
  uVar2 = BIO_s_file();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    ERR_put_error(0xb,0x76,7,"crypto\\x509\\t_x509.c",0x20,uVar4);
    uVar1 = 0;
  }
  else {
    BIO_ctrl(lVar3,0x6a,0,param_1);
    uVar1 = X509_print_ex(lVar3,param_2,param_3,param_4);
    BIO_free(lVar3);
  }
  return uVar1;
}

// X509_print_fp @ 14f765740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_print_fp(undefined8 param_1,undefined8 param_2)

{
  X509_print_ex_fp(param_1,param_2,0,0);
  return;
}

// X509_signature_dump @ 14f765770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_signature_dump(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  
  uVar1 = *param_2;
  uVar5 = 0;
  lVar2 = *(longlong *)(param_2 + 2);
  uVar6 = uVar5;
  if (0 < (int)uVar1) {
    do {
      iVar4 = (int)uVar6;
      if ((iVar4 == (iVar4 / 0x12) * 0x12) &&
         ((iVar3 = BIO_write(param_1,"\n",1), iVar3 < 1 ||
          (iVar3 = BIO_indent(param_1,param_3,param_3), iVar3 < 1)))) {
        return false;
      }
      uVar6 = (ulonglong)(iVar4 + 1U);
      pcVar7 = ":";
      if (iVar4 + 1U == uVar1) {
        pcVar7 = "";
      }
      iVar4 = BIO_printf(param_1,"%02x%s",*(undefined1 *)(uVar5 + lVar2),pcVar7);
      if (iVar4 < 1) {
        return false;
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)(int)uVar1);
  }
  iVar4 = BIO_write(param_1,"\n",1);
  return iVar4 == 1;
}

// X509_signature_print @ 14f765880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_signature_print(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f765895;
  iVar1 = BIO_puts(param_1,"    Signature Algorithm: ");
  if (0 < iVar1) {
    iVar1 = i2a_ASN1_OBJECT(param_1,*param_2);
    if (0 < iVar1) {
      iVar1 = OBJ_obj2nid(*param_2);
      if (iVar1 != 0) {
        iVar1 = OBJ_find_sigid_algs(iVar1,local_18,local_res20);
        if (iVar1 != 0) {
          lVar2 = EVP_PKEY_asn1_find(0,local_res20[0]);
          if ((lVar2 != 0) && (*(code **)(lVar2 + 0xa0) != (code *)0x0)) {
            uVar3 = (**(code **)(lVar2 + 0xa0))(param_1,param_2,param_3,9,0);
            return uVar3;
          }
        }
      }
      if (param_3 != 0) {
        uVar3 = X509_signature_dump(param_1,param_3,9);
        return uVar3;
      }
      iVar1 = BIO_puts(param_1,"\n");
      return (ulonglong)(0 < iVar1);
    }
  }
  return 0;
}

// FUN_14f765990 @ 14f765990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f765990(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7659b0 @ 14f7659b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7659b0(void)

{
  OPENSSL_sk_value();
  return;
}

