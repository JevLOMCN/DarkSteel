// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 5

// encode_size @ 14f867f0c

undefined8 encode_size(int param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1 < 0xfc) {
    *param_2 = (byte)param_1;
    return 1;
  }
  bVar1 = ((byte)param_1 & 3) - 4;
  *param_2 = bVar1;
  param_2[1] = (byte)((int)(param_1 - (uint)bVar1) >> 2);
  return 2;
}

// opus_packet_get_samples_per_frame @ 14f867f44

int opus_packet_get_samples_per_frame(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    param_2 = param_2 << (bVar1 >> 3 & 3);
    iVar2 = param_2 / 400 + (param_2 >> 0x1f);
  }
  else if ((bVar1 & 0x60) == 0x60) {
    if ((bVar1 & 8) == 0) {
      iVar2 = param_2 / 100 + (param_2 >> 0x1f);
    }
    else {
      iVar2 = param_2 / 0x32 + (param_2 >> 0x1f);
    }
  }
  else {
    bVar1 = bVar1 >> 3 & 3;
    if (bVar1 != 3) {
      return (param_2 << bVar1) / 100;
    }
    iVar2 = (param_2 * 0x3c) / 1000 + (param_2 * 0x3c >> 0x1f);
  }
  return iVar2 - (iVar2 >> 0x1f);
}

// opus_packet_parse @ 14f867fc8

void opus_packet_parse(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  opus_packet_parse_impl(param_1,param_2,0,param_3,param_4,param_5,param_6,0);
  return;
}

// opus_packet_parse_impl @ 14f868000

ulonglong opus_packet_parse_impl
                    (byte *param_1,int param_2,int param_3,byte *param_4,longlong param_5,
                    ushort *param_6,int *param_7,int *param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  ushort *puVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  byte bVar19;
  int local_res8;
  
  bVar19 = 0;
  local_res8 = 0;
  if ((param_6 == (ushort *)0x0) || (param_2 < 0)) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  iVar5 = opus_packet_get_samples_per_frame(param_1,48000);
  iVar13 = 2;
  iVar18 = 2;
  bVar1 = *param_1;
  uVar10 = param_2 - 1;
  pbVar12 = param_1 + 1;
  uVar15 = 0xffff;
  uVar11 = uVar10;
  if ((bVar1 & 3) == 0) {
    uVar17 = 1;
  }
  else if ((bVar1 & 3) == 1) {
    uVar17 = 2;
    bVar19 = 1;
    if (param_3 == 0) {
      if ((uVar10 & 1) != 0) {
        return 0xfffffffc;
      }
      *param_6 = (ushort)((int)uVar10 / 2);
      uVar10 = (int)uVar10 / 2;
    }
  }
  else {
    uVar4 = 0xffff;
    if ((bVar1 & 3) == 2) {
      uVar17 = 2;
      if ((int)uVar10 < 1) {
        uVar4 = 0xffff;
        iVar13 = -1;
      }
      else if (*pbVar12 < 0xfc) {
        uVar4 = (ushort)*pbVar12;
        iVar13 = 1;
      }
      else if ((int)uVar10 < 2) {
        iVar13 = -1;
      }
      else {
        uVar4 = (ushort)*pbVar12 + (ushort)param_1[2] * 4;
      }
      uVar11 = uVar10 - iVar13;
      *param_6 = uVar4;
      if ((short)uVar4 < 0) {
        return 0xfffffffc;
      }
      if ((int)uVar11 < (int)(short)uVar4) {
        return 0xfffffffc;
      }
      pbVar12 = pbVar12 + iVar13;
      uVar10 = uVar11 - (int)(short)uVar4;
    }
    else {
      if ((int)uVar10 < 1) {
        return 0xfffffffc;
      }
      bVar19 = *pbVar12;
      pbVar12 = param_1 + 2;
      uVar16 = bVar19 & 0x3f;
      uVar17 = (ulonglong)uVar16;
      if ((bVar19 & 0x3f) == 0) {
        return 0xfffffffc;
      }
      if (0x1680 < (int)(uVar16 * iVar5)) {
        return 0xfffffffc;
      }
      uVar11 = param_2 - 2;
      iVar13 = 0;
      if ((bVar19 & 0x40) != 0) {
        do {
          if ((int)uVar11 < 1) {
            return 0xfffffffc;
          }
          bVar2 = *pbVar12;
          uVar8 = (uint)bVar2;
          pbVar12 = pbVar12 + 1;
          if (bVar2 == 0xff) {
            uVar8 = 0xfe;
          }
          local_res8 = local_res8 + uVar8;
          uVar11 = uVar11 + (-1 - uVar8);
        } while (bVar2 == 0xff);
      }
      if ((int)uVar11 < 0) {
        return 0xfffffffc;
      }
      bVar19 = ~(bVar19 >> 7) & 1;
      if (bVar19 == 0) {
        puVar14 = param_6;
        uVar10 = uVar11;
        if (0 < (int)(uVar16 - 1)) {
          do {
            if ((int)uVar11 < 1) {
              uVar3 = 0xffff;
              iVar5 = -1;
            }
            else if (*pbVar12 < 0xfc) {
              uVar3 = (ushort)*pbVar12;
              iVar5 = 1;
            }
            else {
              uVar3 = uVar4;
              iVar5 = -1;
              if (1 < (int)uVar11) {
                uVar3 = (ushort)*pbVar12 + (ushort)pbVar12[1] * 4;
                iVar5 = 2;
              }
            }
            uVar11 = uVar11 - iVar5;
            *puVar14 = uVar3;
            if ((short)uVar3 < 0) {
              return 0xfffffffc;
            }
            if ((int)uVar11 < (int)(short)uVar3) {
              return 0xfffffffc;
            }
            iVar13 = iVar13 + 1;
            pbVar12 = pbVar12 + iVar5;
            uVar10 = uVar10 - ((short)uVar3 + iVar5);
            puVar14 = puVar14 + 1;
          } while (iVar13 < (int)(uVar16 - 1));
        }
        if ((int)uVar10 < 0) {
          return 0xfffffffc;
        }
      }
      else if (param_3 == 0) {
        uVar10 = (int)uVar11 / (int)uVar16;
        if (uVar16 * uVar10 != uVar11) {
          return 0xfffffffc;
        }
        if (0 < (int)(uVar16 - 1)) {
          puVar14 = param_6;
          for (uVar6 = uVar17 * 2 - 2 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar14 = (ushort)uVar10;
            puVar14 = puVar14 + 1;
          }
        }
      }
    }
  }
  if (param_3 == 0) {
    if (0x4fb < (int)uVar10) {
      return 0xfffffffc;
    }
    (param_6 + -1)[uVar17] = (ushort)uVar10;
    goto LAB_14f868338;
  }
  if ((int)uVar11 < 1) {
LAB_14f868298:
    iVar18 = -1;
  }
  else if (*pbVar12 < 0xfc) {
    uVar15 = (ushort)*pbVar12;
    iVar18 = 1;
  }
  else {
    if ((int)uVar11 < 2) goto LAB_14f868298;
    uVar15 = (ushort)pbVar12[1] * 4 + (ushort)*pbVar12;
  }
  (param_6 + -1)[uVar17] = uVar15;
  lVar7 = 0;
  lVar9 = uVar17 - 1;
  if ((-1 < (short)param_6[lVar9]) &&
     (iVar13 = (int)(short)param_6[lVar9], iVar13 <= (int)(uVar11 - iVar18))) {
    pbVar12 = pbVar12 + iVar18;
    if (bVar19 == 0) {
      if (iVar13 + iVar18 <= (int)uVar10) goto LAB_14f868338;
    }
    else if (iVar13 * (int)uVar17 <= (int)(uVar11 - iVar18)) {
      if (0 < lVar9) {
        do {
          param_6[lVar7] = (param_6 + -1)[uVar17];
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar9);
      }
LAB_14f868338:
      lVar7 = 0;
      if (param_7 != (int *)0x0) {
        *param_7 = (int)pbVar12 - (int)param_1;
      }
      if ((int)uVar17 != 0) {
        do {
          if (param_5 != 0) {
            *(byte **)(param_5 + lVar7 * 8) = pbVar12;
          }
          puVar14 = param_6 + lVar7;
          lVar7 = lVar7 + 1;
          pbVar12 = pbVar12 + (short)*puVar14;
        } while (lVar7 < (longlong)uVar17);
      }
      if (param_8 != (int *)0x0) {
        *param_8 = ((int)pbVar12 - (int)param_1) + local_res8;
      }
      if (param_4 != (byte *)0x0) {
        *param_4 = bVar1;
        return uVar17;
      }
      return uVar17;
    }
  }
  return 0xfffffffc;
}

// opus_pcm_soft_clip @ 14f8683bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void opus_pcm_soft_clip(float *param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_58;
  
  fVar3 = __real_c0000000;
  if ((((0 < param_3) && (0 < param_2)) && (param_1 != (float *)0x0)) && (param_4 != (float *)0x0))
  {
    if (0 < param_2 * param_3) {
      uVar10 = (ulonglong)(uint)(param_2 * param_3);
      pfVar7 = param_1;
      do {
        fVar1 = __real_40000000;
        if (*pfVar7 <= __real_40000000) {
          fVar1 = *pfVar7;
        }
        if (fVar1 < fVar3) {
          fVar1 = fVar3;
        }
        *pfVar7 = fVar1;
        pfVar7 = pfVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    fVar3 = __real_bf800000;
    lVar14 = (longlong)param_3;
    if (0 < param_3) {
      lVar13 = (longlong)param_1 - (longlong)param_4;
      local_58 = lVar14;
      do {
        fVar1 = *param_4;
        pfVar7 = (float *)(lVar13 + (longlong)param_4);
        iVar5 = 0;
        if (0 < param_2) {
          iVar6 = 0;
          do {
            if (0.0 <= pfVar7[iVar6] * fVar1) break;
            iVar5 = iVar5 + 1;
            pfVar7[iVar6] = pfVar7[iVar6] * fVar1 * pfVar7[iVar6] + pfVar7[iVar6];
            iVar6 = iVar6 + param_3;
          } while (iVar5 < param_2);
        }
        fVar1 = *pfVar7;
        iVar5 = 0;
        do {
          iVar6 = iVar5;
          if (iVar5 < param_2) {
            iVar8 = iVar5 * param_3;
            do {
              if ((__real_3f800000 < pfVar7[iVar8]) || (pfVar7[iVar8] < fVar3)) break;
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + param_3;
            } while (iVar6 < param_2);
          }
          if (iVar6 == param_2) {
            fVar16 = 0.0;
            break;
          }
          iVar8 = iVar6 * param_3;
          fVar17 = pfVar7[iVar8];
          fVar16 = (float)(double)CONCAT44((uint)((ulonglong)(double)fVar17 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84((double)fVar17,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          iVar4 = iVar6;
          iVar12 = iVar6;
          if (0 < iVar6) {
            iVar9 = (iVar6 + -1) * param_3;
            do {
              if (fVar17 * pfVar7[iVar9] < 0.0) break;
              iVar12 = iVar12 + -1;
              iVar9 = iVar9 - param_3;
            } while (0 < iVar12);
          }
          while ((iVar9 = iVar4, iVar4 = iVar6, iVar4 < param_2 && (0.0 <= pfVar7[iVar8] * fVar17)))
          {
            fVar15 = (float)(double)CONCAT44((uint)((ulonglong)(double)pfVar7[iVar8] >> 0x20) &
                                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                             SUB84((double)pfVar7[iVar8],0) &
                                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            fVar18 = fVar16;
            if (fVar16 < fVar15) {
              fVar18 = fVar15;
            }
            iVar8 = iVar8 + param_3;
            bVar2 = fVar15 <= fVar16;
            fVar16 = fVar18;
            iVar6 = iVar4 + 1;
            if (bVar2) {
              iVar4 = iVar9;
            }
          }
          if ((iVar12 != 0) || (fVar17 * *pfVar7 < 0.0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          fVar16 = (fVar16 - __real_3f800000) / (fVar16 * fVar16);
          fVar16 = fVar16 + fVar16 * ___real_3480d959;
          if (0.0 < fVar17) {
            fVar16 = (float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
          }
          if (iVar12 < iVar4) {
            uVar10 = (ulonglong)(uint)(iVar4 - iVar12);
            pfVar11 = pfVar7 + iVar12 * param_3;
            do {
              *pfVar11 = *pfVar11 * fVar16 * *pfVar11 + *pfVar11;
              pfVar11 = pfVar11 + lVar14;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if ((bVar2) && (1 < iVar9)) {
            fVar17 = fVar1 - *pfVar7;
            fVar18 = fVar17 / (float)iVar9;
            if (iVar5 < iVar9) {
              uVar10 = (ulonglong)(uint)(iVar9 - iVar5);
              pfVar11 = pfVar7 + iVar5 * param_3;
              do {
                fVar17 = fVar17 - fVar18;
                fVar15 = __real_3f800000;
                if (fVar17 + *pfVar11 <= __real_3f800000) {
                  fVar15 = fVar17 + *pfVar11;
                }
                if (fVar15 < fVar3) {
                  fVar15 = fVar3;
                }
                *pfVar11 = fVar15;
                pfVar11 = pfVar11 + lVar14;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          iVar5 = iVar4;
        } while (iVar4 != param_2);
        *param_4 = fVar16;
        param_4 = param_4 + 1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
    }
  }
  return;
}

