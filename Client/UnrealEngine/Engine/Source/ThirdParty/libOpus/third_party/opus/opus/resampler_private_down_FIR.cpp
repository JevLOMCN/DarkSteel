// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_resampler_private_down_FIR @ 14f885418

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_resampler_private_down_FIR
               (longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined1 *_Dst;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *_Dst_00;
  ulonglong uVar7;
  int iVar8;
  size_t _Size;
  ulonglong uVar9;
  undefined8 auStack_90 [5];
  int aiStack_68 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)local_48;
  iVar8 = *(int *)(param_1 + 0x114);
  uVar7 = (longlong)(*(int *)(param_1 + 0x10c) + iVar8) * 4;
  uVar9 = uVar7 + 0xf;
  if (uVar9 <= uVar7) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x14f885486;
  lVar6 = -(uVar9 & 0xfffffffffffffff0);
  _Dst = local_48 + lVar6;
  local_40 = param_2;
  local_38 = (void *)(param_1 + 0x18);
  *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14f8854a8;
  memcpy(_Dst,(void *)(param_1 + 0x18),(longlong)iVar8 << 2);
  lVar4 = *(longlong *)(param_1 + 0x128);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x128);
    iVar8 = param_4;
    if (*(int *)(param_1 + 0x10c) <= param_4) {
      iVar8 = *(int *)(param_1 + 0x10c);
    }
    iVar2 = *(int *)(param_1 + 0x114);
    *(int *)((longlong)aiStack_68 + lVar6) = iVar8;
    *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14f8854e6;
    silk_resampler_private_AR2(param_1,_Dst + (longlong)iVar2 * 4,param_3,uVar5);
    uVar5 = local_40;
    uVar3 = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)((longlong)aiStack_68 + lVar6 + 0x10) = uVar1;
    *(int *)((longlong)aiStack_68 + lVar6 + 8) = iVar8 << 0x10;
    *(undefined4 *)((longlong)aiStack_68 + lVar6) = *(undefined4 *)(param_1 + 0x118);
    *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14f885515;
    local_40 = FUN_14f88557c(uVar5,_Dst,lVar4 + 4,uVar3);
    _Dst_00 = local_38;
    param_4 = param_4 - iVar8;
    _Size = (longlong)*(int *)(param_1 + 0x114) << 2;
    param_3 = param_3 + (longlong)iVar8 * 2;
    if (param_4 < 2) break;
    *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14f885541;
    memcpy(_Dst,_Dst + (longlong)iVar8 * 4,_Size);
  }
  *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14f88554f;
  memcpy(_Dst_00,_Dst + (longlong)iVar8 * 4,_Size);
  *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x14f88555b;
  return;
}

// FUN_14f88557c @ 14f88557c

undefined2 *
FUN_14f88557c(undefined2 *param_1,longlong param_2,short *param_3,int param_4,int param_5,
             int param_6,int param_7)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0x12) {
    iVar3 = 0;
    if (0 < param_6) {
      do {
        lVar6 = (longlong)iVar3 >> 0x10;
        iVar4 = (int)((ulonglong)(ushort)iVar3 * (longlong)(short)param_5 >> 0x10);
        lVar2 = (longlong)(iVar4 * 9);
        lVar5 = (longlong)((param_5 - iVar4) * 9);
        iVar4 = ((int)((ulonglong)
                       ((longlong)*(int *)(param_2 + 0x44 + lVar6 * 4) *
                       (longlong)param_3[lVar5 + -9]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -2] *
                       (longlong)*(int *)(param_2 + 0x28 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -4] *
                       (longlong)*(int *)(param_2 + 0x30 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)*(int *)(param_2 + 0x38 + lVar6 * 4) *
                       (longlong)param_3[lVar5 + -6]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)*(int *)(param_2 + 0x3c + lVar6 * 4) *
                       (longlong)param_3[lVar5 + -7]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 8] *
                       (longlong)*(int *)(param_2 + 0x20 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 7] *
                       (longlong)*(int *)(param_2 + 0x1c + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 6] *
                       (longlong)*(int *)(param_2 + 0x18 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 5] *
                       (longlong)*(int *)(param_2 + 0x14 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 4] *
                       (longlong)*(int *)(param_2 + 0x10 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 3] * (longlong)*(int *)(param_2 + 0xc + lVar6 * 4)
                       ) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 2] * (longlong)*(int *)(param_2 + 8 + lVar6 * 4))
                      >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2 + 1] * (longlong)*(int *)(param_2 + 4 + lVar6 * 4))
                      >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar2] * (longlong)*(int *)(param_2 + lVar6 * 4)) >> 0x10)
                 + (int)((ulonglong)
                         ((longlong)*(int *)(param_2 + 0x40 + lVar6 * 4) *
                         (longlong)param_3[lVar5 + -8]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -5] *
                       (longlong)*(int *)(param_2 + 0x34 + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -3] *
                       (longlong)*(int *)(param_2 + 0x2c + lVar6 * 4)) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)param_3[lVar5 + -1] *
                       (longlong)*(int *)(param_2 + 0x24 + lVar6 * 4)) >> 0x10) >> 5) + 1 >> 1;
        uVar1 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar1 = 0x8000;
        }
        if (0x7fff < iVar4) {
          uVar1 = 0x7fff;
        }
        iVar3 = iVar3 + param_7;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (iVar3 < param_6);
    }
  }
  else if (param_4 == 0x18) {
    iVar3 = 0;
    if (0 < param_6) {
      do {
        lVar2 = (longlong)iVar3 >> 0x10;
        iVar4 = ((int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x30 + lVar2 * 4) + *(int *)(param_2 + 0x2c + lVar2 * 4)
                        ) * (longlong)param_3[0xb]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x38 + lVar2 * 4) + *(int *)(param_2 + 0x24 + lVar2 * 4)
                        ) * (longlong)param_3[9]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x40 + lVar2 * 4) + *(int *)(param_2 + 0x1c + lVar2 * 4)
                        ) * (longlong)param_3[7]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x48 + lVar2 * 4) + *(int *)(param_2 + 0x14 + lVar2 * 4)
                        ) * (longlong)param_3[5]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x50 + lVar2 * 4) + *(int *)(param_2 + 0xc + lVar2 * 4))
                       * (longlong)param_3[3]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x58 + lVar2 * 4) + *(int *)(param_2 + 4 + lVar2 * 4)) *
                       (longlong)param_3[1]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x34 + lVar2 * 4) + *(int *)(param_2 + 0x28 + lVar2 * 4)
                        ) * (longlong)param_3[10]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x3c + lVar2 * 4) + *(int *)(param_2 + 0x20 + lVar2 * 4)
                        ) * (longlong)param_3[8]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x44 + lVar2 * 4) + *(int *)(param_2 + 0x18 + lVar2 * 4)
                        ) * (longlong)param_3[6]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x4c + lVar2 * 4) + *(int *)(param_2 + 0x10 + lVar2 * 4)
                        ) * (longlong)param_3[4]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x54 + lVar2 * 4) + *(int *)(param_2 + 8 + lVar2 * 4)) *
                       (longlong)param_3[2]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x5c + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4)) *
                       (longlong)*param_3) >> 0x10) >> 5) + 1 >> 1;
        uVar1 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar1 = 0x8000;
        }
        if (0x7fff < iVar4) {
          uVar1 = 0x7fff;
        }
        iVar3 = iVar3 + param_7;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (iVar3 < param_6);
    }
  }
  else if (param_4 == 0x24) {
    iVar3 = 0;
    if (0 < param_6) {
      do {
        lVar2 = (longlong)iVar3 >> 0x10;
        iVar4 = ((int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x50 + lVar2 * 4) + *(int *)(param_2 + 0x3c + lVar2 * 4)
                        ) * (longlong)param_3[0xf]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x58 + lVar2 * 4) + *(int *)(param_2 + 0x34 + lVar2 * 4)
                        ) * (longlong)param_3[0xd]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x60 + lVar2 * 4) + *(int *)(param_2 + 0x2c + lVar2 * 4)
                        ) * (longlong)param_3[0xb]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x68 + lVar2 * 4) + *(int *)(param_2 + 0x24 + lVar2 * 4)
                        ) * (longlong)param_3[9]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x70 + lVar2 * 4) + *(int *)(param_2 + 0x1c + lVar2 * 4)
                        ) * (longlong)param_3[7]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x78 + lVar2 * 4) + *(int *)(param_2 + 0x14 + lVar2 * 4)
                        ) * (longlong)param_3[5]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x80 + lVar2 * 4) + *(int *)(param_2 + 0xc + lVar2 * 4))
                       * (longlong)param_3[3]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x88 + lVar2 * 4) + *(int *)(param_2 + 4 + lVar2 * 4)) *
                       (longlong)param_3[1]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x48 + lVar2 * 4) + *(int *)(param_2 + 0x44 + lVar2 * 4)
                        ) * (longlong)param_3[0x11]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x4c + lVar2 * 4) + *(int *)(param_2 + 0x40 + lVar2 * 4)
                        ) * (longlong)param_3[0x10]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x54 + lVar2 * 4) + *(int *)(param_2 + 0x38 + lVar2 * 4)
                        ) * (longlong)param_3[0xe]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x5c + lVar2 * 4) + *(int *)(param_2 + 0x30 + lVar2 * 4)
                        ) * (longlong)param_3[0xc]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 100 + lVar2 * 4) + *(int *)(param_2 + 0x28 + lVar2 * 4))
                       * (longlong)param_3[10]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x6c + lVar2 * 4) + *(int *)(param_2 + 0x20 + lVar2 * 4)
                        ) * (longlong)param_3[8]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x74 + lVar2 * 4) + *(int *)(param_2 + 0x18 + lVar2 * 4)
                        ) * (longlong)param_3[6]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x7c + lVar2 * 4) + *(int *)(param_2 + 0x10 + lVar2 * 4)
                        ) * (longlong)param_3[4]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x84 + lVar2 * 4) + *(int *)(param_2 + 8 + lVar2 * 4)) *
                       (longlong)param_3[2]) >> 0x10) +
                 (int)((ulonglong)
                       ((longlong)
                        (*(int *)(param_2 + 0x8c + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4)) *
                       (longlong)*param_3) >> 0x10) >> 5) + 1 >> 1;
        uVar1 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar1 = 0x8000;
        }
        if (0x7fff < iVar4) {
          uVar1 = 0x7fff;
        }
        iVar3 = iVar3 + param_7;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
      } while (iVar3 < param_6);
    }
  }
  else {
    celt_fatal("assertion failed: 0",
               "../../../third_party/opus/src/silk/resampler_private_down_FIR.c",0x8b);
  }
  return param_1;
}

