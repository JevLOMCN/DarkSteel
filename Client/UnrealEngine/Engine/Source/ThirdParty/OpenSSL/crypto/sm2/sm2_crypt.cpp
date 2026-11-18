// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// SM2_Ciphertext_free @ 14f7a58e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SM2_Ciphertext_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534e6730);
  return;
}

// SM2_Ciphertext_new @ 14f7a5920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SM2_Ciphertext_new(void)

{
  ASN1_item_new(&DAT_1534e6730);
  return;
}

// d2i_SM2_Ciphertext @ 14f7a5950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_SM2_Ciphertext(void)

{
  ASN1_item_d2i();
  return;
}

// FUN_14f7a5980 @ 14f7a5980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7a5980(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f7a59a0;
  lVar2 = BN_new();
  lVar3 = BN_new();
  lVar4 = BN_new();
  lVar5 = 0;
  if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
    iVar1 = EC_GROUP_get_curve(param_1,lVar2,lVar3,lVar4,0,uVar6);
    lVar5 = 0;
    if (iVar1 != 0) {
      iVar1 = BN_num_bits(lVar2);
      lVar5 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    }
  }
  BN_free(lVar2);
  BN_free(lVar3);
  BN_free(lVar4);
  return lVar5;
}

// i2d_SM2_Ciphertext @ 14f7a5a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_SM2_Ciphertext(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534e6730);
  return;
}

// sm2_ciphertext_size @ 14f7a5a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm2_ciphertext_size(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = EC_KEY_get0_group();
  lVar5 = FUN_14f7a5980(uVar4);
  iVar1 = EVP_MD_size(param_2);
  if ((lVar5 == 0) || (iVar1 < 0)) {
    uVar4 = 0;
  }
  else {
    iVar2 = ASN1_object_size(0,(int)lVar5 + 1,2);
    iVar3 = ASN1_object_size(0,param_3,4);
    iVar1 = ASN1_object_size(0,iVar1,4);
    iVar1 = ASN1_object_size(1,(longlong)(iVar1 + iVar2 * 2 + iVar3),0x10);
    uVar4 = 1;
    *param_4 = (longlong)iVar1;
  }
  return uVar4;
}

// sm2_decrypt @ 14f7a5b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong *
sm2_decrypt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
           undefined1 *param_5,size_t *param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  byte *pbVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  undefined4 uVar24;
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffff58;
  longlong lVar25;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  
  uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  puVar22 = (ulonglong *)0x0;
  local_70 = 0;
  local_res18 = param_3;
  uVar10 = EC_KEY_get0_group();
  local_68 = 0;
  local_78 = 0;
  uVar11 = FUN_14f7a5980(uVar10);
  iVar7 = EVP_MD_size(param_2);
  puVar23 = (ulonglong *)0x0;
  puVar19 = puVar22;
  puVar12 = puVar22;
  puVar15 = puVar22;
  puVar16 = puVar22;
  if ((uVar11 != 0) && (puVar12 = (ulonglong *)0x0, 0 < iVar7)) {
    memset(param_5,0xff,*param_6);
    puVar12 = (ulonglong *)ASN1_item_d2i(0,&local_res18,param_4,&DAT_1534e6730);
    if (puVar12 == (ulonglong *)0x0) {
      uVar10 = CONCAT44(uVar24,0x11d);
      uVar24 = 100;
    }
    else if (*(int *)puVar12[2] == iVar7) {
      uVar4 = *(undefined8 *)((int *)puVar12[2] + 2);
      uVar3 = *(uint *)puVar12[3];
      uVar21 = (ulonglong)(int)uVar3;
      puVar5 = *(ulonglong **)((uint *)puVar12[3] + 2);
      if (*param_6 < uVar21) {
        uVar10 = CONCAT44(uVar24,0x12a);
        uVar24 = 0x6b;
      }
      else {
        local_70 = BN_CTX_new();
        if (local_70 == 0) {
          uVar10 = CONCAT44(uVar24,0x130);
          uVar24 = 0x41;
        }
        else {
          BN_CTX_start(local_70);
          uVar13 = BN_CTX_get(local_70);
          lVar14 = BN_CTX_get(local_70);
          if (lVar14 != 0) {
            puVar15 = (ulonglong *)CRYPTO_zalloc(uVar21,"crypto\\sm2\\sm2_crypt.c",0x13d);
            local_78 = CRYPTO_zalloc(uVar11 * 2,"crypto\\sm2\\sm2_crypt.c",0x13e);
            puVar16 = (ulonglong *)CRYPTO_zalloc((longlong)iVar7,"crypto\\sm2\\sm2_crypt.c",0x13f);
            puVar19 = puVar23;
            if (((puVar15 == (ulonglong *)0x0) || (local_78 == 0)) || (puVar16 == (ulonglong *)0x0))
            {
              uVar10 = CONCAT44(uVar24,0x142);
            }
            else {
              local_68 = EC_POINT_new(uVar10);
              if (local_68 != 0) {
                lVar25 = local_70;
                iVar8 = EC_POINT_set_affine_coordinates
                                  (uVar10,local_68,*puVar12,puVar12[1],local_70);
                uVar24 = (undefined4)((ulonglong)lVar25 >> 0x20);
                if (iVar8 != 0) {
                  uVar17 = EC_KEY_get0_private_key(param_1);
                  iVar8 = EC_POINT_mul(uVar10,local_68,0,local_68,uVar17,local_70);
                  uVar24 = (undefined4)((ulonglong)uVar17 >> 0x20);
                  if (iVar8 != 0) {
                    lVar25 = local_70;
                    iVar8 = EC_POINT_get_affine_coordinates(uVar10,local_68,uVar13,lVar14,local_70);
                    uVar24 = (undefined4)((ulonglong)lVar25 >> 0x20);
                    if (iVar8 != 0) {
                      iVar8 = BN_bn2binpad(uVar13,local_78,uVar11 & 0xffffffff);
                      if (-1 < iVar8) {
                        iVar8 = BN_bn2binpad(lVar14,local_78 + uVar11,uVar11 & 0xffffffff);
                        if (-1 < iVar8) {
                          uVar24 = 0;
                          iVar8 = ecdh_KDF_X9_63(puVar15,uVar21,local_78,uVar11 * 2,0,0,param_2);
                          if (iVar8 != 0) {
                            puVar23 = (ulonglong *)0x0;
                            puVar19 = puVar22;
                            if ((uVar3 != 0) && (puVar19 = puVar23, 0x1f < uVar3)) {
                              lVar14 = (longlong)(int)(uVar3 - 1);
                              if ((((undefined1 *)(lVar14 + (longlong)puVar15) < param_5) ||
                                  (param_5 + lVar14 < puVar15)) &&
                                 (((undefined1 *)(lVar14 + (longlong)puVar5) < param_5 ||
                                  (param_5 + lVar14 < puVar5)))) {
                                uVar9 = uVar3 & 0x8000001f;
                                if ((int)uVar9 < 0) {
                                  uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
                                }
                                puVar23 = puVar15;
                                puVar19 = puVar22;
                                do {
                                  uVar18 = puVar23[1];
                                  puVar19 = (ulonglong *)(ulonglong)((int)puVar19 + 0x20);
                                  puVar2 = (ulonglong *)
                                           (((longlong)puVar5 - (longlong)puVar15) +
                                           (longlong)puVar23);
                                  uVar6 = puVar2[1];
                                  puVar1 = puVar23 + 4;
                                  *(ulonglong *)
                                   (param_5 + (-0x20 - (longlong)puVar15) + (longlong)puVar1) =
                                       *puVar2 ^ *puVar23;
                                  *(ulonglong *)
                                   ((longlong)
                                    (param_5 + (-0x20 - (longlong)puVar15) + (longlong)puVar1) + 8)
                                       = uVar6 ^ uVar18;
                                  puVar2 = (ulonglong *)
                                           (((longlong)puVar5 - (longlong)puVar15) + -0x10 +
                                           (longlong)puVar1);
                                  uVar6 = puVar2[1];
                                  uVar18 = puVar23[3];
                                  *(ulonglong *)
                                   (param_5 + (-0x10 - (longlong)puVar15) + (longlong)puVar1) =
                                       *puVar2 ^ puVar23[2];
                                  *(ulonglong *)
                                   ((longlong)
                                    (param_5 + (-0x10 - (longlong)puVar15) + (longlong)puVar1) + 8)
                                       = uVar6 ^ uVar18;
                                  puVar23 = puVar1;
                                } while ((longlong)puVar1 - (longlong)puVar15 !=
                                         (longlong)(int)(uVar3 - uVar9));
                              }
                            }
                            uVar18 = (ulonglong)(int)puVar19;
                            if (uVar18 != uVar21) {
                              pbVar20 = (byte *)(uVar18 + (longlong)puVar15);
                              lVar14 = uVar21 - uVar18;
                              do {
                                pbVar20[(longlong)param_5 - (longlong)puVar15] =
                                     pbVar20[(longlong)puVar5 - (longlong)puVar15] ^ *pbVar20;
                                pbVar20 = pbVar20 + 1;
                                lVar14 = lVar14 + -1;
                              } while (lVar14 != 0);
                            }
                            puVar19 = (ulonglong *)EVP_MD_CTX_new();
                            if (puVar19 == (ulonglong *)0x0) {
                              ERR_put_error(0x35,0x66,0x41,"crypto\\sm2\\sm2_crypt.c",
                                            CONCAT44(uVar24,0x162));
                            }
                            else {
                              iVar8 = EVP_DigestInit(puVar19,param_2);
                              if ((((iVar8 == 0) ||
                                   (iVar8 = EVP_DigestUpdate(puVar19,local_78,uVar11), iVar8 == 0))
                                  || (iVar8 = EVP_DigestUpdate(puVar19,param_5,uVar21), iVar8 == 0))
                                 || ((iVar8 = EVP_DigestUpdate(puVar19,local_78 + uVar11,uVar11),
                                     iVar8 == 0 ||
                                     (iVar8 = EVP_DigestFinal(puVar19,puVar16,0), iVar8 == 0)))) {
                                ERR_put_error(0x35,0x66,6,"crypto\\sm2\\sm2_crypt.c",
                                              CONCAT44(uVar24,0x16b));
                              }
                              else {
                                iVar7 = CRYPTO_memcmp(puVar16,uVar4,(longlong)iVar7);
                                if (iVar7 == 0) {
                                  puVar22 = (ulonglong *)&DAT_00000001;
                                  *param_6 = uVar21;
                                  goto LAB_14f7a5c3b;
                                }
                                ERR_put_error(0x35,0x66,0x66,"crypto\\sm2\\sm2_crypt.c",
                                              CONCAT44(uVar24,0x170));
                              }
                            }
                            goto LAB_14f7a5c21;
                          }
                        }
                      }
                      ERR_put_error(0x35,0x66,0x44,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar24,0x159)
                                   );
                      goto LAB_14f7a5c21;
                    }
                  }
                }
                ERR_put_error(0x35,0x66,0x10,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar24,0x151));
                goto LAB_14f7a5c21;
              }
              uVar10 = CONCAT44(uVar24,0x148);
            }
            ERR_put_error(0x35,0x66,0x41,"crypto\\sm2\\sm2_crypt.c",uVar10);
            goto LAB_14f7a5c21;
          }
          uVar10 = CONCAT44(uVar24,0x139);
          uVar24 = 3;
        }
      }
    }
    else {
      uVar10 = CONCAT44(uVar24,0x122);
      uVar24 = 0x68;
    }
    ERR_put_error(0x35,0x66,uVar24,"crypto\\sm2\\sm2_crypt.c",uVar10);
  }
LAB_14f7a5c21:
  memset(param_5,0,*param_6);
LAB_14f7a5c3b:
  CRYPTO_free(puVar15,"crypto\\sm2\\sm2_crypt.c",0x17b);
  CRYPTO_free(local_78,"crypto\\sm2\\sm2_crypt.c",0x17c);
  CRYPTO_free(puVar16,"crypto\\sm2\\sm2_crypt.c",0x17d);
  EC_POINT_free(local_68);
  BN_CTX_free(local_70);
  ASN1_item_free(puVar12,&DAT_1534e6730);
  EVP_MD_CTX_free(puVar19);
  return puVar22;
}

// sm2_encrypt @ 14f7a61f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong *
sm2_encrypt(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulonglong *param_4,
           void *param_5,size_t *param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  byte *pbVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff28;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong *puVar19;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uStack_40 = 0x14f7a6214;
  puVar19 = (ulonglong *)0x0;
  puVar18 = (ulonglong *)0x0;
  lVar6 = EVP_MD_CTX_new();
  uVar7 = EC_KEY_get0_group(param_1);
  local_58 = EC_GROUP_get0_order(uVar7);
  local_50 = EC_KEY_get0_public_key(param_1);
  local_a0 = 0;
  puVar17 = (ulonglong *)0x0;
  local_98 = 0;
  local_a8 = 0;
  iVar4 = EVP_MD_size(param_2);
  local_60 = 0;
  local_68 = 0;
  if ((lVar6 == 0) || (iVar4 < 1)) {
    uVar7 = CONCAT44(uVar20,0x84);
LAB_14f7a67fd:
    uVar20 = 0x44;
    puVar9 = puVar19;
  }
  else {
    uVar8 = FUN_14f7a5980(uVar7);
    if (uVar8 == 0) {
      uVar7 = CONCAT44(uVar20,0x8a);
      goto LAB_14f7a67fd;
    }
    local_a0 = EC_POINT_new(uVar7);
    local_98 = EC_POINT_new(uVar7);
    puVar9 = (ulonglong *)BN_CTX_new();
    if (((local_a0 == 0) || (local_98 == 0)) || (puVar9 == (ulonglong *)0x0)) {
      uVar7 = CONCAT44(uVar20,0x92);
      uVar20 = 0x41;
    }
    else {
      BN_CTX_start(puVar9);
      uVar10 = BN_CTX_get(puVar9);
      uVar11 = BN_CTX_get(puVar9);
      local_48 = BN_CTX_get(puVar9);
      uVar12 = BN_CTX_get(puVar9);
      lVar13 = BN_CTX_get(puVar9);
      if (lVar13 != 0) {
        local_a8 = CRYPTO_zalloc(uVar8 * 2,"crypto\\sm2\\sm2_crypt.c",0xa2);
        puVar14 = (ulonglong *)CRYPTO_zalloc((longlong)iVar4,"crypto\\sm2\\sm2_crypt.c",0xa3);
        if ((local_a8 == 0) || (puVar14 == (ulonglong *)0x0)) {
          uVar7 = CONCAT44(uVar20,0xa6);
          puVar17 = puVar19;
LAB_14f7a67c4:
          uVar20 = 0x41;
LAB_14f7a67ca:
          ERR_put_error(0x35,0x67,uVar20,"crypto\\sm2\\sm2_crypt.c",uVar7);
          puVar18 = puVar19;
          goto LAB_14f7a681a;
        }
        memset(param_5,0,*param_6);
        iVar5 = BN_priv_rand_range(uVar10,local_58);
        if (iVar5 == 0) {
          uVar7 = CONCAT44(uVar20,0xad);
LAB_14f7a63d7:
          ERR_put_error(0x35,0x67,0x44,"crypto\\sm2\\sm2_crypt.c",uVar7);
          puVar18 = puVar19;
        }
        else {
          uVar20 = 0;
          iVar5 = EC_POINT_mul(uVar7,local_a0,uVar10,0,0,puVar9);
          if (iVar5 != 0) {
            puVar15 = puVar9;
            iVar5 = EC_POINT_get_affine_coordinates(uVar7,local_a0,uVar11,uVar12,puVar9);
            uVar20 = (undefined4)((ulonglong)puVar15 >> 0x20);
            if (iVar5 != 0) {
              iVar5 = EC_POINT_mul(uVar7,local_98,0,local_50,uVar10,puVar9);
              uVar3 = local_48;
              uVar20 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if (iVar5 != 0) {
                puVar15 = puVar9;
                iVar5 = EC_POINT_get_affine_coordinates(uVar7,local_98,local_48,lVar13,puVar9);
                uVar20 = (undefined4)((ulonglong)puVar15 >> 0x20);
                if (iVar5 != 0) {
                  iVar5 = BN_bn2binpad(uVar3,local_a8,uVar8 & 0xffffffff);
                  if (-1 < iVar5) {
                    iVar5 = BN_bn2binpad(lVar13,uVar8 + local_a8,uVar8 & 0xffffffff);
                    if (-1 < iVar5) {
                      puVar17 = (ulonglong *)CRYPTO_zalloc(param_4,"crypto\\sm2\\sm2_crypt.c",0xbf);
                      if (puVar17 == (ulonglong *)0x0) {
                        uVar7 = CONCAT44(uVar20,0xc1);
                        goto LAB_14f7a67c4;
                      }
                      uVar20 = 0;
                      iVar5 = ecdh_KDF_X9_63(puVar17,param_4,local_a8,uVar8 * 2,0,0,param_2);
                      if (iVar5 != 0) {
                        if (param_4 != (ulonglong *)0x0) {
                          if (((ulonglong *)0x1f < param_4) &&
                             ((param_3 + -1 + (longlong)param_4 < puVar17 ||
                              ((undefined1 *)((longlong)param_4 + -1) + (longlong)puVar17 < param_3)
                              ))) {
                            puVar15 = puVar17;
                            do {
                              puVar19 = puVar19 + 4;
                              puVar1 = (ulonglong *)
                                       (((longlong)param_3 - (longlong)puVar17) + (longlong)puVar15)
                              ;
                              uVar2 = puVar1[1];
                              *puVar15 = *puVar1 ^ *puVar15;
                              puVar15[1] = uVar2 ^ puVar15[1];
                              puVar1 = (ulonglong *)
                                       (((longlong)param_3 - (longlong)puVar17) + -0x10 +
                                       (longlong)(puVar15 + 4));
                              uVar2 = puVar1[1];
                              puVar15[2] = *puVar1 ^ puVar15[2];
                              puVar15[3] = uVar2 ^ puVar15[3];
                              puVar15 = puVar15 + 4;
                            } while (puVar19 !=
                                     (ulonglong *)
                                     ((longlong)param_4 - (ulonglong)((uint)param_4 & 0x1f)));
                          }
                          if (puVar19 != param_4) {
                            pbVar16 = (byte *)((longlong)puVar19 + (longlong)puVar17);
                            lVar13 = (longlong)param_4 - (longlong)puVar19;
                            do {
                              *pbVar16 = *pbVar16 ^ pbVar16[(longlong)param_3 - (longlong)puVar17];
                              pbVar16 = pbVar16 + 1;
                              lVar13 = lVar13 + -1;
                            } while (lVar13 != 0);
                          }
                        }
                        iVar5 = EVP_DigestInit(lVar6,param_2);
                        if ((((iVar5 == 0) ||
                             (iVar5 = EVP_DigestUpdate(lVar6,local_a8,uVar8), iVar5 == 0)) ||
                            (iVar5 = EVP_DigestUpdate(lVar6,param_3,param_4), iVar5 == 0)) ||
                           ((iVar5 = EVP_DigestUpdate(lVar6,uVar8 + local_a8,uVar8), iVar5 == 0 ||
                            (iVar5 = EVP_DigestFinal(lVar6,puVar14,0), iVar5 == 0)))) {
                          ERR_put_error(0x35,0x67,6,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar20,0xd4)
                                       );
                        }
                        else {
                          local_78 = uVar11;
                          local_70 = uVar12;
                          local_68 = ASN1_OCTET_STRING_new();
                          local_60 = ASN1_OCTET_STRING_new();
                          if ((local_68 == 0) || (local_60 == 0)) {
                            ERR_put_error(0x35,0x67,0x41,"crypto\\sm2\\sm2_crypt.c",
                                          CONCAT44(uVar20,0xde));
                          }
                          else {
                            iVar4 = ASN1_OCTET_STRING_set(local_68,puVar14,iVar4);
                            if ((iVar4 == 0) ||
                               (iVar4 = ASN1_OCTET_STRING_set
                                                  (local_60,puVar17,(ulonglong)param_4 & 0xffffffff)
                               , iVar4 == 0)) {
                              uVar7 = CONCAT44(uVar20,0xe3);
                            }
                            else {
                              iVar4 = ASN1_item_i2d(&local_78,&param_5,&DAT_1534e6730);
                              if (-1 < iVar4) {
                                puVar18 = (ulonglong *)&DAT_00000001;
                                *param_6 = (longlong)iVar4;
                                goto LAB_14f7a681a;
                              }
                              uVar7 = CONCAT44(uVar20,0xea);
                            }
                            ERR_put_error(0x35,0x67,0x44,"crypto\\sm2\\sm2_crypt.c",uVar7);
                          }
                        }
                        goto LAB_14f7a681a;
                      }
                      uVar7 = CONCAT44(uVar20,200);
                      uVar20 = 6;
                      goto LAB_14f7a67ca;
                    }
                  }
                  uVar7 = CONCAT44(uVar20,0xbb);
                  goto LAB_14f7a63d7;
                }
              }
            }
          }
          ERR_put_error(0x35,0x67,0x10,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar20,0xb5));
        }
        goto LAB_14f7a681a;
      }
      uVar7 = CONCAT44(uVar20,0x9e);
      uVar20 = 3;
    }
  }
  ERR_put_error(0x35,0x67,uVar20,"crypto\\sm2\\sm2_crypt.c",uVar7);
  puVar17 = puVar19;
  puVar18 = puVar19;
  puVar14 = puVar19;
LAB_14f7a681a:
  ASN1_OCTET_STRING_free(local_60);
  ASN1_OCTET_STRING_free(local_68);
  CRYPTO_free(puVar17,"crypto\\sm2\\sm2_crypt.c",0xf4);
  CRYPTO_free(local_a8,"crypto\\sm2\\sm2_crypt.c",0xf5);
  CRYPTO_free(puVar14,"crypto\\sm2\\sm2_crypt.c",0xf6);
  EVP_MD_CTX_free(lVar6);
  BN_CTX_free(puVar9);
  EC_POINT_free(local_a0);
  EC_POINT_free(local_98);
  return puVar18;
}

// sm2_plaintext_size @ 14f7a68c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm2_plaintext_size(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined8 uVar2;
  
  uVar2 = 0x14f7a68d0;
  local_res8[0] = param_1;
  lVar1 = ASN1_item_d2i(0,local_res8,param_2,&DAT_1534e6730);
  if (lVar1 == 0) {
    ERR_put_error(0x35,0x68,0x68,"crypto\\sm2\\sm2_crypt.c",0x47,uVar2);
    return 0;
  }
  *param_3 = (longlong)**(int **)(lVar1 + 0x18);
  ASN1_item_free(lVar1,&DAT_1534e6730);
  return 1;
}

