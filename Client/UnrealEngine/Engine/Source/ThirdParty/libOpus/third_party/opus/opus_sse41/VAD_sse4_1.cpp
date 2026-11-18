// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_VAD_GetSA_Q8_sse4_1 @ 14f895368

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 silk_VAD_GetSA_Q8_sse4_1(longlong param_1,undefined8 param_2)

{
  short *psVar1;
  uint *puVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  short *psVar15;
  ulonglong uVar16;
  int *piVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  int iVar23;
  int iVar24;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 auStack_d0 [5];
  uint auStack_a8 [3];
  short sStack_9a;
  uint local_98;
  int local_94;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint local_70 [4];
  int local_60 [4];
  int local_50 [4];
  ulonglong local_40;
  ulonglong uVar22;
  
  local_40 = __security_cookie.value ^ (ulonglong)&local_98;
  local_80 = param_1 + 0x24;
  uVar7 = *(uint *)(param_1 + 0x11e8);
  local_88 = param_2;
  local_78 = param_1;
  if (0x140 < (int)uVar7) {
    auStack_d0[0] = 0x14f8953d2;
    celt_fatal("assertion failed: MAX_FRAME_LENGTH >= psEncC->frame_length",
               "../../../third_party/opus/src/silk/x86/VAD_sse4_1.c",0x44);
    uVar7 = *(uint *)(param_1 + 0x11e8);
  }
  if (0x200 < (int)uVar7) {
    auStack_d0[0] = 0x14f8953f5;
    celt_fatal("assertion failed: psEncC->frame_length <= 512",
               "../../../third_party/opus/src/silk/x86/VAD_sse4_1.c",0x45);
    uVar7 = *(uint *)(param_1 + 0x11e8);
  }
  if (uVar7 != (uVar7 & 0xfffffff8)) {
    auStack_d0[0] = 0x14f895419;
    celt_fatal("assertion failed: psEncC->frame_length == 8 * silk_RSHIFT( psEncC->frame_length, 3 )"
               ,"../../../third_party/opus/src/silk/x86/VAD_sse4_1.c",0x46);
    uVar7 = *(uint *)(param_1 + 0x11e8);
  }
  lVar14 = local_88;
  uVar16 = 0;
  iVar23 = (int)uVar7 >> 2;
  iVar24 = (int)uVar7 >> 3;
  iVar11 = 0;
  local_60[0] = 0;
  iVar19 = iVar24 + iVar23;
  local_60[2] = iVar24 + iVar19;
  local_60[3] = local_60[2] + iVar23;
  uVar18 = (longlong)(local_60[3] + ((int)uVar7 >> 1)) * 2;
  uVar9 = uVar18 + 0xf;
  if (uVar9 <= uVar18) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14f895475;
  lVar4 = -(uVar9 & 0xfffffffffffffff0);
  lVar10 = (longlong)local_60[3];
  psVar1 = (short *)((longlong)&local_98 + lVar4);
  local_60[1] = iVar19;
  *(uint *)((longlong)auStack_a8 + lVar4) = uVar7;
  lVar12 = local_80;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f895498;
  silk_ana_filt_bank_1(lVar14,lVar12,psVar1,psVar1 + lVar10);
  lVar14 = local_80 + 8;
  *(int *)((longlong)auStack_a8 + lVar4) = (int)uVar7 >> 1;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8954ba;
  silk_ana_filt_bank_1(psVar1,lVar14,psVar1,psVar1 + (iVar24 + iVar19));
  lVar14 = local_80;
  *(int *)((longlong)auStack_a8 + lVar4) = iVar23;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8954d9;
  auVar25._0_8_ = silk_ana_filt_bank_1(psVar1,lVar14 + 0x10,psVar1,psVar1 + iVar19);
  auVar25._8_8_ = extraout_XMM0_Qb;
  lVar12 = (longlong)iVar24 + -1;
  psVar1[lVar12] = psVar1[lVar12] >> 1;
  sVar6 = psVar1[lVar12];
  for (; 0 < lVar12; lVar12 = lVar12 + -1) {
    psVar15 = (short *)((longlong)&sStack_9a + lVar12 * 2 + lVar4);
    *psVar15 = *psVar15 >> 1;
    psVar1[lVar12] = psVar1[lVar12] - *(short *)((longlong)&sStack_9a + lVar12 * 2 + lVar4);
  }
  *psVar1 = *psVar1 - *(short *)(lVar14 + 0x38);
  lVar10 = local_78;
  lVar12 = local_80;
  *(short *)(lVar14 + 0x38) = sVar6;
  local_88 = lVar14 - (longlong)local_60;
  local_90._0_4_ = 0;
  uVar9 = uVar16;
  uVar18 = uVar16;
  lVar14 = local_88;
  do {
    local_98 = 0;
    iVar23 = 4 - (int)uVar18;
    iVar19 = 3;
    if (iVar23 < 3) {
      iVar19 = iVar23;
    }
    iVar23 = (*(int *)(param_1 + 0x11e8) >> ((byte)iVar19 & 0x1f)) >> 2;
    piVar17 = (int *)((longlong)local_60 + uVar9);
    iVar19 = *(int *)(lVar14 + 0x18 + (longlong)piVar17);
    *(int *)((longlong)local_70 + uVar9) = iVar19;
    uVar18 = uVar16;
    uVar22 = uVar16;
    do {
      local_94 = 0;
      auVar27 = ZEXT816(0);
      if (0 < iVar23 + -7) {
        pauVar20 = (undefined1 (*) [16])(psVar1 + (int)(*piVar17 + (uint)uVar18));
        uVar7 = (iVar23 - 8U >> 3) + 1;
        uVar13 = (ulonglong)uVar7;
        local_94 = uVar7 * 8;
        do {
          auVar25 = *pauVar20;
          pauVar20 = pauVar20 + 1;
          auVar25 = psraw(auVar25,3);
          auVar26 = pmaddwd(auVar25,auVar25);
          auVar25._0_4_ = auVar26._0_4_ + auVar27._0_4_;
          auVar25._4_4_ = auVar26._4_4_ + auVar27._4_4_;
          auVar25._8_4_ = auVar26._8_4_ + auVar27._8_4_;
          auVar25._12_4_ = auVar26._12_4_ + auVar27._12_4_;
          uVar13 = uVar13 - 1;
          auVar27 = auVar25;
        } while (uVar13 != 0);
      }
      auVar26._0_4_ = auVar27._8_4_ + auVar27._0_4_;
      auVar26._4_4_ = auVar27._12_4_ + auVar27._4_4_;
      iVar5 = auVar27._8_4_ * 2;
      auVar26._8_4_ = iVar5;
      iVar24 = auVar27._12_4_ * 2;
      auVar26._12_4_ = iVar24;
      auVar27 = pshuflw(auVar25,auVar26,0xe);
      auVar25._0_4_ = auVar27._0_4_ + auVar26._0_4_;
      auVar25._4_4_ = auVar27._4_4_ + auVar26._4_4_;
      auVar25._8_4_ = auVar27._8_4_ + iVar5;
      auVar25._12_4_ = auVar27._12_4_ + iVar24;
      uVar7 = (uint)uVar18;
      iVar24 = auVar25._0_4_;
      if ((longlong)local_94 < (longlong)iVar23) {
        psVar15 = psVar1 + (longlong)local_94 + (longlong)(int)local_98 + (longlong)*piVar17;
        lVar14 = (longlong)iVar23 - (longlong)local_94;
        do {
          sVar6 = *psVar15;
          psVar15 = psVar15 + 1;
          iVar24 = iVar24 + ((int)sVar6 >> 3) * ((int)sVar6 >> 3);
          lVar14 = lVar14 + -1;
          uVar7 = local_98;
        } while (lVar14 != 0);
      }
      iVar5 = iVar24;
      if (2 < (int)uVar22) {
        iVar5 = iVar24 >> 1;
      }
      iVar19 = iVar19 + iVar5;
      if (iVar19 < 0) {
        iVar19 = 0x7fffffff;
      }
      uVar18 = (ulonglong)(uVar7 + iVar23);
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar21;
      *(int *)((longlong)local_70 + uVar9) = iVar19;
      local_98 = uVar7 + iVar23;
    } while ((int)uVar21 < 4);
    uVar9 = uVar9 + 4;
    local_90._0_4_ = (uint)local_90 + 1;
    uVar18 = (ulonglong)(uint)local_90;
    *(int *)(local_88 + 0x18 + (longlong)piVar17) = iVar24;
    param_1 = local_78;
    lVar14 = local_88;
  } while ((int)(uint)local_90 < 4);
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f89567a;
  silk_VAD_GetNoiseLevels(local_70,lVar12);
  local_98 = 0;
  local_94 = 0;
  lVar12 = lVar12 - (longlong)local_70;
  local_88 = 4;
  local_90 = lVar12;
  uVar9 = uVar16;
  do {
    uVar7 = *(uint *)((longlong)local_70 + uVar9);
    iVar19 = *(int *)(&stack0xffffffffffffffcc + lVar12 + uVar9);
    uVar21 = uVar7 - iVar19;
    if ((int)uVar21 < 1) {
      *(undefined4 *)((longlong)local_50 + uVar9) = 0x100;
    }
    else {
      if ((uVar7 & 0xff800000) == 0) {
        iVar23 = (int)(uVar7 << 8) / (iVar19 + 1);
        uVar18 = (longlong)(int)(uVar7 << 8) % (longlong)(iVar19 + 1);
      }
      else {
        iVar19 = (iVar19 >> 8) + 1;
        iVar23 = (int)uVar7 / iVar19;
        uVar18 = (longlong)(int)uVar7 % (longlong)iVar19;
      }
      *(int *)((longlong)local_50 + uVar9) = iVar23;
      *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8956e5;
      sVar6 = silk_lin2log(iVar23,uVar18 & 0xffffffff);
      sVar6 = sVar6 + -0x400;
      local_98 = local_98 + (int)sVar6 * (int)sVar6;
      if ((int)uVar21 < 0x100000) {
        iVar19 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> iVar19 == 0; iVar19 = iVar19 + -1) {
          }
        }
        uVar7 = 0x1f - iVar19;
        iVar19 = 0x18 - uVar7;
        if (iVar19 != 0) {
          if (iVar19 < 0) {
            bVar3 = -(byte)iVar19 & 0x1f;
            uVar21 = uVar21 << bVar3 | uVar21 >> 0x20 - bVar3;
          }
          else {
            bVar3 = (byte)iVar19 & 0x1f;
            uVar21 = uVar21 >> bVar3 | uVar21 << 0x20 - bVar3;
          }
        }
        iVar19 = (int)((-(uint)((uVar7 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
                 ((byte)((int)uVar7 >> 1) & 0x1f);
        sVar6 = (short)((ulonglong)
                        ((longlong)sVar6 *
                        (longlong)
                        (((int)((ulonglong)(uVar21 & 0x7f) * (longlong)iVar19 * 0xd5 >> 0x10) +
                         iVar19) * 0x40)) >> 0x10);
      }
      local_94 = local_94 +
                 (int)((ulonglong)
                       ((longlong)*(int *)((longlong)&DAT_15351aa38 + uVar9) * (longlong)sVar6) >>
                      0x10);
    }
    uVar9 = uVar9 + 4;
    local_88 = local_88 + -1;
  } while (local_88 != 0);
  uVar7 = (int)(local_98 + ((int)local_98 >> 0x1f & 3U)) >> 2;
  if ((int)uVar7 < 1) {
    sVar6 = 0;
  }
  else {
    iVar19 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar19 == 0; iVar19 = iVar19 + -1) {
      }
    }
    uVar21 = 0x1f - iVar19;
    iVar19 = 0x18 - uVar21;
    if (iVar19 != 0) {
      if (iVar19 < 0) {
        bVar3 = -(byte)iVar19 & 0x1f;
        uVar7 = uVar7 << bVar3 | uVar7 >> 0x20 - bVar3;
      }
      else {
        bVar3 = (byte)iVar19 & 0x1f;
        uVar7 = uVar7 >> bVar3 | uVar7 << 0x20 - bVar3;
      }
    }
    iVar19 = (int)((-(uint)((uVar21 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
             ((byte)((int)uVar21 >> 1) & 0x1f);
    sVar6 = (short)((ulonglong)(uVar7 & 0x7f) * (longlong)iVar19 * 0xd5 >> 0x10) + (short)iVar19;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f895836;
  iVar23 = silk_sigm_Q15((int)((ulonglong)((longlong)(short)(sVar6 * 3) * 45000) >> 0x10) + -0x80);
  iVar19 = local_94;
  uVar18 = (ulonglong)iVar23;
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f895841;
  iVar19 = silk_sigm_Q15(iVar19);
  lVar14 = local_80;
  iVar24 = 1;
  *(int *)(lVar10 + 0x1278) = iVar19 * 2 + -0x8000;
  uVar9 = uVar16;
  do {
    puVar2 = local_70 + uVar9;
    lVar12 = uVar9 * 4;
    uVar9 = uVar9 + 1;
    iVar19 = ((int)(*puVar2 - *(int *)(&stack0xffffffffffffffcc + local_90 + lVar12)) >> 4) * iVar24
    ;
    iVar24 = iVar24 + 1;
    uVar7 = (int)uVar16 + iVar19;
    uVar16 = (ulonglong)uVar7;
  } while ((longlong)uVar9 < 4);
  if ((int)uVar7 < 1) {
    uVar18 = (ulonglong)(uint)(iVar23 >> 1);
  }
  else if ((int)uVar7 < 0x8000) {
    if (*(int *)(lVar10 + 0x11e8) == *(int *)(lVar10 + 0x11e0) * 10) {
      uVar21 = uVar7;
      if ((int)uVar7 < -0x8000) {
        uVar21 = 0xffff8000;
      }
      if (0x7fff < (int)uVar7) {
        uVar21 = 0x7fff;
      }
      uVar21 = uVar21 << 0x10;
    }
    else {
      uVar21 = uVar7;
      if ((int)uVar7 < -0x10000) {
        uVar21 = 0xffff0000;
      }
      if (0xffff < (int)uVar7) {
        uVar21 = 0xffff;
      }
      uVar21 = uVar21 << 0xf;
    }
    if (0 < (int)uVar21) {
      iVar19 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      uVar7 = 0x1f - iVar19;
      iVar19 = 0x18 - uVar7;
      if (iVar19 != 0) {
        if (iVar19 < 0) {
          bVar3 = -(byte)iVar19 & 0x1f;
          uVar21 = uVar21 << bVar3 | uVar21 >> 0x20 - bVar3;
        }
        else {
          bVar3 = (byte)iVar19 & 0x1f;
          uVar21 = uVar21 >> bVar3 | uVar21 << 0x20 - bVar3;
        }
      }
      iVar11 = (int)((-(uint)((uVar7 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
               ((byte)((int)uVar7 >> 1) & 0x1f);
      iVar11 = (int)((ulonglong)(uVar21 & 0x7f) * (longlong)iVar11 * 0xd5 >> 0x10) + iVar11;
    }
    uVar18 = (longlong)(short)iVar23 * (longlong)(iVar11 + 0x8000) >> 0x10;
  }
  iVar11 = (int)uVar18 >> 7;
  iVar19 = 0xff;
  if (iVar11 < 0xff) {
    iVar19 = iVar11;
  }
  *(int *)(lVar10 + 0x11b4) = iVar19;
  lVar12 = (longlong)(short)((longlong)(short)uVar18 * (uVar18 & 0xffffffff) >> 0x10) << 0xc;
  sVar6 = (short)((ulonglong)lVar12 >> 0x10);
  if (*(int *)(lVar10 + 0x11e8) == *(int *)(lVar10 + 0x11e0) * 10) {
    sVar6 = (short)((int)((ulonglong)lVar12 >> 0x10) >> 1);
  }
  lVar10 = lVar10 - local_80;
  lVar12 = 4;
  piVar17 = (int *)(local_80 + 0x28);
  do {
    *piVar17 = (int)((ulonglong)
                     ((longlong)
                      (*(int *)((longlong)local_70 + (-8 - lVar14) + (longlong)piVar17) - *piVar17)
                     * (longlong)sVar6) >> 0x10) + *piVar17;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8959d7;
    iVar19 = silk_lin2log();
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8959ed;
    uVar8 = silk_sigm_Q15(iVar19 * 3 + -0x1400 >> 4);
    *(undefined4 *)(lVar10 + 0x1240 + (longlong)piVar17) = uVar8;
    piVar17 = piVar17 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f895a0c;
  return 0;
}

