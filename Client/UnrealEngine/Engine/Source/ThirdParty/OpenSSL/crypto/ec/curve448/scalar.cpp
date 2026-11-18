// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// curve448_scalar_add @ 14f7c6e10

void curve448_scalar_add(uint *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  lVar4 = 0xe;
  lVar7 = 0xe;
  puVar3 = param_3;
  uVar9 = uVar6;
  do {
    uVar2 = *puVar3;
    puVar1 = (uint *)((param_2 - (longlong)param_3) + (longlong)puVar3);
    puVar3 = puVar3 + 1;
    uVar8 = uVar9 + uVar2 + (ulonglong)*puVar1;
    *(int *)((longlong)param_1 + (-4 - (longlong)param_3) + (longlong)puVar3) = (int)uVar8;
    uVar9 = uVar8 >> 0x20;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 0xe;
  uVar9 = uVar6;
  puVar3 = param_1;
  do {
    lVar5 = uVar9 + ((ulonglong)*puVar3 -
                    (ulonglong)
                    *(uint *)(((longlong)&DAT_1534eb098 - (longlong)param_1) + (longlong)puVar3));
    *puVar3 = (uint)lVar5;
    uVar9 = lVar5 >> 0x20;
    lVar7 = lVar7 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar7 != 0);
  puVar3 = param_1;
  do {
    lVar7 = uVar6 + *puVar3 +
            (ulonglong)
            (*(uint *)((longlong)puVar3 + ((longlong)&DAT_1534eb098 - (longlong)param_1)) &
            (int)((ulonglong)lVar5 >> 0x20) + (int)(uVar8 >> 0x20));
    *puVar3 = (uint)lVar7;
    uVar6 = lVar7 >> 0x20;
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar4 != 0);
  return;
}

// curve448_scalar_decode @ 14f7c6f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int curve448_scalar_decode(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar7 = 0;
  uVar2 = uVar7;
  uVar3 = uVar7;
  uVar9 = uVar7;
  uVar10 = uVar7;
LAB_14f7c6f46:
  do {
    uVar8 = (uint)uVar9;
    if (uVar2 < 0x38) {
      pbVar1 = (byte *)(uVar2 + param_2);
      uVar2 = uVar2 + 1;
      uVar4 = uVar3 + 8;
      uVar8 = uVar8 | (uint)*pbVar1 << ((byte)uVar3 & 0x1f);
      uVar3 = uVar4;
      uVar9 = (ulonglong)uVar8;
      if (uVar4 < 0x20) goto LAB_14f7c6f46;
    }
    *(uint *)(param_1 + uVar10 * 4) = uVar8;
    uVar10 = uVar10 + 1;
    uVar3 = uVar7;
    uVar9 = uVar7;
    if (0xd < uVar10) {
      lVar11 = 7;
      puVar5 = &DAT_1534eb098;
      do {
        lVar6 = (((longlong)
                  (uVar7 + ((ulonglong)*(uint *)(param_1 + -0x1534eb098 + (longlong)puVar5) -
                           (ulonglong)*puVar5)) >> 0x20) - (ulonglong)puVar5[1]) +
                (ulonglong)*(uint *)(param_1 + -0x1534eb09c + (longlong)(puVar5 + 2));
        uVar7 = lVar6 >> 0x20;
        lVar11 = lVar11 + -1;
        puVar5 = puVar5 + 2;
      } while (lVar11 != 0);
      FUN_14f7c74e0(param_1,param_1,&curve448_scalar_one);
      FUN_14f7c74e0(param_1,param_1,&DAT_1534eb0d0);
      uVar8 = (uint)((ulonglong)lVar6 >> 0x20);
      return -1 - ((int)(uVar8 - 1 & ~uVar8) >> 0x1f);
    }
  } while( true );
}

// curve448_scalar_decode_long @ 14f7c7000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void curve448_scalar_decode_long(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint local_50 [14];
  ulonglong local_18;
  undefined8 local_10;
  
  uVar2 = _UNK_1534eb1d0;
  local_10 = 0x14f7c7015;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    *param_1 = _curve448_scalar_zero;
    param_1[1] = uVar2;
    uVar2 = _UNK_1534eb1e0;
    param_1[2] = _DAT_1534eb1d8;
    param_1[3] = uVar2;
    uVar2 = _UNK_1534eb1f0;
    param_1[4] = _DAT_1534eb1e8;
    param_1[5] = uVar2;
    param_1[6] = DAT_1534eb1f8;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    lVar8 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    lVar3 = ((param_3 - lVar8 >> 1) + lVar8 >> 5) * 0x38;
    lVar8 = lVar3 + -0x38;
    if (lVar3 - param_3 != 0) {
      lVar8 = lVar3;
    }
    uVar9 = 0;
    uVar13 = 0;
    do {
      uVar10 = 0;
      uVar6 = 0;
      do {
        if (param_3 - lVar8 <= uVar9) break;
        lVar3 = lVar8 + uVar9;
        uVar9 = uVar9 + 1;
        bVar5 = (byte)uVar6;
        uVar6 = uVar6 + 8;
        uVar10 = uVar10 | (uint)*(byte *)(lVar3 + param_2) << (bVar5 & 0x1f);
      } while (uVar6 < 0x20);
      *(uint *)((longlong)&local_88 + uVar13 * 4) = uVar10;
      uVar13 = uVar13 + 1;
    } while (uVar13 < 0xe);
    if (param_3 == 0x38) {
      FUN_14f7c74e0(param_1,&local_88,&curve448_scalar_one);
      FUN_14f7c74e0(param_1,param_1,&DAT_1534eb0d0);
      puVar7 = (uint *)&local_88;
    }
    else {
      while (lVar8 != 0) {
        lVar8 = lVar8 + -0x38;
        FUN_14f7c74e0(&local_88,&local_88);
        curve448_scalar_decode(local_50);
        uVar9 = 0;
        lVar11 = 0xe;
        lVar3 = 0;
        do {
          uVar13 = uVar9 + *(uint *)((longlong)&local_88 + lVar3) +
                   (ulonglong)*(uint *)((longlong)local_50 + lVar3);
          *(int *)((longlong)&local_88 + lVar3) = (int)uVar13;
          uVar9 = uVar13 >> 0x20;
          lVar11 = lVar11 + -1;
          lVar3 = lVar3 + 4;
        } while (lVar11 != 0);
        lVar11 = 0;
        lVar12 = 0xe;
        lVar3 = 0;
        do {
          lVar4 = lVar11 + ((ulonglong)*(uint *)((longlong)&local_88 + lVar3) -
                           (ulonglong)*(uint *)((longlong)&DAT_1534eb098 + lVar3));
          *(int *)((longlong)&local_88 + lVar3) = (int)lVar4;
          lVar11 = lVar4 >> 0x20;
          lVar12 = lVar12 + -1;
          lVar3 = lVar3 + 4;
        } while (lVar12 != 0);
        lVar11 = 0;
        lVar12 = 0xe;
        lVar3 = 0;
        do {
          lVar11 = lVar11 + (ulonglong)*(uint *)((longlong)&local_88 + lVar3) +
                   (ulonglong)
                   (*(uint *)((longlong)&DAT_1534eb098 + lVar3) &
                   (int)((ulonglong)lVar4 >> 0x20) + (int)(uVar13 >> 0x20));
          *(int *)((longlong)&local_88 + lVar3) = (int)lVar11;
          lVar11 = lVar11 >> 0x20;
          lVar12 = lVar12 + -1;
          lVar3 = lVar3 + 4;
        } while (lVar12 != 0);
      }
      *param_1 = local_88;
      param_1[1] = uStack_80;
      param_1[2] = local_78;
      param_1[3] = uStack_70;
      *(undefined4 *)(param_1 + 4) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
      *(undefined4 *)(param_1 + 5) = uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
      param_1[6] = local_58;
      OPENSSL_cleanse(&local_88,0x38);
      puVar7 = local_50;
    }
    OPENSSL_cleanse(puVar7,0x38);
  }
  return;
}

// curve448_scalar_destroy @ 14f7c7270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void curve448_scalar_destroy(undefined8 param_1)

{
  OPENSSL_cleanse(param_1,0x38);
  return;
}

// curve448_scalar_encode @ 14f7c7290

void curve448_scalar_encode(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 2;
  lVar3 = 0xe;
  do {
    *(char *)((ulonglong)(uVar2 - 2) + param_1) = (char)*param_2;
    *(char *)((ulonglong)(uVar2 - 1) + param_1) = (char)((uint)*param_2 >> 8);
    *(char *)((ulonglong)uVar2 + param_1) = (char)((uint)*param_2 >> 0x10);
    uVar1 = uVar2 + 1;
    uVar2 = uVar2 + 4;
    *(char *)((ulonglong)uVar1 + param_1) = (char)((uint)*param_2 >> 0x18);
    lVar3 = lVar3 + -1;
    param_2 = param_2 + 1;
  } while (lVar3 != 0);
  return;
}

// curve448_scalar_halve @ 14f7c7310

void curve448_scalar_halve(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  uVar2 = 0;
  lVar5 = 0xe;
  puVar3 = param_2;
  do {
    uVar2 = uVar2 + *puVar3 +
            (ulonglong)
            (*(uint *)(((longlong)&DAT_1534eb098 - (longlong)param_2) + (longlong)puVar3) &
            -(uVar1 & 1));
    *(int *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)(puVar3 + 1)) = (int)uVar2;
    uVar2 = uVar2 >> 0x20;
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar5 != 0);
  puVar3 = param_1 + 9;
  lVar5 = 5;
  *param_1 = param_1[1] << 0x1f | *param_1 >> 1;
  param_1[1] = param_1[2] << 0x1f | param_1[1] >> 1;
  param_1[2] = param_1[3] << 0x1f | param_1[2] >> 1;
  param_1[3] = param_1[4] << 0x1f | param_1[3] >> 1;
  param_1[4] = param_1[5] << 0x1f | param_1[4] >> 1;
  param_1[5] = param_1[6] << 0x1f | param_1[5] >> 1;
  param_1[6] = param_1[7] << 0x1f | param_1[6] >> 1;
  param_1[7] = param_1[8] << 0x1f | param_1[7] >> 1;
  puVar4 = param_1 + 8;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar4 = uVar1 << 0x1f | *puVar4 >> 1;
    lVar5 = lVar5 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar5 != 0);
  param_1[0xd] = (uint)(uVar2 << 0x1f) | param_1[0xd] >> 1;
  return;
}

// curve448_scalar_mul @ 14f7c7400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void curve448_scalar_mul(undefined8 param_1)

{
  FUN_14f7c74e0();
  FUN_14f7c74e0(param_1,param_1,&DAT_1534eb0d0);
  return;
}

// curve448_scalar_sub @ 14f7c7440

void curve448_scalar_sub(uint *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = 0;
  lVar8 = 0xe;
  lVar5 = 0xe;
  lVar4 = lVar7;
  puVar6 = param_3;
  do {
    puVar1 = (uint *)((param_2 - (longlong)param_3) + (longlong)puVar6);
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    uVar3 = lVar4 + ((ulonglong)*puVar1 - (ulonglong)uVar2);
    *(int *)((longlong)param_1 + (-4 - (longlong)param_3) + (longlong)puVar6) = (int)uVar3;
    lVar4 = (longlong)uVar3 >> 0x20;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar6 = param_1;
  do {
    lVar7 = lVar7 + (ulonglong)*puVar6 +
            ((ulonglong)*(uint *)(((longlong)&DAT_1534eb098 - (longlong)param_1) + (longlong)puVar6)
            & uVar3 >> 0x20);
    *puVar6 = (uint)lVar7;
    lVar7 = lVar7 >> 0x20;
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar8 != 0);
  return;
}

// FUN_14f7c74e0 @ 14f7c74e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7c74e0(uint *param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint local_78 [16];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14f7c74fc;
  local_38 = __security_cookie.value ^ (ulonglong)local_78;
  uVar11 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  lVar6 = 0xe;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  lVar12 = 0xe;
  local_78[0xe] = 0;
  uVar13 = uVar11;
  do {
    uVar5 = *param_2;
    lVar9 = 0xe;
    puVar4 = local_78;
    uVar8 = uVar11;
    do {
      uVar7 = uVar8 + *puVar4 +
              (ulonglong)*(uint *)((longlong)puVar4 + (param_3 - (longlong)local_78)) *
              (ulonglong)uVar5;
      *puVar4 = (uint)uVar7;
      uVar8 = uVar7 >> 0x20;
      lVar9 = lVar9 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar9 != 0);
    uVar5 = local_78[0] * -0x516e743b;
    local_78[0xe] = (int)(uVar7 >> 0x20);
    uVar8 = uVar11;
    uVar7 = uVar11;
    uVar10 = uVar11;
    do {
      uVar3 = uVar8;
      uVar7 = uVar7 + *(uint *)((longlong)local_78 + uVar10) +
              (ulonglong)*(uint *)((longlong)&DAT_1534eb098 + uVar10) * (ulonglong)uVar5;
      iVar1 = (int)uVar3;
      if (iVar1 != 0) {
        local_78[iVar1 - 1] = (uint)uVar7;
      }
      uVar7 = uVar7 >> 0x20;
      uVar2 = iVar1 + 1;
      uVar10 = uVar10 + 4;
      uVar8 = (ulonglong)uVar2;
    } while (uVar2 < 0xe);
    param_2 = param_2 + 1;
    uVar8 = uVar13 + uVar7 + (ulonglong)local_78[uVar2];
    local_78[uVar3] = (uint)uVar8;
    uVar13 = uVar8 >> 0x20;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  lVar12 = 0xe;
  uVar13 = uVar11;
  uVar7 = uVar11;
  do {
    lVar9 = uVar13 + ((ulonglong)*(uint *)((longlong)local_78 + uVar7) -
                     (ulonglong)*(uint *)((longlong)&DAT_1534eb098 + uVar7));
    *(int *)(uVar7 + (longlong)param_1) = (int)lVar9;
    uVar13 = lVar9 >> 0x20;
    lVar12 = lVar12 + -1;
    uVar7 = uVar7 + 4;
  } while (lVar12 != 0);
  puVar4 = param_1;
  do {
    lVar12 = uVar11 + *puVar4 +
             (ulonglong)
             (*(uint *)(((longlong)&DAT_1534eb098 - (longlong)param_1) + (longlong)puVar4) &
             (int)((ulonglong)lVar9 >> 0x20) + (int)(uVar8 >> 0x20));
    *puVar4 = (uint)lVar12;
    uVar11 = lVar12 >> 0x20;
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  return;
}

// FUN_14f7c76a0 @ 14f7c76a0

void FUN_14f7c76a0(uint *param_1,longlong param_2,uint *param_3,longlong param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = 0;
  lVar4 = 0xe;
  lVar5 = 0xe;
  puVar3 = param_3;
  lVar8 = lVar6;
  do {
    puVar1 = (uint *)((param_2 - (longlong)param_3) + (longlong)puVar3);
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    lVar7 = lVar8 + ((ulonglong)*puVar1 - (ulonglong)uVar2);
    *(int *)((longlong)param_1 + (-4 - (longlong)param_3) + (longlong)puVar3) = (int)lVar7;
    lVar8 = lVar7 >> 0x20;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar3 = param_1;
  do {
    lVar6 = lVar6 + (ulonglong)*puVar3 +
            (ulonglong)
            (*(uint *)((param_4 - (longlong)param_1) + (longlong)puVar3) &
            param_5 + (int)((ulonglong)lVar7 >> 0x20));
    *puVar3 = (uint)lVar6;
    lVar6 = lVar6 >> 0x20;
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 1;
  } while (lVar4 != 0);
  return;
}

// FUN_14f7c7740 @ 14f7c7740

void FUN_14f7c7740(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = 0;
  uVar6 = 0;
  do {
    uVar5 = 0;
    uVar4 = 0;
    do {
      if (param_3 <= uVar2) break;
      pbVar1 = (byte *)(uVar2 + param_2);
      uVar2 = uVar2 + 1;
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 | (uint)*pbVar1 << (bVar3 & 0x1f);
    } while (uVar4 < 0x20);
    *(uint *)(param_1 + uVar6 * 4) = uVar5;
    uVar6 = uVar6 + 1;
    if (0xd < uVar6) {
      return;
    }
  } while( true );
}

