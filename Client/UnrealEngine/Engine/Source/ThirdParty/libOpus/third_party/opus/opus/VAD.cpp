// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// silk_VAD_GetNoiseLevels @ 14f888a30

void silk_VAD_GetNoiseLevels(longlong param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = *(int *)(param_2 + 0x6c);
  if (iVar3 < 1000) {
    iVar4 = (int)(0x7fff / (longlong)((iVar3 >> 4) + 1));
    *(int *)(param_2 + 0x6c) = iVar3 + 1;
  }
  else {
    iVar4 = 0;
  }
  piVar7 = (int *)(param_2 + 0x4c);
  lVar5 = 4;
  do {
    iVar6 = *(int *)((param_1 - param_2) + -0x4c + (longlong)piVar7) + piVar7[4];
    iVar3 = piVar7[-4];
    if (iVar6 < 0) {
      iVar6 = 0x7fffffff;
    }
    iVar2 = (int)(0x7fffffff / (longlong)iVar6);
    if (iVar3 << 3 < iVar6) {
      iVar3 = 0x80;
    }
    else if (iVar6 < iVar3) {
      iVar3 = 0x400;
    }
    else {
      iVar3 = (int)((ulonglong)
                    ((longlong)(int)((ulonglong)((longlong)iVar2 * (longlong)iVar3) >> 0x10) << 0xb)
                   >> 0x10);
    }
    sVar1 = (short)iVar4;
    if (iVar4 < iVar3) {
      sVar1 = (short)iVar3;
    }
    iVar3 = (int)((ulonglong)((longlong)sVar1 * (longlong)(iVar2 - *piVar7)) >> 0x10) + *piVar7;
    *piVar7 = iVar3;
    iVar6 = (int)(0x7fffffff / (longlong)iVar3);
    iVar3 = 0xffffff;
    if (iVar6 < 0xffffff) {
      iVar3 = iVar6;
    }
    piVar7[-4] = iVar3;
    piVar7 = piVar7 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

// silk_VAD_GetSA_Q8_c @ 14f888b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 silk_VAD_GetSA_Q8_c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  short *psVar2;
  byte bVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  uint *puVar12;
  ulonglong uVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined8 auStack_d0 [5];
  uint auStack_a8 [3];
  short sStack_9a;
  int local_98;
  int local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68 [4];
  int local_58 [4];
  ulonglong local_48;
  ulonglong uVar19;
  
  local_48 = __security_cookie.value ^ (ulonglong)&local_98;
  lVar1 = param_1 + 0x24;
  uVar16 = *(uint *)(param_1 + 0x11e8);
  local_90 = param_1;
  local_88 = param_2;
  local_80 = lVar1;
  if (0x140 < (int)uVar16) {
    auStack_d0[0] = 0x14f888b9a;
    celt_fatal("assertion failed: MAX_FRAME_LENGTH >= psEncC->frame_length",
               "../../../third_party/opus/src/silk/VAD.c",0x68);
    uVar16 = *(uint *)(param_1 + 0x11e8);
  }
  if (0x200 < (int)uVar16) {
    auStack_d0[0] = 0x14f888bbd;
    celt_fatal("assertion failed: psEncC->frame_length <= 512",
               "../../../third_party/opus/src/silk/VAD.c",0x69);
    uVar16 = *(uint *)(param_1 + 0x11e8);
  }
  if (uVar16 != (uVar16 & 0xfffffff8)) {
    auStack_d0[0] = 0x14f888be1;
    celt_fatal("assertion failed: psEncC->frame_length == 8 * silk_RSHIFT( psEncC->frame_length, 3 )"
               ,"../../../third_party/opus/src/silk/VAD.c",0x6a);
    uVar16 = *(uint *)(param_1 + 0x11e8);
  }
  lVar10 = local_88;
  uVar13 = 0;
  iVar22 = (int)uVar16 >> 2;
  iVar20 = (int)uVar16 >> 3;
  iVar6 = 0;
  local_78 = 0;
  local_74 = iVar20 + iVar22;
  local_70 = local_74 + iVar20;
  local_6c = local_70 + iVar22;
  uVar15 = (longlong)(local_6c + ((int)uVar16 >> 1)) * 2;
  uVar8 = uVar15 + 0xf;
  if (uVar8 <= uVar15) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14f888c3b;
  lVar4 = -(uVar8 & 0xfffffffffffffff0);
  lVar9 = (longlong)local_6c;
  psVar2 = (short *)((longlong)&local_98 + lVar4);
  *(uint *)((longlong)auStack_a8 + lVar4) = uVar16;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f888c5d;
  silk_ana_filt_bank_1(lVar10,lVar1,psVar2,psVar2 + lVar9);
  lVar10 = (longlong)local_70;
  *(int *)((longlong)auStack_a8 + lVar4) = (int)uVar16 >> 1;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f888c79;
  silk_ana_filt_bank_1(psVar2,param_1 + 0x2c,psVar2,psVar2 + lVar10);
  *(int *)((longlong)auStack_a8 + lVar4) = iVar22;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f888c97;
  silk_ana_filt_bank_1(psVar2,param_1 + 0x34,psVar2,psVar2 + (iVar20 + iVar22));
  lVar10 = (longlong)iVar20 + -1;
  psVar2[lVar10] = psVar2[lVar10] >> 1;
  sVar5 = psVar2[lVar10];
  for (; 0 < lVar10; lVar10 = lVar10 + -1) {
    psVar11 = (short *)((longlong)&sStack_9a + lVar10 * 2 + lVar4);
    *psVar11 = *psVar11 >> 1;
    psVar2[lVar10] = psVar2[lVar10] - *(short *)((longlong)&sStack_9a + lVar10 * 2 + lVar4);
  }
  *psVar2 = *psVar2 - *(short *)(param_1 + 0x5c);
  lVar10 = local_90;
  *(short *)(param_1 + 0x5c) = sVar5;
  puVar12 = (uint *)(param_1 + 0x3c);
  local_98 = 4;
  do {
    iVar20 = *(int *)(param_1 + 0x11e8);
    uVar16 = *puVar12;
    *(uint *)((longlong)&local_80 + -lVar1 + (longlong)puVar12) = uVar16;
    iVar22 = 3;
    if (local_98 < 3) {
      iVar22 = local_98;
    }
    iVar20 = (iVar20 >> ((byte)iVar22 & 0x1f)) >> 2;
    uVar8 = uVar13;
    uVar15 = uVar13;
    do {
      uVar18 = 0;
      if (0 < iVar20) {
        psVar11 = psVar2 + (longlong)*(int *)((longlong)puVar12 + ((longlong)&local_90 - lVar1)) +
                           (longlong)(int)uVar8;
        uVar19 = uVar13;
        lVar9 = (longlong)iVar20;
        do {
          sVar5 = *psVar11;
          psVar11 = psVar11 + 1;
          uVar18 = (int)uVar19 + ((int)sVar5 >> 3) * ((int)sVar5 >> 3);
          uVar19 = (ulonglong)uVar18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar21 = uVar18;
      if (2 < (int)uVar15) {
        uVar21 = (int)uVar18 >> 1;
      }
      uVar16 = uVar16 + uVar21;
      if ((int)uVar16 < 0) {
        uVar16 = 0x7fffffff;
      }
      uVar8 = (ulonglong)(uint)((int)uVar8 + iVar20);
      uVar21 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar21;
      *(uint *)((longlong)&local_80 + -lVar1 + (longlong)puVar12) = uVar16;
      lVar9 = local_80;
    } while ((int)uVar21 < 4);
    local_98 = local_98 + -1;
    *puVar12 = uVar18;
    puVar12 = puVar12 + 1;
    param_1 = local_90;
  } while (0 < local_98);
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f888da9;
  silk_VAD_GetNoiseLevels(local_68,lVar9);
  local_94 = 0;
  local_98 = 0;
  lVar9 = lVar9 - (longlong)local_68;
  local_88 = 4;
  local_90 = lVar9;
  uVar8 = uVar13;
  do {
    uVar16 = *(uint *)((longlong)local_68 + uVar8);
    iVar20 = *(int *)(lVar9 + 0x3c + (longlong)((longlong)local_68 + uVar8));
    uVar18 = uVar16 - iVar20;
    if ((int)uVar18 < 1) {
      *(undefined4 *)((longlong)local_58 + uVar8) = 0x100;
    }
    else {
      if ((uVar16 & 0xff800000) == 0) {
        iVar22 = (int)(uVar16 << 8) / (iVar20 + 1);
        uVar15 = (longlong)(int)(uVar16 << 8) % (longlong)(iVar20 + 1);
      }
      else {
        iVar20 = (iVar20 >> 8) + 1;
        iVar22 = (int)uVar16 / iVar20;
        uVar15 = (longlong)(int)uVar16 % (longlong)iVar20;
      }
      *(int *)((longlong)local_58 + uVar8) = iVar22;
      *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f888e14;
      sVar5 = silk_lin2log(iVar22,uVar15 & 0xffffffff);
      sVar5 = sVar5 + -0x400;
      local_94 = local_94 + (int)sVar5 * (int)sVar5;
      if ((int)uVar18 < 0x100000) {
        iVar20 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> iVar20 == 0; iVar20 = iVar20 + -1) {
          }
        }
        uVar16 = 0x1f - iVar20;
        iVar20 = 0x18 - uVar16;
        if (iVar20 != 0) {
          if (iVar20 < 0) {
            bVar3 = -(byte)iVar20 & 0x1f;
            uVar18 = uVar18 << bVar3 | uVar18 >> 0x20 - bVar3;
          }
          else {
            bVar3 = (byte)iVar20 & 0x1f;
            uVar18 = uVar18 >> bVar3 | uVar18 << 0x20 - bVar3;
          }
        }
        iVar20 = (int)((-(uint)((uVar16 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
                 ((byte)((int)uVar16 >> 1) & 0x1f);
        sVar5 = (short)((ulonglong)
                        ((longlong)sVar5 *
                        (longlong)
                        (((int)((ulonglong)(uVar18 & 0x7f) * (longlong)iVar20 * 0xd5 >> 0x10) +
                         iVar20) * 0x40)) >> 0x10);
      }
      local_98 = local_98 +
                 (int)((ulonglong)
                       ((longlong)*(int *)((longlong)&DAT_1535175c0 + uVar8) * (longlong)sVar5) >>
                      0x10);
    }
    uVar8 = uVar8 + 4;
    local_88 = local_88 + -1;
  } while (local_88 != 0);
  uVar16 = (int)(local_94 + (local_94 >> 0x1f & 3U)) >> 2;
  if ((int)uVar16 < 1) {
    sVar5 = 0;
  }
  else {
    iVar20 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    uVar18 = 0x1f - iVar20;
    iVar20 = 0x18 - uVar18;
    if (iVar20 != 0) {
      if (iVar20 < 0) {
        bVar3 = -(byte)iVar20 & 0x1f;
        uVar16 = uVar16 << bVar3 | uVar16 >> 0x20 - bVar3;
      }
      else {
        bVar3 = (byte)iVar20 & 0x1f;
        uVar16 = uVar16 >> bVar3 | uVar16 << 0x20 - bVar3;
      }
    }
    iVar20 = (int)((-(uint)((uVar18 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
             ((byte)((int)uVar18 >> 1) & 0x1f);
    sVar5 = (short)((ulonglong)(uVar16 & 0x7f) * (longlong)iVar20 * 0xd5 >> 0x10) + (short)iVar20;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f888f65;
  iVar22 = silk_sigm_Q15((int)((ulonglong)((longlong)(short)(sVar5 * 3) * 45000) >> 0x10) + -0x80);
  iVar20 = local_98;
  uVar15 = (ulonglong)iVar22;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f888f70;
  iVar20 = silk_sigm_Q15(iVar20);
  lVar1 = local_80;
  iVar17 = 1;
  *(int *)(lVar10 + 0x1278) = iVar20 * 2 + -0x8000;
  uVar8 = uVar13;
  do {
    puVar12 = local_68 + uVar13;
    lVar9 = uVar13 * 4;
    uVar13 = uVar13 + 1;
    iVar20 = ((int)(*puVar12 - *(int *)(&stack0xffffffffffffffd4 + local_90 + lVar9)) >> 4) * iVar17
    ;
    iVar17 = iVar17 + 1;
    uVar16 = (int)uVar8 + iVar20;
    uVar8 = (ulonglong)uVar16;
  } while ((longlong)uVar13 < 4);
  uVar18 = (int)uVar16 >> 1;
  if (*(int *)(lVar10 + 0x11e8) != *(int *)(lVar10 + 0x11e0) * 0x14) {
    uVar18 = uVar16;
  }
  if ((int)uVar18 < 1) {
    uVar15 = (ulonglong)(uint)(iVar22 >> 1);
  }
  else if ((int)uVar18 < 0x4000) {
    uVar16 = uVar18 << 0x10;
    if (0 < (int)(uVar18 << 0x10)) {
      iVar6 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      uVar18 = 0x1f - iVar6;
      iVar6 = 0x18 - uVar18;
      if (iVar6 != 0) {
        if (iVar6 < 0) {
          bVar3 = -(byte)iVar6 & 0x1f;
          uVar16 = uVar16 << bVar3 | uVar16 >> 0x20 - bVar3;
        }
        else {
          bVar3 = (byte)iVar6 & 0x1f;
          uVar16 = uVar16 >> bVar3 | uVar16 << 0x20 - bVar3;
        }
      }
      iVar6 = (int)((-(uint)((uVar18 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
              ((byte)((int)uVar18 >> 1) & 0x1f);
      iVar6 = (int)((ulonglong)(uVar16 & 0x7f) * (longlong)iVar6 * 0xd5 >> 0x10) + iVar6;
    }
    uVar15 = (longlong)(short)iVar22 * (longlong)(iVar6 + 0x8000) >> 0x10;
  }
  iVar20 = (int)uVar15 >> 7;
  iVar6 = 0xff;
  if (iVar20 < 0xff) {
    iVar6 = iVar20;
  }
  *(int *)(lVar10 + 0x11b4) = iVar6;
  lVar9 = (longlong)(short)((longlong)(short)uVar15 * (uVar15 & 0xffffffff) >> 0x10) << 0xc;
  sVar5 = (short)((ulonglong)lVar9 >> 0x10);
  if (*(int *)(lVar10 + 0x11e8) == *(int *)(lVar10 + 0x11e0) * 10) {
    sVar5 = (short)((int)((ulonglong)lVar9 >> 0x10) >> 1);
  }
  lVar10 = lVar10 - local_80;
  lVar9 = 4;
  piVar14 = (int *)(local_80 + 0x28);
  do {
    *piVar14 = (int)((ulonglong)
                     ((longlong)
                      (*(int *)(((longlong)&local_80 - lVar1) + (longlong)piVar14) - *piVar14) *
                     (longlong)sVar5) >> 0x10) + *piVar14;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8890cf;
    iVar6 = silk_lin2log();
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8890e5;
    uVar7 = silk_sigm_Q15(iVar6 * 3 + -0x1400 >> 4);
    *(undefined4 *)(lVar10 + 0x1240 + (longlong)piVar14) = uVar7;
    piVar14 = piVar14 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f889104;
  return 0;
}

// silk_VAD_Init @ 14f889124

undefined8 silk_VAD_Init(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  memset(param_1,0,0x70);
  iVar3 = 1;
  piVar4 = (int *)((longlong)param_1 + 0x5c);
  lVar5 = 4;
  lVar6 = lVar5;
  do {
    iVar1 = (int)(0x32 / (longlong)iVar3);
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar3 = iVar3 + 1;
    *piVar4 = iVar2;
    piVar4 = piVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  piVar4 = (int *)((longlong)param_1 + 0x3c);
  do {
    *piVar4 = piVar4[8] * 100;
    piVar4[4] = (int)(0x7fffffff / (longlong)(piVar4[8] * 100));
    piVar4 = piVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x640000006400;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x640000006400;
  return 0;
}

