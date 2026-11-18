// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// FUN_14f7a15f0 @ 14f7a15f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f7a15f0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,longlong param_5
             ,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_res8;
  
  local_res8 = 0;
  if ((param_1 == 0) || (lVar3 = EC_KEY_get0_group(), lVar3 == 0)) {
    ERR_put_error(0x10,0xf8,0x43,"crypto\\ec\\ecdsa_ossl.c",0x2f);
    return 0;
  }
  lVar4 = EC_KEY_get0_private_key(param_1);
  if (lVar4 == 0) {
    ERR_put_error(0x10,0xf8,0x7d,"crypto\\ec\\ecdsa_ossl.c",0x33);
    return 0;
  }
  iVar1 = EC_KEY_can_sign(param_1);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xf8,0x9f,"crypto\\ec\\ecdsa_ossl.c",0x38);
    return 0;
  }
  lVar5 = param_2;
  if ((param_2 == 0) && (lVar5 = BN_CTX_new(), lVar5 == 0)) {
    ERR_put_error(0x10,0xf8,0x41,"crypto\\ec\\ecdsa_ossl.c",0x3e);
    return 0;
  }
  lVar6 = BN_new();
  lVar7 = BN_new();
  lVar8 = BN_new();
  if (((lVar6 == 0) || (lVar7 == 0)) || (lVar8 == 0)) {
    ERR_put_error(0x10,0xf8,0x41,"crypto\\ec\\ecdsa_ossl.c",0x47);
  }
  else {
    local_res8 = EC_POINT_new(lVar3);
    if (local_res8 == 0) {
      ERR_put_error(0x10,0xf8,0x10,"crypto\\ec\\ecdsa_ossl.c",0x4b);
    }
    else {
      uVar9 = EC_GROUP_get0_order(lVar3);
      uVar2 = BN_num_bits(uVar9);
      iVar1 = BN_set_bit(lVar6,uVar2);
      if (((iVar1 != 0) && (iVar1 = BN_set_bit(lVar7,uVar2), iVar1 != 0)) &&
         (iVar1 = BN_set_bit(lVar8,uVar2), iVar1 != 0)) {
        do {
          do {
            if (param_5 == 0) {
              iVar1 = BN_priv_rand_range(lVar6,uVar9);
              if (iVar1 == 0) {
                uVar9 = 100;
                uVar2 = 0x9e;
                goto LAB_14f7a1931;
              }
            }
            else {
              iVar1 = BN_generate_dsa_nonce(lVar6,uVar9,lVar4,param_5,(longlong)param_6,lVar5);
              if (iVar1 == 0) {
                uVar9 = 0x5e;
                uVar2 = 0x9e;
                goto LAB_14f7a1931;
              }
            }
            iVar1 = BN_is_zero(lVar6);
          } while (iVar1 != 0);
          iVar1 = EC_POINT_mul(lVar3,local_res8,lVar6,0,0,lVar5);
          if (iVar1 == 0) {
            uVar9 = 0x6c;
LAB_14f7a1929:
            uVar2 = 0x10;
            goto LAB_14f7a1931;
          }
          iVar1 = EC_POINT_get_affine_coordinates(lVar3,local_res8,lVar8,0,lVar5);
          if (iVar1 == 0) {
            uVar9 = 0x71;
            goto LAB_14f7a1929;
          }
          iVar1 = BN_nnmod(lVar7,lVar8,uVar9);
          if (iVar1 == 0) {
            uVar9 = 0x76;
            uVar2 = 3;
            goto LAB_14f7a1931;
          }
          iVar1 = BN_is_zero(lVar7);
        } while (iVar1 != 0);
        iVar1 = ec_group_do_inverse_ord(lVar3,lVar6,lVar6,lVar5);
        if (iVar1 != 0) {
          BN_clear_free(*param_4);
          BN_clear_free(*param_3);
          *param_4 = lVar7;
          uVar9 = 1;
          *param_3 = lVar6;
          goto LAB_14f7a1954;
        }
        uVar9 = 0x7d;
        uVar2 = 3;
LAB_14f7a1931:
        ERR_put_error(0x10,0xf8,uVar2,"crypto\\ec\\ecdsa_ossl.c",uVar9);
      }
    }
  }
  uVar9 = 0;
  BN_clear_free(lVar6);
  BN_clear_free(lVar7);
LAB_14f7a1954:
  if (lVar5 != param_2) {
    BN_CTX_free(lVar5);
  }
  EC_POINT_free(local_res8);
  BN_clear_free(lVar8);
  return uVar9;
}

// ossl_ecdsa_sign @ 14f7a1a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_ecdsa_sign(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  lVar2 = ECDSA_do_sign_ex(param_2,param_3,param_6,param_7,param_8,0x14f7a1a20);
  if (lVar2 == 0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = i2d_ECDSA_SIG(lVar2,&local_res20);
  *param_5 = uVar1;
  ECDSA_SIG_free(lVar2);
  return 1;
}

// ossl_ecdsa_sign_setup @ 14f7a1a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_ecdsa_sign_setup(void)

{
  FUN_14f7a15f0();
  return;
}

// ossl_ecdsa_sign_sig @ 14f7a1ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
ossl_ecdsa_sign_sig(undefined8 param_1,int param_2,longlong param_3,longlong param_4,
                   undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  lVar10 = 0;
  local_50 = 0;
  local_58 = 0;
  lVar6 = 0;
  lVar3 = EC_KEY_get0_group(param_5);
  local_48 = EC_KEY_get0_private_key(param_5);
  if (lVar3 == 0) {
    ERR_put_error(0x10,0xf9,0x43,"crypto\\ec\\ecdsa_ossl.c",0xaa);
    return (longlong *)0x0;
  }
  if (local_48 == 0) {
    ERR_put_error(0x10,0xf9,0x7d,"crypto\\ec\\ecdsa_ossl.c",0xae);
    return (longlong *)0x0;
  }
  iVar1 = EC_KEY_can_sign(param_5);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xf9,0x9f,"crypto\\ec\\ecdsa_ossl.c",0xb3);
    return (longlong *)0x0;
  }
  plVar4 = (longlong *)ECDSA_SIG_new();
  if (plVar4 == (longlong *)0x0) {
    ERR_put_error(0x10,0xf9,0x41,"crypto\\ec\\ecdsa_ossl.c",0xb9);
    return (longlong *)0x0;
  }
  lVar5 = BN_new();
  *plVar4 = lVar5;
  lVar5 = BN_new();
  plVar4[1] = lVar5;
  if ((*plVar4 == 0) || (lVar5 == 0)) {
    uVar11 = 0xbf;
  }
  else {
    lVar6 = BN_CTX_new();
    if ((lVar6 != 0) && (local_58 = BN_new(), local_58 != 0)) {
      local_40 = EC_GROUP_get0_order(lVar3);
      uVar2 = BN_num_bits(local_40);
      if ((int)uVar2 < param_2 * 8) {
        param_2 = (int)(uVar2 + 7 + ((int)(uVar2 + 7) >> 0x1f & 7U)) >> 3;
      }
      lVar7 = BN_bin2bn(param_1,param_2,local_58);
      if (lVar7 == 0) {
        uVar11 = 0xd2;
        uVar9 = 3;
      }
      else if (((int)uVar2 < param_2 * 8) &&
              (iVar1 = BN_rshift(local_58,local_58,8 - (uVar2 & 7)), iVar1 == 0)) {
        uVar11 = 0xd7;
        uVar9 = 3;
      }
      else {
        do {
          if (param_3 == 0) goto LAB_14f7a1d21;
          if (param_4 == 0) goto LAB_14f7a1d21;
          lVar8 = BN_copy(*plVar4,param_4);
          lVar7 = param_3;
          if (lVar8 == 0) {
            uVar11 = 0xe4;
            goto LAB_14f7a1e93;
          }
          while( true ) {
            iVar1 = bn_to_mont_fixed_top(lVar5,*plVar4,*(undefined8 *)(lVar3 + 0x90),lVar6);
            if ((iVar1 == 0) ||
               (iVar1 = bn_mul_mont_fixed_top
                                  (lVar5,lVar5,local_48,*(undefined8 *)(lVar3 + 0x90),lVar6),
               iVar1 == 0)) {
              uVar11 = 0xf2;
              uVar9 = 3;
              goto LAB_14f7a1e99;
            }
            iVar1 = bn_mod_add_fixed_top(lVar5,lVar5,local_58,local_40);
            if (iVar1 == 0) {
              uVar11 = 0xf6;
              uVar9 = 3;
              goto LAB_14f7a1e99;
            }
            iVar1 = bn_to_mont_fixed_top(lVar5,lVar5,*(undefined8 *)(lVar3 + 0x90),lVar6);
            if ((iVar1 == 0) ||
               (iVar1 = BN_mod_mul_montgomery(lVar5,lVar5,lVar7,*(undefined8 *)(lVar3 + 0x90),lVar6)
               , iVar1 == 0)) {
              uVar11 = 0xff;
              uVar9 = 3;
              goto LAB_14f7a1e99;
            }
            iVar1 = BN_is_zero(lVar5);
            if (iVar1 == 0) goto LAB_14f7a1eb9;
            if (param_3 != 0) break;
LAB_14f7a1d21:
            iVar1 = FUN_14f7a15f0(param_5,lVar6,&local_50,plVar4,param_1,param_2);
            lVar7 = local_50;
            lVar10 = local_50;
            if (iVar1 == 0) {
              ERR_put_error(0x10,0xf9,0x2a,"crypto\\ec\\ecdsa_ossl.c",0xdd);
              lVar10 = local_50;
              goto LAB_14f7a1eaf;
            }
          }
        } while (param_4 == 0);
        uVar11 = 0x109;
        uVar9 = 0x9d;
      }
      goto LAB_14f7a1e99;
    }
    uVar11 = 0xc6;
  }
LAB_14f7a1e93:
  uVar9 = 0x41;
LAB_14f7a1e99:
  ERR_put_error(0x10,0xf9,uVar9,"crypto\\ec\\ecdsa_ossl.c",uVar11);
LAB_14f7a1eaf:
  ECDSA_SIG_free(plVar4);
  plVar4 = (longlong *)0x0;
LAB_14f7a1eb9:
  BN_CTX_free(lVar6);
  BN_clear_free(local_58);
  BN_clear_free(lVar10);
  return plVar4;
}

// ossl_ecdsa_verify @ 14f7a1f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ossl_ecdsa_verify(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5
                 ,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res20;
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  uVar2 = 0xffffffff;
  local_10 = param_4;
  local_res20 = ECDSA_SIG_new();
  if (local_res20 != 0) {
    lVar3 = d2i_ECDSA_SIG(&local_res20,&local_10,param_5);
    if (lVar3 != 0) {
      iVar1 = i2d_ECDSA_SIG(local_res20,&local_18);
      uVar2 = 0xffffffff;
      if (iVar1 == param_5) {
        iVar1 = memcmp(param_4,local_18,(longlong)iVar1);
        if (iVar1 == 0) {
          uVar2 = ECDSA_do_verify(param_2,param_3,local_res20,param_6);
        }
      }
    }
    CRYPTO_free(local_18,"crypto\\ec\\ecdsa_ossl.c",0x138);
    ECDSA_SIG_free(local_res20);
  }
  return uVar2;
}

// ossl_ecdsa_verify_sig @ 14f7a1fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_ecdsa_verify_sig(undefined8 param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 in_stack_ffffffffffffff98;
  longlong lVar15;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar12 = 0xffffffff;
  lVar15 = 0;
  lVar14 = 0;
  if ((((param_4 == 0) || (lVar3 = EC_KEY_get0_group(param_4), lVar3 == 0)) ||
      (lVar4 = EC_KEY_get0_public_key(param_4), lVar4 == 0)) || (param_3 == (undefined8 *)0x0)) {
    uVar6 = CONCAT44(uVar13,0x14b);
    uVar13 = 0x7c;
LAB_14f7a2405:
    ERR_put_error(0x10,0xfa,uVar13,"crypto\\ec\\ecdsa_ossl.c",uVar6);
    return 0xffffffff;
  }
  iVar1 = EC_KEY_can_sign(param_4);
  if (iVar1 == 0) {
    uVar6 = CONCAT44(uVar13,0x150);
    uVar13 = 0x9f;
    goto LAB_14f7a2405;
  }
  lVar5 = BN_CTX_new();
  if (lVar5 == 0) {
    uVar6 = CONCAT44(uVar13,0x156);
    uVar13 = 0x41;
    goto LAB_14f7a2405;
  }
  BN_CTX_start(lVar5);
  uVar6 = BN_CTX_get(lVar5);
  uVar7 = BN_CTX_get(lVar5);
  uVar8 = BN_CTX_get(lVar5);
  lVar9 = BN_CTX_get(lVar5);
  if (lVar9 == 0) {
    ERR_put_error(0x10,0xfa,3,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar13,0x15f));
    uVar12 = 0xffffffff;
    lVar14 = lVar15;
    goto LAB_14f7a23c7;
  }
  lVar10 = EC_GROUP_get0_order(lVar3);
  if (lVar10 == 0) {
    uVar6 = CONCAT44(uVar13,0x165);
    uVar7 = 0x10;
    lVar14 = lVar15;
  }
  else {
    iVar1 = BN_is_zero(*param_3);
    if ((((iVar1 != 0) || (iVar1 = BN_is_negative(*param_3), iVar1 != 0)) ||
        ((iVar1 = BN_ucmp(*param_3,lVar10), -1 < iVar1 ||
         ((iVar1 = BN_is_zero(param_3[1]), iVar1 != 0 ||
          (iVar1 = BN_is_negative(param_3[1]), iVar1 != 0)))))) ||
       (iVar1 = BN_ucmp(param_3[1],lVar10), -1 < iVar1)) {
      ERR_put_error(0x10,0xfa,0x9c,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar13,0x16c));
      uVar12 = 0;
      goto LAB_14f7a23c7;
    }
    iVar1 = ec_group_do_inverse_ord(lVar3,uVar7,param_3[1],lVar5);
    if (iVar1 == 0) {
      uVar6 = 0x172;
      lVar14 = lVar15;
    }
    else {
      uVar2 = BN_num_bits(lVar10);
      if ((int)uVar2 < param_2 * 8) {
        param_2 = (int)(((int)(uVar2 + 7) >> 0x1f & 7U) + uVar2 + 7) >> 3;
      }
      lVar11 = BN_bin2bn(param_1,param_2,uVar8);
      if (lVar11 == 0) {
        uVar6 = 0x17d;
        lVar14 = lVar15;
      }
      else if (((int)uVar2 < param_2 * 8) &&
              (iVar1 = BN_rshift(uVar8,uVar8,8 - (uVar2 & 7)), iVar1 == 0)) {
        uVar6 = 0x182;
        lVar14 = lVar15;
      }
      else {
        iVar1 = BN_mod_mul(uVar6,uVar8,uVar7,lVar10,lVar5);
        if (iVar1 == 0) {
          uVar6 = 0x187;
        }
        else {
          lVar15 = lVar5;
          iVar1 = BN_mod_mul(uVar7,*param_3,uVar7,lVar10,lVar5);
          uVar13 = (undefined4)((ulonglong)lVar15 >> 0x20);
          if (iVar1 == 0) {
            uVar6 = CONCAT44(uVar13,0x18c);
          }
          else {
            lVar14 = EC_POINT_new(lVar3);
            if (lVar14 == 0) {
              ERR_put_error(0x10,0xfa,0x41,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar13,0x191));
              goto LAB_14f7a23c7;
            }
            iVar1 = EC_POINT_mul(lVar3,lVar14,uVar6,lVar4,uVar7,lVar5);
            if (iVar1 == 0) {
              ERR_put_error(0x10,0xfa,0x10,"crypto\\ec\\ecdsa_ossl.c",0x195);
              goto LAB_14f7a23c7;
            }
            iVar1 = EC_POINT_get_affine_coordinates(lVar3,lVar14,lVar9,0,lVar5);
            if (iVar1 == 0) {
              ERR_put_error(0x10,0xfa,0x10,"crypto\\ec\\ecdsa_ossl.c",0x19a);
              goto LAB_14f7a23c7;
            }
            iVar1 = BN_nnmod(uVar6,lVar9,lVar10,lVar5);
            if (iVar1 != 0) {
              iVar1 = BN_ucmp(uVar6,*param_3);
              uVar12 = (ulonglong)(iVar1 == 0);
              goto LAB_14f7a23c7;
            }
            uVar6 = 0x19f;
          }
        }
      }
    }
    uVar7 = 3;
  }
  ERR_put_error(0x10,0xfa,uVar7,"crypto\\ec\\ecdsa_ossl.c",uVar6);
  uVar12 = 0xffffffff;
LAB_14f7a23c7:
  BN_CTX_end(lVar5);
  BN_CTX_free(lVar5);
  EC_POINT_free(lVar14);
  return uVar12;
}

