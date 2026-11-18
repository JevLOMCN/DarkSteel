// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// BF_cfb64_encrypt @ 14f7ac3b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BF_cfb64_encrypt(byte *param_1,byte *param_2,int param_3,undefined8 param_4,undefined1 *param_5
                     ,uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar4 = param_6;
  puVar3 = param_5;
  uVar5 = *param_6;
  if (param_7 == 0) {
    param_7 = 0;
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar5 == 0) {
        param_5._0_4_ =
             (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
             (uint)(byte)puVar3[3];
        param_5._4_4_ =
             (uint)CONCAT11(puVar3[6],puVar3[7]) |
             (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
        BF_encrypt(&param_5,param_4);
        *puVar3 = (char)((uint)param_5 >> 0x18);
        puVar3[1] = (char)((uint)param_5 >> 0x10);
        puVar3[2] = (char)((uint)param_5 >> 8);
        puVar3[3] = param_5._0_1_;
        puVar3[4] = (char)(param_5._4_4_ >> 0x18);
        puVar3[5] = (char)(param_5._4_4_ >> 0x10);
        puVar3[6] = (char)(param_5._4_4_ >> 8);
        puVar3[7] = param_5._4_1_;
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = puVar3[(int)uVar5];
      puVar3[(int)uVar5] = bVar1;
      *param_2 = bVar1 ^ bVar2;
      param_2 = param_2 + 1;
      uVar5 = uVar5 + 1 & 7;
    }
  }
  else if (param_3 != 0) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    do {
      param_3 = param_3 + -1;
      if (uVar5 == 0) {
        param_5._0_4_ =
             (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
             (uint)(byte)puVar3[3];
        param_5._4_4_ =
             (uint)CONCAT11(puVar3[6],puVar3[7]) |
             (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
        BF_encrypt(&param_5,param_4);
        *puVar3 = (char)((uint)param_5 >> 0x18);
        puVar3[1] = (char)((uint)param_5 >> 0x10);
        puVar3[2] = (char)((uint)param_5 >> 8);
        puVar3[3] = param_5._0_1_;
        puVar3[4] = (char)(param_5._4_4_ >> 0x18);
        puVar3[5] = (char)(param_5._4_4_ >> 0x10);
        puVar3[6] = (char)(param_5._4_4_ >> 8);
        puVar3[7] = param_5._4_1_;
      }
      bVar1 = param_2[lVar6];
      bVar2 = puVar3[(int)uVar5];
      *param_2 = bVar1 ^ bVar2;
      param_2 = param_2 + 1;
      puVar3[(int)uVar5] = bVar1 ^ bVar2;
      uVar5 = uVar5 + 1 & 7;
    } while (param_3 != 0);
  }
  *puVar4 = uVar5;
  return;
}

