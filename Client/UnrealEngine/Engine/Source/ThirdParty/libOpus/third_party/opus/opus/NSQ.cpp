// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// silk_NSQ_c @ 14f88f518

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_NSQ_c(longlong param_1,void *param_2,longlong param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,longlong param_10
               ,longlong param_11,longlong param_12,int *param_13,undefined4 param_14,
               undefined4 param_15)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 auStack_140 [5];
  longlong lStack_118;
  longlong lStack_110;
  uint auStack_108 [2];
  longlong alStack_100 [2];
  int aiStack_f0 [22];
  char local_98 [4];
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  longlong local_80;
  void *local_78;
  char *local_70;
  longlong local_68;
  char *local_60;
  char *local_58;
  int *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)local_98;
  *(int *)((longlong)param_2 + 0x10f4) = (int)*(char *)(param_3 + 0x22);
  local_94 = *(int *)((longlong)param_2 + 0x10e8);
  cVar14 = *(char *)(param_3 + 0x1f);
  iVar9 = *(int *)(param_1 + 0x11f0);
  lVar12 = (longlong)(*(int *)(param_1 + 0x11e8) + iVar9);
  local_88 = (int)*(short *)(&silk_Quantization_Offsets_Q10 +
                            ((longlong)*(char *)(param_3 + 0x1e) +
                            ((longlong)*(char *)(param_3 + 0x1d) >> 1) * 2) * 2);
  uVar10 = lVar12 * 4;
  uVar11 = uVar10 + 0xf;
  if (uVar11 <= uVar10) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_140[0] = 0x14f88f5d9;
  lVar3 = -(uVar11 & 0xfffffffffffffff0);
  local_60 = local_98 + lVar3;
  uVar10 = lVar12 * 2;
  uVar11 = uVar10 + 0xf;
  if (uVar11 <= uVar10) {
    uVar11 = 0xffffffffffffff0;
  }
  local_98[0] = cVar14;
  local_80 = param_4;
  *(undefined8 *)((longlong)auStack_140 + lVar3) = 0x14f88f604;
  lVar12 = -(uVar11 & 0xfffffffffffffff0);
  local_70 = local_98 + lVar12 + lVar3;
  uVar10 = (longlong)*(int *)(param_1 + 0x11ec) * 4;
  uVar11 = uVar10 + 0xf;
  if (uVar11 <= uVar10) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_140 + lVar12 + lVar3) = 0x14f88f636;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  *(int *)((longlong)param_2 + 0x10f0) = iVar9;
  uVar16 = 0;
  local_58 = local_98 + lVar4 + lVar12 + lVar3;
  *(undefined4 *)((longlong)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
  local_78 = (void *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x11f0) * 2);
  iVar9 = *(int *)(param_1 + 0x11e4);
  if (0 < iVar9) {
    local_84 = (uint)(cVar14 == '\x04');
    local_8c = 0;
    local_90 = 0;
    local_48 = param_12 - (longlong)param_13;
    local_50 = param_13;
    do {
      local_68 = param_6 + (longlong)(int)(((int)uVar16 >> 1 | local_84) << 4) * 2;
      local_38 = param_7 + (longlong)local_90 * 2;
      local_40 = param_8 + (longlong)local_8c * 2;
      iVar9 = *(int *)((param_9 - (longlong)param_13) + (longlong)local_50);
      *(undefined4 *)((longlong)param_2 + 0x10fc) = 0;
      if (*(char *)(param_3 + 0x1d) == '\x02') {
        local_94 = *local_50;
        uVar8 = 3;
        if (cVar14 != '\x04') {
          uVar8 = 1;
        }
        if ((uVar16 & uVar8) == 0) {
          iVar15 = *(int *)(param_1 + 0x11f0);
          iVar13 = *(int *)(param_1 + 0x1220);
          iVar17 = ((iVar15 - iVar13) - local_94) + -2;
          if (iVar17 < 1) {
            *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x14f88f78b;
            celt_fatal("assertion failed: start_idx > 0","../../../third_party/opus/src/silk/NSQ.c",
                       0x92);
            iVar13 = *(int *)(param_1 + 0x1220);
            iVar15 = *(int *)(param_1 + 0x11f0);
          }
          iVar2 = *(int *)(param_1 + 0x11ec);
          pcVar1 = local_70 + (longlong)iVar17 * 2;
          *(undefined4 *)((longlong)&lStack_110 + lVar4 + lVar12 + lVar3) =
               *(undefined4 *)(param_1 + 0x13f4);
          *(int *)((longlong)&lStack_118 + lVar4 + lVar12 + lVar3) = iVar13;
          lVar5 = local_68;
          *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x14f88f7d2;
          silk_LPC_analysis_filter
                    (pcVar1,(void *)((longlong)param_2 +
                                    (longlong)(int)(iVar2 * uVar16 + iVar17) * 2),lVar5,
                     iVar15 - iVar17);
          *(undefined4 *)((longlong)param_2 + 0x10fc) = 1;
          *(undefined4 *)((longlong)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
        }
      }
      piVar7 = local_50;
      pcVar6 = local_58;
      lVar5 = local_80;
      *(int *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 8) = (int)*(char *)(param_3 + 0x1d);
      *(int **)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3) = param_13;
      *(longlong *)((longlong)alStack_100 + lVar4 + lVar12 + lVar3 + 8) = param_12;
      *(undefined4 *)((longlong)alStack_100 + lVar4 + lVar12 + lVar3) = param_15;
      pcVar1 = local_60;
      *(uint *)((longlong)auStack_108 + lVar4 + lVar12 + lVar3) = uVar16;
      *(char **)((longlong)&lStack_110 + lVar4 + lVar12 + lVar3) = pcVar1;
      *(char **)((longlong)&lStack_118 + lVar4 + lVar12 + lVar3) = local_70;
      *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x14f88f839;
      FUN_14f89011c(param_1,param_2,lVar5,pcVar6);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x50) =
           *(undefined4 *)(param_1 + 0x13f4);
      pcVar1 = local_58;
      cVar14 = *(char *)(param_3 + 0x1d);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x48) =
           *(undefined4 *)(param_1 + 0x1220);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x40) =
           *(undefined4 *)(param_1 + 0x121c);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x38) =
           *(undefined4 *)(param_1 + 0x11ec);
      *(int *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x30) = local_88;
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x28) = param_14;
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x20) =
           *(undefined4 *)(local_48 + (longlong)piVar7);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x18) =
           *(undefined4 *)((param_11 - (longlong)param_13) + (longlong)piVar7);
      *(undefined4 *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 0x10) =
           *(undefined4 *)((param_10 - (longlong)param_13) + (longlong)piVar7);
      iVar15 = local_94;
      *(int *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3 + 8) =
           (iVar9 >> 1) << 0x10 | iVar9 >> 2;
      *(int *)((longlong)aiStack_f0 + lVar4 + lVar12 + lVar3) = iVar15;
      *(longlong *)((longlong)alStack_100 + lVar4 + lVar12 + lVar3 + 8) = local_40;
      *(longlong *)((longlong)alStack_100 + lVar4 + lVar12 + lVar3) = local_38;
      *(longlong *)((longlong)auStack_108 + lVar4 + lVar12 + lVar3) = local_68;
      *(char **)((longlong)&lStack_110 + lVar4 + lVar12 + lVar3) = local_60;
      *(void **)((longlong)&lStack_118 + lVar4 + lVar12 + lVar3) = local_78;
      *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x14f88f8fb;
      silk_noise_shape_quantizer(param_2,(int)cVar14,pcVar1,param_5);
      local_50 = piVar7 + 1;
      param_5 = param_5 + *(int *)(param_1 + 0x11ec);
      local_90 = local_90 + 5;
      local_8c = local_8c + 0x18;
      lVar5 = (longlong)*(int *)(param_1 + 0x11ec) * 2;
      local_80 = local_80 + lVar5;
      local_78 = (void *)((longlong)local_78 + lVar5);
      uVar16 = uVar16 + 1;
      iVar9 = *(int *)(param_1 + 0x11e4);
      cVar14 = local_98[0];
    } while ((int)uVar16 < iVar9);
  }
  *(int *)((longlong)param_2 + 0x10e8) = param_13[(longlong)iVar9 + -1];
  iVar9 = *(int *)(param_1 + 0x11e8);
  iVar15 = *(int *)(param_1 + 0x11f0);
  *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x14f88f988;
  memmove(param_2,(void *)((longlong)param_2 + (longlong)iVar9 * 2),(longlong)iVar15 * 2);
  iVar9 = *(int *)(param_1 + 0x11e8);
  iVar15 = *(int *)(param_1 + 0x11f0);
  *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x14f88f9b0;
  memmove((void *)((longlong)param_2 + 0x500),
          (void *)((longlong)param_2 + ((longlong)iVar9 + 0x140) * 4),(longlong)iVar15 << 2);
  *(undefined8 *)((longlong)auStack_140 + lVar4 + lVar12 + lVar3) = 0x14f88f9bc;
  return;
}

// silk_noise_shape_quantizer @ 14f88f9e8

void silk_noise_shape_quantizer
               (longlong param_1,int param_2,int *param_3,char *param_4,undefined2 *param_5,
               longlong param_6,short *param_7,short *param_8,short *param_9,int param_10,
               int param_11,short param_12,int param_13,int param_14,int param_15,int param_16,
               int param_17,uint param_18,int param_19)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  short sVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int *piVar21;
  int *local_res18;
  char *local_res20;
  int *local_60;
  longlong local_58;
  
  lVar19 = (longlong)(int)param_18;
  local_58 = (longlong)param_17;
  piVar21 = (int *)(param_1 + 0xf3c);
  local_60 = (int *)(param_1 + ((longlong)((*(int *)(param_1 + 0x10f0) - param_10) + 1) + 0x140) * 4
                    );
  piVar13 = (int *)(param_6 + (longlong)((*(int *)(param_1 + 0x10ec) - param_10) + 2) * 4);
  iVar7 = param_14 >> 6;
  if (0 < local_58) {
    iVar20 = *(int *)(param_1 + 0x10f4);
    local_res18 = param_3;
    local_res20 = param_4;
    do {
      *(int *)(param_1 + 0x10f4) = iVar20 * 0xbb38435 + 0x3619636b;
      iVar20 = (int)((ulonglong)((longlong)*param_7 * (longlong)*piVar21) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-2] * (longlong)param_7[2]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-4] * (longlong)param_7[4]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-6] * (longlong)param_7[6]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-9] * (longlong)param_7[9]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-8] * (longlong)param_7[8]) >> 0x10) +
               (param_19 >> 1) +
               (int)((ulonglong)((longlong)piVar21[-7] * (longlong)param_7[7]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-5] * (longlong)param_7[5]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-3] * (longlong)param_7[3]) >> 0x10) +
               (int)((ulonglong)((longlong)piVar21[-1] * (longlong)param_7[1]) >> 0x10);
      if (param_19 == 0x10) {
        iVar20 = (int)((ulonglong)((longlong)piVar21[-0xb] * (longlong)param_7[0xb]) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar21[-0xd] * (longlong)param_7[0xd]) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar21[-0xf] * (longlong)param_7[0xf]) >> 0x10) +
                 iVar20 + (int)((ulonglong)((longlong)piVar21[-0xe] * (longlong)param_7[0xe]) >>
                               0x10) +
                 (int)((ulonglong)((longlong)piVar21[-0xc] * (longlong)param_7[0xc]) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar21[-10] * (longlong)param_7[10]) >> 0x10);
      }
      if (param_2 == 2) {
        param_14 = (int)((ulonglong)((longlong)*param_8 * (longlong)*piVar13) >> 0x10) + 2 +
                   (int)((ulonglong)((longlong)piVar13[-4] * (longlong)param_8[4]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar13[-3] * (longlong)param_8[3]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar13[-2] * (longlong)param_8[2]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar13[-1] * (longlong)param_8[1]) >> 0x10);
        piVar13 = piVar13 + 1;
      }
      else {
        param_14 = 0;
      }
      if ((param_18 & 1) != 0) {
        celt_fatal("assertion failed: ( shapingLPCOrder & 1 ) == 0",
                   "../../../third_party/opus/src/silk/NSQ.c",0xfa);
      }
      iVar18 = *(int *)(param_1 + 0x1080);
      *(int *)(param_1 + 0x1080) = *(int *)(param_1 + 0x10e4);
      iVar14 = (int)((ulonglong)((longlong)*param_9 * (longlong)*(int *)(param_1 + 0x10e4)) >> 0x10)
               + ((int)param_18 >> 1);
      for (lVar16 = 2; lVar9 = (longlong)iVar18, lVar16 < lVar19; lVar16 = lVar16 + 2) {
        iVar15 = *(int *)(param_1 + 0x107c + lVar16 * 4);
        *(int *)(param_1 + 0x107c + lVar16 * 4) = iVar18;
        sVar10 = param_9[lVar16 + -1];
        iVar18 = *(int *)(param_1 + 0x1080 + lVar16 * 4);
        *(int *)(param_1 + 0x1080 + lVar16 * 4) = iVar15;
        iVar14 = iVar14 + (int)((ulonglong)(sVar10 * lVar9) >> 0x10) +
                 (int)((ulonglong)((longlong)param_9[lVar16] * (longlong)iVar15) >> 0x10);
      }
      *(int *)(param_1 + 0x107c + lVar19 * 4) = iVar18;
      iVar18 = (int)((ulonglong)((longlong)*(int *)(param_1 + 0x10e0) * (longlong)param_12) >> 0x10)
               + (int)((ulonglong)(param_9[lVar19 + -1] * lVar9) >> 0x10) * 2 + iVar14 * 2;
      iVar14 = (int)((ulonglong)
                     ((longlong)*(int *)(param_1 + 0x4fc + (longlong)*(int *)(param_1 + 0x10f0) * 4)
                     * (longlong)(short)param_13) >> 0x10) +
               (int)((ulonglong)
                     ((longlong)*(int *)(param_1 + 0x10e0) * ((longlong)param_13 >> 0x10)) >> 0x10);
      if ((param_10 < 1) && (param_2 == 2)) {
        celt_fatal("assertion failed: lag > 0 || signalType != TYPE_VOICED",
                   "../../../third_party/opus/src/silk/NSQ.c",0x102);
      }
      iVar15 = (iVar20 * 4 - iVar14) - iVar18;
      if (param_10 < 1) {
        iVar15 = iVar15 >> 1;
      }
      else {
        piVar1 = local_60 + -1;
        piVar2 = local_60 + -2;
        iVar8 = *local_60;
        local_60 = local_60 + 1;
        iVar15 = (iVar15 * 2 -
                 ((int)((ulonglong)((longlong)(*piVar2 + iVar8) * (longlong)(short)param_11) >> 0x10
                       ) * 2 +
                 (int)((ulonglong)((longlong)*piVar1 * ((longlong)param_11 >> 0x10)) >> 0x10) * 2))
                 + param_14 >> 2;
      }
      iVar15 = *local_res18 - (iVar15 + 1 >> 1);
      if (*(int *)(param_1 + 0x10f4) < 0) {
        iVar15 = -iVar15;
      }
      iVar8 = iVar15;
      if (iVar15 < -0x7c00) {
        iVar8 = -0x7c00;
      }
      if (0x7800 < iVar15) {
        iVar8 = 0x7800;
      }
      iVar11 = iVar8 - param_16;
      iVar15 = iVar11 >> 10;
      sVar10 = (short)param_16;
      if (param_15 < 0x801) {
LAB_14f88fee4:
        if (iVar15 < 1) {
          if (iVar15 != 0) {
            if (iVar15 == -1) goto LAB_14f88ff1a;
            iVar15 = param_16 + 0x50 + iVar15 * 0x400;
            sVar17 = -(short)iVar15;
            iVar11 = iVar15 + 0x400;
            sVar10 = -(short)iVar11;
            goto LAB_14f88ff51;
          }
          iVar11 = param_16 + 0x3b0;
          iVar15 = param_16;
          sVar17 = sVar10;
        }
        else {
          iVar15 = param_16 + -0x50 + iVar15 * 0x400;
          iVar11 = iVar15 + 0x400;
          sVar17 = (short)iVar15;
        }
        sVar10 = (short)iVar11;
      }
      else {
        iVar15 = param_15;
        if (param_15 < 0) {
          iVar15 = param_15 + 1;
        }
        iVar15 = (iVar15 >> 1) + -0x200;
        if (iVar15 < iVar11) {
          iVar15 = -iVar15;
LAB_14f88fed9:
          iVar15 = iVar11 + iVar15 >> 10;
          goto LAB_14f88fee4;
        }
        if (iVar11 < -iVar15) goto LAB_14f88fed9;
        if (-1 < iVar11) {
          iVar15 = 0;
          goto LAB_14f88fee4;
        }
LAB_14f88ff1a:
        iVar15 = param_16 + -0x3b0;
        sVar17 = -(short)iVar15;
        iVar11 = param_16;
      }
LAB_14f88ff51:
      iVar12 = (int)(short)((short)iVar8 - (short)iVar15);
      iVar8 = (int)(short)((short)iVar8 - (short)iVar11);
      if ((int)sVar17 * (int)(short)param_15 + iVar12 * iVar12 <=
          (int)sVar10 * (int)(short)param_15 + iVar8 * iVar8) {
        iVar11 = iVar15;
      }
      iVar15 = iVar11 * 0x10;
      *local_res20 = (char)((iVar11 >> 9) + 1 >> 1);
      if (*(int *)(param_1 + 0x10f4) < 0) {
        iVar15 = iVar11 * -0x10;
      }
      iVar15 = iVar15 + param_14 * 2;
      iVar8 = iVar20 * 0x10 + iVar15;
      iVar20 = ((int)((ulonglong)((longlong)iVar8 * (longlong)iVar7) >> 0x10) >> 7) + 1 >> 1;
      uVar6 = (undefined2)iVar20;
      if (iVar20 < -0x8000) {
        uVar6 = 0x8000;
      }
      if (0x7fff < iVar20) {
        uVar6 = 0x7fff;
      }
      piVar21 = piVar21 + 1;
      *param_5 = uVar6;
      param_5 = param_5 + 1;
      *piVar21 = iVar8;
      iVar20 = *local_res18;
      local_res18 = local_res18 + 1;
      iVar8 = iVar8 + iVar20 * -0x10;
      *(int *)(param_1 + 0x10e4) = iVar8;
      iVar8 = iVar8 + iVar18 * -4;
      *(int *)(param_1 + 0x10e0) = iVar8;
      *(int *)(param_1 + 0x500 + (longlong)*(int *)(param_1 + 0x10f0) * 4) = iVar8 + iVar14 * -4;
      *(int *)(param_6 + (longlong)*(int *)(param_1 + 0x10ec) * 4) = iVar15 * 2;
      *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + 1;
      *(int *)(param_1 + 0x10ec) = *(int *)(param_1 + 0x10ec) + 1;
      cVar4 = *local_res20;
      local_res20 = local_res20 + 1;
      *(int *)(param_1 + 0x10f4) = *(int *)(param_1 + 0x10f4) + (int)cVar4;
      local_58 = local_58 + -1;
      iVar20 = *(int *)(param_1 + 0x10f4);
    } while (local_58 != 0);
  }
  lVar19 = (longlong)param_17;
  puVar3 = (undefined8 *)(param_1 + 0xf00 + lVar19 * 4);
  uVar5 = puVar3[1];
  *(undefined8 *)(param_1 + 0xf00) = *puVar3;
  *(undefined8 *)(param_1 + 0xf08) = uVar5;
  puVar3 = (undefined8 *)(param_1 + 0xf10 + lVar19 * 4);
  uVar5 = puVar3[1];
  *(undefined8 *)(param_1 + 0xf10) = *puVar3;
  *(undefined8 *)(param_1 + 0xf18) = uVar5;
  puVar3 = (undefined8 *)(param_1 + 0xf20 + lVar19 * 4);
  uVar5 = puVar3[1];
  *(undefined8 *)(param_1 + 0xf20) = *puVar3;
  *(undefined8 *)(param_1 + 0xf28) = uVar5;
  puVar3 = (undefined8 *)(param_1 + 0xf30 + lVar19 * 4);
  uVar5 = puVar3[1];
  *(undefined8 *)(param_1 + 0xf30) = *puVar3;
  *(undefined8 *)(param_1 + 0xf38) = uVar5;
  return;
}

// FUN_14f89011c @ 14f89011c

void FUN_14f89011c(longlong param_1,longlong param_2,short *param_3,undefined4 *param_4,
                  longlong param_5,longlong param_6,int param_7,short param_8,longlong param_9,
                  longlong param_10,int param_11)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  lVar9 = (longlong)param_7;
  iVar5 = *(int *)(param_10 + lVar9 * 4);
  uVar15 = 1;
  if (1 < *(int *)(param_9 + lVar9 * 4)) {
    uVar15 = *(uint *)(param_9 + lVar9 * 4);
  }
  uVar2 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
  if (uVar2 == 0) {
    iVar10 = 0x20;
  }
  else {
    iVar10 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar10 = 0x1f - iVar10;
  }
  iVar16 = uVar15 << ((byte)(iVar10 + -1) & 0x1f);
  lVar8 = 0x1fffffff / (longlong)(iVar16 >> 0x10);
  iVar17 = (int)lVar8;
  iVar10 = 0xe - (iVar10 + -1);
  iVar17 = (int)((ulonglong)
                 ((longlong)
                  ((int)((ulonglong)((longlong)iVar16 * (longlong)(short)lVar8) >> 0x10) * -8) *
                 (longlong)iVar17) >> 0x10) + iVar17 * 0x10000;
  if (iVar10 < 1) {
    bVar4 = -(byte)iVar10;
    iVar11 = -0x80000000 >> (bVar4 & 0x1f);
    iVar7 = 0x7fffffff >> (bVar4 & 0x1f);
    iVar16 = iVar17;
    if (iVar17 < iVar7) {
      iVar16 = iVar7;
    }
    iVar10 = iVar17;
    if (iVar17 < iVar11) {
      iVar10 = iVar11;
    }
    if (iVar11 < iVar17) {
      iVar16 = iVar11;
    }
    if (iVar7 < iVar17) {
      iVar10 = iVar7;
    }
    if (iVar7 < iVar11) {
      iVar10 = iVar16;
    }
    iVar10 = iVar10 << (bVar4 & 0x1f);
  }
  else if (iVar10 < 0x20) {
    iVar10 = iVar17 >> ((byte)iVar10 & 0x1f);
  }
  else {
    iVar10 = 0;
  }
  iVar17 = 0;
  if (0 < *(int *)(param_1 + 0x11ec)) {
    do {
      sVar1 = *param_3;
      iVar17 = iVar17 + 1;
      param_3 = param_3 + 1;
      *param_4 = (int)((ulonglong)((longlong)sVar1 * (longlong)((iVar10 >> 4) + 1 >> 1)) >> 0x10);
      param_4 = param_4 + 1;
    } while (iVar17 < *(int *)(param_1 + 0x11ec));
  }
  if (*(int *)(param_2 + 0x10fc) != 0) {
    if (param_7 == 0) {
      iVar10 = (int)((ulonglong)((longlong)iVar10 * (longlong)param_8) >> 0x10) << 2;
    }
    iVar17 = (*(int *)(param_2 + 0x10ec) - iVar5) + -2;
    if (iVar17 < *(int *)(param_2 + 0x10ec)) {
      puVar12 = (undefined4 *)(param_6 + (longlong)iVar17 * 4);
      psVar14 = (short *)(param_5 + (longlong)iVar17 * 2);
      do {
        sVar1 = *psVar14;
        iVar17 = iVar17 + 1;
        psVar14 = psVar14 + 1;
        *puVar12 = (int)((ulonglong)((longlong)sVar1 * (longlong)iVar10) >> 0x10);
        puVar12 = puVar12 + 1;
      } while (iVar17 < *(int *)(param_2 + 0x10ec));
    }
  }
  uVar15 = *(uint *)(param_9 + lVar9 * 4);
  uVar2 = *(uint *)(param_2 + 0x10f8);
  if (uVar15 != uVar2) {
    uVar3 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    if (uVar3 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      iVar10 = 0x1f - iVar10;
    }
    iVar17 = uVar2 << ((byte)(iVar10 + -1) & 0x1f);
    uVar2 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
    if (uVar2 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      iVar16 = 0x1f - iVar16;
    }
    iVar11 = uVar15 << ((byte)(iVar16 + -1) & 0x1f);
    lVar8 = (longlong)(short)(0x1fffffff / (longlong)(iVar11 >> 0x10));
    iVar7 = (int)((ulonglong)(iVar17 * lVar8) >> 0x10);
    iVar7 = iVar7 + (int)((ulonglong)
                          ((iVar17 + (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20)
                                     * -8) * lVar8) >> 0x10);
    iVar10 = ((iVar10 + -1) - (iVar16 + -1)) + 0xd;
    if (iVar10 < 0) {
      bVar4 = -(byte)iVar10;
      iVar11 = -0x80000000 >> (bVar4 & 0x1f);
      iVar16 = 0x7fffffff >> (bVar4 & 0x1f);
      iVar17 = iVar7;
      if (iVar7 < iVar16) {
        iVar17 = iVar16;
      }
      iVar10 = iVar7;
      if (iVar7 < iVar11) {
        iVar10 = iVar11;
      }
      if (iVar11 < iVar7) {
        iVar17 = iVar11;
      }
      if (iVar16 < iVar7) {
        iVar10 = iVar16;
      }
      if (iVar16 < iVar11) {
        iVar10 = iVar17;
      }
      iVar10 = iVar10 << (bVar4 & 0x1f);
    }
    else if (iVar10 < 0x20) {
      iVar10 = iVar7 >> ((byte)iVar10 & 0x1f);
    }
    else {
      iVar10 = 0;
    }
    iVar17 = *(int *)(param_2 + 0x10f0) - *(int *)(param_1 + 0x11f0);
    lVar8 = (longlong)iVar10;
    if (iVar17 < *(int *)(param_2 + 0x10f0)) {
      piVar6 = (int *)(param_2 + ((longlong)iVar17 + 0x140) * 4);
      do {
        iVar17 = iVar17 + 1;
        *piVar6 = (int)((ulonglong)(*piVar6 * lVar8) >> 0x10);
        piVar6 = piVar6 + 1;
      } while (iVar17 < *(int *)(param_2 + 0x10f0));
    }
    if (((param_11 == 2) && (*(int *)(param_2 + 0x10fc) == 0)) &&
       (iVar5 = (*(int *)(param_2 + 0x10ec) - iVar5) + -2, iVar5 < *(int *)(param_2 + 0x10ec))) {
      piVar6 = (int *)(param_6 + (longlong)iVar5 * 4);
      do {
        iVar5 = iVar5 + 1;
        *piVar6 = (int)((ulonglong)(*piVar6 * lVar8) >> 0x10);
        piVar6 = piVar6 + 1;
      } while (iVar5 < *(int *)(param_2 + 0x10ec));
    }
    piVar6 = (int *)(param_2 + 0xf00);
    lVar13 = 0x10;
    *(int *)(param_2 + 0x10e0) = (int)((ulonglong)(*(int *)(param_2 + 0x10e0) * lVar8) >> 0x10);
    *(int *)(param_2 + 0x10e4) = (int)((ulonglong)(*(int *)(param_2 + 0x10e4) * lVar8) >> 0x10);
    do {
      *piVar6 = (int)((ulonglong)(*piVar6 * lVar8) >> 0x10);
      piVar6 = piVar6 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    piVar6 = (int *)(param_2 + 0x1080);
    lVar13 = 0x18;
    do {
      *piVar6 = (int)((ulonglong)(*piVar6 * lVar8) >> 0x10);
      piVar6 = piVar6 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    *(undefined4 *)(param_2 + 0x10f8) = *(undefined4 *)(param_9 + lVar9 * 4);
  }
  return;
}

