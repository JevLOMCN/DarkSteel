// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 37

// SRP_VBASE_free @ 14f6e38d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SRP_VBASE_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    OPENSSL_sk_pop_free(*param_1,SRP_user_pwd_free);
    OPENSSL_sk_free(param_1[1]);
    CRYPTO_free(param_1[2],"crypto\\srp\\srp_vfy.c",300);
    CRYPTO_free(param_1,"crypto\\srp\\srp_vfy.c",0x12d);
  }
  return;
}

// SRP_VBASE_get1_by_user @ 14f6e3940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * SRP_VBASE_get1_by_user(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f6e394e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar4 = 0;
  if (param_1 == 0) {
    return (longlong *)0x0;
  }
  lVar2 = FUN_14f6e4980();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_14f6e4c60(lVar2);
    return plVar3;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return (longlong *)0x0;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return (longlong *)0x0;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)FUN_14f6e4780();
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar3[4] = *(longlong *)(param_1 + 0x20);
  plVar3[3] = lVar2;
  if (param_2 != 0) {
    lVar2 = CRYPTO_strdup(param_2,"crypto\\srp\\srp_vfy.c",0xd6);
    *plVar3 = lVar2;
    if (lVar2 == 0) goto LAB_14f6e3ac9;
  }
  iVar1 = RAND_priv_bytes(local_58,0x14);
  if ((0 < iVar1) && (lVar4 = EVP_MD_CTX_new(), lVar4 != 0)) {
    uVar5 = EVP_sha1();
    iVar1 = EVP_DigestInit_ex(lVar4,uVar5,0);
    if (iVar1 != 0) {
      lVar2 = -1;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x10) + lVar6) != '\0');
      iVar1 = EVP_DigestUpdate(lVar4);
      if (iVar1 != 0) {
        do {
          lVar2 = lVar2 + 1;
        } while (*(char *)(param_2 + lVar2) != '\0');
        iVar1 = EVP_DigestUpdate(lVar4,param_2,lVar2);
        if ((iVar1 != 0) && (iVar1 = EVP_DigestFinal_ex(lVar4,local_40,0), iVar1 != 0)) {
          EVP_MD_CTX_free(lVar4);
          lVar4 = 0;
          lVar2 = BN_bin2bn(local_58,0x14,0);
          lVar6 = BN_bin2bn(local_40,0x14,0);
          plVar3[2] = lVar2;
          plVar3[1] = lVar6;
          if ((lVar6 != 0) && (lVar2 != 0)) {
            return plVar3;
          }
        }
      }
    }
  }
LAB_14f6e3ac9:
  EVP_MD_CTX_free(lVar4);
  SRP_user_pwd_free(plVar3);
  return (longlong *)0x0;
}

// SRP_VBASE_get_by_user @ 14f6e3b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SRP_VBASE_get_by_user(void)

{
  FUN_14f6e4980();
  return;
}

// SRP_VBASE_init @ 14f6e3b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SRP_VBASE_init(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  int iVar12;
  
  uVar2 = OPENSSL_sk_new_null();
  lVar10 = 0;
  lVar5 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  uVar11 = 3;
  if ((lVar4 != 0) && (iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2), 0 < iVar1)) {
    uVar11 = 1;
    lVar5 = TXT_DB_read(lVar4,6);
    if (lVar5 != 0) {
      uVar11 = 4;
      if (param_1[2] != 0) {
        plVar6 = (longlong *)SRP_get_default_gN(0);
        lVar10 = *plVar6;
      }
      iVar12 = 0;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 8));
      if (0 < iVar1) {
        do {
          puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar12);
          if (*(char *)*puVar7 == 'I') {
            plVar6 = (longlong *)CRYPTO_malloc(0x18,"crypto\\srp\\srp_vfy.c",0x1a2);
            if (plVar6 != (longlong *)0x0) {
              lVar8 = CRYPTO_strdup(puVar7[3],"crypto\\srp\\srp_vfy.c",0x1a5);
              *plVar6 = lVar8;
              if (lVar8 != 0) {
                lVar8 = FUN_14f6e4530(param_1[1],puVar7[1]);
                plVar6[2] = lVar8;
                if (lVar8 != 0) {
                  lVar8 = FUN_14f6e4530(param_1[1],puVar7[2]);
                  plVar6[1] = lVar8;
                  if ((lVar8 != 0) && (iVar1 = OPENSSL_sk_insert(uVar2,plVar6,0), iVar1 != 0)) {
                    if (param_1[2] != 0) {
                      lVar10 = puVar7[3];
                    }
                    goto LAB_14f6e3d2e;
                  }
                }
              }
              CRYPTO_free(*plVar6,"crypto\\srp\\srp_vfy.c",0x1e0);
              CRYPTO_free(plVar6,"crypto\\srp\\srp_vfy.c",0x1e1);
            }
            goto LAB_14f6e3e02;
          }
          if ((*(char *)*puVar7 == 'V') && (lVar8 = FUN_14f6e4650(puVar7[4],uVar2), lVar8 != 0)) {
            uVar11 = 4;
            puVar9 = (undefined8 *)FUN_14f6e4780();
            if (puVar9 != (undefined8 *)0x0) {
              uVar3 = *(undefined8 *)(lVar8 + 8);
              puVar9[4] = *(undefined8 *)(lVar8 + 0x10);
              puVar9[3] = uVar3;
              iVar1 = FUN_14f6e47e0(puVar9,puVar7[3],puVar7[5]);
              if (iVar1 != 0) {
                uVar11 = 2;
                iVar1 = FUN_14f6e4870(puVar9,puVar7[2],puVar7[1]);
                if ((iVar1 != 0) && (iVar1 = OPENSSL_sk_insert(*param_1,puVar9,0), iVar1 != 0))
                goto LAB_14f6e3d2e;
              }
              BN_free(puVar9[1]);
              BN_clear_free(puVar9[2]);
              CRYPTO_free(*puVar9,"crypto\\srp\\srp_vfy.c",0xb6);
              CRYPTO_free(puVar9[5],"crypto\\srp\\srp_vfy.c",0xb7);
              CRYPTO_free(puVar9,"crypto\\srp\\srp_vfy.c",0xb8);
            }
            goto LAB_14f6e3e02;
          }
LAB_14f6e3d2e:
          iVar12 = iVar12 + 1;
          iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar5 + 8));
        } while (iVar12 < iVar1);
      }
      if (lVar10 != 0) {
        lVar10 = FUN_14f6e4650(lVar10,uVar2);
        if (lVar10 == 0) {
          uVar11 = 2;
          goto LAB_14f6e3e02;
        }
        param_1[3] = *(undefined8 *)(lVar10 + 8);
        param_1[4] = *(undefined8 *)(lVar10 + 0x10);
      }
      uVar11 = 0;
    }
  }
LAB_14f6e3e02:
  TXT_DB_free(lVar5);
  BIO_free_all(lVar4);
  OPENSSL_sk_free(uVar2);
  return uVar11;
}

// SRP_VBASE_new @ 14f6e3e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * SRP_VBASE_new(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)CRYPTO_malloc(0x28,"crypto\\srp\\srp_vfy.c",0x111);
  if (plVar1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar2 = OPENSSL_sk_new_null();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = OPENSSL_sk_new_null();
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      plVar1[3] = 0;
      plVar1[4] = 0;
      plVar1[2] = 0;
      if (param_1 == 0) {
        return plVar1;
      }
      lVar2 = CRYPTO_strdup(param_1,"crypto\\srp\\srp_vfy.c",0x11d);
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        return plVar1;
      }
      OPENSSL_sk_free(*plVar1);
      OPENSSL_sk_free(plVar1[1]);
      uVar3 = 0x120;
      goto LAB_14f6e3ef0;
    }
  }
  uVar3 = 0x117;
LAB_14f6e3ef0:
  CRYPTO_free(plVar1,"crypto\\srp\\srp_vfy.c",uVar3);
  return (longlong *)0x0;
}

// SRP_create_verifier @ 14f6e3f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * SRP_create_verifier(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                          longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_1468 [32];
  longlong local_1448;
  char *local_1440;
  int local_1438;
  longlong local_1430;
  char *local_1428;
  longlong local_1420;
  longlong local_1418;
  longlong local_1410;
  longlong *local_1408;
  undefined1 local_13f8 [2512];
  undefined1 local_a28 [2512];
  ulonglong local_58;
  char *pcVar7;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1468;
  pcVar7 = (char *)0x0;
  pcVar6 = (char *)0x0;
  pcVar5 = (char *)0x0;
  pcVar11 = (char *)0x0;
  pcVar9 = (char *)0x0;
  local_1420 = 0;
  local_1430 = 0;
  local_1428 = (char *)0x0;
  local_1438 = 0;
  pcVar4 = pcVar7;
  pcVar8 = pcVar7;
  pcVar10 = pcVar7;
  pcVar12 = pcVar7;
  local_1418 = param_2;
  local_1410 = param_1;
  local_1408 = param_4;
  if ((((param_1 != 0) && (pcVar4 = pcVar5, pcVar10 = pcVar9, pcVar12 = pcVar11, param_2 != 0)) &&
      (param_3 != (longlong *)0x0)) && (pcVar8 = pcVar6, param_4 != (longlong *)0x0)) {
    if (param_5 == 0) {
      plVar3 = (longlong *)SRP_get_default_gN(param_6);
      if (plVar3 == (longlong *)0x0) goto LAB_14f6e41cb;
      lVar2 = plVar3[2];
      pcVar11 = (char *)plVar3[1];
      pcVar13 = (char *)*plVar3;
    }
    else {
      iVar1 = FUN_14f6e4d50(local_13f8,0x9c4);
      pcVar4 = pcVar7;
      pcVar8 = pcVar7;
      pcVar10 = pcVar7;
      pcVar12 = pcVar7;
      if (((iVar1 < 1) ||
          (lVar2 = BN_bin2bn(local_13f8,iVar1,0), pcVar4 = pcVar5, pcVar10 = pcVar9,
          pcVar12 = pcVar11, local_1420 = lVar2, lVar2 == 0)) ||
         ((iVar1 = FUN_14f6e4d50(local_13f8,0x9c4,param_6), iVar1 < 1 ||
          (pcVar11 = (char *)BN_bin2bn(local_13f8,iVar1,0), pcVar8 = pcVar6, pcVar12 = pcVar11,
          pcVar11 == (char *)0x0)))) goto LAB_14f6e41cb;
      pcVar13 = "*";
      pcVar7 = pcVar11;
    }
    pcVar12 = pcVar7;
    if (*param_3 == 0) {
      iVar1 = RAND_bytes(local_a28,0x14);
      pcVar4 = pcVar5;
      pcVar8 = pcVar6;
      pcVar10 = pcVar9;
      if (iVar1 < 1) goto LAB_14f6e41cb;
      iVar1 = 0x14;
    }
    else {
      iVar1 = FUN_14f6e4d50(local_a28,0x9c4);
      pcVar4 = pcVar5;
      pcVar8 = pcVar6;
      pcVar10 = pcVar9;
      if (iVar1 < 1) goto LAB_14f6e41cb;
    }
    local_1430 = BN_bin2bn(local_a28,iVar1,0);
    pcVar4 = pcVar5;
    pcVar8 = pcVar6;
    pcVar10 = pcVar9;
    if (((local_1430 != 0) &&
        (local_1448 = lVar2, local_1440 = pcVar11,
        iVar1 = SRP_create_verifier_BN(local_1410,local_1418,&local_1430,&local_1428),
        pcVar10 = local_1428, iVar1 != 0)) && (iVar1 = BN_bn2bin(local_1428,local_13f8), -1 < iVar1)
       ) {
      iVar1 = BN_num_bits(pcVar10);
      local_1438 = ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3) * 2;
      pcVar4 = (char *)CRYPTO_malloc((longlong)local_1438,"crypto\\srp\\srp_vfy.c",0x27f);
      if (pcVar4 != (char *)0x0) {
        iVar1 = BN_num_bits(pcVar10);
        iVar1 = FUN_14f6e4ee0(pcVar4,local_13f8,(int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3);
        if (iVar1 != 0) {
          if (*param_3 == 0) {
            lVar2 = CRYPTO_malloc(0x28,"crypto\\srp\\srp_vfy.c",0x287);
            if (lVar2 == 0) goto LAB_14f6e41cb;
            iVar1 = FUN_14f6e4ee0(lVar2,local_a28,0x14);
            if (iVar1 == 0) {
              CRYPTO_free(lVar2,"crypto\\srp\\srp_vfy.c",0x28b);
              goto LAB_14f6e41cb;
            }
            *param_3 = lVar2;
          }
          *local_1408 = (longlong)pcVar4;
          pcVar4 = (char *)0x0;
          pcVar8 = pcVar13;
        }
      }
    }
  }
LAB_14f6e41cb:
  BN_free(local_1420);
  BN_free(pcVar12);
  CRYPTO_clear_free(pcVar4,(longlong)local_1438,"crypto\\srp\\srp_vfy.c",0x298);
  BN_clear_free(local_1430);
  BN_clear_free(pcVar10);
  return pcVar8;
}

// SRP_create_verifier_BN @ 14f6e4240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong SRP_create_verifier_BN
                   (longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                   longlong param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a68 [32];
  longlong local_a48;
  longlong local_a38;
  longlong local_a30;
  undefined1 local_a28 [2512];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f6e4257;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_a68;
  lVar8 = 0;
  lVar7 = 0;
  lVar6 = 0;
  local_a30 = param_6;
  local_a38 = param_1;
  lVar2 = BN_CTX_new();
  lVar5 = 0;
  lVar3 = lVar8;
  lVar4 = lVar8;
  if ((local_a38 != 0) && (lVar3 = lVar5, lVar4 = lVar6, param_2 != 0)) {
    lVar4 = lVar8;
    if (param_3 == (longlong *)0x0) goto LAB_14f6e4384;
    lVar4 = lVar6;
    if ((((((param_4 != (longlong *)0x0) && (lVar8 = lVar7, param_5 != 0)) && (local_a30 != 0)) &&
         (lVar2 != 0)) &&
        ((lVar3 = *param_3, lVar3 != 0 ||
         ((iVar1 = RAND_bytes(local_a28,0x14), lVar3 = lVar5, 0 < iVar1 &&
          (lVar3 = BN_bin2bn(local_a28,0x14,0), lVar3 != 0)))))) &&
       ((lVar4 = SRP_Calc_x(lVar3,local_a38,param_2), lVar4 != 0 && (lVar5 = BN_new(), lVar5 != 0)))
       ) {
      local_a48 = lVar2;
      iVar1 = BN_mod_exp(lVar5,local_a30,lVar4,param_5);
      if (iVar1 == 0) {
        BN_clear_free(lVar5);
      }
      else {
        *param_3 = lVar3;
        lVar8 = 1;
        *param_4 = lVar5;
      }
    }
  }
  if ((param_3 != (longlong *)0x0) && (*param_3 != lVar3)) {
    BN_clear_free(lVar3);
  }
LAB_14f6e4384:
  BN_clear_free(lVar4);
  BN_CTX_free(lVar2);
  return lVar8;
}

// FUN_14f6e43d0 @ 14f6e43d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e43d0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(*param_1,"crypto\\srp\\srp_vfy.c",0x14d);
    BN_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\srp\\srp_vfy.c",0x14f);
  }
  return;
}

// FUN_14f6e4430 @ 14f6e4430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14f6e4430(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_a08 [32];
  undefined1 local_9e8 [2512];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6e4440;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a08;
  plVar2 = (longlong *)CRYPTO_malloc(0x10,"crypto\\srp\\srp_vfy.c",0x134);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = FUN_14f6e4d50(local_9e8,0x9c4,param_1);
    if (-1 < iVar1) {
      lVar3 = CRYPTO_strdup(param_1,"crypto\\srp\\srp_vfy.c",0x13d);
      *plVar2 = lVar3;
      if (lVar3 != 0) {
        lVar3 = BN_bin2bn(local_9e8,iVar1,0);
        plVar2[1] = lVar3;
        if (lVar3 != 0) {
          return plVar2;
        }
        CRYPTO_free(*plVar2,"crypto\\srp\\srp_vfy.c",0x143);
      }
    }
    CRYPTO_free(plVar2,"crypto\\srp\\srp_vfy.c",0x145);
  }
  return (longlong *)0x0;
}

// FUN_14f6e4530 @ 14f6e4530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e4530(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = 0;
  iVar3 = OPENSSL_sk_num();
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(param_1,iVar6);
      pcVar5 = (char *)*puVar4;
      lVar7 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar7];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return puVar4[1];
      }
      iVar6 = iVar6 + 1;
      iVar3 = OPENSSL_sk_num(param_1);
    } while (iVar6 < iVar3);
  }
  puVar4 = (undefined8 *)FUN_14f6e4430(param_2);
  if (puVar4 != (undefined8 *)0x0) {
    iVar3 = OPENSSL_sk_insert(param_1,puVar4,0);
    if (0 < iVar3) {
      return puVar4[1];
    }
    CRYPTO_free(*puVar4,"crypto\\srp\\srp_vfy.c",0x14d);
    BN_free(puVar4[1]);
    CRYPTO_free(puVar4,"crypto\\srp\\srp_vfy.c",0x14f);
  }
  return 0;
}

// FUN_14f6e4650 @ 14f6e4650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f6e4650(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    iVar6 = 0;
    iVar3 = OPENSSL_sk_num(param_2);
    if (0 < iVar3) {
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(param_2,iVar6);
        if (puVar4 != (undefined8 *)0x0) {
          if (param_1 == 0) {
            return puVar4;
          }
          pcVar5 = (char *)*puVar4;
          lVar7 = param_1 - (longlong)pcVar5;
          do {
            cVar1 = *pcVar5;
            cVar2 = pcVar5[lVar7];
            if (cVar1 != cVar2) break;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            return puVar4;
          }
        }
        iVar6 = iVar6 + 1;
        iVar3 = OPENSSL_sk_num(param_2);
      } while (iVar6 < iVar3);
    }
  }
  puVar4 = (undefined8 *)SRP_get_default_gN(param_1);
  return puVar4;
}

// SRP_user_pwd_free @ 14f6e4700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SRP_user_pwd_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    BN_free(param_1[1]);
    BN_clear_free(param_1[2]);
    CRYPTO_free(*param_1,"crypto\\srp\\srp_vfy.c",0xb6);
    CRYPTO_free(param_1[5],"crypto\\srp\\srp_vfy.c",0xb7);
    CRYPTO_free(param_1,"crypto\\srp\\srp_vfy.c",0xb8);
  }
  return;
}

// FUN_14f6e4780 @ 14f6e4780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4780(void)

{
  undefined8 *puVar1;
  undefined8 in_R9;
  
  puVar1 = (undefined8 *)CRYPTO_malloc(0x30,"crypto\\srp\\srp_vfy.c",0xbf,in_R9,0x14f6e478a);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  return;
}

// FUN_14f6e47e0 @ 14f6e47e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e47e0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = CRYPTO_strdup(param_2,"crypto\\srp\\srp_vfy.c",0xd6);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_3 != 0) {
    lVar1 = CRYPTO_strdup(param_3,"crypto\\srp\\srp_vfy.c",0xd8);
    param_1[5] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f6e4870 @ 14f6e4870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6e4870(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_a08 [32];
  undefined1 local_9e8 [2512];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6e4880;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a08;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = FUN_14f6e4d50(local_9e8,0x9c4);
  if (-1 < iVar1) {
    lVar2 = BN_bin2bn(local_9e8,iVar1,0);
    *(longlong *)(param_1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      iVar1 = FUN_14f6e4d50(local_9e8,0x9c4,param_2);
      if (-1 < iVar1) {
        lVar2 = BN_bin2bn(local_9e8,iVar1,0);
        *(longlong *)(param_1 + 8) = lVar2;
        if (lVar2 != 0) {
          return 1;
        }
      }
      BN_free(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return 0;
}

// FUN_14f6e4980 @ 14f6e4980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f6e4980(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar6 = 0;
  iVar3 = OPENSSL_sk_num(*param_1);
  if (0 < iVar3) {
    do {
      puVar4 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar6);
      pcVar5 = (char *)*puVar4;
      lVar7 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar7];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return puVar4;
      }
      iVar6 = iVar6 + 1;
      iVar3 = OPENSSL_sk_num(*param_1);
    } while (iVar6 < iVar3);
  }
  return (undefined8 *)0x0;
}

// FUN_14f6e4a20 @ 14f6e4a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4a20(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6e4a40 @ 14f6e4a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4a40(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6e4a60 @ 14f6e4a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4a60(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6e4a80 @ 14f6e4a80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4a80(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f6e4aa0 @ 14f6e4aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4aa0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6e4ac0 @ 14f6e4ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4ac0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6e4ae0 @ 14f6e4ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4ae0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6e4b00 @ 14f6e4b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4b00(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6e4b20 @ 14f6e4b20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4b20(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f6e4b40 @ 14f6e4b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4b40(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6e4b60 @ 14f6e4b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4b60(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6e4b80 @ 14f6e4b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4b80(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6e4ba0 @ 14f6e4ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4ba0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f6e4bc0 @ 14f6e4bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4bc0(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f6e4be0 @ 14f6e4be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4be0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6e4c00 @ 14f6e4c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4c00(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6e4c20 @ 14f6e4c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4c20(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6e4c40 @ 14f6e4c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e4c40(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6e4c60 @ 14f6e4c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14f6e4c60(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)CRYPTO_malloc(0x30,"crypto\\srp\\srp_vfy.c",0xbf);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3[5] = 0;
    uVar1 = param_1[4];
    puVar3[3] = param_1[3];
    puVar3[4] = uVar1;
    iVar2 = FUN_14f6e47e0(puVar3,*param_1,param_1[5]);
    if (iVar2 != 0) {
      lVar4 = BN_dup(param_1[2]);
      lVar5 = BN_dup(param_1[1]);
      puVar3[2] = lVar4;
      puVar3[1] = lVar5;
      if ((lVar5 != 0) && (lVar4 != 0)) {
        return puVar3;
      }
    }
    SRP_user_pwd_free(puVar3);
    return (undefined8 *)0x0;
  }
  return (undefined8 *)0x0;
}

// FUN_14f6e4d50 @ 14f6e4d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6e4d50(void *param_1,ulonglong param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 uVar6;
  ulonglong uVar4;
  
  uVar6 = 0x14f6e4d63;
  local_res18[0] = 0;
  local_res20[0] = 0;
  for (; (*param_3 == ' ' || ((byte)(*param_3 - 9U) < 2)); param_3 = param_3 + 1) {
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (param_3[uVar5] != '\0');
  uVar3 = -(int)uVar5 & 3;
  uVar4 = (ulonglong)uVar3;
  if ((0x7fffffff < uVar5) || (param_2 < (uVar4 + uVar5 >> 2) * 3)) {
    return -1;
  }
  lVar2 = EVP_ENCODE_CTX_new();
  if (lVar2 == 0) {
    return -1;
  }
  if (uVar4 != 3) {
    EVP_DecodeInit(lVar2);
    evp_encode_ctx_set_flags(lVar2,2);
    if (((uVar4 == 0) ||
        (iVar1 = EVP_DecodeUpdate(lVar2,param_1,local_res18,"00",uVar3,uVar6), -1 < iVar1)) &&
       (iVar1 = EVP_DecodeUpdate(lVar2,param_1,local_res20,param_3,(int)uVar5,uVar6), -1 < iVar1)) {
      local_res18[0] = local_res18[0] + local_res20[0];
      EVP_DecodeFinal(lVar2,(longlong)local_res18[0] + (longlong)param_1,local_res20);
      local_res18[0] = local_res18[0] + local_res20[0];
      if (uVar4 != 0) {
        if (local_res18[0] <= (int)uVar3) goto LAB_14f6e4df2;
        memmove(param_1,(void *)(uVar4 + (longlong)param_1),(longlong)local_res18[0] - uVar4);
        local_res18[0] = local_res18[0] - uVar3;
      }
      EVP_ENCODE_CTX_free(lVar2);
      return local_res18[0];
    }
  }
LAB_14f6e4df2:
  local_res18[0] = -1;
  EVP_ENCODE_CTX_free(lVar2);
  return local_res18[0];
}

// FUN_14f6e4ee0 @ 14f6e4ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6e4ee0(void *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 local_res20 [4];
  int local_28;
  int local_24 [3];
  
  local_24[1] = 0x4f6e4ef3;
  local_24[2] = 1;
  lVar1 = EVP_ENCODE_CTX_new();
  uVar2 = 0;
  local_28 = 0;
  local_24[0] = 0;
  local_res20[0] = 0;
  if (lVar1 != 0) {
    EVP_EncodeInit(lVar1);
    evp_encode_ctx_set_flags(lVar1,3);
    iVar3 = ((int)(((longlong)param_3 / 3 + ((longlong)param_3 >> 0x3f) & 0xffffffffU) >> 0x1f) + 1
            + param_3 / 3 + (param_3 >> 0x1f)) * 3 - param_3;
    lVar4 = (longlong)iVar3;
    if (((lVar4 == 3) ||
        (iVar3 = EVP_EncodeUpdate(lVar1,param_1,&local_28,local_res20,iVar3), iVar3 != 0)) &&
       (iVar3 = EVP_EncodeUpdate(lVar1,(longlong)local_28 + (longlong)param_1,local_24,param_2,
                                 param_3), iVar3 != 0)) {
      local_28 = local_28 + local_24[0];
      EVP_EncodeFinal(lVar1,(longlong)local_28 + (longlong)param_1,local_24);
      local_28 = local_28 + local_24[0];
      if (lVar4 != 3) {
        memmove(param_1,(void *)(lVar4 + (longlong)param_1),local_28 - lVar4);
        *(undefined1 *)((local_28 - lVar4) + (longlong)param_1) = 0;
      }
      EVP_ENCODE_CTX_free(lVar1);
      uVar2 = 1;
    }
    else {
      EVP_ENCODE_CTX_free(lVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

