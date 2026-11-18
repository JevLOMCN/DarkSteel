// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 13

// opus_decode @ 14f8686a8

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int opus_decode(longlong param_1,longlong param_2,int param_3,undefined2 *param_4,int param_5,
               int param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  float *pfVar11;
  float fVar12;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  int aiStack_68 [6];
  undefined8 local_50;
  undefined4 local_48 [4];
  undefined2 *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_38;
  iVar9 = 0;
  if (param_5 < 1) {
    iVar4 = -1;
    puVar10 = auStack_88;
  }
  else {
    iVar4 = param_5;
    local_38 = param_4;
    if (((param_2 != 0) && (0 < param_3)) && (param_6 == 0)) {
      uStack_90 = 0x14f868715;
      iVar4 = opus_packet_get_nb_samples(param_2,param_3,*(undefined4 *)(param_1 + 0xc));
      if (iVar4 < 1) {
        iVar4 = -4;
        puVar10 = auStack_88;
        goto LAB_14f868810;
      }
      if (param_5 < iVar4) {
        iVar4 = param_5;
      }
    }
    iVar6 = *(int *)(param_1 + 8);
    if ((iVar6 != 1) && (iVar6 != 2)) {
      uStack_90 = 0x14f86874c;
      celt_fatal("assertion failed: st->channels == 1 || st->channels == 2",
                 "../../../third_party/opus/src/src/opus_decoder.c",0x32a);
      iVar6 = *(int *)(param_1 + 8);
    }
    uVar5 = (longlong)(iVar6 * iVar4) * 4;
    uVar7 = uVar5 + 0xf;
    if (uVar7 <= uVar5) {
      uVar7 = 0xffffffffffffff0;
    }
    uStack_90 = 0x14f868778;
    lVar1 = -(uVar7 & 0xfffffffffffffff0);
    *(undefined4 *)((longlong)local_48 + lVar1) = 1;
    pfVar11 = (float *)((longlong)&local_38 + lVar1);
    *(undefined8 *)((longlong)&local_50 + lVar1) = 0;
    *(undefined4 *)((longlong)aiStack_68 + lVar1 + 0x10) = 0;
    *(int *)((longlong)aiStack_68 + lVar1 + 8) = param_6;
    *(int *)((longlong)aiStack_68 + lVar1) = iVar4;
    *(undefined8 *)(auStack_88 + lVar1 + -8) = 0x14f8687ab;
    iVar4 = opus_decode_native(param_1,param_2,param_3,pfVar11);
    fVar3 = __real_c7000000;
    fVar2 = __real_46fffe00;
    puVar10 = auStack_88 + lVar1;
    if ((0 < iVar4) &&
       (puVar8 = local_38, puVar10 = auStack_88 + lVar1, 0 < *(int *)(param_1 + 8) * iVar4)) {
      do {
        fVar12 = *pfVar11 * __real_47000000;
        if (*pfVar11 * __real_47000000 <= fVar3) {
          fVar12 = fVar3;
        }
        if (fVar2 <= fVar12) {
          fVar12 = fVar2;
        }
        local_38 = (undefined2 *)CONCAT44(local_38._4_4_,fVar12);
        iVar9 = iVar9 + 1;
        pfVar11 = pfVar11 + 1;
        *puVar8 = (short)(int)ROUND(fVar12);
        puVar8 = puVar8 + 1;
        puVar10 = auStack_88 + lVar1;
      } while (iVar9 < *(int *)(param_1 + 8) * iVar4);
    }
  }
LAB_14f868810:
  *(undefined8 *)(puVar10 + -8) = 0x14f86881c;
  return iVar4;
}

// opus_decode_float @ 14f868844

undefined8 opus_decode_float(void)

{
  undefined8 uVar1;
  int in_stack_00000028;
  
  if (in_stack_00000028 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = opus_decode_native();
  }
  return uVar1;
}

// FUN_14f86888c @ 14f86888c

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14f86888c(int *param_1,ulonglong param_2,int param_3,float *param_4,uint param_5,
                       int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  short *psVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  float *pfVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  short *psVar27;
  float *pfVar28;
  float fVar29;
  double dVar30;
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  float local_f8 [2];
  longlong local_f0;
  longlong local_e8;
  int local_e0 [2];
  float local_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  longlong local_b8;
  float local_b0;
  int iStack_ac;
  uint local_a8 [2];
  ulonglong local_a0;
  int local_98;
  int local_94;
  float local_90;
  float local_8c;
  longlong local_88;
  longlong local_80;
  short *local_78;
  undefined1 local_70 [8];
  int local_68;
  int local_58;
  uint local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)&local_d8;
  iVar22 = 0;
  iVar9 = 0;
  local_80 = (longlong)param_1[1] + (longlong)param_1;
  local_b8 = (longlong)*param_1 + (longlong)param_1;
  local_8c = 0.0;
  local_88 = 0;
  iStack_cc = 0;
  local_90 = (float)(param_1[3] / 0x32);
  iStack_d4 = 0;
  iStack_ac = 0;
  iStack_c4 = 0;
  fVar29 = (float)((int)local_90 >> 1);
  local_a8[0] = 0;
  local_d8 = (float)((int)local_90 >> 2);
  local_d0 = (int)local_90 >> 3;
  if ((int)param_5 < local_d0) {
    uVar12 = 0xfffffffe;
    puVar21 = auStack_118;
    goto LAB_14f8694a0;
  }
  uVar18 = (param_1[3] / 0x19) * 3;
  if ((int)uVar18 <= (int)param_5) {
    param_5 = uVar18;
  }
  uVar24 = (ulonglong)param_5;
  local_a0 = param_2;
  local_c8 = param_3;
  if (param_3 < 2) {
    local_a0 = 0;
    if (param_1[0x10] <= (int)param_5) {
      uVar24 = (ulonglong)(uint)param_1[0x10];
      goto LAB_14f868987;
    }
LAB_14f8689c3:
    iVar10 = param_1[0xf];
    iVar16 = 0;
    fVar25 = (float)uVar24;
    local_94 = 0;
    uVar12 = uVar24;
    if (iVar10 == 0) {
      puVar21 = auStack_118;
      if (0 < (int)fVar25 * param_1[2]) {
        do {
          *param_4 = 0.0;
          param_4 = param_4 + 1;
          iVar16 = iVar16 + 1;
          puVar21 = auStack_118;
        } while (iVar16 < (int)fVar25 * param_1[2]);
      }
      goto LAB_14f8694a0;
    }
    local_c0 = iVar10;
    if ((int)local_90 < (int)fVar25) {
      do {
        local_f0._0_4_ = 0;
        local_f8[0] = local_90;
        if ((int)fVar25 < (int)local_90) {
          local_f8[0] = fVar25;
        }
        uStack_120 = 0x14f868a1f;
        uVar12 = FUN_14f86888c(param_1,0,0,param_4);
        iVar22 = (int)uVar12;
        puVar21 = auStack_118;
        if (iVar22 < 0) break;
        fVar25 = (float)((int)fVar25 - iVar22);
        param_4 = param_4 + param_1[2] * iVar22;
        uVar12 = uVar24;
        puVar21 = auStack_118;
      } while (0 < (int)fVar25);
      goto LAB_14f8694a0;
    }
    fVar26 = fVar25;
    if (((((int)fVar25 < (int)local_90) && (fVar26 = fVar29, (int)fVar25 <= (int)fVar29)) &&
        (fVar26 = fVar25, iVar22 = iVar9, iVar10 != 1000)) &&
       (((int)local_d8 < (int)fVar25 && ((int)fVar25 < (int)fVar29)))) {
      fVar26 = local_d8;
    }
  }
  else {
LAB_14f868987:
    fVar25 = (float)uVar24;
    if (local_a0 == 0) goto LAB_14f8689c3;
    iVar10 = param_1[0xe];
    iVar22 = param_1[0xd];
    fVar26 = (float)param_1[0x10];
    uStack_120 = 0x14f8689ae;
    local_c0 = iVar10;
    local_94 = iVar22;
    ec_dec_init(local_70,local_a0,param_3);
  }
  fVar7 = local_d8;
  iVar9 = 0;
  local_98 = 0;
  iVar16 = local_98;
  if ((local_a0 != 0) && (iVar11 = param_1[0xf], 0 < iVar11)) {
    if (iVar10 == 0x3ea) {
      if ((iVar11 != 0x3ea) && (param_1[0x11] == 0)) {
LAB_14f868a9a:
        iStack_cc = 1;
        iVar16 = param_1[2] * (int)local_d8;
        if (iVar10 == 0x3ea) {
          iVar9 = param_1[2] * (int)local_d8;
          iVar16 = local_98;
        }
      }
    }
    else if (iVar11 == 0x3ea) goto LAB_14f868a9a;
  }
  local_98 = iVar16;
  uVar12 = (longlong)iVar9 * 4 + 0xf;
  if (uVar12 <= (ulonglong)((longlong)iVar9 * 4)) {
    uVar12 = 0xffffffffffffff0;
  }
  uStack_120 = 0x14f868adc;
  lVar3 = -(uVar12 & 0xfffffffffffffff0);
  if ((iStack_cc != 0) && (iVar10 == 0x3ea)) {
    *(undefined4 *)((longlong)&local_f0 + lVar3) = 0;
    fVar8 = fVar26;
    if ((int)fVar7 < (int)fVar26) {
      fVar8 = local_d8;
    }
    *(float *)((longlong)local_f8 + lVar3) = fVar8;
    local_88 = (longlong)&local_d8 + lVar3;
    *(undefined8 *)(auStack_118 + lVar3 + -8) = 0x14f868b14;
    FUN_14f86888c(param_1);
  }
  if ((int)fVar25 < (int)fVar26) {
    uVar12 = 0xffffffff;
    puVar21 = auStack_118 + lVar3;
    goto LAB_14f8694a0;
  }
  if (iVar10 == 0x3ea) {
    iVar9 = 0;
  }
  else {
    fVar25 = fVar26;
    if ((int)fVar26 < (int)fVar29) {
      fVar25 = fVar29;
    }
    iVar9 = (int)fVar25 * param_1[2];
  }
  uVar12 = (longlong)iVar9 * 2 + 0xf;
  if (uVar12 <= (ulonglong)((longlong)iVar9 * 2)) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_118 + lVar3 + -8) = 0x14f868b66;
  lVar5 = local_80;
  lVar4 = -(uVar12 & 0xfffffffffffffff0);
  psVar27 = (short *)((longlong)&local_d8 + lVar4 + lVar3);
  local_78 = psVar27;
  if (iVar10 != 0x3ea) {
    if (param_1[0xf] == 0x3ea) {
      *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x14f868b92;
      silk_InitDecoder(lVar5);
    }
    uVar12 = local_a0;
    iVar9 = ((int)fVar26 * 1000) / param_1[3];
    if (iVar9 < 10) {
      iVar9 = 10;
    }
    param_1[8] = iVar9;
    if (local_a0 != 0) {
      param_1[5] = param_1[0xc];
      if (local_c0 == 1000) {
        if (iVar22 == 0x44d) {
          param_1[7] = 8000;
        }
        else if (iVar22 == 0x44e) {
          param_1[7] = 12000;
        }
        else {
          param_1[7] = 16000;
          if (iVar22 != 0x44f) {
            *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x14f868c11;
            celt_fatal("assertion failed: 0","../../../third_party/opus/src/src/opus_decoder.c");
          }
        }
      }
      else {
        param_1[7] = 16000;
      }
    }
    iVar22 = param_6 * 2;
    iVar9 = 0;
    if (uVar12 == 0) {
      iVar22 = 1;
      iVar9 = 0;
    }
    do {
      lVar5 = local_80;
      *(int *)((longlong)local_e0 + lVar4 + lVar3) = param_1[0xb];
      *(float **)((longlong)&local_e8 + lVar4 + lVar3) = &local_b0;
      *(short **)((longlong)&local_f0 + lVar4 + lVar3) = psVar27;
      *(undefined1 **)((longlong)local_f8 + lVar4 + lVar3) = local_70;
      *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x14f868c68;
      iVar10 = silk_Decode(lVar5,param_1 + 4,iVar22,iVar9 == 0);
      iVar16 = 0;
      if (iVar10 != 0) {
        if (iVar22 == 0) {
          uVar12 = 0xfffffffd;
          puVar21 = auStack_118 + lVar4 + lVar3;
          goto LAB_14f8694a0;
        }
        psVar13 = psVar27;
        local_b0 = fVar26;
        if (0 < (int)fVar26 * param_1[2]) {
          do {
            *psVar13 = 0;
            iVar16 = iVar16 + 1;
            psVar13 = psVar13 + 1;
          } while (iVar16 < (int)fVar26 * param_1[2]);
        }
      }
      iVar9 = iVar9 + (int)local_b0;
      psVar27 = psVar27 + param_1[2] * (int)local_b0;
      iVar10 = local_c0;
    } while (iVar9 < (int)fVar26);
  }
  iVar22 = local_c8;
  if (((param_6 == 0) && (iVar10 != 0x3ea)) && (local_a0 != 0)) {
    iVar9 = 0x1f;
    if (local_50 != 0) {
      for (; local_50 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar16 = 0;
    if (param_1[0xe] == 0x3e9) {
      iVar16 = 0x14;
    }
    if ((iVar16 - iVar9) + local_58 + 0x10 <= local_c8 << 3) {
      if (iVar10 == 0x3e9) {
        *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x14f868d33;
        iVar9 = ec_dec_bit_logp(local_70,0xc);
      }
      else {
        iVar9 = 1;
      }
      iStack_d4 = iVar9;
      if (iVar9 != 0) {
        *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x14f868d66;
        iStack_c4 = ec_dec_bit_logp(local_70,1);
        if (iVar10 == 0x3e9) {
          *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x14f868d7c;
          iVar16 = ec_dec_uint(local_70,0x100);
          iVar16 = iVar16 + 2;
        }
        else {
          iVar16 = 0x1f;
          if (local_50 != 0) {
            for (; local_50 >> iVar16 == 0; iVar16 = iVar16 + -1) {
            }
          }
          iVar16 = iVar22 - ((local_58 - iVar16) + 6 >> 3);
        }
        iVar11 = 0x1f;
        if (local_50 != 0) {
          for (; local_50 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        iVar22 = iVar22 - iVar16;
        iStack_d4 = 0;
        iVar17 = (local_58 - iVar11) + -1;
        iVar11 = iVar22 * 8;
        iStack_ac = iStack_d4;
        if (iVar17 <= iVar11) {
          iStack_ac = iVar16;
        }
        local_68 = local_68 - iStack_ac;
        local_c8 = iStack_d4;
        if (iVar17 <= iVar11) {
          iStack_d4 = iVar9;
          local_c8 = iVar22;
        }
      }
    }
  }
  iVar9 = 0;
  iVar22 = 0;
  if (iStack_d4 == 0) {
    iVar9 = iStack_cc;
    iVar22 = local_98;
  }
  local_80 = CONCAT44(local_80._4_4_,iVar9);
  uVar12 = (longlong)iVar22 * 4 + 0xf;
  if (uVar12 <= (ulonglong)((longlong)iVar22 * 4)) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x14f868e36;
  fVar29 = local_d8;
  lVar5 = -(uVar12 & 0xfffffffffffffff0);
  if ((iVar9 != 0) && (iVar10 != 0x3ea)) {
    *(undefined4 *)((longlong)&local_f0 + lVar5 + lVar4 + lVar3) = 0;
    fVar25 = fVar26;
    if ((int)fVar29 < (int)fVar26) {
      fVar25 = fVar29;
    }
    local_88 = (longlong)&local_d8 + lVar5 + lVar4 + lVar3;
    *(float *)((longlong)local_f8 + lVar5 + lVar4 + lVar3) = fVar25;
    *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868e6e;
    FUN_14f86888c(param_1,0,0);
  }
  lVar14 = local_b8;
  if (local_94 != 0) {
    uVar23 = 0x15;
    if (local_94 == 0x44d) {
      uVar23 = 0xd;
    }
    else if (local_94 < 0x44e) {
LAB_14f868e9e:
      *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868eb7;
      celt_fatal("assertion failed: 0","../../../third_party/opus/src/src/opus_decoder.c",0x1e8);
    }
    else if (local_94 < 0x450) {
      uVar23 = 0x11;
    }
    else if (local_94 == 0x450) {
      uVar23 = 0x13;
    }
    else if (local_94 != 0x451) goto LAB_14f868e9e;
    lVar14 = local_b8;
    *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868ee0;
    iVar22 = opus_custom_decoder_ctl(lVar14,0x271c,uVar23);
    if (iVar22 != 0) {
      *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868efd;
      celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10012, (((void)((endband) == (opus_int32)0)), (opus_int32)(endband)))) == OPUS_OK"
                 ,"../../../third_party/opus/src/src/opus_decoder.c",0x1eb);
    }
  }
  *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868f14;
  iVar22 = opus_custom_decoder_ctl(lVar14,0x2718);
  if (iVar22 != 0) {
    *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868f34;
    celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10008, (((void)((st->stream_channels) == (opus_int32)0)), (opus_int32)(st->stream_channels)))) == OPUS_OK"
               ,"../../../third_party/opus/src/src/opus_decoder.c");
  }
  iVar22 = iStack_d4;
  iVar9 = 0;
  if (iStack_d4 != 0) {
    iVar9 = param_1[2] * (int)fVar29;
  }
  uVar12 = (longlong)iVar9 * 4 + 0xf;
  if (uVar12 <= (ulonglong)((longlong)iVar9 * 4)) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868f6f;
  lVar6 = -(uVar12 & 0xfffffffffffffff0);
  lVar1 = (longlong)&local_d8 + lVar6 + lVar5 + lVar4 + lVar3;
  if ((iVar22 != 0) && (iStack_c4 != 0)) {
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868f99;
    iVar22 = opus_custom_decoder_ctl(lVar14,0x271a,0);
    if (iVar22 != 0) {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868fb6;
      celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10010, (((void)((0) == (opus_int32)0)), (opus_int32)(0)))) == OPUS_OK"
                 ,"../../../third_party/opus/src/src/opus_decoder.c",0x1f6);
    }
    iVar22 = iStack_ac;
    lVar19 = (longlong)local_c8 + local_a0;
    *(undefined4 *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
    *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
    *(float *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = local_d8;
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868fdf;
    celt_decode_with_ec(lVar14,lVar19,iVar22,lVar1);
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f868ff0;
    iVar22 = opus_custom_decoder_ctl(lVar14,0xfbf,local_a8);
    if (iVar22 != 0) {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f86900d;
      celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 4031, ((&redundant_rng) + ((&redundant_rng) - (opus_uint32*)(&redundant_rng))))) == OPUS_OK"
                 ,"../../../third_party/opus/src/src/opus_decoder.c",0x1f9);
    }
  }
  *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f86901d;
  iVar22 = opus_custom_decoder_ctl(lVar14,0x271a,-(iVar10 != 0x3ea) & 0x11);
  uVar12 = 0;
  if (iVar22 != 0) {
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f86903d;
    celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10010, (((void)((start_band) == (opus_int32)0)), (opus_int32)(start_band)))) == OPUS_OK"
               ,"../../../third_party/opus/src/src/opus_decoder.c",0x1fd);
  }
  lVar19 = local_b8;
  if (iVar10 == 1000) {
    iStack_cc = CONCAT22(iStack_cc._2_2_,0xffff);
    pfVar15 = param_4;
    uVar24 = uVar12;
    if (0 < (int)fVar26 * param_1[2]) {
      do {
        *pfVar15 = 0.0;
        uVar18 = (int)uVar24 + 1;
        pfVar15 = pfVar15 + 1;
        uVar24 = (ulonglong)uVar18;
        iVar10 = local_c0;
      } while ((int)uVar18 < (int)fVar26 * param_1[2]);
    }
    if ((param_1[0xf] == 0x3e9) && (((iStack_d4 == 0 || (iStack_c4 == 0)) || (param_1[0x11] == 0))))
    {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869124;
      iVar22 = opus_custom_decoder_ctl(lVar14,0x271a,0);
      if (iVar22 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869141;
        celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10010, (((void)((0) == (opus_int32)0)), (opus_int32)(0)))) == OPUS_OK"
                   ,"../../../third_party/opus/src/src/opus_decoder.c",0x213);
      }
      iVar22 = local_d0;
      *(undefined4 *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar22;
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869167;
      celt_decode_with_ec(lVar14,&iStack_cc,2,param_4);
      goto LAB_14f869167;
    }
LAB_14f869170:
    pfVar15 = param_4;
    psVar27 = local_78;
    if (0 < (int)fVar26 * param_1[2]) {
      do {
        uVar18 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar18;
        *pfVar15 = (float)(int)*psVar27 * __real_38000000 + *pfVar15;
        pfVar15 = pfVar15 + 1;
        psVar27 = psVar27 + 1;
      } while ((int)uVar18 < (int)fVar26 * param_1[2]);
    }
  }
  else {
    fVar29 = fVar26;
    if ((int)local_90 < (int)fVar26) {
      fVar29 = local_90;
    }
    if (((iVar10 != param_1[0xf]) && (0 < param_1[0xf])) && (param_1[0x11] == 0)) {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869073;
      iVar22 = opus_custom_decoder_ctl(lVar19,0xfbc);
      if (iVar22 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869090;
        celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 4028)) == OPUS_OK",
                   "../../../third_party/opus/src/src/opus_decoder.c",0x204);
      }
    }
    iVar22 = local_c8;
    uVar24 = local_a0;
    if (param_6 != 0) {
      uVar24 = uVar12;
    }
    *(undefined4 *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
    *(undefined1 **)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = local_70;
    *(float *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = fVar29;
    lVar14 = local_b8;
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f8690c4;
    local_8c = (float)celt_decode_with_ec(lVar14,uVar24,iVar22,param_4);
LAB_14f869167:
    if (iVar10 != 0x3ea) goto LAB_14f869170;
  }
  *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f8691d3;
  iVar22 = opus_custom_decoder_ctl(lVar14,0x271f,&local_78);
  if (iVar22 != 0) {
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f8691f3;
    celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10015, ((&celt_mode) + ((&celt_mode) - (const OpusCustomMode**)(&celt_mode))))) == OPUS_OK"
               ,"../../../third_party/opus/src/src/opus_decoder.c",0x225);
  }
  lVar14 = local_b8;
  uVar2 = *(undefined8 *)(local_78 + 0x24);
  iVar22 = local_d0;
  if (iStack_d4 != 0) {
    if (iStack_c4 == 0) {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869220;
      iVar22 = opus_custom_decoder_ctl(lVar14,0xfbc);
      if (iVar22 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f86923d;
        celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 4028)) == OPUS_OK",
                   "../../../third_party/opus/src/src/opus_decoder.c",0x22c);
      }
      lVar14 = local_b8;
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f86924e;
      iVar22 = opus_custom_decoder_ctl(lVar14,0x271a,0);
      if (iVar22 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f86926b;
        celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10010, (((void)((0) == (opus_int32)0)), (opus_int32)(0)))) == OPUS_OK"
                   ,"../../../third_party/opus/src/src/opus_decoder.c",0x22d);
      }
      iVar22 = iStack_ac;
      lVar14 = local_b8;
      lVar19 = (longlong)local_c8 + local_a0;
      *(undefined4 *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
      *(float *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = local_d8;
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869295;
      celt_decode_with_ec(lVar14,lVar19,iVar22,lVar1);
      lVar14 = local_b8;
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f8692a7;
      iVar22 = opus_custom_decoder_ctl(lVar14,0xfbf,local_a8);
      if (iVar22 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f8692c4;
        celt_fatal("assertion failed: (opus_custom_decoder_ctl(celt_dec, 4031, ((&redundant_rng) + ((&redundant_rng) - (opus_uint32*)(&redundant_rng))))) == OPUS_OK"
                   ,"../../../third_party/opus/src/src/opus_decoder.c",0x230);
      }
      iVar22 = param_1[2];
      pfVar15 = param_4 + ((int)fVar26 - local_d0) * iVar22;
      pfVar20 = (float *)(lVar1 + (longlong)(iVar22 * local_d0) * 4);
      *(int *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = param_1[3];
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = uVar2;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar22;
      pfVar28 = pfVar15;
    }
    else {
      iVar22 = param_1[2];
      iVar9 = 0;
      if (0 < iVar22) {
        do {
          iVar16 = 0;
          if (0 < local_d0) {
            do {
              iVar22 = iVar16 + 1;
              lVar14 = (longlong)(iVar16 * param_1[2] + iVar9);
              param_4[lVar14] = *(float *)(lVar1 + lVar14 * 4);
              iVar16 = iVar22;
            } while (iVar22 < local_d0);
            iVar22 = param_1[2];
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar22);
      }
      iVar9 = iVar22 * local_d0;
      *(int *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = param_1[3];
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = uVar2;
      pfVar20 = param_4 + iVar9;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar22;
      pfVar15 = (float *)(lVar1 + (longlong)iVar9 * 4);
      pfVar28 = pfVar20;
    }
    iVar22 = local_d0;
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869304;
    FUN_14f869ee0(pfVar15,pfVar20,pfVar28,iVar22);
  }
  lVar14 = local_88;
  if ((int)local_80 != 0) {
    iVar9 = param_1[2];
    if ((int)fVar26 < (int)local_d8) {
      *(int *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = param_1[3];
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = uVar2;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar9;
      pfVar15 = param_4;
    }
    else {
      iVar16 = 0;
      if (0 < iVar9 * iVar22) {
        pfVar15 = param_4;
        do {
          iVar16 = iVar16 + 1;
          *pfVar15 = *(float *)((local_88 - (longlong)param_4) + (longlong)pfVar15);
          pfVar15 = pfVar15 + 1;
          iVar9 = param_1[2];
        } while (iVar16 < iVar9 * iVar22);
      }
      *(int *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = param_1[3];
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = uVar2;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar9;
      lVar14 = lVar14 + (longlong)(iVar9 * iVar22) * 4;
      pfVar15 = param_4 + iVar9 * iVar22;
    }
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f86940a;
    FUN_14f869ee0(lVar14,pfVar15,pfVar15,iVar22);
  }
  if (param_1[10] != 0) {
    iVar22 = param_1[10];
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x14f869433;
    dVar30 = exp((double)((float)iVar22 * ___real_3a2a152d) * ___real_3fe62e42fefa39ef);
    iVar22 = 0;
    if (0 < (int)fVar26 * param_1[2]) {
      do {
        iVar22 = iVar22 + 1;
        *param_4 = (float)dVar30 * *param_4;
        param_4 = param_4 + 1;
      } while (iVar22 < (int)fVar26 * param_1[2]);
    }
  }
  if (local_c8 < 2) {
    local_a8[0] = 0;
  }
  else {
    local_a8[0] = local_50 ^ local_a8[0];
  }
  param_1[0x15] = local_a8[0];
  param_1[0xf] = iVar10;
  if ((iStack_d4 == 0) || (iVar22 = 1, iStack_c4 != 0)) {
    iVar22 = 0;
  }
  param_1[0x11] = iVar22;
  if ((int)local_8c < 0) {
    fVar26 = local_8c;
  }
  uVar12 = (ulonglong)(uint)fVar26;
  puVar21 = auStack_118 + lVar6 + lVar5 + lVar4 + lVar3;
LAB_14f8694a0:
  *(undefined8 *)(puVar21 + -8) = 0x14f8694af;
  return uVar12;
}

// opus_decode_native @ 14f8694dc

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong opus_decode_native(longlong param_1,byte *param_2,int param_3,longlong param_4,
                            uint param_5,uint param_6,undefined4 param_7,undefined8 param_8,
                            int param_9)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int local_f8;
  undefined1 local_e8 [8];
  longlong local_e0;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  short local_b8 [48];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_c8 = param_8;
  local_e0 = param_4;
  local_d8 = param_3;
  if (1 < *(int *)(param_1 + 8) - 1U) {
    celt_fatal("assertion failed: st->channels == 1 || st->channels == 2",
               "../../../third_party/opus/src/src/opus_decoder.c",0x54);
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if ((((iVar6 != 48000) && (iVar6 != 24000)) && (iVar6 != 16000)) &&
     ((iVar6 != 12000 && (iVar6 != 8000)))) {
    celt_fatal("assertion failed: st->Fs == 48000 || st->Fs == 24000 || st->Fs == 16000 || st->Fs == 12000 || st->Fs == 8000"
               ,"../../../third_party/opus/src/src/opus_decoder.c",0x55);
    iVar6 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0x18) != iVar6) {
    celt_fatal("assertion failed: st->DecControl.API_sampleRate == st->Fs",
               "../../../third_party/opus/src/src/opus_decoder.c",0x56);
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  if (((iVar6 != 0) && (iVar6 != 16000)) && ((iVar6 != 12000 && (iVar6 != 8000)))) {
    celt_fatal("assertion failed: st->DecControl.internalSampleRate == 0 || st->DecControl.internalSampleRate == 16000 || st->DecControl.internalSampleRate == 12000 || st->DecControl.internalSampleRate == 8000"
               ,"../../../third_party/opus/src/src/opus_decoder.c",0x57);
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 8)) {
    celt_fatal("assertion failed: st->DecControl.nChannelsAPI == st->channels",
               "../../../third_party/opus/src/src/opus_decoder.c",0x58);
  }
  if (2 < *(uint *)(param_1 + 0x14)) {
    celt_fatal("assertion failed: st->DecControl.nChannelsInternal == 0 || st->DecControl.nChannelsInternal == 1 || st->DecControl.nChannelsInternal == 2"
               ,"../../../third_party/opus/src/src/opus_decoder.c",0x59);
  }
  if ((0x3c < *(uint *)(param_1 + 0x20)) ||
     ((0x1000010000100401U >> ((longlong)*(int *)(param_1 + 0x20) & 0x3fU) & 1) == 0)) {
    celt_fatal("assertion failed: st->DecControl.payloadSize_ms == 0 || st->DecControl.payloadSize_ms == 10 || st->DecControl.payloadSize_ms == 20 || st->DecControl.payloadSize_ms == 40 || st->DecControl.payloadSize_ms == 60"
               ,"../../../third_party/opus/src/src/opus_decoder.c",0x5a);
  }
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 < 0) {
    celt_fatal("assertion failed: st->arch >= 0","../../../third_party/opus/src/src/opus_decoder.c",
               0x5c);
    iVar6 = *(int *)(param_1 + 0x2c);
  }
  if (7 < iVar6) {
    celt_fatal("assertion failed: st->arch <= OPUS_ARCHMASK",
               "../../../third_party/opus/src/src/opus_decoder.c",0x5d);
  }
  if (1 < *(int *)(param_1 + 0x30) - 1U) {
    celt_fatal("assertion failed: st->stream_channels == 1 || st->stream_channels == 2",
               "../../../third_party/opus/src/src/opus_decoder.c",0x5f);
  }
  if ((param_6 < 2) &&
     ((((param_6 == 0 && (param_3 != 0)) && (param_2 != (byte *)0x0)) ||
      ((int)param_5 % (*(int *)(param_1 + 0xc) / 400) == 0)))) {
    if ((param_3 == 0) || (param_2 == (byte *)0x0)) {
      uVar4 = 0;
      do {
        local_110 = (short *)((ulonglong)local_110 & 0xffffffff00000000);
        iVar6 = (int)uVar4;
        local_118 = CONCAT44(local_118._4_4_,param_5 - iVar6);
        uVar4 = FUN_14f86888c(param_1,0,0,param_4 + (longlong)(iVar6 * *(int *)(param_1 + 8)) * 4);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        uVar3 = iVar6 + (int)uVar4;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)param_5);
      if (uVar3 != param_5) {
        celt_fatal("assertion failed: pcm_count == frame_size",
                   "../../../third_party/opus/src/src/opus_decoder.c",0x28c);
      }
      *(uint *)(param_1 + 0x48) = uVar3;
      return uVar4;
    }
    if (-1 < param_3) {
      if ((char)*param_2 < '\0') {
        iVar6 = 0x3ea;
      }
      else {
        iVar6 = 0x3e9 - (uint)((*param_2 & 0x60) != 0x60);
      }
      uVar1 = opus_packet_get_bandwidth(param_2);
      local_d0 = uVar1;
      iVar2 = opus_packet_get_samples_per_frame(param_2,*(undefined4 *)(param_1 + 0xc));
      local_100 = local_c8;
      local_108 = &local_d4;
      iVar8 = ((*param_2 & 4) != 0) + 1;
      local_110 = local_b8;
      local_118 = 0;
      uVar3 = opus_packet_parse_impl(param_2,local_d8,param_7,local_e8);
      uVar4 = 0;
      if ((int)uVar3 < 0) {
        return (ulonglong)uVar3;
      }
      param_2 = param_2 + local_d4;
      if (param_6 == 0) {
        if ((int)param_5 < (int)(uVar3 * iVar2)) {
          return 0xfffffffe;
        }
        *(undefined4 *)(param_1 + 0x34) = uVar1;
        *(int *)(param_1 + 0x30) = iVar8;
        *(int *)(param_1 + 0x38) = iVar6;
        *(int *)(param_1 + 0x40) = iVar2;
        uVar5 = uVar4;
        if (0 < (int)uVar3) {
          do {
            iVar8 = (int)uVar5;
            local_110 = (short *)((ulonglong)local_110 & 0xffffffff00000000);
            local_118 = CONCAT44(local_118._4_4_,param_5 - iVar8);
            uVar5 = FUN_14f86888c(param_1,param_2,(int)local_b8[uVar4],
                                  param_4 + (longlong)(iVar8 * *(int *)(param_1 + 8)) * 4);
            iVar6 = (int)uVar5;
            if (iVar6 < 0) {
              return uVar5;
            }
            if (iVar6 != iVar2) {
              celt_fatal("assertion failed: ret==packet_frame_size",
                         "../../../third_party/opus/src/src/opus_decoder.c",0x2d4);
            }
            uVar5 = (ulonglong)(uint)(iVar8 + iVar6);
            param_2 = param_2 + local_b8[uVar4];
            uVar4 = uVar4 + 1;
            param_4 = local_e0;
          } while ((longlong)uVar4 < (longlong)(int)uVar3);
        }
        *(int *)(param_1 + 0x48) = (int)uVar5;
        if (param_9 != 0) {
          opus_pcm_soft_clip(param_4,uVar5,*(undefined4 *)(param_1 + 8),param_1 + 0x4c);
          return uVar5;
        }
        *(undefined8 *)(param_1 + 0x4c) = 0;
        return uVar5;
      }
      if ((((int)param_5 < iVar2) || (iVar6 == 0x3ea)) || (*(int *)(param_1 + 0x38) == 0x3ea)) {
        local_f8 = param_9;
        local_100 = 0;
        local_108 = (int *)((ulonglong)local_108._4_4_ << 0x20);
        local_110 = (short *)((ulonglong)local_110._4_4_ << 0x20);
        local_118 = CONCAT44(local_118._4_4_,param_5);
        uVar4 = opus_decode_native(param_1,0,0,param_4);
        return uVar4;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x48);
      iVar7 = param_5 - iVar2;
      if (iVar7 != 0) {
        local_f8 = param_9;
        local_100 = 0;
        local_108 = (int *)((ulonglong)local_108._4_4_ << 0x20);
        local_110 = (short *)((ulonglong)local_110._4_4_ << 0x20);
        local_118 = CONCAT44(local_118._4_4_,iVar7);
        uVar4 = opus_decode_native(param_1,0,0,local_e0);
        if ((int)uVar4 < 0) {
          *(undefined4 *)(param_1 + 0x48) = uVar1;
          return uVar4;
        }
        if ((int)uVar4 != iVar7) {
          celt_fatal("assertion failed: ret==frame_size-packet_frame_size",
                     "../../../third_party/opus/src/src/opus_decoder.c",0x2b1);
        }
      }
      *(undefined4 *)(param_1 + 0x34) = local_d0;
      local_110 = (short *)CONCAT44(local_110._4_4_,1);
      *(int *)(param_1 + 0x38) = iVar6;
      *(int *)(param_1 + 0x40) = iVar2;
      *(int *)(param_1 + 0x30) = iVar8;
      local_118 = CONCAT44(local_118._4_4_,iVar2);
      uVar4 = FUN_14f86888c(param_1,param_2,(int)local_b8[0],
                            local_e0 + (longlong)(iVar7 * *(int *)(param_1 + 8)) * 4);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *(uint *)(param_1 + 0x48) = param_5;
      return (ulonglong)param_5;
    }
  }
  return 0xffffffff;
}

// opus_decoder_create @ 14f8699f0

void * opus_decoder_create(int param_1,int param_2,int *param_3)

{
  int iVar1;
  void *_Memory;
  
  if (((((param_1 == 48000) || (param_1 == 24000)) || (param_1 == 16000)) ||
      ((param_1 == 12000 || (param_1 == 8000)))) && (param_2 - 1U < 2)) {
    iVar1 = opus_decoder_get_size(param_2);
    _Memory = malloc((longlong)iVar1);
    if (_Memory != (void *)0x0) {
      iVar1 = opus_decoder_init(_Memory,param_1,param_2);
      if (param_3 != (int *)0x0) {
        *param_3 = iVar1;
      }
      if (iVar1 == 0) {
        return _Memory;
      }
      free(_Memory);
      return (void *)0x0;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = -7;
    }
  }
  else if (param_3 != (int *)0x0) {
    *param_3 = -1;
  }
  return (void *)0x0;
}

// opus_decoder_ctl @ 14f869ab0

undefined4 opus_decoder_ctl(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_res18;
  
  iVar2 = param_1[1];
  lVar4 = (longlong)*param_1 + (longlong)param_1;
  local_res18 = (uint)param_3;
  if (param_2 < 0xfc3) {
    if (param_2 == 0xfc2) {
      if (local_res18 + 0x8000 < 0x10000) {
        param_1[10] = local_res18;
        return 0;
      }
    }
    else if (param_2 == 0xfa9) {
      if (param_3 != (int *)0x0) {
        iVar2 = param_1[0xd];
        goto LAB_14f869c3e;
      }
    }
    else {
      if (param_2 == 0xfbc) {
        memset(param_1 + 0xc,0,0x28);
        opus_custom_decoder_ctl(lVar4,0xfbc);
        silk_InitDecoder((longlong)iVar2 + (longlong)param_1);
        param_1[0xc] = param_1[2];
        param_1[0x10] = param_1[3] / 400;
        return 0;
      }
      if (param_2 == 0xfbd) {
        if (param_3 != (int *)0x0) {
          iVar2 = param_1[3];
          goto LAB_14f869c3e;
        }
      }
      else if (param_2 == 0xfbf) {
        if (param_3 != (int *)0x0) {
          iVar2 = param_1[0x15];
          goto LAB_14f869c3e;
        }
      }
      else {
        if (param_2 != 0xfc1) {
          return 0xfffffffb;
        }
        if (param_3 != (int *)0x0) {
          if (param_1[0xf] == 0x3ea) {
            uVar3 = 0xfc1;
            goto LAB_14f869bfd;
          }
          iVar2 = param_1[9];
LAB_14f869c3e:
          *param_3 = iVar2;
          return 0;
        }
      }
    }
  }
  else if (param_2 == 0xfc7) {
    if (param_3 != (int *)0x0) {
      iVar2 = param_1[0x12];
      goto LAB_14f869c3e;
    }
  }
  else if (param_2 == 0xfcd) {
    if (param_3 != (int *)0x0) {
      iVar2 = param_1[10];
      goto LAB_14f869c3e;
    }
  }
  else if (param_2 == 0xfce) {
    if (local_res18 < 2) {
      uVar1 = opus_custom_decoder_ctl(lVar4,0xfce);
      return uVar1;
    }
  }
  else {
    if (param_2 != 0xfcf) {
      return 0xfffffffb;
    }
    if (param_3 != (int *)0x0) {
      uVar3 = 0xfcf;
LAB_14f869bfd:
      uVar1 = opus_custom_decoder_ctl(lVar4,uVar3,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}

// opus_decoder_destroy @ 14f869c54

void __cdecl opus_decoder_destroy(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x00014f869c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}

// opus_decoder_get_size @ 14f869c80

int opus_decoder_get_size(int param_1)

{
  int iVar1;
  uint local_res8 [8];
  
  if ((param_1 - 1U < 2) && (iVar1 = silk_Get_Decoder_Size(local_res8), iVar1 == 0)) {
    local_res8[0] = local_res8[0] + 7 & 0xfffffff8;
    iVar1 = celt_decoder_get_size(param_1);
    return iVar1 + local_res8[0] + 0x58;
  }
  return 0;
}

// opus_decoder_init @ 14f869ccc

undefined8 opus_decoder_init(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint local_res10 [2];
  
  if (((((param_2 == 48000) || (param_2 == 24000)) || (param_2 == 16000)) ||
      ((param_2 == 12000 || (param_2 == 8000)))) && (param_3 - 1U < 2)) {
    iVar1 = opus_decoder_get_size(param_3);
    memset(param_1,0,(longlong)iVar1);
    iVar1 = silk_Get_Decoder_Size(local_res10);
    if (iVar1 == 0) {
      param_1[1] = 0x58;
      local_res10[0] = local_res10[0] + 7 & 0xfffffff8;
      param_1[2] = param_3;
      lVar3 = (longlong)(int)(local_res10[0] + 0x58) + (longlong)param_1;
      *param_1 = local_res10[0] + 0x58;
      param_1[0xc] = param_3;
      param_1[3] = param_2;
      param_1[6] = param_2;
      param_1[4] = param_3;
      iVar1 = silk_InitDecoder(param_1 + 0x16);
      if ((iVar1 == 0) && (iVar1 = celt_decoder_init(lVar3,param_2,param_3), iVar1 == 0)) {
        opus_custom_decoder_ctl(lVar3,0x2720,0);
        param_1[0xf] = 0;
        param_1[0x10] = param_2 / 400;
        iVar1 = opus_select_arch();
        param_1[0xb] = iVar1;
        return 0;
      }
    }
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// opus_packet_get_bandwidth @ 14f869de8

uint opus_packet_get_bandwidth(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    uVar2 = (bVar1 >> 5 & 3) + 0x44e;
    if (uVar2 == 0x44e) {
      uVar2 = 0x44d;
    }
  }
  else if ((bVar1 & 0x60) == 0x60) {
    uVar2 = (bVar1 & 0x10 | 0x4500) >> 4;
  }
  else {
    uVar2 = (bVar1 >> 5 & 3) + 0x44d;
  }
  return uVar2;
}

// opus_packet_get_nb_frames @ 14f869e4c

uint opus_packet_get_nb_frames(byte *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 1) {
    return 0xffffffff;
  }
  uVar1 = *param_1 & 3;
  if ((*param_1 & 3) == 0) {
    return uVar1 + 1;
  }
  if (uVar1 != 3) {
    return 2;
  }
  if (param_2 < 2) {
    return 0xfffffffc;
  }
  return param_1[1] & 0x3f;
}

// opus_packet_get_nb_samples @ 14f869e88

ulonglong opus_packet_get_nb_samples(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = opus_packet_get_nb_frames();
  if (-1 < (int)uVar3) {
    iVar1 = opus_packet_get_samples_per_frame(param_1,param_3);
    uVar2 = iVar1 * (int)uVar3;
    uVar3 = (ulonglong)uVar2;
    if (param_3 * 3 < (int)(uVar2 * 0x19)) {
      uVar3 = 0xfffffffc;
    }
  }
  return uVar3;
}

// FUN_14f869ee0 @ 14f869ee0

void FUN_14f869ee0(longlong param_1,float *param_2,longlong param_3,uint param_4,uint param_5,
                  float *param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  
  if (0 < (int)param_5) {
    uVar3 = (ulonglong)param_5;
    pfVar4 = param_2;
    do {
      if (0 < (int)param_4) {
        pfVar1 = pfVar4;
        pfVar2 = param_6;
        uVar5 = (ulonglong)param_4;
        do {
          fVar6 = *pfVar2;
          pfVar2 = pfVar2 + (int)(48000 / (longlong)param_7);
          fVar6 = fVar6 * fVar6;
          *(float *)((param_3 - (longlong)param_2) + (longlong)pfVar1) =
               (__real_3f800000 - fVar6) *
               *(float *)((param_1 - (longlong)param_2) + (longlong)pfVar1) + fVar6 * *pfVar1;
          pfVar1 = pfVar1 + (int)param_5;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

