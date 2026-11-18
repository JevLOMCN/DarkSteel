// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_resampler_private_IIR_FIR @ 14f8851ec

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_resampler_private_IIR_FIR
               (longlong param_1,undefined2 *param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 auStack_80 [5];
  undefined4 local_58;
  short local_54 [2];
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)&local_58;
  uVar3 = (longlong)(*(int *)(param_1 + 0x10c) * 2 + 8) * 2;
  uVar10 = uVar3 + 0xf;
  if (uVar10 <= uVar3) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x14f885260;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  lVar4 = -(uVar10 & 0xfffffffffffffff0);
  puVar2 = (undefined4 *)((longlong)&local_58 + lVar4);
  local_58 = param_4;
  local_48 = param_3;
  lStack_40 = param_1;
  *puVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)local_54 + lVar4) = uVar6;
  *(undefined4 *)((longlong)&local_50 + lVar4) = uVar7;
  *(undefined4 *)((longlong)&local_4c + lVar4) = uVar8;
  local_50 = *(int *)(param_1 + 0x110);
  while( true ) {
    iVar5 = param_4;
    if (*(int *)(param_1 + 0x10c) <= param_4) {
      iVar5 = *(int *)(param_1 + 0x10c);
    }
    local_4c = iVar5;
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x14f8852a0;
    silk_resampler_private_up2_HQ(param_1,(longlong)&local_48 + lVar4,param_3,iVar5);
    local_54[0] = 0;
    local_54[1] = 0;
    iVar14 = iVar5;
    if (0 < iVar5 * 0x20000) {
      iVar15 = 0;
      do {
        lVar13 = (longlong)iVar15 >> 0x10;
        lVar12 = (longlong)(((longlong)iVar15 & 0xffffU) * 0xc) >> 0x10;
        lVar11 = 0xb - lVar12;
        iVar14 = ((int)*(short *)(&DAT_153516c62 + lVar11 * 8) *
                  (int)*(short *)((longlong)&local_4c + lVar13 * 2 + lVar4) +
                  (int)*(short *)(&silk_resampler_frac_FIR_12 + lVar11 * 8) *
                  (int)*(short *)((longlong)&local_4c + lVar13 * 2 + lVar4 + 2) +
                  (int)*(short *)(&DAT_153516c64 + lVar11 * 8) *
                  (int)*(short *)((longlong)&local_50 + lVar13 * 2 + lVar4 + 2) +
                  (int)*(short *)(&DAT_153516c66 + lVar11 * 8) *
                  (int)*(short *)((longlong)&local_50 + lVar13 * 2 + lVar4) +
                  (int)*(short *)(&DAT_153516c66 + lVar12 * 8) *
                  (int)*(short *)((longlong)local_54 + lVar13 * 2 + lVar4 + 2) +
                  (int)*(short *)(&DAT_153516c64 + lVar12 * 8) *
                  (int)*(short *)((longlong)local_54 + lVar13 * 2 + lVar4) +
                  (int)*(short *)(&DAT_153516c62 + lVar12 * 8) *
                  (int)*(short *)((longlong)&local_58 + lVar13 * 2 + lVar4 + 2) +
                  (int)*(short *)(&silk_resampler_frac_FIR_12 + lVar12 * 8) *
                  (int)*(short *)((longlong)puVar2 + lVar13 * 2) >> 0xe) + 1 >> 1;
        uVar9 = (undefined2)iVar14;
        if (iVar14 < -0x8000) {
          uVar9 = 0x8000;
        }
        if (0x7fff < iVar14) {
          uVar9 = 0x7fff;
        }
        iVar15 = iVar15 + local_50;
        *param_2 = uVar9;
        param_2 = param_2 + 1;
        param_1 = lStack_40;
        param_3 = local_48;
        param_4 = local_58;
        iVar14 = local_4c;
      } while (iVar15 < iVar5 * 0x20000);
    }
    param_4 = param_4 - iVar14;
    local_58 = param_4;
    param_3 = param_3 + (longlong)iVar14 * 2;
    local_48 = param_3;
    puVar1 = (undefined4 *)((longlong)puVar2 + (longlong)(iVar14 * 2) * 2);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    if (param_4 < 1) break;
    *puVar2 = *puVar1;
    *(undefined4 *)((longlong)local_54 + lVar4) = uVar6;
    *(undefined4 *)((longlong)&local_50 + lVar4) = uVar7;
    *(undefined4 *)((longlong)&local_4c + lVar4) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x18) = *puVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x14f8853f6;
  return;
}

