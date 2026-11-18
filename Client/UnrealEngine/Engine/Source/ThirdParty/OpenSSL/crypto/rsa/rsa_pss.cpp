// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// RSA_padding_add_PKCS1_PSS @ 14f7a6c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_padding_add_PKCS1_PSS(void)

{
  RSA_padding_add_PKCS1_PSS_mgf1();
  return;
}

// RSA_padding_add_PKCS1_PSS_mgf1 @ 14f7a6c30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * RSA_padding_add_PKCS1_PSS_mgf1
                 (longlong param_1,byte *param_2,undefined8 param_3,longlong param_4,
                 longlong param_5,uint param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar14;
  byte bVar15;
  int iVar16;
  undefined4 uVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar19;
  longlong local_48;
  byte *pbVar13;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  pbVar13 = (byte *)0x0;
  uVar11 = 0;
  pbVar12 = (byte *)0x0;
  local_48 = 0;
  lVar18 = param_4;
  if (param_5 != 0) {
    lVar18 = param_5;
  }
  uVar4 = EVP_MD_size(param_4);
  pbVar14 = pbVar13;
  pbVar7 = pbVar13;
  if ((int)uVar4 < 0) goto LAB_14f7a6f60;
  uVar10 = uVar4;
  if (param_6 != 0xffffffff) {
    if (param_6 == 0xfffffffe) {
      uVar10 = 0xfffffffd;
    }
    else {
      uVar10 = param_6;
      if ((int)param_6 < -3) {
        ERR_put_error(4,0x98,0x88,"crypto\\rsa\\rsa_pss.c",CONCAT44(uVar17,0xae));
        pbVar14 = pbVar12;
        pbVar7 = (byte *)0x0;
        goto LAB_14f7a6f60;
      }
    }
  }
  cVar3 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  bVar15 = cVar3 - 1U & 7;
  iVar5 = RSA_size(param_1);
  if (bVar15 == 0) {
    *param_2 = 0;
    param_2 = param_2 + 1;
    iVar5 = iVar5 + -1;
  }
  param_6 = uVar10;
  if (iVar5 < (int)(uVar4 + 2)) {
    uVar19 = CONCAT44(uVar17,0xba);
LAB_14f7a6ce1:
    uVar17 = 0x6e;
LAB_14f7a6ce7:
    ERR_put_error(4,0x98,uVar17,"crypto\\rsa\\rsa_pss.c",uVar19);
  }
  else {
    iVar16 = iVar5 - uVar4;
    if (uVar10 == 0xfffffffd) {
      param_6 = iVar16 - 2;
    }
    else if (iVar16 + -2 < (int)uVar10) {
      uVar19 = CONCAT44(uVar17,0xc1);
      goto LAB_14f7a6ce1;
    }
    if (0 < (int)param_6) {
      pbVar7 = (byte *)CRYPTO_malloc((longlong)(int)param_6,"crypto\\rsa\\rsa_pss.c",0xc5);
      if (pbVar7 == (byte *)0x0) {
        uVar19 = CONCAT44(uVar17,200);
        uVar17 = 0x41;
        goto LAB_14f7a6ce7;
      }
      iVar6 = RAND_bytes(pbVar7,param_6);
      if (iVar6 < 1) goto LAB_14f7a6f60;
    }
    local_48 = EVP_MD_CTX_new();
    pbVar14 = pbVar12;
    if (((((local_48 != 0) && (iVar6 = EVP_DigestInit_ex(local_48,param_4,0), iVar6 != 0)) &&
         (iVar6 = EVP_DigestUpdate(local_48,&DAT_1534e67b0,8), iVar6 != 0)) &&
        (iVar6 = EVP_DigestUpdate(local_48,param_3,(longlong)(int)uVar4), iVar6 != 0)) &&
       (((param_6 == 0 ||
         (iVar6 = EVP_DigestUpdate(local_48,pbVar7,(longlong)(int)param_6), iVar6 != 0)) &&
        ((iVar6 = EVP_DigestFinal_ex(local_48,param_2 + (iVar16 + -1),0), iVar6 != 0 &&
         (iVar6 = PKCS1_MGF1(param_2,iVar16 + -1,param_2 + (iVar16 + -1),uVar4,lVar18), iVar6 == 0))
        )))) {
      pbVar12 = param_2 + (int)((iVar16 - param_6) + -2);
      *pbVar12 = *pbVar12 ^ 1;
      puVar9 = (ulonglong *)(pbVar12 + 1);
      if (0 < (int)param_6) {
        if ((0x1f < param_6) &&
           ((pbVar7 + (int)(param_6 - 1) < puVar9 ||
            ((byte *)((longlong)(int)(param_6 - 1) + (longlong)puVar9) < pbVar7)))) {
          uVar4 = param_6 & 0x8000001f;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
          }
          puVar8 = (ulonglong *)(pbVar7 + 0x10);
          do {
            uVar11 = (int)pbVar13 + 0x20;
            pbVar13 = (byte *)(ulonglong)uVar11;
            uVar2 = puVar8[-1];
            puVar1 = puVar8 + 4;
            *puVar9 = puVar8[-2] ^ *puVar9;
            puVar9[1] = uVar2 ^ puVar9[1];
            uVar2 = puVar8[1];
            puVar9[2] = puVar9[2] ^ *puVar8;
            puVar9[3] = puVar9[3] ^ uVar2;
            puVar9 = puVar9 + 4;
            puVar8 = puVar1;
          } while ((longlong)((-0x10 - (longlong)pbVar7) + (longlong)puVar1) <
                   (longlong)(int)(param_6 - uVar4));
        }
        for (lVar18 = (longlong)(int)uVar11; lVar18 < (int)param_6; lVar18 = lVar18 + 1) {
          *(byte *)puVar9 = (byte)*puVar9 ^ pbVar7[lVar18];
          puVar9 = (ulonglong *)((longlong)puVar9 + 1);
        }
      }
      if (bVar15 != 0) {
        *param_2 = *param_2 & (byte)(0xff >> (8 - bVar15 & 0x1f));
      }
      param_2[iVar5 + -1] = 0xbc;
      pbVar14 = &DAT_00000001;
    }
  }
LAB_14f7a6f60:
  EVP_MD_CTX_free(local_48);
  CRYPTO_clear_free(pbVar7,(longlong)(int)param_6,"crypto\\rsa\\rsa_pss.c",0xf7);
  return pbVar14;
}

// RSA_verify_PKCS1_PSS @ 14f7a6fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_verify_PKCS1_PSS(void)

{
  RSA_verify_PKCS1_PSS_mgf1();
  return;
}

// RSA_verify_PKCS1_PSS_mgf1 @ 14f7a6fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong *
RSA_verify_PKCS1_PSS_mgf1
          (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,byte *param_5,
          int param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar15;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  byte bVar21;
  size_t _Size;
  ulonglong *puVar22;
  ulonglong *puVar23;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_c8;
  int local_c0;
  byte *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  ulonglong *puVar14;
  ulonglong *puVar16;
  
  uStack_48 = 0x14f7a6ff7;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  puVar16 = (ulonglong *)0x0;
  puVar22 = (ulonglong *)0x0;
  uVar15 = 0;
  local_b0 = param_3;
  local_a8 = param_2;
  local_c8 = EVP_MD_CTX_new();
  lVar19 = local_c8;
  puVar8 = (ulonglong *)0x0;
  puVar23 = puVar22;
  if (local_c8 == 0) goto LAB_14f7a73a9;
  if (param_4 == 0) {
    param_4 = param_3;
  }
  iVar5 = EVP_MD_size(param_3);
  lVar19 = local_c8;
  puVar8 = puVar16;
  puVar23 = puVar16;
  local_c0 = iVar5;
  if (iVar5 < 0) goto LAB_14f7a73a9;
  iVar7 = iVar5;
  if ((param_6 == -1) || (iVar7 = param_6, -4 < param_6)) {
    cVar4 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
    bVar21 = cVar4 - 1U & 7;
    iVar6 = RSA_size(param_1);
    if ((*param_5 & (byte)(0xff << bVar21)) != 0) {
      local_d8 = CONCAT44(local_d8._4_4_,0x46);
      ERR_put_error(4,0x7e,0x85,"crypto\\rsa\\rsa_pss.c");
      lVar19 = local_c8;
      goto LAB_14f7a73a9;
    }
    if (bVar21 == 0) {
      param_5 = param_5 + 1;
      iVar6 = iVar6 + -1;
    }
    if (iVar6 < iVar5 + 2) {
      local_d8 = CONCAT44(local_d8._4_4_,0x4e);
LAB_14f7a710d:
      uVar20 = 0x6d;
    }
    else {
      iVar5 = iVar6 - iVar5;
      if (iVar7 == -3) {
        iVar7 = iVar5 + -2;
      }
      else if (iVar5 + -2 < iVar7) {
        local_d8 = CONCAT44(local_d8._4_4_,0x54);
        goto LAB_14f7a710d;
      }
      if (param_5[iVar6 + -1] == 0xbc) {
        uVar17 = iVar5 - 1;
        lVar18 = (longlong)(int)uVar17;
        local_b8 = param_5 + lVar18;
        puVar8 = (ulonglong *)CRYPTO_malloc(lVar18,"crypto\\rsa\\rsa_pss.c",0x5d);
        if (puVar8 == (ulonglong *)0x0) {
          local_d8 = CONCAT44(local_d8._4_4_,0x5f);
          uVar20 = 0x41;
        }
        else {
          _Size = (size_t)local_c0;
          local_d8 = param_4;
          iVar6 = PKCS1_MGF1(puVar8,uVar17,local_b8,local_c0);
          lVar19 = local_c8;
          if (iVar6 < 0) goto LAB_14f7a73a9;
          uVar13 = uVar15;
          if (((0 < (int)uVar17) && (0x1f < uVar17)) &&
             ((param_5 + (iVar5 + -2) < puVar8 ||
              ((byte *)((longlong)(iVar5 + -2) + (longlong)puVar8) < param_5)))) {
            uVar11 = uVar17 & 0x8000001f;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
            }
            puVar10 = puVar8;
            puVar14 = puVar16;
            do {
              uVar13 = (int)puVar14 + 0x20;
              puVar14 = (ulonglong *)(ulonglong)uVar13;
              puVar2 = (ulonglong *)(((longlong)param_5 - (longlong)puVar8) + (longlong)puVar10);
              uVar3 = puVar2[1];
              puVar1 = puVar10 + 4;
              *puVar10 = *puVar2 ^ *puVar10;
              puVar10[1] = uVar3 ^ puVar10[1];
              puVar2 = (ulonglong *)
                       (((longlong)param_5 - (longlong)puVar8) + -0x10 + (longlong)puVar1);
              uVar3 = puVar2[1];
              puVar10[2] = *puVar2 ^ puVar10[2];
              puVar10[3] = uVar3 ^ puVar10[3];
              puVar10 = puVar1;
            } while ((longlong)puVar1 - (longlong)puVar8 < (longlong)(int)(uVar17 - uVar11));
          }
          lVar9 = (longlong)(int)uVar13;
          if (lVar9 < lVar18) {
            pbVar12 = (byte *)(lVar9 + (longlong)puVar8);
            lVar18 = lVar18 - lVar9;
            do {
              *pbVar12 = *pbVar12 ^ pbVar12[(longlong)param_5 - (longlong)puVar8];
              pbVar12 = pbVar12 + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          if (bVar21 != 0) {
            *(byte *)puVar8 = (byte)*puVar8 & (byte)(0xff >> (8 - bVar21 & 0x1f));
          }
          if ((byte)*puVar8 == 0) {
            puVar10 = puVar8;
            do {
              uVar15 = (uint)puVar16;
              if (iVar5 + -2 <= (int)uVar15) break;
              puVar10 = (ulonglong *)((longlong)puVar10 + 1);
              uVar15 = uVar15 + 1;
              puVar16 = (ulonglong *)(ulonglong)uVar15;
            } while (*(byte *)puVar10 == 0);
          }
          iVar5 = uVar15 + 1;
          if (*(byte *)((longlong)(int)uVar15 + (longlong)puVar8) == 1) {
            if ((iVar7 == -2) || (uVar17 - iVar5 == iVar7)) {
              iVar7 = EVP_DigestInit_ex(local_c8,local_b0,0);
              puVar23 = puVar22;
              if ((((iVar7 != 0) &&
                   ((iVar7 = EVP_DigestUpdate(lVar19,&DAT_1534e67b0,8), iVar7 != 0 &&
                    (iVar7 = EVP_DigestUpdate(lVar19,local_a8,_Size), iVar7 != 0)))) &&
                  ((uVar17 - iVar5 == 0 ||
                   (iVar5 = EVP_DigestUpdate(lVar19,(byte *)((longlong)iVar5 + (longlong)puVar8),
                                             (longlong)(int)(uVar17 - iVar5)), iVar5 != 0)))) &&
                 (iVar5 = EVP_DigestFinal_ex(lVar19,local_98,0), iVar5 != 0)) {
                iVar5 = memcmp(local_98,local_b8,_Size);
                if (iVar5 == 0) {
                  puVar23 = (ulonglong *)&DAT_00000001;
                }
                else {
                  local_d8 = CONCAT44(local_d8._4_4_,0x7c);
                  ERR_put_error(4,0x7e,0x68,"crypto\\rsa\\rsa_pss.c");
                }
              }
              goto LAB_14f7a73a9;
            }
            local_d8 = CONCAT44(local_d8._4_4_,0x6e);
            goto LAB_14f7a70d0;
          }
          local_d8 = CONCAT44(local_d8._4_4_,0x6a);
          uVar20 = 0x87;
        }
      }
      else {
        local_d8 = CONCAT44(local_d8._4_4_,0x58);
        uVar20 = 0x86;
        puVar8 = (ulonglong *)0x0;
      }
    }
    ERR_put_error(4,0x7e,uVar20,"crypto\\rsa\\rsa_pss.c");
    lVar19 = local_c8;
  }
  else {
    local_d8 = CONCAT44(local_d8._4_4_,0x3f);
LAB_14f7a70d0:
    ERR_put_error(4,0x7e,0x88,"crypto\\rsa\\rsa_pss.c");
    lVar19 = local_c8;
  }
LAB_14f7a73a9:
  CRYPTO_free(puVar8,"crypto\\rsa\\rsa_pss.c",0x83);
  EVP_MD_CTX_free(lVar19);
  return puVar23;
}

