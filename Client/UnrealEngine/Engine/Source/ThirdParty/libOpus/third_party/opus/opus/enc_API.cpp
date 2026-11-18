// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// silk_Encode @ 14f8707ec

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong silk_Encode(undefined8 *param_1,int *param_2,void *param_3,int param_4,longlong param_5,
                     int *param_6,int param_7,undefined4 param_8)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *_Dst;
  undefined8 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined2 *puVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  undefined4 *puVar28;
  int *piVar29;
  int *piVar30;
  undefined1 *puVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  int *piVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  undefined4 uVar39;
  longlong lVar40;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong lStack_100;
  int local_f8 [12];
  uint local_c8;
  char local_c4 [4];
  int local_c0;
  int local_bc;
  int local_b8;
  int *local_b0;
  int local_a8;
  void *local_a0;
  ulonglong local_98;
  int local_90;
  int local_8c;
  int local_88;
  int *local_80;
  int local_78;
  int *local_70;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  puVar31 = auStack_128;
  local_30 = __security_cookie.value ^ (ulonglong)&local_c8;
  local_8c = 0;
  local_88 = 0;
  if (param_2[0x11] != 0) {
    *(undefined4 *)(param_1 + 0x247) = 1;
    *(undefined4 *)(param_1 + 0x734) = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x3dec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1684) = 0;
  uStack_130 = 0x14f870870;
  local_c0 = param_4;
  local_a0 = param_3;
  local_70 = param_2;
  local_50 = param_1;
  local_c8 = check_control_input(param_2);
  uVar18 = (ulonglong)local_c8;
  if (local_c8 == 0) {
    param_2[0x16] = 0;
    if (*(int *)((longlong)param_1 + 0x4f14) < param_2[1]) {
      uStack_130 = 0x14f8708cc;
      local_c8 = silk_init_encoder(param_1 + 0x4ed,*(undefined4 *)((longlong)param_1 + 0x13f4));
      *(undefined4 *)(param_1 + 0x9da) = 0;
      param_1[0x9db] = 0;
      param_1[0x9dc] = 1;
      *(undefined4 *)(param_1 + 0x9dd) = 1;
      *(undefined4 *)((longlong)param_1 + 0x4eec) = 0x4000;
      param_4 = local_c0;
      if (*(int *)(param_1 + 0x9e2) == 2) {
        lVar26 = 2;
        puVar17 = param_1 + 0x7c1;
        puVar12 = param_1 + 0x2d4;
        do {
          puVar23 = puVar12;
          puVar16 = puVar17;
          uVar32 = puVar23[1];
          uVar8 = puVar23[2];
          uVar9 = puVar23[3];
          *puVar16 = *puVar23;
          puVar16[1] = uVar32;
          uVar32 = puVar23[4];
          uVar10 = puVar23[5];
          puVar16[2] = uVar8;
          puVar16[3] = uVar9;
          uVar8 = puVar23[6];
          uVar9 = puVar23[7];
          puVar16[4] = uVar32;
          puVar16[5] = uVar10;
          uVar32 = puVar23[8];
          uVar10 = puVar23[9];
          puVar16[6] = uVar8;
          puVar16[7] = uVar9;
          uVar8 = puVar23[10];
          uVar9 = puVar23[0xb];
          puVar16[8] = uVar32;
          puVar16[9] = uVar10;
          uVar32 = puVar23[0xc];
          uVar10 = puVar23[0xd];
          puVar16[10] = uVar8;
          puVar16[0xb] = uVar9;
          uVar8 = puVar23[0xe];
          uVar9 = puVar23[0xf];
          puVar16[0xc] = uVar32;
          puVar16[0xd] = uVar10;
          puVar16[0xe] = uVar8;
          puVar16[0xf] = uVar9;
          lVar26 = lVar26 + -1;
          puVar17 = puVar16 + 0x10;
          puVar12 = puVar23 + 0x10;
        } while (lVar26 != 0);
        uVar32 = puVar23[0x11];
        uVar8 = puVar23[0x12];
        uVar9 = puVar23[0x13];
        puVar16[0x10] = puVar23[0x10];
        puVar16[0x11] = uVar32;
        uVar39 = *(undefined4 *)(puVar23 + 0x14);
        uVar33 = *(undefined4 *)((longlong)puVar23 + 0xa4);
        uVar6 = *(undefined4 *)(puVar23 + 0x15);
        uVar7 = *(undefined4 *)((longlong)puVar23 + 0xac);
        puVar16[0x12] = uVar8;
        puVar16[0x13] = uVar9;
        *(undefined4 *)(puVar16 + 0x14) = uVar39;
        *(undefined4 *)((longlong)puVar16 + 0xa4) = uVar33;
        *(undefined4 *)(puVar16 + 0x15) = uVar6;
        *(undefined4 *)((longlong)puVar16 + 0xac) = uVar7;
        param_1[0x4ed] = *param_1;
      }
    }
    else {
      local_c8 = 0;
    }
    uVar18 = 0;
    if ((param_2[6] != *(int *)((longlong)param_1 + 0x1204)) ||
       (local_98 = uVar18, *(int *)((longlong)param_1 + 0x4f14) != param_2[1])) {
      local_98 = 1;
    }
    *(int *)(param_1 + 0x9e2) = *param_2;
    *(int *)((longlong)param_1 + 0x4f14) = param_2[1];
    iVar19 = param_2[2];
    local_bc = 0;
    local_a8 = (param_4 * 100) / iVar19;
    local_b8 = 1;
    if (1 < local_a8) {
      local_b8 = local_a8 >> 1;
    }
    if (param_7 == 0) {
      if ((iVar19 * local_a8 == param_4 * 100) && (-1 < param_4)) {
        if (param_4 * 1000 <= iVar19 * param_2[6]) goto LAB_14f870add;
        uVar32 = 0xf1;
      }
      else {
        uVar32 = 0xeb;
      }
    }
    else {
      if (local_a8 == 1) {
        puVar17 = param_1 + 2;
        uVar39 = local_38;
        if (param_7 == 2) {
          local_48 = *(undefined4 *)puVar17;
          uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
          uStack_40 = *(undefined4 *)(param_1 + 3);
          uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
          uVar39 = *(undefined4 *)(param_1 + 0x23c);
        }
        local_60 = (void *)CONCAT44(uStack_44,local_48);
        uStack_58 = uStack_40;
        uStack_54 = uStack_3c;
        if (0 < param_2[1]) {
          do {
            uStack_130 = 0x14f870a4b;
            local_c8 = silk_init_encoder(param_1 + (longlong)(int)uVar18 * 0x4ed,
                                         *(undefined4 *)((longlong)puVar17 + 0x13e4));
            if (param_7 == 2) {
              *(undefined4 *)puVar17 = (undefined4)local_60;
              *(undefined4 *)((longlong)puVar17 + 4) = local_60._4_4_;
              *(undefined4 *)(puVar17 + 1) = uStack_58;
              *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_54;
              *(undefined4 *)(puVar17 + 2) = uVar39;
            }
            if (local_c8 != 0) {
              uStack_130 = 0x14f870a7f;
              celt_fatal("assertion failed: !ret","../../../third_party/opus/src/silk/enc_API.c",
                         0xde);
            }
            puVar17 = puVar17 + 0x4ed;
            uVar35 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar35;
          } while ((int)uVar35 < param_2[1]);
        }
        iVar19 = 0;
        local_8c = param_2[6];
        local_88 = param_2[9];
        param_2[9] = 0;
        param_2[6] = 10;
        if (0 < param_2[1]) {
          puVar17 = param_1 + 0x249;
          do {
            *(undefined4 *)((longlong)puVar17 + -0xc) = 0;
            iVar19 = iVar19 + 1;
            *(undefined4 *)puVar17 = 1;
            puVar17 = puVar17 + 0x4ed;
          } while (iVar19 < param_2[1]);
        }
LAB_14f870add:
        uVar15 = local_98;
        iVar38 = local_a8;
        iVar36 = 0;
        iVar19 = param_2[1];
        if (iVar19 < 1) {
          uVar18 = (ulonglong)local_c8;
        }
        else {
          puVar28 = (undefined4 *)((longlong)param_1 + 0x1284);
          do {
            if (iVar36 == 1) {
              local_108._0_4_ = *(undefined4 *)(param_1 + 0x23c);
            }
            else {
              local_108._0_4_ = 0;
            }
            uStack_130 = 0x14f870b58;
            uVar18 = silk_control_encoder
                               (param_1 + (longlong)iVar36 * 0x4ed,param_2,
                                *(undefined4 *)(param_1 + 0x9e4),iVar36);
            iVar19 = 0;
            if ((int)uVar18 != 0) goto LAB_14f8718ff;
            if (((puVar28[-0x13] != 0) || (uVar15 != 0)) &&
               (puVar14 = puVar28, 0 < *(int *)(param_1 + 0x2d0))) {
              do {
                *puVar14 = 0;
                iVar19 = iVar19 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar19 < *(int *)(param_1 + 0x2d0));
            }
            iVar36 = iVar36 + 1;
            puVar28[0x154] = puVar28[0x153];
            puVar28 = puVar28 + 0x9da;
            iVar19 = param_2[1];
            uVar18 = uVar18 & 0xffffffff;
          } while (iVar36 < iVar19);
        }
        if ((iVar19 != 1) && (*(int *)(param_1 + 0x23c) != *(int *)(param_1 + 0x729))) {
          uStack_130 = 0x14f870bf4;
          celt_fatal("assertion failed: encControl->nChannelsInternal == 1 || psEnc->state_Fxx[ 0 ].sCmn.fs_kHz == psEnc->state_Fxx[ 1 ].sCmn.fs_kHz"
                     ,"../../../third_party/opus/src/silk/enc_API.c",0x106);
        }
        local_78 = *(int *)(param_1 + 0x23c) * iVar38 * 10;
        uVar5 = (longlong)
                ((*(int *)((longlong)param_1 + 0x11cc) * local_78) /
                (*(int *)(param_1 + 0x23c) * 1000)) * 2;
        uVar15 = uVar5 + 0xf;
        if (uVar15 <= uVar5) {
          uVar15 = 0xffffffffffffff0;
        }
        uStack_130 = 0x14f870c40;
        lVar26 = -(uVar15 & 0xfffffffffffffff0);
        puVar31 = auStack_128 + lVar26;
        local_90 = 0;
        local_60 = (void *)((longlong)&local_c8 + lVar26);
        do {
          _Dst = local_60;
          pvVar11 = local_a0;
          lVar22 = 0;
          iVar19 = *(int *)((longlong)param_1 + 0x167c);
          iVar38 = local_78;
          if (*(int *)(param_1 + 0x23d) - iVar19 < local_78) {
            iVar38 = *(int *)(param_1 + 0x23d) - iVar19;
          }
          uVar15 = (longlong)(*(int *)((longlong)param_1 + 0x11cc) * iVar38) /
                   (longlong)(*(int *)(param_1 + 0x23c) * 1000);
          iVar36 = (int)uVar15;
          lVar40 = (longlong)iVar36;
          iVar27 = (int)uVar18;
          if (*param_2 == 2) {
            if (param_2[1] == 2) {
              iVar13 = *(int *)((longlong)param_1 + 0x1684);
              if (0 < iVar36) {
                do {
                  *(undefined2 *)((longlong)_Dst + lVar22 * 2) =
                       *(undefined2 *)((longlong)pvVar11 + lVar22 * 4);
                  lVar22 = lVar22 + 1;
                } while (lVar22 < lVar40);
                iVar19 = *(int *)((longlong)param_1 + 0x167c);
              }
              if ((*(int *)(param_1 + 0x9e3) == 1) && (iVar13 == 0)) {
                lVar22 = 2;
                puVar17 = param_1 + 0x7c1;
                puVar12 = param_1 + 0x2d4;
                do {
                  puVar23 = puVar12;
                  puVar16 = puVar17;
                  uVar32 = puVar23[1];
                  uVar8 = puVar23[2];
                  uVar9 = puVar23[3];
                  *puVar16 = *puVar23;
                  puVar16[1] = uVar32;
                  uVar32 = puVar23[4];
                  uVar10 = puVar23[5];
                  puVar16[2] = uVar8;
                  puVar16[3] = uVar9;
                  uVar8 = puVar23[6];
                  uVar9 = puVar23[7];
                  puVar16[4] = uVar32;
                  puVar16[5] = uVar10;
                  uVar32 = puVar23[8];
                  uVar10 = puVar23[9];
                  puVar16[6] = uVar8;
                  puVar16[7] = uVar9;
                  uVar8 = puVar23[10];
                  uVar9 = puVar23[0xb];
                  puVar16[8] = uVar32;
                  puVar16[9] = uVar10;
                  uVar32 = puVar23[0xc];
                  uVar10 = puVar23[0xd];
                  puVar16[10] = uVar8;
                  puVar16[0xb] = uVar9;
                  uVar8 = puVar23[0xe];
                  uVar9 = puVar23[0xf];
                  puVar16[0xc] = uVar32;
                  puVar16[0xd] = uVar10;
                  puVar16[0xe] = uVar8;
                  puVar16[0xf] = uVar9;
                  lVar22 = lVar22 + -1;
                  puVar17 = puVar16 + 0x10;
                  puVar12 = puVar23 + 0x10;
                } while (lVar22 != 0);
                uVar32 = puVar23[0x11];
                uVar8 = puVar23[0x12];
                uVar9 = puVar23[0x13];
                puVar16[0x10] = puVar23[0x10];
                puVar16[0x11] = uVar32;
                uVar39 = *(undefined4 *)(puVar23 + 0x14);
                uVar33 = *(undefined4 *)((longlong)puVar23 + 0xa4);
                uVar6 = *(undefined4 *)(puVar23 + 0x15);
                uVar7 = *(undefined4 *)((longlong)puVar23 + 0xac);
                puVar16[0x12] = uVar8;
                puVar16[0x13] = uVar9;
                *(undefined4 *)(puVar16 + 0x14) = uVar39;
                *(undefined4 *)((longlong)puVar16 + 0xa4) = uVar33;
                *(undefined4 *)(puVar16 + 0x15) = uVar6;
                *(undefined4 *)((longlong)puVar16 + 0xac) = uVar7;
              }
              *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f870d75;
              iVar13 = silk_resampler(param_1 + 0x2d4,
                                      (longlong)param_1 + ((longlong)(iVar19 + 2) + 0x9fc) * 2,_Dst,
                                      uVar15 & 0xffffffff);
              *(int *)((longlong)param_1 + 0x167c) = *(int *)((longlong)param_1 + 0x167c) + iVar38;
              iVar19 = *(int *)((longlong)param_1 + 0x3de4);
              iVar38 = *(int *)(param_1 + 0x729) * local_a8 * 10;
              if (*(int *)(param_1 + 0x72a) - iVar19 < iVar38) {
                iVar38 = *(int *)(param_1 + 0x72a) - iVar19;
              }
              lVar22 = 0;
              if (0 < iVar36) {
                puVar24 = (undefined2 *)((longlong)local_a0 + 2);
                do {
                  uVar4 = *puVar24;
                  puVar24 = puVar24 + 2;
                  *(undefined2 *)((longlong)_Dst + lVar22 * 2) = uVar4;
                  lVar22 = lVar22 + 1;
                } while (lVar22 < lVar40);
                iVar19 = *(int *)((longlong)param_1 + 0x3de4);
                param_2 = local_70;
              }
              *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f870dfc;
              iVar19 = silk_resampler(param_1 + 0x7c1,
                                      (longlong)param_1 + ((longlong)(iVar19 + 2) + 0x1db0) * 2,_Dst
                                      ,uVar15 & 0xffffffff);
              local_c8 = iVar27 + iVar13 + iVar19;
              *(int *)((longlong)param_1 + 0x3de4) = *(int *)((longlong)param_1 + 0x3de4) + iVar38;
              goto LAB_14f870f8b;
            }
            if (param_2[1] != 1) goto LAB_14f870f31;
            if (0 < iVar36) {
              do {
                iVar19 = (int)*(short *)((longlong)pvVar11 + lVar22 * 4 + 2) +
                         (int)*(short *)((longlong)pvVar11 + lVar22 * 4);
                *(ushort *)((longlong)_Dst + lVar22 * 2) =
                     (short)(iVar19 >> 1) + ((ushort)iVar19 & 1);
                lVar22 = lVar22 + 1;
              } while (lVar22 < lVar40);
              iVar19 = *(int *)((longlong)param_1 + 0x167c);
              param_2 = local_70;
            }
            *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f870e78;
            iVar19 = silk_resampler(param_1 + 0x2d4,
                                    (longlong)param_1 + ((longlong)(iVar19 + 2) + 0x9fc) * 2,_Dst,
                                    uVar15 & 0xffffffff);
            uVar35 = iVar27 + iVar19;
            uVar18 = (ulonglong)uVar35;
            local_c8 = uVar35;
            if ((*(int *)(param_1 + 0x9e3) == 2) && (*(int *)((longlong)param_1 + 0x1684) == 0)) {
              iVar19 = *(int *)((longlong)param_1 + 0x3de4);
              *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f870ec0;
              iVar19 = silk_resampler(param_1 + 0x7c1,
                                      (longlong)param_1 + ((longlong)(iVar19 + 2) + 0x1db0) * 2,_Dst
                                      ,uVar15 & 0xffffffff);
              local_c8 = uVar35 + iVar19;
              uVar18 = (ulonglong)local_c8;
              iVar19 = 0;
              if (0 < *(int *)(param_1 + 0x23d)) {
                do {
                  lVar22 = (longlong)(*(int *)((longlong)param_1 + 0x167c) + iVar19);
                  iVar27 = *(int *)((longlong)param_1 + 0x3de4) + iVar19;
                  iVar19 = iVar19 + 1;
                  *(short *)((longlong)param_1 + lVar22 * 2 + 0x13fc) =
                       (short)((int)*(short *)((longlong)param_1 + (longlong)iVar27 * 2 + 0x3b64) +
                               (int)*(short *)((longlong)param_1 + lVar22 * 2 + 0x13fc) >> 1);
                  param_2 = local_70;
                } while (iVar19 < *(int *)(param_1 + 0x23d));
              }
            }
            *(int *)((longlong)param_1 + 0x167c) = *(int *)((longlong)param_1 + 0x167c) + iVar38;
          }
          else {
            if ((*param_2 != 1) || (param_2[1] != 1)) {
LAB_14f870f31:
              *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f870f4a;
              celt_fatal("assertion failed: encControl->nChannelsAPI == 1 && encControl->nChannelsInternal == 1"
                         ,"../../../third_party/opus/src/silk/enc_API.c",0x140);
            }
            pvVar11 = local_a0;
            *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f870f5a;
            memcpy(_Dst,pvVar11,lVar40 * 2);
            iVar19 = *(int *)((longlong)param_1 + 0x167c);
            *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f870f81;
            iVar19 = silk_resampler(param_1 + 0x2d4,
                                    (longlong)param_1 + ((longlong)(iVar19 + 2) + 0x9fc) * 2,_Dst,
                                    uVar15 & 0xffffffff);
            local_c8 = iVar27 + iVar19;
            *(int *)((longlong)param_1 + 0x167c) = *(int *)((longlong)param_1 + 0x167c) + iVar38;
LAB_14f870f8b:
            uVar18 = (ulonglong)local_c8;
          }
          iVar19 = *param_2;
          local_c0 = local_c0 - iVar36;
          *(undefined4 *)(param_1 + 0x9e4) = 0;
          local_a0 = (void *)((longlong)local_a0 + (longlong)(iVar36 * iVar19) * 2);
          if (*(int *)((longlong)param_1 + 0x167c) < *(int *)(param_1 + 0x23d)) goto LAB_14f87181a;
          if (*(int *)((longlong)param_1 + 0x167c) != *(int *)(param_1 + 0x23d)) {
            *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f870fde;
            celt_fatal("assertion failed: psEnc->state_Fxx[ 0 ].sCmn.inputBufIx == psEnc->state_Fxx[ 0 ].sCmn.frame_length"
                       ,"../../../third_party/opus/src/silk/enc_API.c",0x150);
          }
          iVar19 = param_2[1];
          if ((iVar19 != 1) && (*(int *)((longlong)param_1 + 0x3de4) != *(int *)(param_1 + 0x72a)))
          {
            *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f871011;
            celt_fatal("assertion failed: encControl->nChannelsInternal == 1 || psEnc->state_Fxx[ 1 ].sCmn.inputBufIx == psEnc->state_Fxx[ 1 ].sCmn.frame_length"
                       ,"../../../third_party/opus/src/silk/enc_API.c",0x151);
            iVar19 = param_2[1];
          }
          piVar29 = (int *)((longlong)param_1 + 0x1684);
          uVar35 = 0;
          if ((*piVar29 == 0) && (param_7 == 0)) {
            local_c4[1] = 0;
            local_c4[0] = -(char)(0x100 >> ((char)iVar19 *
                                            ((char)*(undefined4 *)(param_1 + 0x2d0) + '\x01') &
                                           0x1fU));
            *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f87106b;
            ec_enc_icdf(param_5,0,local_c4,8);
            iVar19 = param_2[1];
            if (0 < iVar19) {
              piVar29 = (int *)((longlong)param_1 + 0x1284);
              uVar37 = uVar35;
              do {
                iVar19 = piVar29[0xff];
                piVar30 = piVar29;
                uVar20 = uVar35;
                uVar25 = uVar35;
                if (0 < iVar19) {
                  do {
                    uVar21 = uVar20 + 1;
                    uVar25 = uVar25 | *piVar30 << ((byte)uVar20 & 0x1f);
                    piVar30 = piVar30 + 1;
                    uVar20 = uVar21;
                  } while ((int)uVar21 < iVar19);
                }
                *(bool *)((longlong)piVar29 + -1) = 0 < (int)uVar25;
                if ((uVar25 != 0) && (1 < iVar19)) {
                  uVar32 = *(undefined8 *)(&DAT_153514d68 + (longlong)iVar19 * 8);
                  *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f8710d5;
                  ec_enc_icdf(param_5,uVar25 - 1,uVar32,8);
                }
                iVar19 = param_2[1];
                uVar37 = uVar37 + 1;
                piVar29 = piVar29 + 0x9da;
                param_1 = local_50;
              } while ((int)uVar37 < iVar19);
            }
            local_80 = (int *)0x0;
            if (0 < *(int *)(param_1 + 0x2d0)) {
              local_98 = 0;
              piVar29 = (int *)((longlong)param_1 + 0x39ec);
              do {
                iVar38 = 0;
                piVar30 = local_80;
                if (iVar19 < 1) {
                  iVar19 = param_2[1];
                }
                else {
                  piVar34 = piVar29 + -0x9db;
                  local_b0 = (int *)0x0;
                  do {
                    if (piVar34[1] != 0) {
                      if ((iVar19 == 2) && (iVar38 == 0)) {
                        *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f87116b;
                        silk_stereo_encode_pred(param_5);
                        if (*piVar29 == 0) {
                          *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f871184;
                          silk_stereo_encode_mid_only(param_5);
                        }
                      }
                      if (((int)uVar35 < 1) || (*piVar34 == 0)) {
                        uVar39 = 0;
                      }
                      else {
                        uVar39 = 2;
                      }
                      *(undefined4 *)((longlong)&local_108 + lVar26) = uVar39;
                      *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f8711c0;
                      silk_encode_indices(param_1 + (longlong)iVar38 * 0x4ed,param_5,uVar35,1);
                      cVar1 = *(char *)((longlong)local_b0 + local_98 + 0x1806 + (longlong)param_1);
                      cVar2 = *(char *)((longlong)local_b0 + local_98 + 0x1805 + (longlong)param_1);
                      *(undefined4 *)((longlong)&local_108 + lVar26) =
                           *(undefined4 *)((longlong)(local_b0 + 0x47a) + (longlong)param_1);
                      *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f87120c;
                      silk_encode_pulses(param_5,(int)cVar2,(int)cVar1,
                                         (longlong)(int)uVar35 * 0x140 +
                                         (longlong)iVar38 * 0x2768 + 0x1854 + (longlong)param_1);
                      iVar19 = param_2[1];
                      piVar30 = local_80;
                    }
                    iVar38 = iVar38 + 1;
                    local_b0 = local_b0 + 0x9da;
                    piVar34 = piVar34 + 0x9da;
                  } while (iVar38 < iVar19);
                }
                local_80 = (int *)((longlong)piVar30 + 1);
                local_98 = local_98 + 0x24;
                uVar35 = uVar35 + 1;
                piVar29 = piVar29 + 1;
              } while ((int)uVar35 < *(int *)(param_1 + 0x2d0));
            }
            iVar38 = 0;
            if (0 < iVar19) {
              do {
                lVar22 = (longlong)iVar38;
                iVar38 = iVar38 + 1;
                *(undefined8 *)(lVar22 * 0x2768 + 0x1284 + (longlong)param_1) = 0;
                *(undefined4 *)(lVar22 * 0x2768 + 0x128c + (longlong)param_1) = 0;
              } while (iVar38 < param_2[1]);
            }
            iVar19 = 0x1f;
            if (*(uint *)(param_5 + 0x20) != 0) {
              for (; *(uint *)(param_5 + 0x20) >> iVar19 == 0; iVar19 = iVar19 + -1) {
              }
            }
            piVar29 = (int *)((longlong)param_1 + 0x1684);
            *(int *)(param_1 + 0x9e1) = (*(int *)(param_5 + 0x18) - iVar19) + -1;
          }
          *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f8712c4;
          silk_HP_variable_cutoff(param_1);
          iVar19 = param_2[7];
          iVar38 = (iVar19 * param_2[6]) / 1000;
          if (param_7 == 0) {
            iVar38 = iVar38 - *(int *)(param_1 + 0x9e1);
          }
          iVar36 = 100;
          if (param_2[6] != 10) {
            iVar36 = 0x32;
          }
          iVar36 = iVar36 * (short)((longlong)iVar38 / (longlong)*(int *)(param_1 + 0x2d0)) +
                   *(int *)((longlong)param_1 + 0x4f0c) * -2;
          if ((param_7 == 0) && (0 < *piVar29)) {
            iVar27 = 0x1f;
            if (*(uint *)(param_5 + 0x20) != 0) {
              for (; *(uint *)(param_5 + 0x20) >> iVar27 == 0; iVar27 = iVar27 + -1) {
              }
            }
            iVar36 = iVar36 + (((*piVar29 *
                                 (int)((longlong)iVar38 / (longlong)*(int *)(param_1 + 0x2d0)) -
                                *(int *)(param_5 + 0x18)) + *(int *)(param_1 + 0x9e1) + iVar27) *
                               1000 + 1000) / 500;
          }
          if (iVar19 < 0x1389) {
            if (iVar36 < 0x1389) {
              iVar38 = iVar36;
              if (iVar36 < iVar19) {
                iVar38 = iVar19;
              }
            }
            else {
              iVar38 = 5000;
            }
          }
          else {
            iVar38 = iVar19;
            if ((iVar36 <= iVar19) && (iVar38 = iVar36, iVar36 < 5000)) {
              iVar38 = 5000;
            }
          }
          if (param_2[1] == 2) {
            iVar19 = *piVar29;
            *(int *)((longlong)local_f8 + lVar26 + 0x20) = *(int *)(param_1 + 0x23d);
            *(undefined4 *)((longlong)local_f8 + lVar26 + 0x18) = *(undefined4 *)(param_1 + 0x23c);
            *(int *)((longlong)local_f8 + lVar26 + 0x10) = param_2[0xf];
            *(undefined4 *)((longlong)local_f8 + lVar26 + 8) =
                 *(undefined4 *)((longlong)param_1 + 0x11b4);
            *(int *)((longlong)local_f8 + lVar26) = iVar38;
            *(int **)((longlong)&lStack_100 + lVar26) = &local_68;
            *(longlong *)((longlong)&local_108 + lVar26) =
                 (longlong)iVar19 + 0x4f04 + (longlong)param_1;
            *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f871411;
            silk_stereo_LR_to_MS
                      (param_1 + 0x9da,(longlong)param_1 + 0x13fc,(longlong)param_1 + 0x3b64,
                       (longlong)param_1 + ((longlong)iVar19 * 3 + 0x2779) * 2);
            if (*(char *)((longlong)param_1 + (longlong)*piVar29 + 0x4f04) == '\0') {
              if (*(int *)((longlong)param_1 + 0x4f24) == 1) {
                param_1[0x870] = 0;
                *(undefined4 *)(param_1 + 0x871) = 0;
                *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f871449;
                memset((void *)((longlong)param_1 + 0x27fc),0,0x1120);
                param_1[0x4ef] = 0;
                *(undefined4 *)(param_1 + 0x725) = 100;
                *(undefined4 *)((longlong)param_1 + 0x38e4) = 100;
                *(undefined1 *)(param_1 + 0x870) = 10;
                *(undefined1 *)((longlong)param_1 + 0x3925) = 0;
                *(undefined4 *)((longlong)param_1 + 0x38f4) = 0x10000;
                *(undefined4 *)(param_1 + 0x734) = 1;
              }
              *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f871493;
              silk_encode_do_VAD_FLP(param_1 + 0x4ed,param_8);
            }
            else {
              *(undefined1 *)((longlong)*piVar29 + 0x39e8 + (longlong)param_1) = 0;
            }
            if (param_7 == 0) {
              iVar19 = *piVar29;
              *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f8714c0;
              silk_stereo_encode_pred
                        (param_5,(longlong)param_1 + ((longlong)iVar19 * 3 + 0x2779) * 2);
              if (*(char *)((longlong)*piVar29 + 0x39e8 + (longlong)param_1) == '\0') {
                uVar3 = *(undefined1 *)((longlong)param_1 + (longlong)*piVar29 + 0x4f04);
                *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f8714dc;
                silk_stereo_encode_mid_only(param_5,uVar3);
              }
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x27f) = *(undefined4 *)((longlong)param_1 + 0x4ed4);
            *(undefined4 *)((longlong)param_1 + 0x4ed4) =
                 *(undefined4 *)
                  ((longlong)param_1 + (longlong)*(int *)(param_1 + 0x23d) * 2 + 0x13f8);
          }
          *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f871506;
          silk_encode_do_VAD_FLP(param_1,param_8);
          iVar19 = param_2[1];
          iVar36 = 0;
          if (0 < iVar19) {
            local_b0 = &local_68;
            local_80 = piVar29;
            do {
              iVar27 = param_2[0xe];
              if (local_b8 == 2) {
                if (local_bc == 0) {
                  iVar27 = iVar27 * 3;
LAB_14f87154b:
                  iVar27 = iVar27 / 5;
                }
              }
              else if (local_b8 == 3) {
                if (local_bc == 0) {
                  iVar27 = iVar27 * 2;
                  goto LAB_14f87154b;
                }
                if (local_bc == 1) {
                  iVar27 = (int)((iVar27 * 3 >> 0x1f & 3U) + iVar27 * 3) >> 2;
                }
              }
              uVar33 = 0;
              uVar39 = uVar33;
              if ((param_2[0xd] != 0) && (local_bc == local_b8 + -1)) {
                uVar39 = 1;
              }
              iVar13 = iVar38;
              if (((iVar19 != 1) && (iVar13 = *local_b0, iVar36 == 0)) && (0 < local_64)) {
                iVar27 = iVar27 + param_2[0xe] / (local_b8 * -2);
                uVar39 = uVar33;
              }
              if (0 < iVar13) {
                *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f8715e6;
                silk_control_SNR(param_1 + (longlong)iVar36 * 0x4ed,iVar13);
                if (*(int *)((longlong)param_1 + 0x1684) - iVar36 < 1) {
                  uVar32 = 0;
                }
                else if ((iVar36 < 1) || (*(int *)((longlong)param_1 + 0x4f24) == 0)) {
                  uVar32 = 2;
                }
                else {
                  uVar32 = 1;
                }
                *(undefined4 *)((longlong)&lStack_100 + lVar26) = uVar39;
                *(int *)((longlong)&local_108 + lVar26) = iVar27;
                *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f871636;
                local_c8 = silk_encode_frame_FLP
                                     (param_1 + (longlong)iVar36 * 0x4ed,param_6,param_5,uVar32);
              }
              iVar36 = iVar36 + 1;
              local_b0 = local_b0 + 1;
              *local_80 = *local_80 + 1;
              local_80[-0x112] = 0;
              local_80[-2] = 0;
              local_80 = local_80 + 0x9da;
              iVar19 = param_2[1];
            } while (iVar36 < iVar19);
            piVar29 = (int *)((longlong)param_1 + 0x1684);
          }
          uVar35 = 0;
          *(int *)((longlong)param_1 + 0x4f24) =
               (int)*(char *)((longlong)*piVar29 + 0x4f03 + (longlong)param_1);
          if ((0 < *param_6) &&
             (iVar19 = *(int *)(param_1 + 0x2d0), *(int *)((longlong)param_1 + 0x1684) == iVar19)) {
            uVar37 = param_2[1];
            if (0 < (int)uVar37) {
              puVar17 = param_1 + 0x250;
              uVar18 = (ulonglong)uVar37;
              do {
                lVar22 = 0;
                if (0 < (longlong)*(int *)(puVar17 + 0x80)) {
                  do {
                    uVar35 = uVar35 * 2 | (int)*(char *)(lVar22 + (longlong)puVar17);
                    lVar22 = lVar22 + 1;
                  } while (lVar22 < *(int *)(puVar17 + 0x80));
                }
                uVar35 = uVar35 * 2 | (int)*(char *)((longlong)puVar17 + 3);
                puVar17 = puVar17 + 0x4ed;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            if (param_7 == 0) {
              *(undefined8 *)(auStack_128 + lVar26 + -8) = 0x14f871747;
              ec_enc_patch_initial_bits(param_5,uVar35,(iVar19 + 1) * uVar37);
              uVar37 = param_2[1];
            }
            if ((*(int *)((longlong)param_1 + 0x17d4) != 0) &&
               ((uVar37 == 1 || (*(int *)((longlong)param_1 + 0x3f3c) != 0)))) {
              *param_6 = 0;
            }
            *(int *)((longlong)param_1 + 0x4f0c) =
                 *(int *)((longlong)param_1 + 0x4f0c) + *param_6 * 8;
            iVar19 = *(int *)((longlong)param_1 + 0x4f0c) - (param_2[7] * param_2[6]) / 1000;
            if (iVar19 < 0x2711) {
              if (iVar19 < 0) {
                iVar19 = 0;
              }
            }
            else {
              iVar19 = 10000;
            }
            *(int *)((longlong)param_1 + 0x4f0c) = iVar19;
            if (*(int *)((longlong)param_1 + 0x11b4) <
                (int)((ulonglong)((longlong)*(short *)((longlong)param_1 + 0x4f1c) * 0xc74) >> 0x10)
                + 0xd) {
              *(undefined4 *)(param_1 + 0x9e4) = 1;
              *(undefined4 *)((longlong)param_1 + 0x4f1c) = 0;
            }
            else {
              *(undefined4 *)(param_1 + 0x9e4) = 0;
              *(int *)((longlong)param_1 + 0x4f1c) =
                   *(int *)((longlong)param_1 + 0x4f1c) + param_2[6];
            }
          }
          uVar18 = (ulonglong)local_c8;
          if (local_c0 == 0) goto LAB_14f871811;
          local_bc = local_bc + 1;
        } while( true );
      }
      uVar32 = 0xce;
    }
    uStack_130 = 0x14f8718fa;
    celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/enc_API.c",uVar32);
    uVar18 = 0xffffff9b;
    puVar31 = auStack_128;
  }
  else {
    uStack_130 = 0x14f870896;
    celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/enc_API.c",0xaa);
    puVar31 = auStack_128;
  }
  goto LAB_14f8718ff;
LAB_14f871811:
  local_90 = *(int *)(param_1 + 0x9e4);
LAB_14f87181a:
  iVar36 = 0;
  *(int *)(param_1 + 0x9e3) = param_2[1];
  param_2[0x13] = local_90;
  iVar38 = 0;
  iVar19 = iVar38;
  if ((*(int *)(param_1 + 0x23c) == 0x10) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
    iVar19 = 1;
  }
  param_2[0x14] = iVar19;
  param_2[0x12] = *(short *)(param_1 + 0x23c) * 1000;
  if (param_2[0xf] == 0) {
    iVar38 = (int)*(short *)((longlong)param_1 + 0x4eec);
  }
  param_2[0x15] = iVar38;
  if (param_7 != 0) {
    param_2[6] = local_8c;
    param_2[9] = local_88;
    if (0 < param_2[1]) {
      puVar17 = param_1 + 0x249;
      do {
        *(undefined4 *)((longlong)puVar17 + -0xc) = 0;
        iVar36 = iVar36 + 1;
        *(undefined4 *)puVar17 = 0;
        puVar17 = puVar17 + 0x4ed;
      } while (iVar36 < param_2[1]);
    }
  }
  param_2[0x17] = (int)*(char *)((longlong)param_1 + 0x12ad);
  param_2[0x18] =
       (int)*(short *)(&silk_Quantization_Offsets_Q10 +
                      ((longlong)*(char *)((longlong)param_1 + 0x12ae) +
                      ((longlong)*(char *)((longlong)param_1 + 0x12ad) >> 1) * 2) * 2);
LAB_14f8718ff:
  *(undefined8 *)(puVar31 + -8) = 0x14f87190e;
  return uVar18;
}

// silk_Get_Encoder_Size @ 14f87193c

undefined8 silk_Get_Encoder_Size(undefined4 *param_1)

{
  *param_1 = 0x4f28;
  return 0;
}

// silk_InitEncoder @ 14f87194c

int silk_InitEncoder(void *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  
  iVar2 = 0;
  memset(param_1,0,0x4f28);
  uVar3 = 1;
  lVar5 = 2;
  pvVar4 = param_1;
  do {
    iVar1 = silk_init_encoder(pvVar4,param_2);
    iVar2 = iVar2 + iVar1;
    if (iVar2 != 0) {
      celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/enc_API.c",0x55);
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x2768);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)((longlong)param_1 + 0x4f14) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4f10) = 1;
  *param_3 = 1;
  param_3[1] = *(undefined4 *)((longlong)param_1 + 0x4f14);
  param_3[2] = *(undefined4 *)((longlong)param_1 + 0x11cc);
  param_3[3] = *(undefined4 *)((longlong)param_1 + 0x11d4);
  param_3[4] = *(undefined4 *)((longlong)param_1 + 0x11d8);
  param_3[5] = *(undefined4 *)((longlong)param_1 + 0x11dc);
  param_3[6] = *(undefined4 *)((longlong)param_1 + 0x1204);
  param_3[7] = *(undefined4 *)((longlong)param_1 + 0x1200);
  param_3[8] = *(undefined4 *)((longlong)param_1 + 0x1208);
  param_3[9] = *(undefined4 *)((longlong)param_1 + 0x1210);
  param_3[10] = *(undefined4 *)((longlong)param_1 + 0x17dc);
  param_3[0xc] = *(undefined4 *)((longlong)param_1 + 0x17d0);
  param_3[0xd] = *(undefined4 *)((longlong)param_1 + 0x1244);
  param_3[0x12] = *(short *)((longlong)param_1 + 0x11e0) * 1000;
  param_3[0x13] = *(undefined4 *)((longlong)param_1 + 0x11b8);
  if ((*(int *)((longlong)param_1 + 0x11e0) != 0x10) || (*(int *)((longlong)param_1 + 0x1c) != 0)) {
    uVar3 = 0;
  }
  param_3[0x14] = uVar3;
  if (iVar2 != 0) {
    celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/enc_API.c",0x5e);
  }
  return iVar2;
}

