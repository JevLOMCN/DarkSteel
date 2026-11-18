// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// silk_NSQ_del_dec_c @ 14f8904e8

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_NSQ_del_dec_c(longlong param_1,void *param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                       longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                       int *param_13,undefined4 param_14,undefined4 param_15)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  size_t _Size;
  undefined2 *puVar20;
  int *piVar21;
  int *piVar22;
  longlong lVar23;
  void *pvVar24;
  int iVar25;
  char *pcVar26;
  char *_Dst;
  undefined8 auStack_260 [5];
  longlong lStack_238;
  longlong alStack_230 [2];
  uint auStack_220 [2];
  longlong lStack_218;
  longlong alStack_210 [2];
  int aiStack_200 [16];
  undefined8 local_1c0;
  undefined4 local_1b8 [8];
  longlong local_198;
  int local_190 [6];
  undefined1 local_178 [160];
  char local_d8 [4];
  uint local_d4;
  int local_d0;
  int local_c8;
  int iStack_c4;
  longlong lStack_c0;
  uint local_b8;
  int iStack_b4;
  uint uStack_b0;
  longlong local_a8;
  int *piStack_a0;
  longlong local_98;
  char *pcStack_90;
  longlong local_88;
  char *local_80;
  char *local_78;
  void *local_70;
  longlong local_68;
  char *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)local_d8;
  iVar25 = *(int *)((longlong)param_2 + 0x10e8);
  _Size = (longlong)*(int *)(param_1 + 0x1214) * 0x514;
  uVar9 = _Size + 0xf;
  if (uVar9 <= _Size) {
    uVar9 = 0xffffffffffffff0;
  }
  local_1c0 = 0x14f890574;
  lVar2 = -(uVar9 & 0xfffffffffffffff0);
  _Dst = local_d8 + lVar2;
  local_c8 = iVar25;
  local_a8 = param_4;
  local_98 = param_3;
  local_68 = param_1;
  local_60 = _Dst;
  *(undefined8 *)((longlong)local_1b8 + lVar2 + -8) = 0x14f89058d;
  memset(_Dst,0,_Size);
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0x1214)) {
    puVar16 = (uint *)(&stack0x00000434 + lVar2);
    do {
      cVar1 = *(char *)(param_3 + 0x22);
      puVar16[1] = 0;
      uVar6 = cVar1 + iVar19 & 3;
      iVar19 = iVar19 + 1;
      puVar16[-1] = uVar6;
      *puVar16 = uVar6;
      puVar16[-3] = *(uint *)((longlong)param_2 + 0x10e0);
      puVar16[-2] = *(uint *)((longlong)param_2 + 0x10e4);
      puVar16[-0x43] =
           *(uint *)((longlong)param_2 + (longlong)*(int *)(param_1 + 0x11f0) * 4 + 0x4fc);
      uVar5 = *(undefined8 *)((longlong)param_2 + 0xf08);
      *(undefined8 *)(puVar16 + -0x143) = *(undefined8 *)((longlong)param_2 + 0xf00);
      *(undefined8 *)(puVar16 + -0x141) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0xf18);
      *(undefined8 *)(puVar16 + -0x13f) = *(undefined8 *)((longlong)param_2 + 0xf10);
      *(undefined8 *)(puVar16 + -0x13d) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0xf28);
      *(undefined8 *)(puVar16 + -0x13b) = *(undefined8 *)((longlong)param_2 + 0xf20);
      *(undefined8 *)(puVar16 + -0x139) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0xf38);
      *(undefined8 *)(puVar16 + -0x137) = *(undefined8 *)((longlong)param_2 + 0xf30);
      *(undefined8 *)(puVar16 + -0x135) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x1088);
      *(undefined8 *)(puVar16 + -0x1b) = *(undefined8 *)((longlong)param_2 + 0x1080);
      *(undefined8 *)(puVar16 + -0x19) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x1098);
      *(undefined8 *)(puVar16 + -0x17) = *(undefined8 *)((longlong)param_2 + 0x1090);
      *(undefined8 *)(puVar16 + -0x15) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10a8);
      *(undefined8 *)(puVar16 + -0x13) = *(undefined8 *)((longlong)param_2 + 0x10a0);
      *(undefined8 *)(puVar16 + -0x11) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10b8);
      *(undefined8 *)(puVar16 + -0xf) = *(undefined8 *)((longlong)param_2 + 0x10b0);
      *(undefined8 *)(puVar16 + -0xd) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10c8);
      *(undefined8 *)(puVar16 + -0xb) = *(undefined8 *)((longlong)param_2 + 0x10c0);
      *(undefined8 *)(puVar16 + -9) = uVar5;
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x10d8);
      *(undefined8 *)(puVar16 + -7) = *(undefined8 *)((longlong)param_2 + 0x10d0);
      *(undefined8 *)(puVar16 + -5) = uVar5;
      puVar16 = puVar16 + 0x145;
    } while (iVar19 < *(int *)(param_1 + 0x1214));
  }
  iVar19 = 0;
  iVar13 = *(int *)(param_1 + 0x11ec);
  iStack_c4 = 0;
  iStack_b4 = (int)*(short *)(&silk_Quantization_Offsets_Q10 +
                             ((longlong)*(char *)(param_3 + 0x1e) +
                             ((longlong)*(char *)(param_3 + 0x1d) >> 1) * 2) * 2);
  iVar7 = iVar13;
  if (0x28 < iVar13) {
    iVar7 = 0x28;
  }
  iVar18 = iVar7;
  if (*(char *)(param_3 + 0x1d) == '\x02') {
    if (0 < (longlong)*(int *)(param_1 + 0x11e4)) {
      lVar15 = 0;
      do {
        iVar25 = param_13[lVar15] + -3;
        if (iVar7 < param_13[lVar15] + -3) {
          iVar25 = iVar7;
        }
        iVar7 = iVar25;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x11e4));
      iVar13 = *(int *)(param_1 + 0x11ec);
      iVar18 = iVar7;
    }
  }
  else if ((0 < iVar25) && (iVar18 = iVar25 + -3, iVar7 < iVar25 + -3)) {
    iVar18 = iVar7;
  }
  iVar25 = *(int *)(param_1 + 0x11f0);
  local_d8[0] = *(char *)(param_3 + 0x1f);
  lVar15 = (longlong)(*(int *)(param_1 + 0x11e8) + iVar25);
  uVar10 = lVar15 * 4;
  uVar9 = uVar10 + 0xf;
  if (uVar9 <= uVar10) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)local_1b8 + lVar2 + -8) = 0x14f89074f;
  lVar3 = -(uVar9 & 0xfffffffffffffff0);
  local_80 = local_d8 + lVar3 + lVar2;
  uVar10 = lVar15 * 2;
  uVar9 = uVar10 + 0xf;
  if (uVar9 <= uVar10) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)local_1b8 + lVar3 + lVar2 + -8) = 0x14f89077a;
  lVar15 = -(uVar9 & 0xfffffffffffffff0);
  pcStack_90 = local_d8 + lVar15 + lVar3 + lVar2;
  uVar9 = (longlong)iVar13 * 4 + 0xf;
  if (uVar9 <= (ulonglong)((longlong)iVar13 * 4)) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)local_1b8 + lVar15 + lVar3 + lVar2 + -8) = 0x14f8907a8;
  lVar4 = -(uVar9 & 0xfffffffffffffff0);
  local_78 = local_d8 + lVar4 + lVar15 + lVar3 + lVar2;
  local_40 = local_178 + lVar4 + lVar15 + lVar3 + lVar2;
  local_d0 = 0;
  pvVar24 = (void *)((longlong)param_2 + (longlong)iVar25 * 2);
  *(int *)((longlong)param_2 + 0x10f0) = iVar25;
  *(undefined4 *)((longlong)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
  local_70 = pvVar24;
  local_d4 = 0;
  if (*(int *)(param_1 + 0x11e4) < 1) {
    lStack_c0 = param_5;
  }
  else {
    lStack_c0 = param_5;
    local_b8 = (uint)(local_d8[0] == '\x04');
    local_58 = param_12 - (longlong)param_13;
    piStack_a0 = param_13;
    pcVar26 = _Dst;
    iVar25 = 0;
    do {
      local_88 = param_6 + (longlong)(int)(((int)local_d4 >> 1 | local_b8) << 4) * 2;
      local_48 = param_7 + (longlong)(int)(local_d4 * 5) * 2;
      local_50 = param_8 + (longlong)(int)(local_d4 * 0x18) * 2;
      iVar19 = *(int *)((param_9 - (longlong)param_13) + (longlong)piStack_a0);
      *(undefined4 *)((longlong)param_2 + 0x10fc) = 0;
      uStack_b0 = (iVar19 >> 1) << 0x10 | iVar19 >> 2;
      _Dst = pcVar26;
      lStack_c0 = param_5;
      local_70 = pvVar24;
      if (*(char *)(local_98 + 0x1d) == '\x02') {
        local_c8 = *piStack_a0;
        uVar6 = 3;
        if (local_d8[0] != '\x04') {
          uVar6 = 1;
        }
        if ((local_d4 & uVar6) == 0) {
          if (local_d4 == 2) {
            iVar19 = *(int *)(param_1 + 0x1214);
            piVar21 = (int *)(pcVar26 + 0x510);
            iVar13 = *piVar21;
            lVar12 = 0;
            if (1 < iVar19) {
              uVar9 = (ulonglong)(iVar19 - 1);
              lVar11 = 1;
              piVar22 = (int *)(pcVar26 + 0xa24);
              do {
                iVar19 = *piVar22;
                piVar22 = piVar22 + 0x145;
                lVar23 = lVar11;
                if (iVar13 <= iVar19) {
                  iVar19 = iVar13;
                  lVar23 = lVar12;
                }
                lVar12 = lVar23;
                iVar13 = iVar19;
                lVar11 = lVar11 + 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
              iVar19 = *(int *)(param_1 + 0x1214);
            }
            lVar23 = (longlong)iVar18;
            iVar13 = 0;
            lVar11 = 0;
            if (0 < iVar19) {
              do {
                if (lVar11 != lVar12) {
                  *piVar21 = *piVar21 + 0x7ffffff;
                }
                iVar13 = iVar13 + 1;
                lVar11 = lVar11 + 1;
                piVar21 = piVar21 + 0x145;
              } while (iVar13 < *(int *)(param_1 + 0x1214));
            }
            local_d0 = iVar18 + iVar25;
            lVar11 = 0;
            iVar25 = 0;
            if (0 < lVar23) {
              puVar20 = (undefined2 *)((longlong)pvVar24 + lVar23 * -2);
              do {
                iVar19 = (local_d0 + -1) % 0x28;
                local_d0 = iVar19 + 0x28;
                if (-1 < iVar19) {
                  local_d0 = iVar19;
                }
                lVar17 = (longlong)local_d0;
                *(char *)((param_5 - lVar23) + lVar11) =
                     (char)((*(int *)(pcVar26 + lVar17 * 4 + lVar12 * 0x514 + 0x220) >> 9) + 1 >> 1)
                ;
                iVar13 = ((int)((ulonglong)
                                ((longlong)*(int *)(pcVar26 + lVar17 * 4 + lVar12 * 0x514 + 0x2c0) *
                                (longlong)*(int *)(param_12 + 4)) >> 0x10) >> 0xd) + 1 >> 1;
                iVar19 = 0x7fff;
                if ((iVar13 < 0x8000) && (iVar19 = iVar13, iVar13 < -0x8000)) {
                  iVar19 = -0x8000;
                }
                *puVar20 = (short)iVar19;
                lVar11 = lVar11 + 1;
                puVar20 = puVar20 + 1;
                iVar19 = (*(int *)((longlong)param_2 + 0x10f0) - iVar18) + iVar25;
                iVar25 = iVar25 + 1;
                *(undefined4 *)((longlong)param_2 + (longlong)iVar19 * 4 + 0x500) =
                     *(undefined4 *)(pcVar26 + lVar17 * 4 + lVar12 * 0x514 + 0x400);
                param_1 = local_68;
                _Dst = local_60;
              } while (lVar11 < lVar23);
            }
            local_d0 = 0;
          }
          iVar25 = *(int *)(param_1 + 0x11f0);
          iVar19 = *(int *)(param_1 + 0x1220);
          iVar13 = ((iVar25 - iVar19) - local_c8) + -2;
          if (iVar13 < 1) {
            *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x14f890aad;
            celt_fatal("assertion failed: start_idx > 0",
                       "../../../third_party/opus/src/silk/NSQ_del_dec.c",0xfd);
            iVar19 = *(int *)(param_1 + 0x1220);
            iVar25 = *(int *)(param_1 + 0x11f0);
          }
          iVar7 = local_d4 * *(int *)(param_1 + 0x11ec);
          pcVar26 = pcStack_90 + (longlong)iVar13 * 2;
          *(undefined4 *)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2) =
               *(undefined4 *)(param_1 + 0x13f4);
          *(int *)((longlong)&lStack_238 + lVar4 + lVar15 + lVar3 + lVar2) = iVar19;
          lVar12 = local_88;
          *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x14f890af4;
          silk_LPC_analysis_filter
                    (pcVar26,(void *)((longlong)param_2 + (longlong)(iVar7 + iVar13) * 2),lVar12,
                     iVar25 - iVar13);
          *(undefined4 *)((longlong)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
          *(undefined4 *)((longlong)param_2 + 0x10fc) = 1;
        }
      }
      lVar11 = local_98;
      lVar12 = local_a8;
      uVar6 = local_d4;
      *(int *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x10) = iVar18;
      *(int *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 8) =
           (int)*(char *)(lVar11 + 0x1d);
      *(int **)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2) = param_13;
      *(longlong *)((longlong)alStack_210 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = param_12;
      *(undefined4 *)((longlong)alStack_210 + lVar4 + lVar15 + lVar3 + lVar2) = param_15;
      *(undefined4 *)((longlong)&lStack_218 + lVar4 + lVar15 + lVar3 + lVar2) =
           *(undefined4 *)(param_1 + 0x1214);
      pcVar26 = local_80;
      *(uint *)((longlong)auStack_220 + lVar4 + lVar15 + lVar3 + lVar2) = uVar6;
      *(char **)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = pcVar26;
      *(char **)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2) = pcStack_90;
      *(char **)((longlong)&lStack_238 + lVar4 + lVar15 + lVar3 + lVar2) = local_78;
      *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x14f890b7b;
      FUN_14f891d5c(param_1,param_2,_Dst,lVar12);
      piVar21 = piStack_a0;
      *(undefined4 *)((longlong)local_190 + lVar4 + lVar15 + lVar3 + lVar2 + 8) =
           *(undefined4 *)(param_1 + 0x13f4);
      pcVar26 = local_78;
      cVar1 = *(char *)(lVar11 + 0x1d);
      *(int *)((longlong)local_190 + lVar4 + lVar15 + lVar3 + lVar2) = iVar18;
      *(int **)((longlong)&local_198 + lVar4 + lVar15 + lVar3 + lVar2) = &iStack_c4;
      *(undefined4 *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2 + 0x18) =
           *(undefined4 *)(param_1 + 0x1214);
      *(undefined4 *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2 + 0x10) =
           *(undefined4 *)(param_1 + 0x1240);
      *(undefined4 *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2 + 8) =
           *(undefined4 *)(param_1 + 0x1220);
      *(undefined4 *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2) =
           *(undefined4 *)(param_1 + 0x121c);
      *(int *)((longlong)local_1b8 + lVar4 + lVar15 + lVar3 + lVar2 + -8) = local_d0;
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x38) =
           *(undefined4 *)(param_1 + 0x11ec);
      *(int *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x30) = iStack_b4;
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x28) = param_14;
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x20) =
           *(undefined4 *)(local_58 + (longlong)piVar21);
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x18) =
           *(undefined4 *)((param_11 - (longlong)param_13) + (longlong)piVar21);
      *(undefined4 *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 0x10) =
           *(undefined4 *)((param_10 - (longlong)param_13) + (longlong)piVar21);
      *(uint *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = uStack_b0;
      *(int *)((longlong)aiStack_200 + lVar4 + lVar15 + lVar3 + lVar2) = local_c8;
      *(longlong *)((longlong)alStack_210 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = local_50;
      *(longlong *)((longlong)alStack_210 + lVar4 + lVar15 + lVar3 + lVar2) = local_48;
      *(longlong *)((longlong)&lStack_218 + lVar4 + lVar15 + lVar3 + lVar2) = local_88;
      *(undefined1 **)((longlong)auStack_220 + lVar4 + lVar15 + lVar3 + lVar2) = local_40;
      *(char **)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2 + 8) = local_80;
      lVar12 = lStack_c0;
      *(void **)((longlong)alStack_230 + lVar4 + lVar15 + lVar3 + lVar2) = pvVar24;
      *(longlong *)((longlong)&lStack_238 + lVar4 + lVar15 + lVar3 + lVar2) = lVar12;
      *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x14f890c91;
      FUN_14f890f80(param_2,_Dst,(int)cVar1,pcVar26);
      local_d0 = local_d0 + 1;
      lVar12 = (longlong)*(int *)(param_1 + 0x11ec) * 2;
      pvVar24 = (void *)((longlong)pvVar24 + lVar12);
      local_d4 = local_d4 + 1;
      local_a8 = local_a8 + lVar12;
      piStack_a0 = piStack_a0 + 1;
      param_5 = lStack_c0 + *(int *)(param_1 + 0x11ec);
      lStack_c0 = param_5;
      local_70 = pvVar24;
      pcVar26 = _Dst;
      iVar19 = iStack_c4;
      iVar25 = iStack_c4;
    } while ((int)local_d4 < *(int *)(param_1 + 0x11e4));
  }
  lVar12 = (longlong)iVar18;
  iVar7 = 0;
  iVar25 = *(int *)(_Dst + 0x510);
  iVar13 = 1;
  if (1 < *(int *)(param_1 + 0x1214)) {
    piVar21 = (int *)(_Dst + 0xa24);
    iVar7 = 0;
    do {
      iVar14 = *piVar21;
      piVar21 = piVar21 + 0x145;
      iVar8 = iVar13;
      if (iVar25 <= iVar14) {
        iVar14 = iVar25;
        iVar8 = iVar7;
      }
      iVar7 = iVar8;
      iVar25 = iVar14;
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_1 + 0x1214));
  }
  iVar19 = iVar18 + iVar19;
  iVar13 = 0;
  *(char *)(local_98 + 0x22) = _Dst[(longlong)iVar7 * 0x514 + 0x50c];
  iVar25 = *(int *)(param_12 + -4 + (longlong)*(int *)(param_1 + 0x11e4) * 4);
  if (0 < lVar12) {
    puVar20 = (undefined2 *)((longlong)pvVar24 + lVar12 * -2);
    lVar11 = 0;
    do {
      iVar14 = (iVar19 + -1) % 0x28;
      iVar19 = iVar14 + 0x28;
      if (-1 < iVar14) {
        iVar19 = iVar14;
      }
      lVar23 = (longlong)iVar19;
      *(char *)((lStack_c0 - lVar12) + lVar11) =
           (char)((*(int *)(_Dst + lVar23 * 4 + (longlong)iVar7 * 0x514 + 0x220) >> 9) + 1 >> 1);
      iVar8 = ((int)((ulonglong)
                     ((longlong)*(int *)(_Dst + lVar23 * 4 + (longlong)iVar7 * 0x514 + 0x2c0) *
                     (longlong)(iVar25 >> 6)) >> 0x10) >> 7) + 1 >> 1;
      iVar14 = 0x7fff;
      if ((iVar8 < 0x8000) && (iVar14 = iVar8, iVar8 < -0x8000)) {
        iVar14 = -0x8000;
      }
      *puVar20 = (short)iVar14;
      lVar11 = lVar11 + 1;
      puVar20 = puVar20 + 1;
      iVar14 = (*(int *)((longlong)param_2 + 0x10f0) - iVar18) + iVar13;
      iVar13 = iVar13 + 1;
      *(undefined4 *)((longlong)param_2 + (longlong)iVar14 * 4 + 0x500) =
           *(undefined4 *)(_Dst + lVar23 * 4 + (longlong)iVar7 * 0x514 + 0x400);
      param_1 = local_68;
    } while (lVar11 < lVar12);
  }
  lVar12 = (longlong)*(int *)(param_1 + 0x11ec);
  uVar5 = *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 8);
  *(undefined8 *)((longlong)param_2 + 0xf00) =
       *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514);
  *(undefined8 *)((longlong)param_2 + 0xf08) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x10 + 8);
  *(undefined8 *)((longlong)param_2 + 0xf10) =
       *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x10);
  *(undefined8 *)((longlong)param_2 + 0xf18) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x20 + 8);
  *(undefined8 *)((longlong)param_2 + 0xf20) =
       *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x20);
  *(undefined8 *)((longlong)param_2 + 0xf28) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x30 + 8);
  *(undefined8 *)((longlong)param_2 + 0xf30) =
       *(undefined8 *)(_Dst + lVar12 * 4 + (longlong)iVar7 * 0x514 + 0x30);
  *(undefined8 *)((longlong)param_2 + 0xf38) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4a8);
  *(undefined8 *)((longlong)param_2 + 0x1080) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4a0);
  *(undefined8 *)((longlong)param_2 + 0x1088) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4b8);
  *(undefined8 *)((longlong)param_2 + 0x1090) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4b0);
  *(undefined8 *)((longlong)param_2 + 0x1098) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4c8);
  *(undefined8 *)((longlong)param_2 + 0x10a0) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4c0);
  *(undefined8 *)((longlong)param_2 + 0x10a8) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4d8);
  *(undefined8 *)((longlong)param_2 + 0x10b0) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4d0);
  *(undefined8 *)((longlong)param_2 + 0x10b8) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4e8);
  *(undefined8 *)((longlong)param_2 + 0x10c0) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4e0);
  *(undefined8 *)((longlong)param_2 + 0x10c8) = uVar5;
  uVar5 = *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4f8);
  *(undefined8 *)((longlong)param_2 + 0x10d0) =
       *(undefined8 *)(_Dst + (longlong)iVar7 * 0x514 + 0x4f0);
  *(undefined8 *)((longlong)param_2 + 0x10d8) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x10e0) =
       *(undefined4 *)(_Dst + (longlong)iVar7 * 0x514 + 0x500);
  *(undefined4 *)((longlong)param_2 + 0x10e4) =
       *(undefined4 *)(_Dst + (longlong)iVar7 * 0x514 + 0x504);
  *(int *)((longlong)param_2 + 0x10e8) = param_13[(longlong)*(int *)(param_1 + 0x11e4) + -1];
  iVar25 = *(int *)(param_1 + 0x11e8);
  iVar19 = *(int *)(param_1 + 0x11f0);
  local_70 = pvVar24;
  *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x14f890f1a;
  memmove(param_2,(void *)((longlong)param_2 + (longlong)iVar25 * 2),(longlong)iVar19 * 2);
  iVar25 = *(int *)(param_1 + 0x11e8);
  iVar19 = *(int *)(param_1 + 0x11f0);
  *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x14f890f42;
  memmove((void *)((longlong)param_2 + 0x500),
          (void *)((longlong)param_2 + ((longlong)iVar25 + 0x140) * 4),(longlong)iVar19 << 2);
  *(undefined8 *)((longlong)auStack_260 + lVar4 + lVar15 + lVar3 + lVar2) = 0x14f890f51;
  return;
}

// FUN_14f890f80 @ 14f890f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f890f80(longlong param_1,undefined8 *param_2,int param_3,int *param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8,short *param_9,short *param_10,
                  short *param_11,int param_12,int param_13,undefined4 param_14,int param_15,
                  int param_16,int param_17,int param_18,int param_19,int param_20,uint param_21,
                  int param_22,undefined4 param_23,uint param_24,int *param_25,int param_26)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  int *piVar22;
  longlong lVar23;
  ulonglong uVar24;
  int *piVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  size_t _Size;
  undefined4 *puVar30;
  short sVar31;
  int iVar32;
  short sVar33;
  int *piVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  undefined8 auStack_150 [5];
  int local_128;
  int local_124 [3];
  longlong local_118;
  int local_110;
  int local_10c;
  uint local_108;
  longlong local_100;
  int *local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  int local_d4;
  ulonglong local_d0;
  int local_c8;
  uint local_c4;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  int *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  longlong local_58;
  int *local_50;
  uint *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_128;
  uVar24 = (ulonglong)(int)param_24;
  local_e8 = param_3;
  local_f8 = param_4;
  local_68 = param_2;
  local_c0 = param_1;
  if ((int)param_24 < 1) {
    auStack_150[0] = 0x14f890ffc;
    celt_fatal("assertion failed: nStatesDelayedDecision > 0",
               "../../../third_party/opus/src/silk/NSQ_del_dec.c",0x16c);
  }
  local_60 = uVar24;
  uVar17 = uVar24 * 0x38 + 0xf;
  if (uVar17 <= uVar24 * 0x38) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_150[0] = 0x14f89102d;
  lVar5 = -(uVar17 & 0xfffffffffffffff0);
  local_124[1] = 0;
  local_f0 = (longlong)&local_128 + lVar5;
  local_48 = (uint *)(local_c0 +
                     ((longlong)((*(int *)(local_c0 + 0x10f0) - param_12) + 1) + 0x140) * 4);
  local_98 = param_16 >> 6;
  local_50 = (int *)(param_7 + (longlong)((*(int *)(local_c0 + 0x10ec) - param_12) + 2) * 4);
  uVar17 = uVar24;
  if (0 < param_19) {
    local_b8 = 0;
    local_b0 = 0;
    local_80 = (longlong)(int)param_21;
    local_70 = (int *)((longlong)local_124 + lVar5);
    local_118 = 0x4f4;
    local_a0 = (undefined1 *)(param_5 - param_26);
    local_c8 = 0x7fffffff;
    local_a8 = (undefined2 *)(param_6 + (longlong)param_26 * -2);
    local_58 = -0x4c4 - (longlong)param_4;
    local_40 = 0x1c - (longlong)param_4;
    local_e0 = param_23;
    local_d4 = param_18;
    local_10c = param_17;
    local_110 = param_15;
    local_d8 = param_14;
    local_e4 = param_13;
    do {
      if (local_e8 == 2) {
        piVar22 = local_50 + -4;
        piVar25 = local_50 + -3;
        piVar34 = local_50 + -2;
        piVar1 = local_50 + -1;
        iVar19 = *local_50;
        local_50 = local_50 + 1;
        local_124[0] = (int)((ulonglong)((longlong)*piVar25 * (longlong)param_10[3]) >> 0x10) * 2 +
                       (int)((ulonglong)((longlong)*piVar22 * (longlong)param_10[4]) >> 0x10) * 2 +
                       (int)((ulonglong)((longlong)*piVar34 * (longlong)param_10[2]) >> 0x10) * 2 +
                       (int)((ulonglong)((longlong)*piVar1 * (longlong)param_10[1]) >> 0x10) * 2 +
                       ((int)((ulonglong)((longlong)iVar19 * (longlong)*param_10) >> 0x10) + 2) * 2;
      }
      else {
        local_124[0] = 0;
      }
      if (param_12 < 1) {
        local_128 = 0;
      }
      else {
        uVar36 = local_48[-2];
        uVar29 = *local_48;
        iVar19 = uVar29 + uVar36;
        if (iVar19 < 0) {
          if (-1 < (int)(uVar29 | uVar36)) {
            iVar19 = 0x7fffffff;
          }
        }
        else if ((int)(uVar36 & uVar29) < 0) {
          iVar19 = -0x80000000;
        }
        local_128 = local_124[0] +
                    (int)((ulonglong)((longlong)(int)local_48[-1] * ((longlong)local_e4 >> 0x10)) >>
                         0x10) * -4 +
                    (int)((ulonglong)((longlong)(short)local_e4 * (longlong)iVar19) >> 0x10) * -4;
        local_48 = local_48 + 1;
      }
      uVar36 = (uint)uVar24;
      if (0 < (longlong)uVar17) {
        local_100 = (longlong)(short)local_e0;
        piVar25 = (int *)((longlong)param_2 + (longlong)param_4 + local_58 + 0x4e0);
        local_dc = (int)param_21 >> 1;
        local_90 = (longlong)local_110 >> 0x10;
        local_88 = (longlong)param_4 + (local_58 - (local_40 + (longlong)param_4));
        local_124[2] = param_22 >> 1;
        local_c4 = param_21 & 1;
        local_38 = (local_80 * 4 + 0x49c) - (local_40 + (longlong)param_4);
        piVar22 = local_70;
        iVar19 = local_128;
        local_78 = uVar17;
        do {
          lVar12 = local_100;
          *(int *)(local_118 + -8 + (longlong)piVar25) =
               *(int *)(local_118 + -8 + (longlong)piVar25) * 0xbb38435 + 0x3619636b;
          iVar35 = (int)((ulonglong)((longlong)*piVar25 * (longlong)param_9[8]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[1] * (longlong)param_9[7]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[3] * (longlong)param_9[5]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[5] * (longlong)param_9[3]) >> 0x10) +
                   (int)((ulonglong)
                         ((longlong)*(int *)(local_88 + 0x500 + (longlong)piVar25) *
                         (longlong)*param_9) >> 0x10) +
                   local_124[2] +
                   (int)((ulonglong)((longlong)piVar25[7] * (longlong)param_9[1]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[6] * (longlong)param_9[2]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[4] * (longlong)param_9[4]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[2] * (longlong)param_9[6]) >> 0x10) +
                   (int)((ulonglong)((longlong)piVar25[-1] * (longlong)param_9[9]) >> 0x10);
          if (param_22 == 0x10) {
            iVar35 = (int)((ulonglong)((longlong)piVar25[-3] * (longlong)param_9[0xb]) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar25[-5] * (longlong)param_9[0xd]) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar25[-7] * (longlong)param_9[0xf]) >> 0x10) +
                     iVar35 + (int)((ulonglong)((longlong)piVar25[-6] * (longlong)param_9[0xe]) >>
                                   0x10) +
                     (int)((ulonglong)((longlong)piVar25[-4] * (longlong)param_9[0xc]) >> 0x10) +
                     (int)((ulonglong)((longlong)piVar25[-2] * (longlong)param_9[10]) >> 0x10);
          }
          uVar36 = iVar35 << 4;
          local_d0 = (ulonglong)uVar36;
          if (local_c4 != 0) {
            *(undefined8 *)((longlong)auStack_150 + lVar5) = 0x14f891481;
            celt_fatal("assertion failed: ( shapingLPCOrder & 1 ) == 0",
                       "../../../third_party/opus/src/silk/NSQ_del_dec.c",0x1a6);
          }
          piVar34 = (int *)((longlong)piVar25 + local_118 + -0x6c);
          iVar35 = *piVar34;
          iVar14 = (int)((ulonglong)(*(int *)(local_118 + -0x70 + (longlong)piVar25) * lVar12) >>
                        0x10) + *(int *)(local_118 + -0xc + (longlong)piVar25);
          iVar32 = (int)((ulonglong)((iVar35 - iVar14) * lVar12) >> 0x10) +
                   *(int *)(local_118 + -0x70 + (longlong)piVar25);
          *(int *)(local_118 + -0x70 + (longlong)piVar25) = iVar14;
          iVar14 = (int)((ulonglong)((longlong)*param_11 * (longlong)iVar14) >> 0x10) + local_dc;
          if (2 < (int)param_21) {
            uVar24 = (ulonglong)((param_21 - 3 >> 1) + 1);
            psVar6 = param_11;
            do {
              *piVar34 = iVar32;
              piVar1 = piVar34 + 1;
              piVar34 = piVar34 + 2;
              sVar33 = psVar6[1];
              lVar12 = (longlong)iVar32;
              iVar19 = (int)((ulonglong)((*piVar1 - iVar32) * local_100) >> 0x10) + iVar35;
              iVar35 = *piVar34;
              iVar32 = (int)((ulonglong)((iVar35 - iVar19) * local_100) >> 0x10) + *piVar1;
              *piVar1 = iVar19;
              iVar14 = iVar14 + (int)((ulonglong)(sVar33 * lVar12) >> 0x10) +
                       (int)((ulonglong)((longlong)psVar6[2] * (longlong)iVar19) >> 0x10);
              uVar24 = uVar24 - 1;
              psVar6 = psVar6 + 2;
            } while (uVar24 != 0);
            uVar36 = (uint)local_d0;
            iVar19 = local_128;
          }
          *(int *)(local_38 + (longlong)piVar25) = iVar32;
          lVar12 = (longlong)*(int *)(local_118 + -0x10 + (longlong)piVar25);
          uVar29 = (int)((ulonglong)(lVar12 * (short)local_d8) >> 0x10) * 4 +
                   (int)((ulonglong)((longlong)iVar32 * (longlong)param_11[local_80 + -1]) >> 0x10)
                   * 8 + iVar14 * 8;
          local_108 = uVar29;
          uVar11 = (int)((ulonglong)(lVar12 * local_90) >> 0x10) * 4 +
                   (int)((ulonglong)
                         ((longlong)
                          *(int *)((longlong)piVar25 + (longlong)*param_25 * 4 + local_118 + -0x110)
                         * (longlong)(short)local_110) >> 0x10) * 4;
          local_d0 = CONCAT44(local_d0._4_4_,uVar11);
          uVar20 = uVar11 + uVar29;
          uVar15 = uVar20;
          if ((int)(uVar29 & uVar11) < 0) {
            uVar15 = 0x80000000;
          }
          uVar28 = uVar20;
          if (-1 < (int)(uVar11 | uVar29)) {
            uVar28 = 0x7fffffff;
          }
          if (-1 < (int)uVar20) {
            uVar28 = uVar15;
          }
          uVar15 = uVar36 + iVar19;
          iVar14 = uVar15 - uVar28;
          iVar35 = iVar14;
          if ((int)(uVar15 & ~uVar28) < 0) {
            iVar35 = -0x80000000;
          }
          iVar32 = iVar14;
          if ((int)(uVar28 & ~uVar15) < 0) {
            iVar32 = 0x7fffffff;
          }
          if (-1 < iVar14) {
            iVar32 = iVar35;
          }
          iVar14 = (iVar32 >> 3) + 1 >> 1;
          iVar35 = *local_f8 - iVar14;
          if (*(int *)((longlong)piVar25 + local_118 + -8) < 0) {
            iVar35 = iVar14 - *local_f8;
          }
          iVar14 = iVar35;
          if (iVar35 < -0x7c00) {
            iVar14 = -0x7c00;
          }
          if (0x7800 < iVar35) {
            iVar14 = 0x7800;
          }
          iVar32 = iVar14 - local_d4;
          iVar35 = iVar32 >> 10;
          sVar33 = (short)local_d4;
          if (local_10c < 0x801) {
LAB_14f8916c0:
            if (iVar35 < 1) {
              if (iVar35 != 0) {
                if (iVar35 == -1) goto LAB_14f8916f5;
                iVar35 = local_d4 + 0x50 + iVar35 * 0x400;
                sVar31 = -(short)iVar35;
                iVar32 = iVar35 + 0x400;
                sVar33 = -(short)iVar32;
                goto LAB_14f89172d;
              }
              iVar32 = local_d4 + 0x3b0;
              iVar35 = local_d4;
              sVar31 = sVar33;
            }
            else {
              iVar35 = local_d4 + -0x50 + iVar35 * 0x400;
              iVar32 = iVar35 + 0x400;
              sVar31 = (short)iVar35;
            }
            sVar33 = (short)iVar32;
          }
          else {
            iVar35 = local_10c;
            if (local_10c < 0) {
              iVar35 = local_10c + 1;
            }
            iVar35 = (iVar35 >> 1) + -0x200;
            if (iVar35 < iVar32) {
              iVar35 = -iVar35;
LAB_14f8916b5:
              iVar35 = iVar32 + iVar35 >> 10;
              goto LAB_14f8916c0;
            }
            if (iVar32 < -iVar35) goto LAB_14f8916b5;
            if (-1 < iVar32) {
              iVar35 = 0;
              goto LAB_14f8916c0;
            }
LAB_14f8916f5:
            iVar35 = local_d4 + -0x3b0;
            sVar31 = -(short)iVar35;
            iVar32 = local_d4;
          }
LAB_14f89172d:
          iVar16 = (int)(short)((short)iVar14 - (short)iVar35);
          iVar14 = (int)(short)((short)iVar14 - (short)iVar32);
          iVar16 = (int)sVar31 * (int)(short)local_10c + iVar16 * iVar16 >> 10;
          iVar14 = (int)sVar33 * (int)(short)local_10c + iVar14 * iVar14 >> 10;
          if (iVar16 < iVar14) {
            *piVar22 = *(int *)((longlong)piVar25 + local_118) + iVar16;
            iVar14 = *(int *)((longlong)piVar25 + local_118) + iVar14;
            iVar16 = iVar35;
            iVar35 = iVar32;
          }
          else {
            *piVar22 = *(int *)((longlong)piVar25 + local_118) + iVar14;
            iVar14 = *(int *)((longlong)piVar25 + local_118) + iVar16;
            iVar16 = iVar32;
          }
          piVar22[7] = iVar14;
          piVar22[-1] = iVar16;
          piVar22[6] = iVar35;
          iVar35 = piVar22[-1] * 0x10;
          if (*(int *)(local_118 + -8 + (longlong)piVar25) < 0) {
            iVar35 = piVar22[-1] * -0x10;
          }
          iVar14 = *local_f8;
          piVar22[5] = local_124[0] + iVar35;
          iVar35 = local_124[0] + iVar35 + uVar36;
          piVar22[1] = iVar35;
          iVar35 = iVar35 + iVar14 * -0x10;
          piVar22[3] = iVar35;
          uVar15 = iVar35 - uVar29;
          piVar22[2] = uVar15;
          iVar14 = uVar15 - uVar11;
          iVar35 = iVar14;
          if ((int)(uVar15 & ~uVar11) < 0) {
            iVar35 = -0x80000000;
          }
          iVar32 = iVar14;
          if ((int)(uVar11 & ~uVar15) < 0) {
            iVar32 = local_c8;
          }
          if (-1 < iVar14) {
            iVar32 = iVar35;
          }
          piVar22[4] = iVar32;
          iVar35 = piVar22[6] * 0x10;
          if (*(int *)(local_118 + -8 + (longlong)piVar25) < 0) {
            iVar35 = piVar22[6] * -0x10;
          }
          iVar14 = *local_f8;
          piVar22[0xc] = local_124[0] + iVar35;
          iVar35 = local_124[0] + iVar35 + uVar36;
          piVar22[8] = iVar35;
          iVar35 = iVar35 + iVar14 * -0x10;
          piVar22[10] = iVar35;
          uVar29 = iVar35 - uVar29;
          piVar22[9] = uVar29;
          iVar14 = uVar29 - uVar11;
          iVar35 = iVar14;
          if ((int)(uVar29 & ~uVar11) < 0) {
            iVar35 = -0x80000000;
          }
          iVar32 = iVar14;
          if ((int)(uVar11 & ~uVar29) < 0) {
            iVar32 = 0x7fffffff;
          }
          if (-1 < iVar14) {
            iVar32 = iVar35;
          }
          piVar22[0xb] = iVar32;
          piVar25 = piVar25 + 0x145;
          piVar22 = piVar22 + 0xe;
          local_78 = local_78 - 1;
          param_2 = local_68;
          uVar17 = local_60;
          uVar36 = param_24;
        } while (local_78 != 0);
      }
      lVar12 = local_f0;
      iVar19 = (*param_25 + -1) % 0x28;
      *param_25 = iVar19;
      if (iVar19 < 0) {
        iVar19 = iVar19 + 0x28;
        *param_25 = iVar19;
      }
      lVar26 = 0;
      local_100 = 0;
      lVar23 = 1;
      iVar35 = *(int *)(local_f0 + 4);
      piVar22 = (int *)(local_f0 + 4);
      if (1 < (int)uVar36) {
        piVar22 = (int *)(local_f0 + 0x3c);
        uVar24 = (ulonglong)(uVar36 - 1);
        do {
          iVar14 = *piVar22;
          piVar22 = piVar22 + 0xe;
          lVar13 = lVar23;
          if (iVar35 <= iVar14) {
            iVar14 = iVar35;
            lVar13 = lVar26;
          }
          lVar26 = lVar13;
          iVar35 = iVar14;
          lVar23 = lVar23 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        local_100 = lVar26;
        piVar22 = local_70;
      }
      lVar23 = local_100;
      lVar26 = (longlong)((param_26 + iVar19) % 0x28);
      local_90 = lVar26;
      iVar19 = *(int *)((longlong)param_2 + (local_100 * 0x145 + lVar26) * 4 + 0x180);
      if (0 < (longlong)uVar17) {
        piVar34 = (int *)((longlong)param_2 + (lVar26 + 0x60) * 4);
        piVar25 = (int *)(local_f0 + 0x20);
        uVar24 = uVar17;
        do {
          if (*piVar34 != iVar19) {
            piVar25[-7] = piVar25[-7] + 0x7ffffff;
            *piVar25 = *piVar25 + 0x7ffffff;
          }
          piVar34 = piVar34 + 0x145;
          piVar25 = piVar25 + 0xe;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      iVar19 = *(int *)(lVar12 + 0x20);
      iVar16 = 0;
      iVar35 = *piVar22;
      lVar12 = 0;
      iVar14 = 0;
      lVar13 = 0;
      iVar32 = 1;
      if (1 < (int)param_24) {
        piVar22 = (int *)(local_f0 + 0x58);
        lVar27 = 1;
        iVar37 = 0;
        do {
          iVar14 = iVar32;
          iVar3 = piVar22[-7];
          lVar23 = lVar27;
          if (piVar22[-7] <= iVar35) {
            iVar14 = iVar16;
            iVar3 = iVar35;
            lVar23 = lVar12;
          }
          lVar12 = lVar23;
          iVar35 = iVar3;
          iVar16 = iVar14;
          iVar3 = *piVar22;
          iVar4 = *piVar22;
          piVar22 = piVar22 + 0xe;
          iVar14 = iVar32;
          lVar23 = lVar27;
          if (iVar19 <= iVar3) {
            iVar14 = iVar37;
            lVar23 = lVar13;
          }
          lVar13 = lVar23;
          if (iVar19 <= iVar4) {
            iVar4 = iVar19;
          }
          iVar19 = iVar4;
          iVar32 = iVar32 + 1;
          lVar27 = lVar27 + 1;
          param_2 = local_68;
          lVar23 = local_100;
          lVar26 = local_90;
          uVar17 = local_60;
          iVar37 = iVar14;
        } while (iVar32 < (int)param_24);
      }
      if (iVar19 < iVar35) {
        _Size = 0x514 - local_b0;
        lVar27 = (longlong)iVar14 * 0x145 + local_b8;
        lVar18 = (longlong)iVar16 * 0x145 + local_b8;
        *(undefined8 *)((longlong)auStack_150 + lVar5) = 0x14f891a97;
        memcpy((void *)((longlong)param_2 + lVar18 * 4),(void *)((longlong)param_2 + lVar27 * 4),
               _Size);
        lVar13 = lVar13 * 0x38;
        lVar12 = lVar12 * 0x38;
        puVar30 = (undefined4 *)(lVar13 + 0x1c + local_f0);
        uVar7 = puVar30[1];
        uVar8 = puVar30[2];
        uVar9 = puVar30[3];
        puVar21 = (undefined4 *)(lVar12 + local_f0);
        *puVar21 = *puVar30;
        puVar21[1] = uVar7;
        puVar21[2] = uVar8;
        puVar21[3] = uVar9;
        *(undefined8 *)(lVar12 + 0x10 + local_f0) = *(undefined8 *)(lVar13 + 0x2c + local_f0);
        *(undefined4 *)(lVar12 + 0x18 + local_f0) = *(undefined4 *)(lVar13 + 0x34 + local_f0);
      }
      if ((0 < param_20) || (param_26 <= local_124[1])) {
        *local_a0 = (char)((*(int *)((longlong)param_2 + lVar26 * 4 + lVar23 * 0x514 + 0x220) >> 9)
                           + 1 >> 1);
        iVar35 = ((int)((ulonglong)
                        ((longlong)*(int *)((longlong)param_2 + lVar26 * 4 + lVar23 * 0x514 + 0x2c0)
                        * (longlong)*(int *)(param_8 + lVar26 * 4)) >> 0x10) >> 7) + 1 >> 1;
        iVar19 = 0x7fff;
        if ((iVar35 < 0x8000) && (iVar19 = iVar35, iVar35 < -0x8000)) {
          iVar19 = -0x8000;
        }
        *local_a8 = (short)iVar19;
        *(undefined4 *)(local_c0 + 0x500 + (longlong)(*(int *)(local_c0 + 0x10f0) - param_26) * 4) =
             *(undefined4 *)((longlong)param_2 + lVar26 * 4 + lVar23 * 0x514 + 0x400);
        *(undefined4 *)(param_7 + (longlong)(*(int *)(local_c0 + 0x10ec) - param_26) * 4) =
             *(undefined4 *)((longlong)param_2 + lVar26 * 4 + lVar23 * 0x514 + 0x360);
      }
      *(int *)(local_c0 + 0x10f0) = *(int *)(local_c0 + 0x10f0) + 1;
      *(int *)(local_c0 + 0x10ec) = *(int *)(local_c0 + 0x10ec) + 1;
      if (0 < (longlong)uVar17) {
        puVar21 = (undefined4 *)((longlong)param_2 + 0x504);
        puVar30 = (undefined4 *)(local_f0 + 8);
        uVar24 = uVar17;
        do {
          puVar21[-1] = puVar30[1];
          *puVar21 = puVar30[2];
          *(undefined4 *)(local_58 + (longlong)local_f8 + (longlong)puVar21) = *puVar30;
          puVar21[(longlong)*param_25 + -0x91] = *puVar30;
          puVar21[(longlong)*param_25 + -0xb9] = puVar30[-2];
          puVar21[(longlong)*param_25 + -0x69] = puVar30[4] * 2;
          puVar21[(longlong)*param_25 + -0x41] = puVar30[3];
          puVar21[1] = puVar21[1] + (((int)puVar30[-2] >> 9) + 1 >> 1);
          puVar21[(longlong)*param_25 + -0xe1] = puVar21[1];
          puVar21[3] = puVar30[-1];
          uVar24 = uVar24 - 1;
          puVar21 = puVar21 + 0x145;
          puVar30 = puVar30 + 0xe;
        } while (uVar24 != 0);
      }
      param_4 = local_f8 + 1;
      local_b8 = local_b8 + 1;
      local_b0 = local_b0 + 4;
      uVar24 = (ulonglong)param_24;
      *(int *)(param_8 + (longlong)*param_25 * 4) = local_98;
      local_124[1] = local_124[1] + 1;
      local_a8 = local_a8 + 1;
      local_a0 = local_a0 + 1;
      local_f8 = param_4;
      local_118 = local_118 + -4;
    } while (local_124[1] < param_19);
  }
  if (0 < (longlong)uVar17) {
    lVar12 = (longlong)param_19;
    do {
      puVar2 = (undefined8 *)((longlong)param_2 + lVar12 * 4);
      uVar10 = puVar2[1];
      *param_2 = *puVar2;
      param_2[1] = uVar10;
      puVar2 = (undefined8 *)((longlong)param_2 + lVar12 * 4 + 0x10);
      uVar10 = puVar2[1];
      param_2[2] = *puVar2;
      param_2[3] = uVar10;
      puVar2 = (undefined8 *)((longlong)param_2 + lVar12 * 4 + 0x20);
      uVar10 = puVar2[1];
      param_2[4] = *puVar2;
      param_2[5] = uVar10;
      puVar2 = (undefined8 *)((longlong)param_2 + lVar12 * 4 + 0x30);
      uVar10 = puVar2[1];
      param_2[6] = *puVar2;
      param_2[7] = uVar10;
      uVar17 = uVar17 - 1;
      param_2 = (undefined8 *)((longlong)param_2 + 0x514);
    } while (uVar17 != 0);
  }
  *(undefined8 *)((longlong)auStack_150 + lVar5) = 0x14f891d2f;
  return;
}

// FUN_14f891d5c @ 14f891d5c

void FUN_14f891d5c(longlong param_1,longlong param_2,longlong param_3,short *param_4,
                  undefined4 *param_5,longlong param_6,longlong param_7,int param_8,int param_9,
                  short param_10,longlong param_11,longlong param_12,int param_13,int param_14)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int *piVar15;
  short *psVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  
  lVar10 = (longlong)param_8;
  iVar6 = *(int *)(param_12 + lVar10 * 4);
  uVar4 = 1;
  if (1 < *(int *)(param_11 + lVar10 * 4)) {
    uVar4 = *(uint *)(param_11 + lVar10 * 4);
  }
  uVar2 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  if (uVar2 == 0) {
    iVar11 = 0x20;
  }
  else {
    iVar11 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar11 = 0x1f - iVar11;
  }
  iVar18 = uVar4 << ((byte)(iVar11 + -1) & 0x1f);
  lVar9 = 0x1fffffff / (longlong)(iVar18 >> 0x10);
  iVar19 = (int)lVar9;
  iVar11 = 0xe - (iVar11 + -1);
  iVar19 = (int)((ulonglong)
                 ((longlong)
                  ((int)((ulonglong)((longlong)iVar18 * (longlong)(short)lVar9) >> 0x10) * -8) *
                 (longlong)iVar19) >> 0x10) + iVar19 * 0x10000;
  if (iVar11 < 1) {
    bVar5 = -(byte)iVar11;
    iVar12 = -0x80000000 >> (bVar5 & 0x1f);
    iVar8 = 0x7fffffff >> (bVar5 & 0x1f);
    iVar18 = iVar19;
    if (iVar19 < iVar8) {
      iVar18 = iVar8;
    }
    iVar11 = iVar19;
    if (iVar19 < iVar12) {
      iVar11 = iVar12;
    }
    if (iVar12 < iVar19) {
      iVar18 = iVar12;
    }
    if (iVar8 < iVar19) {
      iVar11 = iVar8;
    }
    if (iVar8 < iVar12) {
      iVar11 = iVar18;
    }
    iVar11 = iVar11 << (bVar5 & 0x1f);
  }
  else if (iVar11 < 0x20) {
    iVar11 = iVar19 >> ((byte)iVar11 & 0x1f);
  }
  else {
    iVar11 = 0;
  }
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0x11ec)) {
    do {
      sVar1 = *param_4;
      iVar19 = iVar19 + 1;
      param_4 = param_4 + 1;
      *param_5 = (int)((ulonglong)((longlong)sVar1 * (longlong)((iVar11 >> 4) + 1 >> 1)) >> 0x10);
      param_5 = param_5 + 1;
    } while (iVar19 < *(int *)(param_1 + 0x11ec));
  }
  if (*(int *)(param_2 + 0x10fc) != 0) {
    if (param_8 == 0) {
      iVar11 = (int)((ulonglong)((longlong)iVar11 * (longlong)param_10) >> 0x10) << 2;
    }
    iVar19 = (*(int *)(param_2 + 0x10ec) - iVar6) + -2;
    if (iVar19 < *(int *)(param_2 + 0x10ec)) {
      puVar13 = (undefined4 *)(param_7 + (longlong)iVar19 * 4);
      psVar16 = (short *)(param_6 + (longlong)iVar19 * 2);
      do {
        sVar1 = *psVar16;
        iVar19 = iVar19 + 1;
        psVar16 = psVar16 + 1;
        *puVar13 = (int)((ulonglong)((longlong)sVar1 * (longlong)iVar11) >> 0x10);
        puVar13 = puVar13 + 1;
      } while (iVar19 < *(int *)(param_2 + 0x10ec));
    }
  }
  uVar4 = *(uint *)(param_2 + 0x10f8);
  uVar2 = *(uint *)(param_11 + lVar10 * 4);
  if (uVar2 != uVar4) {
    uVar3 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
    if (uVar3 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar11 = 0x1f - iVar11;
    }
    iVar19 = uVar4 << ((byte)(iVar11 + -1) & 0x1f);
    uVar4 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    if (uVar4 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      iVar18 = 0x1f - iVar18;
    }
    iVar12 = uVar2 << ((byte)(iVar18 + -1) & 0x1f);
    lVar9 = (longlong)(short)(0x1fffffff / (longlong)(iVar12 >> 0x10));
    iVar8 = (int)((ulonglong)(iVar19 * lVar9) >> 0x10);
    iVar8 = iVar8 + (int)((ulonglong)
                          ((iVar19 + (int)((ulonglong)((longlong)iVar8 * (longlong)iVar12) >> 0x20)
                                     * -8) * lVar9) >> 0x10);
    iVar11 = ((iVar11 + -1) - (iVar18 + -1)) + 0xd;
    if (iVar11 < 0) {
      bVar5 = -(byte)iVar11;
      iVar18 = -0x80000000 >> (bVar5 & 0x1f);
      iVar12 = 0x7fffffff >> (bVar5 & 0x1f);
      iVar19 = iVar8;
      if (iVar8 < iVar12) {
        iVar19 = iVar12;
      }
      iVar11 = iVar8;
      if (iVar8 < iVar18) {
        iVar11 = iVar18;
      }
      if (iVar18 < iVar8) {
        iVar19 = iVar18;
      }
      if (iVar12 < iVar8) {
        iVar11 = iVar12;
      }
      if (iVar12 < iVar18) {
        iVar11 = iVar19;
      }
      iVar11 = iVar11 << (bVar5 & 0x1f);
    }
    else if (iVar11 < 0x20) {
      iVar11 = iVar8 >> ((byte)iVar11 & 0x1f);
    }
    else {
      iVar11 = 0;
    }
    iVar19 = *(int *)(param_2 + 0x10f0) - *(int *)(param_1 + 0x11f0);
    lVar9 = (longlong)iVar11;
    if (iVar19 < *(int *)(param_2 + 0x10f0)) {
      piVar7 = (int *)(param_2 + ((longlong)iVar19 + 0x140) * 4);
      do {
        iVar19 = iVar19 + 1;
        *piVar7 = (int)((ulonglong)(*piVar7 * lVar9) >> 0x10);
        piVar7 = piVar7 + 1;
      } while (iVar19 < *(int *)(param_2 + 0x10f0));
    }
    if (((param_13 == 2) && (*(int *)(param_2 + 0x10fc) == 0)) &&
       (iVar6 = (*(int *)(param_2 + 0x10ec) - iVar6) + -2,
       iVar6 < *(int *)(param_2 + 0x10ec) - param_14)) {
      piVar7 = (int *)(param_7 + (longlong)iVar6 * 4);
      do {
        iVar6 = iVar6 + 1;
        *piVar7 = (int)((ulonglong)(*piVar7 * lVar9) >> 0x10);
        piVar7 = piVar7 + 1;
      } while (iVar6 < *(int *)(param_2 + 0x10ec) - param_14);
    }
    lVar20 = (longlong)param_9;
    if (0 < lVar20) {
      piVar7 = (int *)(param_3 + 0x500);
      do {
        *piVar7 = (int)((ulonglong)(*piVar7 * lVar9) >> 0x10);
        piVar7[1] = (int)((ulonglong)(piVar7[1] * lVar9) >> 0x10);
        lVar14 = 0;
        do {
          piVar7[lVar14 + -0x140] = (int)((ulonglong)(piVar7[lVar14 + -0x140] * lVar9) >> 0x10);
          lVar14 = lVar14 + 1;
        } while (lVar14 < 0x10);
        piVar15 = piVar7 + -0x40;
        lVar14 = 0x18;
        piVar17 = piVar7 + -0x18;
        do {
          *piVar17 = (int)((ulonglong)(*piVar17 * lVar9) >> 0x10);
          piVar17 = piVar17 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        lVar14 = 0x28;
        do {
          piVar15[-0x28] = (int)((ulonglong)(piVar15[-0x28] * lVar9) >> 0x10);
          *piVar15 = (int)((ulonglong)(*piVar15 * lVar9) >> 0x10);
          piVar15 = piVar15 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        piVar7 = piVar7 + 0x145;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    *(undefined4 *)(param_2 + 0x10f8) = *(undefined4 *)(param_11 + lVar10 * 4);
  }
  return;
}

