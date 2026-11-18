// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_decode_pulses @ 14f884cfc

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_decode_pulses(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                       int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  short sVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  uint *local_120;
  uint local_118;
  undefined4 local_114;
  int local_110;
  undefined8 local_108;
  longlong local_100;
  uint local_f8 [20];
  uint auStack_a8 [20];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_114 = param_4;
  local_110 = param_3;
  local_108 = param_1;
  local_100 = param_2;
  iVar4 = ec_dec_icdf(param_1,&silk_rate_levels_iCDF + ((longlong)param_3 >> 1) * 9,8);
  uVar7 = param_5 >> 4;
  if ((int)(uVar7 << 4) < param_5) {
    if (param_5 != 0x78) {
      local_118 = uVar7;
      celt_fatal("assertion failed: frame_length == 12 * 10",
                 "../../../third_party/opus/src/silk/decode_pulses.c",0x3b);
    }
    uVar7 = uVar7 + 1;
  }
  local_118 = uVar7;
  if (0 < (int)uVar7) {
    lVar11 = 0;
    uVar8 = (ulonglong)uVar7;
    do {
      *(undefined4 *)((longlong)auStack_a8 + lVar11) = 0;
      iVar5 = ec_dec_icdf(param_1,&silk_pulses_per_block_iCDF + (longlong)iVar4 * 0x12,8);
      *(int *)((longlong)local_f8 + lVar11) = iVar5;
      if (iVar5 == 0x11) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          iVar6 = ec_dec_icdf(param_1,&DAT_153516d62 + (iVar5 == 10),8);
          *(int *)((longlong)local_f8 + lVar11) = iVar6;
        } while (iVar6 == 0x11);
        *(int *)((longlong)auStack_a8 + lVar11) = iVar5;
      }
      lVar11 = lVar11 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  iVar4 = 0;
  if (0 < (int)uVar7) {
    puVar10 = local_f8;
    do {
      if ((int)*puVar10 < 1) {
        memset((void *)(param_2 + (longlong)((int)(short)iVar4 << 4) * 2),0,0x20);
      }
      else {
        silk_shell_decoder();
      }
      iVar4 = iVar4 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar4 < (int)uVar7);
  }
  iVar4 = 0;
  if (0 < (int)uVar7) {
    lVar11 = 0;
    do {
      uVar2 = local_108;
      uVar1 = *(uint *)((longlong)auStack_a8 + lVar11);
      if (0 < (int)uVar1) {
        lVar9 = 0;
        param_2 = param_2 + (longlong)((int)(short)iVar4 << 4) * 2;
        do {
          sVar12 = *(short *)(param_2 + lVar9 * 2);
          uVar8 = (ulonglong)uVar1;
          if (0 < (int)uVar1) {
            do {
              sVar3 = ec_dec_icdf(uVar2,&silk_lsb_iCDF,8);
              sVar12 = sVar3 + sVar12 * 2;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          *(short *)(param_2 + lVar9 * 2) = sVar12;
          lVar9 = lVar9 + 1;
        } while (lVar9 < 0x10);
        *(uint *)((longlong)local_f8 + lVar11) = *(uint *)((longlong)local_f8 + lVar11) | uVar1 << 5
        ;
        param_2 = local_100;
        uVar7 = local_118;
      }
      iVar4 = iVar4 + 1;
      lVar11 = lVar11 + 4;
      param_1 = local_108;
    } while (iVar4 < (int)uVar7);
  }
  local_120 = local_f8;
  local_128 = local_114;
  silk_decode_signs(param_1,param_2,param_5,local_110);
  return;
}

