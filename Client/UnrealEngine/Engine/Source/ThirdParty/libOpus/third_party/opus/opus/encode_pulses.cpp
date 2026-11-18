// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_encode_pulses @ 14f87f850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_encode_pulses(undefined8 param_1,int param_2,undefined4 param_3,longlong param_4,
                       int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  undefined *puVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  int *piVar21;
  byte *pbVar22;
  uint uVar23;
  longlong lVar24;
  undefined8 uVar25;
  longlong lVar26;
  undefined8 auStack_f0 [5];
  undefined4 auStack_c8 [2];
  undefined8 uStack_c0;
  int *local_b8;
  int local_b0 [4];
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  int *local_80;
  int local_78 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)&local_b8;
  lVar26 = 0;
  local_b0[2] = param_5;
  auStack_f0[0] = 0x14f87f8a5;
  local_b0[0] = param_2;
  local_b0[1] = param_3;
  local_a0 = param_1;
  local_90 = param_4;
  memset(local_78,0,0x20);
  iVar15 = param_5 >> 4;
  if (iVar15 << 4 < param_5) {
    if (param_5 != 0x78) {
      auStack_f0[0] = 0x14f87f8d3;
      celt_fatal("assertion failed: frame_length == 12 * 10",
                 "../../../third_party/opus/src/silk/encode_pulses.c",0x59);
    }
    iVar15 = iVar15 + 1;
    *(undefined8 *)(param_5 + param_4) = 0;
    *(undefined8 *)((longlong)param_5 + 8 + param_4) = 0;
  }
  lVar18 = (longlong)(iVar15 << 4);
  uVar12 = lVar18 * 4 + 0xf;
  if (uVar12 <= (ulonglong)(lVar18 * 4)) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_f0[0] = 0x14f87f912;
  lVar4 = -(uVar12 & 0xfffffffffffffff0);
  lVar24 = (longlong)&local_b8 + lVar4;
  local_88 = lVar24;
  if (0 < lVar18) {
    lVar20 = 0;
    piVar8 = (int *)((longlong)local_b0 + lVar4);
    do {
      iVar9 = (int)*(char *)(lVar20 + param_4);
      if (*(char *)(lVar20 + param_4) < '\x01') {
        iVar9 = -(int)*(char *)(lVar20 + param_4);
      }
      piVar8[-2] = iVar9;
      cVar14 = *(char *)(param_4 + 1 + lVar20);
      iVar9 = (int)cVar14;
      if (cVar14 < '\x01') {
        iVar9 = -(int)cVar14;
      }
      piVar8[-1] = iVar9;
      cVar14 = *(char *)(param_4 + 2 + lVar20);
      iVar9 = (int)cVar14;
      if (cVar14 < '\x01') {
        iVar9 = -(int)cVar14;
      }
      *piVar8 = iVar9;
      cVar14 = *(char *)(param_4 + 3 + lVar20);
      iVar9 = (int)cVar14;
      if (cVar14 < '\x01') {
        iVar9 = -(int)cVar14;
      }
      lVar20 = lVar20 + 4;
      piVar8[1] = iVar9;
      piVar8 = piVar8 + 4;
    } while (lVar20 < lVar18);
  }
  lVar18 = (longlong)iVar15;
  local_98 = lVar18;
  uVar13 = lVar18 * 4;
  uVar12 = uVar13 + 0xf;
  if (uVar12 <= uVar13) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar4) = 0x14f87f9ac;
  lVar20 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = uVar13 + 0xf;
  piVar8 = (int *)((longlong)&local_b8 + lVar20 + lVar4);
  local_b8 = piVar8;
  if (uVar12 <= uVar13) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar20 + lVar4) = 0x14f87f9cd;
  lVar5 = -(uVar12 & 0xfffffffffffffff0);
  piVar2 = (int *)((longlong)&local_b8 + lVar5 + lVar20 + lVar4);
  local_80 = piVar2;
  if (iVar15 < 1) {
LAB_14f87fafd:
    uVar25 = local_a0;
    puVar17 = &silk_pulses_per_block_BITS_Q5;
    iVar15 = 0;
    uVar23 = 0x7fffffff;
    lVar24 = ((longlong)local_b0[0] >> 1) * 9;
    pbVar22 = &silk_rate_levels_BITS_Q5 + lVar24;
    do {
      uVar11 = (uint)*pbVar22;
      if (0 < lVar18) {
        piVar8 = local_b8;
        lVar16 = lVar18;
        do {
          lVar7 = 0x11;
          if (*(int *)(((longlong)piVar2 - (longlong)local_b8) + (longlong)piVar8) < 1) {
            lVar7 = (longlong)*piVar8;
          }
          piVar8 = piVar8 + 1;
          uVar11 = uVar11 + (byte)puVar17[lVar7];
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      iVar9 = iVar15;
      if ((int)uVar23 <= (int)uVar11) {
        iVar9 = (int)lVar26;
      }
      puVar17 = puVar17 + 0x12;
      lVar26 = (longlong)iVar9;
      iVar15 = iVar15 + 1;
      pbVar22 = pbVar22 + 1;
      if ((int)uVar23 <= (int)uVar11) {
        uVar11 = uVar23;
      }
      uVar23 = uVar11;
    } while (iVar15 < 9);
    *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fbb1;
    ec_enc_icdf(uVar25,iVar9,&silk_rate_levels_iCDF + lVar24,8);
    piVar8 = piVar2;
    piVar21 = local_b8;
    if (0 < lVar18) {
      do {
        puVar17 = &silk_pulses_per_block_iCDF + lVar26 * 0x12;
        if (*piVar8 != 0) {
          *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fbed;
          ec_enc_icdf(uVar25,0x11,&silk_pulses_per_block_iCDF + lVar26 * 0x12);
          iVar15 = 0;
          if (0 < *piVar8 + -1) {
            do {
              *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fc14;
              ec_enc_icdf(uVar25,0x11,&DAT_153516d62);
              iVar15 = iVar15 + 1;
              piVar21 = local_b8;
            } while (iVar15 < *piVar8 + -1);
          }
          puVar17 = &DAT_153516d62;
        }
        uVar3 = *(undefined4 *)(((longlong)piVar8 - (longlong)piVar2) + (longlong)piVar21);
        *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fc43;
        ec_enc_icdf(uVar25,uVar3,puVar17,8);
        lVar16 = local_88;
        lVar24 = local_98;
        lVar18 = lVar18 + -1;
        piVar8 = piVar8 + 1;
      } while (lVar18 != 0);
      lVar26 = 0;
      iVar15 = 0;
      piVar8 = local_b8;
      do {
        if (0 < piVar8[lVar26]) {
          *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fc72;
          silk_shell_encoder(uVar25,lVar16 + (longlong)iVar15 * 4);
          piVar8 = local_b8;
        }
        iVar15 = iVar15 + 0x10;
        lVar26 = lVar26 + 1;
      } while (lVar26 < lVar24);
      lVar18 = 0;
      lVar26 = local_90;
      do {
        uVar25 = local_a0;
        iVar15 = local_80[lVar18];
        if (0 < iVar15) {
          lVar16 = 0;
          do {
            cVar14 = *(char *)(lVar26 + lVar16);
            if (*(char *)(lVar26 + lVar16) < '\x01') {
              cVar14 = -*(char *)(lVar26 + lVar16);
            }
            iVar9 = iVar15;
            while (iVar9 = iVar9 + -1, 0 < iVar9) {
              *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fcda;
              ec_enc_icdf(uVar25,(int)cVar14 >> ((byte)iVar9 & 0x1f) & 1,&silk_lsb_iCDF,8);
            }
            *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fcfc;
            ec_enc_icdf(uVar25,(int)cVar14 & 1,&silk_lsb_iCDF,8);
            lVar16 = lVar16 + 1;
            lVar24 = local_98;
          } while (lVar16 < 0x10);
        }
        lVar18 = lVar18 + 1;
        lVar26 = lVar26 + 0x10;
        uVar25 = local_a0;
      } while (lVar18 < lVar24);
    }
    lVar26 = local_90;
    iVar9 = local_b0[2];
    iVar15 = local_b0[0];
    *(int **)((longlong)&uStack_c0 + lVar5 + lVar20 + lVar4) = local_b8;
    *(int *)((longlong)auStack_c8 + lVar5 + lVar20 + lVar4) = local_b0[1];
    *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fd41;
    silk_encode_signs(uVar25,lVar26,iVar9,iVar15);
    *(undefined8 *)((longlong)auStack_f0 + lVar5 + lVar20 + lVar4) = 0x14f87fd4d;
    return;
  }
  lVar16 = lVar18;
  piVar21 = piVar2;
LAB_14f87f9f6:
  *piVar21 = 0;
  do {
    lVar7 = 0;
    do {
      iVar10 = *(int *)(lVar24 + 4 + lVar7 * 8) + *(int *)(lVar24 + lVar7 * 8);
      iVar9 = 1;
      iVar15 = iVar9;
      if ((int)(uint)silk_max_pulses_table < iVar10) goto LAB_14f87fa27;
      local_78[lVar7] = iVar10;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 8);
    iVar15 = 0;
LAB_14f87fa27:
    lVar7 = 0;
    do {
      iVar10 = iVar9;
      if ((int)(uint)DAT_153516e55 < local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2])
      goto LAB_14f87fa52;
      local_78[lVar7] = local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2];
      lVar7 = lVar7 + 1;
    } while (lVar7 < 4);
    iVar10 = 0;
LAB_14f87fa52:
    lVar7 = 0;
    do {
      if ((int)(uint)DAT_153516e56 < local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2])
      goto LAB_14f87fa7f;
      local_78[lVar7] = local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2];
      lVar7 = lVar7 + 1;
    } while (lVar7 < 2);
    iVar9 = 0;
LAB_14f87fa7f:
    lVar7 = 0;
    piVar19 = (int *)(((longlong)piVar8 - (longlong)piVar2) + (longlong)piVar21);
    do {
      if ((int)(uint)DAT_153516e57 < local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2]) {
        iVar6 = 1;
        goto LAB_14f87fabf;
      }
      *piVar19 = local_78[lVar7 * 2 + 1] + local_78[lVar7 * 2];
      lVar7 = lVar7 + 1;
      piVar19 = piVar19 + 1;
    } while (lVar7 < 1);
    iVar6 = 0;
LAB_14f87fabf:
    if (iVar6 + iVar15 + iVar10 + iVar9 == 0) break;
    *piVar21 = *piVar21 + 1;
    lVar7 = 0;
    do {
      piVar19 = (int *)(lVar24 + lVar7 * 4);
      iVar15 = piVar19[1];
      iVar9 = piVar19[2];
      iVar10 = piVar19[3];
      piVar1 = (int *)(lVar24 + lVar7 * 4);
      *piVar1 = *piVar19 >> 1;
      piVar1[1] = iVar15 >> 1;
      piVar1[2] = iVar9 >> 1;
      piVar1[3] = iVar10 >> 1;
      lVar7 = lVar7 + 4;
    } while (lVar7 < 0x10);
  } while( true );
  lVar24 = lVar24 + 0x40;
  piVar21 = piVar21 + 1;
  lVar16 = lVar16 + -1;
  if (lVar16 == 0) goto LAB_14f87fafd;
  goto LAB_14f87f9f6;
}

