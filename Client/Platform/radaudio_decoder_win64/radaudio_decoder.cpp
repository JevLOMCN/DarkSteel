// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 37

// UERARadAudioDecoderDecodeChunk_1 @ 14f8c4460

undefined8
UERARadAudioDecoderDecodeChunk_1
          (longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res8;
  
  *param_4 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    return 0xffffffff;
  }
  if (param_3 < 7) {
    return 0xfffffffe;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x18);
  uVar1 = FUN_14f8c5bc0(param_1,param_5,lVar2 + param_2,param_3 - lVar2,&local_res8);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (-1 < (int)uVar1) {
    *param_4 = local_res8 + lVar2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)uVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return uVar1;
}

// UERARadAudioDecoderDidSeek_1 @ 14f8c4510

void UERARadAudioDecoderDidSeek_1(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}

// UERARadAudioDecoderGetChunkLength_1 @ 14f8c4530

ulonglong UERARadAudioDecoderGetChunkLength_1(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int local_48 [2];
  int local_40;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    return 0xffffffff;
  }
  if (3 < param_3) {
    uVar2 = FUN_14f8c9f50(param_2,param_1 + 0xc4,local_48,param_3);
    iVar1 = (int)uVar2;
    if (iVar1 == -4) {
      return uVar2;
    }
    if (iVar1 != -2) {
      if ((((iVar1 != -3) && (uVar4 = local_1c + iVar1, uVar4 < 0x4000)) &&
          ((uint)(local_14 + iVar1) <= uVar4)) && ((local_48[0] == 0 || (local_10 < 0x81)))) {
        uVar3 = 0x802;
        if (local_40 != 0) {
          uVar3 = 0x102;
        }
        if (uVar3 < local_18) {
          uVar4 = 0xfffffffd;
        }
        return (ulonglong)uVar4;
      }
      return 0xfffffffd;
    }
  }
  return 0xfffffffe;
}

// UERARadAudioDecoderGetInfoHeader_1 @ 14f8c45f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UERARadAudioDecoderGetInfoHeader_1
                   (undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined4 local_f4;
  undefined4 local_ec;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  lVar1 = FUN_14f8ca3d0(param_1,param_2,local_f8);
  if (lVar1 != 0) {
    *(undefined4 *)(param_3 + 2) = local_ec;
    *(undefined4 *)(param_3 + 4) = local_f4;
    *(char *)((longlong)param_3 + 3) = local_f8[3];
    *(char *)(param_3 + 1) = local_f8[2];
    *param_3 = local_f8._0_2_;
  }
  return lVar1;
}

// UERARadAudioDecoderMemoryRequired_1 @ 14f8c46b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UERARadAudioDecoderMemoryRequired_1(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  int local_f4;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1 == 0) {
    local_f4 = 2;
  }
  else {
    lVar1 = FUN_14f8ca3d0(param_1,param_2,local_f8);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return (longlong)local_f4 * 0x400 + 0x23f;
}

// UERARadAudioDecoderOpen_1 @ 14f8c4730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
UERARadAudioDecoderOpen_1
          (undefined8 param_1,ulonglong param_2,undefined4 *param_3,ulonglong param_4,
          longlong *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  ulonglong *puVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined1 auStack_243 [220];
  undefined1 auStack_167 [23];
  undefined8 uStack_150;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  uint local_114;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ushort local_78;
  byte abStack_76 [62];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (0x7f < param_2) {
    uStack_150 = 0x14f8c4777;
    lVar4 = FUN_14f8ca3d0(param_1,param_2,&local_118);
    if (lVar4 != 0) {
      lVar11 = 0;
      lVar7 = lVar11;
      do {
        if (0xc < abStack_76[lVar7]) {
          return (undefined4 *)0x0;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < 4);
      if (0x21f < param_4) {
        uStack_150 = 0x14f8c47c1;
        memset(param_3,0,0x220);
        uVar5 = (longlong)param_3 + 0x23fU & 0xffffffffffffffe0;
        if (0 < (int)local_114) {
          puVar8 = (ulonglong *)(param_3 + 0x82);
          uVar10 = (ulonglong)local_114;
          do {
            *puVar8 = uVar5;
            puVar8 = puVar8 + 1;
            uVar5 = uVar5 + 0x400;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if ((uVar5 - (longlong)param_3 <= param_4) && (param_3[2] = 1, param_3 != (undefined4 *)0x0)
           ) {
          *param_3 = local_118;
          param_3[5] = local_114;
          param_3[6] = 0;
          local_128 = 0;
          uStack_150 = 0x14f8c4826;
          UERArrCPUx86_detect_();
          uVar3 = UERAg_rrCPUx86_feature_flags_;
          param_3[0x2f] = 1;
          pbVar13 = (byte *)((longlong)param_3 + 0xf5);
          *(undefined8 *)(param_3 + 0x28) = local_90;
          *(undefined8 *)(param_3 + 0x2a) = uStack_88;
          lVar7 = -0xf5 - (longlong)param_3;
          *(undefined8 *)(param_3 + 0x2c) = local_80;
          local_128 = CONCAT71(local_128._1_7_,(char)(uVar3 >> 1)) & 0xffffffffffffff01;
          local_128 = CONCAT62(local_128._2_6_,CONCAT11((char)(uVar3 >> 2),(undefined1)local_128)) &
                      0xffffffffffff01ff;
          local_128 = CONCAT53(local_128._3_5_,CONCAT12((char)(uVar3 >> 3),(undefined2)local_128)) &
                      0xffffffffff01ffff;
          local_128 = CONCAT44(local_128._4_4_,CONCAT13((char)(uVar3 >> 0xd),(undefined3)local_128))
                      & 0xffffffff01ffffff;
          local_128 = CONCAT35(local_128._5_3_,CONCAT14((char)(uVar3 >> 8),(undefined4)local_128)) &
                      0xffffff01ffffffff;
          *(ulonglong *)(param_3 + 0x34) = local_128;
          param_3[7] = local_10c;
          param_3[4] = local_110;
          *(undefined **)(param_3 + 0x36) = &DAT_154dfb4a0 + (longlong)local_110 * 0x49c;
          *(undefined **)(param_3 + 0x38) = &DAT_154dfc710 + (longlong)local_110 * 0x49c;
          *(undefined8 *)(param_3 + 10) = local_a8;
          *(undefined8 *)(param_3 + 0xc) = uStack_a0;
          *(undefined8 *)(param_3 + 0x10) = local_108;
          *(undefined8 *)(param_3 + 0x12) = uStack_100;
          *(undefined8 *)(param_3 + 0xe) = local_98;
          *(undefined8 *)(param_3 + 0x14) = local_f8;
          *(undefined8 *)(param_3 + 0x16) = uStack_f0;
          *(undefined8 *)(param_3 + 0x18) = local_e8;
          *(undefined8 *)(param_3 + 0x1a) = uStack_e0;
          *(undefined8 *)(param_3 + 0x1c) = local_d8;
          *(undefined8 *)(param_3 + 0x1e) = uStack_d0;
          param_3[0x20] = local_c8;
          param_3[0x21] = uStack_c4;
          param_3[0x22] = uStack_c0;
          param_3[0x23] = uStack_bc;
          param_3[0x24] = local_b8;
          param_3[0x25] = uStack_b4;
          param_3[0x26] = uStack_b0;
          param_3[0x27] = uStack_ac;
          *(ushort *)(param_3 + 0x32) = local_78;
          *(ushort *)((longlong)param_3 + 0xc6) = local_78 >> 1;
          puVar12 = auStack_167 + -(longlong)param_3;
          *(undefined2 *)(param_3 + 0x31) = 0;
          param_3[0x33] = 0;
          *(undefined2 *)((longlong)param_3 + 0xca) = 0;
          while (bVar1 = abStack_76[lVar11], pbVar13[-0xd] = bVar1, pbVar6 = pbVar13, bVar1 < 0xd) {
            do {
              bVar1 = pbVar6[(longlong)puVar12];
              bVar9 = bVar1 & 0xf7;
              pbVar6[-0xc] = bVar9;
              *pbVar6 = (byte)((uint)(int)(char)bVar1 >> 3) & 1;
              if (5 < bVar9) {
                return (undefined4 *)0x0;
              }
              pbVar6 = pbVar6 + 1;
            } while ((longlong)(pbVar6 + lVar7) < 0xc);
            lVar11 = lVar11 + 1;
            puVar12 = puVar12 + -0x37;
            pbVar13 = pbVar13 + 0x43;
            lVar7 = lVar7 + -0x43;
            if (3 < lVar11) {
              lVar7 = 4;
              puVar12 = (undefined1 *)((longlong)param_3 + 0x1f5);
              do {
                uVar2 = puVar12[(longlong)(auStack_243 + (4 - (longlong)param_3))];
                puVar12[-1] = puVar12[(longlong)(auStack_243 + -(longlong)param_3)];
                *puVar12 = puVar12[(longlong)(auStack_243 + (1 - (longlong)param_3))];
                puVar12[1] = puVar12[(longlong)(auStack_243 + (2 - (longlong)param_3))];
                puVar12[2] = puVar12[(longlong)(auStack_243 + (3 - (longlong)param_3))];
                puVar12[3] = uVar2;
                puVar12 = puVar12 + 5;
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
              uStack_150 = 0x14f8c4a40;
              FUN_14f8ca240(param_3 + 0x3a);
              if (param_5 != (longlong *)0x0) {
                *param_5 = lVar4;
                return param_3;
              }
              return param_3;
            }
          }
        }
      }
    }
  }
  return (undefined4 *)0x0;
}

// FUN_14f8c4ac0 @ 14f8c4ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f8c4ac0(longlong param_1,float *param_2,uint param_3,float *param_4,float *param_5,
                  float *param_6)

{
  ushort *puVar1;
  int *piVar2;
  float *pfVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  float *pfVar35;
  longlong lVar36;
  int iVar37;
  int iVar38;
  ushort *puVar39;
  float *pfVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  float fVar45;
  undefined1 in_XMM1 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  iVar33 = _UNK_15352bb8c;
  iVar32 = _UNK_15352bb88;
  iVar31 = _UNK_15352bb84;
  iVar30 = ___xmm_ffffffefffffffefffffffefffffffef;
  fVar29 = _UNK_15352bb7c;
  fVar28 = _UNK_15352bb78;
  fVar27 = _UNK_15352bb74;
  fVar26 = ___xmm_3f2800003f2800003f2800003f280000;
  fVar25 = _UNK_15352bb6c;
  fVar24 = _UNK_15352bb68;
  fVar23 = _UNK_15352bb64;
  fVar22 = ___xmm_3eb000003eb000003eb000003eb00000;
  fVar21 = _UNK_150d5a7ac;
  fVar20 = _UNK_150d5a7a8;
  fVar19 = _UNK_150d5a7a4;
  fVar45 = ___xmm_37800000378000003780000037800000;
  iVar18 = _UNK_150b5164c;
  iVar17 = _UNK_150b51648;
  iVar16 = _UNK_150b51644;
  iVar5 = ___xmm_00000010000000100000001000000010;
  fVar15 = _UNK_15076b1fc;
  fVar14 = _UNK_15076b1f8;
  fVar13 = _UNK_15076b1f4;
  fVar11 = ___xmm_3f8000003f8000003f8000003f800000;
  auVar12 = ___xmm_00000001000000010000000100000001;
  lVar36 = (longlong)(int)param_3;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    UERAradaudio_sse2_compute_band_energy_multiple4_(param_2,param_3,param_4,param_5);
    return;
  }
  iVar37 = 0;
  if (0 < (int)param_3) {
    iVar38 = 0;
    if (((((3 < param_3) && (iVar38 = iVar37, 4 < __isa_available)) &&
         ((pfVar35 = param_2 + lVar36 + -1, param_6 + lVar36 + -1 < param_2 || (pfVar35 < param_6)))
         ) && ((param_4 + lVar36 + -1 < param_2 || (pfVar35 < param_4)))) &&
       (((float *)((longlong)param_5 + lVar36 * 2 + -2) < param_2 || (pfVar35 < param_5)))) {
      pfVar35 = param_6;
      pfVar40 = param_5;
      iVar38 = 0;
      do {
        auVar46 = pmovzxwd(in_XMM1,*(undefined8 *)pfVar40);
        iVar38 = iVar38 + 4;
        pfVar40 = pfVar40 + 2;
        piVar2 = (int *)((longlong)pfVar35 + ((longlong)param_4 - (longlong)param_6));
        iVar37 = piVar2[1];
        iVar6 = piVar2[2];
        iVar7 = piVar2[3];
        fVar47 = (float)auVar46._0_4_ * fVar45;
        fVar48 = (float)auVar46._4_4_ * fVar19;
        fVar49 = (float)auVar46._8_4_ * fVar20;
        fVar50 = (float)auVar46._12_4_ * fVar21;
        auVar46._0_4_ = iVar5 + *piVar2;
        auVar46._4_4_ = iVar16 + iVar37;
        auVar46._8_4_ = iVar17 + iVar6;
        auVar46._12_4_ = iVar18 + iVar7;
        auVar46 = vpsllvd_avx2(auVar12,auVar46);
        in_XMM1._0_4_ = (float)auVar46._0_4_;
        in_XMM1._4_4_ = (float)auVar46._4_4_;
        in_XMM1._8_4_ = (float)auVar46._8_4_;
        in_XMM1._12_4_ = (float)auVar46._12_4_;
        fVar8 = pfVar35[1];
        fVar9 = pfVar35[2];
        fVar10 = pfVar35[3];
        pfVar3 = (float *)((longlong)pfVar35 + ((longlong)param_2 - (longlong)param_6));
        *pfVar3 = (float)(~-(uint)(iVar30 == *piVar2) & (uint)in_XMM1._0_4_) *
                  ((fVar22 * fVar47 + fVar26) * fVar47 + fVar11) * *pfVar35;
        pfVar3[1] = (float)(~-(uint)(iVar31 == iVar37) & (uint)in_XMM1._4_4_) *
                    ((fVar23 * fVar48 + fVar27) * fVar48 + fVar13) * fVar8;
        pfVar3[2] = (float)(~-(uint)(iVar32 == iVar6) & (uint)in_XMM1._8_4_) *
                    ((fVar24 * fVar49 + fVar28) * fVar49 + fVar14) * fVar9;
        pfVar3[3] = (float)(~-(uint)(iVar33 == iVar7) & (uint)in_XMM1._12_4_) *
                    ((fVar25 * fVar50 + fVar29) * fVar50 + fVar15) * fVar10;
        pfVar35 = pfVar35 + 4;
      } while (iVar38 < (int)(param_3 & 0xfffffffc));
    }
    fVar15 = __real_3f280000;
    fVar14 = __real_3eb00000;
    fVar13 = __real_37800000;
    fVar11 = __real_3f800000;
    if (iVar38 < (int)param_3) {
      lVar44 = (longlong)param_4 - (longlong)param_6;
      lVar43 = (longlong)param_2 - (longlong)param_6;
      lVar36 = (longlong)iVar38;
      if (3 < (int)(param_3 - iVar38)) {
        puVar39 = (ushort *)((longlong)param_5 + lVar36 * 2 + 4);
        pfVar35 = param_6 + lVar36 + 1;
        uVar34 = ((param_3 - iVar38) - 4 >> 2) + 1;
        uVar41 = (ulonglong)uVar34;
        iVar38 = iVar38 + uVar34 * 4;
        lVar36 = lVar36 + (ulonglong)uVar34 * 4;
        do {
          iVar5 = *(int *)(lVar44 + -4 + (longlong)pfVar35);
          if (iVar5 == -0x11) {
            fVar45 = 0.0;
          }
          else {
            fVar45 = (float)(1 << ((char)iVar5 + 0x10U & 0x1f));
          }
          *(float *)((longlong)pfVar35 + lVar43 + -4) =
               fVar45 * (((float)puVar39[-2] * fVar13 * fVar14 + fVar15) *
                         (float)puVar39[-2] * fVar13 + fVar11) * pfVar35[-1];
          if (*(int *)(lVar44 + (longlong)pfVar35) == -0x11) {
            fVar45 = 0.0;
          }
          else {
            fVar45 = (float)(1 << ((char)*(int *)(lVar44 + (longlong)pfVar35) + 0x10U & 0x1f));
          }
          *(float *)((longlong)pfVar35 + lVar43) =
               fVar45 * (((float)puVar39[-1] * fVar13 * fVar14 + fVar15) *
                         (float)puVar39[-1] * fVar13 + fVar11) * *pfVar35;
          iVar5 = *(int *)(lVar44 + 4 + (longlong)pfVar35);
          if (iVar5 == -0x11) {
            fVar45 = 0.0;
          }
          else {
            fVar45 = (float)(1 << ((char)iVar5 + 0x10U & 0x1f));
          }
          *(float *)((longlong)pfVar35 + lVar43 + 4) =
               fVar45 * (((float)*puVar39 * fVar13 * fVar14 + fVar15) * (float)*puVar39 * fVar13 +
                        fVar11) * pfVar35[1];
          puVar1 = puVar39 + 1;
          iVar5 = *(int *)(lVar44 + 8 + (longlong)pfVar35);
          if (iVar5 == -0x11) {
            fVar45 = 0.0;
          }
          else {
            fVar45 = (float)(1 << ((char)iVar5 + 0x10U & 0x1f));
          }
          puVar39 = puVar39 + 4;
          *(float *)((longlong)pfVar35 + lVar43 + 8) =
               fVar45 * (((float)*puVar1 * fVar13 * fVar14 + fVar15) * (float)*puVar1 * fVar13 +
                        fVar11) * pfVar35[2];
          pfVar35 = pfVar35 + 4;
          uVar41 = uVar41 - 1;
        } while (uVar41 != 0);
        if ((int)param_3 <= iVar38) {
          return;
        }
      }
      param_6 = param_6 + lVar36;
      lVar42 = (longlong)(int)(param_3 - iVar38);
      puVar39 = (ushort *)((longlong)param_5 + lVar36 * 2);
      do {
        uVar4 = *puVar39;
        if (*(int *)((longlong)param_6 + lVar44) == -0x11) {
          fVar45 = 0.0;
        }
        else {
          fVar45 = (float)(1 << ((char)*(int *)((longlong)param_6 + lVar44) + 0x10U & 0x1f));
        }
        puVar39 = puVar39 + 1;
        *(float *)(lVar43 + (longlong)param_6) =
             fVar45 * (((float)uVar4 * fVar13 * fVar14 + fVar15) * (float)uVar4 * fVar13 + fVar11) *
             *param_6;
        param_6 = param_6 + 1;
        lVar42 = lVar42 + -1;
      } while (lVar42 != 0);
    }
  }
  return;
}

// FUN_14f8c4ef0 @ 14f8c4ef0

void FUN_14f8c4ef0(int param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(&DAT_154e13c00 + (longlong)param_1 * 4);
  iVar7 = iVar2 * 0xc;
  if (0x1000 < iVar7) {
    iVar7 = 0x1000;
  }
  iVar6 = 0;
  if (0 < *(int *)(&DAT_154dfb4a4 + ((longlong)param_1 + (longlong)param_2 * 4) * 0x49c)) {
    lVar5 = 0;
    do {
      iVar3 = *(int *)(param_4 + lVar5 * 4);
      if (iVar3 == -0x11) {
        iVar3 = 0;
      }
      else {
        lVar1 = lVar5 + (longlong)param_2 * 0x18;
        iVar3 = (*(char *)(param_3 + 1 + lVar1 * 2) * iVar3 + *(char *)(param_3 + lVar1 * 2) * 0x20)
                * iVar2 >> 8;
      }
      iVar4 = 0;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = iVar7;
      if (iVar4 <= iVar7) {
        iVar3 = iVar4;
      }
      iVar6 = iVar6 + 1;
      *(char *)(lVar5 + param_5) = (char)((uint)iVar3 >> 8);
      lVar5 = lVar5 + 1;
    } while (iVar6 < *(int *)(&DAT_154dfb4a4 + ((longlong)param_1 + (longlong)param_2 * 4) * 0x49c))
    ;
  }
  return;
}

// FUN_14f8c4fd0 @ 14f8c4fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f8c4fd0(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte local_18 [4];
  char local_14;
  char local_13;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)local_18;
  iVar3 = 0;
  iVar1 = 0;
  bVar4 = 0;
  pbVar2 = param_1;
  if (*param_1 != 0) {
    do {
      iVar1 = iVar1 + 1;
      param_1[(ulonglong)pbVar2[1] + 0x19] = param_1[(ulonglong)pbVar2[1] + 0x19] + 1;
      bVar4 = *param_1;
      pbVar2 = pbVar2 + 1;
    } while (iVar1 < (int)(uint)bVar4);
  }
  iVar1 = 0;
  local_18[1] = param_1[0x19];
  local_18[2] = param_1[0x19] + param_1[0x1a];
  local_18[3] = local_18[2] + param_1[0x1b];
  local_14 = local_18[3] + param_1[0x1c];
  local_18[0] = 0;
  local_13 = local_14 + param_1[0x1d];
  bVar5 = 0;
  if (bVar4 != 0) {
    pbVar2 = param_1 + 0x1f;
    do {
      iVar1 = iVar1 + 1;
      bVar4 = local_18[pbVar2[-0x1e]];
      *pbVar2 = bVar4;
      bVar5 = *param_1;
      local_18[pbVar2[-0x1e]] = bVar4 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar1 < (int)(uint)bVar5);
  }
  iVar1 = 0;
  local_18[1] = param_1[0x19] * '\x02';
  local_18[2] = param_1[0x1a] * '\x02' + param_1[0x19] * '\x02';
  local_18[0] = 0;
  local_18[3] = param_1[0x1b] * '\x02' + local_18[2];
  local_14 = param_1[0x1c] * '\x02' + local_18[3];
  local_13 = param_1[0x1d] * '\x02' + local_14;
  if (bVar5 != 0) {
    pbVar2 = param_1 + 0x2b;
    do {
      iVar1 = iVar1 + 1;
      bVar4 = local_18[pbVar2[-0x2a]];
      *pbVar2 = bVar4;
      local_18[pbVar2[-0x2a]] = bVar4 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar1 < (int)(uint)*param_1);
    if (*param_1 != 0) {
      pbVar2 = param_1 + 0x37;
      do {
        iVar3 = iVar3 + 1;
        bVar4 = local_18[pbVar2[-0x36]];
        *pbVar2 = bVar4;
        local_18[pbVar2[-0x36]] = bVar4 + 1;
        pbVar2 = pbVar2 + 1;
      } while (iVar3 < (int)(uint)*param_1);
    }
  }
  return;
}

// FUN_14f8c5150 @ 14f8c5150

void FUN_14f8c5150(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5
                  ,int *param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  unkbyte10 Var19;
  longlong lVar20;
  undefined8 *puVar21;
  float *pfVar22;
  uint uVar23;
  longlong lVar24;
  ushort *puVar25;
  ulonglong *puVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  float *pfVar31;
  longlong lVar32;
  float fVar33;
  undefined1 in_XMM1 [16];
  undefined1 auVar34 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  
  if (*(char *)(param_1 + 0xd2) != '\0') {
    UERAradaudio_sse4_compute_subband_energy_skip12_excess_read7_(param_2,param_3,param_4,param_6);
    return;
  }
  iVar28 = 0;
  iVar27 = *param_6;
  piVar1 = param_6;
  while (iVar27 == 1) {
    iVar28 = iVar28 + 1;
    piVar1 = piVar1 + 1;
    iVar27 = *piVar1;
  }
  lVar20 = (longlong)iVar28;
  if (lVar20 < param_4) {
    lVar32 = param_4 - lVar20;
    pfVar31 = (float *)(param_3 + lVar20 * 4);
    do {
      uVar6 = *(uint *)(((longlong)param_6 - param_3) + (longlong)pfVar31);
      lVar20 = (longlong)(int)uVar6;
      iVar35 = 0;
      iVar27 = 0;
      lVar29 = (longlong)iVar28;
      if (((0 < (int)uVar6) && (7 < uVar6)) && (1 < __isa_available)) {
        iVar39 = 0;
        iVar40 = 0;
        iVar41 = 0;
        iVar42 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        iVar38 = 0;
        uVar23 = uVar6 & 0x80000007;
        if ((int)uVar23 < 0) {
          uVar23 = (uVar23 - 1 | 0xfffffff8) + 1;
        }
        lVar24 = 0;
        puVar21 = (undefined8 *)(param_7 + lVar29 * 2);
        do {
          auVar34 = pmovzxwd(in_XMM1,*puVar21);
          auVar34 = pmulld(auVar34,auVar34);
          iVar39 = iVar39 + auVar34._0_4_;
          iVar40 = iVar40 + auVar34._4_4_;
          iVar41 = iVar41 + auVar34._8_4_;
          iVar42 = iVar42 + auVar34._12_4_;
          iVar27 = iVar27 + 8;
          lVar24 = lVar24 + 8;
          auVar34 = pmovzxwd(auVar34,puVar21[1]);
          puVar21 = puVar21 + 2;
          in_XMM1 = pmulld(auVar34,auVar34);
          iVar35 = iVar35 + in_XMM1._0_4_;
          iVar36 = iVar36 + in_XMM1._4_4_;
          iVar37 = iVar37 + in_XMM1._8_4_;
          iVar38 = iVar38 + in_XMM1._12_4_;
        } while (lVar24 < (int)(uVar6 - uVar23));
        iVar35 = iVar35 + iVar39 + iVar37 + iVar41 + iVar36 + iVar40 + iVar38 + iVar42;
      }
      lVar24 = (longlong)iVar27;
      if (lVar24 < lVar20) {
        puVar25 = (ushort *)(param_7 + (lVar24 + lVar29) * 2);
        lVar24 = lVar20 - lVar24;
        do {
          uVar5 = *puVar25;
          puVar25 = puVar25 + 1;
          iVar35 = iVar35 + (uint)uVar5 * (uint)uVar5;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      fVar33 = (float)iVar35;
      in_XMM1 = ZEXT416((uint)fVar33);
      if (fVar33 < 0.0) {
        fVar33 = sqrtf(fVar33);
      }
      else {
        fVar33 = SQRT(fVar33);
      }
      iVar27 = 0;
      fVar33 = *pfVar31 / fVar33;
      if ((0 < (int)uVar6) && (0xf < uVar6)) {
        lVar24 = (longlong)(int)(iVar28 + -1 + uVar6);
        if (((ulonglong)(param_7 + lVar24 * 2) < (ulonglong)(param_2 + lVar29 * 4)) ||
           ((ulonglong)(param_2 + lVar24 * 4) < (ulonglong)(param_7 + lVar29 * 2))) {
          uVar23 = uVar6 & 0x8000000f;
          if ((int)uVar23 < 0) {
            uVar23 = (uVar23 - 1 | 0xfffffff0) + 1;
          }
          lVar24 = 0;
          pfVar22 = (float *)(param_2 + 0x20 + lVar29 * 4);
          puVar26 = (ulonglong *)(param_7 + 0x10 + lVar29 * 2);
          do {
            uVar3 = puVar26[-2];
            auVar7._8_4_ = 0;
            auVar7._0_8_ = uVar3;
            auVar7._12_2_ = (short)(uVar3 >> 0x30);
            auVar11._8_2_ = (short)(uVar3 >> 0x20);
            auVar11._0_8_ = uVar3;
            auVar11._10_4_ = auVar7._10_4_;
            auVar15._6_8_ = 0;
            auVar15._0_6_ = auVar11._8_6_;
            iVar27 = iVar27 + 0x10;
            lVar24 = lVar24 + 0x10;
            uVar4 = puVar26[-1];
            pfVar22[-8] = (float)(ushort)uVar3 * fVar33;
            pfVar22[-7] = (float)(int)CONCAT82(SUB148(auVar15 << 0x40,6),(short)(uVar3 >> 0x10)) *
                          fVar33;
            pfVar22[-6] = (float)auVar11._8_4_ * fVar33;
            pfVar22[-5] = (float)(auVar7._10_4_ >> 0x10) * fVar33;
            auVar8._8_4_ = 0;
            auVar8._0_8_ = uVar4;
            auVar8._12_2_ = (short)(uVar4 >> 0x30);
            auVar12._8_2_ = (short)(uVar4 >> 0x20);
            auVar12._0_8_ = uVar4;
            auVar12._10_4_ = auVar8._10_4_;
            auVar16._6_8_ = 0;
            auVar16._0_6_ = auVar12._8_6_;
            uVar3 = *puVar26;
            pfVar22[-4] = (float)(ushort)uVar4 * fVar33;
            pfVar22[-3] = (float)(int)CONCAT82(SUB148(auVar16 << 0x40,6),(short)(uVar4 >> 0x10)) *
                          fVar33;
            pfVar22[-2] = (float)auVar12._8_4_ * fVar33;
            pfVar22[-1] = (float)(auVar8._10_4_ >> 0x10) * fVar33;
            auVar9._8_4_ = 0;
            auVar9._0_8_ = uVar3;
            auVar9._12_2_ = (short)(uVar3 >> 0x30);
            auVar13._8_2_ = (short)(uVar3 >> 0x20);
            auVar13._0_8_ = uVar3;
            auVar13._10_4_ = auVar9._10_4_;
            auVar17._6_8_ = 0;
            auVar17._0_6_ = auVar13._8_6_;
            uVar4 = puVar26[1];
            *pfVar22 = (float)(ushort)uVar3 * fVar33;
            pfVar22[1] = (float)(int)CONCAT82(SUB148(auVar17 << 0x40,6),(short)(uVar3 >> 0x10)) *
                         fVar33;
            pfVar22[2] = (float)auVar13._8_4_ * fVar33;
            pfVar22[3] = (float)(auVar9._10_4_ >> 0x10) * fVar33;
            auVar10._8_4_ = 0;
            auVar10._0_8_ = uVar4;
            auVar10._12_2_ = (short)(uVar4 >> 0x30);
            auVar14._8_2_ = (short)(uVar4 >> 0x20);
            auVar14._0_8_ = uVar4;
            auVar14._10_4_ = auVar10._10_4_;
            auVar18._6_8_ = 0;
            auVar18._0_6_ = auVar14._8_6_;
            Var19 = CONCAT82(SUB148(auVar18 << 0x40,6),(short)(uVar4 >> 0x10));
            in_XMM1._0_4_ = CONCAT22(0,(ushort)uVar4);
            in_XMM1._4_10_ = Var19;
            in_XMM1._14_2_ = 0;
            pfVar22[4] = (float)in_XMM1._0_4_ * fVar33;
            pfVar22[5] = (float)(int)Var19 * fVar33;
            pfVar22[6] = (float)auVar14._8_4_ * fVar33;
            pfVar22[7] = (float)(auVar10._10_4_ >> 0x10) * fVar33;
            pfVar22 = pfVar22 + 0x10;
            puVar26 = puVar26 + 4;
          } while (lVar24 < (int)(uVar6 - uVar23));
        }
      }
      lVar24 = (longlong)iVar27;
      if (lVar24 < lVar20) {
        if (3 < lVar20 - lVar24) {
          lVar2 = lVar24 + lVar29;
          lVar30 = ((lVar20 - lVar24) - 4U >> 2) + 1;
          lVar24 = lVar24 + lVar30 * 4;
          pfVar22 = (float *)(param_2 + 8 + lVar2 * 4);
          puVar25 = (ushort *)(param_7 + 4 + lVar2 * 2);
          do {
            pfVar22[-2] = (float)puVar25[-2] * fVar33;
            pfVar22[-1] = (float)puVar25[-1] * fVar33;
            *pfVar22 = (float)*puVar25 * fVar33;
            in_XMM1 = ZEXT416((uint)((float)puVar25[1] * fVar33));
            pfVar22[1] = (float)puVar25[1] * fVar33;
            lVar30 = lVar30 + -1;
            pfVar22 = pfVar22 + 4;
            puVar25 = puVar25 + 4;
          } while (lVar30 != 0);
          if (lVar20 <= lVar24) goto LAB_14f8c54b3;
        }
        lVar20 = lVar20 - lVar24;
        puVar25 = (ushort *)(param_7 + (lVar29 + lVar24) * 2);
        pfVar22 = (float *)(param_2 + (lVar29 + lVar24) * 4);
        do {
          uVar5 = *puVar25;
          puVar25 = puVar25 + 1;
          *pfVar22 = (float)uVar5 * fVar33;
          lVar20 = lVar20 + -1;
          pfVar22 = pfVar22 + 1;
        } while (lVar20 != 0);
      }
LAB_14f8c54b3:
      iVar28 = iVar28 + uVar6;
      pfVar31 = pfVar31 + 1;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
  }
  return;
}

// FUN_14f8c5500 @ 14f8c5500

void FUN_14f8c5500(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,int param_7,float param_8,longlong param_9)

{
  short *psVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  short *psVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar10 = (longlong)param_3;
  param_5 = param_5 + (longlong)param_7 * 2;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    if (*(char *)(param_1 + 0xd4) == '\0') {
      UERAradaudio_sse2_compute_windowed_sum_multiple8_
                (param_2,param_3,param_4,param_5,param_8,param_9);
      return;
    }
    UERAradaudio_avx2_compute_windowed_sum_multiple16_();
    return;
  }
  lVar14 = 0;
  lVar11 = lVar10 >> 1;
  lVar9 = lVar14;
  if (lVar11 < 4) {
    if (0 < lVar11) {
      lVar13 = param_9 - param_2;
      goto LAB_14f8c56ba;
    }
LAB_14f8c570a:
    if (lVar11 < 4) goto LAB_14f8c5830;
  }
  else {
    pfVar7 = (float *)(param_4 + -8 + lVar11 * 4);
    lVar13 = param_9 - param_2;
    psVar12 = (short *)(param_5 + 4);
    pfVar8 = (float *)(param_2 + 4);
    do {
      lVar6 = lVar10 - lVar9;
      lVar9 = lVar9 + 4;
      pfVar8[-1] = (float)(int)psVar12[-2] * param_8 * *(float *)(param_9 + -4 + lVar6 * 4) -
                   *(float *)((longlong)pfVar8 + lVar13 + -4) * pfVar7[1];
      *pfVar8 = (float)(int)psVar12[-1] * param_8 * *(float *)(param_9 + -8 + lVar6 * 4) -
                *(float *)((longlong)pfVar8 + lVar13) * *pfVar7;
      pfVar8[1] = (float)(int)*psVar12 * param_8 * *(float *)(param_9 + -0xc + lVar6 * 4) -
                  pfVar7[-1] * *(float *)((longlong)pfVar8 + lVar13 + 4);
      psVar1 = psVar12 + 1;
      psVar12 = psVar12 + 4;
      pfVar2 = pfVar7 + -2;
      pfVar7 = pfVar7 + -4;
      pfVar8[2] = (float)(int)*psVar1 * param_8 * *(float *)(param_9 + -0x10 + lVar6 * 4) -
                  *pfVar2 * *(float *)((longlong)pfVar8 + lVar13 + 8);
      pfVar8 = pfVar8 + 4;
    } while (lVar9 < lVar11 + -3);
    if (lVar9 < lVar11) {
LAB_14f8c56ba:
      pfVar8 = (float *)(param_2 + lVar9 * 4);
      pfVar7 = (float *)(param_4 + ((lVar11 - lVar9) + -1) * 4);
      do {
        lVar6 = lVar9 * 2;
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + -1;
        lVar5 = lVar10 - lVar9;
        lVar9 = lVar9 + 1;
        *pfVar8 = (float)(int)*(short *)(param_5 + lVar6) * param_8 *
                  *(float *)(param_9 + -4 + lVar5 * 4) -
                  *(float *)(lVar13 + (longlong)pfVar8) * fVar3;
        pfVar8 = pfVar8 + 1;
      } while (lVar9 < lVar11);
      goto LAB_14f8c570a;
    }
  }
  pfVar8 = (float *)(param_9 + -8 + lVar11 * 4);
  psVar12 = (short *)(param_5 + -4 + lVar11 * 2);
  pfVar7 = (float *)(param_2 + 4 + lVar11 * 4);
  lVar13 = param_9 - param_2;
  lVar10 = (param_4 + lVar11 * -4) - param_2;
  lVar9 = (lVar11 - 4U >> 2) + 1;
  lVar14 = lVar9 * 4;
  do {
    pfVar7[-1] = (float)(int)psVar12[1] * param_8 * pfVar8[1] +
                 *(float *)((longlong)pfVar7 + lVar10 + -4) *
                 *(float *)((longlong)pfVar7 + lVar13 + -4);
    *pfVar7 = (float)(int)*psVar12 * param_8 * *pfVar8 +
              *(float *)((longlong)pfVar7 + lVar10) * *(float *)((longlong)pfVar7 + lVar13);
    pfVar7[1] = (float)(int)psVar12[-1] * param_8 * pfVar8[-1] +
                *(float *)((longlong)pfVar7 + lVar10 + 4) *
                *(float *)((longlong)pfVar7 + lVar13 + 4);
    psVar1 = psVar12 + -2;
    psVar12 = psVar12 + -4;
    pfVar2 = pfVar8 + -2;
    pfVar8 = pfVar8 + -4;
    pfVar7[2] = (float)(int)*psVar1 * param_8 * *pfVar2 +
                *(float *)(((2 - lVar11) * 4 - param_2) + param_4 + (longlong)pfVar7) *
                *(float *)((longlong)pfVar7 + lVar13 + 8);
    pfVar7 = pfVar7 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
LAB_14f8c5830:
  if (lVar14 < lVar11) {
    lVar10 = lVar11 - lVar14;
    pfVar8 = (float *)(param_2 + (lVar14 + lVar11) * 4);
    pfVar7 = (float *)(param_9 + -4 + lVar10 * 4);
    psVar12 = (short *)(param_5 + -2 + lVar10 * 2);
    do {
      sVar4 = *psVar12;
      psVar12 = psVar12 + -1;
      fVar3 = *pfVar7;
      pfVar7 = pfVar7 + -1;
      *pfVar8 = *(float *)(((param_4 + lVar11 * -4) - param_2) + (longlong)pfVar8) *
                *(float *)((longlong)pfVar8 + (param_9 - param_2)) +
                (float)(int)sVar4 * param_8 * fVar3;
      pfVar8 = pfVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

// FUN_14f8c59c0 @ 14f8c59c0

ulonglong FUN_14f8c59c0(longlong param_1,longlong param_2,int param_3,byte param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  
  lVar1 = (longlong)param_3;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar2 = 0;
    uVar3 = 0;
    uVar6 = uVar3;
    uVar4 = uVar3;
    if (1 < lVar1) {
      uVar5 = uVar2;
      uVar7 = uVar2;
      do {
        uVar4 = (int)uVar5 + (uint)(*(byte *)(param_2 + uVar2) < param_4);
        uVar5 = (ulonglong)uVar4;
        uVar6 = (int)uVar7 + (uint)(*(byte *)(param_2 + 1 + uVar2) < param_4);
        uVar7 = (ulonglong)uVar6;
        uVar2 = uVar2 + 2;
      } while ((longlong)uVar2 < lVar1 + -1);
    }
    if ((longlong)uVar2 < lVar1) {
      uVar3 = (uint)(*(byte *)(uVar2 + param_2) < param_4);
    }
    return (ulonglong)(uVar6 + uVar4 + uVar3);
  }
  uVar2 = UERAradaudio_sse2_count_bytes_below_value_sentinel16_(param_2,param_3,param_4);
  return uVar2;
}

// FUN_14f8c5a40 @ 14f8c5a40

ulonglong FUN_14f8c5a40(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0xd2) == '\0') {
    uVar1 = 0;
    uVar2 = param_3 + 7 & 0xfffffff8;
    if (param_3 != uVar2) {
      *(undefined8 *)((int)param_3 + param_2) = 0;
    }
    uVar3 = uVar1;
    if (0 < (int)uVar2) {
      do {
        uVar4 = uVar3 + 8;
        uVar3 = *(ulonglong *)(param_2 + uVar3) -
                (*(ulonglong *)(param_2 + uVar3) >> 1 & 0x5555555555555555);
        uVar1 = (ulonglong)
                ((int)uVar1 +
                (uint)(byte)(((uVar3 >> 6 & 0x303030303030303) + (uVar3 >> 4 & 0x303030303030303) +
                              (uVar3 >> 2 & 0x303030303030303) + (uVar3 & 0x303030303030303)) *
                             0x101010101010101 >> 0x38));
        uVar3 = uVar4;
      } while ((longlong)uVar4 < (longlong)(int)uVar2);
    }
    return uVar1;
  }
  uVar1 = UERAradaudio_intel_popcnt_count_set_bits_read_multiple8_sentinel8_(param_2,param_3);
  return uVar1;
}

// FUN_14f8c5b60 @ 14f8c5b60

ulonglong FUN_14f8c5b60(void)

{
  undefined8 local_res8;
  
  UERArrCPUx86_detect_();
  local_res8 = (ulonglong)
               (CONCAT14((char)(UERAg_rrCPUx86_feature_flags_ >> 8),
                         CONCAT13((char)(UERAg_rrCPUx86_feature_flags_ >> 0xd),
                                  CONCAT12((char)(UERAg_rrCPUx86_feature_flags_ >> 3),
                                           CONCAT11((char)(UERAg_rrCPUx86_feature_flags_ >> 2),
                                                    (char)(UERAg_rrCPUx86_feature_flags_ >> 1))))) &
               0xff01010101) & 0xffffff01ffffffff;
  return local_res8;
}

// FUN_14f8c5bc0 @ 14f8c5bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14f8c5bc0(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
                  ulonglong *param_5)

{
  byte *pbVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong *puVar16;
  float *pfVar17;
  uint *puVar18;
  ulonglong uVar19;
  ushort uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined *puVar25;
  byte *pbVar26;
  short *psVar27;
  ulonglong *puVar28;
  undefined1 *puVar29;
  longlong lVar30;
  undefined1 *puVar31;
  uint *puVar32;
  uint uVar33;
  longlong *plVar34;
  size_t sVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  size_t sVar39;
  int *piVar40;
  byte **ppbVar41;
  int iVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  byte *pbVar46;
  int iVar47;
  ulonglong uVar48;
  int iVar49;
  ulonglong uVar50;
  char *pcVar51;
  size_t _Size;
  undefined4 uVar52;
  undefined1 auStack_6138 [32];
  ulonglong *local_6118;
  uint *local_6110;
  undefined4 local_6108;
  undefined4 local_6100;
  undefined *local_60f8;
  undefined4 local_60f0;
  undefined4 local_60e8;
  int local_60e0;
  uint local_60c0 [2];
  ulonglong local_60b8;
  uint local_60b0;
  uint local_60ac;
  byte *local_60a8;
  longlong local_60a0;
  uint local_6098;
  int local_6094;
  longlong local_6090;
  int local_6088;
  uint local_6084;
  uint local_6080;
  byte *local_6070;
  byte *local_6068;
  int local_6060;
  int iStack_605c;
  uint local_6058;
  byte *local_6050;
  byte *local_6048;
  uint local_6040;
  int iStack_603c;
  uint local_6038;
  byte *local_6030;
  byte *local_6028;
  uint local_6020;
  uint uStack_601c;
  uint local_6018;
  longlong local_6010;
  int local_6008;
  longlong *local_6000;
  longlong local_5ff8;
  uint local_5ff0;
  longlong local_5fe8;
  uint local_5fe0;
  int local_5fdc;
  ulonglong local_5fd8;
  int local_5fd0 [2];
  uint local_5fc8;
  undefined4 local_5fc4;
  int local_5fc0;
  uint local_5fbc;
  int local_5fb8;
  int local_5fb4;
  int local_5fb0;
  int local_5fac;
  int local_5fa8;
  int local_5fa4;
  uint local_5fa0;
  uint local_5f9c;
  uint local_5f98;
  ulonglong *local_5f90;
  byte *local_5f80;
  byte *local_5f78;
  longlong local_5f70;
  byte *local_5f68;
  int local_5f60;
  uint local_5f58 [6];
  undefined1 local_5f40 [256];
  undefined1 local_5e40 [3840];
  undefined1 local_4f40 [12];
  uint local_4f34 [24];
  byte local_4ed4 [120];
  short local_4e5c [79];
  undefined1 local_4dbe [1086];
  float local_4980 [1024];
  undefined1 local_3980 [12];
  int local_3974 [365];
  float local_33c0 [1024];
  char local_23c0 [32];
  char local_23a0 [32];
  byte local_2380 [48];
  byte local_2350 [80];
  short local_2300 [64];
  byte local_2280 [144];
  ulonglong local_21f0 [34];
  undefined8 local_20e0;
  undefined8 local_18c0;
  ulonglong local_10a0 [258];
  byte local_890 [2064];
  ulonglong local_80 [7];
  undefined8 uStack_48;
  
  uStack_48 = 0x14f8c5bd7;
  local_80[0] = __security_cookie.value ^ (ulonglong)auStack_6138;
  uVar50 = 0;
  local_5f90 = param_5;
  *param_5 = 0;
  local_5fd8 = local_5fd8 & 0xffffffff00000000;
  local_6000 = param_2;
  local_5fe8 = param_1;
  iVar13 = FUN_14f8c9f50(param_3,param_1 + 0xc4,local_5fd0);
  if (iVar13 == -4) {
    if (param_4 < 8) {
      return 0xfffffffe;
    }
    if (*param_3 != DAT_15352bb40) {
      return 0xfffffffd;
    }
    if (param_4 < 0x80) {
      return 0xfffffffe;
    }
    local_5fd8 = FUN_14f8ca3d0(param_3,param_4,local_10a0);
    if (local_5fd8 == 0) {
      return 0xfffffffd;
    }
    if (param_4 < local_5fd8) {
      return 0xfffffffb;
    }
    param_3 = (longlong *)((longlong)param_3 + local_5fd8);
    *(undefined4 *)(param_1 + 0xbc) = 1;
    param_4 = param_4 - local_5fd8;
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar13 = FUN_14f8c9f50(param_3,param_1 + 0xc4,local_5fd0,param_4);
    if (iVar13 == -4) {
      return 0xfffffffd;
    }
  }
  if (iVar13 == -2) {
    return 0xfffffffe;
  }
  if (iVar13 < 0) {
    return 0xfffffffd;
  }
  local_5fe0 = local_5fa4 + iVar13;
  if (0x3fff < local_5fe0) {
    return 0xfffffffd;
  }
  if (local_5fe0 < local_5f9c + (local_5fac != 0) + iVar13) {
    return 0xfffffffd;
  }
  local_5ff0 = local_5f98;
  local_5fdc = local_5fd0[0];
  if ((local_5fd0[0] != 0) && (0x80 < local_5f98)) {
    return 0xfffffffd;
  }
  local_60ac = local_5fc8;
  uVar21 = 0x802;
  if (local_5fc8 != 0) {
    uVar21 = 0x102;
  }
  local_6098 = local_5fa0;
  if (uVar21 < local_5fa0) {
    return 0xfffffffd;
  }
  if (param_4 < local_5fe0) {
    return 0xfffffffe;
  }
  if (local_5fd0[0] != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  *(uint *)(param_1 + 4) = local_5fc8 & 0xff;
  *(undefined4 *)(param_1 + 0xc) = local_5fc4;
  lVar44 = *(longlong *)(param_1 + 0xd8 + (longlong)(int)local_5fc8 * 8);
  local_6068 = (byte *)((ulonglong)local_5fe0 + (longlong)param_3);
  local_6070 = (byte *)((longlong)iVar13 + (longlong)param_3) + (local_5fac != 0);
  local_60b8._0_4_ = 0;
  local_6030 = local_6070 + local_5f9c;
  if (local_6068 < local_6070) {
    iStack_605c = 0;
    local_6058 = 0;
  }
  else {
    uVar45 = (longlong)local_6068 - (longlong)local_6070;
    uVar37 = uVar45;
    if (0x3fff < uVar45) {
      uVar37 = uVar50;
    }
    local_60b8._0_4_ = (uint)(0x3fff < uVar45);
    local_6058 = (int)uVar37 * 8;
    if (local_6058 < 0x20) {
      iStack_605c = 0;
    }
    else {
      iStack_605c = local_6058 - 0x20;
    }
  }
  local_6060 = 0;
  if (local_6070 < local_6068) {
    iStack_603c = 0;
    local_6038 = 0;
  }
  else {
    uVar37 = (longlong)local_6070 - (longlong)local_6068;
    if (0x3fff < (ulonglong)((longlong)local_6070 - (longlong)local_6068)) {
      local_60b8._0_4_ = 1;
      uVar37 = uVar50;
    }
    local_6038 = (int)uVar37 * 8;
    if (local_6038 < 0x20) {
      iStack_603c = 0;
    }
    else {
      iStack_603c = local_6038 - 0x20;
    }
  }
  local_6040 = 0;
  if (local_6068 < local_6030) {
    uStack_601c = 0;
    local_6018 = 0;
  }
  else {
    uVar37 = (longlong)local_6068 - (longlong)local_6030;
    if (0x3fff < (ulonglong)((longlong)local_6068 - (longlong)local_6030)) {
      local_60b8._0_4_ = 1;
      uVar37 = uVar50;
    }
    local_6018 = (int)uVar37 * 8;
    if (local_6018 < 0x20) {
      uStack_601c = 0;
    }
    else {
      uStack_601c = local_6018 - 0x20;
    }
  }
  local_6020 = 0;
  local_6080 = 0;
  if (local_5fc0 == 0) {
    if ((local_5fac != 0) && (0 < *(int *)(lVar44 + 4))) {
      uVar21 = 1;
      uVar37 = uVar50;
      uVar45 = uVar50;
      do {
        if ((*(byte *)((longlong)iVar13 + (longlong)param_3) & uVar21) != 0) {
          uVar45 = (ulonglong)((uint)uVar45 | 7 << ((byte)uVar37 & 0x1f));
        }
        uVar33 = (int)uVar37 + 3;
        uVar37 = (ulonglong)uVar33;
        uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      } while ((int)uVar33 < *(int *)(lVar44 + 4));
      local_6080 = (uint)uVar45;
    }
  }
  else {
    local_6080 = 0xffffffff;
  }
  lVar30 = (longlong)(int)local_5fbc;
  local_60b0 = local_5fbc;
  local_60a0 = lVar44;
  local_6050 = local_6068;
  local_6048 = local_6070;
  local_6028 = local_6068;
  if ((local_5fb0 == 0) || (local_5fbc != 2)) {
    puVar25 = &DAT_154dfeb80;
    iVar13 = local_5fbc * *(int *)(lVar44 + 4);
    pcVar51 = local_23c0;
  }
  else {
    local_6118 = &local_60b8;
    FUN_14f8c8920(&local_6070,&DAT_154dfeb80,local_23c0,*(undefined4 *)(lVar44 + 4));
    iVar13 = *(int *)(lVar44 + 4);
    puVar25 = &DAT_154dffb80;
    pcVar51 = local_23a0;
  }
  local_6118 = &local_60b8;
  FUN_14f8c8920(&local_6070,puVar25,pcVar51,iVar13);
  lVar36 = local_60a0;
  local_60c0[0] = (uint)local_60b8;
  if ((uint)local_60b8 != 0) {
    return 0xfffffffd;
  }
  uVar21 = local_5fbc;
  if (local_5fb0 != 0) {
    uVar21 = 1;
  }
  lVar43 = (longlong)(int)uVar21;
  if (0 < (int)uVar21) {
    iVar13 = *(int *)(lVar44 + 4);
    puVar32 = local_4f34;
    uVar37 = uVar50;
    do {
      puVar18 = puVar32;
      uVar45 = uVar50;
      uVar48 = uVar50;
      if (0 < iVar13) {
        do {
          uVar33 = (int)uVar48 + (int)local_23c0[uVar37];
          uVar37 = uVar37 + 1;
          *puVar18 = uVar33;
          uVar21 = (int)uVar45 + 1;
          iVar13 = *(int *)(lVar44 + 4);
          puVar18 = puVar18 + 1;
          uVar45 = (ulonglong)uVar21;
          uVar48 = (ulonglong)uVar33;
        } while ((int)uVar21 < iVar13);
      }
      puVar32 = puVar32 + 0x570;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
  }
  if (((local_5fb0 != 0) && (local_5fbc == 2)) && (0 < *(int *)(lVar44 + 4))) {
    pcVar51 = local_23a0;
    piVar40 = local_3974;
    uVar37 = uVar50;
    do {
      cVar3 = *pcVar51;
      pcVar51 = pcVar51 + 1;
      uVar21 = (int)uVar37 + 1;
      uVar37 = (ulonglong)uVar21;
      *piVar40 = (int)cVar3 + piVar40[-0x570];
      piVar40 = piVar40 + 1;
    } while ((int)uVar21 < *(int *)(lVar44 + 4));
  }
  local_6010 = lVar30;
  if (0 < (int)local_5fbc) {
    pbVar46 = local_4ed4;
    iVar13 = *(int *)(&DAT_154e13c00 + (longlong)*(int *)(param_1 + 0x10) * 4);
    iVar47 = iVar13 * 0xc;
    iVar49 = *(int *)(&DAT_154dfb4a4 +
                     ((longlong)*(int *)(param_1 + 0x10) + (longlong)(int)local_60ac * 4) * 0x49c);
    do {
      iVar42 = iVar47;
      if (0x1000 < iVar47) {
        iVar42 = 0x1000;
      }
      if (0 < (longlong)iVar49) {
        pbVar26 = pbVar46 + -0x60;
        uVar37 = uVar50;
        do {
          iVar22 = 0;
          if (*(int *)pbVar26 != -0x11) {
            lVar44 = uVar37 + (longlong)(int)local_60ac * 0x18;
            iVar22 = ((int)*(char *)(param_1 + 0x41 + lVar44 * 2) * *(int *)pbVar26 +
                     *(char *)(param_1 + 0x40 + lVar44 * 2) * 0x20) * iVar13 >> 8;
          }
          iVar14 = 0;
          if (-1 < iVar22) {
            iVar14 = iVar22;
          }
          if (iVar42 < iVar14) {
            iVar14 = iVar42;
          }
          pbVar26 = pbVar26 + 4;
          pbVar46[uVar37] = (byte)((uint)iVar14 >> 8);
          uVar37 = uVar37 + 1;
        } while ((longlong)uVar37 < (longlong)iVar49);
      }
      pbVar46 = pbVar46 + 0x15c0;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    pbVar46 = local_4ed4;
    iVar13 = *(int *)(local_60a0 + 4);
    local_6090 = local_6010;
    uVar21 = local_6020;
    do {
      iVar49 = 0;
      pbVar26 = pbVar46;
      if (0 < iVar13) {
        do {
          bVar12 = *pbVar26;
          if (uVar21 < uStack_601c) {
            uVar20 = (ushort)(*(uint *)(local_6030 + (uVar21 >> 3)) >> ((byte)uVar21 & 7)) &
                     (short)(1 << (bVar12 & 0x1f)) - 1U;
            local_6020 = uVar21 + bVar12;
          }
          else {
            uVar20 = FUN_14f8c8ac0(&local_6030,bVar12,&local_60b8);
          }
          iVar49 = iVar49 + 1;
          local_2300[uVar50] = uVar20 << (0x10 - bVar12 & 0x1f);
          uVar50 = uVar50 + 1;
          iVar13 = *(int *)(lVar36 + 4);
          pbVar26 = pbVar26 + 1;
          uVar21 = local_6020;
        } while (iVar49 < iVar13);
      }
      pbVar46 = pbVar46 + 0x15c0;
      local_6090 = local_6090 + -1;
    } while (local_6090 != 0);
    if ((uint)local_60b8 != 0) {
      return 0xfffffffd;
    }
    local_6090 = 0;
    param_1 = local_5fe8;
    lVar44 = local_60a0;
  }
  pbVar46 = local_6050;
  uVar50 = 0;
  iVar13 = 0;
  uVar15 = 0;
  local_6094 = local_5fb4;
  local_6088 = local_5fb8;
  uVar21 = uVar15;
  uVar33 = uVar15;
  if (0 < (longlong)*(int *)(lVar44 + 4)) {
    piVar40 = (int *)(local_60a0 + 0x7c);
    uVar37 = uVar50;
    uVar45 = uVar50;
    uVar48 = uVar50;
    uVar38 = uVar50;
    do {
      iVar13 = *piVar40;
      if ((1 < iVar13) && (uVar19 = uVar50, 0 < local_6010)) {
        do {
          if (local_4f34[uVar19 * 0x570 + uVar38] != 0xffffffef) {
            if ((uVar19 == 1) && (local_5fb4 != 0)) {
              uVar45 = (ulonglong)(uint)((int)uVar45 + iVar13);
            }
            else {
              iVar49 = iVar13;
              if (local_5fb8 == 0) {
                iVar49 = iVar13 + -1;
                uVar37 = (ulonglong)((int)uVar37 + 1);
              }
              uVar48 = (ulonglong)(uint)((int)uVar48 + iVar49);
            }
          }
          uVar19 = uVar19 + 1;
        } while ((longlong)uVar19 < local_6010);
      }
      uVar33 = (uint)uVar45;
      uVar21 = (uint)uVar37;
      iVar13 = (int)uVar48;
      uVar38 = uVar38 + 1;
      piVar40 = piVar40 + 1;
      param_1 = local_5fe8;
    } while ((longlong)uVar38 < (longlong)*(int *)(lVar44 + 4));
  }
  local_60a8 = (byte *)CONCAT44(local_60a8._4_4_,(int)local_6050);
  if (local_60ac == 0) {
    lVar44 = 2;
    local_5f80 = local_2280;
    puVar32 = local_5f58;
    plVar34 = &local_5f70;
    local_5f78 = local_2280 + iVar13;
    ppbVar41 = &local_6070;
    do {
      uVar23 = -*(uint *)(ppbVar41 + 2) & 7;
      *plVar34 = (longlong)(*ppbVar41 + (*(uint *)(ppbVar41 + 2) >> 3));
      puVar32[3] = uVar23;
      if (uVar23 == 0) {
        *puVar32 = 0;
      }
      else {
        *puVar32 = (uint)(*(byte *)*plVar34 >> (8U - (char)uVar23 & 0x1f));
        *plVar34 = *plVar34 + 1;
      }
      ppbVar41 = ppbVar41 + 8;
      plVar34 = plVar34 + 2;
      puVar32 = puVar32 + 2;
      lVar44 = lVar44 + -1;
    } while (lVar44 != 0);
    local_5f68 = local_6050 + (int)-(local_6040 >> 3);
    local_5f58[4] = -local_6040 & 7;
    if (local_5f58[4] == 0) {
      local_5f58[1] = 0;
    }
    else {
      pbVar26 = local_5f68 + -1;
      local_5f68 = local_5f68 + -1;
      local_5f58[1] = (uint)(*pbVar26 >> (8U - (char)local_5f58[4] & 0x1f));
    }
    local_60c0[0] = (uint)local_60b8;
    iVar13 = FUN_14f8c9630(&local_5f80,&DAT_154e00b80);
    if (iVar13 == 0) {
      local_60c0[0] = 1;
    }
    local_6060 = ((int)local_5f70 - (int)local_6070) * 8 - local_5f58[3];
    local_6020 = (local_5f60 - (int)local_6030) * 8 - local_5f58[5];
    local_6040 = ((int)local_60a8 - (int)local_5f68) * 8 - local_5f58[4];
    iVar13 = (int)local_60a8;
    if (local_6088 == 0) {
      lVar44 = 2;
      local_5f80 = local_2380;
      plVar34 = &local_5f70;
      puVar32 = local_5f58;
      local_5f78 = local_2380 + (int)uVar21;
      ppbVar41 = &local_6070;
      do {
        uVar21 = -*(uint *)(ppbVar41 + 2) & 7;
        *plVar34 = (longlong)(*ppbVar41 + (*(uint *)(ppbVar41 + 2) >> 3));
        puVar32[3] = uVar21;
        if (uVar21 == 0) {
          *puVar32 = 0;
        }
        else {
          *puVar32 = (uint)(*(byte *)*plVar34 >> (8U - (char)uVar21 & 0x1f));
          *plVar34 = *plVar34 + 1;
        }
        ppbVar41 = ppbVar41 + 8;
        plVar34 = plVar34 + 2;
        puVar32 = puVar32 + 2;
        lVar44 = lVar44 + -1;
      } while (lVar44 != 0);
      local_5f68 = pbVar46 + (int)-(local_6040 >> 3);
      local_5f58[4] = -local_6040 & 7;
      if (local_5f58[4] == 0) {
        local_5f58[1] = 0;
      }
      else {
        pbVar26 = local_5f68 + -1;
        local_5f68 = local_5f68 + -1;
        local_5f58[1] = (uint)(*pbVar26 >> (8U - (char)local_5f58[4] & 0x1f));
      }
      local_60b8._0_4_ = local_60c0[0];
      iVar13 = FUN_14f8c9630(&local_5f80,&DAT_154e02b80);
      if (iVar13 == 0) {
        local_60c0[0] = 1;
      }
      local_6060 = ((int)local_5f70 - (int)local_6070) * 8 - local_5f58[3];
      local_6020 = (local_5f60 - (int)local_6030) * 8 - local_5f58[5];
      local_6040 = ((int)local_60a8 - (int)local_5f68) * 8 - local_5f58[4];
      iVar13 = (int)local_60a8;
    }
    local_60b8._0_4_ = local_60c0[0];
    if (local_6094 != 0) {
      lVar44 = 2;
      local_5f80 = local_2350;
      plVar34 = &local_5f70;
      puVar32 = local_5f58;
      local_5f78 = local_2350 + (int)uVar33;
      ppbVar41 = &local_6070;
      do {
        uVar21 = -*(uint *)(ppbVar41 + 2) & 7;
        *plVar34 = (longlong)(*ppbVar41 + (*(uint *)(ppbVar41 + 2) >> 3));
        puVar32[3] = uVar21;
        if (uVar21 == 0) {
          *puVar32 = 0;
        }
        else {
          *puVar32 = (uint)(*(byte *)*plVar34 >> (8U - (char)uVar21 & 0x1f));
          *plVar34 = *plVar34 + 1;
        }
        ppbVar41 = ppbVar41 + 8;
        plVar34 = plVar34 + 2;
        puVar32 = puVar32 + 2;
        lVar44 = lVar44 + -1;
      } while (lVar44 != 0);
      local_5f68 = pbVar46 + (int)-(local_6040 >> 3);
      local_5f58[4] = -local_6040 & 7;
      if (local_5f58[4] == 0) {
        local_5f58[1] = 0;
      }
      else {
        pbVar26 = local_5f68 + -1;
        local_5f68 = local_5f68 + -1;
        local_5f58[1] = (uint)(*pbVar26 >> (8U - (char)local_5f58[4] & 0x1f));
      }
      iVar49 = FUN_14f8c9630(&local_5f80,&DAT_154e01b80);
      if (iVar49 == 0) {
        local_60c0[0] = 1;
      }
      local_6060 = ((int)local_5f70 - (int)local_6070) * 8 - local_5f58[3];
      local_6020 = (local_5f60 - (int)local_6030) * 8 - local_5f58[5];
      local_6040 = (iVar13 - (int)local_5f68) * 8 - local_5f58[4];
      local_60b8._0_4_ = local_60c0[0];
    }
    if ((uint)local_60b8 != 0) {
      return 0xfffffffd;
    }
  }
  uVar21 = local_60b0;
  if (0x802 < (int)local_6098) {
    return 0xfffffffd;
  }
  local_6008 = local_5fa8;
  if ((local_60ac == 0) && (local_5fa8 != 3)) {
    lVar44 = (longlong)local_5fa8 * 0x43;
    bVar12 = *(byte *)(lVar44 + 0x101 + param_1);
    uVar37 = uVar50;
    if (bVar12 != 0) {
      local_6118 = &local_60b8;
      uVar33 = bVar12 * local_60b0 * 8;
      uVar37 = (ulonglong)uVar33;
      local_60c0[0] = (uint)local_60b8;
      FUN_14f8c8920(&local_6070,PTR_DAT_154e13b80,local_10a0,uVar33);
      local_60a8 = local_6050;
      pbVar46 = local_6050;
    }
    iVar13 = (int)uVar37;
    bVar12 = *(byte *)(lVar44 + 0x102 + param_1);
    if (bVar12 != 0) {
      local_6118 = &local_60b8;
      iVar49 = uVar21 * bVar12 * 8;
      local_60c0[0] = (uint)local_60b8;
      FUN_14f8c8920(&local_6070,PTR_DAT_154e13b88,(longlong)local_10a0 + (longlong)iVar13,iVar49);
      iVar13 = iVar13 + iVar49;
      local_60a8 = (byte *)CONCAT44(local_60a8._4_4_,(int)local_6050);
      pbVar46 = local_6050;
    }
    bVar12 = *(byte *)(lVar44 + 0x103 + param_1);
    if (bVar12 != 0) {
      local_6118 = &local_60b8;
      iVar49 = local_60b0 * bVar12 * 8;
      local_60c0[0] = (uint)local_60b8;
      FUN_14f8c8920(&local_6070,PTR_DAT_154e13b90,(longlong)local_10a0 + (longlong)iVar13,iVar49);
      iVar13 = iVar13 + iVar49;
      local_60a8 = (byte *)CONCAT44(local_60a8._4_4_,(int)local_6050);
      pbVar46 = local_6050;
    }
    bVar12 = *(byte *)(lVar44 + 0x104 + param_1);
    if (bVar12 != 0) {
      local_6118 = &local_60b8;
      iVar49 = local_60b0 * bVar12 * 8;
      local_60c0[0] = (uint)local_60b8;
      FUN_14f8c8920(&local_6070,PTR_DAT_154e13b98,(longlong)local_10a0 + (longlong)iVar13,iVar49);
      iVar13 = iVar13 + iVar49;
      local_60a8 = (byte *)CONCAT44(local_60a8._4_4_,(int)local_6050);
      pbVar46 = local_6050;
    }
    bVar12 = *(byte *)(lVar44 + 0x105 + param_1);
    if (bVar12 != 0) {
      local_6118 = &local_60b8;
      iVar49 = local_60b0 * bVar12 * 8;
      local_60c0[0] = (uint)local_60b8;
      FUN_14f8c8920(&local_6070,PTR_DAT_154e13ba0,(longlong)local_10a0 + (longlong)iVar13,iVar49);
      iVar13 = iVar13 + iVar49;
      local_60a8 = (byte *)CONCAT44(local_60a8._4_4_,(int)local_6050);
      pbVar46 = local_6050;
    }
    bVar12 = *(byte *)(lVar44 + 0x106 + param_1);
    if (bVar12 != 0) {
      local_6118 = &local_60b8;
      local_60c0[0] = (uint)local_60b8;
      FUN_14f8c8920(&local_6070,PTR_DAT_154e13ba8,(longlong)local_10a0 + (longlong)iVar13,
                    local_60b0 * bVar12 * 8);
      local_60a8 = (byte *)CONCAT44(local_60a8._4_4_,(int)local_6050);
      pbVar46 = local_6050;
    }
    if (0 < (int)local_60b0) {
      bVar12 = *(byte *)(lVar44 + 0xe8 + param_1);
      uVar45 = (ulonglong)local_60b0;
      lVar30 = (longlong)(int)(local_60b0 - 1) * 0xc + 0x12;
      uVar37 = uVar50;
      do {
        if (bVar12 != 0) {
          pbVar26 = (byte *)(lVar44 + 0xf5 + param_1);
          uVar48 = uVar50;
          do {
            pbVar1 = pbVar26 + lVar30;
            uVar21 = (int)uVar48 + 1;
            uVar48 = (ulonglong)uVar21;
            bVar12 = *pbVar26;
            pbVar26 = pbVar26 + 1;
            local_21f0[uVar37] = -(ulonglong)bVar12 ^ local_10a0[*pbVar1];
            uVar37 = uVar37 + 1;
            bVar12 = *(byte *)(lVar44 + 0xe8 + param_1);
          } while ((int)uVar21 < (int)(uint)bVar12);
        }
        lVar30 = lVar30 + 0xc;
        uVar45 = uVar45 - 1;
      } while (uVar45 != 0);
    }
    if ((uint)local_60b8 != 0) {
      return 0xfffffffd;
    }
  }
  iVar13 = local_6008;
  uVar21 = local_60b0;
  lVar44 = 2;
  local_5f80 = (byte *)&local_18c0;
  plVar34 = &local_5f70;
  puVar32 = local_5f58;
  local_5f78 = (byte *)((longlong)&local_18c0 + (longlong)(int)local_6098);
  ppbVar41 = &local_6070;
  do {
    uVar33 = -*(uint *)(ppbVar41 + 2) & 7;
    *plVar34 = (longlong)(*ppbVar41 + (*(uint *)(ppbVar41 + 2) >> 3));
    puVar32[3] = uVar33;
    if (uVar33 == 0) {
      *puVar32 = 0;
    }
    else {
      *puVar32 = (uint)(*(byte *)*plVar34 >> (8U - (char)uVar33 & 0x1f));
      *plVar34 = *plVar34 + 1;
    }
    ppbVar41 = ppbVar41 + 8;
    plVar34 = plVar34 + 2;
    puVar32 = puVar32 + 2;
    lVar44 = lVar44 + -1;
  } while (lVar44 != 0);
  local_5f68 = pbVar46 + (int)-(local_6040 >> 3);
  local_5f58[4] = -local_6040 & 7;
  if (local_5f58[4] == 0) {
    local_5f58[1] = 0;
  }
  else {
    pbVar46 = local_5f68 + -1;
    local_5f68 = local_5f68 + -1;
    local_5f58[1] = (uint)(*pbVar46 >> (8U - (char)local_5f58[4] & 0x1f));
  }
  local_60c0[0] = (uint)local_60b8;
  iVar49 = FUN_14f8c9630(&local_5f80,&DAT_154e03b80);
  lVar44 = (longlong)(int)local_6098;
  uVar33 = local_60c0[0];
  if (iVar49 == 0) {
    uVar33 = 1;
  }
  _local_6060 = CONCAT44(iStack_605c,((int)local_5f70 - (int)local_6070) * 8 - local_5f58[3]);
  _local_6020 = CONCAT44(uStack_601c,(local_5f60 - (int)local_6030) * 8 - local_5f58[5]);
  local_60b8 = CONCAT44(local_60b8._4_4_,uVar33);
  _local_6040 = CONCAT44(iStack_603c,((int)local_60a8 - (int)local_5f68) * 8 - local_5f58[4]);
  *(undefined2 *)((longlong)&local_18c0 + lVar44) = 0xffff;
  if (uVar33 != 0) {
    return 0xfffffffd;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar37 = uVar50;
    uVar45 = uVar50;
    uVar33 = uVar15;
    if (1 < lVar44) {
      uVar48 = uVar50;
      do {
        uVar33 = (int)uVar48 + (uint)(*(byte *)((longlong)&local_18c0 + uVar37) < 0xf0);
        uVar48 = (ulonglong)uVar33;
        uVar45 = (ulonglong)
                 ((int)uVar45 + (uint)(*(byte *)((longlong)&local_18c0 + uVar37 + 1) < 0xf0));
        uVar37 = uVar37 + 2;
      } while ((longlong)uVar37 < lVar44 + -1);
    }
    if ((longlong)uVar37 < lVar44) {
      uVar15 = (uint)(*(byte *)((longlong)&local_18c0 + uVar37) < 0xf0);
    }
    iVar49 = uVar15 + (int)uVar45 + uVar33;
  }
  else {
    iVar49 = UERAradaudio_sse2_count_bytes_below_value_sentinel16_(&local_18c0,local_6098,0xf0);
  }
  uVar33 = 0;
  if ((local_60ac == 0) &&
     (uVar15 = (uint)*(byte *)((longlong)iVar13 * 0x43 + 0xe8 + param_1), uVar15 != 0)) {
    iVar47 = uVar15 * 8 * uVar21;
    if (*(char *)(param_1 + 0xd2) == '\0') {
      uVar37 = uVar50;
      uVar45 = uVar50;
      uVar15 = uVar33;
      if (0 < iVar47) {
        do {
          uVar48 = uVar37 + 8;
          uVar37 = *(ulonglong *)((longlong)local_21f0 + uVar37) -
                   (*(ulonglong *)((longlong)local_21f0 + uVar37) >> 1 & 0x5555555555555555);
          uVar15 = (int)uVar45 +
                   (uint)(byte)(((uVar37 >> 6 & 0x303030303030303) +
                                 (uVar37 >> 4 & 0x303030303030303) +
                                 (uVar37 >> 2 & 0x303030303030303) + (uVar37 & 0x303030303030303)) *
                                0x101010101010101 >> 0x38);
          uVar37 = uVar48;
          uVar45 = (ulonglong)uVar15;
        } while ((longlong)uVar48 < (longlong)iVar47);
      }
    }
    else {
      uVar15 = UERAradaudio_intel_popcnt_count_set_bits_read_multiple8_sentinel8_(local_21f0,iVar47)
      ;
    }
    iVar49 = iVar49 + uVar15;
  }
  if ((int)(uVar21 * 0x400) < iVar49) {
    return 0xfffffffd;
  }
  if (local_60ac != 0) {
    iVar13 = 4;
  }
  iVar47 = (iVar49 + 1) / 2;
  local_6118 = &local_60b8;
  FUN_14f8c8920(&local_6070,(&PTR_DAT_154e13bb0)[*(byte *)((longlong)iVar13 + 500 + param_1)],
                local_10a0,iVar47);
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar37 = uVar50;
    if (0 < iVar47) {
      do {
        bVar12 = *(byte *)((longlong)local_10a0 + uVar37);
        *(byte *)((longlong)&local_20e0 + uVar37 * 2 + 1) = bVar12 >> 4;
        *(byte *)((longlong)&local_20e0 + uVar37 * 2) = bVar12 & 0xf;
        uVar37 = uVar37 + 1;
      } while ((longlong)uVar37 < (longlong)iVar47);
    }
    *(undefined8 *)((longlong)&local_20e0 + (longlong)(iVar47 * 2)) = 0x101010101010101;
    *(undefined8 *)((longlong)&local_20e0 + (longlong)(iVar47 * 2 + 8)) = 0x101010101010101;
  }
  else {
    UERAradaudio_sse2_unpack_nibbles_read_sentinel16_write_multiple32_
              (&local_20e0,local_10a0,iVar47,0x1111111111111111);
  }
  puVar28 = (ulonglong *)((longlong)&local_18c0 + (longlong)(int)local_6098);
  puVar16 = &local_18c0;
  if (&local_18c0 < puVar28) {
    uVar15 = local_6020;
    do {
      if (*(char *)(param_1 + 0xd0) == '\0') {
        do {
          uVar21 = local_60b0;
          if (puVar28 <= puVar16) goto LAB_14f8c6e2f;
          uVar37 = *puVar16;
          puVar16 = puVar16 + 1;
          uVar37 = ~((uVar37 & 0x7f7f7f7f7f7f7f7f) + 0x1010101010101010 & uVar37) &
                   ((uVar37 & 0x7f7f7f7f7f7f7f7f) + 0x4444444444444444 | uVar37) &
                   0x8080808080808080;
        } while (uVar37 == 0);
        uVar45 = 0;
        if (uVar37 != 0) {
          for (; (uVar37 >> uVar45 & 1) == 0; uVar45 = uVar45 + 1) {
          }
        }
        puVar16 = (ulonglong *)((longlong)puVar16 + ((uVar45 >> 3) - 8));
      }
      else {
        puVar16 = (ulonglong *)UERAradaudio_sse2_find_next_coarse_run_excess16_(puVar16,puVar28);
      }
      uVar21 = local_60b0;
      if (puVar28 <= puVar16) break;
      if (uVar15 < uStack_601c) {
        bVar12 = (byte)(*(uint *)(local_6030 + (uVar15 >> 3)) >> ((byte)uVar15 & 7)) & 3;
        _local_6020 = CONCAT44(uStack_601c,uVar15 + 2);
        uVar15 = uVar15 + 2;
      }
      else {
        bVar12 = FUN_14f8c8ac0(&local_6030,2,&local_60b8);
        uVar15 = local_6020;
      }
      *(byte *)puVar16 = (char)*puVar16 + bVar12;
      puVar16 = (ulonglong *)((longlong)puVar16 + 1);
      uVar21 = local_60b0;
    } while (puVar16 < puVar28);
  }
LAB_14f8c6e2f:
  uVar37 = (ulonglong)uVar21;
  lVar44 = (longlong)iVar49;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar45 = uVar50;
    uVar48 = uVar50;
    uVar15 = uVar33;
    if (1 < lVar44) {
      uVar38 = uVar50;
      do {
        uVar48 = (ulonglong)
                 ((int)uVar48 + (uint)(*(char *)((longlong)&local_20e0 + uVar45) == '\0'));
        uVar15 = (int)uVar38 + (uint)(*(char *)((longlong)&local_20e0 + uVar45 + 1) == '\0');
        uVar38 = (ulonglong)uVar15;
        uVar45 = uVar45 + 2;
      } while ((longlong)uVar45 < lVar44 + -1);
    }
    if ((longlong)uVar45 < lVar44) {
      uVar33 = (uint)(*(char *)((longlong)&local_20e0 + uVar45) == '\0');
    }
    iVar47 = uVar15 + (int)uVar48 + uVar33;
  }
  else {
    iVar47 = UERAradaudio_sse2_count_bytes_below_value_sentinel16_(&local_20e0,iVar49,1);
  }
  local_6118 = &local_60b8;
  FUN_14f8c8920(&local_6070,(&PTR_DAT_154e13bd0)[*(byte *)((longlong)iVar13 + 0x1f9 + param_1)],
                local_890,iVar47);
  pbVar46 = local_890;
  if (((longlong)local_80 - (longlong)(local_890 + iVar49) < 0x10) ||
     (*(char *)(param_1 + 0xd0) == '\0')) {
    uVar45 = uVar50;
    if (0 < iVar49) {
      do {
        if (*(char *)((longlong)&local_20e0 + uVar45) == '\0') {
          if (pbVar46 == local_890 + iVar49) {
            return 0xfffffffd;
          }
          bVar12 = *pbVar46;
          pbVar46 = pbVar46 + 1;
        }
        else {
          bVar12 = *(char *)((longlong)&local_20e0 + uVar45) - 8;
        }
        *(byte *)((longlong)&local_20e0 + uVar45) = bVar12;
        uVar45 = uVar45 + 1;
      } while ((longlong)uVar45 < lVar44);
    }
  }
  else {
    iVar13 = UERAradaudio_sse2_expand_coefficients_excess_read15_(&local_20e0,iVar49,local_890);
    if (iVar13 == 0) {
      return 0xfffffffd;
    }
  }
  lVar44 = local_60a0;
  if ((uint)local_60b8 != 0) {
    return 0xfffffffd;
  }
  local_6084 = 0;
  local_60b8 = 0;
  if (0 < (int)uVar21) {
    psVar27 = local_4e5c;
    do {
      memset(psVar27,0,(longlong)(*(int *)(lVar44 + 0x10) * 2));
      psVar27 = psVar27 + 0xae0;
      uVar37 = uVar37 - 1;
      uVar21 = local_60b0;
    } while (uVar37 != 0);
  }
  uVar33 = (uint)local_60b8;
  if ((local_60ac == 0) && (0 < (int)uVar21)) {
    local_5ff8 = 0;
    uVar37 = uVar50;
    uVar45 = uVar50;
    uVar48 = uVar50;
    do {
      local_60c0[0] = 0;
      if (0 < *(int *)(local_60a0 + 4)) {
        pcVar51 = (char *)(param_1 + 0xa0);
        local_60a8 = (byte *)(local_60a0 + 0xdc);
        local_6090 = -0xa0 - param_1;
        do {
          iVar13 = *(int *)(local_60a8 + -0x60);
          lVar44 = (longlong)iVar13;
          if (iVar13 != 1) {
            iVar49 = *(int *)local_60a8;
            if (local_4f34[(longlong)(pcVar51 + local_6090 + uVar48 * 0x570)] == 0xffffffef) {
              if (0 < iVar13) {
                bVar12 = pcVar51[-0x78];
                psVar27 = local_4e5c + uVar48 * 0xae0 + (longlong)iVar49;
                for (; lVar44 != 0; lVar44 = lVar44 + -1) {
                  *psVar27 = (short)((longlong)(ulonglong)bVar12 / (longlong)iVar13);
                  psVar27 = psVar27 + 1;
                }
              }
            }
            else if ((local_6094 == 0) || (uVar48 != 1)) {
              bVar12 = pcVar51[-0x78];
              iVar47 = 0;
              cVar3 = *pcVar51;
              if (local_6088 == 0) {
                iVar13 = iVar13 + -1;
              }
              lVar44 = (longlong)iVar13;
              if (0 < iVar13) {
                psVar27 = local_4e5c + uVar48 * 0xae0 + (longlong)iVar49;
                do {
                  pbVar46 = local_2280 + uVar45;
                  uVar45 = uVar45 + 1;
                  uVar21 = (uint)*pbVar46 - (int)cVar3 & 0x3f;
                  iVar47 = iVar47 + uVar21;
                  *psVar27 = (short)uVar21;
                  lVar44 = lVar44 + -1;
                  psVar27 = psVar27 + 1;
                } while (lVar44 != 0);
                bVar12 = pcVar51[-0x78];
              }
              if (local_6088 == 0) {
                pbVar46 = local_2380 + local_5ff8;
                local_5ff8 = local_5ff8 + 1;
                iVar47 = ((int)(char)*pbVar46 + (uint)bVar12) - iVar47;
                if (iVar47 < 0) {
                  return 0xfffffffd;
                }
                local_4e5c[(longlong)(iVar13 + iVar49) + uVar48 * 0xae0] = (short)iVar47;
              }
            }
            else if (0 < iVar13) {
              psVar27 = local_4e5c + iVar49;
              do {
                pbVar46 = local_2350 + uVar37;
                uVar37 = uVar37 + 1;
                psVar27[0xae0] = (short)(char)*pbVar46 + *psVar27;
                psVar27 = psVar27 + 1;
                lVar44 = lVar44 + -1;
              } while (lVar44 != 0);
            }
          }
          local_60c0[0] = local_60c0[0] + 1;
          local_60a8 = local_60a8 + 4;
          pcVar51 = pcVar51 + 1;
        } while ((int)local_60c0[0] < *(int *)(local_60a0 + 4));
      }
      uVar48 = uVar48 + 1;
    } while ((longlong)uVar48 < local_6010);
  }
  local_6094 = 0;
  if (0 < local_6010) {
    puVar31 = local_4dbe;
    local_60a8 = (byte *)((longlong)local_6008 * 0x43);
    local_5ff8 = 0;
    do {
      _Size = 0;
      uVar21 = (uint)uVar50;
      if (local_60ac == 0) {
        _Size = (ulonglong)local_60a8[param_1 + 0xe8] << 6;
      }
      sVar39 = 0;
      puVar16 = (ulonglong *)
                ((longlong)local_21f0 +
                (longlong)(int)((uint)local_60a8[param_1 + 0xe8] * 8 * local_6094));
      local_6090 = (longlong)*(int *)(local_60a0 + 8);
      iVar13 = (int)_Size;
      sVar35 = sVar39;
      if (iVar13 != 0) {
        sVar35 = _Size;
        if (*(char *)(param_1 + 0xd1) == '\0') {
          memset(puVar31,0,_Size);
          if (iVar13 != 0) {
            lVar44 = (longlong)(int)uVar21;
            uVar37 = (ulonglong)((iVar13 - 1U >> 6) + 1);
            do {
              for (uVar45 = *puVar16; uVar21 = (uint)uVar50, uVar45 != 0;
                  uVar45 = uVar45 & uVar45 - 1) {
                puVar29 = (undefined1 *)((longlong)&local_20e0 + lVar44);
                uVar50 = (ulonglong)(uVar21 + 1);
                lVar30 = 0;
                if (uVar45 != 0) {
                  for (; (uVar45 >> lVar30 & 1) == 0; lVar30 = lVar30 + 1) {
                  }
                }
                lVar44 = lVar44 + 1;
                puVar31[sVar39 + lVar30] = *puVar29;
              }
              sVar39 = sVar39 + 0x40;
              uVar37 = uVar37 - 1;
              puVar16 = puVar16 + 1;
            } while (uVar37 != 0);
          }
        }
        else {
          local_6110 = &local_6084;
          local_6118 = &local_20e0;
          UERAradaudio_ssse3_distribute_bitflag_coefficients_multiple16_
                    (*(undefined8 *)(param_1 + 0xd0),puVar31,_Size,puVar16);
          uVar21 = local_6084;
        }
      }
      lVar44 = local_6090;
      iVar13 = (int)local_60b8;
      puVar29 = (undefined1 *)((longlong)&local_20e0 + (longlong)(int)uVar21);
      memset(puVar31 + sVar35,0,local_6090 - sVar35);
      bVar12 = *(byte *)((longlong)&local_18c0 + (longlong)iVar13);
      pbVar46 = (byte *)((longlong)&local_18c0 + (longlong)iVar13 + 1);
      while (bVar12 != 0xff) {
        sVar35 = sVar35 + bVar12;
        if (bVar12 < 0xf0) {
          if (lVar44 <= (longlong)sVar35) {
            return 0xfffffffd;
          }
          uVar4 = *puVar29;
          puVar29 = puVar29 + 1;
          puVar31[sVar35] = uVar4;
          sVar35 = sVar35 + 1;
        }
        bVar12 = *pbVar46;
        pbVar46 = pbVar46 + 1;
      }
      uVar33 = (int)pbVar46 - ((int)local_60c0 + 0x4800);
      local_60b8 = (ulonglong)uVar33;
      local_6084 = (int)puVar29 - ((int)local_60c0 + 0x3fe0);
      uVar50 = (ulonglong)local_6084;
      local_6094 = local_6094 + 1;
      local_5ff8 = local_5ff8 + 1;
      puVar31 = puVar31 + 0x15c0;
    } while (local_5ff8 < local_6010);
  }
  lVar44 = local_60a0;
  uVar21 = 0;
  if ((int)(local_6098 + 1) < (int)uVar33) {
    return 0xfffffffd;
  }
  puVar31 = local_5f40 + ((longlong)*(int *)(local_60a0 + 0xc) >> 1) * 4;
  if (*(int *)(param_1 + 0x14) == 1) {
    local_6118 = (ulonglong *)local_2300;
    FUN_14f8c86d0(param_1,local_4f40,0,*(undefined4 *)(param_1 + 0x20));
    UERAradaudio_imdct_fft_only_middle_
              (*(undefined8 *)(param_1 + 0xd0),local_5f40,local_4980,
               (longlong)
               *(int *)(*(longlong *)(param_1 + 0xd8 + (longlong)*(int *)(param_1 + 4) * 8) + 0xc));
    iVar13 = *(int *)(param_1 + 4);
    lVar44 = *(longlong *)(param_1 + 0xd8 + (longlong)iVar13 * 8);
    lVar30 = *local_6000;
    if (*(int *)(param_1 + 0xbc) == 0) {
      if (iVar13 == *(int *)(param_1 + 8)) {
        local_6100 = *(undefined4 *)(param_1 + 0x218);
        uVar21 = 0x400;
        if (iVar13 != 0) {
          uVar21 = 0x80;
        }
        local_60e0 = *(int *)(param_1 + 0x24);
        local_60f0 = *(undefined4 *)(param_1 + 0x20);
        local_60e8 = 0;
        local_60f8 = (&PTR_DAT_154e13bf0)[iVar13];
        local_6118 = *(ulonglong **)(param_1 + 0x208);
        local_6108 = 0;
        local_6110 = (uint *)CONCAT44(local_6110._4_4_,uVar21);
        FUN_14f8c5500(param_1,lVar30,uVar21,local_5f40);
      }
      else {
        if (iVar13 == 0) {
          local_60e0 = *(int *)(param_1 + 0x24);
          local_6100 = *(undefined4 *)(param_1 + 0x218);
          local_60f0 = *(undefined4 *)(param_1 + 0x20);
          local_60e8 = 0;
          local_60f8 = PTR_DAT_154e13bf8;
          local_6118 = *(ulonglong **)(param_1 + 0x208);
          local_6108 = 0;
          local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x80);
          FUN_14f8c5500(param_1,lVar30,0x80,local_5f40);
          memcpy((void *)(lVar30 + 0x200),local_5e40,0x700);
        }
        else {
          fVar2 = *(float *)(param_1 + 0x218);
          lVar36 = 0x38;
          pfVar17 = (float *)(lVar30 + 8);
          psVar27 = (short *)(*(longlong *)(param_1 + 0x208) + 4);
          do {
            pfVar17[-2] = (float)(int)psVar27[-2] * fVar2;
            pfVar17[-1] = (float)(int)psVar27[-1] * fVar2;
            *pfVar17 = (float)(int)*psVar27 * fVar2;
            pfVar17[1] = (float)(int)psVar27[1] * fVar2;
            pfVar17[2] = (float)(int)psVar27[2] * fVar2;
            pfVar17[3] = (float)(int)psVar27[3] * fVar2;
            pfVar17[4] = (float)(int)psVar27[4] * fVar2;
            pfVar17[5] = (float)(int)psVar27[5] * fVar2;
            lVar36 = lVar36 + -1;
            pfVar17 = pfVar17 + 8;
            psVar27 = psVar27 + 8;
          } while (lVar36 != 0);
          local_6100 = *(undefined4 *)(param_1 + 0x218);
          local_60e0 = *(int *)(param_1 + 0x24) + 0x1c0;
          local_60f0 = *(undefined4 *)(param_1 + 0x20);
          local_60e8 = 0;
          local_60f8 = PTR_DAT_154e13bf8;
          local_6118 = *(ulonglong **)(param_1 + 0x208);
          local_6108 = 0x1c0;
          local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x400);
          FUN_14f8c5500(param_1,lVar30 + 0x700,0x80,local_5f40);
        }
        uVar21 = 0x240;
      }
    }
    uVar52 = FUN_14f8cafb0(param_1,*(undefined8 *)(param_1 + 0x208),puVar31,
                           *(undefined4 *)(lVar44 + 0xc));
    *(undefined4 *)(param_1 + 0x218) = uVar52;
    goto LAB_14f8c8360;
  }
  if ((*(int *)(param_1 + 0x14) == 2) && (local_60b0 == 1)) {
    local_6118 = (ulonglong *)local_2300;
    FUN_14f8c86d0(param_1,local_4f40,0,*(undefined4 *)(param_1 + 0x20));
    UERAradaudio_imdct_fft_only_middle_
              (*(undefined8 *)(param_1 + 0xd0),local_5f40,local_4980,
               (longlong)
               *(int *)(*(longlong *)(param_1 + 0xd8 + (longlong)*(int *)(param_1 + 4) * 8) + 0xc));
    lVar36 = 0x38;
    iVar13 = *(int *)(param_1 + 4);
    lVar44 = *(longlong *)(param_1 + 0xd8 + (longlong)iVar13 * 8);
    lVar30 = *local_6000;
    if (*(int *)(param_1 + 0xbc) == 0) {
      if (iVar13 == *(int *)(param_1 + 8)) {
        local_6100 = *(undefined4 *)(param_1 + 0x218);
        uVar52 = 0x400;
        if (iVar13 != 0) {
          uVar52 = 0x80;
        }
        local_60e0 = *(int *)(param_1 + 0x24);
        local_60f0 = *(undefined4 *)(param_1 + 0x20);
        local_60e8 = 0;
        local_60f8 = (&PTR_DAT_154e13bf0)[iVar13];
        local_6118 = *(ulonglong **)(param_1 + 0x208);
        local_6108 = 0;
        local_6110 = (uint *)CONCAT44(local_6110._4_4_,uVar52);
        FUN_14f8c5500(param_1,lVar30,uVar52,local_5f40);
      }
      else if (iVar13 == 0) {
        local_60e0 = *(int *)(param_1 + 0x24);
        local_6100 = *(undefined4 *)(param_1 + 0x218);
        local_60f0 = *(undefined4 *)(param_1 + 0x20);
        local_60e8 = 0;
        local_60f8 = PTR_DAT_154e13bf8;
        local_6118 = *(ulonglong **)(param_1 + 0x208);
        local_6108 = 0;
        local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x80);
        FUN_14f8c5500(param_1,lVar30,0x80,local_5f40);
        memcpy((void *)(lVar30 + 0x200),local_5e40,0x700);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x218);
        lVar43 = 0x38;
        pfVar17 = (float *)(lVar30 + 8);
        psVar27 = (short *)(*(longlong *)(param_1 + 0x208) + 4);
        do {
          pfVar17[-2] = (float)(int)psVar27[-2] * fVar2;
          pfVar17[-1] = (float)(int)psVar27[-1] * fVar2;
          *pfVar17 = (float)(int)*psVar27 * fVar2;
          pfVar17[1] = (float)(int)psVar27[1] * fVar2;
          pfVar17[2] = (float)(int)psVar27[2] * fVar2;
          pfVar17[3] = (float)(int)psVar27[3] * fVar2;
          pfVar17[4] = (float)(int)psVar27[4] * fVar2;
          pfVar17[5] = (float)(int)psVar27[5] * fVar2;
          lVar43 = lVar43 + -1;
          pfVar17 = pfVar17 + 8;
          psVar27 = psVar27 + 8;
        } while (lVar43 != 0);
        local_6100 = *(undefined4 *)(param_1 + 0x218);
        local_60e0 = *(int *)(param_1 + 0x24) + 0x1c0;
        local_60f0 = *(undefined4 *)(param_1 + 0x20);
        local_60e8 = 0;
        local_60f8 = PTR_DAT_154e13bf8;
        local_6118 = *(ulonglong **)(param_1 + 0x208);
        local_6108 = 0x1c0;
        local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x400);
        FUN_14f8c5500(param_1,lVar30 + 0x700,0x80,local_5f40);
      }
    }
    uVar52 = FUN_14f8cafb0(param_1,*(undefined8 *)(param_1 + 0x208),puVar31,
                           *(undefined4 *)(lVar44 + 0xc));
    *(undefined4 *)(param_1 + 0x218) = uVar52;
    lVar44 = local_6000[1];
    iVar13 = *(int *)(param_1 + 4);
    lVar43 = (longlong)iVar13;
    lVar30 = *(longlong *)(param_1 + 0xd8 + lVar43 * 8);
    if (*(int *)(param_1 + 0xbc) == 0) {
      if (iVar13 != *(int *)(param_1 + 8)) {
        if (iVar13 == 0) {
LAB_14f8c82c0:
          local_60e0 = *(int *)(param_1 + 0x24);
          local_6100 = *(undefined4 *)(param_1 + 0x21c);
          local_60f0 = *(undefined4 *)(param_1 + 0x20);
          local_60e8 = 1;
          local_60f8 = PTR_DAT_154e13bf8;
          local_6118 = *(ulonglong **)(param_1 + 0x210);
          local_6108 = 0;
          local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x80);
          FUN_14f8c5500(param_1,lVar44,0x80,local_5f40);
          memcpy((void *)(lVar44 + 0x200),local_5e40,0x700);
        }
        else {
          fVar2 = *(float *)(param_1 + 0x21c);
          pfVar17 = (float *)(lVar44 + 8);
          psVar27 = (short *)(*(longlong *)(param_1 + 0x210) + 4);
          do {
            pfVar17[-2] = (float)(int)psVar27[-2] * fVar2;
            pfVar17[-1] = (float)(int)psVar27[-1] * fVar2;
            *pfVar17 = (float)(int)*psVar27 * fVar2;
            pfVar17[1] = (float)(int)psVar27[1] * fVar2;
            pfVar17[2] = (float)(int)psVar27[2] * fVar2;
            pfVar17[3] = (float)(int)psVar27[3] * fVar2;
            pfVar17[4] = (float)(int)psVar27[4] * fVar2;
            pfVar17[5] = (float)(int)psVar27[5] * fVar2;
            lVar36 = lVar36 + -1;
            pfVar17 = pfVar17 + 8;
            psVar27 = psVar27 + 8;
          } while (lVar36 != 0);
          local_6100 = *(undefined4 *)(param_1 + 0x21c);
          local_60e0 = *(int *)(param_1 + 0x24) + 0x1c0;
          local_60f0 = *(undefined4 *)(param_1 + 0x20);
          local_60e8 = 1;
          local_60f8 = PTR_DAT_154e13bf8;
          local_6118 = *(ulonglong **)(param_1 + 0x210);
          local_6108 = 0x1c0;
          local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x400);
          FUN_14f8c5500(param_1,lVar44 + 0x700,0x80,local_5f40);
        }
        goto LAB_14f8c833b;
      }
LAB_14f8c80fc:
      local_6100 = *(undefined4 *)(param_1 + 0x21c);
      uVar21 = 0x400;
      if ((int)lVar43 != 0) {
        uVar21 = 0x80;
      }
      local_60e0 = *(int *)(param_1 + 0x24);
      local_60f0 = *(undefined4 *)(param_1 + 0x20);
      local_60e8 = 1;
      local_60f8 = (&PTR_DAT_154e13bf0)[lVar43];
      local_6118 = *(ulonglong **)(param_1 + 0x210);
      local_6108 = 0;
      local_6110 = (uint *)CONCAT44(local_6110._4_4_,uVar21);
      FUN_14f8c5500(param_1,lVar44,uVar21,local_5f40);
    }
  }
  else {
    local_6118 = (ulonglong *)local_2300;
    FUN_14f8c86d0(param_1,local_4f40,0,*(undefined4 *)(param_1 + 0x20));
    uVar33 = 1;
    local_6118 = (ulonglong *)
                 (local_2300 +
                 *(int *)(*(longlong *)(param_1 + 0xd8 + (longlong)(int)local_60ac * 8) + 4));
    FUN_14f8c86d0(param_1,local_3980,1,*(uint *)(param_1 + 0x20) ^ 0x55555555);
    if (0 < *(int *)(lVar44 + 4)) {
      puVar32 = (uint *)(lVar44 + 0x1c);
      uVar15 = uVar21;
      do {
        if ((local_6080 & uVar33) != 0) {
          uVar23 = puVar32[0x48];
          uVar50 = (ulonglong)(int)uVar23;
          uVar24 = *puVar32;
          iVar13 = uVar24 + uVar23;
          if (((int)uVar23 < iVar13) && (7 < uVar24)) {
            lVar44 = local_60a0;
            if ((local_4980 + (iVar13 + -1) < local_33c0 + uVar50) ||
               (local_33c0 + (iVar13 + -1) < local_4980 + uVar50)) {
              uVar24 = uVar24 & 0x80000007;
              if ((int)uVar24 < 0) {
                uVar24 = (uVar24 - 1 | 0xfffffff8) + 1;
              }
              uVar37 = uVar50;
              do {
                fVar2 = local_4980[uVar50];
                fVar5 = local_4980[uVar50 + 1];
                fVar6 = local_4980[uVar50 + 2];
                fVar7 = local_4980[uVar50 + 3];
                uVar23 = (int)uVar37 + 8;
                uVar37 = (ulonglong)uVar23;
                fVar8 = local_33c0[uVar50];
                fVar9 = local_33c0[uVar50 + 1];
                fVar10 = local_33c0[uVar50 + 2];
                fVar11 = local_33c0[uVar50 + 3];
                local_4980[uVar50] = fVar8 * ___xmm_3f0000003f0000003f0000003f000000 + fVar2;
                local_4980[uVar50 + 1] = fVar9 * _UNK_150689624 + fVar5;
                local_4980[uVar50 + 2] = fVar10 * _UNK_150689628 + fVar6;
                local_4980[uVar50 + 3] = fVar11 * _UNK_15068962c + fVar7;
                local_33c0[uVar50] = fVar2 - fVar8 * ___xmm_3f0000003f0000003f0000003f000000;
                local_33c0[uVar50 + 1] = fVar5 - fVar9 * _UNK_150689624;
                local_33c0[uVar50 + 2] = fVar6 - fVar10 * _UNK_150689628;
                local_33c0[uVar50 + 3] = fVar7 - fVar11 * _UNK_15068962c;
                fVar2 = local_33c0[uVar50 + 4];
                fVar5 = local_33c0[uVar50 + 5];
                fVar6 = local_33c0[uVar50 + 6];
                fVar7 = local_33c0[uVar50 + 7];
                fVar8 = local_4980[uVar50 + 4];
                fVar9 = local_4980[uVar50 + 5];
                fVar10 = local_4980[uVar50 + 6];
                fVar11 = local_4980[uVar50 + 7];
                local_4980[uVar50 + 4] = ___xmm_3f0000003f0000003f0000003f000000 * fVar2 + fVar8;
                local_4980[uVar50 + 5] = _UNK_150689624 * fVar5 + fVar9;
                local_4980[uVar50 + 6] = _UNK_150689628 * fVar6 + fVar10;
                local_4980[uVar50 + 7] = _UNK_15068962c * fVar7 + fVar11;
                local_33c0[uVar50 + 4] = fVar8 - ___xmm_3f0000003f0000003f0000003f000000 * fVar2;
                local_33c0[uVar50 + 5] = fVar9 - _UNK_150689624 * fVar5;
                local_33c0[uVar50 + 6] = fVar10 - _UNK_150689628 * fVar6;
                local_33c0[uVar50 + 7] = fVar11 - _UNK_15068962c * fVar7;
                uVar50 = uVar50 + 8;
              } while ((longlong)uVar50 < (longlong)(int)(iVar13 - uVar24));
            }
          }
          lVar30 = (longlong)(int)uVar23;
          lVar36 = (longlong)iVar13;
          if (lVar30 < lVar36) {
            if (3 < lVar36 - lVar30) {
              pfVar17 = local_33c0 + lVar30 + 3;
              lVar43 = ((lVar36 - lVar30) - 4U >> 2) + 1;
              lVar30 = lVar30 + lVar43 * 4;
              do {
                fVar2 = pfVar17[-0x573];
                pfVar17[-0x573] = pfVar17[-3] * __real_3f000000 + fVar2;
                pfVar17[-3] = fVar2 - pfVar17[-3] * __real_3f000000;
                fVar2 = pfVar17[-0x572];
                pfVar17[-0x572] = pfVar17[-2] * __real_3f000000 + fVar2;
                pfVar17[-2] = fVar2 - pfVar17[-2] * __real_3f000000;
                fVar2 = pfVar17[-0x571];
                pfVar17[-0x571] = pfVar17[-1] * __real_3f000000 + fVar2;
                pfVar17[-1] = fVar2 - pfVar17[-1] * __real_3f000000;
                fVar2 = pfVar17[-0x570];
                pfVar17[-0x570] = *pfVar17 * __real_3f000000 + fVar2;
                *pfVar17 = fVar2 - *pfVar17 * __real_3f000000;
                pfVar17 = pfVar17 + 4;
                lVar43 = lVar43 + -1;
              } while (lVar43 != 0);
              if (lVar36 <= lVar30) goto LAB_14f8c7dd0;
            }
            do {
              fVar2 = local_4980[lVar30];
              local_4980[lVar30] = local_33c0[lVar30] * __real_3f000000 + fVar2;
              local_33c0[lVar30] = fVar2 - local_33c0[lVar30] * __real_3f000000;
              lVar30 = lVar30 + 1;
            } while (lVar30 < lVar36);
          }
        }
LAB_14f8c7dd0:
        uVar15 = uVar15 + 1;
        uVar33 = uVar33 << 1 | (uint)((int)uVar33 < 0);
        puVar32 = puVar32 + 1;
        param_1 = local_5fe8;
      } while ((int)uVar15 < *(int *)(lVar44 + 4));
    }
    UERAradaudio_imdct_fft_only_middle_
              (*(undefined8 *)(param_1 + 0xd0),local_5f40,local_4980,
               (longlong)
               *(int *)(*(longlong *)(param_1 + 0xd8 + (longlong)*(int *)(param_1 + 4) * 8) + 0xc));
    lVar36 = 0x38;
    lVar44 = *local_6000;
    iVar13 = *(int *)(param_1 + 4);
    lVar30 = *(longlong *)(param_1 + 0xd8 + (longlong)iVar13 * 8);
    if (*(int *)(param_1 + 0xbc) == 0) {
      if (iVar13 == *(int *)(param_1 + 8)) {
        local_6100 = *(undefined4 *)(param_1 + 0x218);
        uVar52 = 0x400;
        if (iVar13 != 0) {
          uVar52 = 0x80;
        }
        local_60e0 = *(int *)(param_1 + 0x24);
        local_60f0 = *(undefined4 *)(param_1 + 0x20);
        local_60e8 = 0;
        local_60f8 = (&PTR_DAT_154e13bf0)[iVar13];
        local_6118 = *(ulonglong **)(param_1 + 0x208);
        local_6108 = 0;
        local_6110 = (uint *)CONCAT44(local_6110._4_4_,uVar52);
        FUN_14f8c5500(param_1,lVar44,uVar52,local_5f40);
      }
      else if (iVar13 == 0) {
        local_60e0 = *(int *)(param_1 + 0x24);
        local_6100 = *(undefined4 *)(param_1 + 0x218);
        local_60f0 = *(undefined4 *)(param_1 + 0x20);
        local_60e8 = 0;
        local_60f8 = PTR_DAT_154e13bf8;
        local_6118 = *(ulonglong **)(param_1 + 0x208);
        local_6108 = 0;
        local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x80);
        FUN_14f8c5500(param_1,lVar44,0x80,local_5f40);
        memcpy((void *)(lVar44 + 0x200),local_5e40,0x700);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x218);
        lVar43 = 0x38;
        pfVar17 = (float *)(lVar44 + 8);
        psVar27 = (short *)(*(longlong *)(param_1 + 0x208) + 4);
        do {
          pfVar17[-2] = (float)(int)psVar27[-2] * fVar2;
          pfVar17[-1] = (float)(int)psVar27[-1] * fVar2;
          *pfVar17 = (float)(int)*psVar27 * fVar2;
          pfVar17[1] = (float)(int)psVar27[1] * fVar2;
          pfVar17[2] = (float)(int)psVar27[2] * fVar2;
          pfVar17[3] = (float)(int)psVar27[3] * fVar2;
          pfVar17[4] = (float)(int)psVar27[4] * fVar2;
          pfVar17[5] = (float)(int)psVar27[5] * fVar2;
          lVar43 = lVar43 + -1;
          pfVar17 = pfVar17 + 8;
          psVar27 = psVar27 + 8;
        } while (lVar43 != 0);
        local_6100 = *(undefined4 *)(param_1 + 0x218);
        local_60e0 = *(int *)(param_1 + 0x24) + 0x1c0;
        local_60f0 = *(undefined4 *)(param_1 + 0x20);
        local_60e8 = 0;
        local_60f8 = PTR_DAT_154e13bf8;
        local_6118 = *(ulonglong **)(param_1 + 0x208);
        local_6108 = 0x1c0;
        local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x400);
        FUN_14f8c5500(param_1,lVar44 + 0x700,0x80,local_5f40);
      }
    }
    uVar52 = FUN_14f8cafb0(param_1,*(undefined8 *)(param_1 + 0x208),puVar31,
                           *(undefined4 *)(lVar30 + 0xc));
    *(undefined4 *)(param_1 + 0x218) = uVar52;
    UERAradaudio_imdct_fft_only_middle_
              (*(undefined8 *)(param_1 + 0xd0),local_5f40,local_33c0,
               (longlong)
               *(int *)(*(longlong *)(param_1 + 0xd8 + (longlong)*(int *)(param_1 + 4) * 8) + 0xc));
    lVar44 = local_6000[1];
    iVar13 = *(int *)(param_1 + 4);
    lVar43 = (longlong)iVar13;
    lVar30 = *(longlong *)(param_1 + 0xd8 + lVar43 * 8);
    if (*(int *)(param_1 + 0xbc) == 0) {
      if (iVar13 == *(int *)(param_1 + 8)) goto LAB_14f8c80fc;
      if (iVar13 == 0) goto LAB_14f8c82c0;
      fVar2 = *(float *)(param_1 + 0x21c);
      pfVar17 = (float *)(lVar44 + 8);
      psVar27 = (short *)(*(longlong *)(param_1 + 0x210) + 4);
      do {
        pfVar17[-2] = (float)(int)psVar27[-2] * fVar2;
        pfVar17[-1] = (float)(int)psVar27[-1] * fVar2;
        *pfVar17 = (float)(int)*psVar27 * fVar2;
        pfVar17[1] = (float)(int)psVar27[1] * fVar2;
        pfVar17[2] = (float)(int)psVar27[2] * fVar2;
        pfVar17[3] = (float)(int)psVar27[3] * fVar2;
        pfVar17[4] = (float)(int)psVar27[4] * fVar2;
        pfVar17[5] = (float)(int)psVar27[5] * fVar2;
        lVar36 = lVar36 + -1;
        pfVar17 = pfVar17 + 8;
        psVar27 = psVar27 + 8;
      } while (lVar36 != 0);
      local_6100 = *(undefined4 *)(param_1 + 0x21c);
      local_60e0 = *(int *)(param_1 + 0x24) + 0x1c0;
      local_60f0 = *(undefined4 *)(param_1 + 0x20);
      local_60e8 = 1;
      local_60f8 = PTR_DAT_154e13bf8;
      local_6118 = *(ulonglong **)(param_1 + 0x210);
      local_6108 = 0x1c0;
      local_6110 = (uint *)CONCAT44(local_6110._4_4_,0x400);
      FUN_14f8c5500(param_1,lVar44 + 0x700,0x80,local_5f40);
LAB_14f8c833b:
      uVar21 = 0x240;
    }
  }
  uVar52 = FUN_14f8cafb0(param_1,*(undefined8 *)(param_1 + 0x210),puVar31,
                         *(undefined4 *)(lVar30 + 0xc));
  *(undefined4 *)(param_1 + 0x21c) = uVar52;
LAB_14f8c8360:
  *local_5f90 = (ulonglong)(local_5fe0 + (int)local_5fd8);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  if (local_5fdc == 0) {
    return uVar21;
  }
  if (uVar21 < local_5ff0) {
    return 0xfffffffd;
  }
  return uVar21 - local_5ff0;
}

// FUN_14f8c83e0 @ 14f8c83e0

undefined4
FUN_14f8c83e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int param_5,
             longlong param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  short *psVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  iVar2 = *(int *)(param_1 + 4);
  lVar8 = (longlong)param_5;
  lVar3 = *(longlong *)(param_1 + 0xd8 + (longlong)iVar2 * 8);
  if (*(int *)(param_1 + 0xbc) == 0) {
    if (iVar2 == *(int *)(param_1 + 8)) {
      uVar6 = 0x400;
      if (iVar2 != 0) {
        uVar6 = 0x80;
      }
      FUN_14f8c5500(param_1,param_6,uVar6,param_2,*(undefined8 *)(param_1 + 0x208 + lVar8 * 8),uVar6
                    ,0,*(undefined4 *)(param_1 + 0x218 + lVar8 * 4),(&PTR_DAT_154e13bf0)[iVar2],
                    *(undefined4 *)(param_1 + 0x20),param_5,*(undefined4 *)(param_1 + 0x24));
    }
    else {
      if (iVar2 == 0) {
        FUN_14f8c5500(param_1,param_6,0x80,param_2,*(undefined8 *)(param_1 + 0x208 + lVar8 * 8),0x80
                      ,0,*(undefined4 *)(param_1 + 0x218 + lVar8 * 4),PTR_DAT_154e13bf8,
                      *(undefined4 *)(param_1 + 0x20),param_5,*(undefined4 *)(param_1 + 0x24));
        memcpy((void *)(param_6 + 0x200),(void *)(param_2 + 0x100),0x700);
      }
      else {
        lVar7 = 0x38;
        fVar1 = *(float *)(param_1 + 0x218 + lVar8 * 4);
        pfVar4 = (float *)(param_6 + 8);
        psVar5 = (short *)(*(longlong *)(param_1 + 0x208 + lVar8 * 8) + 4);
        do {
          pfVar4[-2] = (float)(int)psVar5[-2] * fVar1;
          pfVar4[-1] = (float)(int)psVar5[-1] * fVar1;
          *pfVar4 = (float)(int)*psVar5 * fVar1;
          pfVar4[1] = (float)(int)psVar5[1] * fVar1;
          pfVar4[2] = (float)(int)psVar5[2] * fVar1;
          pfVar4[3] = (float)(int)psVar5[3] * fVar1;
          pfVar4[4] = (float)(int)psVar5[4] * fVar1;
          pfVar4[5] = (float)(int)psVar5[5] * fVar1;
          lVar7 = lVar7 + -1;
          pfVar4 = pfVar4 + 8;
          psVar5 = psVar5 + 8;
        } while (lVar7 != 0);
        FUN_14f8c5500(param_1,param_6 + 0x700,0x80,param_2,
                      *(undefined8 *)(param_1 + 0x208 + lVar8 * 8),0x400,0x1c0,
                      *(undefined4 *)(param_1 + 0x218 + lVar8 * 4),PTR_DAT_154e13bf8,
                      *(undefined4 *)(param_1 + 0x20),param_5,*(int *)(param_1 + 0x24) + 0x1c0);
      }
      uVar6 = 0x240;
    }
  }
  else {
    uVar6 = 0;
  }
  uVar9 = FUN_14f8cafb0(param_1,*(undefined8 *)(param_1 + 0x208 + lVar8 * 8),param_3,
                        *(undefined4 *)(lVar3 + 0xc));
  *(undefined4 *)(param_1 + 0x218 + lVar8 * 4) = uVar9;
  return uVar6;
}

// FUN_14f8c86d0 @ 14f8c86d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f8c86d0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_298 [32];
  uint *local_278;
  longlong local_270;
  longlong local_268;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  undefined4 local_248 [40];
  undefined4 local_1a8 [88];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  memset(local_248,0,0xa0);
  memset(local_1a8,0,0x160);
  iVar2 = *(int *)(param_1 + 4);
  lVar4 = *(longlong *)(param_1 + 0xd8 + (longlong)iVar2 * 8);
  local_270 = lVar4 + 0x43c;
  local_278 = (uint *)param_5;
  FUN_14f8c4ac0(param_1,local_248,*(undefined4 *)(lVar4 + 4),param_2 + 0xc);
  if (iVar2 == 0) {
    local_270 = lVar4 + 0x7c;
    if (*(int *)(lVar4 + 0x7c) == 1) {
      lVar6 = 0;
      do {
        *(undefined4 *)((longlong)local_1a8 + lVar6) = *(undefined4 *)((longlong)local_248 + lVar6);
        lVar6 = lVar6 + 4;
      } while (*(int *)(lVar4 + 0x7c + lVar6) == 1);
    }
    local_268 = param_2 + 0xe4;
    local_278 = (uint *)CONCAT44(local_278._4_4_,*(undefined4 *)(lVar4 + 0x10));
    FUN_14f8c5150(param_1,local_1a8,local_248,*(undefined4 *)(lVar4 + 4));
  }
  lVar1 = param_2 + 0x182;
  lVar6 = lVar4 + 0x1c;
  iVar5 = ((param_4 >> 5) + param_4) * -0x678ca057;
  local_258 = iVar5 + 0x2aa01d31;
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(lVar4 + 0x10);
    if (*(char *)(param_1 + 0xd2) == '\0') {
      local_278 = (uint *)lVar6;
      FUN_14f8ca6e0(param_1,lVar1,local_258,uVar3);
      local_278 = (uint *)CONCAT44(local_278._4_4_,uVar3);
      local_270 = lVar6;
      FUN_14f8c8be0(param_1,param_2 + 0x5c0,lVar1,local_1a8);
    }
    else {
      local_250 = local_258 ^ 0x55555555;
      local_278 = &local_258;
      local_254 = (uint)((ulonglong)(iVar5 + 0x2aa030b9) * -0x3b314601e57a13ad >> 0x21);
      local_24c = local_254 ^ 0x55555555;
      UERAradaudio_sse4_dequantize_long_block_replace_0_with_random_8x8_Nx16_
                (param_2 + 0x5c0,lVar1,local_1a8);
    }
  }
  else {
    FUN_14f8caa90(lVar1,local_258,*(undefined4 *)(lVar4 + 4),lVar6);
    if (*(char *)(param_1 + 0xd2) == '\0') {
      local_278 = (uint *)lVar6;
      FUN_14f8cb260(param_2 + 0x5c0,lVar1,local_248,*(undefined4 *)(lVar4 + 4));
    }
    else {
      local_278 = (uint *)lVar6;
      UERAradaudio_sse4_dequantize_short_block_sse4_();
    }
  }
  return;
}

// FUN_14f8c8920 @ 14f8c8920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f8c8920(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined4 *param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  uint local_50 [6];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_70 = param_4 + param_3;
  plVar4 = &local_68;
  puVar5 = local_50;
  lVar7 = 2;
  plVar6 = param_1;
  do {
    uVar2 = -*(uint *)(plVar6 + 2) & 7;
    *plVar4 = (ulonglong)(*(uint *)(plVar6 + 2) >> 3) + *plVar6;
    puVar5[3] = uVar2;
    if (uVar2 == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = (uint)(*(byte *)*plVar4 >> (8U - (char)uVar2 & 0x1f));
      *plVar4 = *plVar4 + 1;
    }
    plVar6 = plVar6 + 8;
    plVar4 = plVar4 + 2;
    puVar5 = puVar5 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_60 = (longlong)(int)-(*(uint *)(param_1 + 6) >> 3) + param_1[4];
  local_50[4] = -*(uint *)(param_1 + 6) & 7;
  if (local_50[4] == 0) {
    local_50[1] = 0;
  }
  else {
    pbVar1 = (byte *)(local_60 + -1);
    local_60 = local_60 + -1;
    local_50[1] = (uint)(*pbVar1 >> (8U - (char)local_50[4] & 0x1f));
  }
  local_78 = param_3;
  iVar3 = FUN_14f8c9630(&local_78,param_2);
  if (iVar3 == 0) {
    *param_5 = 1;
  }
  *(uint *)(param_1 + 2) = ((int)local_68 - (int)*param_1) * 8 - local_50[3];
  *(uint *)(param_1 + 10) = (local_58 - (int)param_1[8]) * 8 - local_50[5];
  *(uint *)(param_1 + 6) = ((int)param_1[4] - (int)local_60) * 8 - local_50[4];
  return;
}

// FUN_14f8c8ac0 @ 14f8c8ac0

uint FUN_14f8c8ac0(longlong *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 3) < uVar1 + param_2) {
    *param_3 = 1;
  }
  else if (param_2 != 0) {
    bVar3 = 8;
    uVar4 = (uint)*(byte *)(*param_1 + (ulonglong)(uVar1 >> 3));
    for (pbVar2 = (byte *)(*param_1 + 1 + (ulonglong)(uVar1 >> 3)); pbVar2 < (byte *)param_1[1];
        pbVar2 = pbVar2 + 1) {
      uVar4 = uVar4 + ((uint)*pbVar2 << (bVar3 & 0x1f));
      bVar3 = bVar3 + 8;
    }
    *(uint *)(param_1 + 2) = uVar1 + param_2;
    return (1 << ((byte)param_2 & 0x1f)) - 1U & uVar4 >> ((byte)uVar1 & 7);
  }
  return 0;
}

// FUN_14f8c8be0 @ 14f8c8be0

void FUN_14f8c8be0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined6 uVar11;
  undefined2 uVar12;
  undefined6 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  float fVar18;
  int iVar19;
  char *pcVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  short sVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  short sVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar57 [16];
  float fVar60;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 uVar41;
  undefined2 uVar42;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  fVar18 = __real_1e3ce508;
  if (*(char *)(param_1 + 0xd2) != '\0') {
    UERAradaudio_sse4_dequantize_long_block_8x8_Nx16_(param_2,param_3,param_4,param_5);
    return;
  }
  iVar25 = 0;
  iVar28 = 0;
  iVar19 = *param_6;
  if (iVar19 < 0x10) {
    lVar23 = 0;
    lVar29 = 0;
    piVar24 = param_6;
    do {
      lVar27 = (longlong)iVar19;
      lVar21 = 0;
      fVar60 = fVar18;
      if (lVar27 < 4) {
        if (0 < iVar19) goto LAB_14f8c8d00;
      }
      else {
        pcVar20 = (char *)((longlong)iVar25 + 2 + param_3);
        lVar26 = (lVar27 - 4U >> 2) + 1;
        lVar21 = lVar26 * 4;
        do {
          pcVar1 = pcVar20 + -2;
          pcVar2 = pcVar20 + -1;
          cVar4 = *pcVar20;
          pcVar3 = pcVar20 + 1;
          pcVar20 = pcVar20 + 4;
          fVar60 = fVar60 + (float)(int)*pcVar1 * (float)(int)*pcVar1 +
                   (float)(int)*pcVar2 * (float)(int)*pcVar2 + (float)(int)cVar4 * (float)(int)cVar4
                   + (float)(int)*pcVar3 * (float)(int)*pcVar3;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        if (lVar21 < lVar27) {
LAB_14f8c8d00:
          do {
            pcVar20 = (char *)(iVar25 + param_3 + lVar21);
            lVar21 = lVar21 + 1;
            fVar31 = (float)(int)*pcVar20;
            fVar60 = fVar60 + fVar31 * fVar31;
          } while (lVar21 < lVar27);
        }
      }
      if (fVar60 < 0.0) {
        fVar60 = sqrtf(fVar60);
      }
      else {
        fVar60 = SQRT(fVar60);
      }
      lVar23 = lVar23 + 1;
      lVar21 = (longlong)iVar25;
      iVar28 = iVar28 + 1;
      pfVar22 = (float *)(lVar29 + param_4);
      lVar29 = lVar23 * 4;
      fVar60 = *pfVar22 / fVar60;
      *(float *)(param_2 + lVar21 * 4) = (float)(int)*(char *)(lVar21 + param_3) * fVar60;
      *(float *)(param_2 + 4 + lVar21 * 4) = (float)(int)*(char *)(lVar21 + 1 + param_3) * fVar60;
      *(float *)(param_2 + 8 + lVar21 * 4) = (float)(int)*(char *)(lVar21 + 2 + param_3) * fVar60;
      *(float *)(param_2 + 0xc + lVar21 * 4) = (float)(int)*(char *)(lVar21 + 3 + param_3) * fVar60;
      *(float *)(param_2 + 0x10 + lVar21 * 4) = (float)(int)*(char *)(lVar21 + 4 + param_3) * fVar60
      ;
      *(float *)(param_2 + 0x14 + lVar21 * 4) = (float)(int)*(char *)(lVar21 + 5 + param_3) * fVar60
      ;
      *(float *)(param_2 + 0x18 + lVar21 * 4) = (float)(int)*(char *)(lVar21 + 6 + param_3) * fVar60
      ;
      *(float *)(param_2 + 0x1c + lVar21 * 4) = (float)(int)*(char *)(lVar21 + 7 + param_3) * fVar60
      ;
      iVar25 = iVar25 + *piVar24;
      piVar24 = param_6 + lVar23;
      iVar19 = *piVar24;
    } while (iVar19 < 0x10);
  }
  lVar29 = (longlong)iVar28;
  if (lVar29 < param_5) {
    lVar23 = (longlong)iVar25;
    do {
      pcVar20 = (char *)(param_3 + 2 + lVar23);
      fVar60 = (float)(int)*(char *)(param_3 + 1 + lVar23);
      fVar31 = (float)(int)*pcVar20;
      fVar44 = (float)(int)*(char *)(param_3 + 3 + lVar23);
      fVar32 = (float)(int)*(char *)(param_3 + 4 + lVar23);
      fVar45 = (float)(int)*(char *)(param_3 + 5 + lVar23);
      fVar33 = (float)(int)*(char *)(param_3 + 6 + lVar23);
      fVar46 = (float)(int)*(char *)(param_3 + 7 + lVar23);
      fVar34 = (float)(int)*(char *)(param_3 + 8 + lVar23);
      fVar47 = (float)(int)*(char *)(param_3 + 9 + lVar23);
      fVar35 = (float)(int)*(char *)(param_3 + 10 + lVar23);
      fVar48 = (float)(int)*(char *)(param_3 + 0xb + lVar23);
      fVar36 = (float)(int)*(char *)(param_3 + 0xc + lVar23);
      fVar49 = (float)(int)*(char *)(param_3 + 0xd + lVar23);
      fVar37 = (float)(int)*(char *)(param_3 + 0xe + lVar23);
      fVar50 = (float)(int)*(char *)(param_3 + 0xf + lVar23);
      fVar60 = (float)(int)*(char *)(param_3 + lVar23) * (float)(int)*(char *)(param_3 + lVar23) +
               fVar18 + fVar60 * fVar60 + fVar31 * fVar31 + fVar44 * fVar44 + fVar32 * fVar32 +
               fVar45 * fVar45 + fVar33 * fVar33 + fVar46 * fVar46 + fVar34 * fVar34 +
               fVar47 * fVar47 + fVar35 * fVar35 + fVar48 * fVar48 + fVar36 * fVar36 +
               fVar49 * fVar49 + fVar37 * fVar37 + fVar50 * fVar50;
      if (fVar60 < 0.0) {
        fVar60 = sqrtf(fVar60);
      }
      else {
        fVar60 = SQRT(fVar60);
      }
      fVar60 = *(float *)(param_4 + lVar29 * 4) / fVar60;
      if (((ulonglong)((iVar25 + 0xf) + param_3) < (ulonglong)(param_2 + (longlong)iVar25 * 4)) ||
         ((ulonglong)(param_2 + (longlong)(iVar25 + 0xf) * 4) < (ulonglong)(iVar25 + param_3))) {
        uVar5 = *(undefined4 *)(param_3 + lVar23);
        uVar6 = *(undefined4 *)(param_3 + 4 + lVar23);
        uVar41 = (undefined1)((uint)uVar5 >> 0x18);
        uVar42 = CONCAT11(uVar41,uVar41);
        uVar41 = (undefined1)((uint)uVar5 >> 0x10);
        uVar7 = CONCAT35(CONCAT21(uVar42,uVar41),CONCAT14(uVar41,uVar5));
        uVar41 = (undefined1)((uint)uVar5 >> 8);
        uVar11 = CONCAT51(CONCAT41((int)((ulonglong)uVar7 >> 0x20),uVar41),uVar41);
        sVar30 = CONCAT11((char)uVar5,(char)uVar5);
        uVar9 = CONCAT62(uVar11,sVar30);
        uVar41 = (undefined1)((uint)uVar6 >> 0x18);
        uVar12 = CONCAT11(uVar41,uVar41);
        uVar41 = (undefined1)((uint)uVar6 >> 0x10);
        uVar8 = CONCAT35(CONCAT21(uVar12,uVar41),CONCAT14(uVar41,uVar6));
        uVar41 = (undefined1)((uint)uVar6 >> 8);
        uVar13 = CONCAT51(CONCAT41((int)((ulonglong)uVar8 >> 0x20),uVar41),uVar41);
        sVar43 = CONCAT11((char)uVar6,(char)uVar6);
        uVar10 = CONCAT62(uVar13,sVar43);
        auVar40._8_4_ = 0;
        auVar40._0_8_ = uVar9;
        auVar40._12_2_ = uVar42;
        auVar40._14_2_ = uVar42;
        uVar42 = (undefined2)((ulonglong)uVar7 >> 0x20);
        auVar39._12_4_ = auVar40._12_4_;
        auVar39._8_2_ = 0;
        auVar39._0_8_ = uVar9;
        auVar39._10_2_ = uVar42;
        auVar38._10_6_ = auVar39._10_6_;
        auVar38._8_2_ = uVar42;
        auVar38._0_8_ = uVar9;
        uVar42 = (undefined2)uVar11;
        auVar14._4_8_ = auVar38._8_8_;
        auVar14._2_2_ = uVar42;
        auVar14._0_2_ = uVar42;
        auVar53._8_4_ = 0;
        auVar53._0_8_ = uVar10;
        auVar53._12_2_ = uVar12;
        auVar53._14_2_ = uVar12;
        uVar42 = (undefined2)((ulonglong)uVar8 >> 0x20);
        auVar52._12_4_ = auVar53._12_4_;
        auVar52._8_2_ = 0;
        auVar52._0_8_ = uVar10;
        auVar52._10_2_ = uVar42;
        auVar51._10_6_ = auVar52._10_6_;
        auVar51._8_2_ = uVar42;
        auVar51._0_8_ = uVar10;
        uVar42 = (undefined2)uVar13;
        auVar15._4_8_ = auVar51._8_8_;
        auVar15._2_2_ = uVar42;
        auVar15._0_2_ = uVar42;
        pfVar22 = (float *)(param_2 + lVar23 * 4);
        *pfVar22 = (float)((int)sVar30 >> 8) * fVar60;
        pfVar22[1] = (float)(auVar14._0_4_ >> 0x18) * fVar60;
        pfVar22[2] = (float)(auVar38._8_4_ >> 0x18) * fVar60;
        pfVar22[3] = (float)(auVar39._12_4_ >> 0x18) * fVar60;
        uVar5 = *(undefined4 *)(param_3 + 8 + lVar23);
        uVar41 = (undefined1)((uint)uVar5 >> 0x18);
        uVar42 = CONCAT11(uVar41,uVar41);
        uVar41 = (undefined1)((uint)uVar5 >> 0x10);
        uVar7 = CONCAT35(CONCAT21(uVar42,uVar41),CONCAT14(uVar41,uVar5));
        uVar41 = (undefined1)((uint)uVar5 >> 8);
        uVar11 = CONCAT51(CONCAT41((int)((ulonglong)uVar7 >> 0x20),uVar41),uVar41);
        sVar30 = CONCAT11((char)uVar5,(char)uVar5);
        uVar9 = CONCAT62(uVar11,sVar30);
        auVar56._8_4_ = 0;
        auVar56._0_8_ = uVar9;
        auVar56._12_2_ = uVar42;
        auVar56._14_2_ = uVar42;
        uVar42 = (undefined2)((ulonglong)uVar7 >> 0x20);
        auVar55._12_4_ = auVar56._12_4_;
        auVar55._8_2_ = 0;
        auVar55._0_8_ = uVar9;
        auVar55._10_2_ = uVar42;
        auVar54._10_6_ = auVar55._10_6_;
        auVar54._8_2_ = uVar42;
        auVar54._0_8_ = uVar9;
        uVar42 = (undefined2)uVar11;
        auVar16._4_8_ = auVar54._8_8_;
        auVar16._2_2_ = uVar42;
        auVar16._0_2_ = uVar42;
        pfVar22 = (float *)(param_2 + 0x10 + lVar23 * 4);
        *pfVar22 = (float)((int)sVar43 >> 8) * fVar60;
        pfVar22[1] = (float)(auVar15._0_4_ >> 0x18) * fVar60;
        pfVar22[2] = (float)(auVar51._8_4_ >> 0x18) * fVar60;
        pfVar22[3] = (float)(auVar52._12_4_ >> 0x18) * fVar60;
        uVar5 = *(undefined4 *)(param_3 + 0xc + lVar23);
        uVar41 = (undefined1)((uint)uVar5 >> 0x18);
        uVar42 = CONCAT11(uVar41,uVar41);
        uVar41 = (undefined1)((uint)uVar5 >> 0x10);
        uVar7 = CONCAT35(CONCAT21(uVar42,uVar41),CONCAT14(uVar41,uVar5));
        uVar41 = (undefined1)((uint)uVar5 >> 8);
        uVar11 = CONCAT51(CONCAT41((int)((ulonglong)uVar7 >> 0x20),uVar41),uVar41);
        sVar43 = CONCAT11((char)uVar5,(char)uVar5);
        uVar9 = CONCAT62(uVar11,sVar43);
        auVar59._8_4_ = 0;
        auVar59._0_8_ = uVar9;
        auVar59._12_2_ = uVar42;
        auVar59._14_2_ = uVar42;
        uVar42 = (undefined2)((ulonglong)uVar7 >> 0x20);
        auVar58._12_4_ = auVar59._12_4_;
        auVar58._8_2_ = 0;
        auVar58._0_8_ = uVar9;
        auVar58._10_2_ = uVar42;
        auVar57._10_6_ = auVar58._10_6_;
        auVar57._8_2_ = uVar42;
        auVar57._0_8_ = uVar9;
        uVar42 = (undefined2)uVar11;
        auVar17._4_8_ = auVar57._8_8_;
        auVar17._2_2_ = uVar42;
        auVar17._0_2_ = uVar42;
        pfVar22 = (float *)(param_2 + 0x20 + lVar23 * 4);
        *pfVar22 = (float)((int)sVar30 >> 8) * fVar60;
        pfVar22[1] = (float)(auVar16._0_4_ >> 0x18) * fVar60;
        pfVar22[2] = (float)(auVar54._8_4_ >> 0x18) * fVar60;
        pfVar22[3] = (float)(auVar55._12_4_ >> 0x18) * fVar60;
        pfVar22 = (float *)(param_2 + 0x30 + lVar23 * 4);
        *pfVar22 = (float)((int)sVar43 >> 8) * fVar60;
        pfVar22[1] = (float)(auVar17._0_4_ >> 0x18) * fVar60;
        pfVar22[2] = (float)(auVar57._8_4_ >> 0x18) * fVar60;
        pfVar22[3] = (float)(auVar58._12_4_ >> 0x18) * fVar60;
      }
      else {
        lVar21 = 4;
        pfVar22 = (float *)(param_2 + 8 + lVar23 * 4);
        do {
          pfVar22[-2] = (float)(int)pcVar20[-2] * fVar60;
          pfVar22[-1] = (float)(int)pcVar20[-1] * fVar60;
          *pfVar22 = (float)(int)*pcVar20 * fVar60;
          pfVar22[1] = (float)(int)pcVar20[1] * fVar60;
          lVar21 = lVar21 + -1;
          pfVar22 = pfVar22 + 4;
          pcVar20 = pcVar20 + 4;
        } while (lVar21 != 0);
      }
      iVar25 = iVar25 + 0x10;
      lVar23 = lVar23 + 0x10;
      lVar29 = lVar29 + 1;
    } while (lVar29 < param_5);
  }
  if (iVar25 < 0x400) {
    memset((void *)(param_2 + (longlong)iVar25 * 4),0,(longlong)(0x400 - iVar25) << 2);
  }
  return;
}

// FUN_14f8c9130 @ 14f8c9130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f8c9130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,uint param_7)

{
  undefined1 auStack_78 [32];
  uint *local_58;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xd2) == '\0') {
    local_58 = (uint *)param_6;
    FUN_14f8ca6e0(param_1,param_3,param_7,param_5);
    local_50 = param_6;
    local_58 = (uint *)CONCAT44(local_58._4_4_,param_5);
    FUN_14f8c8be0(param_1,param_2,param_3,param_4);
  }
  else {
    local_48 = param_7;
    local_40 = param_7 ^ 0x55555555;
    local_58 = &local_48;
    local_44 = (uint)((ulonglong)(param_7 + 5000) * -0x3b314601e57a13ad >> 0x21);
    local_3c = local_44 ^ 0x55555555;
    UERAradaudio_sse4_dequantize_long_block_replace_0_with_random_8x8_Nx16_
              (param_2,param_3,param_4,param_5);
  }
  return;
}

// FUN_14f8c9240 @ 14f8c9240

void FUN_14f8c9240(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  if (*(char *)(param_1 + 0xd2) != '\0') {
    UERAradaudio_sse4_dequantize_short_block_sse4_();
    return;
  }
  FUN_14f8cb260(param_2,param_3,param_4,param_5,param_6);
  return;
}

// FUN_14f8c9290 @ 14f8c9290

void FUN_14f8c9290(longlong param_1,void *param_2,int param_3,ulonglong *param_4,longlong param_5,
                  int *param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0xd1) == '\0') {
    iVar4 = *param_6;
    uVar5 = (ulonglong)iVar4;
    memset(param_2,0,(longlong)param_3);
    if (0 < param_3) {
      lVar7 = 0;
      uVar8 = (ulonglong)((param_3 - 1U >> 6) + 1);
      uVar6 = uVar5;
      do {
        for (uVar3 = *param_4; iVar4 = (int)uVar5, uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
          puVar1 = (undefined1 *)(param_5 + uVar6);
          uVar5 = (ulonglong)(iVar4 + 1);
          lVar2 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
            }
          }
          uVar6 = uVar6 + 1;
          *(undefined1 *)(lVar2 + lVar7 + (longlong)param_2) = *puVar1;
        }
        lVar7 = lVar7 + 0x40;
        uVar8 = uVar8 - 1;
        param_4 = param_4 + 1;
      } while (uVar8 != 0);
    }
    *param_6 = iVar4;
    return;
  }
  UERAradaudio_ssse3_distribute_bitflag_coefficients_multiple16_
            (*(undefined8 *)(param_1 + 0xd0),param_2,param_3);
  return;
}

// FUN_14f8c9360 @ 14f8c9360

undefined8
FUN_14f8c9360(longlong param_1,void *param_2,int param_3,longlong param_4,int *param_5,
             longlong param_6,int *param_7,ulonglong *param_8,int param_9)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  size_t sVar5;
  size_t _Size;
  undefined1 *puVar6;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res20;
  
  _Size = (size_t)param_9;
  sVar5 = 0;
  if (param_9 != 0) {
    if (*(char *)(param_1 + 0xd1) == '\0') {
      iVar7 = *param_7;
      uVar8 = (ulonglong)iVar7;
      memset(param_2,0,_Size);
      if (0 < param_9) {
        uVar11 = (ulonglong)((param_9 - 1U >> 6) + 1);
        uVar10 = uVar8;
        do {
          for (uVar4 = *param_8; iVar7 = (int)uVar8, uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
            puVar6 = (undefined1 *)(param_6 + uVar10);
            uVar8 = (ulonglong)(iVar7 + 1);
            lVar3 = 0;
            if (uVar4 != 0) {
              for (; (uVar4 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
              }
            }
            uVar10 = uVar10 + 1;
            *(undefined1 *)(lVar3 + sVar5 + (longlong)param_2) = *puVar6;
          }
          sVar5 = sVar5 + 0x40;
          uVar11 = uVar11 - 1;
          param_8 = param_8 + 1;
        } while (uVar11 != 0);
      }
      *param_7 = iVar7;
      sVar5 = _Size;
    }
    else {
      UERAradaudio_ssse3_distribute_bitflag_coefficients_multiple16_
                (*(undefined8 *)(param_1 + 0xd0),param_2,param_9,param_8,param_6,param_7);
      sVar5 = _Size;
    }
  }
  puVar6 = (undefined1 *)(*param_7 + param_6);
  pbVar9 = (byte *)(*param_5 + param_4);
  memset((void *)(sVar5 + (longlong)param_2),0,(longlong)param_3 - sVar5);
  bVar1 = *pbVar9;
  do {
    pbVar9 = pbVar9 + 1;
    if (bVar1 == 0xff) {
      local_res20 = (int)param_4;
      *param_5 = (int)pbVar9 - local_res20;
      *param_7 = (int)puVar6 - (int)param_6;
      return 1;
    }
    sVar5 = sVar5 + bVar1;
    if (bVar1 < 0xf0) {
      if ((longlong)param_3 <= (longlong)sVar5) {
        return 0;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      *(undefined1 *)(sVar5 + (longlong)param_2) = uVar2;
      sVar5 = sVar5 + 1;
    }
    bVar1 = *pbVar9;
  } while( true );
}

// FUN_14f8c94f0 @ 14f8c94f0

undefined8
FUN_14f8c94f0(longlong param_1,char *param_2,int param_3,char *param_4,char *param_5,
             longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if ((0xf < param_6 - (longlong)param_5) && (*(char *)(param_1 + 0xd0) != '\0')) {
    uVar2 = UERAradaudio_sse2_expand_coefficients_excess_read15_(param_2,param_3,param_4);
    return uVar2;
  }
  pcVar3 = param_2;
  if (0 < param_3) {
    do {
      if (*pcVar3 == '\0') {
        if (param_4 == param_5) {
          return 0;
        }
        cVar1 = *param_4;
        param_4 = param_4 + 1;
      }
      else {
        cVar1 = *pcVar3 + -8;
      }
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while ((longlong)pcVar3 - (longlong)param_2 < (longlong)param_3);
  }
  return 1;
}

// FUN_14f8c9570 @ 14f8c9570

ulonglong * FUN_14f8c9570(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0xd0) != '\0') {
    puVar2 = (ulonglong *)UERAradaudio_sse2_find_next_coarse_run_excess16_(param_2,param_3);
    return puVar2;
  }
  if (param_2 < param_3) {
    while( true ) {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = ~((uVar3 & 0x7f7f7f7f7f7f7f7f) + 0x1010101010101010 & uVar3) &
              ((uVar3 & 0x7f7f7f7f7f7f7f7f) + 0x4444444444444444 | uVar3) & 0x8080808080808080;
      if (uVar3 != 0) break;
      if (param_3 <= param_2) {
        return param_2;
      }
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    param_2 = (ulonglong *)((longlong)param_2 + ((uVar1 >> 3) - 8));
  }
  return param_2;
}

// FUN_14f8c9630 @ 14f8c9630

void FUN_14f8c9630(ulonglong *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  
  puVar18 = (undefined1 *)*param_1;
  puVar26 = (ulonglong *)param_1[2];
  puVar17 = (ulonglong *)param_1[4];
  if ((0xe < (longlong)(param_1[1] - (longlong)puVar18)) &&
     (8 < (longlong)(param_1[3] - (longlong)puVar17))) {
    puVar23 = (undefined1 *)(param_1[1] - 0xe);
    uVar19 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
    puVar25 = (ulonglong *)(param_1[3] - 8);
    uVar21 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
    uVar22 = (uint)param_1[5];
    uVar20 = (ulonglong)uVar22;
    uVar29 = *(uint *)((longlong)param_1 + 0x2c);
    uVar24 = (ulonglong)uVar29;
    uVar27 = (ulonglong)(uint)param_1[7];
    uVar30 = (uint)param_1[6];
    uVar28 = (ulonglong)uVar30;
    if (puVar18 < puVar23) {
      do {
        if ((puVar17 < puVar26) || (puVar25 < puVar17)) break;
        uVar16 = *puVar25;
        uVar20 = *puVar26 << ((byte)uVar19 & 0x3f) | uVar20;
        puVar26 = (ulonglong *)((longlong)puVar26 + (0x3f - uVar19 >> 3));
        uVar24 = (uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                  (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                  (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                  (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38) << ((byte)uVar27 & 0x3f) | uVar24;
        puVar25 = (ulonglong *)((longlong)puVar25 - (0x3f - uVar27 >> 3));
        uVar28 = *puVar17 << ((byte)uVar21 & 0x3f) | uVar28;
        puVar17 = (ulonglong *)((longlong)puVar17 + (0x3f - uVar21 >> 3));
        uVar1 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar1 & 0x3f);
        *puVar18 = (char)(uVar1 >> 8);
        uVar2 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar2 & 0x3f);
        puVar18[1] = (char)(uVar2 >> 8);
        uVar3 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar3 & 0x3f);
        puVar18[2] = (char)(uVar3 >> 8);
        uVar4 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar4 & 0x3f);
        puVar18[3] = (char)(uVar4 >> 8);
        uVar5 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar5 & 0x3f);
        puVar18[4] = (char)(uVar5 >> 8);
        uVar6 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar6 & 0x3f);
        puVar18[5] = (char)(uVar6 >> 8);
        uVar7 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar7 & 0x3f);
        puVar18[6] = (char)(uVar7 >> 8);
        uVar8 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar8 & 0x3f);
        puVar18[7] = (char)(uVar8 >> 8);
        uVar9 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar9 & 0x3f);
        puVar18[8] = (char)(uVar9 >> 8);
        uVar10 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar10 & 0x3f);
        puVar18[9] = (char)(uVar10 >> 8);
        uVar11 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar11 & 0x3f);
        puVar18[10] = (char)(uVar11 >> 8);
        uVar12 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar12 & 0x3f);
        puVar18[0xb] = (char)(uVar12 >> 8);
        uVar13 = *(ushort *)(param_2 + (ulonglong)((uint)uVar20 & 0x7ff) * 2);
        uVar20 = uVar20 >> ((byte)uVar13 & 0x3f);
        puVar18[0xc] = (char)(uVar13 >> 8);
        uVar14 = *(ushort *)(param_2 + (ulonglong)((uint)uVar24 & 0x7ff) * 2);
        uVar24 = uVar24 >> ((byte)uVar14 & 0x3f);
        puVar18[0xd] = (char)(uVar14 >> 8);
        uVar15 = *(ushort *)(param_2 + (ulonglong)((uint)uVar28 & 0x7ff) * 2);
        uVar28 = uVar28 >> ((byte)uVar15 & 0x3f);
        puVar18[0xe] = (char)(uVar15 >> 8);
        puVar18 = puVar18 + 0xf;
        uVar19 = (ulonglong)
                 (((((((uint)uVar19 | 0xfffffff8) - (uint)uVar1) - (uint)uVar4) - (uint)uVar7) -
                  (uint)uVar10) - (uint)uVar13 & 0x3f);
        uVar27 = (ulonglong)
                 (((((((uint)uVar27 | 0xfffffff8) - (uint)uVar2) - (uint)uVar5) - (uint)uVar8) -
                  (uint)uVar11) - (uint)uVar14 & 0x3f);
        uVar21 = (ulonglong)
                 (((((((uint)uVar21 | 0xfffffff8) - (uint)uVar3) - (uint)uVar6) - (uint)uVar9) -
                  (uint)uVar12) - (uint)uVar15 & 0x3f);
      } while (puVar18 < puVar23);
      uVar30 = (uint)uVar28;
      uVar29 = (uint)uVar24;
      uVar22 = (uint)uVar20;
    }
    *param_1 = (ulonglong)puVar18;
    *(uint *)((longlong)param_1 + 0x34) = (uint)uVar19 & 7;
    *(uint *)(param_1 + 5) = uVar22 & 0xff;
    param_1[2] = (longlong)puVar26 - (uVar19 >> 3);
    *(uint *)(param_1 + 7) = (uint)uVar27 & 7;
    param_1[3] = (uVar27 >> 3) + 8 + (longlong)puVar25;
    *(uint *)((longlong)param_1 + 0x2c) = uVar29 & 0xff;
    *(uint *)((longlong)param_1 + 0x3c) = (uint)uVar21 & 7;
    param_1[4] = (longlong)puVar17 - (uVar21 >> 3);
    *(uint *)(param_1 + 6) = uVar30 & 0xff;
  }
  FUN_14f8c9b10(param_1,param_2);
  return;
}

// FUN_14f8c9b10 @ 14f8c9b10

undefined8 FUN_14f8c9b10(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  
  puVar13 = (uint *)param_1[2];
  puVar14 = (uint *)param_1[4];
  puVar12 = (uint *)param_1[3];
  uVar11 = *(uint *)(param_1 + 5);
  uVar15 = *(uint *)((longlong)param_1 + 0x34);
  uVar18 = *(uint *)((longlong)param_1 + 0x2c);
  uVar17 = *(uint *)(param_1 + 7);
  uVar19 = *(uint *)(param_1 + 6);
  uVar10 = *(uint *)((longlong)param_1 + 0x3c);
  if (puVar13 <= puVar14) {
    pbVar5 = (byte *)param_1[1];
    pbVar6 = (byte *)*param_1;
    uVar9 = uVar15;
    if ((3 < (longlong)puVar12 - (longlong)puVar14) && (5 < (longlong)pbVar5 - (longlong)pbVar6)) {
      puVar12 = puVar12 + -1;
      for (; ((pbVar6 < pbVar5 + -5 && (puVar13 <= puVar14)) && (puVar14 <= puVar12));
          puVar14 = (uint *)((longlong)puVar14 + (ulonglong)(uVar9 >> 3))) {
        uVar11 = uVar11 | *puVar13 << ((byte)uVar15 & 0x1f);
        puVar13 = (uint *)((longlong)puVar13 + (ulonglong)(0x1f - uVar15 >> 3));
        uVar9 = *puVar12;
        uVar18 = uVar18 | (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18) << ((byte)uVar17 & 0x1f);
        puVar12 = (uint *)((longlong)puVar12 - (ulonglong)(0x1f - uVar17 >> 3));
        uVar19 = uVar19 | *puVar14 << ((byte)uVar10 & 0x1f);
        pbVar7 = (byte *)(param_2 + (ulonglong)(uVar11 & 0x7ff) * 2);
        uVar9 = 0x1f - uVar10;
        bVar1 = *pbVar7;
        uVar11 = uVar11 >> (bVar1 & 0x1f);
        *pbVar6 = pbVar7[1];
        uVar8 = (ulonglong)(uVar18 & 0x7ff);
        bVar2 = *(byte *)(param_2 + uVar8 * 2);
        uVar18 = uVar18 >> (bVar2 & 0x1f);
        pbVar6[1] = *(byte *)(param_2 + uVar8 * 2 + 1);
        uVar8 = (ulonglong)(uVar19 & 0x7ff);
        bVar3 = *(byte *)(param_2 + uVar8 * 2);
        uVar19 = uVar19 >> (bVar3 & 0x1f);
        pbVar6[2] = *(byte *)(param_2 + uVar8 * 2 + 1);
        uVar8 = (ulonglong)(uVar11 & 0x7ff);
        bVar4 = *(byte *)(param_2 + uVar8 * 2);
        uVar15 = ((uVar15 | 0x18) - (uint)bVar1) - (uint)bVar4;
        uVar11 = uVar11 >> (bVar4 & 0x1f);
        pbVar6[3] = *(byte *)(param_2 + uVar8 * 2 + 1);
        uVar8 = (ulonglong)(uVar18 & 0x7ff);
        bVar1 = *(byte *)(param_2 + uVar8 * 2);
        uVar17 = ((uVar17 | 0x18) - (uint)bVar2) - (uint)bVar1;
        uVar18 = uVar18 >> (bVar1 & 0x1f);
        pbVar6[4] = *(byte *)(param_2 + uVar8 * 2 + 1);
        pbVar7 = (byte *)(param_2 + (ulonglong)(uVar19 & 0x7ff) * 2);
        bVar1 = *pbVar7;
        uVar10 = ((uVar10 | 0x18) - (uint)bVar3) - (uint)bVar1;
        uVar19 = uVar19 >> (bVar1 & 0x1f);
        pbVar6[5] = pbVar7[1];
        pbVar6 = pbVar6 + 6;
      }
      uVar9 = uVar15 & 7;
      puVar13 = (uint *)((longlong)puVar13 - (ulonglong)(uVar15 >> 3));
      uVar15 = uVar17 >> 3;
      uVar17 = uVar17 & 7;
      puVar12 = (uint *)((longlong)puVar12 + (ulonglong)uVar15 + 4);
      puVar14 = (uint *)((longlong)puVar14 - (ulonglong)(uVar10 >> 3));
      uVar10 = uVar10 & 7;
    }
    while (bVar20 = pbVar6 == pbVar5, pbVar6 < pbVar5) {
      if ((longlong)puVar14 - (longlong)puVar13 < 2) {
        if ((longlong)puVar14 - (longlong)puVar13 == 1) {
          uVar15 = (uint)(byte)*puVar13;
          goto LAB_14f8c9d46;
        }
      }
      else {
        uVar15 = (uint)(ushort)*puVar13;
LAB_14f8c9d46:
        uVar11 = uVar11 | uVar15 << ((byte)uVar9 & 0x1f);
      }
      uVar15 = uVar11 & 0x7ff;
      bVar1 = *(byte *)(param_2 + (ulonglong)uVar15 * 2);
      uVar16 = uVar9 - bVar1;
      uVar11 = uVar11 >> (bVar1 & 0x1f);
      uVar9 = uVar16 & 7;
      *pbVar6 = *(byte *)(param_2 + (ulonglong)uVar15 * 2 + 1);
      puVar13 = (uint *)((longlong)puVar13 + (ulonglong)(7 - uVar16 >> 3));
      pbVar7 = pbVar6 + 1;
      bVar20 = pbVar7 == pbVar5;
      if (pbVar5 <= pbVar7) break;
      if ((longlong)puVar12 - (longlong)puVar14 < 2) {
        if ((longlong)puVar12 - (longlong)puVar14 == 1) {
          uVar18 = uVar18 | (uint)(byte)*puVar14 << ((byte)uVar17 & 0x1f);
          uVar19 = uVar19 | (uint)(byte)*puVar14 << ((byte)uVar10 & 0x1f);
        }
      }
      else {
        uVar18 = uVar18 | (uint)(ushort)(*(ushort *)((longlong)puVar12 + -2) >> 8 |
                                        *(ushort *)((longlong)puVar12 + -2) << 8) <<
                          ((byte)uVar17 & 0x1f);
        uVar19 = uVar19 | (uint)(ushort)*puVar14 << ((byte)uVar10 & 0x1f);
      }
      uVar15 = uVar18 & 0x7ff;
      bVar1 = *(byte *)(param_2 + (ulonglong)uVar15 * 2);
      uVar16 = uVar17 - bVar1;
      uVar18 = uVar18 >> (bVar1 & 0x1f);
      uVar17 = uVar16 & 7;
      *pbVar7 = *(byte *)(param_2 + (ulonglong)uVar15 * 2 + 1);
      puVar12 = (uint *)((longlong)puVar12 - (ulonglong)(7 - uVar16 >> 3));
      pbVar7 = pbVar6 + 2;
      bVar20 = pbVar7 == pbVar5;
      if (pbVar5 <= pbVar7) break;
      uVar15 = uVar19 & 0x7ff;
      bVar1 = *(byte *)(param_2 + (ulonglong)uVar15 * 2);
      uVar16 = uVar10 - bVar1;
      uVar19 = uVar19 >> (bVar1 & 0x1f);
      uVar10 = uVar16 & 7;
      *pbVar7 = *(byte *)(param_2 + (ulonglong)uVar15 * 2 + 1);
      puVar14 = (uint *)((longlong)puVar14 + (ulonglong)(7 - uVar16 >> 3));
      pbVar6 = pbVar6 + 3;
      if (puVar14 < puVar13) {
        return 0;
      }
      if (puVar12 < puVar14) {
        return 0;
      }
    }
    if (bVar20) {
      param_1[2] = puVar13;
      *(uint *)(param_1 + 5) = uVar11;
      *(uint *)((longlong)param_1 + 0x34) = uVar9;
      param_1[3] = puVar12;
      *(uint *)((longlong)param_1 + 0x2c) = uVar18;
      *(uint *)(param_1 + 7) = uVar17;
      param_1[4] = puVar14;
      *(uint *)(param_1 + 6) = uVar19;
      *(uint *)((longlong)param_1 + 0x3c) = uVar10;
      return 1;
    }
  }
  return 0;
}

// FUN_14f8c9f50 @ 14f8c9f50

ulonglong FUN_14f8c9f50(byte *param_1,longlong param_2,undefined4 *param_3,ulonglong param_4)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  
  if (3 < param_4) {
    bVar2 = *param_1;
    uVar13 = (ulonglong)bVar2;
    iVar7 = 1;
    uVar4 = 1;
    if (bVar2 == 0x60) {
      return 0xfffffffc;
    }
    uVar5 = (bVar2 >> 1 & 0x5555) + (bVar2 & 0x5555);
    uVar5 = (uVar5 >> 2 & 0x3333) + (uVar5 & 0x3333);
    if (((char)(uVar5 >> 4) + (char)uVar5 & 1U) == 0) {
      return 0xfffffffd;
    }
    if ((char)bVar2 < '\0') {
      uVar4 = 2;
      uVar13 = (ulonglong)CONCAT11(param_1[1],bVar2);
    }
    uVar11 = (ulonglong)uVar4;
    if ((ulonglong)((uVar13 & 0x4000) != 0) +
        ((uVar13 & 0x2000) != 0) + uVar11 +
        (ulonglong)((uint)(uVar13 >> 0xe) & 2) + (ulonglong)((uVar13 & 0x1000) != 0) + 3 <= param_4)
    {
      param_3[3] = (uint)(uVar13 >> 2) & 1;
      iVar6 = 1;
      uVar5 = (uint)(uVar13 >> 1) & 1;
      param_3[2] = uVar5;
      param_3[7] = (uint)(uVar13 >> 5) & 1;
      uVar8 = ((uVar13 & 8) != 0) + 1;
      param_3[5] = uVar8;
      *param_3 = (int)(uVar13 >> 0xf);
      param_3[8] = (uint)(uVar13 >> 6) & 1;
      param_3[10] = (uint)(uVar13 >> 8) & 3;
      param_3[6] = (uint)(uVar13 >> 10) & 1;
      param_3[4] = (uint)(uVar13 >> 0xb) & 1;
      param_3[9] = (uint)uVar13 >> 4 & 1;
      if ((uVar13 & 0x4000) == 0) {
        uVar12 = (ushort)param_1[uVar11];
        iVar3 = iVar6;
      }
      else {
        uVar12 = *(ushort *)(param_1 + uVar11);
        if (uVar12 < 0x100) {
          return 0xfffffffd;
        }
        iVar3 = 2;
      }
      uVar4 = iVar3 + uVar4;
      if ((uVar13 & 0x1000) == 0) {
        uVar9 = (ushort)param_1[uVar4];
      }
      else {
        uVar9 = *(ushort *)(param_1 + uVar4);
        if (uVar9 < 0x100) {
          return 0xfffffffd;
        }
        iVar6 = 2;
      }
      uVar4 = uVar4 + iVar6;
      if ((uVar13 & 0x2000) == 0) {
        uVar10 = (ushort)param_1[uVar4];
      }
      else {
        uVar10 = *(ushort *)(param_1 + uVar4);
        if (uVar10 < 0x100) {
          return 0xfffffffd;
        }
        iVar7 = 2;
      }
      uVar11 = (ulonglong)(uVar4 + iVar7);
      if (uVar13 >> 0xf != 0) {
        puVar1 = (ushort *)(param_1 + uVar11);
        uVar11 = (ulonglong)(uVar4 + iVar7 + 2);
        param_3[0xe] = (uint)*puVar1;
      }
      param_3[0xb] = (uint)(ushort)(uVar12 + *(short *)(param_2 +
                                                       ((ulonglong)uVar5 * 3 + (ulonglong)uVar8) * 2
                                                       ));
      param_3[0xc] = (uint)uVar9;
      param_3[0xd] = (uint)uVar10;
      return uVar11;
    }
  }
  return 0xfffffffe;
}

// FUN_14f8ca1a0 @ 14f8ca1a0

void * FUN_14f8ca1a0(longlong param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  int iVar3;
  
  if (0x21f < param_3) {
    memset(param_2,0,0x220);
    iVar3 = 0;
    uVar1 = (longlong)param_2 + 0x23fU & 0xffffffffffffffe0;
    if (0 < *(int *)(param_1 + 4)) {
      puVar2 = (ulonglong *)((longlong)param_2 + 0x208);
      do {
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
        uVar1 = uVar1 + 0x400;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    if (uVar1 - (longlong)param_2 <= param_3) {
      *(undefined4 *)((longlong)param_2 + 8) = 1;
      return param_2;
    }
  }
  return (void *)0x0;
}

// FUN_14f8ca240 @ 14f8ca240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f8ca240(longlong param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  char local_18 [4];
  char local_14;
  char local_13;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)local_18;
  pcVar7 = (char *)(param_1 + 0x19);
  lVar8 = 3;
  do {
    iVar6 = 0;
    bVar4 = 0;
    if (pcVar7[-0x19] != '\0') {
      pbVar3 = (byte *)(pcVar7 + -0x18);
      do {
        bVar4 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        iVar6 = iVar6 + 1;
        pcVar7[bVar4] = pcVar7[bVar4] + '\x01';
        bVar4 = pcVar7[-0x19];
      } while (iVar6 < (int)(uint)bVar4);
    }
    iVar6 = 0;
    local_18[1] = *pcVar7;
    local_18[2] = *pcVar7 + pcVar7[1];
    local_18[3] = local_18[2] + pcVar7[2];
    local_14 = local_18[3] + pcVar7[3];
    local_18[0] = '\0';
    local_13 = local_14 + pcVar7[4];
    bVar2 = 0;
    if (bVar4 != 0) {
      pcVar5 = pcVar7 + 6;
      do {
        iVar6 = iVar6 + 1;
        cVar1 = local_18[(byte)pcVar5[-0x1e]];
        *pcVar5 = cVar1;
        local_18[(byte)pcVar5[-0x1e]] = cVar1 + '\x01';
        bVar2 = pcVar7[-0x19];
        pcVar5 = pcVar5 + 1;
      } while (iVar6 < (int)(uint)bVar2);
    }
    iVar6 = 0;
    local_18[1] = *pcVar7 * '\x02';
    local_18[2] = pcVar7[1] * '\x02' + *pcVar7 * '\x02';
    local_18[0] = '\0';
    local_18[3] = pcVar7[2] * '\x02' + local_18[2];
    local_14 = pcVar7[3] * '\x02' + local_18[3];
    local_13 = pcVar7[4] * '\x02' + local_14;
    bVar4 = 0;
    if (bVar2 != 0) {
      pcVar5 = pcVar7 + 0x12;
      do {
        iVar6 = iVar6 + 1;
        cVar1 = local_18[(byte)pcVar5[-0x2a]];
        *pcVar5 = cVar1;
        local_18[(byte)pcVar5[-0x2a]] = cVar1 + '\x01';
        bVar4 = pcVar7[-0x19];
        pcVar5 = pcVar5 + 1;
      } while (iVar6 < (int)(uint)bVar4);
    }
    iVar6 = 0;
    if (bVar4 != 0) {
      pcVar5 = pcVar7 + 0x1e;
      do {
        iVar6 = iVar6 + 1;
        cVar1 = local_18[(byte)pcVar5[-0x36]];
        *pcVar5 = cVar1;
        local_18[(byte)pcVar5[-0x36]] = cVar1 + '\x01';
        pcVar5 = pcVar5 + 1;
      } while (iVar6 < (int)(uint)(byte)pcVar7[-0x19]);
    }
    pcVar7 = pcVar7 + 0x43;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

// FUN_14f8ca3d0 @ 14f8ca3d0

undefined8 FUN_14f8ca3d0(longlong *param_1,ulonglong param_2,uint *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint *puVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  
  if (((7 < param_2) && (uVar12 = 0, *param_1 == DAT_15352bb40)) && (0x59 < param_2)) {
    if (*(ushort *)((longlong)param_1 + 0xc) != 0) {
      puVar3 = &DAT_154dfb490;
      uVar6 = uVar12;
      do {
        if (*puVar3 == (uint)*(ushort *)((longlong)param_1 + 0xc)) {
          param_3[2] = uVar6;
          if ((int)uVar6 < 0) {
            return 0;
          }
          param_3[3] = (uint)*(ushort *)((longlong)param_1 + 0xc);
          lVar10 = 6;
          param_3[1] = (uint)*(byte *)(param_1 + 2);
          *param_3 = *(uint *)(param_1 + 1);
          *(undefined2 *)(param_3 + 0x28) = *(undefined2 *)((longlong)param_1 + 0xe);
          uVar2 = *(undefined8 *)((longlong)param_1 + 0x32);
          *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)((longlong)param_1 + 0x2a);
          *(undefined8 *)(param_3 + 0x1e) = uVar2;
          *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x3a);
          uVar2 = *(undefined8 *)((longlong)param_1 + 0x4a);
          *(undefined8 *)(param_3 + 4) = *(undefined8 *)((longlong)param_1 + 0x42);
          *(undefined8 *)(param_3 + 6) = uVar2;
          *(undefined8 *)(param_3 + 8) = *(undefined8 *)((longlong)param_1 + 0x52);
          puVar7 = (undefined1 *)((longlong)param_1 + 0x43);
          puVar8 = (undefined1 *)((longlong)param_3 + 0x11);
          do {
            puVar8[-1] = puVar7[-1];
            *puVar8 = *puVar7;
            puVar8[0x2f] = puVar7[0xb];
            puVar8[0x30] = puVar7[0xc];
            puVar8[1] = puVar7[-1];
            puVar8[2] = *puVar7;
            puVar8[0x31] = puVar7[0xb];
            puVar8[0x32] = puVar7[0xc];
            puVar8[3] = puVar7[-1];
            puVar8[4] = *puVar7;
            puVar8[0x33] = puVar7[0xb];
            puVar8[0x34] = puVar7[0xc];
            puVar8[5] = puVar7[-1];
            puVar8[6] = *puVar7;
            puVar8[0x35] = puVar7[0xb];
            puVar8[0x36] = puVar7[0xc];
            lVar10 = lVar10 + -1;
            puVar7 = puVar7 + 2;
            puVar8 = puVar8 + 8;
          } while (lVar10 != 0);
          lVar10 = 5;
          *(byte *)((longlong)param_3 + 0xa2) = *(byte *)((longlong)param_1 + 0x11) & 0xf;
          *(byte *)((longlong)param_3 + 0xa3) = *(byte *)((longlong)param_1 + 0x11) >> 4;
          *(byte *)(param_3 + 0x29) = *(byte *)((longlong)param_1 + 0x12) & 0xf;
          *(byte *)((longlong)param_3 + 0xa5) = *(byte *)((longlong)param_1 + 0x12) >> 4;
          pbVar4 = (byte *)((longlong)param_3 + 0xca);
          do {
            bVar1 = pbVar4[(longlong)param_1 + (-0xb7 - (longlong)param_3)];
            *pbVar4 = bVar1 & 3;
            pbVar4[5] = bVar1 >> 2 & 3;
            pbVar4[10] = bVar1 >> 4 & 3;
            pbVar4[0xf] = bVar1 >> 6;
            lVar10 = lVar10 + -1;
            pbVar4 = pbVar4 + 1;
          } while (lVar10 != 0);
          lVar10 = 3;
          pbVar4 = (byte *)((longlong)param_3 + 0xa7);
          pbVar9 = (byte *)((longlong)param_1 + 0x19);
          do {
            bVar1 = pbVar9[-1];
            pbVar4[-1] = bVar1 & 0xf;
            *pbVar4 = bVar1 >> 4;
            bVar1 = *pbVar9;
            pbVar4[1] = bVar1 & 0xf;
            pbVar4[2] = bVar1 >> 4;
            bVar1 = pbVar9[1];
            pbVar4[3] = bVar1 & 0xf;
            pbVar4[4] = bVar1 >> 4;
            bVar1 = pbVar9[2];
            pbVar4[5] = bVar1 & 0xf;
            pbVar4[6] = bVar1 >> 4;
            bVar1 = pbVar9[3];
            pbVar4[7] = bVar1 & 0xf;
            pbVar4[8] = bVar1 >> 4;
            bVar1 = pbVar9[4];
            pbVar4[9] = bVar1 & 0xf;
            pbVar4[10] = bVar1 >> 4;
            lVar10 = lVar10 + -1;
            pbVar4 = pbVar4 + 0xc;
            pbVar9 = pbVar9 + 6;
          } while (lVar10 != 0);
          lVar10 = (longlong)(int)param_3[2] * 0x49c;
          if (0 < *(int *)(&DAT_154dfb4a4 + lVar10)) {
            piVar11 = (int *)(&DAT_154dfb51c + lVar10);
            puVar3 = param_3 + 0x22;
            do {
              if (*piVar11 == 1) {
                cVar5 = -1;
              }
              else {
                cVar5 = '\f' - (char)((longlong)(ulonglong)(byte)puVar3[-6] / (longlong)*piVar11);
              }
              *(char *)puVar3 = cVar5;
              uVar12 = uVar12 + 1;
              puVar3 = (uint *)((longlong)puVar3 + 1);
              piVar11 = piVar11 + 1;
            } while ((int)uVar12 < *(int *)(&DAT_154dfb4a4 + lVar10));
          }
          if (1 < param_3[1] - 1) {
            return 0;
          }
          if (1 < *param_3) {
            return 0;
          }
          return 0x80;
        }
        uVar6 = uVar6 + 1;
        puVar3 = puVar3 + 1;
      } while ((longlong)puVar3 < 0x154dfb4a0);
    }
    param_3[2] = 0xffffffff;
  }
  return 0;
}

// FUN_14f8ca6e0 @ 14f8ca6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f8ca6e0(longlong param_1,longlong param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)(param_3 + 5000) * -0x3b314601e57a13ad;
  local_40 = param_3 ^ 0x55555555;
  uVar5 = uVar4 >> 0x21;
  local_44 = (uint)(uVar4 >> 0x21);
  local_3c = local_44 ^ 0x55555555;
  if (*(char *)(param_1 + 0xd2) == '\0') {
    iVar8 = 0;
    iVar6 = 0;
    if (*param_5 == 4) {
      puVar2 = (undefined1 *)(param_2 + 2);
      piVar10 = param_5;
      do {
        if (*(longlong *)(puVar2 + -2) == 0) {
          puVar2[-2] = (&DAT_154e13c10)[param_3 >> 4 & 0xf];
          puVar2[-1] = (&DAT_154e13c10)[param_3 >> 0xc & 0xf];
          *puVar2 = (&DAT_154e13c10)[param_3 >> 0x14 & 0xf];
          puVar2[1] = (&DAT_154e13c10)[param_3 >> 0x1c];
          param_3 = param_3 * 0x7ff8a3ed + 0x2aa01d31;
        }
        piVar10 = piVar10 + 1;
        iVar8 = iVar8 + 4;
        puVar2 = puVar2 + 4;
        iVar6 = iVar6 + 1;
      } while (*piVar10 == 4);
    }
    piVar10 = param_5 + iVar6;
    if (param_5[iVar6] == 8) {
      puVar2 = (undefined1 *)((longlong)iVar8 + 2 + param_2);
      do {
        if (*(longlong *)(puVar2 + -2) == 0) {
          puVar2[-2] = (&DAT_154e13c10)[param_3 >> 4 & 0xf];
          puVar2[-1] = (&DAT_154e13c10)[param_3 >> 0xc & 0xf];
          *puVar2 = (&DAT_154e13c10)[param_3 >> 0x14 & 0xf];
          puVar2[1] = (&DAT_154e13c10)[param_3 >> 0x1c];
          uVar1 = (uint)(uVar5 >> 4);
          uVar5 = (ulonglong)((int)uVar5 * 0x7ff8a3ed + 0x2aa01d31);
          puVar2[2] = (&DAT_154e13c10)[uVar1 & 0xf];
          puVar2[3] = (&DAT_154e13c10)[uVar1 >> 8 & 0xf];
          puVar2[4] = (&DAT_154e13c10)[uVar1 >> 0x10 & 0xf];
          puVar2[5] = (&DAT_154e13c10)[uVar1 >> 0x18];
          param_3 = param_3 * 0x7ff8a3ed + 0x2aa01d31;
        }
        piVar10 = piVar10 + 1;
        iVar8 = iVar8 + 8;
        puVar2 = puVar2 + 8;
        iVar6 = iVar6 + 1;
      } while (*piVar10 == 8);
    }
    if (iVar6 < param_4) {
      lVar3 = (longlong)iVar8;
      uVar4 = (ulonglong)(uint)(param_4 - iVar6);
      lVar7 = lVar3 + param_2;
      lVar9 = lVar7;
      do {
        if (*(longlong *)(lVar3 + 8 + param_2) == 0 && *(longlong *)(lVar3 + param_2) == 0) {
          *(undefined *)(lVar3 + param_2) = (&DAT_154e13c10)[param_3 >> 4 & 0xf];
          *(undefined *)(lVar3 + 1 + param_2) = (&DAT_154e13c10)[param_3 >> 0xc & 0xf];
          *(undefined *)(lVar3 + 2 + param_2) = (&DAT_154e13c10)[param_3 >> 0x14 & 0xf];
          *(undefined *)(lVar3 + 3 + param_2) = (&DAT_154e13c10)[param_3 >> 0x1c];
          uVar1 = (uint)(uVar5 >> 4);
          uVar5 = (ulonglong)((int)uVar5 * 0x7ff8a3ed + 0x2aa01d31);
          *(undefined *)(lVar7 + 4) = (&DAT_154e13c10)[uVar1 & 0xf];
          *(undefined *)(lVar9 + 5) = (&DAT_154e13c10)[uVar1 >> 8 & 0xf];
          *(undefined *)(lVar3 + 6 + param_2) = (&DAT_154e13c10)[uVar1 >> 0x10 & 0xf];
          *(undefined *)(lVar3 + 7 + param_2) = (&DAT_154e13c10)[uVar1 >> 0x18];
          *(undefined *)(lVar3 + 8 + param_2) = (&DAT_154e13c10)[local_40 >> 4 & 0xf];
          *(undefined *)(lVar3 + 9 + param_2) = (&DAT_154e13c10)[local_40 >> 0xc & 0xf];
          *(undefined *)(lVar3 + 10 + param_2) = (&DAT_154e13c10)[local_40 >> 0x14 & 0xf];
          *(undefined *)(lVar3 + 0xb + param_2) = (&DAT_154e13c10)[local_40 >> 0x1c];
          *(undefined *)(lVar3 + 0xc + param_2) = (&DAT_154e13c10)[local_3c >> 4 & 0xf];
          *(undefined *)(lVar3 + 0xd + param_2) = (&DAT_154e13c10)[local_3c >> 0xc & 0xf];
          *(undefined *)(lVar3 + 0xe + param_2) = (&DAT_154e13c10)[local_3c >> 0x14 & 0xf];
          *(undefined *)(lVar3 + 0xf + param_2) = (&DAT_154e13c10)[local_3c >> 0x1c];
          param_3 = param_3 * 0x7ff8a3ed + 0x2aa01d31;
          local_40 = local_40 * 0x7ff8a3ed + 0x2aa01d31;
          local_3c = local_3c * 0x7ff8a3ed + 0x2aa01d31;
        }
        lVar3 = lVar3 + 0x10;
        lVar7 = lVar7 + 0x10;
        lVar9 = lVar9 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    local_48 = param_3;
    UERAradaudio_sse4_randomize_long_block_8x8_Nx16_(param_2,&local_48,param_4);
  }
  return;
}

// FUN_14f8caa90 @ 14f8caa90

void FUN_14f8caa90(char *param_1,uint param_2,int param_3,longlong param_4)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar11 = param_2 * 0x7ff8a3ed + 0x2aa01d31;
  if (*param_1 == '\0') {
    *param_1 = (&DAT_154e13c20)[param_2 >> 10 & 1];
  }
  if (param_1[1] == '\0') {
    param_1[1] = (&DAT_154e13c20)[param_2 >> 0xe & 1];
  }
  if (param_1[2] == '\0') {
    param_1[2] = (&DAT_154e13c20)[param_2 >> 0x12 & 1];
  }
  if (param_1[3] == '\0') {
    param_1[3] = (&DAT_154e13c20)[param_2 >> 0x16 & 1];
  }
  if (*(short *)(param_1 + 4) == 0) {
    uVar12 = uVar11 >> 0x14;
    uVar9 = uVar11 >> 0x18;
    uVar11 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[4] = (&DAT_154e13c20)[uVar12 & 0xf];
    param_1[5] = (&DAT_154e13c20)[uVar9 & 0xf];
  }
  if (*(short *)(param_1 + 6) == 0) {
    uVar12 = uVar11 >> 0x14;
    uVar9 = uVar11 >> 0x18;
    uVar11 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[6] = (&DAT_154e13c20)[uVar12 & 0xf];
    param_1[7] = (&DAT_154e13c20)[uVar9 & 0xf];
  }
  if (*(short *)(param_1 + 8) == 0) {
    uVar12 = uVar11 >> 0x14;
    uVar9 = uVar11 >> 0x18;
    uVar11 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[8] = (&DAT_154e13c20)[uVar12 & 0xf];
    param_1[9] = (&DAT_154e13c20)[uVar9 & 0xf];
  }
  if (*(short *)(param_1 + 10) == 0) {
    uVar12 = uVar11 >> 0x14;
    uVar9 = uVar11 >> 0x18;
    uVar11 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[10] = (&DAT_154e13c20)[uVar12 & 0xf];
    param_1[0xb] = (&DAT_154e13c20)[uVar9 & 0xf];
  }
  uVar12 = uVar11;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar12 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0xc] = (&DAT_154e13c20)[uVar11 >> 0xc & 0xf];
    param_1[0xd] = (&DAT_154e13c20)[uVar11 >> 0x10 & 0xf];
    param_1[0xe] = (&DAT_154e13c20)[uVar11 >> 0x14 & 0xf];
    param_1[0xf] = (&DAT_154e13c20)[uVar11 >> 0x18 & 0xf];
  }
  uVar11 = uVar12;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar11 = uVar12 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0x10] = (&DAT_154e13c20)[uVar12 >> 0xc & 0xf];
    param_1[0x11] = (&DAT_154e13c20)[uVar12 >> 0x10 & 0xf];
    param_1[0x12] = (&DAT_154e13c20)[uVar12 >> 0x14 & 0xf];
    param_1[0x13] = (&DAT_154e13c20)[uVar12 >> 0x18 & 0xf];
  }
  uVar12 = uVar11;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar12 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0x14] = (&DAT_154e13c20)[uVar11 >> 0xc & 0xf];
    param_1[0x15] = (&DAT_154e13c20)[uVar11 >> 0x10 & 0xf];
    param_1[0x16] = (&DAT_154e13c20)[uVar11 >> 0x14 & 0xf];
    param_1[0x17] = (&DAT_154e13c20)[uVar11 >> 0x18 & 0xf];
  }
  uVar11 = uVar12;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar11 = uVar12 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0x18] = (&DAT_154e13c20)[uVar12 >> 0xc & 0xf];
    param_1[0x19] = (&DAT_154e13c20)[uVar12 >> 0x10 & 0xf];
    param_1[0x1a] = (&DAT_154e13c20)[uVar12 >> 0x14 & 0xf];
    param_1[0x1b] = (&DAT_154e13c20)[uVar12 >> 0x18 & 0xf];
  }
  uVar12 = uVar11;
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar12 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
    param_1[0x1c] = (&DAT_154e13c20)[uVar11 >> 0xc & 0xf];
    param_1[0x1d] = (&DAT_154e13c20)[uVar11 >> 0x10 & 0xf];
    param_1[0x1e] = (&DAT_154e13c20)[uVar11 >> 0x14 & 0xf];
    param_1[0x1f] = (&DAT_154e13c20)[uVar11 >> 0x18 & 0xf];
  }
  iVar7 = 0x20;
  if (0xd < (longlong)param_3) {
    lVar5 = 0xd;
    do {
      iVar1 = *(int *)(param_4 + lVar5 * 4);
      lVar8 = (longlong)iVar1;
      uVar9 = 0;
      uVar11 = 0;
      if (iVar1 < 1) {
LAB_14f8cae39:
        iVar10 = 0;
        if (7 < iVar1) {
          iVar6 = 7;
          pcVar4 = param_1 + (longlong)iVar7 + 2;
          uVar11 = uVar12;
          do {
            iVar10 = iVar10 + 8;
            iVar6 = iVar6 + 8;
            uVar12 = uVar11 * 0x7ff8a3ed + 0x2aa01d31;
            pcVar4[-2] = (&DAT_154e13c20)[uVar11 & 0xf];
            pcVar4[-1] = (&DAT_154e13c20)[uVar11 >> 4 & 0xf];
            *pcVar4 = (&DAT_154e13c20)[uVar11 >> 8 & 0xf];
            pcVar4[1] = (&DAT_154e13c20)[uVar11 >> 0xc & 0xf];
            pcVar4[2] = (&DAT_154e13c20)[uVar11 >> 0x10 & 0xf];
            pcVar4[3] = (&DAT_154e13c20)[uVar11 >> 0x14 & 0xf];
            pcVar4[4] = (&DAT_154e13c20)[uVar11 >> 0x18 & 0xf];
            pcVar4[5] = (&DAT_154e13c20)[uVar11 >> 0x1c];
            pcVar4 = pcVar4 + 8;
            uVar11 = uVar12;
          } while (iVar6 < iVar1);
        }
        lVar3 = (longlong)iVar10;
        uVar13 = uVar12 * 0x7ff8a3ed + 0x2aa01d31;
        if (lVar3 < lVar8) {
          do {
            param_1[lVar3 + iVar7] = (&DAT_154e13c20)[uVar12 & 0xf];
            lVar3 = lVar3 + 1;
            uVar12 = uVar12 >> 4;
          } while (lVar3 < lVar8);
        }
      }
      else {
        puVar2 = (uint *)(param_1 + iVar7);
        lVar3 = (lVar8 - 1U >> 3) + 1;
        do {
          uVar9 = uVar9 | *puVar2;
          uVar11 = uVar11 | puVar2[1];
          puVar2 = puVar2 + 2;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        uVar13 = uVar12;
        if (uVar11 == 0 && uVar9 == 0) goto LAB_14f8cae39;
      }
      uVar12 = uVar13;
      iVar7 = iVar7 + *(int *)(param_4 + lVar5 * 4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_3);
  }
  return;
}

// FUN_14f8cafb0 @ 14f8cafb0

ulonglong FUN_14f8cafb0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined2 *puVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined2 local_res20;
  
  fVar6 = __real_4b400000;
  fVar15 = __real_46fffe00;
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_3f800000;
  param_4 = param_4 / 2;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    puVar7 = (undefined2 *)(param_2 + 4);
    lVar10 = (longlong)param_4;
    fVar16 = __real_3f800000;
    fVar17 = __real_3f800000;
    fVar18 = __real_3f800000;
    fVar19 = __real_3f800000;
    if (0 < param_4) {
      pfVar9 = (float *)(param_3 + 8);
      lVar8 = (lVar10 - 1U >> 2) + 1;
      puVar11 = puVar7;
      do {
        pfVar1 = pfVar9 + -2;
        fVar14 = pfVar9[-1];
        fVar2 = *pfVar9;
        fVar13 = (float)((uint)*pfVar1 & uVar5);
        fVar3 = pfVar9[1];
        if (fVar16 <= fVar13) {
          fVar16 = fVar13;
        }
        pfVar9 = pfVar9 + 4;
        local_res20 = SUB42(*pfVar1 * fVar15 + fVar6,0);
        fVar13 = (float)((uint)fVar14 & uVar5);
        if (fVar18 <= fVar13) {
          fVar18 = fVar13;
        }
        puVar11[-2] = local_res20;
        local_res20 = SUB42(fVar14 * fVar15 + fVar6,0);
        fVar14 = (float)((uint)fVar2 & uVar5);
        if (fVar17 <= fVar14) {
          fVar17 = fVar14;
        }
        puVar11[-1] = local_res20;
        local_res20 = SUB42(fVar2 * fVar15 + fVar6,0);
        fVar14 = (float)((uint)fVar3 & uVar5);
        *puVar11 = local_res20;
        if (fVar19 <= fVar14) {
          fVar19 = fVar14;
        }
        local_res20 = SUB42(fVar3 * fVar15 + fVar6,0);
        puVar11[1] = local_res20;
        puVar11 = puVar11 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (fVar17 <= fVar19) {
      fVar17 = fVar19;
    }
    if (fVar16 <= fVar18) {
      fVar16 = fVar18;
    }
    if (fVar16 <= fVar17) {
      fVar16 = fVar17;
    }
    if ((fVar4 < fVar16) && (fVar15 = fVar15 / fVar16, 0 < lVar10)) {
      pfVar9 = (float *)(param_3 + 8);
      lVar10 = (lVar10 - 1U >> 2) + 1;
      do {
        local_res20 = SUB42(fVar15 * pfVar9[-2] + fVar6,0);
        puVar7[-2] = local_res20;
        local_res20 = SUB42(fVar15 * pfVar9[-1] + fVar6,0);
        puVar7[-1] = local_res20;
        local_res20 = SUB42(fVar15 * *pfVar9 + fVar6,0);
        *puVar7 = local_res20;
        pfVar1 = pfVar9 + 1;
        pfVar9 = pfVar9 + 4;
        local_res20 = SUB42(fVar15 * *pfVar1 + fVar6,0);
        puVar7[1] = local_res20;
        puVar7 = puVar7 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    return (ulonglong)(uint)(fVar4 / fVar15);
  }
  if (*(char *)(param_1 + 0xd4) == '\0') {
    uVar12 = UERAradaudio_sse2_save_samples_(param_2,param_3,param_4);
    return uVar12;
  }
  uVar12 = UERAradaudio_avx2_save_samples_();
  return uVar12;
}

// FUN_14f8cb260 @ 14f8cb260

void FUN_14f8cb260(float *param_1,char *param_2,float *param_3,int param_4,longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  char *pcVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar7 = __real_1e3ce508;
  *param_1 = (float)(int)*param_2 * *param_3;
  param_1[1] = (float)(int)param_2[1] * param_3[1];
  param_1[2] = (float)(int)param_2[2] * param_3[2];
  param_1[3] = (float)(int)param_2[3] * param_3[3];
  fVar15 = (float)(int)param_2[4];
  fVar16 = (float)(int)param_2[5];
  fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar7;
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  fVar4 = param_3[4];
  param_1[5] = (fVar4 / fVar14) * fVar16;
  param_1[4] = (fVar4 / fVar14) * fVar15;
  fVar15 = (float)(int)param_2[6];
  fVar16 = (float)(int)param_2[7];
  fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar7;
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  fVar4 = param_3[5];
  param_1[6] = (fVar4 / fVar14) * fVar15;
  param_1[7] = (fVar4 / fVar14) * fVar16;
  fVar15 = (float)(int)param_2[8];
  fVar16 = (float)(int)param_2[9];
  fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar7;
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  fVar4 = param_3[6];
  param_1[8] = (fVar4 / fVar14) * fVar15;
  param_1[9] = (fVar4 / fVar14) * fVar16;
  fVar15 = (float)(int)param_2[10];
  fVar16 = (float)(int)param_2[0xb];
  fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar7;
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  fVar4 = param_3[7];
  param_1[10] = (fVar4 / fVar14) * fVar15;
  param_1[0xb] = (fVar4 / fVar14) * fVar16;
  fVar15 = (float)(int)param_2[0xc];
  fVar14 = fVar15 * fVar15 + fVar7 + (float)(int)param_2[0xd] * (float)(int)param_2[0xd] +
           (float)(int)param_2[0xe] * (float)(int)param_2[0xe] +
           (float)(int)param_2[0xf] * (float)(int)param_2[0xf];
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  fVar14 = param_3[8] / fVar14;
  param_1[0xc] = fVar15 * fVar14;
  param_1[0xd] = (float)(int)param_2[0xd] * fVar14;
  param_1[0xe] = (float)(int)param_2[0xe] * fVar14;
  param_1[0xf] = (float)(int)param_2[0xf] * fVar14;
  fVar15 = (float)(int)param_2[0x10];
  fVar14 = fVar15 * fVar15 + fVar7 + (float)(int)param_2[0x11] * (float)(int)param_2[0x11] +
           (float)(int)param_2[0x12] * (float)(int)param_2[0x12] +
           (float)(int)param_2[0x13] * (float)(int)param_2[0x13];
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  fVar14 = param_3[9] / fVar14;
  param_1[0x10] = fVar15 * fVar14;
  param_1[0x11] = (float)(int)param_2[0x11] * fVar14;
  param_1[0x12] = (float)(int)param_2[0x12] * fVar14;
  param_1[0x13] = (float)(int)param_2[0x13] * fVar14;
  fVar15 = (float)(int)param_2[0x14];
  fVar14 = fVar15 * fVar15 + fVar7 + (float)(int)param_2[0x15] * (float)(int)param_2[0x15] +
           (float)(int)param_2[0x16] * (float)(int)param_2[0x16] +
           (float)(int)param_2[0x17] * (float)(int)param_2[0x17];
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  fVar14 = param_3[10] / fVar14;
  param_1[0x14] = fVar15 * fVar14;
  param_1[0x15] = (float)(int)param_2[0x15] * fVar14;
  param_1[0x16] = (float)(int)param_2[0x16] * fVar14;
  param_1[0x17] = (float)(int)param_2[0x17] * fVar14;
  fVar15 = (float)(int)param_2[0x18];
  fVar14 = fVar15 * fVar15 + fVar7 + (float)(int)param_2[0x19] * (float)(int)param_2[0x19] +
           (float)(int)param_2[0x1a] * (float)(int)param_2[0x1a] +
           (float)(int)param_2[0x1b] * (float)(int)param_2[0x1b];
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  iVar11 = 0x1c;
  fVar14 = param_3[0xb] / fVar14;
  param_1[0x18] = fVar15 * fVar14;
  param_1[0x19] = (float)(int)param_2[0x19] * fVar14;
  param_1[0x1a] = (float)(int)param_2[0x1a] * fVar14;
  param_1[0x1b] = (float)(int)param_2[0x1b] * fVar14;
  if (0xc < (longlong)param_4) {
    pfVar12 = param_3 + 0xc;
    lVar13 = (longlong)param_4 + -0xc;
    do {
      iVar6 = *(int *)((longlong)pfVar12 + (param_5 - (longlong)param_3));
      if (0 < iVar6) {
        pcVar8 = param_2 + (longlong)iVar11 + 2;
        lVar9 = ((longlong)iVar6 - 1U >> 2) + 1;
        fVar14 = fVar7;
        do {
          pcVar1 = pcVar8 + -2;
          pcVar2 = pcVar8 + -1;
          cVar5 = *pcVar8;
          pcVar3 = pcVar8 + 1;
          pcVar8 = pcVar8 + 4;
          fVar14 = fVar14 + (float)(int)*pcVar1 * (float)(int)*pcVar1 +
                   (float)(int)*pcVar2 * (float)(int)*pcVar2 + (float)(int)cVar5 * (float)(int)cVar5
                   + (float)(int)*pcVar3 * (float)(int)*pcVar3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (fVar14 < 0.0) {
          fVar14 = sqrtf(fVar14);
        }
        else {
          fVar14 = SQRT(fVar14);
        }
        lVar9 = ((longlong)iVar6 - 1U >> 2) + 1;
        fVar14 = *pfVar12 / fVar14;
        pcVar8 = param_2 + (longlong)iVar11 + 2;
        pfVar10 = param_1 + (longlong)iVar11 + 2;
        do {
          pfVar10[-2] = (float)(int)pcVar8[-2] * fVar14;
          pfVar10[-1] = (float)(int)pcVar8[-1] * fVar14;
          *pfVar10 = (float)(int)*pcVar8 * fVar14;
          pfVar10[1] = (float)(int)pcVar8[1] * fVar14;
          lVar9 = lVar9 + -1;
          pcVar8 = pcVar8 + 4;
          pfVar10 = pfVar10 + 4;
        } while (lVar9 != 0);
      }
      iVar11 = iVar11 + iVar6;
      pfVar12 = pfVar12 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if (0x7f < iVar11) {
      return;
    }
  }
  memset(param_1 + iVar11,0,(longlong)(0x80 - iVar11) << 2);
  return;
}

// FUN_14f8cb940 @ 14f8cb940

void FUN_14f8cb940(longlong param_1,byte *param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_4;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    pbVar1 = param_2;
    if (0 < param_4) {
      do {
        *pbVar1 = *param_3 & 0xf;
        pbVar1[1] = *param_3 >> 4;
        lVar2 = lVar2 + -1;
        pbVar1 = pbVar1 + 2;
        param_3 = param_3 + 1;
      } while (lVar2 != 0);
    }
    pbVar1 = param_2 + param_4 * 2;
    pbVar1[0] = 1;
    pbVar1[1] = 1;
    pbVar1[2] = 1;
    pbVar1[3] = 1;
    pbVar1[4] = 1;
    pbVar1[5] = 1;
    pbVar1[6] = 1;
    pbVar1[7] = 1;
    param_2 = param_2 + (param_4 * 2 + 8);
    param_2[0] = 1;
    param_2[1] = 1;
    param_2[2] = 1;
    param_2[3] = 1;
    param_2[4] = 1;
    param_2[5] = 1;
    param_2[6] = 1;
    param_2[7] = 1;
    return;
  }
  UERAradaudio_sse2_unpack_nibbles_read_sentinel16_write_multiple32_
            (param_2,param_3,param_4,0x1111111111111111);
  return;
}

