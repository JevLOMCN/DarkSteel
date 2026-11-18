// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// silk_Decode @ 14f876e78

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int silk_Decode(longlong param_1,int *param_2,int param_3,int param_4,undefined8 param_5,
               undefined4 *param_6,uint *param_7,undefined4 param_8)

{
  short sVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  byte bVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  short *psVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  int iVar30;
  int *piVar31;
  uint *puVar32;
  longlong lVar33;
  undefined2 *puVar34;
  undefined8 uVar35;
  undefined4 *puVar36;
  char *pcVar37;
  undefined2 **ppuVar38;
  int iVar39;
  int *piVar40;
  undefined8 uStack_380;
  undefined1 auStack_378 [32];
  uint local_358 [8];
  int local_338 [4];
  int *local_328;
  undefined8 local_320;
  undefined4 *local_318;
  int local_310;
  int local_308 [2];
  uint *local_300;
  undefined2 *local_2f8 [2];
  int local_2e8;
  int local_2e4;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [640];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)local_338;
  uVar28 = 0;
  local_318 = param_6;
  local_300 = param_7;
  iVar24 = param_2[1];
  local_2e0 = param_1;
  local_338[1] = param_3;
  local_320 = param_5;
  local_338[3] = 0;
  local_338[0] = 0;
  local_308[0] = 0;
  local_308[1] = 0;
  if ((iVar24 != 1) && (iVar24 != 2)) {
    uStack_380 = 0x14f876f0f;
    celt_fatal("assertion failed: decControl->nChannelsInternal == 1 || decControl->nChannelsInternal == 2"
               ,"../../../third_party/opus/src/silk/dec_API.c",0x6b);
    iVar24 = param_2[1];
  }
  uVar17 = 0;
  if ((param_4 != 0) && (0 < iVar24)) {
    puVar18 = (undefined4 *)(param_1 + 0x960);
    uVar20 = uVar28;
    do {
      *puVar18 = 0;
      uVar23 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar23;
      iVar24 = param_2[1];
      puVar18 = puVar18 + 0x430;
    } while ((int)uVar23 < iVar24);
  }
  if (*(int *)(param_1 + 0x2190) < iVar24) {
    uStack_380 = 0x14f876f4d;
    local_338[0] = silk_init_decoder(param_1 + 0x10c0);
    iVar24 = param_2[1];
  }
  if (((iVar24 != 1) || (*(int *)(param_1 + 0x2190) != 2)) ||
     (local_310 = iVar24, param_2[3] != *(int *)(param_1 + 0x90c) * 1000)) {
    local_310 = 0;
  }
  piVar31 = (int *)(param_1 + 0x960);
  if ((*piVar31 == 0) && (param_3 = local_338[1], 0 < iVar24)) {
    puVar18 = (undefined4 *)(param_1 + 0x914);
    uVar20 = uVar28;
    do {
      iVar24 = param_2[4];
      if ((iVar24 == 0) || (iVar24 == 10)) {
        *puVar18 = 2;
LAB_14f876fe3:
        puVar18[0x14] = 1;
      }
      else {
        if (iVar24 == 0x14) {
          *puVar18 = 4;
          goto LAB_14f876fe3;
        }
        if (iVar24 == 0x28) {
          puVar18[0x14] = 2;
        }
        else {
          if (iVar24 != 0x3c) {
            uStack_380 = 0x14f8771ef;
            celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/dec_API.c",0x92);
            puVar29 = auStack_378;
            iVar24 = -0xcb;
            goto LAB_14f877214;
          }
          puVar18[0x14] = 3;
        }
        *puVar18 = 4;
      }
      iVar24 = (param_2[3] >> 10) + 1;
      if ((((param_2[3] >> 10) - 7U & 0xfffffff3) != 0) || (iVar24 == 0x14)) {
        uStack_380 = 0x14f87720f;
        celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/dec_API.c",0x98);
        goto LAB_14f87720f;
      }
      uStack_380 = 0x14f877020;
      iVar24 = silk_decoder_set_fs((longlong)(int)uVar20 * 0x10c0 + param_1,iVar24,param_2[2]);
      local_338[0] = local_338[0] + iVar24;
      uVar23 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar23;
      iVar24 = param_2[1];
      puVar18 = puVar18 + 0x430;
      param_3 = local_338[1];
    } while ((int)uVar23 < iVar24);
  }
  iVar30 = *param_2;
  if (((iVar30 == 2) && (iVar24 == 2)) &&
     ((*(int *)(param_1 + 0x218c) == 1 || (*(int *)(param_1 + 0x2190) == 1)))) {
    *(undefined4 *)(param_1 + 0x2180) = 0;
    lVar25 = 2;
    *(undefined4 *)(param_1 + 0x2188) = 0;
    puVar12 = (undefined8 *)(param_1 + 0x1a50);
    puVar13 = (undefined8 *)(param_1 + 0x990);
    do {
      puVar19 = puVar13;
      puVar14 = puVar12;
      uVar35 = puVar19[1];
      uVar7 = puVar19[2];
      uVar8 = puVar19[3];
      *puVar14 = *puVar19;
      puVar14[1] = uVar35;
      uVar35 = puVar19[4];
      uVar9 = puVar19[5];
      puVar14[2] = uVar7;
      puVar14[3] = uVar8;
      uVar7 = puVar19[6];
      uVar8 = puVar19[7];
      puVar14[4] = uVar35;
      puVar14[5] = uVar9;
      uVar35 = puVar19[8];
      uVar9 = puVar19[9];
      puVar14[6] = uVar7;
      puVar14[7] = uVar8;
      uVar7 = puVar19[10];
      uVar8 = puVar19[0xb];
      puVar14[8] = uVar35;
      puVar14[9] = uVar9;
      uVar35 = puVar19[0xc];
      uVar9 = puVar19[0xd];
      puVar14[10] = uVar7;
      puVar14[0xb] = uVar8;
      uVar7 = puVar19[0xe];
      uVar8 = puVar19[0xf];
      puVar14[0xc] = uVar35;
      puVar14[0xd] = uVar9;
      puVar14[0xe] = uVar7;
      puVar14[0xf] = uVar8;
      lVar25 = lVar25 + -1;
      puVar12 = puVar14 + 0x10;
      puVar13 = puVar19 + 0x10;
    } while (lVar25 != 0);
    uVar35 = puVar19[0x11];
    uVar7 = puVar19[0x12];
    uVar8 = puVar19[0x13];
    puVar14[0x10] = puVar19[0x10];
    puVar14[0x11] = uVar35;
    uVar3 = *(undefined4 *)(puVar19 + 0x14);
    uVar4 = *(undefined4 *)((longlong)puVar19 + 0xa4);
    uVar5 = *(undefined4 *)(puVar19 + 0x15);
    uVar6 = *(undefined4 *)((longlong)puVar19 + 0xac);
    puVar14[0x12] = uVar7;
    puVar14[0x13] = uVar8;
    *(undefined4 *)(puVar14 + 0x14) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar4;
    *(undefined4 *)(puVar14 + 0x15) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0xac) = uVar6;
    iVar30 = *param_2;
  }
  *(int *)(param_1 + 0x218c) = iVar30;
  *(int *)(param_1 + 0x2190) = param_2[1];
  if (param_2[2] - 8000U < 0x9c41) {
    if ((param_3 != 1) && (*piVar31 == 0)) {
      iVar24 = param_2[1];
      uVar35 = param_5;
      if (0 < iVar24) {
        piVar31 = (int *)(param_1 + 0x964);
        uVar20 = uVar28;
        do {
          if (0 < *piVar31) {
            piVar40 = piVar31 + 3;
            uVar21 = uVar28;
            do {
              uStack_380 = 0x14f877155;
              iVar24 = ec_dec_bit_logp(param_5,1);
              *piVar40 = iVar24;
              uVar23 = (int)uVar21 + 1;
              uVar21 = (ulonglong)uVar23;
              piVar40 = piVar40 + 1;
            } while ((int)uVar23 < *piVar31);
          }
          uStack_380 = 0x14f877171;
          iVar24 = ec_dec_bit_logp(param_5);
          piVar31[6] = iVar24;
          uVar23 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar23;
          iVar24 = param_2[1];
          piVar31 = piVar31 + 0x430;
          param_1 = local_2e0;
          uVar35 = local_320;
        } while ((int)uVar23 < iVar24);
      }
      if (0 < iVar24) {
        piVar31 = (int *)(param_1 + 0x964);
        uVar20 = uVar28;
        do {
          lVar25 = (longlong)(int)uVar20 * 0x10c0;
          *(undefined8 *)(lVar25 + 0x980 + param_1) = 0;
          *(undefined4 *)(lVar25 + 0x988 + param_1) = 0;
          if (piVar31[6] != 0) {
            if (*piVar31 == 1) {
              piVar31[7] = 1;
            }
            else {
              uStack_380 = 0x14f87725a;
              iVar24 = ec_dec_icdf(uVar35,*(undefined8 *)(&DAT_153514d68 + (longlong)*piVar31 * 8),8
                                  );
              if (0 < *piVar31) {
                puVar32 = (uint *)(piVar31 + 7);
                uVar21 = uVar28;
                do {
                  bVar16 = (byte)uVar21;
                  uVar23 = (int)uVar21 + 1;
                  uVar21 = (ulonglong)uVar23;
                  *puVar32 = iVar24 + 1 >> (bVar16 & 0x1f) & 1;
                  puVar32 = puVar32 + 1;
                } while ((int)uVar23 < *piVar31);
              }
            }
          }
          iVar24 = param_2[1];
          uVar23 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar23;
          piVar31 = piVar31 + 0x430;
        } while ((int)uVar23 < iVar24);
      }
      if ((local_338[1] == 0) && (0 < *(int *)(param_1 + 0x964))) {
        local_328 = (int *)(param_1 + 0x1a40);
        uVar20 = uVar28;
        do {
          if (iVar24 < 1) {
            iVar24 = param_2[1];
          }
          else {
            pcVar37 = (char *)(param_1 + 0xae6);
            piVar31 = local_328 + -0x431;
            uVar21 = uVar28;
            do {
              iVar30 = (int)uVar21;
              if (piVar31[1] != 0) {
                if ((iVar24 == 2) && (iVar30 == 0)) {
                  uStack_380 = 0x14f8772f3;
                  silk_stereo_decode_pred(local_320,local_308);
                  if (*local_328 == 0) {
                    uStack_380 = 0x14f877308;
                    silk_stereo_decode_mid_only(local_320,local_338 + 3);
                  }
                }
                if (((int)uVar20 < 1) || (local_358[0] = 2, *piVar31 == 0)) {
                  local_358[0] = uVar17;
                }
                uStack_380 = 0x14f87733c;
                silk_decode_indices((longlong)iVar30 * 0x10c0 + param_1,local_320,uVar20,1);
                local_358[0] = *(uint *)(pcVar37 + -0x1ce);
                uStack_380 = 0x14f87735e;
                silk_decode_pulses(local_320,local_2c8,(int)pcVar37[-1],(int)*pcVar37);
                iVar24 = param_2[1];
              }
              uVar21 = (ulonglong)(iVar30 + 1U);
              piVar31 = piVar31 + 0x430;
              pcVar37 = pcVar37 + 0x10c0;
            } while ((int)(iVar30 + 1U) < iVar24);
          }
          local_328 = local_328 + 1;
          uVar23 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar23;
        } while ((int)uVar23 < *(int *)(param_1 + 0x964));
      }
      piVar31 = (int *)(param_1 + 0x960);
      param_3 = local_338[1];
    }
    uVar35 = local_320;
    if (param_2[1] == 2) {
      if ((param_3 == 0) ||
         ((param_3 == 2 && (*(int *)(param_1 + 0x980 + (longlong)*piVar31 * 4) == 1)))) {
        uStack_380 = 0x14f8773f9;
        silk_stereo_decode_pred(local_320);
        if (((param_3 == 0) && (*(int *)(param_1 + 0x1a30 + (longlong)*piVar31 * 4) == 0)) ||
           ((param_3 == 2 && (*(int *)(param_1 + 0x1a40 + (longlong)*piVar31 * 4) == 0)))) {
          uStack_380 = 0x14f87742a;
          silk_stereo_decode_mid_only(uVar35);
        }
        else {
          local_338[3] = 0;
        }
      }
      else {
        psVar26 = (short *)(param_1 + 0x2180);
        uVar20 = uVar28;
        do {
          sVar1 = *psVar26;
          psVar26 = psVar26 + 1;
          local_308[uVar20] = (int)sVar1;
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < 2);
      }
    }
    iVar24 = param_2[1];
    if (((iVar24 == 2) && (local_338[3] == 0)) && (*(int *)(param_1 + 0x2194) == 1)) {
      uStack_380 = 0x14f87745a;
      memset((void *)(param_1 + 0x15c4),0,0x400);
      *(undefined4 *)(param_1 + 0x19c4) = 100;
      *(undefined1 *)(param_1 + 0x19c8) = 10;
      *(undefined4 *)(param_1 + 0x211c) = 0;
      *(undefined4 *)(param_1 + 0x1a08) = 1;
      iVar24 = param_2[1];
    }
    iVar30 = *param_2;
    local_2e4 = iVar30 * param_2[2];
    local_2e8 = param_2[3] * iVar24;
    uVar23 = uVar17;
    if (local_2e4 <= local_2e8) {
      uVar23 = (*(int *)(param_1 + 0x918) + 2) * iVar24;
    }
    uVar20 = (longlong)(int)uVar23 * 2 + 0xf;
    if (uVar20 <= (ulonglong)((longlong)(int)uVar23 * 2)) {
      uVar20 = 0xffffffffffffff0;
    }
    uStack_380 = 0x14f8774d8;
    lVar25 = -(uVar20 & 0xfffffffffffffff0);
    local_328 = (undefined4 *)((longlong)local_338 + lVar25);
    if (local_2e8 < local_2e4) {
      local_328 = local_318;
    }
    local_2f8[0] = (undefined2 *)local_328;
    local_2f8[1] = (undefined2 *)((longlong)*(int *)(param_1 + 0x918) * 2 + 4 + (longlong)local_328)
    ;
    if (param_3 == 0) {
      uVar20 = (ulonglong)(local_338[3] == 0);
    }
    else if ((*(int *)(param_1 + 0x2194) == 0) ||
            (((uVar20 = uVar28, iVar24 == 2 && (param_3 == 2)) &&
             (*(int *)(param_1 + 0x1a40 + (longlong)*(int *)(param_1 + 0x1a20) * 4) == 1)))) {
      uVar20 = 1;
    }
    if (0 < iVar24) {
      piVar31 = (int *)(param_1 + 0x960);
      local_2e0 = 0;
      ppuVar38 = local_2f8;
      uVar21 = uVar28;
      do {
        iVar30 = (int)uVar21;
        if ((iVar30 == 0) || (uVar20 != 0)) {
          iVar24 = *(int *)(param_1 + 0x960) - iVar30;
          uVar23 = uVar17;
          if (0 < iVar24) {
            if (local_338[1] == 2) {
              uVar23 = -(uint)(*(int *)(param_1 + 0x97c + (iVar24 + local_2e0) * 4) != 0) & 2;
            }
            else if ((iVar30 < 1) || (uVar23 = 1, *(int *)(param_1 + 0x2194) == 0)) {
              uVar23 = 2;
            }
          }
          puVar34 = *ppuVar38;
          *(undefined4 *)((longlong)local_358 + lVar25 + 0x10) = param_8;
          iVar24 = local_338[1];
          *(uint *)((longlong)local_358 + lVar25 + 8) = uVar23;
          uVar35 = local_320;
          *(int *)((longlong)local_358 + lVar25) = iVar24;
          *(undefined8 *)(auStack_378 + lVar25 + -8) = 0x14f8775f9;
          iVar24 = silk_decode_frame((longlong)iVar30 * 0x10c0 + param_1,uVar35,puVar34 + 2,
                                     local_338 + 2);
          local_338[0] = local_338[0] + iVar24;
        }
        else {
          lVar33 = (longlong)local_338[2];
          puVar34 = *ppuVar38;
          *(undefined8 *)(auStack_378 + lVar25 + -8) = 0x14f877583;
          memset(puVar34 + 2,0,lVar33 * 2);
        }
        *piVar31 = *piVar31 + 1;
        uVar21 = (ulonglong)(iVar30 + 1U);
        iVar24 = param_2[1];
        ppuVar38 = ppuVar38 + 1;
        local_2e0 = local_2e0 + 0x430;
        piVar31 = piVar31 + 0x430;
      } while ((int)(iVar30 + 1U) < iVar24);
      iVar30 = *param_2;
    }
    iVar11 = local_2e4;
    iVar39 = local_2e8;
    puVar34 = local_2f8[1];
    piVar31 = local_328;
    if ((iVar30 == 2) && (iVar24 == 2)) {
      *(int *)((longlong)local_358 + lVar25 + 8) = local_338[2];
      *(undefined4 *)((longlong)local_358 + lVar25) = *(undefined4 *)(param_1 + 0x90c);
      *(undefined8 *)(auStack_378 + lVar25 + -8) = 0x14f87766e;
      silk_stereo_MS_to_LR(param_1 + 0x2180,piVar31,puVar34,local_308);
      uVar20 = (ulonglong)(uint)local_338[2];
    }
    else {
      *local_328 = *(undefined4 *)(param_1 + 0x2184);
      uVar20 = (ulonglong)local_338[2];
      *(undefined4 *)(param_1 + 0x2184) = *(undefined4 *)((longlong)piVar31 + uVar20 * 2);
    }
    uVar23 = ((int)uVar20 * param_2[2]) / (*(short *)(param_1 + 0x90c) * 1000);
    *local_300 = uVar23;
    if (*param_2 != 2) {
      uVar23 = uVar17;
    }
    uVar21 = (longlong)(int)uVar23 * 2 + 0xf;
    if (uVar21 <= (ulonglong)((longlong)(int)uVar23 * 2)) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_378 + lVar25 + -8) = 0x14f8776db;
    puVar36 = local_318;
    lVar33 = -(uVar21 & 0xfffffffffffffff0);
    lVar10 = lVar33 + lVar25 + -0x378;
    iVar24 = param_2[1];
    puVar18 = local_318;
    if (*param_2 == 2) {
      puVar18 = (undefined4 *)((longlong)local_338 + lVar33 + lVar25);
    }
    uVar23 = uVar17;
    if (iVar39 < iVar11) {
      uVar23 = (*(int *)(param_1 + 0x918) + 2) * iVar24;
    }
    uVar21 = (longlong)(int)uVar23 * 2 + 0xf;
    if (uVar21 <= (ulonglong)((longlong)(int)uVar23 * 2)) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_378 + lVar33 + lVar25 + -8) = 0x14f877728;
    puVar27 = local_318;
    lVar2 = -(uVar21 & 0xfffffffffffffff0);
    puVar22 = (undefined4 *)((longlong)local_338 + lVar2 + lVar33 + lVar25);
    if (iVar39 < iVar11) {
      iVar30 = *(int *)(param_1 + 0x918);
      *(undefined8 *)(auStack_378 + lVar2 + lVar33 + lVar25 + -8) = 0x14f877753;
      memcpy(puVar22,puVar27,(longlong)((iVar30 + 2) * iVar24) * 2);
      uVar20 = (ulonglong)(uint)local_338[2];
      local_328 = puVar22;
      local_2f8[0] = (undefined2 *)puVar22;
      local_2f8[1] = (undefined2 *)
                     ((longlong)puVar22 + ((longlong)*(int *)(param_1 + 0x918) + 2) * 2);
      puVar36 = local_318;
    }
    ppuVar38 = local_2f8;
    uVar21 = uVar28;
    while( true ) {
      iVar24 = param_2[1];
      iVar30 = *param_2;
      if (iVar24 <= *param_2) {
        iVar30 = iVar24;
      }
      iVar39 = (int)uVar21;
      if (iVar30 <= iVar39) break;
      puVar34 = *ppuVar38;
      *(undefined8 *)(auStack_378 + lVar2 + lVar33 + lVar25 + -8) = 0x14f8777bc;
      iVar24 = silk_resampler((longlong)iVar39 * 0x10c0 + 0x990 + param_1,puVar18,puVar34 + 1,uVar20
                             );
      local_338[0] = local_338[0] + iVar24;
      if ((*param_2 == 2) &&
         (puVar22 = puVar18, puVar27 = puVar36, uVar20 = uVar28, 0 < (int)*local_300)) {
        do {
          uVar23 = (int)uVar20 + 1;
          *(undefined2 *)puVar27 = *(undefined2 *)puVar22;
          puVar22 = (undefined4 *)((longlong)puVar22 + 2);
          puVar27 = puVar27 + 1;
          uVar20 = (ulonglong)uVar23;
        } while ((int)uVar23 < (int)*local_300);
      }
      uVar20 = (ulonglong)(uint)local_338[2];
      uVar21 = (ulonglong)(iVar39 + 1);
      ppuVar38 = ppuVar38 + 1;
      puVar36 = (undefined4 *)((longlong)puVar36 + 2);
    }
    if ((*param_2 == 2) && (iVar24 == 1)) {
      if (local_310 == 0) {
        uVar20 = uVar28;
        uVar21 = uVar28;
        if (0 < (int)*local_300) {
          do {
            uVar23 = (int)uVar21 + 1;
            *(undefined2 *)(uVar20 + 2 + (longlong)local_318) =
                 *(undefined2 *)(uVar20 + (longlong)local_318);
            uVar20 = uVar20 + 4;
            uVar21 = (ulonglong)uVar23;
          } while ((int)uVar23 < (int)*local_300);
        }
      }
      else {
        puVar34 = (undefined2 *)((longlong)local_328 + 2);
        *(undefined8 *)(auStack_378 + lVar2 + lVar33 + lVar25 + -8) = 0x14f87782d;
        iVar24 = silk_resampler(param_1 + 0x1a50,puVar18,puVar34,uVar20);
        local_338[0] = local_338[0] + iVar24;
        uVar20 = uVar28;
        uVar21 = uVar28;
        if (0 < (int)*local_300) {
          do {
            uVar23 = (int)uVar21 + 1;
            *(undefined2 *)(uVar20 + 2 + (longlong)local_318) = *(undefined2 *)puVar18;
            puVar18 = (undefined4 *)((longlong)puVar18 + 2);
            uVar20 = uVar20 + 4;
            uVar21 = (ulonglong)uVar23;
          } while ((int)uVar23 < (int)*local_300);
        }
      }
    }
    if (*(int *)(param_1 + 0x105c) == 2) {
      local_2e0 = 0x400000006;
      local_2d8 = 3;
      uVar17 = *(int *)((longlong)&local_2e0 + ((longlong)*(int *)(param_1 + 0x90c) + -8 >> 2) * 4)
               * *(int *)(param_1 + 0x904);
    }
    param_2[5] = uVar17;
    iVar24 = local_338[0];
    if (local_338[1] == 1) {
      puVar29 = auStack_378 + lVar2 + lVar10 + 0x378;
      if (0 < *(int *)(param_1 + 0x2190)) {
        puVar15 = (undefined1 *)(param_1 + 0x908);
        do {
          *puVar15 = 10;
          uVar17 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar17;
          puVar15 = puVar15 + 0x10c0;
          puVar29 = auStack_378 + lVar2 + lVar10 + 0x378;
        } while ((int)uVar17 < *(int *)(param_1 + 0x2190));
      }
    }
    else {
      *(int *)(param_1 + 0x2194) = local_338[3];
      puVar29 = auStack_378 + lVar2 + lVar10 + 0x378;
    }
  }
  else {
LAB_14f87720f:
    puVar29 = auStack_378;
    iVar24 = -200;
  }
LAB_14f877214:
  *(undefined8 *)(puVar29 + -8) = 0x14f877223;
  return iVar24;
}

// silk_Get_Decoder_Size @ 14f87790c

undefined8 silk_Get_Decoder_Size(undefined4 *param_1)

{
  *param_1 = 0x2198;
  return 0;
}

// silk_InitDecoder @ 14f87791c

void silk_InitDecoder(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 2;
  do {
    silk_init_decoder();
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(undefined8 *)(param_1 + 0x2180) = 0;
  *(undefined4 *)(param_1 + 0x2188) = 0;
  *(undefined4 *)(param_1 + 0x2194) = 0;
  return;
}

