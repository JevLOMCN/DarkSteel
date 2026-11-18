// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 1

// RC2_cfb64_encrypt @ 14f73f660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RC2_cfb64_encrypt(byte *param_1,byte *param_2,int param_3,undefined8 param_4,
                      undefined4 *param_5,uint *param_6,int param_7)

{
  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar3 = param_6;
  puVar2 = param_5;
  uVar5 = *param_6;
  if (param_7 == 0) {
    param_7 = 0;
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar5 == 0) {
        param_5._0_4_ = *puVar2;
        param_5._4_4_ = puVar2[1];
        RC2_encrypt(&param_5,param_4);
        *(undefined1 *)puVar2 = param_5._0_1_;
        *(char *)((longlong)puVar2 + 1) = (char)((uint)param_5._0_4_ >> 8);
        *(char *)((longlong)puVar2 + 2) = (char)((uint)param_5._0_4_ >> 0x10);
        *(char *)((longlong)puVar2 + 3) = (char)((uint)param_5._0_4_ >> 0x18);
        *(undefined1 *)(puVar2 + 1) = param_5._4_1_;
        *(char *)((longlong)puVar2 + 5) = (char)((uint)param_5._4_4_ >> 8);
        *(char *)((longlong)puVar2 + 6) = (char)((uint)param_5._4_4_ >> 0x10);
        *(char *)((longlong)puVar2 + 7) = (char)((uint)param_5._4_4_ >> 0x18);
      }
      bVar4 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *(byte *)((longlong)(int)uVar5 + (longlong)puVar2);
      *(byte *)((longlong)(int)uVar5 + (longlong)puVar2) = bVar4;
      *param_2 = bVar4 ^ bVar1;
      param_2 = param_2 + 1;
      uVar5 = uVar5 + 1 & 7;
    }
  }
  else if (param_3 != 0) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    do {
      param_3 = param_3 + -1;
      if (uVar5 == 0) {
        param_5._0_4_ = *puVar2;
        param_5._4_4_ = puVar2[1];
        RC2_encrypt(&param_5,param_4);
        *(undefined1 *)puVar2 = param_5._0_1_;
        *(char *)((longlong)puVar2 + 1) = (char)((uint)param_5._0_4_ >> 8);
        *(char *)((longlong)puVar2 + 2) = (char)((uint)param_5._0_4_ >> 0x10);
        *(char *)((longlong)puVar2 + 3) = (char)((uint)param_5._0_4_ >> 0x18);
        *(undefined1 *)(puVar2 + 1) = param_5._4_1_;
        *(char *)((longlong)puVar2 + 5) = (char)((uint)param_5._4_4_ >> 8);
        *(char *)((longlong)puVar2 + 6) = (char)((uint)param_5._4_4_ >> 0x10);
        *(char *)((longlong)puVar2 + 7) = (char)((uint)param_5._4_4_ >> 0x18);
      }
      bVar4 = param_2[lVar6] ^ *(byte *)((longlong)(int)uVar5 + (longlong)puVar2);
      *param_2 = bVar4;
      param_2 = param_2 + 1;
      *(byte *)((longlong)(int)uVar5 + (longlong)puVar2) = bVar4;
      uVar5 = uVar5 + 1 & 7;
    } while (param_3 != 0);
  }
  *puVar3 = uVar5;
  return;
}

