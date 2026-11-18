// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 4

// silk_control_encoder @ 14f880f58

int silk_control_encoder
              (longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
              int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x17d0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x1244) = param_2[0xd];
  iVar2 = param_2[2];
  *(int *)(param_1 + 0x11cc) = iVar2;
  *(undefined4 *)(param_1 + 0x11d4) = param_2[3];
  *(undefined4 *)(param_1 + 0x11d8) = param_2[4];
  *(undefined4 *)(param_1 + 0x11dc) = param_2[5];
  *(undefined4 *)(param_1 + 0x17dc) = param_2[10];
  *(undefined4 *)(param_1 + 0x1688) = *param_2;
  *(undefined4 *)(param_1 + 0x168c) = param_2[1];
  *(undefined4 *)(param_1 + 0x11b8) = param_3;
  *(undefined4 *)(param_1 + 0x1690) = param_4;
  if ((*(int *)(param_1 + 0x123c) == 0) || (*(int *)(param_1 + 0x1248) != 0)) {
    iVar2 = silk_control_audio_bandwidth(param_1);
    if (param_5 != 0) {
      iVar2 = param_5;
    }
    iVar3 = FUN_14f8816a8(param_1,iVar2);
    iVar4 = FUN_14f881388(param_1,iVar2,param_2[6]);
    iVar5 = FUN_14f8810cc(param_1,param_2[9]);
    *(undefined4 *)(param_1 + 0x1208) = param_2[8];
    iVar2 = param_2[0xb];
    iVar1 = *(int *)(param_1 + 0x17e0);
    *(int *)(param_1 + 0x17e0) = iVar2;
    if (iVar2 != 0) {
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x17e4) = 7;
      }
      else {
        iVar1 = 7 - (int)((ulonglong)((longlong)*(int *)(param_1 + 0x1208) * 0x6666) >> 0x10);
        iVar2 = 2;
        if (2 < iVar1) {
          iVar2 = iVar1;
        }
        *(int *)(param_1 + 0x17e4) = iVar2;
      }
    }
    *(undefined4 *)(param_1 + 0x123c) = 1;
    iVar1 = iVar5 + iVar3 + iVar4;
  }
  else {
    iVar1 = 0;
    if ((iVar2 != *(int *)(param_1 + 0x11d0)) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x11e0))) {
      iVar1 = FUN_14f8816a8(param_1);
    }
  }
  return iVar1;
}

// FUN_14f8810cc @ 14f8810cc

undefined8 FUN_14f8810cc(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (10 < param_2) {
    celt_fatal("assertion failed: Complexity >= 0 && Complexity <= 10",
               "../../../third_party/opus/src/silk/control_codec.c",0x13b);
  }
  iVar1 = *(int *)(param_1 + 0x11e0);
  if ((int)param_2 < 1) {
    *(undefined8 *)(param_1 + 0x1214) = 1;
LAB_14f881147:
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x121c) = 0xc;
    *(undefined4 *)(param_1 + 0x1224) = 0;
    iVar3 = iVar1 * 3;
    *(undefined4 *)(param_1 + 0x1228) = 6;
    *(undefined4 *)(param_1 + 0x122c) = 0xcccd;
    *(undefined4 *)(param_1 + 0x1234) = 2;
  }
  else {
    if ((int)param_2 < 2) {
      *(undefined8 *)(param_1 + 0x1214) = 1;
      *(undefined4 *)(param_1 + 0x1234) = 3;
    }
    else {
      if ((int)param_2 < 3) {
        *(undefined8 *)(param_1 + 0x1214) = 2;
        goto LAB_14f881147;
      }
      if (3 < (int)param_2) {
        iVar2 = iVar1 * 0x3d7;
        iVar3 = iVar1 * 5;
        *(undefined4 *)(param_1 + 0x1218) = 1;
        if ((int)param_2 < 6) {
          *(undefined4 *)(param_1 + 0x1224) = 1;
          *(undefined4 *)(param_1 + 0x122c) = 0xbd71;
          *(undefined4 *)(param_1 + 0x1228) = 10;
          *(undefined4 *)(param_1 + 0x121c) = 0x10;
          *(undefined4 *)(param_1 + 0x1214) = 2;
          *(undefined4 *)(param_1 + 0x1234) = 6;
        }
        else if ((int)param_2 < 8) {
          *(undefined4 *)(param_1 + 0x1224) = 1;
          *(undefined4 *)(param_1 + 0x122c) = 0xb852;
          *(undefined4 *)(param_1 + 0x1228) = 0xc;
          *(undefined4 *)(param_1 + 0x121c) = 0x14;
          *(undefined4 *)(param_1 + 0x1214) = 3;
          *(undefined4 *)(param_1 + 0x1234) = 8;
        }
        else {
          *(undefined4 *)(param_1 + 0x1224) = 2;
          *(undefined4 *)(param_1 + 0x122c) = 0xb333;
          *(undefined4 *)(param_1 + 0x1228) = 0x10;
          *(undefined4 *)(param_1 + 0x121c) = 0x18;
          *(undefined4 *)(param_1 + 0x1214) = 4;
          *(undefined4 *)(param_1 + 0x1234) = 0x10;
        }
        goto LAB_14f88127e;
      }
      *(undefined8 *)(param_1 + 0x1214) = 2;
      *(undefined4 *)(param_1 + 0x1234) = 4;
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x121c) = 0xe;
    *(undefined4 *)(param_1 + 0x1228) = 8;
    iVar3 = iVar1 * 5;
    *(undefined4 *)(param_1 + 0x122c) = 0xc28f;
    *(undefined4 *)(param_1 + 0x1224) = 1;
  }
LAB_14f88127e:
  *(int *)(param_1 + 0x11f8) = iVar3;
  *(int *)(param_1 + 0x1240) = iVar2;
  *(uint *)(param_1 + 0x1210) = param_2;
  iVar3 = *(int *)(param_1 + 0x1220);
  if (*(int *)(param_1 + 0x1228) < *(int *)(param_1 + 0x1220)) {
    iVar3 = *(int *)(param_1 + 0x1228);
  }
  *(int *)(param_1 + 0x1228) = iVar3;
  *(int *)(param_1 + 0x11fc) = iVar1 * 5 + *(int *)(param_1 + 0x11f8) * 2;
  if (0x10 < iVar3) {
    celt_fatal("assertion failed: psEncC->pitchEstimationLPCOrder <= MAX_FIND_PITCH_LPC_ORDER",
               "../../../third_party/opus/src/silk/control_codec.c",0x189);
  }
  if (0x18 < *(int *)(param_1 + 0x121c)) {
    celt_fatal("assertion failed: psEncC->shapingLPCOrder <= MAX_SHAPE_LPC_ORDER",
               "../../../third_party/opus/src/silk/control_codec.c",0x18a);
  }
  if (4 < *(int *)(param_1 + 0x1214)) {
    celt_fatal("assertion failed: psEncC->nStatesDelayedDecision <= MAX_DEL_DEC_STATES",
               "../../../third_party/opus/src/silk/control_codec.c",0x18b);
  }
  if (0x7fff < *(int *)(param_1 + 0x1240)) {
    celt_fatal("assertion failed: psEncC->warping_Q16 <= 32767",
               "../../../third_party/opus/src/silk/control_codec.c",0x18c);
  }
  if (0x50 < *(int *)(param_1 + 0x11f8)) {
    celt_fatal("assertion failed: psEncC->la_shape <= LA_SHAPE_MAX",
               "../../../third_party/opus/src/silk/control_codec.c",0x18d);
  }
  if (0xf0 < *(int *)(param_1 + 0x11fc)) {
    celt_fatal("assertion failed: psEncC->shapeWinLength <= SHAPE_LPC_WIN_MAX",
               "../../../third_party/opus/src/silk/control_codec.c",0x18e);
  }
  return 0;
}

// FUN_14f881388 @ 14f881388

undefined4 FUN_14f881388(longlong param_1,int param_2,ulonglong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  puVar5 = &silk_pitch_contour_NB_iCDF;
  uVar4 = 10;
  uVar6 = (uint)param_3;
  if (uVar6 != *(uint *)(param_1 + 0x1204)) {
    if ((0x3c < uVar6) || ((0x1000010000100400U >> (param_3 & 0x3f) & 1) == 0)) {
      uVar7 = 0xffffff99;
    }
    iVar2 = (int)(short)param_2;
    if ((int)uVar6 < 0xb) {
      *(undefined4 *)(param_1 + 0x1680) = 1;
      *(uint *)(param_1 + 0x11e4) = (uVar6 == 10) + 1;
      *(int *)(param_1 + 0x11e8) = (short)param_3 * iVar2;
      *(int *)(param_1 + 0x11c4) = iVar2 * 0xe;
      puVar1 = &silk_pitch_contour_10_ms_NB_iCDF;
      if (*(int *)(param_1 + 0x11e0) != 8) {
        puVar1 = &silk_pitch_contour_10_ms_iCDF;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11e4) = 4;
      *(int *)(param_1 + 0x11e8) = iVar2 * 0x14;
      *(int *)(param_1 + 0x11c4) = iVar2 * 0x18;
      puVar1 = &silk_pitch_contour_NB_iCDF;
      *(int *)(param_1 + 0x1680) = (int)uVar6 / 0x14;
      if (*(int *)(param_1 + 0x11e0) != 8) {
        puVar1 = &silk_pitch_contour_iCDF;
      }
    }
    *(undefined **)(param_1 + 0x1258) = puVar1;
    *(undefined4 *)(param_1 + 0x1200) = 0;
    *(uint *)(param_1 + 0x1204) = uVar6;
  }
  if (((param_2 - 8U & 0xfffffff3) != 0) || (param_2 == 0x14)) {
    celt_fatal("assertion failed: fs_kHz == 8 || fs_kHz == 12 || fs_kHz == 16",
               "../../../third_party/opus/src/silk/control_codec.c",0xf1);
  }
  if ((*(int *)(param_1 + 0x11e4) - 2U & 0xfffffffd) != 0) {
    celt_fatal("assertion failed: psEnc->sCmn.nb_subfr == 2 || psEnc->sCmn.nb_subfr == 4",
               "../../../third_party/opus/src/silk/control_codec.c",0xf2);
  }
  if (*(int *)(param_1 + 0x11e0) != param_2) {
    *(undefined8 *)(param_1 + 0x1c18) = 0;
    *(undefined4 *)(param_1 + 0x1c20) = 0;
    memset((void *)(param_1 + 0x94),0,0x1120);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x167c) = 0;
    *(undefined4 *)(param_1 + 0x1684) = 0;
    *(undefined4 *)(param_1 + 0x1200) = 0;
    *(undefined4 *)(param_1 + 0x11c0) = 100;
    *(undefined4 *)(param_1 + 0x117c) = 100;
    *(undefined4 *)(param_1 + 0x1238) = 1;
    *(undefined1 *)(param_1 + 0x1c18) = 10;
    *(undefined4 *)(param_1 + 0x118c) = 0x10000;
    *(undefined1 *)(param_1 + 0x11bd) = 0;
    *(int *)(param_1 + 0x11e0) = param_2;
    if (param_2 == 8) {
      puVar1 = &silk_pitch_contour_10_ms_NB_iCDF;
    }
    else {
      puVar5 = &silk_pitch_contour_iCDF;
      puVar1 = &silk_pitch_contour_10_ms_iCDF;
    }
    if (*(int *)(param_1 + 0x11e4) != 4) {
      puVar5 = puVar1;
    }
    *(undefined **)(param_1 + 0x1258) = puVar5;
    if ((param_2 - 8U & 0xfffffffb) == 0) {
      puVar5 = &silk_NLSF_CB_NB_MB;
    }
    else {
      puVar5 = &silk_NLSF_CB_WB;
      uVar4 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x1220) = uVar4;
    *(undefined **)(param_1 + 0x1260) = puVar5;
    *(int *)(param_1 + 0x11ec) = param_2 * 5;
    *(int *)(param_1 + 0x11e8) = (int)(short)(param_2 * 5) * (int)*(short *)(param_1 + 0x11e4);
    iVar3 = (int)(short)param_2;
    *(int *)(param_1 + 0x11f0) = iVar3 * 0x14;
    *(int *)(param_1 + 0x11f4) = iVar3 * 2;
    *(int *)(param_1 + 0x11c8) = iVar3 * 0x12;
    iVar2 = 0x18;
    if (*(int *)(param_1 + 0x11e4) != 4) {
      iVar2 = 0xe;
    }
    *(int *)(param_1 + 0x11c4) = iVar2 * iVar3;
    if (param_2 == 0x10) {
      *(undefined **)(param_1 + 0x1250) = &silk_uniform8_iCDF;
    }
    else {
      puVar5 = &silk_uniform6_iCDF;
      if (param_2 != 0xc) {
        puVar5 = &silk_uniform4_iCDF;
      }
      *(undefined **)(param_1 + 0x1250) = puVar5;
    }
  }
  if (*(int *)(param_1 + 0x11ec) * *(int *)(param_1 + 0x11e4) != *(int *)(param_1 + 0x11e8)) {
    celt_fatal("assertion failed: ( psEnc->sCmn.subfr_length * psEnc->sCmn.nb_subfr ) == psEnc->sCmn.frame_length"
               ,"../../../third_party/opus/src/silk/control_codec.c",0x12e);
  }
  return uVar7;
}

// FUN_14f8816a8 @ 14f8816a8

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f8816a8(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *puVar14;
  float *pfVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined2 uVar18;
  int iVar19;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [264];
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  float local_48 [2];
  int local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)local_48;
  iVar12 = *(int *)(param_1 + 0x11e0);
  iVar9 = 0;
  iVar10 = *(int *)(param_1 + 0x11cc);
  if ((iVar12 != param_2) || (puVar16 = auStack_68, *(int *)(param_1 + 0x11d0) != iVar10)) {
    if (iVar12 == 0) {
      uStack_70 = 0x14f88171c;
      iVar9 = silk_resampler_init(param_1 + 0x16a0,iVar10,param_2 * 1000,1);
      puVar16 = auStack_68;
    }
    else {
      iVar17 = *(int *)(param_1 + 0x11e4) * 10 + 5;
      iVar19 = iVar12 * iVar17;
      local_40 = iVar17 * param_2;
      iVar9 = param_2;
      if (local_40 < iVar19) {
        iVar9 = iVar12;
      }
      uVar5 = (longlong)(iVar9 * iVar17) * 2;
      uVar11 = uVar5 + 0xf;
      if (uVar11 <= uVar5) {
        uVar11 = 0xffffffffffffff0;
      }
      uStack_70 = 0x14f881776;
      lVar6 = -(uVar11 & 0xfffffffffffffff0);
      iVar12 = iVar19 + -1;
      lVar2 = (longlong)local_48 + lVar6;
      if (-1 < iVar12) {
        puVar14 = (undefined2 *)(lVar2 + (longlong)iVar12 * 2);
        pfVar15 = (float *)(param_1 + 0x1c24 + (longlong)iVar12 * 4);
        do {
          local_48[0] = *pfVar15;
          uVar18 = 0x7fff;
          if ((int)ROUND(local_48[0]) < 0x8000) {
            if ((int)ROUND(local_48[0]) < -0x8000) {
              uVar18 = 0x8000;
            }
            else {
              uVar18 = (undefined2)(int)ROUND(local_48[0]);
            }
          }
          *puVar14 = uVar18;
          pfVar15 = pfVar15 + -1;
          puVar14 = puVar14 + -1;
          iVar12 = iVar12 + -1;
        } while (-1 < iVar12);
        iVar10 = *(int *)(param_1 + 0x11cc);
      }
      sVar3 = *(short *)(param_1 + 0x11e0);
      local_38 = auStack_178 + lVar6;
      *(undefined8 *)((longlong)&uStack_1a0 + lVar6) = 0x14f88181f;
      iVar12 = silk_resampler_init(auStack_178 + lVar6,sVar3 * 1000,iVar10,0);
      local_48[0] = (float)((*(int *)(param_1 + 0x11cc) / 1000) * iVar17);
      uVar11 = (longlong)(int)local_48[0] * 2 + 0xf;
      if (uVar11 <= (ulonglong)((longlong)(int)local_48[0] * 2)) {
        uVar11 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)&uStack_1a0 + lVar6) = 0x14f881864;
      puVar16 = local_38;
      lVar7 = -(uVar11 & 0xfffffffffffffff0);
      *(undefined8 *)((longlong)&uStack_1a0 + lVar7 + lVar6) = 0x14f88187e;
      iVar10 = silk_resampler(puVar16,auStack_178 + lVar7 + lVar6,lVar2,iVar19);
      uVar4 = *(undefined4 *)(param_1 + 0x11cc);
      *(undefined8 *)((longlong)&uStack_1a0 + lVar7 + lVar6) = 0x14f8818a7;
      iVar17 = silk_resampler_init(param_1 + 0x16a0,uVar4,(short)param_2 * 1000,1);
      fVar8 = local_48[0];
      *(undefined8 *)((longlong)&uStack_1a0 + lVar7 + lVar6) = 0x14f8818bc;
      iVar9 = silk_resampler(param_1 + 0x16a0,lVar2,auStack_178 + lVar7 + lVar6,fVar8);
      iVar9 = iVar12 + iVar10 + iVar17 + iVar9;
      lVar13 = (longlong)(local_40 + -1);
      puVar16 = auStack_198 + lVar7 + lVar6;
      if (-1 < local_40 + -1) {
        pfVar15 = (float *)(param_1 + 0x1c24 + lVar13 * 4);
        do {
          lVar1 = lVar13 * 2;
          lVar13 = lVar13 + -1;
          *pfVar15 = (float)(int)*(short *)(lVar2 + lVar1);
          pfVar15 = pfVar15 + -1;
          puVar16 = auStack_198 + lVar7 + lVar6;
        } while (-1 < lVar13);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x11d0) = *(undefined4 *)(param_1 + 0x11cc);
  *(undefined8 *)(puVar16 + -8) = 0x14f88190a;
  return iVar9;
}

