// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_encode_do_VAD_FLP @ 14f8802b4

void silk_encode_do_VAD_FLP(longlong param_1,int param_2)

{
  (*(code *)(&SILK_VAD_GETSA_Q8_IMPL)[*(uint *)(param_1 + 0x13f4) & 7])(param_1,param_1 + 0x13fa);
  if (param_2 == 0) {
    if (0xc < *(int *)(param_1 + 0x11b4)) {
      *(undefined4 *)(param_1 + 0x11b4) = 0xc;
      goto LAB_14f8802f7;
    }
  }
  else {
LAB_14f8802f7:
    if (0xc < *(int *)(param_1 + 0x11b4)) {
      *(undefined8 *)(param_1 + 0x17d4) = 0;
      *(undefined1 *)(param_1 + 0x12ad) = 1;
      *(undefined1 *)((longlong)*(int *)(param_1 + 0x1684) + 0x1280 + param_1) = 1;
      return;
    }
  }
  *(int *)(param_1 + 0x17d8) = *(int *)(param_1 + 0x17d8) + 1;
  *(undefined1 *)(param_1 + 0x12ad) = 0;
  if (10 < *(int *)(param_1 + 0x17d8)) {
    if (*(int *)(param_1 + 0x17d8) < 0x1f) goto LAB_14f88032c;
    *(undefined4 *)(param_1 + 0x17d8) = 10;
  }
  *(undefined4 *)(param_1 + 0x17d4) = 0;
LAB_14f88032c:
  *(undefined1 *)((longlong)*(int *)(param_1 + 0x1684) + 0x1280 + param_1) = 0;
  return;
}

// silk_encode_frame_FLP @ 14f88036c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
silk_encode_frame_FLP
          (longlong param_1,int *param_2,undefined8 *param_3,int param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  char cVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  short *psVar23;
  int iVar24;
  uint uVar25;
  char *pcVar26;
  ulonglong uVar27;
  int iVar28;
  short sVar29;
  longlong lVar30;
  int *piVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_4268 [32];
  undefined1 *local_4248;
  longlong local_4240;
  undefined1 local_4238;
  uint local_4234;
  undefined1 local_4230;
  int local_422c;
  uint local_4228;
  int local_4224;
  undefined2 local_4220;
  int local_421c;
  int local_4218;
  int local_4214;
  uint local_4210;
  int local_420c;
  int local_4208;
  undefined4 local_4204;
  int local_4200;
  int *local_41f8;
  undefined8 *local_41f0;
  longlong local_41e8;
  undefined4 local_41e0;
  undefined4 uStack_41dc;
  undefined4 uStack_41d8;
  undefined4 uStack_41d4;
  undefined4 local_41d0;
  undefined4 uStack_41cc;
  undefined4 uStack_41c8;
  uint uStack_41c4;
  undefined4 local_41c0;
  undefined4 uStack_41bc;
  undefined4 uStack_41b8;
  undefined4 uStack_41b4;
  undefined8 local_41b0;
  undefined1 local_41a8 [4352];
  undefined1 local_30a8 [4352];
  float local_1fa8 [56];
  undefined4 auStack_1ec8 [117];
  float local_1cf4;
  int aiStack_1cd0 [4];
  undefined1 local_1cc0;
  undefined1 local_1cb8 [4352];
  int local_bb8 [4];
  int local_ba8 [4];
  int local_b98 [4];
  int local_b88 [4];
  undefined1 local_b78 [2688];
  ulonglong local_f8;
  undefined8 local_48;
  
  local_48 = 0x14f88038b;
  local_f8 = __security_cookie.value ^ (ulonglong)auStack_4268;
  local_4218 = 0;
  local_420c = 0;
  local_4224 = 0;
  local_bb8[0] = 0;
  local_bb8[1] = 0;
  local_bb8[2] = 0;
  local_bb8[3] = 0;
  local_4238 = 0;
  local_4200 = 0;
  *(byte *)(param_1 + 0x12b2) = *(byte *)(param_1 + 0x120c) & 3;
  iVar16 = *(int *)(param_1 + 0x11f0);
  *(int *)(param_1 + 0x120c) = *(int *)(param_1 + 0x120c) + 1;
  lVar30 = param_1 + 0x1c24 + (longlong)iVar16 * 4;
  local_4208 = param_4;
  local_41f8 = param_2;
  local_41f0 = param_3;
  local_41e8 = lVar30;
  silk_LP_variable_cutoff(param_1 + 0x10,param_1 + 0x13fa,*(undefined4 *)(param_1 + 0x11e8));
  iVar24 = *(int *)(param_1 + 0x11e0);
  iVar15 = *(int *)(param_1 + 0x11e8) + -1;
  lVar20 = (longlong)iVar15;
  if (-1 < iVar15) {
    psVar23 = (short *)(param_1 + 0x13fa + lVar20 * 2);
    do {
      sVar29 = *psVar23;
      psVar23 = psVar23 + -1;
      *(float *)((longlong)(iVar24 * 5) * 4 + lVar30 + lVar20 * 4) = (float)(int)sVar29;
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
  }
  uVar25 = 0;
  do {
    uVar18 = uVar25 & 2;
    lVar20 = (longlong)
             (int)((*(int *)(param_1 + 0x11e8) >> 3) * uVar25 + *(int *)(param_1 + 0x11e0) * 5);
    uVar25 = uVar25 + 1;
    *(float *)(lVar30 + lVar20 * 4) =
         (float)(int)(1 - uVar18) * __real_358637bd + *(float *)(lVar30 + lVar20 * 4);
  } while ((int)uVar25 < 8);
  if (*(int *)(param_1 + 0x1248) == 0) {
    local_4248._0_4_ = *(undefined4 *)(param_1 + 0x13f4);
    silk_find_pitch_lags_FLP(param_1,local_1fa8,local_b78,lVar30);
    silk_noise_shape_analysis_FLP(param_1,local_1fa8,local_b78 + (longlong)iVar16 * 4,lVar30);
    local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,param_4);
    silk_find_pred_coefs_FLP(param_1,local_1fa8,local_b78 + (longlong)iVar16 * 4,lVar30);
    silk_process_gains_FLP(param_1,local_1fa8,param_4);
    fVar11 = __real_37800000;
    pcVar26 = (char *)(param_1 + ((longlong)*(int *)(param_1 + 0x1684) + 0xaa) * 0x24);
    if ((*(int *)(param_1 + 0x17e0) != 0) && (0x4d < *(int *)(param_1 + 0x11b4))) {
      *(undefined4 *)(param_1 + 0x1284 + (longlong)*(int *)(param_1 + 0x1684) * 4) = 1;
      memcpy(local_1cb8,(void *)(param_1 + 0x94),0x1100);
      uVar2 = *(undefined8 *)(param_1 + 0x1298);
      *(undefined8 *)pcVar26 = *(undefined8 *)(param_1 + 0x1290);
      *(undefined8 *)(pcVar26 + 8) = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 0x12a8);
      *(undefined8 *)(pcVar26 + 0x10) = *(undefined8 *)(param_1 + 0x12a0);
      *(undefined8 *)(pcVar26 + 0x18) = uVar2;
      *(undefined4 *)(pcVar26 + 0x20) = *(undefined4 *)(param_1 + 0x12b0);
      iVar16 = *(int *)(param_1 + 0x11e4);
      memcpy(local_b98,local_1fa8,(longlong)iVar16 << 2);
      if ((*(int *)(param_1 + 0x1684) == 0) ||
         (*(int *)(param_1 + 0x1280 + (longlong)*(int *)(param_1 + 0x1684) * 4) == 0)) {
        *(undefined1 *)(param_1 + 0x11bc) = *(undefined1 *)(param_1 + 0x1c18);
        cVar12 = *(char *)(param_1 + 0x17e4) + *pcVar26;
        cVar13 = '?';
        if (cVar12 < '?') {
          cVar13 = cVar12;
        }
        *pcVar26 = cVar13;
        iVar16 = *(int *)(param_1 + 0x11e4);
      }
      local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,iVar16);
      silk_gains_dequant(local_ba8,pcVar26,param_1 + 0x11bc,param_4 == 2);
      uVar21 = (ulonglong)*(uint *)(param_1 + 0x11e4);
      if (0 < (int)*(uint *)(param_1 + 0x11e4)) {
        lVar20 = 0;
        do {
          *(float *)((longlong)local_1fa8 + lVar20) =
               (float)*(int *)((longlong)local_ba8 + lVar20) * fVar11;
          uVar21 = uVar21 - 1;
          lVar20 = lVar20 + 4;
        } while (uVar21 != 0);
      }
      local_4248 = (undefined1 *)(param_1 + 0x1854 + (longlong)*(int *)(param_1 + 0x1684) * 0x140);
      local_4240 = lVar30;
      silk_NSQ_wrapper_FLP(param_1,local_1fa8,pcVar26,local_1cb8);
      memcpy(local_1fa8,local_b98,(longlong)*(int *)(param_1 + 0x11e4) << 2);
    }
    local_4228 = 0;
    uVar21 = 0x100;
    local_4210 = 0;
    local_4234 = 0x100;
    iVar16 = silk_gains_ID(param_1 + 0x1290,*(undefined4 *)(param_1 + 0x11e4));
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    local_421c = -1;
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    local_4214 = -1;
    uVar2 = param_3[6];
    memcpy(local_41a8,(void *)(param_1 + 0x94),0x1100);
    fVar10 = __real_3fc00000;
    local_4230 = *(undefined1 *)(param_1 + 0x12b2);
    iVar24 = 0;
    uVar35 = (undefined4)local_41b0;
    uVar36 = (undefined4)((ulonglong)local_41b0 >> 0x20);
    local_4220 = *(undefined2 *)(param_1 + 0x169c);
    local_4204 = *(undefined4 *)(param_1 + 0x1698);
    uVar37 = local_41c0;
    uVar38 = uStack_41bc;
    uVar39 = uStack_41b8;
    uVar40 = uStack_41b4;
    uVar41 = local_41e0;
    uVar42 = uStack_41dc;
    uVar43 = uStack_41d8;
    uVar44 = uStack_41d4;
    uVar32 = local_41d0;
    uVar33 = uStack_41cc;
    uVar34 = uStack_41c8;
    uVar25 = uStack_41c4;
    while( true ) {
      iVar15 = local_4224;
      local_422c = iVar24;
      if ((iVar16 != local_421c) && (iVar15 = local_420c, iVar16 != local_4214)) {
        if (0 < iVar24) {
          *param_3 = uVar4;
          param_3[1] = uVar5;
          param_3[2] = uVar6;
          param_3[3] = uVar7;
          param_3[4] = uVar8;
          param_3[5] = uVar9;
          param_3[6] = uVar2;
          memcpy((void *)(param_1 + 0x94),local_41a8,0x1100);
          *(undefined1 *)(param_1 + 0x12b2) = local_4230;
          *(undefined2 *)(param_1 + 0x169c) = local_4220;
          *(undefined4 *)(param_1 + 0x1698) = local_4204;
        }
        puVar1 = (undefined1 *)(param_1 + 0x12b4);
        local_4248 = puVar1;
        local_4240 = lVar30;
        silk_NSQ_wrapper_FLP(param_1,local_1fa8,param_1 + 0x1290,param_1 + 0x94);
        if ((iVar24 == 6) && (local_4228 == 0)) {
          uVar41 = *(undefined4 *)param_3;
          uVar42 = *(undefined4 *)((longlong)param_3 + 4);
          uVar43 = *(undefined4 *)(param_3 + 1);
          uVar44 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar32 = *(undefined4 *)(param_3 + 2);
          uVar33 = *(undefined4 *)((longlong)param_3 + 0x14);
          uVar34 = *(undefined4 *)(param_3 + 3);
          uVar25 = *(uint *)((longlong)param_3 + 0x1c);
          uVar37 = *(undefined4 *)(param_3 + 4);
          uVar38 = *(undefined4 *)((longlong)param_3 + 0x24);
          uVar39 = *(undefined4 *)(param_3 + 5);
          uVar40 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar35 = (undefined4)param_3[6];
          uVar36 = (undefined4)((ulonglong)param_3[6] >> 0x20);
        }
        local_4248._0_4_ = local_4208;
        silk_encode_indices(param_1,param_3,*(undefined4 *)(param_1 + 0x1684),0);
        local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,*(undefined4 *)(param_1 + 0x11e8));
        silk_encode_pulses(param_3,(int)*(char *)(param_1 + 0x12ad),(int)*(char *)(param_1 + 0x12ae)
                           ,puVar1);
        iVar24 = 0x1f;
        if (*(uint *)(param_3 + 4) != 0) {
          for (; *(uint *)(param_3 + 4) >> iVar24 == 0; iVar24 = iVar24 + -1) {
          }
        }
        iVar15 = (*(int *)(param_3 + 3) - iVar24) + -1;
        if (((local_422c == 6) && (local_4228 == 0)) && (param_5 < iVar15)) {
          *(undefined4 *)param_3 = uVar41;
          *(undefined4 *)((longlong)param_3 + 4) = uVar42;
          *(undefined4 *)(param_3 + 1) = uVar43;
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar44;
          iVar24 = 0;
          *(undefined4 *)(param_3 + 2) = uVar32;
          *(undefined4 *)((longlong)param_3 + 0x14) = uVar33;
          *(undefined4 *)(param_3 + 3) = uVar34;
          *(uint *)((longlong)param_3 + 0x1c) = uVar25;
          *(undefined4 *)(param_3 + 4) = uVar37;
          *(undefined4 *)((longlong)param_3 + 0x24) = uVar38;
          *(undefined4 *)(param_3 + 5) = uVar39;
          *(undefined4 *)((longlong)param_3 + 0x2c) = uVar40;
          param_3[6] = CONCAT44(uVar36,uVar35);
          *(undefined1 *)(param_1 + 0x1c18) = local_1cc0;
          puVar17 = (undefined1 *)(param_1 + 0x1290);
          if (0 < *(int *)(param_1 + 0x11e4)) {
            do {
              *puVar17 = 4;
              iVar24 = iVar24 + 1;
              puVar17 = puVar17 + 1;
            } while (iVar24 < *(int *)(param_1 + 0x11e4));
          }
          if (local_4208 != 2) {
            *(undefined1 *)(param_1 + 0x1290) = local_1cc0;
          }
          iVar24 = 0;
          *(undefined2 *)(param_1 + 0x169c) = local_4220;
          *(undefined4 *)(param_1 + 0x1698) = local_4204;
          puVar17 = puVar1;
          if (0 < *(int *)(param_1 + 0x11e8)) {
            do {
              *puVar17 = 0;
              iVar24 = iVar24 + 1;
              puVar17 = puVar17 + 1;
            } while (iVar24 < *(int *)(param_1 + 0x11e8));
          }
          local_4248._0_4_ = local_4208;
          silk_encode_indices(param_1,param_3,*(undefined4 *)(param_1 + 0x1684),0);
          local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,*(undefined4 *)(param_1 + 0x11e8));
          silk_encode_pulses(param_3,(int)*(char *)(param_1 + 0x12ad),
                             (int)*(char *)(param_1 + 0x12ae),puVar1);
          iVar24 = 0x1f;
          if (*(uint *)(param_3 + 4) != 0) {
            for (; *(uint *)(param_3 + 4) >> iVar24 == 0; iVar24 = iVar24 + -1) {
            }
          }
          iVar15 = (*(int *)(param_3 + 3) - iVar24) + -1;
        }
        if (((param_6 == 0) && (local_422c == 0)) && (param_2 = local_41f8, iVar15 <= param_5))
        goto LAB_14f880e11;
      }
      param_2 = local_41f8;
      if (local_422c == 6) break;
      if (param_5 < iVar15) {
        if ((local_4228 == 0) && (1 < local_422c)) {
          local_1cf4 = local_1cf4 * fVar10;
          if (local_1cf4 <= fVar10) {
            local_1cf4 = 1.5;
          }
          else {
          }
          local_4210 = 0;
          local_4214 = -1;
          *(undefined1 *)(param_1 + 0x12ae) = 0;
        }
        else {
          local_4200 = (int)(short)uVar21;
          local_4210 = 1;
          local_4214 = iVar16;
          local_420c = iVar15;
LAB_14f880b0b:
          if (local_4228 != 0) goto LAB_14f880be5;
        }
        if (param_5 < iVar15) {
          iVar16 = *(int *)(param_1 + 0x11e4);
          iVar24 = 0;
          if (0 < iVar16) {
            iVar3 = *(int *)(param_1 + 0x11ec);
            piVar31 = local_ba8;
            lVar20 = 0;
            do {
              iVar28 = 0;
              iVar22 = iVar3 * iVar24;
              iVar24 = iVar24 + 1;
              iVar19 = iVar3 * iVar24;
              if (iVar22 < iVar19) {
                pcVar26 = (char *)(param_1 + 0x12b4 + (longlong)iVar22);
                uVar21 = (ulonglong)(uint)(iVar19 - iVar22);
                do {
                  cVar13 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  uVar18 = (int)cVar13 >> 0x1f;
                  iVar28 = iVar28 + (((int)cVar13 ^ uVar18) - uVar18);
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              if ((local_422c == 0) ||
                 ((iVar28 < *(int *)((longlong)local_b98 + lVar20) &&
                  (*(int *)((longlong)local_bb8 + lVar20) == 0)))) {
                *(int *)((longlong)local_b98 + lVar20) = iVar28;
                *(short *)piVar31 = (short)local_4234;
              }
              else {
                *(undefined4 *)((longlong)local_bb8 + lVar20) = 1;
              }
              lVar20 = lVar20 + 4;
              piVar31 = (int *)((longlong)piVar31 + 2);
              lVar30 = local_41e8;
              param_3 = local_41f0;
            } while (iVar24 < iVar16);
          }
          uVar21 = (ulonglong)local_4234;
        }
      }
      else {
        if (param_5 + -5 <= iVar15) goto LAB_14f880e11;
        local_4218 = (int)(short)uVar21;
        local_4228 = 1;
        local_4224 = iVar15;
        if (iVar16 != local_421c) {
          uVar18 = *(uint *)((longlong)param_3 + 0x1c);
          uVar35 = (undefined4)param_3[6];
          uVar36 = (undefined4)((ulonglong)param_3[6] >> 0x20);
          uVar41 = *(undefined4 *)param_3;
          uVar42 = *(undefined4 *)((longlong)param_3 + 4);
          uVar43 = *(undefined4 *)(param_3 + 1);
          uVar44 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar32 = *(undefined4 *)(param_3 + 2);
          uVar33 = *(undefined4 *)((longlong)param_3 + 0x14);
          uVar34 = *(undefined4 *)(param_3 + 3);
          uVar25 = *(uint *)((longlong)param_3 + 0x1c);
          uVar37 = *(undefined4 *)(param_3 + 4);
          uVar38 = *(undefined4 *)((longlong)param_3 + 0x24);
          uVar39 = *(undefined4 *)(param_3 + 5);
          uVar40 = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_421c = iVar16;
          if (0x4fb < uVar18) {
            celt_fatal("assertion failed: psRangeEnc->offs <= 1275",
                       "../../../third_party/opus/src/silk/float/encode_frame_FLP.c",0x119);
            uVar18 = *(uint *)((longlong)param_3 + 0x1c);
          }
          memcpy(local_1cb8,(void *)*param_3,(ulonglong)uVar18);
          memcpy(local_30a8,(void *)(param_1 + 0x94),0x1100);
          local_4238 = *(undefined1 *)(param_1 + 0x1c18);
          goto LAB_14f880b0b;
        }
      }
LAB_14f880be5:
      if ((local_4210 & local_4228) == 0) {
        sVar29 = (short)uVar21;
        if (iVar15 <= param_5) {
          lVar20 = silk_log2lin((iVar15 * 0x80 + param_5 * -0x80) / *(int *)(param_1 + 0x11e8) +
                                0x800);
          uVar14 = (ushort)((ulonglong)(lVar20 * sVar29) >> 0x10);
          goto LAB_14f880c86;
        }
        if (sVar29 < 0x4000) {
          uVar21 = CONCAT62((int6)(uVar21 >> 0x10),sVar29 * 2);
        }
        else {
          uVar21 = 0x7fff;
        }
LAB_14f880c8a:
        local_4234 = (uint)uVar21;
      }
      else {
        iVar16 = local_4200 - local_4218 >> 2;
        local_4234 = local_4218 +
                     ((param_5 - local_4224) * (local_4200 - local_4218)) /
                     (local_420c - local_4224);
        uVar21 = (ulonglong)local_4234;
        if (iVar16 + local_4218 < (int)(short)local_4234) {
          uVar14 = (short)iVar16 + (short)local_4218;
LAB_14f880c86:
          uVar21 = (ulonglong)uVar14;
          goto LAB_14f880c8a;
        }
        if ((int)(short)local_4234 < local_4200 - iVar16) {
          uVar14 = (short)local_4200 - (short)iVar16;
          goto LAB_14f880c86;
        }
      }
      uVar18 = *(uint *)(param_1 + 0x11e4);
      if (0 < (int)uVar18) {
        piVar31 = local_ba8;
        lVar20 = 0;
        uVar27 = (ulonglong)uVar18;
        do {
          if (*(int *)((longlong)local_bb8 + lVar20) == 0) {
            sVar29 = (short)uVar21;
          }
          else {
            sVar29 = (short)*piVar31;
          }
          iVar16 = 0x7fffff;
          iVar24 = (int)((ulonglong)
                         ((longlong)*(int *)((longlong)aiStack_1cd0 + lVar20) * (longlong)sVar29) >>
                        0x10);
          if ((iVar24 < 0x800000) && (iVar16 = iVar24, iVar24 < -0x800000)) {
            iVar16 = -0x800000;
          }
          piVar31 = (int *)((longlong)piVar31 + 2);
          *(int *)((longlong)local_b88 + lVar20) = iVar16 << 8;
          lVar20 = lVar20 + 4;
          uVar27 = uVar27 - 1;
          param_3 = local_41f0;
        } while (uVar27 != 0);
      }
      *(undefined1 *)(param_1 + 0x1c18) = local_1cc0;
      local_4248 = (undefined1 *)CONCAT44(local_4248._4_4_,uVar18);
      silk_gains_quant(param_1 + 0x1290,local_b88,(undefined1 *)(param_1 + 0x1c18),local_4208 == 2);
      iVar16 = silk_gains_ID(param_1 + 0x1290,*(undefined4 *)(param_1 + 0x11e4));
      uVar27 = (ulonglong)*(uint *)(param_1 + 0x11e4);
      if (0 < (int)*(uint *)(param_1 + 0x11e4)) {
        lVar20 = 0;
        do {
          *(float *)((longlong)local_1fa8 + lVar20) =
               (float)*(int *)((longlong)local_b88 + lVar20) * fVar11;
          uVar27 = uVar27 - 1;
          lVar20 = lVar20 + 4;
        } while (uVar27 != 0);
      }
      iVar24 = local_422c + 1;
    }
    if ((local_4228 != 0) && ((iVar16 == local_421c || (param_5 < iVar15)))) {
      *(undefined4 *)param_3 = uVar41;
      *(undefined4 *)((longlong)param_3 + 4) = uVar42;
      *(undefined4 *)(param_3 + 1) = uVar43;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar44;
      *(undefined4 *)(param_3 + 2) = uVar32;
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar33;
      *(undefined4 *)(param_3 + 3) = uVar34;
      *(uint *)((longlong)param_3 + 0x1c) = uVar25;
      *(undefined4 *)(param_3 + 4) = uVar37;
      *(undefined4 *)((longlong)param_3 + 0x24) = uVar38;
      *(undefined4 *)(param_3 + 5) = uVar39;
      *(undefined4 *)((longlong)param_3 + 0x2c) = uVar40;
      param_3[6] = CONCAT44(uVar36,uVar35);
      if (0x4fb < uVar25) {
        celt_fatal("assertion failed: sRangeEnc_copy2.offs <= 1275",
                   "../../../third_party/opus/src/silk/float/encode_frame_FLP.c",0xfb);
      }
      memcpy((void *)*param_3,local_1cb8,(ulonglong)uVar25);
      memcpy((void *)(param_1 + 0x94),local_30a8,0x1100);
      *(undefined1 *)(param_1 + 0x1c18) = local_4238;
      param_2 = local_41f8;
    }
  }
LAB_14f880e11:
  memmove((void *)(param_1 + 0x1c24),
          (void *)(param_1 + ((longlong)*(int *)(param_1 + 0x11e8) + 0x709) * 4),
          (longlong)(*(int *)(param_1 + 0x11e0) * 5 + *(int *)(param_1 + 0x11f0)) << 2);
  if (*(int *)(param_1 + 0x1248) == 0) {
    *(undefined4 *)(param_1 + 0x1238) = 0;
    *(undefined4 *)(param_1 + 0x11c0) = auStack_1ec8[*(int *)(param_1 + 0x11e4)];
    *(undefined1 *)(param_1 + 0x11bd) = *(undefined1 *)(param_1 + 0x12ad);
    iVar16 = 0x1f;
    if (*(uint *)(param_3 + 4) != 0) {
      for (; *(uint *)(param_3 + 4) >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    *param_2 = (*(int *)(param_3 + 3) - iVar16) + 6 >> 3;
  }
  else {
    *param_2 = 0;
  }
  return 0;
}

