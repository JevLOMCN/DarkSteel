// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// SRP_Calc_A @ 14f6e5020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SRP_Calc_A(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6e503b;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (lVar2 = BN_CTX_new(), lVar2 != 0))
  {
    lVar3 = BN_new();
    if ((lVar3 != 0) && (iVar1 = BN_mod_exp(lVar3,param_3,param_1,param_2,lVar2,uVar4), iVar1 == 0))
    {
      BN_free(lVar3);
      lVar3 = 0;
    }
    BN_CTX_free(lVar2);
    return lVar3;
  }
  return 0;
}

// SRP_Calc_B @ 14f6e50d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SRP_Calc_B(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6e50f1;
  lVar4 = 0;
  lVar5 = 0;
  lVar6 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (lVar2 = BN_CTX_new(), lVar2 != 0)))) {
    lVar3 = BN_new();
    if (((lVar3 != 0) && ((lVar4 = BN_new(), lVar4 != 0 && (lVar5 = BN_new(), lVar5 != 0)))) &&
       ((iVar1 = BN_mod_exp(lVar4,param_3,param_1,param_2,lVar2,uVar7), iVar1 == 0 ||
        (((lVar6 = FUN_14f6e5a00(param_2,param_3,param_2), lVar6 == 0 ||
          (iVar1 = BN_mod_mul(lVar3,param_4,lVar6,param_2,lVar2), iVar1 == 0)) ||
         (iVar1 = BN_mod_add(lVar5,lVar4,lVar3,param_2,lVar2), iVar1 == 0)))))) {
      BN_free(lVar5);
      lVar5 = 0;
    }
    BN_CTX_free(lVar2);
    BN_clear_free(lVar3);
    BN_clear_free(lVar4);
    BN_free(lVar6);
    return lVar5;
  }
  return 0;
}

// SRP_Calc_client_key @ 14f6e5230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SRP_Calc_client_key(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
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
  longlong lVar9;
  
  lVar4 = 0;
  lVar5 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar9 = 0;
  lVar6 = 0;
  if ((((param_6 != 0) && (param_2 != 0)) && (param_1 != 0)) &&
     (((param_3 != 0 && (param_4 != 0)) && (param_5 != 0)))) {
    lVar2 = BN_CTX_new();
    if (lVar2 != 0) {
      lVar3 = BN_new();
      if (lVar3 != 0) {
        lVar4 = BN_new();
        if (lVar4 != 0) {
          lVar5 = BN_new();
          if (lVar5 != 0) {
            lVar6 = BN_new();
            lVar8 = lVar9;
            lVar7 = 0;
            if (lVar6 != 0) {
              BN_with_flags(lVar6,param_4,4);
              BN_set_flags(lVar3,4);
              iVar1 = BN_mod_exp(lVar3,param_3,lVar6,param_1,lVar2);
              if (iVar1 != 0) {
                lVar7 = FUN_14f6e5a00(param_1,param_3,param_1);
                if (lVar7 != 0) {
                  iVar1 = BN_mod_mul(lVar4,lVar3,lVar7,param_1,lVar2);
                  if (iVar1 != 0) {
                    iVar1 = BN_mod_sub(lVar3,param_2,lVar4,param_1,lVar2);
                    if (iVar1 != 0) {
                      iVar1 = BN_mul(lVar5,param_6,lVar6,lVar2);
                      if (iVar1 != 0) {
                        iVar1 = BN_add(lVar4,param_5,lVar5);
                        if (iVar1 != 0) {
                          lVar8 = BN_new();
                          if (lVar8 != 0) {
                            iVar1 = BN_mod_exp(lVar8,lVar3,lVar4,param_1,lVar2);
                            if (iVar1 == 0) {
                              BN_free(lVar8);
                              lVar8 = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      BN_CTX_free(lVar2);
      BN_free(lVar6);
      BN_clear_free(lVar3);
      BN_clear_free(lVar4);
      BN_clear_free(lVar5);
      BN_free(lVar7);
      return lVar8;
    }
  }
  return 0;
}

// SRP_Calc_server_key @ 14f6e5460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SRP_Calc_server_key(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                            longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6e547d;
  lVar3 = 0;
  lVar4 = 0;
  if ((((param_3 == 0) || (param_1 == 0)) || (param_2 == 0)) || ((param_4 == 0 || (param_5 == 0))))
  {
    lVar4 = 0;
  }
  else {
    lVar2 = BN_CTX_new();
    if (lVar2 != 0) {
      lVar3 = BN_new();
      if (lVar3 != 0) {
        iVar1 = BN_mod_exp(lVar3,param_2,param_3,param_5,lVar2,uVar5);
        if (iVar1 != 0) {
          iVar1 = BN_mod_mul(lVar3,param_1,lVar3,param_5,lVar2);
          lVar4 = 0;
          if (iVar1 != 0) {
            lVar4 = BN_new();
            if (lVar4 != 0) {
              iVar1 = BN_mod_exp(lVar4,lVar3,param_4,param_5,lVar2);
              if (iVar1 == 0) {
                BN_free(lVar4);
                lVar4 = 0;
              }
            }
          }
        }
      }
    }
    BN_CTX_free(lVar2);
    BN_clear_free(lVar3);
  }
  return lVar4;
}

// SRP_Calc_u @ 14f6e5590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SRP_Calc_u(void)

{
  FUN_14f6e5a00();
  return;
}

// SRP_Calc_x @ 14f6e55b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 SRP_Calc_x(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar4 = 0;
  uVar8 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar5 = 0;
  }
  else {
    lVar2 = EVP_MD_CTX_new();
    uVar5 = 0;
    if (lVar2 != 0) {
      iVar1 = BN_num_bits(param_1);
      lVar3 = CRYPTO_malloc((longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3),
                            "crypto\\srp\\srp_lib.c",0x85);
      uVar5 = uVar4;
      if (lVar3 != 0) {
        uVar4 = EVP_sha1();
        iVar1 = EVP_DigestInit_ex(lVar2,uVar4,0);
        if (iVar1 != 0) {
          lVar6 = -1;
          lVar7 = -1;
          do {
            lVar7 = lVar7 + 1;
          } while (*(char *)(param_2 + lVar7) != '\0');
          iVar1 = EVP_DigestUpdate(lVar2,param_2);
          if ((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(lVar2,":",1), iVar1 != 0)) {
            do {
              lVar6 = lVar6 + 1;
            } while (*(char *)(lVar6 + param_3) != '\0');
            iVar1 = EVP_DigestUpdate(lVar2,param_3,lVar6);
            if ((iVar1 != 0) &&
               (iVar1 = EVP_DigestFinal_ex(lVar2,local_58,0), uVar5 = uVar8, iVar1 != 0)) {
              uVar8 = EVP_sha1();
              iVar1 = EVP_DigestInit_ex(lVar2,uVar8,0);
              if ((iVar1 != 0) && (iVar1 = BN_bn2bin(param_1,lVar3), -1 < iVar1)) {
                iVar1 = BN_num_bits(param_1);
                iVar1 = EVP_DigestUpdate(lVar2,lVar3,
                                         (longlong)
                                         ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3));
                if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(lVar2,local_58,0x14), iVar1 != 0)) &&
                   (iVar1 = EVP_DigestFinal_ex(lVar2,local_58,0), iVar1 != 0)) {
                  uVar5 = BN_bin2bn(local_58,0x14);
                }
              }
            }
          }
        }
      }
      CRYPTO_free(lVar3,"crypto\\srp\\srp_lib.c",0x9b);
      EVP_MD_CTX_free(lVar2);
    }
  }
  return uVar5;
}

// SRP_Verify_A_mod_N @ 14f6e57d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SRP_Verify_A_mod_N(void)

{
  SRP_Verify_B_mod_N();
  return;
}

// SRP_Verify_B_mod_N @ 14f6e57f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool SRP_Verify_B_mod_N(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  if (((param_1 != 0) && (param_2 != 0)) && (lVar2 = BN_CTX_new(), lVar2 != 0)) {
    lVar3 = BN_new();
    if ((lVar3 != 0) && (iVar1 = BN_nnmod(lVar3,param_1,param_2,lVar2), iVar1 != 0)) {
      iVar1 = BN_is_zero(lVar3);
      bVar4 = iVar1 == 0;
    }
    BN_CTX_free(lVar2);
    BN_free(lVar3);
    return bVar4;
  }
  return false;
}

// SRP_check_known_gN_param @ 14f6e58a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * SRP_check_known_gN_param(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = 0;
    uVar3 = uVar2;
    while ((iVar1 = BN_cmp(*(undefined8 *)((longlong)&PTR_bn_generator_19_154df8b68 + uVar2),param_1
                          ), iVar1 != 0 ||
           (iVar1 = BN_cmp(*(undefined8 *)((longlong)&PTR_bn_group_8192_154df8b70 + uVar2),param_2),
           iVar1 != 0))) {
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 0x18;
      if (0xa7 < uVar2) {
        return (undefined *)0x0;
      }
    }
    return (&PTR_s_8192_154df8b60)[uVar3 * 3];
  }
  return (undefined *)0x0;
}

// SRP_get_default_gN @ 14f6e5950

undefined ** SRP_get_default_gN(longlong param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_1 == 0) {
    return &PTR_s_8192_154df8b60;
  }
  uVar5 = 0;
  uVar6 = uVar5;
  do {
    pcVar3 = *(char **)((longlong)&PTR_s_8192_154df8b60 + uVar5);
    lVar4 = param_1 - (longlong)pcVar3;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[lVar4];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      return &PTR_s_8192_154df8b60 + uVar6 * 3;
    }
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 0x18;
    if (0xa7 < uVar5) {
      return (undefined **)0x0;
    }
  } while( true );
}

// FUN_14f6e59e0 @ 14f6e59e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e59e0(undefined8 param_1,undefined8 param_2)

{
  FUN_14f6e5a00(param_1,param_2,param_1);
  return;
}

// FUN_14f6e5a00 @ 14f6e5a00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6e5a00(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar1 = BN_num_bits(param_3);
  uVar4 = 0;
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  if (param_1 == param_3) {
LAB_14f6e5a60:
    if (param_2 != param_3) {
      iVar2 = BN_ucmp(param_2,param_3);
      if (-1 < iVar2) goto LAB_14f6e5a59;
    }
    lVar3 = CRYPTO_malloc((longlong)(iVar1 * 2),"crypto\\srp\\srp_lib.c",0x22);
    if (lVar3 != 0) {
      iVar2 = BN_bn2binpad(param_1,lVar3,iVar1);
      if (-1 < iVar2) {
        iVar2 = BN_bn2binpad(param_2,lVar3 + iVar1,iVar1);
        if (-1 < iVar2) {
          local_58 = EVP_sha1();
          local_50 = 0;
          iVar1 = EVP_Digest(lVar3,(longlong)(iVar1 * 2),local_48,0);
          uVar4 = 0;
          if (iVar1 != 0) {
            uVar4 = BN_bin2bn(local_48,0x14);
          }
        }
      }
    }
    CRYPTO_free(lVar3,"crypto\\srp\\srp_lib.c",0x2a);
  }
  else {
    iVar2 = BN_ucmp(param_1,param_3);
    if (iVar2 < 0) goto LAB_14f6e5a60;
LAB_14f6e5a59:
    uVar4 = 0;
  }
  return uVar4;
}

