// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// CRYPTO_ccm128_aad @ 14f72eec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ccm128_aad(byte *param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar4;
  
  if (param_3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    *param_1 = *param_1 | 0x40;
    (*pcVar1)(param_1,param_1 + 0x10,*(undefined8 *)(param_1 + 0x30));
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
    bVar8 = (byte)param_3;
    bVar2 = (byte)(param_3 >> 8);
    if (param_3 < 0xff00) {
      uVar7 = 2;
      param_1[0x10] = param_1[0x10] ^ bVar2;
      param_1[0x11] = param_1[0x11] ^ bVar8;
    }
    else {
      param_1[0x10] = ~param_1[0x10];
      bVar3 = (byte)(param_3 >> 0x10);
      bVar4 = (byte)(param_3 >> 0x18);
      if (param_3 < 0x100000000) {
        param_1[0x11] = param_1[0x11] ^ 0xfe;
        uVar7 = 6;
        param_1[0x12] = param_1[0x12] ^ bVar4;
        param_1[0x13] = param_1[0x13] ^ bVar3;
        param_1[0x14] = param_1[0x14] ^ bVar2;
        param_1[0x15] = param_1[0x15] ^ bVar8;
      }
      else {
        param_1[0x11] = ~param_1[0x11];
        uVar7 = 10;
        param_1[0x12] = param_1[0x12] ^ (byte)(param_3 >> 0x38);
        param_1[0x13] = param_1[0x13] ^ (byte)(param_3 >> 0x30);
        param_1[0x14] = param_1[0x14] ^ (byte)(param_3 >> 0x28);
        param_1[0x15] = param_1[0x15] ^ (byte)(param_3 >> 0x20);
        param_1[0x16] = param_1[0x16] ^ bVar4;
        param_1[0x17] = param_1[0x17] ^ bVar3;
        param_1[0x18] = param_1[0x18] ^ bVar2;
        param_1[0x19] = param_1[0x19] ^ bVar8;
      }
    }
    do {
      pbVar5 = param_1 + uVar7 + 0x10;
      do {
        if (param_3 == 0) break;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        *pbVar5 = *pbVar5 ^ *param_2;
        param_2 = param_2 + 1;
        pbVar5 = pbVar5 + 1;
        param_3 = param_3 - 1;
      } while (uVar6 < 0x10);
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,*(undefined8 *)(param_1 + 0x30));
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
      uVar7 = 0;
    } while (param_3 != 0);
  }
  return;
}

// CRYPTO_ccm128_decrypt @ 14f72f030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ccm128_decrypt(byte *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  byte local_58;
  uint local_54;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar4 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_58 = bVar4;
  if ((bVar4 & 0x40) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar3);
  }
  uVar5 = 0;
  *param_1 = (byte)(bVar4 & 7);
  local_54 = 0xf - (bVar4 & 7);
  if (local_54 < 0xf) {
    pbVar6 = param_1 + local_54;
    uVar7 = (ulonglong)(0xf - local_54);
    do {
      bVar4 = *pbVar6;
      *pbVar6 = 0;
      pbVar6 = pbVar6 + 1;
      uVar5 = (uVar5 | bVar4) << 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar4 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar5 | bVar4) == param_4) {
    if (0xf < param_4) {
      uVar5 = param_4 >> 4;
      param_4 = param_4 + uVar5 * -0x10;
      do {
        (*pcVar1)(param_1,&local_50,uVar3);
        uVar7 = 8;
        do {
          uVar2 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar2;
          pbVar6 = param_1 + uVar7 + 8;
          *pbVar6 = *pbVar6 + 1;
          if (*pbVar6 != 0) break;
        } while (uVar2 != 0);
        uVar7 = *param_2;
        *param_3 = uVar7 ^ local_50;
        *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ uVar7 ^ local_50;
        uVar7 = param_2[1];
        param_3[1] = uVar7 ^ local_48;
        *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ uVar7 ^ local_48;
        (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar3);
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    uVar5 = 0;
    if (param_4 != 0) {
      (*pcVar1)(param_1,&local_50,uVar3);
      if (param_4 != 0) {
        do {
          uVar7 = (ulonglong)((int)uVar5 + 1);
          bVar4 = *(byte *)(uVar5 + (longlong)param_2) ^ *(byte *)((longlong)&local_50 + uVar5);
          *(byte *)(uVar5 + (longlong)param_3) = bVar4;
          param_1[uVar5 + 0x10] = param_1[uVar5 + 0x10] ^ bVar4;
          uVar5 = uVar7;
        } while (uVar7 < param_4);
      }
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar3);
    }
    if (local_54 < 0x10) {
      pbVar6 = param_1 + local_54;
      for (uVar5 = (ulonglong)(0x10 - local_54); uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar6 = 0;
        pbVar6 = pbVar6 + 1;
      }
    }
    (*pcVar1)(param_1,&local_50,uVar3);
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_50;
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_48;
    *param_1 = local_58;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

// CRYPTO_ccm128_decrypt_ccm64 @ 14f72f220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ccm128_decrypt_ccm64
          (byte *param_1,longlong param_2,longlong param_3,ulonglong param_4,code *param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  byte local_78;
  longlong local_70;
  code *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f72f237;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar4 = *param_1;
  local_68 = *(code **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_78 = bVar4;
  local_70 = param_3;
  if ((bVar4 & 0x40) == 0) {
    (*local_68)(param_1,param_1 + 0x10,uVar2);
  }
  uVar7 = 0;
  *param_1 = (byte)(bVar4 & 7);
  uVar10 = 0xf - (bVar4 & 7);
  uVar5 = uVar7;
  if (uVar10 < 0xf) {
    pbVar6 = param_1 + uVar10;
    uVar8 = (ulonglong)(0xf - uVar10);
    do {
      bVar4 = *pbVar6;
      *pbVar6 = 0;
      pbVar6 = pbVar6 + 1;
      uVar5 = (uVar5 | bVar4) << 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  bVar4 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar5 | bVar4) != param_4) {
    return 0xffffffff;
  }
  uVar5 = param_4 >> 4;
  lVar9 = local_70;
  if (uVar5 != 0) {
    local_80 = param_1 + 0x10;
    local_88 = param_1;
    (*param_5)(param_2,local_70,uVar5,uVar2);
    param_2 = param_2 + uVar5 * 0x10;
    lVar9 = local_70 + uVar5 * 0x10;
    param_4 = param_4 + uVar5 * -0x10;
    if (param_4 == 0) goto LAB_14f72f3c9;
    pbVar6 = param_1 + 0x10;
    uVar8 = uVar7;
    do {
      pbVar1 = pbVar6 + -1;
      pbVar6 = pbVar6 + -1;
      uVar8 = uVar8 + *pbVar1 + (uVar5 & 0xff);
      uVar5 = uVar5 >> 8;
      *pbVar6 = (byte)uVar8;
      uVar8 = uVar8 >> 8;
      if (pbVar6 == param_1 + 8) break;
    } while ((uVar5 != 0) || (uVar8 != 0));
  }
  pcVar3 = local_68;
  if (param_4 != 0) {
    (*local_68)(param_1,&local_60,uVar2);
    if (param_4 != 0) {
      do {
        uVar5 = (ulonglong)((int)uVar7 + 1);
        bVar4 = *(byte *)(uVar7 + param_2) ^ *(byte *)((longlong)&local_60 + uVar7);
        *(byte *)(uVar7 + lVar9) = bVar4;
        param_1[uVar7 + 0x10] = param_1[uVar7 + 0x10] ^ bVar4;
        uVar7 = uVar5;
      } while (uVar5 < param_4);
    }
    (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar2);
  }
LAB_14f72f3c9:
  if (uVar10 < 0x10) {
    pbVar6 = param_1 + uVar10;
    for (uVar5 = (ulonglong)(0x10 - uVar10); uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar6 = 0;
      pbVar6 = pbVar6 + 1;
    }
  }
  (*local_68)(param_1,&local_60,uVar2);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_60;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_58;
  *param_1 = local_78;
  return 0;
}

// CRYPTO_ccm128_encrypt @ 14f72f430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ccm128_encrypt(byte *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  code *pcVar15;
  undefined1 auStack_88 [32];
  byte local_68;
  uint local_64;
  code *local_60;
  ulonglong local_50 [3];
  
  local_50[2] = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = *param_1;
  uVar7 = (uint)local_68;
  pcVar15 = *(code **)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  local_60 = pcVar15;
  if ((local_68 & 0x40) == 0) {
    (*pcVar15)(param_1,param_1 + 0x10,uVar9);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  pcVar6 = local_60;
  uVar11 = 0;
  *param_1 = (byte)(uVar7 & 7);
  local_64 = 0xf - (uVar7 & 7);
  if (local_64 < 0xf) {
    pbVar12 = param_1 + local_64;
    uVar14 = (ulonglong)(0xf - local_64);
    do {
      bVar2 = *pbVar12;
      *pbVar12 = 0;
      pbVar12 = pbVar12 + 1;
      uVar11 = (uVar11 | bVar2) << 8;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar11 | bVar2) == param_4) {
    *(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + ((param_4 + 0xf | 8) >> 3);
    if (*(ulonglong *)(param_1 + 0x20) < 0x2000000000000001) {
      if (0xf < param_4) {
        uVar11 = param_4 >> 4;
        param_4 = param_4 + uVar11 * -0x10;
        do {
          *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
          *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ param_2[1];
          (*pcVar6)(param_1 + 0x10,param_1 + 0x10,uVar9);
          (*pcVar6)(param_1,local_50,uVar9);
          uVar14 = 8;
          do {
            uVar7 = (int)uVar14 - 1;
            uVar14 = (ulonglong)uVar7;
            pbVar12 = param_1 + uVar14 + 8;
            *pbVar12 = *pbVar12 + 1;
            if (*pbVar12 != 0) break;
          } while (uVar7 != 0);
          *param_3 = *param_2 ^ local_50[0];
          puVar1 = param_2 + 1;
          param_2 = param_2 + 2;
          param_3[1] = *puVar1 ^ local_50[1];
          param_3 = param_3 + 2;
          uVar11 = uVar11 - 1;
          pcVar15 = local_60;
        } while (uVar11 != 0);
      }
      uVar7 = local_64;
      uVar14 = 0;
      uVar11 = uVar14;
      if (param_4 != 0) {
        do {
          uVar13 = (ulonglong)((int)uVar11 + 1);
          param_1[uVar11 + 0x10] = param_1[uVar11 + 0x10] ^ *(byte *)(uVar11 + (longlong)param_2);
          uVar11 = uVar13;
        } while (uVar13 < param_4);
        (*pcVar15)(param_1 + 0x10,param_1 + 0x10,uVar9);
        (*pcVar15)(param_1,local_50,uVar9);
        uVar11 = uVar14;
        if (0x1f < param_4) {
          uVar8 = (int)param_4 - 1;
          uVar11 = 0;
          if ((((ulonglong *)((longlong)local_50 + (ulonglong)uVar8) < param_3) ||
              ((ulonglong *)((ulonglong)uVar8 + (longlong)param_3) < local_50)) &&
             (((ulonglong *)((ulonglong)uVar8 + (longlong)param_2) < param_3 ||
              ((ulonglong *)((ulonglong)uVar8 + (longlong)param_3) < param_2)))) {
            do {
              uVar13 = ((ulonglong *)(uVar14 + (longlong)param_2))[1];
              uVar10 = (ulonglong)((int)uVar14 + 0x10);
              uVar8 = (int)uVar14 + 0x20;
              uVar11 = (ulonglong)uVar8;
              uVar3 = *(ulonglong *)((longlong)local_50 + uVar14 + 8);
              uVar4 = *(ulonglong *)((longlong)local_50 + uVar10);
              uVar5 = *(ulonglong *)((longlong)local_50 + uVar10 + 8);
              *(ulonglong *)(uVar14 + (longlong)param_3) =
                   *(ulonglong *)(uVar14 + (longlong)param_2) ^
                   *(ulonglong *)((longlong)local_50 + uVar14);
              ((ulonglong *)(uVar14 + (longlong)param_3))[1] = uVar13 ^ uVar3;
              uVar14 = (ulonglong)uVar8;
              uVar13 = ((ulonglong *)(uVar10 + (longlong)param_2))[1];
              *(ulonglong *)(uVar10 + (longlong)param_3) =
                   *(ulonglong *)(uVar10 + (longlong)param_2) ^ uVar4;
              ((ulonglong *)(uVar10 + (longlong)param_3))[1] = uVar13 ^ uVar5;
            } while (uVar14 < (param_4 & 0xffffffffffffffe0));
          }
        }
        for (; uVar11 < param_4; uVar11 = (ulonglong)((int)uVar11 + 1)) {
          *(byte *)(uVar11 + (longlong)param_3) =
               *(byte *)(uVar11 + (longlong)param_2) ^ *(byte *)((longlong)local_50 + uVar11);
        }
      }
      if (uVar7 < 0x10) {
        pbVar12 = param_1 + uVar7;
        for (uVar11 = (ulonglong)(0x10 - uVar7); uVar11 != 0; uVar11 = uVar11 - 1) {
          *pbVar12 = 0;
          pbVar12 = pbVar12 + 1;
        }
      }
      (*pcVar15)(param_1,local_50,uVar9);
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_50[0];
      *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_50[1];
      *param_1 = local_68;
      uVar9 = 0;
    }
    else {
      uVar9 = 0xfffffffe;
    }
  }
  else {
    uVar9 = 0xffffffff;
  }
  return uVar9;
}

// CRYPTO_ccm128_encrypt_ccm64 @ 14f72f6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
CRYPTO_ccm128_encrypt_ccm64
          (byte *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4,code *param_5)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  byte local_78;
  undefined8 local_70;
  code *local_68;
  ulonglong local_60 [4];
  
  local_60[3] = 0x14f72f707;
  local_60[2] = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = *param_1;
  local_70 = *(undefined8 *)(param_1 + 0x30);
  local_68 = *(code **)(param_1 + 0x28);
  local_78 = bVar2;
  if ((bVar2 & 0x40) == 0) {
    (*local_68)(param_1,param_1 + 0x10);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  uVar14 = 0;
  *param_1 = (byte)(bVar2 & 7);
  uVar12 = 0xf - (bVar2 & 7);
  uVar9 = uVar14;
  if (uVar12 < 0xf) {
    pbVar10 = param_1 + uVar12;
    uVar11 = (ulonglong)(0xf - uVar12);
    do {
      bVar2 = *pbVar10;
      *pbVar10 = 0;
      pbVar10 = pbVar10 + 1;
      uVar9 = (uVar9 | bVar2) << 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar9 | bVar2) != param_4) {
    return 0xffffffff;
  }
  *(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + ((param_4 + 0xf | 8) >> 3);
  if (0x2000000000000000 < *(ulonglong *)(param_1 + 0x20)) {
    return 0xfffffffe;
  }
  uVar9 = param_4 >> 4;
  if (uVar9 != 0) {
    local_80 = param_1 + 0x10;
    local_88 = param_1;
    (*param_5)(param_2,param_3,uVar9,local_70);
    param_2 = param_2 + uVar9 * 2;
    param_3 = param_3 + uVar9 * 0x10;
    param_4 = param_4 + uVar9 * -0x10;
    uVar13 = local_70;
    if (param_4 == 0) goto LAB_14f72f95c;
    pbVar10 = param_1 + 0x10;
    uVar11 = uVar14;
    do {
      pbVar1 = pbVar10 + -1;
      pbVar10 = pbVar10 + -1;
      uVar11 = uVar11 + *pbVar1 + (uVar9 & 0xff);
      uVar9 = uVar9 >> 8;
      *pbVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 8;
      if (pbVar10 == param_1 + 8) break;
    } while ((uVar9 != 0) || (uVar11 != 0));
  }
  pcVar6 = local_68;
  uVar13 = local_70;
  uVar9 = uVar14;
  if (param_4 != 0) {
    do {
      uVar11 = (ulonglong)((int)uVar9 + 1);
      param_1[uVar9 + 0x10] = param_1[uVar9 + 0x10] ^ *(byte *)(uVar9 + (longlong)param_2);
      uVar9 = uVar11;
    } while (uVar11 < param_4);
    (*local_68)(param_1 + 0x10,param_1 + 0x10,local_70);
    (*pcVar6)(param_1,local_60,uVar13);
    uVar9 = uVar14;
    if (0x1f < param_4) {
      uVar7 = (int)param_4 - 1;
      uVar9 = 0;
      if ((((longlong)local_60 + (ulonglong)uVar7 < param_3) ||
          ((ulonglong *)(uVar7 + param_3) < local_60)) &&
         (((ulonglong)uVar7 + (longlong)param_2 < param_3 ||
          ((ulonglong *)(uVar7 + param_3) < param_2)))) {
        do {
          uVar11 = ((ulonglong *)(uVar14 + (longlong)param_2))[1];
          uVar8 = (ulonglong)((int)uVar14 + 0x10);
          uVar7 = (int)uVar14 + 0x20;
          uVar9 = (ulonglong)uVar7;
          uVar3 = *(ulonglong *)((longlong)local_60 + uVar14 + 8);
          uVar4 = *(ulonglong *)((longlong)local_60 + uVar8);
          uVar5 = *(ulonglong *)((longlong)local_60 + uVar8 + 8);
          *(ulonglong *)(uVar14 + param_3) =
               *(ulonglong *)(uVar14 + (longlong)param_2) ^
               *(ulonglong *)((longlong)local_60 + uVar14);
          ((ulonglong *)(uVar14 + param_3))[1] = uVar11 ^ uVar3;
          uVar14 = (ulonglong)uVar7;
          uVar11 = ((ulonglong *)(uVar8 + (longlong)param_2))[1];
          *(ulonglong *)(uVar8 + param_3) = *(ulonglong *)(uVar8 + (longlong)param_2) ^ uVar4;
          ((ulonglong *)(uVar8 + param_3))[1] = uVar11 ^ uVar5;
        } while (uVar14 < (param_4 & 0xffffffffffffffe0));
      }
    }
    for (; uVar9 < param_4; uVar9 = (ulonglong)((int)uVar9 + 1)) {
      *(byte *)(uVar9 + param_3) =
           *(byte *)(uVar9 + (longlong)param_2) ^ *(byte *)((longlong)local_60 + uVar9);
    }
  }
LAB_14f72f95c:
  if (uVar12 < 0x10) {
    pbVar10 = param_1 + uVar12;
    for (uVar9 = (ulonglong)(0x10 - uVar12); uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar10 = 0;
      pbVar10 = pbVar10 + 1;
    }
  }
  (*local_68)(param_1,local_60,uVar13);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_60[0];
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_60[1];
  *param_1 = local_78;
  return 0;
}

// CRYPTO_ccm128_init @ 14f72f9d0

void CRYPTO_ccm128_init(byte *param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5
                       )

{
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *param_1 = ((byte)(param_2 - 2U >> 1) & 7) << 3 | param_3 - 1U & 7;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return;
}

// CRYPTO_ccm128_setiv @ 14f72fa10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_ccm128_setiv(byte *param_1,void *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong _Size;
  uint uVar1;
  
  uVar1 = *param_1 & 7;
  _Size = (ulonglong)(0xe - uVar1);
  if (param_3 < _Size) {
    return 0xffffffff;
  }
  if (uVar1 < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    param_1[8] = (byte)((ulonglong)param_4 >> 0x38);
    param_1[9] = (byte)((ulonglong)param_4 >> 0x30);
    param_1[10] = (byte)((ulonglong)param_4 >> 0x28);
    param_1[0xb] = (byte)((ulonglong)param_4 >> 0x20);
  }
  param_1[0xf] = (byte)param_4;
  *param_1 = *param_1 & 0xbf;
  param_1[0xc] = (byte)((ulonglong)param_4 >> 0x18);
  param_1[0xd] = (byte)((ulonglong)param_4 >> 0x10);
  param_1[0xe] = (byte)((ulonglong)param_4 >> 8);
  memcpy(param_1 + 1,param_2,_Size);
  return 0;
}

// CRYPTO_ccm128_tag @ 14f72fac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CRYPTO_ccm128_tag(byte *param_1,void *param_2,ulonglong param_3)

{
  ulonglong _Size;
  
  _Size = (ulonglong)((*param_1 >> 3 & 7) * 2 + 2);
  if (param_3 != _Size) {
    return 0;
  }
  memcpy(param_2,param_1 + 0x10,_Size);
  return _Size;
}

