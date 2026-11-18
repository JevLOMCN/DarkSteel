// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// WHIRLPOOL @ 14f7b82a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * WHIRLPOOL(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [176];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7b82ae;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  puVar1 = &DAT_1553e3030;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  memset(local_d8,0,0xa8);
  WHIRLPOOL_Update(local_d8,param_1,param_2);
  WHIRLPOOL_Final(puVar1,local_d8);
  return puVar1;
}

// WHIRLPOOL_BitUpdate @ 14f7b8330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void WHIRLPOOL_BitUpdate(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  sbyte sVar3;
  sbyte sVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = *(uint *)(param_1 + 0x80);
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + param_3;
  uVar9 = -(int)param_3 & 7;
  uVar11 = uVar6 & 7;
  if (*(ulonglong *)(param_1 + 0x88) < param_3) {
    uVar5 = 1;
    plVar2 = (longlong *)(param_1 + 0x90);
    do {
      *plVar2 = *plVar2 + 1;
      if (*plVar2 != 0) break;
      uVar5 = uVar5 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar5 < 4);
  }
  do {
    if ((uVar9 == 0) && (uVar11 == 0)) {
      while (param_3 != 0) {
        if ((uVar6 == 0) && (uVar5 = param_3 >> 9, uVar5 != 0)) {
          whirlpool_block(param_1,param_2,uVar5);
          param_2 = param_2 + uVar5 * 0x40;
          param_3 = (ulonglong)((uint)param_3 & 0x1ff);
          uVar6 = 0;
        }
        else {
          uVar9 = 0x200 - uVar6;
          if (param_3 < uVar9) {
            memcpy((void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3)),param_2,param_3 >> 3);
            uVar6 = uVar6 + (uint)param_3;
            param_3 = 0;
          }
          else {
            param_3 = param_3 - uVar9;
            memcpy((void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3)),param_2,
                   (ulonglong)(uVar9 >> 3));
            param_2 = param_2 + (uVar9 >> 3);
            whirlpool_block(param_1,param_1 + 0x40,1);
            uVar6 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar6;
        }
      }
      return;
    }
    uVar10 = 8 - uVar9;
    while( true ) {
      if (param_3 == 0) {
        return;
      }
      uVar8 = uVar6 >> 3;
      uVar5 = (ulonglong)uVar8;
      sVar3 = (sbyte)uVar9;
      if (uVar11 == uVar9) break;
      sVar4 = (sbyte)uVar11;
      if (param_3 < 9) {
        bVar7 = *param_2 << sVar3;
        if (uVar11 == 0) {
          *(byte *)(uVar5 + 0x40 + param_1) = bVar7;
        }
        else {
          pbVar1 = (byte *)(uVar5 + 0x40 + param_1);
          *pbVar1 = *pbVar1 | bVar7 >> sVar4;
        }
        uVar6 = uVar6 + (int)param_3;
        uVar5 = (ulonglong)(uVar8 + 1);
        if (uVar6 == 0x200) {
          whirlpool_block(param_1,param_1 + 0x40);
          uVar5 = 0;
          uVar6 = 0;
        }
        if (uVar11 != 0) {
          *(byte *)(uVar5 + 0x40 + param_1) = bVar7 << (8U - sVar4 & 0x1f);
        }
        param_3 = 0;
LAB_14f7b84c6:
        *(uint *)(param_1 + 0x80) = uVar6;
      }
      else {
        bVar7 = param_2[1] >> ((byte)uVar10 & 0x1f) | *param_2 << sVar3;
        if (uVar11 == 0) {
          *(byte *)(uVar5 + 0x40 + param_1) = bVar7;
        }
        else {
          pbVar1 = (byte *)(uVar5 + 0x40 + param_1);
          *pbVar1 = *pbVar1 | bVar7 >> sVar4;
        }
        uVar6 = uVar6 + 8;
        param_3 = param_3 - 8;
        param_2 = param_2 + 1;
        uVar5 = (ulonglong)(uVar8 + 1);
        if (0x1ff < uVar6) {
          whirlpool_block(param_1,param_1 + 0x40);
          uVar5 = 0;
          uVar6 = uVar6 & 0x1ff;
        }
        if (uVar11 == 0) goto LAB_14f7b84c6;
        *(byte *)(uVar5 + 0x40 + param_1) = bVar7 << (8U - sVar4 & 0x1f);
        *(uint *)(param_1 + 0x80) = uVar6;
      }
    }
    uVar6 = uVar6 + uVar10;
    uVar11 = 0;
    uVar9 = 0;
    pbVar1 = (byte *)(uVar5 + param_1 + 0x40);
    *pbVar1 = *pbVar1 | (byte)(0xff >> sVar3) & *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 - uVar10;
    if (uVar6 == 0x200) {
      whirlpool_block(param_1,param_1 + 0x40,1);
      uVar6 = 0;
    }
    *(uint *)(param_1 + 0x80) = uVar6;
  } while( true );
}

// WHIRLPOOL_Final @ 14f7b85f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WHIRLPOOL_Final(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = *(uint *)(param_2 + 0x10) >> 3;
  uVar7 = *(uint *)(param_2 + 0x10) & 7;
  if (uVar7 == 0) {
    *(undefined1 *)((ulonglong)uVar10 + 0x40 + (longlong)param_2) = 0x80;
  }
  else {
    pbVar1 = (byte *)((ulonglong)uVar10 + 0x40 + (longlong)param_2);
    *pbVar1 = *pbVar1 | (byte)(0x80 >> (sbyte)uVar7);
  }
  uVar10 = uVar10 + 1;
  uVar11 = (ulonglong)uVar10;
  if (uVar10 < 0x21) {
    if (0x1f < uVar10) goto LAB_14f7b868b;
  }
  else {
    if (uVar10 < 0x40) {
      memset((void *)((longlong)param_2 + uVar11 + 0x40),0,(ulonglong)(0x40 - uVar10));
    }
    whirlpool_block(param_2,param_2 + 8,1);
    uVar11 = 0;
  }
  memset((void *)((longlong)param_2 + uVar11 + 0x40),0,(ulonglong)(0x20 - (int)uVar11));
LAB_14f7b868b:
  lVar9 = 4;
  puVar8 = param_2 + 0x11;
  puVar6 = (undefined1 *)((longlong)param_2 + 0x7f);
  do {
    uVar2 = *puVar8;
    puVar8 = puVar8 + 1;
    *puVar6 = (char)uVar2;
    puVar6[-1] = (char)((ulonglong)uVar2 >> 8);
    puVar6[-2] = (char)((ulonglong)uVar2 >> 0x10);
    puVar6[-3] = (char)((ulonglong)uVar2 >> 0x18);
    puVar6[-4] = (char)((ulonglong)uVar2 >> 0x20);
    puVar6[-5] = (char)((ulonglong)uVar2 >> 0x28);
    puVar6[-6] = (char)((ulonglong)uVar2 >> 0x30);
    puVar6[-7] = (char)((ulonglong)uVar2 >> 0x38);
    lVar9 = lVar9 + -1;
    puVar6 = puVar6 + -8;
  } while (lVar9 != 0);
  whirlpool_block(param_2,param_2 + 8,1);
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 5);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 5) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar4 = *(undefined4 *)(param_2 + 7);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 7) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
    OPENSSL_cleanse(param_2,0xa8);
    return 1;
  }
  return 0;
}

// WHIRLPOOL_Init @ 14f7b8750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WHIRLPOOL_Init(void *param_1)

{
  memset(param_1,0,0xa8);
  return 1;
}

// WHIRLPOOL_Update @ 14f7b8780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WHIRLPOOL_Update(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  sbyte sVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong local_res10;
  
  if (0xfffffffffffffff < param_3) {
    local_res10 = param_3 >> 0x3c;
    do {
      uVar6 = *(uint *)(param_1 + 0x80);
      uVar7 = 0x8000000000000000;
      *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -0x8000000000000000;
      uVar10 = uVar6 & 7;
      if (*(ulonglong *)(param_1 + 0x88) < 0x8000000000000000) {
        uVar5 = 1;
        plVar3 = (longlong *)(param_1 + 0x90);
        do {
          *plVar3 = *plVar3 + 1;
          if (*plVar3 != 0) break;
          uVar5 = uVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar5 < 4);
      }
      pbVar9 = param_2;
      if (uVar10 == 0) {
        do {
          if ((uVar6 == 0) && (uVar5 = uVar7 >> 9, uVar5 != 0)) {
            whirlpool_block(param_1,pbVar9,uVar5);
            pbVar9 = pbVar9 + uVar5 * 0x40;
            uVar7 = (ulonglong)((uint)uVar7 & 0x1ff);
          }
          else {
            uVar10 = 0x200 - uVar6;
            if (uVar7 < uVar10) {
              memcpy((void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3)),pbVar9,uVar7 >> 3);
              uVar6 = uVar6 + (uint)uVar7;
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 - uVar10;
              memcpy((void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3)),pbVar9,
                     (ulonglong)(uVar10 >> 3));
              pbVar9 = pbVar9 + (uVar10 >> 3);
              whirlpool_block(param_1,param_1 + 0x40,1);
              uVar6 = 0;
            }
            *(uint *)(param_1 + 0x80) = uVar6;
          }
        } while (uVar7 != 0);
      }
      else {
        while (uVar7 != 0) {
          bVar2 = *pbVar9;
          uVar8 = uVar6 >> 3;
          sVar4 = (sbyte)uVar10;
          pbVar1 = (byte *)((ulonglong)uVar8 + 0x40 + param_1);
          *pbVar1 = *pbVar1 | bVar2 >> sVar4;
          if (uVar7 < 9) {
            uVar6 = uVar6 + (int)uVar7;
            uVar7 = (ulonglong)(uVar8 + 1);
            if (uVar6 == 0x200) {
              whirlpool_block(param_1,param_1 + 0x40,1);
              uVar7 = 0;
              uVar6 = 0;
            }
            *(byte *)(uVar7 + 0x40 + param_1) = bVar2 << (8U - sVar4 & 0x1f);
            uVar7 = 0;
            *(uint *)(param_1 + 0x80) = uVar6;
          }
          else {
            uVar6 = uVar6 + 8;
            uVar7 = uVar7 - 8;
            pbVar9 = pbVar9 + 1;
            uVar5 = (ulonglong)(uVar8 + 1);
            if (0x1ff < uVar6) {
              whirlpool_block(param_1,param_1 + 0x40,1);
              uVar5 = 0;
              uVar6 = uVar6 & 0x1ff;
            }
            *(byte *)(uVar5 + 0x40 + param_1) = bVar2 << (8U - sVar4 & 0x1f);
            *(uint *)(param_1 + 0x80) = uVar6;
          }
        }
      }
      param_3 = param_3 + 0xf000000000000000;
      param_2 = param_2 + 0x1000000000000000;
      local_res10 = local_res10 - 1;
    } while (local_res10 != 0);
  }
  if (param_3 != 0) {
    WHIRLPOOL_BitUpdate(param_1,param_2,param_3 * 8);
  }
  return 1;
}

