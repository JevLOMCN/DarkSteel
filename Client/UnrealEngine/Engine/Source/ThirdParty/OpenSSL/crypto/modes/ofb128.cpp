// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// CRYPTO_ofb128_encrypt @ 14f72cf90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_ofb128_encrypt
               (byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
               uint *param_6,code *param_7)

{
  byte bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = *param_6;
  for (; (uVar4 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)uVar4 + param_5) ^ bVar1;
    param_2 = param_2 + 1;
    uVar4 = uVar4 + 1 & 0xf;
  }
  if (0xf < param_3) {
    uVar6 = param_3 >> 4;
    lVar5 = (longlong)param_2 - param_5;
    lVar7 = (longlong)param_1 - param_5;
    param_3 = param_3 + uVar6 * -0x10;
    param_2 = param_2 + uVar6 * 0x10;
    param_1 = param_1 + uVar6 * 0x10;
    do {
      (*param_7)(param_5,param_5,param_4);
      if (uVar4 < 0x10) {
        puVar2 = (ulonglong *)((ulonglong)uVar4 + param_5);
        uVar3 = (ulonglong)((0xf - uVar4 >> 3) + 1);
        do {
          *(ulonglong *)(lVar5 + (longlong)puVar2) =
               *(ulonglong *)(lVar7 + (longlong)puVar2) ^ *puVar2;
          puVar2 = puVar2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      lVar5 = lVar5 + 0x10;
      lVar7 = lVar7 + 0x10;
      uVar4 = 0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_3 != 0) {
    (*param_7)(param_5,param_5,param_4);
    do {
      uVar6 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_2[uVar6] = param_1[uVar6] ^ *(byte *)(uVar6 + param_5);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_6 = uVar4;
  return;
}

