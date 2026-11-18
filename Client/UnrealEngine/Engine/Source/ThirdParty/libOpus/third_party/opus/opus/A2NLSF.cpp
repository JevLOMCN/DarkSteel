// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// silk_A2NLSF @ 14f88ea40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_A2NLSF(short *param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  uint local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined1 *local_f8;
  int local_f0;
  longlong local_e8;
  ulonglong local_e0;
  uint local_d8;
  short *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0 [2];
  undefined1 local_b0 [56];
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_c0[0] = local_b0;
  iVar9 = param_3 >> 1;
  local_c0[1] = local_78;
  local_fc = param_3;
  local_d0 = param_1;
  local_c8 = param_2;
  FUN_14f88ee6c(param_2,local_b0,local_78,iVar9);
  iVar6 = (int)silk_LSFCosTab_FIX_Q12;
  puVar10 = local_b0;
  local_f8 = puVar10;
  uVar2 = FUN_14f88edbc(local_b0,iVar6,iVar9);
  bVar13 = (int)uVar2 < 0;
  if (bVar13) {
    puVar10 = local_78;
    *param_1 = 0;
    local_f8 = puVar10;
    uVar2 = FUN_14f88edbc(local_78,iVar6,iVar9);
  }
  local_108 = (uint)bVar13;
  local_f0 = 0;
  local_e0 = (ulonglong)local_108;
  do {
    local_100 = 1;
    local_e8 = 1;
    uVar8 = (ulonglong)uVar2;
    uVar2 = 0;
    do {
      while( true ) {
        iVar5 = local_100;
        local_104 = (int)(&silk_LSFCosTab_FIX_Q12)[local_e8];
        uVar3 = FUN_14f88edbc(puVar10,local_104,iVar9);
        puVar10 = local_f8;
        iVar7 = 0;
        uVar11 = (ulonglong)uVar3;
        if (((0 < (int)uVar8) || ((int)uVar3 < (int)uVar2)) &&
           (((int)uVar8 < 0 || ((int)-uVar2 < (int)uVar3)))) break;
        iVar12 = -0x100;
        local_d8 = (uint)(uVar3 == 0);
        iVar5 = local_104;
        do {
          local_104 = (iVar5 + iVar6 >> 1) + (iVar5 + iVar6 & 1U);
          uVar2 = FUN_14f88edbc(puVar10,local_104,iVar9);
          if ((((int)uVar8 < 1) && (-1 < (int)uVar2)) || ((-1 < (int)uVar8 && ((int)uVar2 < 1)))) {
            uVar11 = (ulonglong)uVar2;
            iVar5 = local_104;
          }
          else {
            uVar8 = (ulonglong)uVar2;
            iVar12 = iVar12 + (0x80 >> ((byte)iVar7 & 0x1f));
            iVar6 = local_104;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
        uVar2 = (uint)uVar8;
        iVar6 = uVar2 - (int)uVar11;
        if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0x10000) {
          if (iVar6 != 0) {
            uVar2 = (iVar6 >> 1) + uVar2 * 0x20;
            goto LAB_14f88ec01;
          }
        }
        else {
          iVar6 = iVar6 >> 5;
LAB_14f88ec01:
          iVar12 = iVar12 + (int)uVar2 / iVar6;
        }
        iVar12 = local_100 * 0x100 + iVar12;
        sVar1 = 0x7fff;
        if (iVar12 < 0x7fff) {
          sVar1 = (short)iVar12;
        }
        local_108 = local_108 + 1;
        local_d0[local_e0] = sVar1;
        local_e0 = local_e0 + 1;
        if (local_fc <= (int)local_108) {
          return;
        }
        local_f8 = local_c0[local_108 & 1];
        param_1 = local_d0;
        uVar8 = (ulonglong)((local_108 & 2) * -0x1000 + 0x1000);
        puVar10 = local_f8;
        iVar6 = (int)*(short *)(&UNK_15351a7ae + local_e8 * 2);
        uVar2 = local_d8;
      }
      local_100 = iVar5 + 1;
      local_e8 = local_e8 + 1;
      uVar8 = uVar11;
      iVar6 = local_104;
      uVar2 = 0;
    } while (local_100 < 0x81);
    local_f0 = local_f0 + 1;
    if (0x10 < local_f0) {
      *param_1 = (short)(0x8000 / (longlong)(local_fc + 1));
      if (1 < (longlong)local_fc) {
        lVar4 = 1;
        do {
          param_1[lVar4] = param_1[lVar4 + -1] + *param_1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < local_fc);
      }
      return;
    }
    silk_bwexpander_32(local_c8,local_fc,0x10000 - (1 << ((byte)local_f0 & 0x1f)));
    FUN_14f88ee6c(local_c8,local_b0,local_78,iVar9);
    iVar6 = (int)silk_LSFCosTab_FIX_Q12;
    puVar10 = local_b0;
    local_f8 = puVar10;
    uVar2 = FUN_14f88edbc(local_b0,iVar6,iVar9);
    if ((int)uVar2 < 0) {
      *param_1 = 0;
      puVar10 = local_78;
      local_f8 = puVar10;
      uVar2 = FUN_14f88edbc(local_78,iVar6,iVar9);
      local_108 = 1;
      local_e0 = 1;
    }
    else {
      local_108 = 0;
      local_e0 = 0;
    }
  } while( true );
}

// FUN_14f88edbc @ 14f88edbc

ulonglong FUN_14f88edbc(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1[param_3];
  if (param_3 == 8) {
    lVar1 = (longlong)(param_2 << 4);
    uVar2 = (ulonglong)
            (uint)((int)((ulonglong)
                         (((int)((ulonglong)
                                 (((int)((ulonglong)
                                         (((int)((ulonglong)
                                                 (((int)((ulonglong)
                                                         (((int)((ulonglong)
                                                                 (((int)((ulonglong)
                                                                         (((int)(uVar2 * lVar1 >>
                                                                                0x10) + param_1[7])
                                                                         * lVar1) >> 0x10) +
                                                                  param_1[6]) * lVar1) >> 0x10) +
                                                          param_1[5]) * lVar1) >> 0x10) + param_1[4]
                                                  ) * lVar1) >> 0x10) + param_1[3]) * lVar1) >> 0x10
                                        ) + param_1[2]) * lVar1) >> 0x10) + param_1[1]) * lVar1) >>
                        0x10) + *param_1);
  }
  else {
    lVar1 = (longlong)(param_3 + -1);
    if (-1 < param_3 + -1) {
      do {
        uVar2 = (ulonglong)
                (uint)((int)((ulonglong)((longlong)(int)uVar2 * (longlong)(param_2 << 4)) >> 0x10) +
                      param_1[lVar1]);
        lVar1 = lVar1 + -1;
      } while (-1 < lVar1);
    }
  }
  return uVar2 & 0xffffffff;
}

// FUN_14f88ee6c @ 14f88ee6c

void FUN_14f88ee6c(longlong param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  
  lVar5 = (longlong)param_4;
  param_2[lVar5] = 0x10000;
  param_3[lVar5] = 0x10000;
  if (0 < param_4) {
    piVar1 = (int *)(lVar5 * 4 + param_1);
    lVar3 = lVar5;
    piVar4 = piVar1;
    do {
      piVar4 = piVar4 + -1;
      *(int *)((longlong)param_2 + (lVar5 * -4 - param_1) + (longlong)piVar1) = -(*piVar1 + *piVar4)
      ;
      *(int *)((longlong)param_3 + (lVar5 * -4 - param_1) + (longlong)piVar1) = *piVar1 - *piVar4;
      piVar1 = piVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (0 < lVar5) {
      piVar1 = param_3 + lVar5 + -1;
      lVar3 = lVar5;
      do {
        lVar3 = lVar3 + -1;
        piVar4 = (int *)(((longlong)param_2 - (longlong)param_3) + (longlong)piVar1);
        *piVar4 = *piVar4 - *(int *)(((longlong)param_2 - (longlong)param_3) + 4 + (longlong)piVar1)
        ;
        *piVar1 = *piVar1 + piVar1[1];
        piVar1 = piVar1 + -1;
      } while (0 < lVar3);
    }
  }
  lVar3 = 2;
  if (1 < lVar5) {
    lVar2 = 2;
    bVar8 = SBORROW8(lVar5,2);
    lVar6 = lVar5 + -2;
    bVar7 = lVar5 == 2;
    piVar1 = param_2;
    do {
      if (!bVar7 && bVar8 == lVar6 < 0) {
        piVar4 = param_2 + lVar5 + -2;
        lVar6 = lVar5 - lVar2;
        do {
          *piVar4 = *piVar4 - piVar4[2];
          piVar4 = piVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar2 = lVar2 + 1;
      *piVar1 = *piVar1 + piVar1[2] * -2;
      piVar1 = piVar1 + 1;
      bVar8 = SBORROW8(lVar5,lVar2);
      lVar6 = lVar5 - lVar2;
      bVar7 = lVar5 == lVar2;
    } while (lVar2 <= lVar5);
    bVar8 = SBORROW8(lVar5,2);
    lVar6 = lVar5 + -2;
    bVar7 = lVar5 == 2;
    piVar1 = param_3;
    do {
      if (!bVar7 && bVar8 == lVar6 < 0) {
        piVar4 = param_3 + lVar5 + -2;
        lVar6 = lVar5 - lVar3;
        do {
          *piVar4 = *piVar4 - piVar4[2];
          piVar4 = piVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar3 = lVar3 + 1;
      *piVar1 = *piVar1 + piVar1[2] * -2;
      piVar1 = piVar1 + 1;
      bVar8 = SBORROW8(lVar5,lVar3);
      lVar6 = lVar5 - lVar3;
      bVar7 = lVar5 == lVar3;
    } while (lVar3 <= lVar5);
  }
  return;
}

