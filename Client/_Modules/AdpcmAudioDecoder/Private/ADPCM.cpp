// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 2

// DecodeBlock @ 146bcc630

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ADPCM::DecodeBlock(uchar *param_1,int param_2,short *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong local_d8;
  int local_c8 [16];
  int local_88 [7];
  uint local_6c [7];
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  
  local_c8._0_8_ = AdaptationTable._0_8_;
  local_c8._8_8_ = AdaptationTable._8_8_;
  local_c8._16_8_ = AdaptationTable._16_8_;
  local_c8._24_8_ = AdaptationTable._24_8_;
  local_c8._32_8_ = AdaptationTable._32_8_;
  local_c8._40_8_ = AdaptationTable._40_8_;
  local_c8._48_8_ = AdaptationTable._48_8_;
  local_c8._56_8_ = AdaptationTable._56_8_;
  local_88._0_8_ = AdaptationCoefficient1._0_8_;
  local_88._8_8_ = AdaptationCoefficient1._8_8_;
  local_88[6] = AdaptationCoefficient1[6];
  local_88._16_8_ = AdaptationCoefficient1._16_8_;
  local_6c._0_8_ = AdaptationCoefficient2._0_8_;
  local_6c._8_8_ = AdaptationCoefficient2._8_8_;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_6c._16_8_ = AdaptationCoefficient2._16_8_;
  local_6c[6] = AdaptationCoefficient2[6];
  bVar1 = *param_1;
  if (6 < bVar1) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    return false;
  }
  uVar10 = (int)(short)((ushort)param_1[2] << 8) | (uint)param_1[1];
  local_50 = (ulonglong)uVar10;
  uVar11 = (int)(short)((ushort)param_1[4] << 8) | (uint)param_1[3];
  local_48 = (ulonglong)uVar11 << 0x20;
  uVar12 = (int)(short)((ushort)param_1[6] << 8) | (uint)param_1[5];
  local_40 = uVar12;
  *param_3 = (short)uVar12;
  param_3[1] = (short)uVar11;
  iVar2 = local_88[bVar1];
  local_50._0_4_ = uVar10;
  local_50._4_4_ = iVar2;
  uVar3 = local_6c[bVar1];
  local_48 = (ulonglong)uVar3;
  lVar8 = 7;
  if (7 < (longlong)param_2) {
    local_d8 = 2;
    do {
      bVar1 = param_1[lVar8];
      lVar8 = lVar8 + 1;
      local_40 = uVar11;
      iVar4 = iVar2 * uVar11 + uVar3 * uVar12;
      iVar9 = ((int)((iVar4 >> 0x1f & 0xffU) + iVar4) >> 8) +
              ((int)(char)((bVar1 >> 4) << 4) >> 4) * uVar10;
      iVar4 = 0x7fff;
      if (iVar9 < 0x7fff) {
        iVar4 = iVar9;
      }
      sVar7 = -0x8000;
      if (-0x8000 < iVar4) {
        sVar7 = (short)iVar4;
      }
      uVar12 = (uint)sVar7;
      local_48 = CONCAT44(uVar12,(undefined4)local_48);
      iVar4 = local_c8[bVar1 >> 4];
      local_40 = uVar12;
      param_3[local_d8] = sVar7;
      iVar9 = (int)(uVar10 * iVar4 + ((int)(uVar10 * iVar4) >> 0x1f & 0xffU)) >> 8;
      iVar4 = 0x10;
      if (0x10 < iVar9) {
        iVar4 = iVar9;
      }
      local_50 = CONCAT44(local_50._4_4_,iVar4);
      iVar9 = uVar3 * uVar11 + iVar2 * uVar12;
      iVar5 = ((int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8) + ((int)(char)(bVar1 << 4) >> 4) * iVar4
      ;
      iVar9 = 0x7fff;
      if (iVar5 < 0x7fff) {
        iVar9 = iVar5;
      }
      sVar7 = -0x8000;
      if (-0x8000 < iVar9) {
        sVar7 = (short)iVar9;
      }
      uVar11 = (uint)sVar7;
      local_48 = CONCAT44(uVar11,(undefined4)local_48);
      param_3[local_d8 + 1] = sVar7;
      uVar6 = (int)(iVar4 * local_c8[bVar1 & 0xf] + (iVar4 * local_c8[bVar1 & 0xf] >> 0x1f & 0xffU))
              >> 8;
      uVar10 = 0x10;
      if (0x10 < (int)uVar6) {
        uVar10 = uVar6;
      }
      local_50._0_4_ = uVar10;
      local_d8 = local_d8 + 2;
    } while (lVar8 < param_2);
  }
  return true;
}

// DecodeBlock @ 146bcc9a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl ADPCM::DecodeBlock(uchar *param_1,int param_2,short *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint local_114;
  uint local_110;
  uint local_10c;
  int local_104;
  ulonglong local_f8;
  int local_e8 [16];
  int local_a8 [7];
  int local_8c [7];
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  longlong local_58;
  
  local_e8._0_8_ = AdaptationTable._0_8_;
  local_e8._8_8_ = AdaptationTable._8_8_;
  local_e8._16_8_ = AdaptationTable._16_8_;
  local_e8._24_8_ = AdaptationTable._24_8_;
  local_e8._32_8_ = AdaptationTable._32_8_;
  local_e8._40_8_ = AdaptationTable._40_8_;
  local_e8._48_8_ = AdaptationTable._48_8_;
  local_e8._56_8_ = AdaptationTable._56_8_;
  local_a8._16_8_ = AdaptationCoefficient1._16_8_;
  local_a8[6] = AdaptationCoefficient1[6];
  local_58 = (longlong)param_2;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_8c._16_8_ = AdaptationCoefficient2._16_8_;
  local_8c[6] = AdaptationCoefficient2[6];
  local_a8._0_8_ = AdaptationCoefficient1._0_8_;
  local_a8._8_8_ = AdaptationCoefficient1._8_8_;
  local_8c._0_8_ = AdaptationCoefficient2._0_8_;
  local_8c._8_8_ = AdaptationCoefficient2._8_8_;
  if (param_4 < 1) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return false;
    }
  }
  else {
    bVar1 = *param_1;
    if (bVar1 < 7) {
      local_10c = (int)(short)((ushort)param_1[2] << 8) | (uint)param_1[1];
      local_70 = (ulonglong)local_10c;
      iVar12 = 7;
      local_114 = (int)(short)((ushort)param_1[4] << 8) | (uint)param_1[3];
      local_68 = (ulonglong)local_114 << 0x20;
      local_110 = (int)(short)((ushort)param_1[6] << 8) | (uint)param_1[5];
      local_60 = local_110;
      *param_3 = (short)local_110;
      uVar8 = 1;
      iVar9 = local_a8[bVar1];
      local_70._0_4_ = local_10c;
      local_70._4_4_ = iVar9;
      iVar2 = local_8c[bVar1];
      local_68 = CONCAT44(local_114,iVar2);
      local_104 = 1;
      if (1 < param_4) {
        uVar8 = 2;
        param_3[1] = (short)local_114;
        local_104 = 2;
      }
      uVar14 = param_4 - uVar8;
      lVar11 = 7;
      uVar15 = uVar14 >> 1;
      if (7 < local_58) {
        local_f8 = (ulonglong)uVar8;
        do {
          local_60 = local_110;
          local_70._0_4_ = local_10c;
          if (uVar15 == 0) break;
          bVar1 = param_1[lVar11];
          iVar12 = iVar12 + 1;
          lVar11 = lVar11 + 1;
          iVar6 = iVar9 * local_114 + iVar2 * local_110;
          iVar13 = ((int)((iVar6 >> 0x1f & 0xffU) + iVar6) >> 8) +
                   ((int)(char)((bVar1 >> 4) << 4) >> 4) * local_10c;
          local_60 = local_114;
          iVar6 = 0x7fff;
          if (iVar13 < 0x7fff) {
            iVar6 = iVar13;
          }
          sVar10 = -0x8000;
          if (-0x8000 < iVar6) {
            sVar10 = (short)iVar6;
          }
          local_110 = (uint)sVar10;
          local_68 = CONCAT44(local_110,(undefined4)local_68);
          iVar13 = (int)(local_10c * local_e8[bVar1 >> 4] +
                        ((int)(local_10c * local_e8[bVar1 >> 4]) >> 0x1f & 0xffU)) >> 8;
          iVar6 = 0x10;
          if (0x10 < iVar13) {
            iVar6 = iVar13;
          }
          local_70 = CONCAT44(local_70._4_4_,iVar6);
          param_3[local_f8] = sVar10;
          iVar13 = iVar9 * local_110 + iVar2 * local_114;
          iVar7 = ((int)(iVar13 + (iVar13 >> 0x1f & 0xffU)) >> 8) +
                  ((int)(char)(bVar1 << 4) >> 4) * iVar6;
          iVar13 = 0x7fff;
          if (iVar7 < 0x7fff) {
            iVar13 = iVar7;
          }
          local_60 = local_110;
          sVar10 = -0x8000;
          if (-0x8000 < iVar13) {
            sVar10 = (short)iVar13;
          }
          local_114 = (uint)sVar10;
          local_68 = CONCAT44(local_114,(undefined4)local_68);
          uVar8 = (int)(iVar6 * local_e8[bVar1 & 0xf] +
                       (iVar6 * local_e8[bVar1 & 0xf] >> 0x1f & 0xffU)) >> 8;
          local_10c = 0x10;
          if (0x10 < (int)uVar8) {
            local_10c = uVar8;
          }
          local_104 = local_104 + 2;
          uVar15 = uVar15 - 1;
          uVar14 = uVar14 - 2;
          local_70._0_4_ = local_10c;
          param_3[local_f8 + 1] = sVar10;
          local_f8 = local_f8 + 2;
        } while (lVar11 < local_58);
      }
      uVar15 = local_60;
      uVar8 = (uint)local_70;
      if (uVar14 != 0) {
        if ((uVar14 != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RemainingSamples == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\Adpcm.cpp"
                               ,0xa4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar9 = iVar9 * local_114 + iVar2 * uVar15;
        iVar9 = ((int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8) +
                ((int)(char)(param_1[iVar12] & 0xf0) >> 4) * uVar8;
        iVar12 = 0x7fff;
        if (iVar9 < 0x7fff) {
          iVar12 = iVar9;
        }
        sVar10 = -0x8000;
        if (-0x8000 < iVar12) {
          sVar10 = (short)iVar12;
        }
        param_3[local_104] = sVar10;
      }
      return true;
    }
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  return false;
}

