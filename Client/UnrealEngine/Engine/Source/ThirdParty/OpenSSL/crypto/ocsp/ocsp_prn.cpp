// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// OCSP_REQUEST_print @ 1501b69c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_REQUEST_print(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = param_2[4];
  iVar2 = BIO_write(param_1,"OCSP Request Data:\n",0x13);
  if (0 < iVar2) {
    iVar2 = ASN1_INTEGER_get(*param_2);
    iVar2 = BIO_printf(param_1,"    Version: %lu (0x%lx)",iVar2 + 1,iVar2);
    if (0 < iVar2) {
      if (param_2[1] != 0) {
        iVar2 = BIO_write(param_1,"\n    Requestor Name: ",0x15);
        if (iVar2 < 1) {
          return 0;
        }
        GENERAL_NAME_print(param_1,param_2[1]);
      }
      iVar2 = BIO_write(param_1,"\n    Requestor List:\n",0x15);
      if (0 < iVar2) {
        iVar5 = 0;
        iVar6 = 0;
        iVar2 = OPENSSL_sk_num(param_2[2]);
        if (0 < iVar2) {
          do {
            puVar3 = (undefined8 *)OPENSSL_sk_value(param_2[2],iVar6);
            FUN_1501b70a0(param_1,*puVar3,8);
            iVar2 = X509V3_extensions_print(param_1,"Request Single Extensions",puVar3[1],param_3,8)
            ;
            if (iVar2 == 0) {
              return 0;
            }
            iVar6 = iVar6 + 1;
            iVar2 = OPENSSL_sk_num(param_2[2]);
          } while (iVar6 < iVar2);
        }
        iVar2 = X509V3_extensions_print(param_1,"Request Extensions",param_2[3],param_3,4);
        if (iVar2 != 0) {
          if (lVar1 != 0) {
            X509_signature_print(param_1,lVar1,*(undefined8 *)(lVar1 + 0x10));
            iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x18));
            if (0 < iVar2) {
              do {
                uVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x18),iVar5);
                X509_print(param_1,uVar4);
                uVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x18),iVar5);
                PEM_write_bio_X509(param_1,uVar4);
                iVar5 = iVar5 + 1;
                iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x18));
              } while (iVar5 < iVar2);
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

// OCSP_RESPONSE_print @ 1501b6ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * OCSP_RESPONSE_print(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  uint uVar13;
  undefined8 *puVar9;
  undefined8 *puVar14;
  
  puVar14 = (undefined8 *)param_2[1];
  puVar9 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
  iVar2 = BIO_puts(param_1,"OCSP Response Data:\n");
  puVar10 = puVar9;
  puVar7 = puVar9;
  if (0 < iVar2) {
    iVar2 = ASN1_ENUMERATED_get(*param_2);
    piVar6 = &DAT_1536f3b40;
    do {
      if (*piVar6 == iVar2) {
        pcVar12 = *(char **)(piVar6 + 2);
        goto LAB_1501b6c15;
      }
      puVar7 = (undefined8 *)((longlong)puVar7 + 1);
      piVar6 = piVar6 + 4;
    } while (puVar7 < &DAT_00000006);
    pcVar12 = "(UNKNOWN)";
LAB_1501b6c15:
    iVar2 = BIO_printf(param_1,"    OCSP Response Status: %s (0x%lx)\n",pcVar12,iVar2);
    puVar7 = puVar11;
    if (0 < iVar2) {
      if (puVar14 == (undefined8 *)0x0) {
LAB_1501b6c7c:
        return (undefined8 *)&DAT_00000001;
      }
      iVar2 = BIO_puts(param_1,"    Response Type: ");
      if ((0 < iVar2) && (iVar2 = i2a_ASN1_OBJECT(param_1,*puVar14), puVar10 = puVar8, 0 < iVar2)) {
        iVar2 = OBJ_obj2nid(*puVar14);
        if (iVar2 != 0x16d) {
          BIO_puts(param_1," (unknown response type)\n");
          goto LAB_1501b6c7c;
        }
        puVar7 = (undefined8 *)OCSP_response_get1_basic(param_2);
        if (puVar7 != (undefined8 *)0x0) {
          iVar2 = ASN1_INTEGER_get(*puVar7);
          iVar2 = BIO_printf(param_1,"\n    Version: %lu (0x%lx)\n",iVar2 + 1,iVar2);
          if ((0 < iVar2) && (iVar2 = BIO_puts(param_1,"    Responder Id: "), 0 < iVar2)) {
            if (*(int *)(puVar7 + 1) == 0) {
              X509_NAME_print_ex(param_1,puVar7[2],0,0x82031f);
            }
            else if (*(int *)(puVar7 + 1) == 1) {
              i2a_ASN1_STRING(param_1,puVar7[2],0);
            }
            iVar2 = BIO_printf(param_1,"\n    Produced At: ");
            if (((0 < iVar2) && (iVar2 = ASN1_GENERALIZEDTIME_print(param_1,puVar7[3]), iVar2 != 0))
               && (iVar2 = BIO_printf(param_1,"\n    Responses:\n"), 0 < iVar2)) {
              iVar2 = OPENSSL_sk_num(puVar7[4]);
              puVar14 = puVar9;
              if (0 < iVar2) {
                do {
                  lVar4 = OPENSSL_sk_value(puVar7[4],puVar14);
                  if (lVar4 != 0) {
                    puVar11 = (undefined8 *)OPENSSL_sk_value(puVar7[4],puVar14);
                    iVar2 = FUN_1501b70a0(param_1,*puVar11,4);
                    puVar10 = puVar9;
                    if (iVar2 < 1) goto LAB_1501b6f86;
                    piVar6 = (int *)puVar11[1];
                    uVar5 = OCSP_cert_status_str(*piVar6);
                    iVar2 = BIO_printf(param_1,"    Cert Status: %s",uVar5);
                    if (iVar2 < 1) goto LAB_1501b6f86;
                    if (*piVar6 == 1) {
                      puVar1 = *(undefined8 **)(piVar6 + 2);
                      iVar2 = BIO_printf(param_1,"\n    Revocation Time: ");
                      if ((iVar2 < 1) ||
                         (iVar2 = ASN1_GENERALIZEDTIME_print(param_1,*puVar1), puVar10 = puVar8,
                         iVar2 == 0)) goto LAB_1501b6f86;
                      if (puVar1[1] != 0) {
                        uVar3 = ASN1_ENUMERATED_get();
                        uVar5 = OCSP_crl_reason_str(uVar3);
                        iVar2 = BIO_printf(param_1,"\n    Revocation Reason: %s (0x%lx)",uVar5,uVar3
                                          );
                        if (iVar2 < 1) goto LAB_1501b6f86;
                      }
                    }
                    iVar2 = BIO_printf(param_1,"\n    This Update: ");
                    puVar10 = puVar8;
                    if (((((iVar2 < 1) ||
                          (iVar2 = ASN1_GENERALIZEDTIME_print(param_1,puVar11[2]), iVar2 == 0)) ||
                         ((puVar11[3] != 0 &&
                          ((iVar2 = BIO_printf(param_1,"\n    Next Update: "), iVar2 < 1 ||
                           (iVar2 = ASN1_GENERALIZEDTIME_print(param_1,puVar11[3]), iVar2 == 0))))))
                        || (iVar2 = BIO_write(param_1,"\n",1), iVar2 < 1)) ||
                       ((iVar2 = X509V3_extensions_print
                                           (param_1,"Response Single Extensions",puVar11[4],param_3,
                                            8), iVar2 == 0 ||
                        (iVar2 = BIO_write(param_1,"\n",1), iVar2 < 1)))) goto LAB_1501b6f86;
                  }
                  uVar13 = (int)puVar14 + 1;
                  puVar14 = (undefined8 *)(ulonglong)uVar13;
                  iVar2 = OPENSSL_sk_num(puVar7[4]);
                } while ((int)uVar13 < iVar2);
              }
              iVar2 = X509V3_extensions_print(param_1,"Response Extensions",puVar7[5],param_3,4);
              puVar10 = puVar8;
              if ((iVar2 != 0) &&
                 (iVar2 = X509_signature_print(param_1,puVar7 + 6,puVar7[8]), 0 < iVar2)) {
                iVar2 = OPENSSL_sk_num(puVar7[9]);
                if (0 < iVar2) {
                  do {
                    uVar5 = OPENSSL_sk_value(puVar7[9],puVar9);
                    X509_print(param_1,uVar5);
                    uVar5 = OPENSSL_sk_value(puVar7[9],puVar9);
                    PEM_write_bio_X509(param_1,uVar5);
                    uVar13 = (int)puVar9 + 1;
                    puVar9 = (undefined8 *)(ulonglong)uVar13;
                    iVar2 = OPENSSL_sk_num(puVar7[9]);
                  } while ((int)uVar13 < iVar2);
                }
                puVar10 = (undefined8 *)&DAT_00000001;
              }
            }
          }
        }
      }
    }
  }
LAB_1501b6f86:
  OCSP_BASICRESP_free(puVar7);
  return puVar10;
}

// OCSP_cert_status_str @ 1501b6fb0

char * OCSP_cert_status_str(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = &DAT_1536f3ba0;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 3);
  return "(UNKNOWN)";
}

// OCSP_crl_reason_str @ 1501b6ff0

char * OCSP_crl_reason_str(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = &DAT_1536f3bd0;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 8);
  return "(UNKNOWN)";
}

// OCSP_response_status_str @ 1501b7030

char * OCSP_response_status_str(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = &DAT_1536f3b40;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 6);
  return "(UNKNOWN)";
}

// FUN_1501b70a0 @ 1501b70a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1501b70a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  
  BIO_printf(param_1,"%*sCertificate ID:\n",param_3,"");
  iVar1 = (int)param_3 + 2;
  BIO_printf(param_1,"%*sHash Algorithm: ",iVar1,"");
  i2a_ASN1_OBJECT(param_1,*param_2);
  BIO_printf(param_1,"\n%*sIssuer Name Hash: ",iVar1,"");
  i2a_ASN1_STRING(param_1,param_2 + 2,0);
  BIO_printf(param_1,"\n%*sIssuer Key Hash: ",iVar1,"");
  i2a_ASN1_STRING(param_1,param_2 + 5,0);
  BIO_printf(param_1,"\n%*sSerial Number: ",iVar1,"");
  i2a_ASN1_INTEGER(param_1,param_2 + 8);
  BIO_printf(param_1,"\n");
  return 1;
}

// FUN_1501b71a0 @ 1501b71a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b71a0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_1501b71c0 @ 1501b71c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b71c0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_1501b71e0 @ 1501b71e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b71e0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_1501b7200 @ 1501b7200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7200(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_1501b7220 @ 1501b7220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7220(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_1501b7240 @ 1501b7240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1501b7240(void)

{
  OPENSSL_sk_value();
  return;
}

