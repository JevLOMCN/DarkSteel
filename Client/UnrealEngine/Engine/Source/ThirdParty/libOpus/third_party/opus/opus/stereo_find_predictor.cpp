// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// FUN_14f885d60 @ 14f885d60

int FUN_14f885d60(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  if (uVar1 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar7 = 0x1f - iVar7;
  }
  iVar8 = param_1 << ((byte)(iVar7 + -1) & 0x1f);
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (uVar1 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  iVar4 = param_2 << ((byte)(iVar5 + -1) & 0x1f);
  lVar3 = (longlong)(short)(0x1fffffff / (longlong)(iVar4 >> 0x10));
  iVar6 = (int)((ulonglong)(iVar8 * lVar3) >> 0x10);
  iVar6 = iVar6 + (int)((ulonglong)
                        ((iVar8 + (int)((ulonglong)((longlong)iVar6 * (longlong)iVar4) >> 0x20) * -8
                         ) * lVar3) >> 0x10);
  iVar7 = (((iVar7 + -1) - (iVar5 + -1)) - param_3) + 0x1d;
  if (iVar7 < 0) {
    bVar2 = -(byte)iVar7;
    iVar4 = -0x80000000 >> (bVar2 & 0x1f);
    iVar5 = 0x7fffffff >> (bVar2 & 0x1f);
    iVar8 = iVar6;
    if (iVar6 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar4 < iVar6) {
      iVar8 = iVar4;
    }
    iVar7 = iVar6;
    if (iVar6 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar5 < iVar6) {
      iVar7 = iVar5;
    }
    if (iVar5 < iVar4) {
      iVar7 = iVar8;
    }
    iVar7 = iVar7 << (bVar2 & 0x1f);
  }
  else if (iVar7 < 0x20) {
    iVar7 = iVar6 >> ((byte)iVar7 & 0x1f);
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}

// silk_stereo_find_predictor @ 14f885e68

int silk_stereo_find_predictor
              (int *param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined4 param_5,
              int param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_res20 [2];
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  longlong local_48;
  
  silk_sum_sqr_shift(local_res20,&local_50,param_2,param_5);
  silk_sum_sqr_shift(&local_58,&local_54,param_3,param_5);
  uVar5 = local_54;
  if ((int)local_54 < (int)local_50) {
    uVar5 = local_50;
  }
  iVar8 = uVar5 + (uVar5 & 1);
  local_58 = (int)local_58 >> ((char)iVar8 - (char)local_54 & 0x1fU);
  uVar5 = (int)local_res20[0] >> ((char)iVar8 - (char)local_50 & 0x1fU);
  local_res20[0] = 1;
  if (1 < (int)uVar5) {
    local_res20[0] = uVar5;
  }
  local_4c = silk_inner_prod_aligned_scale(param_2,param_3,iVar8,param_5);
  iVar2 = FUN_14f885d60(local_4c,local_res20[0],0xd);
  iVar7 = iVar2;
  if (iVar2 < -0x4000) {
    iVar7 = -0x4000;
  }
  if (0x4000 < iVar2) {
    iVar7 = 0x4000;
  }
  local_48 = (longlong)(short)iVar7;
  uVar5 = (uint)((ulonglong)(iVar7 * local_48) >> 0x10);
  uVar6 = (int)uVar5 >> 0x1f;
  iVar2 = (uVar5 ^ uVar6) - uVar6;
  if (iVar2 < param_6) {
    iVar2 = param_6;
  }
  if ((int)local_res20[0] < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x1f;
    if (local_res20[0] != 0) {
      for (; local_res20[0] >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar6 = 0x1f - iVar3;
    iVar3 = 0x18 - uVar6;
    uVar5 = local_res20[0];
    if (iVar3 != 0) {
      if (iVar3 < 0) {
        bVar4 = -(byte)iVar3 & 0x1f;
        uVar5 = local_res20[0] << bVar4 | local_res20[0] >> 0x20 - bVar4;
      }
      else {
        bVar4 = (byte)iVar3 & 0x1f;
        uVar5 = local_res20[0] >> bVar4 | local_res20[0] << 0x20 - bVar4;
      }
    }
    iVar3 = (int)((-(uint)((uVar6 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
            ((byte)((int)uVar6 >> 1) & 0x1f);
    iVar3 = (int)((ulonglong)(uVar5 & 0x7f) * (longlong)iVar3 * 0xd5 >> 0x10) + iVar3;
  }
  bVar4 = (byte)(iVar8 >> 1);
  local_58 = (int)((ulonglong)
                   ((longlong)(short)((ulonglong)(iVar7 * local_48) >> 0x10) *
                   (longlong)(int)local_res20[0]) >> 0x10) * 0x40 +
             (int)((ulonglong)(local_4c * local_48) >> 0x10) * -0x10 + local_58;
  iVar8 = (int)((ulonglong)
                ((longlong)((iVar3 << (bVar4 & 0x1f)) - *param_4) * (longlong)(short)iVar2) >> 0x10)
          + *param_4;
  *param_4 = iVar8;
  if ((int)local_58 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x1f;
    if (local_58 != 0) {
      for (; local_58 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar6 = 0x1f - iVar3;
    iVar3 = 0x18 - uVar6;
    uVar5 = local_58;
    if (iVar3 != 0) {
      if (iVar3 < 0) {
        bVar1 = -(byte)iVar3 & 0x1f;
        uVar5 = local_58 << bVar1 | local_58 >> 0x20 - bVar1;
      }
      else {
        bVar1 = (byte)iVar3 & 0x1f;
        uVar5 = local_58 >> bVar1 | local_58 << 0x20 - bVar1;
      }
    }
    iVar3 = (int)((-(uint)((uVar6 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
            ((byte)((int)uVar6 >> 1) & 0x1f);
    iVar3 = (int)((ulonglong)(uVar5 & 0x7f) * (longlong)iVar3 * 0xd5 >> 0x10) + iVar3;
  }
  iVar3 = (int)((ulonglong)
                ((longlong)((iVar3 << (bVar4 & 0x1f)) - param_4[1]) * (longlong)(short)iVar2) >>
               0x10) + param_4[1];
  param_4[1] = iVar3;
  iVar2 = 1;
  if (1 < iVar8) {
    iVar2 = iVar8;
  }
  iVar2 = FUN_14f885d60(iVar3,iVar2,0xe);
  iVar8 = 0x7fff;
  if ((iVar2 < 0x8000) && (iVar8 = 0, -1 < iVar2)) {
    iVar8 = iVar2;
  }
  *param_1 = iVar8;
  return iVar7;
}

