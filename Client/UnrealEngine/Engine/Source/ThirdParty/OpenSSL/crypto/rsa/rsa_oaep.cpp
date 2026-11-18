// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// PKCS1_MGF1 @ 14f77dd90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
PKCS1_MGF1(longlong param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uVar7;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8 = param_5;
  iVar4 = 0;
  local_b4 = param_4;
  local_b0 = param_3;
  lVar3 = EVP_MD_CTX_new();
  uVar7 = 0xffffffff;
  uVar6 = 0xffffffff;
  uVar8 = uVar7;
  if ((lVar3 != 0) && (iVar1 = EVP_MD_size(param_5), -1 < iVar1)) {
    iVar5 = 0;
    if (0 < param_2) {
      do {
        local_b5 = (undefined1)iVar5;
        local_b7 = (undefined1)((uint)iVar5 >> 0x10);
        local_b8 = (undefined1)((uint)iVar5 >> 0x18);
        local_b6 = (undefined1)((uint)iVar5 >> 8);
        iVar2 = EVP_DigestInit_ex(lVar3,param_5,0);
        uVar8 = uVar7;
        if (((iVar2 == 0) ||
            (iVar2 = EVP_DigestUpdate(lVar3,local_b0,(longlong)local_b4), uVar8 = uVar6, iVar2 == 0)
            ) || (iVar2 = EVP_DigestUpdate(lVar3,&local_b8), iVar2 == 0)) goto LAB_14f77def1;
        if (param_2 < iVar1 + iVar4) {
          iVar2 = EVP_DigestFinal_ex(lVar3,local_98);
          if (iVar2 == 0) goto LAB_14f77def1;
          memcpy((void *)(iVar4 + param_1),local_98,(longlong)(param_2 - iVar4));
          iVar4 = param_2;
        }
        else {
          iVar2 = EVP_DigestFinal_ex(lVar3,iVar4 + param_1);
          iVar4 = iVar1 + iVar4;
          if (iVar2 == 0) goto LAB_14f77def1;
        }
        iVar5 = iVar5 + 1;
        param_5 = local_a8;
      } while (iVar4 < param_2);
    }
    uVar8 = 0;
  }
LAB_14f77def1:
  OPENSSL_cleanse(local_98,0x40);
  EVP_MD_CTX_free(lVar3);
  return uVar8;
}

// RSA_padding_add_PKCS1_OAEP @ 14f77df40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_padding_add_PKCS1_OAEP(void)

{
  RSA_padding_add_PKCS1_OAEP_mgf1();
  return;
}

// RSA_padding_add_PKCS1_OAEP_mgf1 @ 14f77df80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
RSA_padding_add_PKCS1_OAEP_mgf1
          (undefined1 *param_1,int param_2,void *param_3,uint param_4,undefined8 param_5,int param_6
          ,longlong param_7,longlong param_8)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong *puVar20;
  longlong lVar21;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8;
  int local_c4;
  int local_c0;
  longlong local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulonglong local_98 [8];
  ulonglong local_58;
  undefined8 uStack_48;
  undefined1 *puVar14;
  
  uStack_48 = 0x14f77df97;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  param_2 = param_2 + -1;
  puVar18 = (undefined1 *)0x0;
  uVar17 = 0;
  uVar15 = 0;
  local_b0 = param_5;
  local_c8 = param_4;
  local_c0 = param_2;
  local_a8 = param_3;
  if (param_7 == 0) {
    param_7 = EVP_sha1();
  }
  if (param_8 == 0) {
    param_8 = param_7;
  }
  local_b8 = param_8;
  uVar5 = EVP_MD_size(param_7);
  lVar21 = (longlong)(int)uVar5;
  local_c4 = param_2 + uVar5 * -2;
  if (local_c4 + -1 < (int)param_4) {
    local_d8 = CONCAT44(local_d8._4_4_,0x3e);
    ERR_put_error(4,0x9a,0x6e,"crypto\\rsa\\rsa_oaep.c");
    puVar19 = (undefined1 *)0x0;
  }
  else if (param_2 < (int)(uVar5 * 2 + 1)) {
    local_d8 = CONCAT44(local_d8._4_4_,0x44);
    ERR_put_error(4,0x9a,0x78,"crypto\\rsa\\rsa_oaep.c");
    puVar19 = (undefined1 *)0x0;
  }
  else {
    puVar3 = (ulonglong *)(param_1 + 1);
    *param_1 = 0;
    local_d0 = 0;
    puVar20 = (ulonglong *)(param_1 + lVar21 + 1);
    local_d8 = param_7;
    iVar6 = EVP_Digest(local_b0,(longlong)param_6,puVar20,0);
    puVar19 = puVar18;
    puVar8 = puVar18;
    if (iVar6 != 0) {
      memset((undefined1 *)(lVar21 + (longlong)puVar20),0,
             (longlong)(int)((local_c4 - local_c8) + -1));
      iVar6 = local_c0;
      *(undefined1 *)((longlong)(int)(((local_c0 - local_c8) - uVar5) + -1) + (longlong)puVar20) = 1
      ;
      memcpy((undefined1 *)
             ((((longlong)local_c0 - (longlong)(int)local_c8) - lVar21) + (longlong)puVar20),
             local_a8,(ulonglong)local_c8);
      iVar7 = RAND_bytes(puVar3,uVar5);
      puVar8 = (undefined1 *)0x0;
      if (0 < iVar7) {
        uVar15 = iVar6 - uVar5;
        lVar16 = (longlong)(int)uVar15;
        puVar8 = (undefined1 *)CRYPTO_malloc(lVar16,"crypto\\rsa\\rsa_oaep.c",0x55);
        if (puVar8 == (undefined1 *)0x0) {
          local_d8 = CONCAT44(local_d8._4_4_,0x57);
          ERR_put_error(4,0x9a,0x41,"crypto\\rsa\\rsa_oaep.c");
        }
        else {
          local_d8 = local_b8;
          iVar6 = PKCS1_MGF1(puVar8,uVar15,puVar3,uVar5);
          puVar19 = (undefined1 *)0x0;
          if (-1 < iVar6) {
            uVar13 = 0;
            if (((0 < (int)uVar15) && (0x1f < uVar15)) &&
               ((puVar8 + (int)(uVar15 - 1) < puVar20 ||
                ((undefined1 *)((longlong)(int)(uVar15 - 1) + (longlong)puVar20) < puVar8)))) {
              uVar10 = uVar15 & 0x8000001f;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
              }
              puVar11 = puVar20;
              puVar14 = puVar18;
              do {
                uVar13 = (int)puVar14 + 0x20;
                puVar14 = (undefined1 *)(ulonglong)uVar13;
                puVar1 = (ulonglong *)(((longlong)puVar8 - (longlong)puVar20) + (longlong)puVar11);
                uVar4 = puVar1[1];
                puVar2 = puVar11 + 4;
                *puVar11 = *puVar1 ^ *puVar11;
                puVar11[1] = uVar4 ^ puVar11[1];
                puVar1 = (ulonglong *)
                         (((longlong)puVar8 - (longlong)puVar20) + -0x10 + (longlong)puVar2);
                uVar4 = puVar1[1];
                puVar11[2] = *puVar1 ^ puVar11[2];
                puVar11[3] = uVar4 ^ puVar11[3];
                puVar11 = puVar2;
              } while ((longlong)puVar2 - (longlong)puVar20 < (longlong)(int)(uVar15 - uVar10));
            }
            lVar9 = (longlong)(int)uVar13;
            if (lVar9 < lVar16) {
              pbVar12 = (byte *)(lVar9 + (longlong)puVar20);
              lVar16 = lVar16 - lVar9;
              do {
                *pbVar12 = *pbVar12 ^ pbVar12[(longlong)puVar8 - (longlong)puVar20];
                pbVar12 = pbVar12 + 1;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            local_d8 = local_b8;
            iVar6 = PKCS1_MGF1(local_98,uVar5,puVar20,uVar15);
            if (-1 < iVar6) {
              if (((0 < (int)uVar5) && (0x1f < uVar5)) &&
                 (((ulonglong *)((longlong)local_98 + (longlong)(int)(uVar5 - 1)) < puVar3 ||
                  ((ulonglong *)((longlong)(int)(uVar5 - 1) + (longlong)puVar3) < local_98)))) {
                uVar13 = uVar5 & 0x8000001f;
                if ((int)uVar13 < 0) {
                  uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
                }
                puVar20 = puVar3;
                do {
                  uVar17 = (int)puVar18 + 0x20;
                  puVar18 = (undefined1 *)(ulonglong)uVar17;
                  puVar2 = (ulonglong *)
                           (((longlong)local_98 - (longlong)puVar3) + (longlong)puVar20);
                  uVar4 = puVar2[1];
                  puVar11 = puVar20 + 4;
                  *puVar20 = *puVar2 ^ *puVar20;
                  puVar20[1] = uVar4 ^ puVar20[1];
                  puVar2 = (ulonglong *)
                           (((longlong)&local_a8 - (longlong)puVar3) + (longlong)puVar11);
                  uVar4 = puVar2[1];
                  puVar20[2] = *puVar2 ^ puVar20[2];
                  puVar20[3] = uVar4 ^ puVar20[3];
                  puVar20 = puVar11;
                } while ((longlong)puVar11 - (longlong)puVar3 < (longlong)(int)(uVar5 - uVar13));
              }
              lVar16 = (longlong)(int)uVar17;
              if (lVar16 < lVar21) {
                pbVar12 = (byte *)(lVar16 + (longlong)puVar3);
                lVar21 = lVar21 - lVar16;
                do {
                  *pbVar12 = *pbVar12 ^ pbVar12[(longlong)local_98 - (longlong)puVar3];
                  pbVar12 = pbVar12 + 1;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
              puVar19 = &DAT_00000001;
            }
          }
        }
      }
    }
    OPENSSL_cleanse(local_98,0x40);
    CRYPTO_clear_free(puVar8,(longlong)(int)uVar15,"crypto\\rsa\\rsa_oaep.c",0x68);
  }
  return puVar19;
}

// RSA_padding_check_PKCS1_OAEP @ 14f77e380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_padding_check_PKCS1_OAEP(void)

{
  RSA_padding_check_PKCS1_OAEP_mgf1();
  return;
}

// RSA_padding_check_PKCS1_OAEP_mgf1 @ 14f77e3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint RSA_padding_check_PKCS1_OAEP_mgf1
               (byte *param_1,uint param_2,longlong param_3,int param_4,uint param_5,
               undefined8 param_6,int param_7,longlong param_8,longlong param_9)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  longlong lVar26;
  byte *pbVar27;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 local_120;
  uint local_118;
  uint local_114;
  uint local_10c;
  uint local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  byte *local_d8;
  undefined1 local_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 local_b8 [8];
  undefined1 auStack_b0 [40];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f77e3ea;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  uVar22 = 0;
  uVar11 = 0;
  local_108 = param_5;
  uVar17 = 0;
  local_e8 = param_6;
  uVar19 = (ulonglong)param_4;
  local_100 = param_8;
  local_10c = 0xffffffff;
  local_118 = 0;
  local_114 = param_2;
  local_d8 = param_1;
  if (param_8 == 0) {
    param_8 = EVP_sha1();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  local_100 = param_8;
  local_f8 = param_9;
  uVar5 = EVP_MD_size(param_8);
  lVar26 = (longlong)(int)uVar5;
  if (((int)local_114 < 1) || (param_4 < 1)) {
    return 0xffffffff;
  }
  if (((int)local_108 < param_4) || ((int)local_108 < (int)(uVar5 * 2 + 2))) {
    local_128 = CONCAT44(local_128._4_4_,0x98);
    ERR_put_error(4,0x99,0x79,"crypto\\rsa\\rsa_oaep.c");
    return 0xffffffff;
  }
  iVar20 = local_108 - uVar5;
  uVar21 = iVar20 - 1;
  local_f0 = (longlong)(int)uVar21;
  puVar7 = (ulonglong *)CRYPTO_malloc(local_f0,"crypto\\rsa\\rsa_oaep.c",0x9d);
  if (puVar7 == (ulonglong *)0x0) {
    local_128 = CONCAT44(local_128._4_4_,0x9f);
  }
  else {
    lVar8 = CRYPTO_malloc((longlong)(int)local_108,"crypto\\rsa\\rsa_oaep.c",0xa3);
    if (lVar8 != 0) {
      pbVar24 = (byte *)(param_3 + uVar19);
      pbVar27 = (byte *)(lVar8 + (int)local_108);
      if (0 < (int)local_108) {
        uVar18 = (ulonglong)local_108;
        do {
          uVar23 = (uint)uVar19;
          pbVar27 = pbVar27 + -1;
          uVar11 = 0xffffffff - ((int)(uVar23 - 1 & ~uVar23) >> 0x1f);
          uVar19 = (ulonglong)(uVar23 - (uVar11 & 1));
          pbVar24 = pbVar24 + -(ulonglong)(uVar11 & 1);
          *pbVar27 = (byte)uVar11 & *pbVar24;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      pbVar25 = pbVar27 + lVar26 + 1;
      pbVar24 = pbVar27 + 1;
      uVar23 = *pbVar27 - 1 & ~(uint)*pbVar27;
      uVar11 = (int)uVar23 >> 0x1f;
      local_128 = local_f8;
      local_e0 = lVar26;
      iVar6 = PKCS1_MGF1(local_c8,uVar5,pbVar25,uVar21);
      lVar8 = local_f0;
      if (iVar6 == 0) {
        if (((0 < (int)uVar5) && (0x1f < uVar5)) &&
           ((pbVar24 + (int)(uVar5 - 1) < local_c8 || (local_c8 + (int)(uVar5 - 1) < pbVar24)))) {
          uVar12 = uVar5 & 0x8000001f;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
          }
          uVar19 = uVar22;
          uVar18 = uVar22;
          do {
            uVar17 = (int)uVar18 + 0x20;
            uVar18 = (ulonglong)uVar17;
            puVar9 = (ulonglong *)(local_c8 + uVar19);
            uVar14 = uVar19 + 0x20;
            puVar16 = (ulonglong *)((longlong)puVar9 + ((longlong)pbVar24 - (longlong)local_c8));
            uVar4 = puVar16[1];
            *puVar9 = *puVar16 ^ *puVar9;
            *(ulonglong *)(auStack_c0 + uVar19) = uVar4 ^ *(ulonglong *)(auStack_c0 + uVar19);
            uVar4 = *(ulonglong *)
                     ((longlong)(local_b8 + ((longlong)pbVar24 - (longlong)local_c8) + uVar19) + 8);
            *(ulonglong *)(local_b8 + uVar19) =
                 *(ulonglong *)(local_b8 + ((longlong)pbVar24 - (longlong)local_c8) + uVar19) ^
                 *(ulonglong *)(local_b8 + uVar19);
            *(ulonglong *)(auStack_b0 + uVar19) = uVar4 ^ *(ulonglong *)(auStack_b0 + uVar19);
            uVar19 = uVar14;
          } while ((longlong)uVar14 < (longlong)(int)(uVar5 - uVar12));
        }
        lVar8 = (longlong)(int)uVar17;
        if (lVar8 < lVar26) {
          do {
            pbVar15 = local_c8 + lVar8;
            lVar8 = lVar8 + 1;
            *pbVar15 = *pbVar15 ^ pbVar15[(longlong)pbVar24 - (longlong)local_c8];
          } while (lVar8 < lVar26);
        }
        local_128 = local_f8;
        iVar6 = PKCS1_MGF1(puVar7,uVar21,local_c8,uVar5);
        lVar8 = local_f0;
        if (iVar6 == 0) {
          uVar17 = 0;
          uVar12 = uVar17;
          if (((0 < (int)uVar21) && (0x1f < uVar21)) &&
             ((lVar8 = (longlong)(iVar20 + -2), pbVar25 + lVar8 < puVar7 ||
              ((byte *)((longlong)puVar7 + lVar8) < pbVar25)))) {
            uVar13 = uVar21 & 0x8000001f;
            if ((int)uVar13 < 0) {
              uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
            }
            puVar16 = puVar7;
            uVar19 = uVar22;
            do {
              uVar12 = (int)uVar19 + 0x20;
              uVar19 = (ulonglong)uVar12;
              puVar1 = (ulonglong *)(((longlong)pbVar25 - (longlong)puVar7) + (longlong)puVar16);
              uVar18 = puVar1[1];
              puVar9 = puVar16 + 4;
              *puVar16 = *puVar1 ^ *puVar16;
              puVar16[1] = uVar18 ^ puVar16[1];
              puVar1 = (ulonglong *)
                       (((longlong)pbVar25 - (longlong)puVar7) + -0x10 + (longlong)puVar9);
              uVar18 = puVar1[1];
              puVar16[2] = *puVar1 ^ puVar16[2];
              puVar16[3] = uVar18 ^ puVar16[3];
              puVar16 = puVar9;
            } while ((longlong)puVar9 - (longlong)puVar7 < (longlong)(int)(uVar21 - uVar13));
          }
          lVar10 = (longlong)(int)uVar12;
          lVar8 = (longlong)(int)uVar21;
          if (lVar10 < lVar8) {
            pbVar24 = (byte *)(lVar10 + (longlong)puVar7);
            lVar10 = lVar8 - lVar10;
            do {
              *pbVar24 = *pbVar24 ^ pbVar24[(longlong)pbVar25 - (longlong)puVar7];
              pbVar24 = pbVar24 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          local_120 = 0;
          local_128 = local_100;
          iVar20 = EVP_Digest(local_e8,(longlong)param_7,local_88,0);
          if (iVar20 != 0) {
            uVar11 = CRYPTO_memcmp(puVar7,local_88,lVar26);
            uVar11 = (int)(uVar23 & uVar11 - 1 & ~uVar11) >> 0x1f;
            if (lVar26 < (int)uVar21) {
              pbVar24 = (byte *)(lVar26 + (longlong)puVar7);
              lVar8 = (int)uVar21 - lVar26;
              uVar19 = uVar22;
              uVar23 = uVar5;
              do {
                bVar2 = *pbVar24;
                pbVar24 = pbVar24 + 1;
                uVar17 = bVar2 ^ 1;
                uVar17 = (int)(uVar17 - 1 & ~uVar17) >> 0x1f;
                uVar12 = ~(uint)uVar22 & uVar17;
                uVar17 = (uint)uVar22 | uVar17;
                uVar22 = (ulonglong)uVar17;
                local_118 = uVar12 & uVar23;
                uVar23 = uVar23 + 1;
                local_118 = (uint)uVar19 & ~uVar12 | local_118;
                uVar19 = (ulonglong)local_118;
                uVar11 = uVar11 & ((int)(bVar2 - 1 & ~(uint)bVar2) >> 0x1f | uVar17);
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            local_10c = (uVar21 - local_118) - 1;
            iVar20 = uVar21 - uVar5;
            uVar23 = 1;
            uVar11 = uVar11 & 0xffffffffU -
                              ((int)((local_114 - local_10c ^ local_10c | local_114 ^ local_10c) ^
                                    local_114) >> 0x1f) & uVar17;
            uVar17 = iVar20 - 1;
            local_100 = CONCAT44(local_100._4_4_,uVar11);
            uVar5 = iVar20 - 1;
            uVar17 = (int)((uVar17 - local_114 ^ local_114 | local_114 ^ uVar17) ^ uVar17) >> 0x1f;
            local_118 = ~uVar17;
            uVar12 = local_118 & local_114 | uVar17 & uVar5;
            local_f8 = CONCAT44(local_f8._4_4_,uVar12);
            local_114 = uVar17;
            if (1 < (int)uVar5) {
              lVar8 = lVar26 + 1;
              do {
                uVar17 = (iVar20 - local_10c) - 1 & uVar23;
                uVar17 = 0xffffffff - ((int)(uVar17 - 1 & ~uVar17) >> 0x1f);
                if (lVar8 < (int)(uVar21 - uVar23)) {
                  local_114 = uVar17 & 0xff;
                  local_118 = ~local_114;
                  lVar26 = (int)(uVar21 - uVar23) - lVar8;
                  pbVar24 = (byte *)(lVar8 + (longlong)puVar7);
                  do {
                    *pbVar24 = (byte)local_118 & *pbVar24 | (byte)uVar17 & pbVar24[(int)uVar23];
                    lVar26 = lVar26 + -1;
                    pbVar24 = pbVar24 + 1;
                  } while (lVar26 != 0);
                }
                uVar23 = uVar23 * 2;
                lVar26 = local_e0;
              } while ((int)uVar23 < (int)uVar5);
            }
            uVar19 = 0;
            lVar8 = (longlong)(int)uVar12;
            if (0 < (int)uVar12) {
              pbVar24 = local_d8;
              do {
                iVar20 = (int)uVar19;
                bVar3 = (byte)(uVar19 >> 0x1f);
                bVar2 = (byte)(local_10c >> 0x18);
                uVar19 = (ulonglong)(iVar20 + 1);
                uVar17 = (uint)(byte)-(((byte)((byte)(iVar20 - local_10c >> 0x18) ^ bVar2) >> 7 |
                                       bVar3 ^ bVar2 >> 7) ^ bVar3) & uVar11 & 0xff;
                local_f8 = CONCAT44(local_f8._4_4_,uVar17);
                local_100 = CONCAT44(local_100._4_4_,~uVar17);
                *pbVar24 = (byte)~uVar17 & *pbVar24 |
                           (byte)uVar17 &
                           (pbVar24 + 1)
                           [(longlong)((lVar26 - (longlong)local_d8) + (longlong)puVar7)];
                lVar8 = lVar8 + -1;
                pbVar24 = pbVar24 + 1;
              } while (lVar8 != 0);
            }
            local_128 = CONCAT44(local_128._4_4_,0x107);
            ERR_put_error(4,0x99,0x79,"crypto\\rsa\\rsa_oaep.c");
            err_clear_last_constant_time(uVar11 & 1);
            lVar8 = local_f0;
          }
        }
      }
      goto LAB_14f77ea12;
    }
    local_128 = CONCAT44(local_128._4_4_,0xa6);
  }
  pbVar27 = (byte *)0x0;
  ERR_put_error(4,0x99,0x41,"crypto\\rsa\\rsa_oaep.c");
  lVar8 = local_f0;
LAB_14f77ea12:
  OPENSSL_cleanse(local_c8,0x40);
  CRYPTO_clear_free(puVar7,lVar8,"crypto\\rsa\\rsa_oaep.c",0x10b);
  CRYPTO_clear_free(pbVar27,(longlong)(int)local_108,"crypto\\rsa\\rsa_oaep.c",0x10c);
  return ~uVar11 | uVar11 & local_10c;
}

