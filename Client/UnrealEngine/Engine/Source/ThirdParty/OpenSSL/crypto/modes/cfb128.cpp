// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// CRYPTO_cfb128_1_encrypt @ 14f72d100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CRYPTO_cfb128_1_encrypt
               (longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,byte *param_5
               ,undefined8 param_6,int param_7,code *param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte abStack_df [47];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  code *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar7 = 0;
  local_78 = param_8;
  if (param_3 != 0) {
    lVar11 = (longlong)param_5 - ((longlong)&local_70 + 1);
    local_88 = param_1;
    local_80 = param_4;
    do {
      local_70 = *(undefined4 *)param_5;
      uStack_6c = *(undefined4 *)(param_5 + 4);
      uStack_68 = *(undefined4 *)(param_5 + 8);
      uStack_64 = *(undefined4 *)(param_5 + 0xc);
      bVar5 = (byte)uVar7;
      uVar12 = uVar7 >> 3;
      bVar4 = -(((byte)(1 << (7 - (bVar5 & 7) & 0x1f)) & *(byte *)(uVar12 + local_88)) != 0) & 0x80;
      uStack_b0 = 0x14f72d1ca;
      (*local_78)(param_5,param_5,local_80);
      if (param_7 == 0) {
        bVar3 = *param_5 ^ bVar4;
        local_60 = bVar4;
      }
      else {
        bVar3 = *param_5 ^ bVar4;
        local_60 = bVar3;
      }
      lVar9 = 0;
      do {
        pbVar8 = (byte *)((longlong)&local_70 + lVar9 + 1);
        lVar10 = lVar9 + 4;
        bVar4 = *pbVar8;
        pbVar8[lVar11] =
             (pbVar8 + lVar11)[(longlong)&local_70 - (longlong)param_5] * '\x02' | bVar4 >> 7;
        bVar1 = *(byte *)((longlong)&local_70 + lVar9 + 2);
        bVar2 = *(byte *)((longlong)&local_70 + lVar9 + 3);
        pbVar8[lVar11 + 1] = bVar1 >> 7 | bVar4 * '\x02';
        pbVar8[lVar11 + 2] = bVar2 >> 7 | bVar1 * '\x02';
        pbVar8[lVar11 + 3] = *(byte *)((longlong)&uStack_6c + lVar9) >> 7 | bVar2 * '\x02';
        lVar9 = lVar10;
      } while (lVar10 < 0x10);
      uVar6 = (uint)uVar7;
      uVar7 = uVar7 + 1;
      *(byte *)(uVar12 + param_2) =
           *(byte *)(uVar12 + param_2) & ~(byte)(1 << (7 - (uVar6 & 7) & 0x1f)) |
           (bVar3 & 0x80) >> (bVar5 & 7);
    } while (uVar7 < param_3);
  }
  return;
}

// CRYPTO_cfb128_8_encrypt @ 14f72d2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CRYPTO_cfb128_8_encrypt
               (byte *param_1,longlong param_2,longlong param_3,undefined8 param_4,byte *param_5,
               undefined8 param_6,int param_7,code *param_8)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  ulonglong local_30;
  
  if (param_3 != 0) {
    local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
    param_2 = param_2 - (longlong)param_1;
    do {
      local_58 = *(undefined4 *)param_5;
      uStack_54 = *(undefined4 *)(param_5 + 4);
      uStack_50 = *(undefined4 *)(param_5 + 8);
      uStack_4c = *(undefined4 *)(param_5 + 0xc);
      (*param_8)(param_5,param_5,param_4);
      if (param_7 == 0) {
        local_48 = *param_1;
        param_1[param_2] = *param_5 ^ local_48;
      }
      else {
        local_48 = *param_5 ^ *param_1;
        param_1[param_2] = local_48;
      }
      param_1 = param_1 + 1;
      *(ulonglong *)param_5 = CONCAT17((undefined1)uStack_50,CONCAT43(uStack_54,local_58._1_3_));
      *(ulonglong *)(param_5 + 8) = CONCAT17(local_48,CONCAT43(uStack_4c,uStack_50._1_3_));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CRYPTO_cfb128_encrypt @ 14f72d3c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_cfb128_encrypt
               (byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
               uint *param_6,int param_7,code *param_8)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar5 = *param_6;
  if (param_7 == 0) {
    for (; (uVar5 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      bVar3 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = *(byte *)((ulonglong)uVar5 + param_5) ^ bVar3;
      param_2 = param_2 + 1;
      *(byte *)((ulonglong)uVar5 + param_5) = bVar3;
      uVar5 = uVar5 + 1 & 0xf;
    }
    if (0xf < param_3) {
      uVar7 = param_3 >> 4;
      lVar6 = (longlong)param_2 - param_5;
      param_3 = param_3 + uVar7 * -0x10;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar5 < 0x10) {
          uVar4 = (ulonglong)((0xf - uVar5 >> 3) + 1);
          puVar2 = (ulonglong *)((ulonglong)uVar5 + param_5);
          do {
            uVar1 = *(ulonglong *)
                     (lVar6 + (longlong)puVar2 + ((longlong)param_1 - (longlong)param_2));
            *(ulonglong *)(lVar6 + (longlong)puVar2) = *puVar2 ^ uVar1;
            *puVar2 = uVar1;
            uVar4 = uVar4 - 1;
            puVar2 = puVar2 + 1;
          } while (uVar4 != 0);
        }
        param_2 = param_2 + 0x10;
        lVar6 = lVar6 + 0x10;
        param_1 = param_1 + 0x10;
        uVar5 = 0;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        uVar7 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        bVar3 = param_1[uVar7];
        param_2[uVar7] = *(byte *)(uVar7 + param_5) ^ bVar3;
        *(byte *)(uVar7 + param_5) = bVar3;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    for (; (uVar5 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      bVar3 = *param_1;
      param_1 = param_1 + 1;
      bVar3 = *(byte *)((ulonglong)uVar5 + param_5) ^ bVar3;
      *(byte *)((ulonglong)uVar5 + param_5) = bVar3;
      *param_2 = bVar3;
      param_2 = param_2 + 1;
      uVar5 = uVar5 + 1 & 0xf;
    }
    if (0xf < param_3) {
      uVar7 = param_3 >> 4;
      lVar8 = (longlong)param_2 - param_5;
      lVar6 = (longlong)param_1 - param_5;
      param_3 = param_3 + uVar7 * -0x10;
      param_2 = param_2 + uVar7 * 0x10;
      param_1 = param_1 + uVar7 * 0x10;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar5 < 0x10) {
          puVar2 = (ulonglong *)((ulonglong)uVar5 + param_5);
          uVar4 = (ulonglong)((0xf - uVar5 >> 3) + 1);
          do {
            *puVar2 = *puVar2 ^ *(ulonglong *)(lVar6 + (longlong)puVar2);
            *(ulonglong *)(lVar8 + (longlong)puVar2) = *puVar2;
            puVar2 = puVar2 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        lVar8 = lVar8 + 0x10;
        lVar6 = lVar6 + 0x10;
        uVar5 = 0;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        uVar7 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        bVar3 = param_1[uVar7] ^ *(byte *)(uVar7 + param_5);
        *(byte *)(uVar7 + param_5) = bVar3;
        param_2[uVar7] = bVar3;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  *param_6 = uVar5;
  return;
}

// FUN_14f72d650 @ 14f72d650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f72d650(ulonglong *param_1,ulonglong *param_2,int param_3,undefined8 param_4,
                  ulonglong *param_5,int param_6,code *param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  ulonglong *puVar17;
  byte *pbVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  byte *pbVar24;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48 [4];
  
  local_48[3] = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_3 - 1U < 0x80) {
    local_58 = *param_5;
    uStack_50 = param_5[1];
    (*param_7)(param_5,param_5,param_4);
    uVar9 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
    lVar20 = (longlong)(int)uVar9;
    if (param_6 == 0) {
      uVar21 = 0;
      uVar16 = 0;
      if ((0 < (int)uVar9) && (0x1f < uVar9)) {
        puVar17 = (ulonglong *)((longlong)&local_58 + (longlong)(int)(uVar9 + 0xf));
        lVar19 = (longlong)(int)(uVar9 - 1);
        if ((((((ulonglong *)((longlong)param_5 + lVar19) < local_48) || (puVar17 < param_5)) &&
             ((puVar12 = (ulonglong *)((longlong)param_2 + lVar19), puVar12 < local_48 ||
              (puVar17 < param_2)))) &&
            (((ulonglong *)((longlong)param_5 + lVar19) < param_2 || (puVar12 < param_5)))) &&
           (((ulonglong *)((longlong)param_1 + lVar19) < param_2 || (puVar12 < param_1)))) {
          uVar10 = uVar9 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          uVar22 = uVar21;
          do {
            uVar16 = (int)uVar21 + 0x20;
            uVar21 = (ulonglong)uVar16;
            puVar12 = (ulonglong *)((longlong)local_48 + uVar22);
            uVar23 = uVar22 + 0x20;
            puVar17 = (ulonglong *)((longlong)puVar12 + ((longlong)param_1 - (longlong)local_48));
            uVar5 = *puVar17;
            uVar6 = puVar17[1];
            puVar17 = (ulonglong *)((longlong)puVar12 + ((longlong)param_5 - (longlong)local_48));
            uVar7 = *puVar17;
            uVar8 = puVar17[1];
            *puVar12 = uVar5;
            *(ulonglong *)((longlong)local_48 + uVar22 + 8) = uVar6;
            puVar12 = (ulonglong *)((longlong)puVar12 + ((longlong)param_2 - (longlong)local_48));
            *puVar12 = uVar7 ^ uVar5;
            puVar12[1] = uVar8 ^ uVar6;
            puVar17 = (ulonglong *)
                      ((longlong)local_48 + ((longlong)param_1 - (longlong)local_48) + uVar22 + 0x10
                      );
            uVar5 = *puVar17;
            uVar6 = puVar17[1];
            puVar17 = (ulonglong *)
                      ((longlong)local_48 + ((longlong)param_5 - (longlong)local_48) + uVar22 + 0x10
                      );
            uVar7 = *puVar17;
            uVar8 = puVar17[1];
            *(ulonglong *)((longlong)local_48 + uVar22 + 0x10) = uVar5;
            *(ulonglong *)((longlong)local_48 + uVar22 + 0x18) = uVar6;
            puVar17 = (ulonglong *)
                      ((longlong)local_48 + ((longlong)param_2 - (longlong)local_48) + uVar22 + 0x10
                      );
            *puVar17 = uVar7 ^ uVar5;
            puVar17[1] = uVar8 ^ uVar6;
            uVar22 = uVar23;
          } while ((longlong)uVar23 < (longlong)(int)(uVar9 - uVar10));
        }
      }
      lVar19 = (longlong)(int)uVar16;
      if (lVar19 < lVar20) {
        do {
          pbVar24 = (byte *)((longlong)local_48 + lVar19);
          lVar19 = lVar19 + 1;
          bVar13 = pbVar24[(longlong)param_1 - (longlong)local_48];
          bVar14 = pbVar24[(longlong)param_5 - (longlong)local_48];
          *pbVar24 = bVar13;
          pbVar24[(longlong)param_2 - (longlong)local_48] = bVar14 ^ bVar13;
        } while (lVar19 < lVar20);
      }
    }
    else if (0 < (int)uVar9) {
      puVar17 = param_1;
      do {
        pbVar24 = (byte *)((longlong)puVar17 + ((longlong)param_5 - (longlong)param_1));
        uVar21 = *puVar17;
        puVar17 = (ulonglong *)((longlong)puVar17 + 1);
        bVar13 = *pbVar24 ^ (byte)uVar21;
        *(byte *)((longlong)puVar17 + (longlong)local_48 + (-1 - (longlong)param_1)) = bVar13;
        *(byte *)((longlong)puVar17 + (longlong)((longlong)param_2 + (-1 - (longlong)param_1))) =
             bVar13;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    uVar16 = param_3 >> 0x1f & 7;
    uVar9 = param_3 + uVar16;
    iVar11 = (uVar9 & 7) - uVar16;
    iVar15 = (int)uVar9 >> 3;
    if (iVar11 == 0) {
      uVar21 = *(ulonglong *)((longlong)&uStack_50 + (longlong)iVar15);
      *param_5 = *(ulonglong *)((longlong)&local_58 + (longlong)iVar15);
      param_5[1] = uVar21;
    }
    else {
      lVar20 = (longlong)iVar15;
      bVar13 = (byte)iVar11;
      bVar14 = 8 - bVar13;
      lVar19 = 4;
      pbVar18 = (byte *)((longlong)param_5 + (-((longlong)&local_58 + 1) - lVar20));
      pbVar24 = (byte *)((longlong)&local_58 + lVar20 + 1);
      do {
        bVar2 = *pbVar24;
        pbVar1 = pbVar24 + 4;
        pbVar24[(longlong)pbVar18] =
             (pbVar24 + (longlong)pbVar18)[(longlong)&local_58 + (lVar20 - (longlong)param_5)] <<
             (bVar13 & 0x1f) | bVar2 >> (bVar14 & 0x1f);
        bVar3 = pbVar24[1];
        bVar4 = pbVar24[2];
        pbVar1[(longlong)(pbVar18 + -3)] = bVar3 >> (bVar14 & 0x1f) | bVar2 << (bVar13 & 0x1f);
        pbVar1[(longlong)(pbVar18 + -2)] = bVar4 >> (bVar14 & 0x1f) | bVar3 << (bVar13 & 0x1f);
        pbVar1[(longlong)(pbVar18 + -1)] = pbVar24[3] >> (bVar14 & 0x1f) | bVar4 << (bVar13 & 0x1f);
        lVar19 = lVar19 + -1;
        pbVar24 = pbVar1;
      } while (lVar19 != 0);
    }
  }
  return;
}

