// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_decode_signs @ 14f8861d8

void silk_decode_signs(undefined8 param_1,longlong param_2,int param_3,short param_4,short param_5,
                      longlong param_6)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_38;
  undefined1 local_37;
  
  local_37 = 0;
  lVar5 = (longlong)(param_3 + 8) >> 4;
  lVar6 = 0;
  if (0 < lVar5) {
    do {
      uVar3 = *(uint *)(param_6 + lVar6 * 4);
      if (0 < (int)uVar3) {
        uVar3 = uVar3 & 0x1f;
        uVar1 = 6;
        if (uVar3 < 6) {
          uVar1 = uVar3;
        }
        local_38 = (&silk_sign_iCDF)
                   [(ulonglong)uVar1 + (longlong)((short)(param_4 * 2 + param_5) * 7)];
        lVar4 = 0;
        do {
          if (0 < *(short *)(param_2 + lVar4 * 2)) {
            sVar2 = ec_dec_icdf(param_1,&local_38,8);
            *(short *)(param_2 + lVar4 * 2) = *(short *)(param_2 + lVar4 * 2) * (sVar2 * 2 + -1);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < 0x10);
      }
      param_2 = param_2 + 0x20;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar5);
  }
  return;
}

// silk_encode_signs @ 14f8862c8

void silk_encode_signs(undefined8 param_1,longlong param_2,int param_3,short param_4,short param_5,
                      longlong param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_28;
  undefined1 local_27;
  
  local_27 = 0;
  lVar4 = (longlong)(param_3 + 8) >> 4;
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      uVar2 = *(uint *)(param_6 + lVar3 * 4);
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0x1f;
        uVar1 = 6;
        if (uVar2 < 6) {
          uVar1 = uVar2;
        }
        lVar5 = 0;
        local_28 = (&silk_sign_iCDF)
                   [(ulonglong)uVar1 + (longlong)((short)(param_4 * 2 + param_5) * 7)];
        do {
          if (*(char *)(lVar5 + param_2) != '\0') {
            ec_enc_icdf(param_1,((int)*(char *)(lVar5 + param_2) >> 7) + 1,&local_28,8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < 0x10);
      }
      param_2 = param_2 + 0x10;
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar4);
  }
  return;
}

