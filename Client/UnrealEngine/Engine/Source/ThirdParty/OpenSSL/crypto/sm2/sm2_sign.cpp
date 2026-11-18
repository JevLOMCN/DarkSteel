// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f7a4a50 @ 14f7a4a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7a4a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar8 = 0x14f7a4a71;
  lVar3 = EVP_MD_CTX_new();
  iVar1 = EVP_MD_size(param_1);
  lVar5 = 0;
  lVar6 = 0;
  if (iVar1 < 0) {
    ERR_put_error(0x35,100,0x66,"crypto\\sm2\\sm2_sign.c",CONCAT44(uVar7,0x97));
    lVar4 = lVar5;
    lVar6 = lVar5;
  }
  else {
    lVar4 = CRYPTO_zalloc((longlong)iVar1,"crypto\\sm2\\sm2_sign.c",0x9b);
    if ((lVar3 == 0) || (lVar4 == 0)) {
      uVar8 = CONCAT44(uVar7,0x9d);
      uVar7 = 0x41;
    }
    else {
      iVar2 = sm2_compute_z_digest(lVar4,param_1,param_3,param_4,param_2,uVar8);
      uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
      lVar6 = lVar5;
      if (iVar2 == 0) goto LAB_14f7a4bb7;
      iVar2 = EVP_DigestInit(lVar3,param_1);
      if ((((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(lVar3,lVar4,(longlong)iVar1), iVar2 == 0)) ||
          (iVar2 = EVP_DigestUpdate(lVar3,param_5,param_6), iVar2 == 0)) ||
         (iVar2 = EVP_DigestFinal(lVar3,lVar4,0), iVar2 == 0)) {
        uVar8 = CONCAT44(uVar7,0xab);
        uVar7 = 6;
      }
      else {
        lVar6 = BN_bin2bn(lVar4,iVar1,0);
        if (lVar6 != 0) goto LAB_14f7a4bb7;
        uVar8 = CONCAT44(uVar7,0xb1);
        uVar7 = 0x44;
      }
    }
    ERR_put_error(0x35,100,uVar7,"crypto\\sm2\\sm2_sign.c",uVar8);
  }
LAB_14f7a4bb7:
  CRYPTO_free(lVar4,"crypto\\sm2\\sm2_sign.c",0xb4);
  EVP_MD_CTX_free(lVar3);
  return lVar6;
}

// sm2_compute_z_digest @ 14f7a4c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm2_compute_z_digest
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  short sVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f7a4c27;
  uVar4 = EC_KEY_get0_group(param_5);
  lVar12 = 0;
  lVar10 = 0;
  local_68[0] = 0;
  lVar5 = EVP_MD_CTX_new();
  lVar6 = BN_CTX_new();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar4 = 0x2f;
LAB_14f7a4fa6:
    uVar13 = 0x41;
    lVar10 = lVar12;
  }
  else {
    local_58 = BN_CTX_get(lVar6);
    uVar7 = BN_CTX_get(lVar6);
    local_60 = BN_CTX_get(lVar6);
    local_48 = BN_CTX_get(lVar6);
    local_50 = BN_CTX_get(lVar6);
    local_38 = BN_CTX_get(lVar6);
    local_40 = BN_CTX_get(lVar6);
    if (local_40 == 0) {
      uVar4 = 0x3c;
      goto LAB_14f7a4fa6;
    }
    iVar2 = EVP_DigestInit(lVar5,param_2);
    if (iVar2 == 0) {
      uVar4 = 0x41;
      uVar13 = 6;
      lVar10 = lVar12;
    }
    else if (param_4 < 0x1fff) {
      sVar11 = (short)param_4 << 3;
      local_68[0] = (undefined1)((ushort)sVar11 >> 8);
      iVar2 = EVP_DigestUpdate(lVar5,local_68,1);
      if (iVar2 == 0) {
        uVar4 = 0x51;
        uVar13 = 6;
        lVar10 = lVar12;
      }
      else {
        local_68[0] = (undefined1)sVar11;
        iVar2 = EVP_DigestUpdate(lVar5,local_68,1);
        if (iVar2 == 0) {
          uVar4 = 0x56;
          uVar13 = 6;
        }
        else {
          if (param_4 != 0) {
            iVar2 = EVP_DigestUpdate(lVar5,param_3,param_4);
            if (iVar2 == 0) {
              uVar4 = 0x5b;
              uVar13 = 6;
              goto LAB_14f7a4fac;
            }
          }
          uVar8 = local_58;
          uVar9 = local_60;
          iVar2 = EC_GROUP_get_curve(uVar4,local_58,uVar7,local_60,lVar6);
          if (iVar2 == 0) {
            uVar4 = 0x60;
            uVar13 = 0x10;
          }
          else {
            iVar2 = BN_num_bits(uVar8);
            iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
            lVar12 = (longlong)iVar2;
            lVar10 = CRYPTO_zalloc(lVar12,"crypto\\sm2\\sm2_sign.c",0x65);
            if (lVar10 == 0) {
              uVar4 = 0x67;
              lVar12 = lVar10;
              goto LAB_14f7a4fa6;
            }
            iVar3 = BN_bn2binpad(uVar7,lVar10,iVar2);
            if (-1 < iVar3) {
              iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
              if (iVar3 != 0) {
                iVar3 = BN_bn2binpad(uVar9,lVar10,iVar2);
                if (-1 < iVar3) {
                  iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                  if (iVar3 != 0) {
                    uVar8 = EC_GROUP_get0_generator(uVar4);
                    uVar9 = local_48;
                    uVar7 = local_50;
                    iVar3 = EC_POINT_get_affine_coordinates(uVar4,uVar8,local_48,local_50,lVar6);
                    if (iVar3 != 0) {
                      iVar3 = BN_bn2binpad(uVar9,lVar10,iVar2);
                      if (-1 < iVar3) {
                        iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                        if (iVar3 != 0) {
                          iVar3 = BN_bn2binpad(uVar7,lVar10,iVar2);
                          if (-1 < iVar3) {
                            iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                            if (iVar3 != 0) {
                              uVar9 = EC_KEY_get0_public_key(param_5);
                              uVar7 = local_38;
                              lVar1 = local_40;
                              iVar3 = EC_POINT_get_affine_coordinates
                                                (uVar4,uVar9,local_38,local_40,lVar6);
                              if (iVar3 != 0) {
                                iVar3 = BN_bn2binpad(uVar7,lVar10,iVar2);
                                if (-1 < iVar3) {
                                  iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                                  if (iVar3 != 0) {
                                    iVar2 = BN_bn2binpad(lVar1,lVar10,iVar2);
                                    if (-1 < iVar2) {
                                      iVar2 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                                      if (iVar2 != 0) {
                                        iVar2 = EVP_DigestFinal(lVar5,param_1,0);
                                        if (iVar2 != 0) {
                                          uVar4 = 1;
                                          goto LAB_14f7a4fc2;
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
                }
              }
            }
            uVar4 = 0x7e;
            uVar13 = 0x44;
          }
        }
      }
    }
    else {
      uVar4 = 0x49;
      uVar13 = 0x6f;
      lVar10 = lVar12;
    }
  }
LAB_14f7a4fac:
  ERR_put_error(0x35,0x71,uVar13,"crypto\\sm2\\sm2_sign.c",uVar4);
  uVar4 = 0;
LAB_14f7a4fc2:
  CRYPTO_free(lVar10,"crypto\\sm2\\sm2_sign.c",0x85);
  BN_CTX_free(lVar6);
  EVP_MD_CTX_free(lVar5);
  return uVar4;
}

// sm2_do_sign @ 14f7a5010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm2_do_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_14f7a4a50(param_2,param_1,param_3,param_4,param_5,param_6);
  if (lVar1 != 0) {
    uVar2 = FUN_14f7a5120(param_1,lVar1);
  }
  BN_free(lVar1);
  return uVar2;
}

// sm2_do_verify @ 14f7a5090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
sm2_do_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  lVar2 = FUN_14f7a4a50(param_2,param_1,param_4,param_5,param_6,param_7);
  if (lVar2 != 0) {
    uVar1 = FUN_14f7a5430(param_1,param_3,lVar2);
  }
  BN_free(lVar2);
  return uVar1;
}

// FUN_14f7a5120 @ 14f7a5120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7a5120(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar2 = EC_KEY_get0_private_key();
  uVar3 = EC_KEY_get0_group(param_1);
  uVar4 = EC_GROUP_get0_order(uVar3);
  lVar14 = 0;
  lVar13 = 0;
  lVar11 = 0;
  lVar12 = 0;
  lVar5 = EC_POINT_new(uVar3);
  lVar6 = BN_CTX_new();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar2 = 0xcb;
LAB_14f7a53cd:
    uVar3 = 0x41;
  }
  else {
    BN_CTX_start(lVar6);
    uVar7 = BN_CTX_get(lVar6);
    uVar8 = BN_CTX_get(lVar6);
    uVar9 = BN_CTX_get(lVar6);
    lVar10 = BN_CTX_get(lVar6);
    if (lVar10 == 0) {
      uVar2 = 0xd5;
      lVar11 = lVar14;
      lVar12 = lVar14;
      lVar13 = lVar14;
      goto LAB_14f7a53cd;
    }
    lVar11 = BN_new();
    lVar12 = BN_new();
    if ((lVar11 == 0) || (lVar12 == 0)) {
      uVar2 = 0xe1;
      lVar13 = lVar14;
      goto LAB_14f7a53cd;
    }
    do {
      do {
        iVar1 = BN_priv_rand_range(uVar7,uVar4);
        if (iVar1 == 0) {
          uVar2 = 0xe7;
          uVar3 = 0x44;
          goto LAB_14f7a53d3;
        }
        iVar1 = EC_POINT_mul(uVar3,lVar5,uVar7,0,0,lVar6);
        if (iVar1 == 0) {
LAB_14f7a539b:
          uVar2 = 0xef;
          uVar3 = 0x44;
          lVar13 = lVar14;
          goto LAB_14f7a53d3;
        }
        iVar1 = EC_POINT_get_affine_coordinates(uVar3,lVar5,uVar9,0,lVar6);
        if (iVar1 == 0) goto LAB_14f7a539b;
        iVar1 = BN_mod_add(lVar11,param_2,uVar9,uVar4,lVar6);
        if (iVar1 == 0) goto LAB_14f7a539b;
        iVar1 = BN_is_zero(lVar11);
      } while (iVar1 != 0);
      iVar1 = BN_add(uVar8,lVar11,uVar7);
      if (iVar1 == 0) {
        uVar2 = 0xf8;
        uVar3 = 0x44;
        lVar13 = lVar14;
        goto LAB_14f7a53d3;
      }
      iVar1 = BN_cmp(uVar8,uVar4);
    } while (iVar1 == 0);
    uVar8 = BN_value_one();
    iVar1 = BN_add(lVar12,uVar2,uVar8);
    if ((iVar1 != 0) && (iVar1 = ec_group_do_inverse_ord(uVar3,lVar12,lVar12,lVar6), iVar1 != 0)) {
      iVar1 = BN_mod_mul(lVar10,uVar2,lVar11,uVar4,lVar6);
      if ((iVar1 != 0) && (iVar1 = BN_sub(lVar10,uVar7,lVar10), iVar1 != 0)) {
        iVar1 = BN_mod_mul(lVar12,lVar12,lVar10,uVar4,lVar6);
        if (iVar1 != 0) {
          lVar13 = ECDSA_SIG_new();
          if (lVar13 != 0) {
            ECDSA_SIG_set0(lVar13,lVar11,lVar12);
            goto LAB_14f7a53f7;
          }
          uVar2 = 0x10a;
          goto LAB_14f7a53cd;
        }
      }
    }
    uVar2 = 0x104;
    uVar3 = 3;
    lVar13 = lVar14;
  }
LAB_14f7a53d3:
  ERR_put_error(0x35,0x6a,uVar3,"crypto\\sm2\\sm2_sign.c",uVar2);
  BN_free(lVar11);
  BN_free(lVar12);
LAB_14f7a53f7:
  BN_CTX_free(lVar6);
  EC_POINT_free(lVar5);
  return lVar13;
}

// FUN_14f7a5430 @ 14f7a5430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f7a5430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f7a5454;
  uVar10 = 0;
  uVar2 = EC_KEY_get0_group();
  uVar3 = EC_GROUP_get0_order(uVar2);
  local_48 = 0;
  local_res20 = 0;
  lVar4 = BN_CTX_new();
  lVar5 = EC_POINT_new(uVar2);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    uVar2 = 0x12e;
LAB_14f7a5653:
    uVar9 = 0x41;
  }
  else {
    BN_CTX_start(lVar4);
    uVar6 = BN_CTX_get(lVar4);
    lVar7 = BN_CTX_get(lVar4);
    if (lVar7 == 0) {
      uVar2 = 0x136;
      goto LAB_14f7a5653;
    }
    ECDSA_SIG_get0(param_2,&local_48,&local_res20);
    uVar8 = BN_value_one();
    iVar1 = BN_cmp(local_48,uVar8);
    if (iVar1 < 0) {
LAB_14f7a563b:
      uVar2 = 0x14a;
      uVar9 = 0x65;
    }
    else {
      uVar8 = BN_value_one();
      iVar1 = BN_cmp(local_res20,uVar8);
      if (iVar1 < 0) goto LAB_14f7a563b;
      iVar1 = BN_cmp(uVar3,local_48);
      if (iVar1 < 1) goto LAB_14f7a563b;
      iVar1 = BN_cmp(uVar3,local_res20);
      if (iVar1 < 1) goto LAB_14f7a563b;
      iVar1 = BN_mod_add(uVar6,local_48,local_res20,uVar3,lVar4);
      if (iVar1 == 0) {
        uVar2 = 0x14f;
        uVar9 = 3;
      }
      else {
        iVar1 = BN_is_zero(uVar6);
        if (iVar1 == 0) {
          uVar8 = EC_KEY_get0_public_key(param_1);
          iVar1 = EC_POINT_mul(uVar2,lVar5,local_res20,uVar8,uVar6,lVar4);
          if (iVar1 != 0) {
            iVar1 = EC_POINT_get_affine_coordinates(uVar2,lVar5,lVar7,0,lVar4);
            if (iVar1 != 0) {
              iVar1 = BN_mod_add(uVar6,param_3,lVar7,uVar3,lVar4);
              if (iVar1 != 0) {
                iVar1 = BN_cmp(local_48,uVar6);
                if (iVar1 == 0) {
                  uVar10 = 1;
                }
                goto LAB_14f7a566d;
              }
              uVar2 = 0x15f;
              uVar9 = 3;
              goto LAB_14f7a5659;
            }
          }
          uVar2 = 0x15a;
          uVar9 = 0x10;
        }
        else {
          uVar2 = 0x154;
          uVar9 = 0x65;
        }
      }
    }
  }
LAB_14f7a5659:
  ERR_put_error(0x35,0x6b,uVar9,"crypto\\sm2\\sm2_sign.c",uVar2);
LAB_14f7a566d:
  EC_POINT_free(lVar5);
  BN_CTX_free(lVar4);
  return uVar10;
}

// sm2_sign @ 14f7a56a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm2_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res18;
  undefined8 uVar5;
  
  uVar5 = 0x14f7a56c0;
  uVar3 = 0;
  uVar4 = 0xffffffff;
  local_res18 = param_3;
  lVar2 = BN_bin2bn(param_1,param_2,0);
  if (lVar2 == 0) {
    ERR_put_error(0x35,0x69,3,"crypto\\sm2\\sm2_sign.c",0x1a3,uVar5);
    uVar4 = 0xffffffff;
  }
  else {
    uVar3 = FUN_14f7a5120(param_5,lVar2);
    iVar1 = i2d_ECDSA_SIG(uVar3,&local_res18);
    if (iVar1 < 0) {
      ERR_put_error(0x35,0x69,0x44,"crypto\\sm2\\sm2_sign.c",0x1ab,uVar5);
    }
    else {
      *param_4 = iVar1;
      uVar4 = 1;
    }
  }
  ECDSA_SIG_free(uVar3);
  BN_free(lVar2);
  return uVar4;
}

// sm2_verify @ 14f7a5780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
sm2_verify(undefined8 param_1,undefined4 param_2,void *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_res18;
  undefined4 uVar6;
  void *local_28;
  void *local_20;
  
  lVar4 = 0;
  local_res18 = 0;
  local_28 = (void *)0x0;
  uVar2 = 0xffffffff;
  local_20 = param_3;
  local_res18 = ECDSA_SIG_new();
  if (local_res18 == 0) {
    uVar6 = 0x1c4;
    uVar5 = 0x41;
  }
  else {
    lVar3 = d2i_ECDSA_SIG(&local_res18,&local_20,param_4);
    if (lVar3 == 0) {
      uVar6 = 0x1c8;
    }
    else {
      iVar1 = i2d_ECDSA_SIG(local_res18,&local_28);
      if (iVar1 == param_4) {
        iVar1 = memcmp(param_3,local_28,(longlong)iVar1);
        if (iVar1 == 0) {
          lVar4 = BN_bin2bn(param_1,param_2,0);
          if (lVar4 != 0) {
            uVar2 = FUN_14f7a5430(param_5,local_res18,lVar4);
            goto LAB_14f7a5888;
          }
          uVar6 = 0x1d4;
          uVar5 = 3;
          goto LAB_14f7a5874;
        }
      }
      uVar6 = 0x1ce;
    }
    uVar5 = 0x68;
  }
LAB_14f7a5874:
  ERR_put_error(0x35,0x6c,uVar5,"crypto\\sm2\\sm2_sign.c",uVar6);
LAB_14f7a5888:
  CRYPTO_free(local_28,"crypto\\sm2\\sm2_sign.c",0x1db);
  BN_free(lVar4);
  ECDSA_SIG_free(local_res18);
  return uVar2;
}

