// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_quant_LTP_gains @ 14f88f214

void silk_quant_LTP_gains
               (short *param_1,char *param_2,char *param_3,int *param_4,int *param_5,
               longlong param_6,longlong param_7,undefined4 param_8,uint param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 local_88 [8];
  longlong local_80;
  char *local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  iVar6 = 0;
  local_78 = "\b\x10 ";
  local_9c = 0;
  local_98 = 0;
  iVar7 = 0x7fffffff;
  local_a0 = 0x7fffffff;
  local_80 = 0;
  do {
    uVar1 = *(undefined8 *)((longlong)&silk_LTP_gain_BITS_Q5_ptrs + local_80);
    iVar8 = 0;
    iVar13 = *param_4;
    local_50 = *(undefined8 *)((longlong)&silk_LTP_vq_ptrs_Q7 + local_80);
    local_58 = *(undefined8 *)((longlong)&silk_LTP_vq_gain_ptrs_Q7 + local_80);
    local_94 = (int)*local_78;
    local_70 = param_6;
    local_68 = param_7;
    iVar11 = 0;
    local_60 = uVar1;
    if (0 < (int)param_9) {
      puVar10 = local_88;
      uVar12 = (ulonglong)param_9;
      iVar11 = 0;
      lVar9 = param_6;
      lVar14 = param_7;
      iVar8 = 0;
      do {
        iVar6 = silk_log2lin(0x1855 - iVar13);
        silk_VQ_WMat_EC_c(puVar10,&local_90,&local_8c,&local_a4,lVar9,lVar14,local_50,local_58,uVar1
                          ,param_8,iVar6 + -0x33,local_94);
        iVar8 = iVar8 + local_90;
        if (iVar8 < 0) {
          iVar8 = 0x7fffffff;
        }
        iVar11 = iVar11 + local_8c;
        if (iVar11 < 0) {
          iVar11 = 0x7fffffff;
        }
        iVar6 = silk_lin2log(local_a4 + 0x33);
        if (iVar6 + iVar13 + -0x380 < 0) {
          iVar13 = 0;
        }
        else {
          iVar6 = silk_lin2log(local_a4 + 0x33);
          iVar13 = iVar6 + iVar13 + -0x380;
        }
        lVar9 = lVar9 + 100;
        lVar14 = lVar14 + 0x14;
        puVar10 = puVar10 + 1;
        uVar12 = uVar12 - 1;
        iVar6 = local_9c;
        iVar7 = local_a0;
      } while (uVar12 != 0);
    }
    pcVar4 = local_78;
    lVar9 = local_80;
    iVar3 = local_98;
    if (iVar11 <= iVar7) {
      *param_3 = (char)local_98;
      local_a0 = iVar11;
      memcpy(param_2,local_88,(longlong)(int)param_9);
      iVar6 = iVar13;
      iVar7 = iVar11;
      local_9c = iVar13;
    }
    local_98 = iVar3 + 1;
    local_80 = lVar9 + 8;
    local_78 = pcVar4 + 1;
  } while (local_98 < 3);
  puVar2 = (&silk_LTP_vq_ptrs_Q7)[*param_3];
  if (0 < (int)param_9) {
    uVar12 = (ulonglong)param_9;
    do {
      iVar7 = 0;
      do {
        iVar13 = iVar7 + *param_2 * 5;
        iVar7 = iVar7 + 1;
        *param_1 = (short)(char)puVar2[iVar13] << 7;
        param_1 = param_1 + 1;
      } while (iVar7 < 5);
      param_2 = param_2 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *param_4 = iVar6;
  iVar6 = iVar8 >> 1;
  if (param_9 != 2) {
    iVar6 = iVar8 >> 2;
  }
  sVar5 = silk_lin2log(iVar6);
  *param_5 = (short)(sVar5 + -0x780) * -3;
  return;
}

