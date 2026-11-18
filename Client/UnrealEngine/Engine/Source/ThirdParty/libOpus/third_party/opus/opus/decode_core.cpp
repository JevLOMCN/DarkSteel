// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_decode_core @ 14f88b2a4

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_decode_core(uint *param_1,uint *param_2,undefined2 *param_3,short *param_4,
                     undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint *puVar30;
  int iVar31;
  uint *_Src;
  longlong lVar32;
  longlong lVar33;
  uint *puVar34;
  char cVar35;
  undefined2 *puVar36;
  undefined8 auStack_110 [5];
  uint auStack_e8 [4];
  uint local_d8 [2];
  uint *local_d0;
  longlong local_c8;
  int local_c0 [2];
  uint *local_b8;
  longlong local_b0;
  uint *local_a8;
  int local_a0 [2];
  longlong local_98;
  uint *puStack_90;
  undefined8 *local_88;
  undefined2 *puStack_80;
  longlong local_78;
  uint *puStack_70;
  undefined2 *local_68;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short local_58;
  short sStack_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)local_d8;
  local_68 = param_3;
  uVar19 = (longlong)(int)param_1[0x248] * 2;
  local_d0 = param_2;
  uVar18 = uVar19 + 0xf;
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x14f88b314;
  uVar13 = param_1[0x246];
  lVar9 = -(uVar18 & 0xfffffffffffffff0);
  local_78 = (longlong)local_d8 + lVar9;
  uVar19 = (longlong)(int)(uVar13 + param_1[0x248]) * 4;
  uVar18 = uVar19 + 0xf;
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar9) = 0x14f88b347;
  uVar29 = param_1[0x247];
  lVar10 = -(uVar18 & 0xfffffffffffffff0);
  local_98 = (longlong)local_d8 + lVar10 + lVar9;
  uVar19 = (longlong)(int)uVar29 * 4;
  uVar18 = uVar19 + 0xf;
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar10 + lVar9) = 0x14f88b379;
  lVar11 = -(uVar18 & 0xfffffffffffffff0);
  lVar6 = (longlong)(int)uVar29 * 4;
  uVar18 = lVar6 + 0x4f;
  puVar30 = (uint *)((longlong)local_d8 + lVar11 + lVar10 + lVar9);
  puStack_70 = puVar30;
  if (uVar18 <= lVar6 + 0x40U) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar11 + lVar10 + lVar9) = 0x14f88b3a5;
  lVar6 = -(uVar18 & 0xfffffffffffffff0);
  iVar28 = 0;
  puVar24 = (undefined8 *)((longlong)local_d8 + lVar6 + lVar11 + lVar10 + lVar9);
  local_88 = puVar24;
  sVar7 = *(short *)(&silk_Quantization_Offsets_Q10 +
                    ((longlong)*(char *)((longlong)param_1 + 0xae6) +
                    ((longlong)*(char *)((longlong)param_1 + 0xae5) >> 1) * 2) * 2);
  iVar16 = (int)*(char *)((longlong)param_1 + 0xaea);
  local_d8[0]._0_1_ = *(char *)((longlong)param_1 + 0xae7);
  puVar34 = param_1;
  if (0 < (int)uVar13) {
    do {
      puVar34 = puVar34 + 1;
      sVar8 = *param_4;
      uVar13 = sVar8 * 0x4000;
      *puVar34 = uVar13;
      iVar16 = iVar16 * 0xbb38435 + 0x3619636b;
      iVar27 = (int)sVar8 << 0xe;
      if (iVar27 < 1) {
        if (iVar27 < 0) {
          uVar13 = uVar13 + 0x500;
        }
      }
      else {
        uVar13 = uVar13 - 0x500;
      }
      uVar13 = uVar13 + sVar7 * 0x10;
      *puVar34 = uVar13;
      if (iVar16 < 0) {
        *puVar34 = -uVar13;
      }
      iVar28 = iVar28 + 1;
      iVar16 = iVar16 + *param_4;
      param_4 = param_4 + 1;
    } while (iVar28 < (int)param_1[0x246]);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x143);
  iVar16 = 0;
  puStack_80 = param_3;
  local_c0[0] = 0;
  *puVar24 = *(undefined8 *)(param_1 + 0x141);
  *(undefined8 *)((longlong)&local_d0 + lVar6 + lVar11 + lVar10 + lVar9) = uVar12;
  local_b8 = param_1 + 1;
  uVar12 = *(undefined8 *)(param_1 + 0x147);
  *(undefined8 *)((longlong)local_c0 + lVar6 + lVar11 + lVar10 + lVar9 + -8) =
       *(undefined8 *)(param_1 + 0x145);
  *(undefined8 *)((longlong)local_c0 + lVar6 + lVar11 + lVar10 + lVar9) = uVar12;
  uVar12 = *(undefined8 *)(param_1 + 0x14b);
  *(undefined8 *)((longlong)&local_b8 + lVar6 + lVar11 + lVar10 + lVar9) =
       *(undefined8 *)(param_1 + 0x149);
  *(undefined8 *)((longlong)&local_b0 + lVar6 + lVar11 + lVar10 + lVar9) = uVar12;
  uVar12 = *(undefined8 *)(param_1 + 0x14f);
  *(undefined8 *)((longlong)local_a0 + lVar6 + lVar11 + lVar10 + lVar9 + -8) =
       *(undefined8 *)(param_1 + 0x14d);
  *(undefined8 *)((longlong)local_a0 + lVar6 + lVar11 + lVar10 + lVar9) = uVar12;
  if (0 < (int)param_1[0x245]) {
    local_d8[1] = param_1[0x248];
    local_c8 = (longlong)(int)local_d8[1];
    local_b0 = 0;
    puVar34 = param_2;
    local_a8 = param_2;
    do {
      uVar13 = param_1[0x249];
      _Src = puVar34 + (((longlong)iVar16 >> 1) + 1) * 8;
      puStack_90 = puVar30;
      *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x14f88b4d3;
      memcpy(&sStack_60,_Src,(longlong)(int)uVar13 * 2);
      uVar13 = param_2[4];
      cVar35 = *(char *)((longlong)param_1 + 0xae5);
      local_a0[0] = (int)uVar13 >> 6;
      uVar29 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
      if (uVar29 == 0) {
        iVar28 = 0x1f;
      }
      else {
        iVar28 = 0x1f;
        if (uVar29 != 0) {
          for (; uVar29 >> iVar28 == 0; iVar28 = iVar28 + -1) {
          }
        }
        iVar28 = 0x1e - iVar28;
      }
      iVar25 = uVar13 << ((byte)iVar28 & 0x1f);
      lVar22 = 0x1fffffff / (longlong)(iVar25 >> 0x10);
      iVar27 = (int)lVar22;
      iVar28 = 0xe - iVar28;
      iVar27 = (int)((ulonglong)
                     ((longlong)
                      ((int)((ulonglong)((longlong)(short)lVar22 * (longlong)iVar25) >> 0x10) * -8)
                     * (longlong)iVar27) >> 0x10) + iVar27 * 0x10000;
      if (iVar28 < 1) {
        bVar15 = -(byte)iVar28;
        iVar26 = -0x80000000 >> (bVar15 & 0x1f);
        iVar21 = 0x7fffffff >> (bVar15 & 0x1f);
        iVar25 = iVar27;
        if (iVar27 < iVar21) {
          iVar25 = iVar21;
        }
        iVar28 = iVar27;
        if (iVar27 < iVar26) {
          iVar28 = iVar26;
        }
        if (iVar26 < iVar27) {
          iVar25 = iVar26;
        }
        if (iVar21 < iVar27) {
          iVar28 = iVar21;
        }
        if (iVar21 < iVar26) {
          iVar28 = iVar25;
        }
        iVar28 = iVar28 << (bVar15 & 0x1f);
      }
      else if (iVar28 < 0x20) {
        iVar28 = iVar27 >> ((byte)iVar28 & 0x1f);
      }
      else {
        iVar28 = 0;
      }
      uVar17 = *param_1;
      if (uVar13 == uVar17) {
        iVar27 = 0x10000;
      }
      else {
        uVar14 = (uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f);
        if (uVar14 == 0) {
          iVar27 = 0x1f;
        }
        else {
          iVar27 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar27 == 0; iVar27 = iVar27 + -1) {
            }
          }
          iVar27 = 0x1e - iVar27;
        }
        iVar25 = uVar17 << ((byte)iVar27 & 0x1f);
        if (uVar29 == 0) {
          iVar21 = 0x1f;
        }
        else {
          iVar21 = 0x1f;
          if (uVar29 != 0) {
            for (; uVar29 >> iVar21 == 0; iVar21 = iVar21 + -1) {
            }
          }
          iVar21 = 0x1e - iVar21;
        }
        iVar31 = uVar13 << ((byte)iVar21 & 0x1f);
        lVar22 = (longlong)(short)(0x1fffffff / (longlong)(iVar31 >> 0x10));
        iVar26 = (int)((ulonglong)(iVar25 * lVar22) >> 0x10);
        iVar27 = (iVar27 - iVar21) + 0xd;
        iVar26 = iVar26 + (int)((ulonglong)
                                ((iVar25 + (int)((ulonglong)((longlong)iVar26 * (longlong)iVar31) >>
                                                0x20) * -8) * lVar22) >> 0x10);
        if (iVar27 < 0) {
          bVar15 = -(byte)iVar27;
          iVar31 = -0x80000000 >> (bVar15 & 0x1f);
          iVar21 = 0x7fffffff >> (bVar15 & 0x1f);
          iVar25 = iVar26;
          if (iVar26 < iVar21) {
            iVar25 = iVar21;
          }
          iVar27 = iVar26;
          if (iVar26 < iVar31) {
            iVar27 = iVar31;
          }
          if (iVar31 < iVar26) {
            iVar25 = iVar31;
          }
          if (iVar21 < iVar26) {
            iVar27 = iVar21;
          }
          if (iVar21 < iVar31) {
            iVar27 = iVar25;
          }
          iVar27 = iVar27 << (bVar15 & 0x1f);
        }
        else if (iVar27 < 0x20) {
          iVar27 = iVar26 >> ((byte)iVar27 & 0x1f);
        }
        else {
          iVar27 = 0;
        }
        lVar22 = 0;
        do {
          *(int *)((longlong)puVar24 + lVar22 * 4) =
               (int)((ulonglong)
                     ((longlong)*(int *)((longlong)puVar24 + lVar22 * 4) * (longlong)iVar27) >> 0x10
                    );
          lVar22 = lVar22 + 1;
        } while (lVar22 < 0x10);
        uVar13 = local_a8[4];
        puVar34 = local_d0;
      }
      *param_1 = uVar13;
      if ((((param_1[0x416] != 0) && (param_1[0x417] == 2)) &&
          (*(char *)((longlong)param_1 + 0xae5) != '\x02')) && (iVar16 < 2)) {
        cVar35 = '\x02';
        *(undefined8 *)((longlong)puVar34 + local_b0 + 0x60) = 0;
        *(undefined2 *)((longlong)puVar34 + local_b0 + 0x68) = 0;
        *(undefined2 *)((longlong)puVar34 + local_b0 + 100) = 0x1000;
        *local_a8 = param_1[0x241];
      }
      if (cVar35 == '\x02') {
        uVar29 = *local_a8;
        if ((iVar16 == 0) || ((iVar16 == 2 && ((char)local_d8[0] < '\x04')))) {
          uVar13 = param_1[0x248];
          iVar27 = ((uVar13 - uVar29) - param_1[0x249]) + -2;
          if (iVar27 < 1) {
            *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x14f88b880;
            celt_fatal("assertion failed: start_idx > 0",
                       "../../../third_party/opus/src/silk/decode_core.c",0x90);
            uVar13 = param_1[0x248];
          }
          puVar36 = local_68;
          if (iVar16 == 2) {
            uVar17 = param_1[0x247];
            *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x14f88b8b1;
            memcpy((void *)((longlong)param_1 + ((longlong)(int)uVar13 + 0x2a2) * 2),puVar36,
                   (longlong)(int)(uVar17 * 2) * 2);
          }
          uVar13 = param_1[0x247];
          lVar22 = local_78 + (longlong)iVar27 * 2;
          *(undefined4 *)((longlong)auStack_e8 + lVar6 + lVar11 + lVar10 + lVar9 + 8) = param_5;
          *(uint *)((longlong)auStack_e8 + lVar6 + lVar11 + lVar10 + lVar9) = param_1[0x249];
          *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x14f88b8fb;
          silk_LPC_analysis_filter
                    (lVar22,(longlong)param_1 +
                            ((longlong)(int)(uVar13 * iVar16 + iVar27) + 0x2a2) * 2,_Src);
          if (iVar16 == 0) {
            iVar28 = (int)((ulonglong)((longlong)iVar28 * (longlong)(short)local_d0[0x22]) >> 0x10)
                     << 2;
          }
          iVar27 = 0;
          lVar22 = (longlong)(int)(uVar29 + 2);
          if (0 < (int)(uVar29 + 2)) {
            puVar23 = (undefined4 *)(local_98 + (local_c8 + -1) * 4);
            do {
              iVar25 = param_1[0x248] - iVar27;
              iVar27 = iVar27 + 1;
              *puVar23 = (int)((ulonglong)
                               ((longlong)*(short *)(local_78 + -2 + (longlong)iVar25 * 2) *
                               (longlong)iVar28) >> 0x10);
              puVar23 = puVar23 + -1;
              lVar22 = lVar22 + -1;
              puVar24 = local_88;
            } while (lVar22 != 0);
          }
        }
        else if ((iVar27 != 0x10000) &&
                (lVar22 = (longlong)(int)(uVar29 + 2), 0 < (int)(uVar29 + 2))) {
          piVar20 = (int *)(local_98 + (local_c8 + -1) * 4);
          do {
            *piVar20 = (int)((ulonglong)((longlong)*piVar20 * (longlong)iVar27) >> 0x10);
            piVar20 = piVar20 + -1;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        iVar28 = 0;
        uVar13 = param_1[0x247];
        piVar20 = (int *)(local_98 + ((longlong)(int)(local_d8[1] - uVar29) + 2) * 4);
        if (0 < (int)uVar13) {
          puVar30 = puStack_70;
          do {
            piVar1 = piVar20 + -4;
            local_d8[1] = local_d8[1] + 1;
            iVar28 = iVar28 + 1;
            piVar2 = piVar20 + -3;
            piVar3 = piVar20 + -2;
            piVar4 = piVar20 + -1;
            iVar27 = *piVar20;
            piVar20 = piVar20 + 1;
            uVar13 = *(int *)(((longlong)local_b8 - (longlong)puStack_70) + (longlong)puVar30) +
                     ((int)((ulonglong)
                            ((longlong)*(short *)((longlong)local_d0 + local_b0 + 0x60) *
                            (longlong)iVar27) >> 0x10) + 2 +
                     (int)((ulonglong)
                           ((longlong)*piVar1 *
                           (longlong)*(short *)((longlong)local_d0 + local_b0 + 0x68)) >> 0x10) +
                     (int)((ulonglong)
                           ((longlong)*piVar2 *
                           (longlong)*(short *)((longlong)local_d0 + local_b0 + 0x66)) >> 0x10) +
                     (int)((ulonglong)
                           ((longlong)*piVar3 *
                           (longlong)*(short *)((longlong)local_d0 + local_b0 + 100)) >> 0x10) +
                     (int)((ulonglong)
                           ((longlong)*piVar4 *
                           (longlong)*(short *)((longlong)local_d0 + local_b0 + 0x62)) >> 0x10)) * 2
            ;
            *puVar30 = uVar13;
            *(uint *)(local_98 + local_c8 * 4) = uVar13 * 2;
            puVar30 = puVar30 + 1;
            uVar13 = param_1[0x247];
            local_c8 = local_c8 + 1;
          } while (iVar28 < (int)uVar13);
          puVar24 = local_88;
        }
      }
      else {
        uVar13 = param_1[0x247];
        puStack_90 = local_b8;
      }
      iVar28 = 0;
      if (0 < (int)uVar13) {
        lVar32 = (longlong)local_a0[0];
        piVar20 = (int *)(puVar24 + 7);
        puVar30 = (uint *)((longlong)puStack_90 - (longlong)puVar24);
        lVar22 = (longlong)sStack_60;
        lVar33 = (longlong)sStack_5e;
        puStack_90 = puVar30;
        puVar36 = puStack_80;
        do {
          uVar13 = param_1[0x249];
          if ((uVar13 != 10) && (uVar13 != 0x10)) {
            *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x14f88b9d2;
            celt_fatal("assertion failed: psDec->LPC_order == 10 || psDec->LPC_order == 16",
                       "../../../third_party/opus/src/silk/decode_core.c",199);
            uVar13 = param_1[0x249];
            puVar30 = puStack_90;
          }
          uVar29 = (int)((ulonglong)((longlong)piVar20[-8] * (longlong)local_4e) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-7] * (longlong)local_50) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-6] * (longlong)local_52) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-5] * (longlong)local_54) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-4] * (longlong)sStack_56) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-3] * (longlong)local_58) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-2] * (longlong)sStack_5a) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar20[-1] * (longlong)sStack_5c) >> 0x10) +
                   (int)((ulonglong)(piVar20[1] * lVar22) >> 0x10) +
                   (int)((ulonglong)(*piVar20 * lVar33) >> 0x10) + ((int)uVar13 >> 1);
          if (uVar13 == 0x10) {
            uVar29 = (int)((ulonglong)((longlong)piVar20[-0xc] * (longlong)local_46) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar20[-0xe] * (longlong)local_42) >> 0x10) +
                     uVar29 + (int)((ulonglong)((longlong)piVar20[-0xd] * (longlong)local_44) >>
                                   0x10) +
                     (int)((ulonglong)((longlong)piVar20[-0xb] * (longlong)local_48) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar20[-10] * (longlong)local_4a) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar20[-9] * (longlong)local_4c) >> 0x10);
          }
          uVar13 = *(uint *)((longlong)puVar30 + -0x38 + (longlong)piVar20);
          uVar17 = uVar29;
          if ((int)uVar29 < -0x8000000) {
            uVar17 = 0xf8000000;
          }
          if (0x7ffffff < (int)uVar29) {
            uVar17 = 0x7ffffff;
          }
          if ((int)(uVar17 * 0x10 + uVar13) < 0) {
            if ((int)(uVar13 | uVar17 << 4) < 0) goto LAB_14f88bb84;
            iVar16 = 0x7fffffff;
          }
          else if ((uVar13 & (uVar17 & 0xf8000000) << 4) == 0) {
LAB_14f88bb84:
            iVar16 = uVar17 * 0x10 + uVar13;
          }
          else {
            iVar16 = -0x80000000;
          }
          piVar20[2] = iVar16;
          iVar27 = ((int)((ulonglong)(iVar16 * lVar32) >> 0x10) >> 7) + 1 >> 1;
          iVar16 = 0x7fff;
          if ((iVar27 < 0x8000) && (iVar16 = iVar27, iVar27 < -0x8000)) {
            iVar16 = -0x8000;
          }
          *puVar36 = (short)iVar16;
          iVar28 = iVar28 + 1;
          uVar13 = param_1[0x247];
          puVar36 = puVar36 + 1;
          piVar20 = piVar20 + 1;
          puVar24 = local_88;
          iVar16 = local_c0[0];
        } while (iVar28 < (int)uVar13);
      }
      puVar30 = puStack_70;
      puVar34 = local_d0;
      iVar16 = iVar16 + 1;
      local_b0 = local_b0 + 10;
      param_2 = local_a8 + 1;
      lVar22 = (longlong)(int)uVar13;
      local_c0[0] = iVar16;
      local_a8 = param_2;
      puVar5 = (undefined8 *)((longlong)puVar24 + lVar22 * 4);
      uVar12 = puVar5[1];
      *puVar24 = *puVar5;
      puVar24[1] = uVar12;
      puVar5 = (undefined8 *)((longlong)puVar24 + lVar22 * 4 + 0x10);
      uVar12 = puVar5[1];
      puVar24[2] = *puVar5;
      puVar24[3] = uVar12;
      puVar5 = (undefined8 *)((longlong)puVar24 + lVar22 * 4 + 0x20);
      uVar12 = puVar5[1];
      puVar24[4] = *puVar5;
      puVar24[5] = uVar12;
      puVar5 = (undefined8 *)((longlong)puVar24 + lVar22 * 4 + 0x30);
      uVar12 = puVar5[1];
      puVar24[6] = *puVar5;
      puVar24[7] = uVar12;
      local_b8 = local_b8 + (int)param_1[0x247];
      puStack_80 = puStack_80 + (int)param_1[0x247];
    } while (iVar16 < (int)param_1[0x245]);
  }
  uVar12 = puVar24[1];
  *(undefined8 *)(param_1 + 0x141) = *puVar24;
  *(undefined8 *)(param_1 + 0x143) = uVar12;
  uVar12 = puVar24[3];
  *(undefined8 *)(param_1 + 0x145) = puVar24[2];
  *(undefined8 *)(param_1 + 0x147) = uVar12;
  uVar12 = puVar24[5];
  *(undefined8 *)(param_1 + 0x149) = puVar24[4];
  *(undefined8 *)(param_1 + 0x14b) = uVar12;
  uVar12 = puVar24[7];
  *(undefined8 *)(param_1 + 0x14d) = puVar24[6];
  *(undefined8 *)(param_1 + 0x14f) = uVar12;
  *(undefined8 *)((longlong)auStack_110 + lVar6 + lVar11 + lVar10 + lVar9) = 0x14f88bc92;
  return;
}

