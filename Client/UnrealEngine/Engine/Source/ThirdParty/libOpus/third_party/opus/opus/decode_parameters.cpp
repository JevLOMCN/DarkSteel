// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_decode_parameters @ 14f88b020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_decode_parameters(longlong param_1,void *param_2,int param_3)

{
  void *_Src;
  short sVar1;
  undefined *puVar2;
  longlong lVar3;
  char cVar4;
  short *psVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  int local_88;
  short local_78 [16];
  short local_58 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar8 = 0;
  iVar7 = 0;
  local_88 = *(undefined4 *)(param_1 + 0x914);
  silk_gains_dequant((longlong)param_2 + 0x10,param_1 + 0xac8,param_1 + 0x908,param_3 == 2);
  silk_NLSF_decode(local_78,param_1 + 0xad0,*(undefined8 *)(param_1 + 0xac0));
  _Src = (void *)((longlong)param_2 + 0x40);
  silk_NLSF2A(_Src,local_78,*(undefined4 *)(param_1 + 0x924),*(undefined4 *)(param_1 + 0x1060));
  if (*(int *)(param_1 + 0x948) == 1) {
    *(undefined1 *)(param_1 + 0xae7) = 4;
    cVar4 = '\x04';
  }
  else {
    cVar4 = *(char *)(param_1 + 0xae7);
  }
  uVar10 = *(uint *)(param_1 + 0x924);
  if (cVar4 < '\x04') {
    if (0 < (int)uVar10) {
      uVar6 = (ulonglong)uVar10;
      uVar11 = uVar8;
      do {
        sVar1 = *(short *)((param_1 - (longlong)local_78) + 0x928 +
                          (longlong)((longlong)local_78 + uVar11));
        *(short *)((longlong)local_58 + uVar11) =
             (short)(((int)*(short *)((longlong)local_78 + uVar11) - (int)sVar1) * (int)cVar4 >> 2)
             + sVar1;
        uVar11 = uVar11 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    silk_NLSF2A((longlong)param_2 + 0x20,local_58,(longlong)(int)uVar10,
                *(undefined4 *)(param_1 + 0x1060));
  }
  else {
    memcpy((void *)((longlong)param_2 + 0x20),_Src,(longlong)(int)uVar10 * 2);
  }
  memcpy((void *)(param_1 + 0x928),local_78,(longlong)*(int *)(param_1 + 0x924) * 2);
  if (*(int *)(param_1 + 0x1058) != 0) {
    silk_bwexpander((longlong)param_2 + 0x20,*(undefined4 *)(param_1 + 0x924),0xf852);
    silk_bwexpander(_Src,*(undefined4 *)(param_1 + 0x924),0xf852);
  }
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    local_88 = *(int *)(param_1 + 0x914);
    silk_decode_pitch(*(undefined2 *)(param_1 + 0xae2),*(undefined1 *)(param_1 + 0xae4),param_2,
                      *(undefined4 *)(param_1 + 0x90c));
    puVar2 = (&silk_LTP_vq_ptrs_Q7)[*(char *)(param_1 + 0xae8)];
    if (0 < *(int *)(param_1 + 0x914)) {
      pcVar9 = (char *)(param_1 + 0xacc);
      psVar5 = (short *)((longlong)param_2 + 0x60);
      uVar11 = uVar8;
      do {
        cVar4 = *pcVar9;
        uVar6 = uVar8;
        do {
          lVar3 = uVar6 + (longlong)cVar4 * 5;
          uVar6 = uVar6 + 1;
          *psVar5 = (short)(char)puVar2[lVar3] << 7;
          psVar5 = psVar5 + 1;
        } while ((longlong)uVar6 < 5);
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        pcVar9 = pcVar9 + 1;
      } while ((int)uVar10 < *(int *)(param_1 + 0x914));
    }
    iVar7 = (int)(short)(&silk_LTPScales_table_Q14)[*(char *)(param_1 + 0xae9)];
  }
  else {
    memset(param_2,0,(longlong)*(int *)(param_1 + 0x914) << 2);
    memset((void *)((longlong)param_2 + 0x60),0,(longlong)(*(int *)(param_1 + 0x914) * 5) * 2);
    *(undefined1 *)(param_1 + 0xae8) = 0;
  }
  *(int *)((longlong)param_2 + 0x88) = iVar7;
  return;
}

