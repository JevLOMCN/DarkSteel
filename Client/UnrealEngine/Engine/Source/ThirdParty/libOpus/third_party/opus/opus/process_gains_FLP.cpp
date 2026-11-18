// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_process_gains_FLP @ 14f888094

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_process_gains_FLP(longlong param_1,float *param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_68 [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar5 = 0;
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    dVar8 = exp((double)(float)((uint)((param_2[0xb1] - __real_41400000) * __real_3e800000) ^
                               __xmm_80000000800000008000000080000000));
    iVar3 = 0;
    fVar10 = __real_3f800000 -
             (float)(__real_3ff0000000000000 / (dVar8 + __real_3ff0000000000000)) * __real_3f000000;
    pfVar2 = param_2;
    if (0 < *(int *)(param_1 + 0x11e4)) {
      do {
        iVar3 = iVar3 + 1;
        *pfVar2 = fVar10 * *pfVar2;
        pfVar2 = pfVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x11e4));
    }
  }
  dVar8 = pow(__real_4000000000000000,
              (double)((__real_41a80000 - (float)*(int *)(param_1 + 0x127c) * __real_3c000000) *
                      __real_3ea8f5c3));
  uVar1 = *(uint *)(param_1 + 0x11e4);
  iVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x11ec);
  pfVar2 = param_2;
  if (0 < (int)uVar1) {
    do {
      dVar9 = sqrt((double)((float)(dVar8 / (double)iVar3) * pfVar2[0xb2] + *pfVar2 * *pfVar2));
      iVar7 = iVar7 + 1;
      fVar10 = (float)dVar9;
      if (__real_46fffe00 <= (float)dVar9) {
        fVar10 = __real_46fffe00;
      }
      *pfVar2 = fVar10;
      uVar1 = *(uint *)(param_1 + 0x11e4);
      pfVar2 = pfVar2 + 1;
    } while (iVar7 < (int)uVar1);
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1;
      piVar4 = local_68;
      do {
        *piVar4 = (int)(*(float *)(((longlong)param_2 - (longlong)local_68) + (longlong)piVar4) *
                       __real_47800000);
        piVar4 = piVar4 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  memcpy(param_2 + 0xb6,local_68,(longlong)(int)uVar1 << 2);
  *(undefined1 *)(param_2 + 0xba) = *(undefined1 *)(param_1 + 0x1c18);
  local_78 = *(undefined4 *)(param_1 + 0x11e4);
  silk_gains_quant(param_1 + 0x1290,local_68,(undefined1 *)(param_1 + 0x1c18),param_3 == 2);
  if (0 < *(int *)(param_1 + 0x11e4)) {
    pfVar2 = param_2;
    do {
      iVar5 = iVar5 + 1;
      *pfVar2 = (float)*(int *)(((longlong)local_68 - (longlong)param_2) + (longlong)pfVar2) *
                __real_37800000;
      pfVar2 = pfVar2 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x11e4));
  }
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    *(bool *)(param_1 + 0x12ae) =
         (float)*(int *)(param_1 + 0x1278) * __real_38000000 + param_2[0xb1] <= __real_3f800000;
  }
  param_2[0xad] =
       ((((__real_3f99999a - (float)*(int *)(param_1 + 0x1214) * __real_3d4ccccd) -
         (float)*(int *)(param_1 + 0x11b4) * __real_3e4ccccd * __real_3b800000) -
        param_2[0xae] * __real_3dcccccd) - param_2[0xaf] * __real_3e4ccccd) +
       (float)(int)*(short *)(&silk_Quantization_Offsets_Q10 +
                             ((longlong)*(char *)(param_1 + 0x12ae) +
                             ((longlong)*(char *)(param_1 + 0x12ad) >> 1) * 2) * 2) *
       __real_3a800000 * __real_3f4ccccd;
  return;
}

