// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// SEED_decrypt @ 14f7415b0

void SEED_decrypt(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar3 = param_3[0x1e] ^ uVar7;
  uVar1 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar2 = param_3[0x1f] ^ uVar3 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar3 = uVar3 + uVar5;
  uVar2 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar5 = uVar5 + uVar2;
  uVar3 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar3 + uVar2;
  uVar4 = param_3[0x1c] ^ uVar2;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^ uVar3;
  uVar5 = param_3[0x1d] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x1a] ^ uVar7;
  uVar5 = param_3[0x1b] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x18] ^ uVar2;
  uVar5 = param_3[0x19] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x16] ^ uVar7;
  uVar5 = param_3[0x17] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x14] ^ uVar2;
  uVar5 = param_3[0x15] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x12] ^ uVar7;
  uVar5 = param_3[0x13] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar3 = uVar3 ^ uVar5;
  uVar4 = param_3[0x10] ^ uVar2;
  uVar5 = param_3[0x11] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0xe] ^ uVar7;
  uVar5 = param_3[0xf] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0xc] ^ uVar2;
  uVar5 = param_3[0xd] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[10] ^ uVar7;
  uVar5 = param_3[0xb] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[8] ^ uVar2;
  uVar5 = param_3[9] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[6] ^ uVar7;
  uVar5 = param_3[7] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[4] ^ uVar2;
  uVar5 = param_3[5] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[2] ^ uVar7;
  uVar5 = param_3[3] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar5 = param_3[1] ^ *param_3 ^ uVar2 ^ uVar3;
  uVar6 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = (*param_3 ^ uVar2) + uVar6;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar6 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  param_2[3] = (char)uVar7;
  *param_2 = (char)(uVar7 >> 0x18);
  param_2[1] = (char)(uVar7 >> 0x10);
  param_2[2] = (char)(uVar7 >> 8);
  param_2[4] = (char)(uVar1 >> 0x18);
  param_2[5] = (char)(uVar1 >> 0x10);
  param_2[6] = (char)(uVar1 >> 8);
  param_2[8] = (char)(uVar2 >> 0x18);
  param_2[9] = (char)(uVar2 >> 0x10);
  param_2[10] = (char)(uVar2 >> 8);
  param_2[0xc] = (char)(uVar3 >> 0x18);
  param_2[0xd] = (char)(uVar3 >> 0x10);
  param_2[7] = (char)uVar1;
  param_2[0xb] = (char)uVar2;
  param_2[0xf] = (char)uVar3;
  param_2[0xe] = (char)(uVar3 >> 8);
  return;
}

// SEED_encrypt @ 14f742460

void SEED_encrypt(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar3 = *param_3 ^ uVar7;
  uVar1 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar2 = param_3[1] ^ uVar3 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar2 & 0xff) * 4);
  uVar3 = uVar3 + uVar5;
  uVar2 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar3 & 0xff) * 4);
  uVar5 = uVar5 + uVar2;
  uVar3 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar3 + uVar2;
  uVar4 = param_3[2] ^ uVar2;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^ uVar3;
  uVar5 = param_3[3] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[4] ^ uVar7;
  uVar5 = param_3[5] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[6] ^ uVar2;
  uVar5 = param_3[7] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[8] ^ uVar7;
  uVar5 = param_3[9] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[10] ^ uVar2;
  uVar5 = param_3[0xb] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0xc] ^ uVar7;
  uVar5 = param_3[0xd] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar3 = uVar3 ^ uVar5;
  uVar4 = param_3[0xe] ^ uVar2;
  uVar5 = param_3[0xf] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x10] ^ uVar7;
  uVar5 = param_3[0x11] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x12] ^ uVar2;
  uVar5 = param_3[0x13] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x14] ^ uVar7;
  uVar5 = param_3[0x15] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x16] ^ uVar2;
  uVar5 = param_3[0x17] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x18] ^ uVar7;
  uVar5 = param_3[0x19] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar4 = param_3[0x1a] ^ uVar2;
  uVar5 = param_3[0x1b] ^ uVar4 ^ uVar3;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  uVar4 = param_3[0x1c] ^ uVar7;
  uVar5 = param_3[0x1d] ^ uVar4 ^ uVar1;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar4 = uVar4 + uVar5;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar4 & 0xff) * 4);
  uVar5 = uVar5 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar5;
  uVar2 = uVar2 ^ uVar5 + uVar4;
  uVar5 = param_3[0x1f] ^ param_3[0x1e] ^ uVar2 ^ uVar3;
  uVar6 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar5 = (param_3[0x1e] ^ uVar2) + uVar6;
  uVar4 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar5 & 0xff) * 4);
  uVar6 = uVar6 + uVar4;
  uVar5 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar6 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar5;
  uVar7 = uVar7 ^ uVar5 + uVar4;
  param_2[3] = (char)uVar7;
  *param_2 = (char)(uVar7 >> 0x18);
  param_2[1] = (char)(uVar7 >> 0x10);
  param_2[2] = (char)(uVar7 >> 8);
  param_2[4] = (char)(uVar1 >> 0x18);
  param_2[5] = (char)(uVar1 >> 0x10);
  param_2[6] = (char)(uVar1 >> 8);
  param_2[8] = (char)(uVar2 >> 0x18);
  param_2[9] = (char)(uVar2 >> 0x10);
  param_2[10] = (char)(uVar2 >> 8);
  param_2[0xc] = (char)(uVar3 >> 0x18);
  param_2[0xd] = (char)(uVar3 >> 0x10);
  param_2[7] = (char)uVar1;
  param_2[0xb] = (char)uVar2;
  param_2[0xf] = (char)uVar3;
  param_2[0xe] = (char)(uVar3 >> 8);
  return;
}

// SEED_set_key @ 14f743310

void SEED_set_key(undefined1 *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  bVar1 = param_1[8];
  bVar2 = param_1[0xc];
  uVar5 = CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
  uVar3 = param_1[3];
  uVar6 = CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]);
  uVar4 = param_1[7];
  uVar8 = CONCAT31(CONCAT21(CONCAT11(bVar1,param_1[9]),param_1[10]),param_1[0xb]);
  uVar11 = CONCAT31(uVar5,uVar3) + 0x61c88647 + uVar8;
  uVar7 = CONCAT31(CONCAT21(CONCAT11(bVar2,param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar13 = (CONCAT31(uVar6,uVar4) - uVar7) + 0x9e3779b9;
  *param_2 = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar11 >> 0x18) * 4) ^
             *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar11 & 0xff) * 4);
  param_2[1] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar13 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar13 & 0xff) * 4);
  uVar9 = CONCAT31(uVar6,uVar4) << 0x18 ^ (uint)uVar5;
  uVar10 = CONCAT31(uVar5,uVar3) << 0x18 ^ (uint)uVar6;
  uVar11 = uVar9 + 0xc3910c8d + uVar8;
  uVar13 = (uVar10 - uVar7) + 0x3c6ef373;
  param_2[2] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar11 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar11 & 0xff) * 4);
  uVar16 = (uint)bVar2 ^ uVar8 << 8;
  param_2[3] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar13 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar13 & 0xff) * 4);
  uVar11 = uVar9 + 0x8722191a + uVar16;
  uVar13 = (uint)bVar1 ^ uVar7 << 8;
  uVar14 = (uVar10 - uVar13) + 0x78dde6e6;
  param_2[4] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar11 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar11 & 0xff) * 4);
  param_2[5] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar14 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar11 = (uint)uVar6 << 0x18 ^ uVar9 >> 8;
  uVar14 = (uint)uVar5 << 0x18 ^ uVar10 >> 8;
  uVar15 = (uVar14 - uVar13) + 0xf1bbcdcc;
  uVar12 = uVar11 + 0xe443234 + uVar16;
  param_2[6] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar12 = (uVar7 & 0xffffff) >> 0x10 ^ uVar16 << 8;
  param_2[7] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar15 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar7 = uVar11 + 0x1c886467 + uVar12;
  uVar17 = (uVar8 & 0xffffff) >> 0x10 ^ uVar13 << 8;
  uVar15 = (uVar14 - uVar17) + 0xe3779b99;
  param_2[8] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar7 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar7 & 0xff) * 4);
  uVar8 = (uVar10 >> 8) << 0x18 ^ uVar11 >> 8;
  param_2[9] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar15 >> 0x18) * 4) ^
               *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar7 = (uVar9 >> 8) << 0x18 ^ uVar14 >> 8;
  uVar9 = uVar8 + 0x3910c8cd + uVar12;
  uVar10 = (uVar7 - uVar17) + 0xc6ef3733;
  param_2[10] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar9 >> 0x18) * 4) ^
                *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar9 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar9 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar9 & 0xff) * 4);
  uVar9 = (uVar13 & 0xffffff) >> 0x10 ^ uVar12 << 8;
  param_2[0xb] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar10 >> 0x18) * 4) ^
                 *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar10 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar10 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar10 & 0xff) * 4);
  uVar13 = uVar8 + 0x72219199 + uVar9;
  uVar10 = (uVar16 & 0xffffff) >> 0x10 ^ uVar17 << 8;
  uVar15 = (uVar7 - uVar10) + 0x8dde6e67;
  param_2[0xc] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar13 >> 0x18) * 4) ^
                 *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar13 & 0xff) * 4);
  uVar16 = (uVar14 >> 8) << 0x18 ^ uVar8 >> 8;
  param_2[0xd] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar15 >> 0x18) * 4) ^
                 *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar13 = (uVar11 >> 8) << 0x18 ^ uVar7 >> 8;
  uVar11 = uVar16 + 0xe4432331 + uVar9;
  uVar14 = (uVar13 - uVar10) + 0x1bbcdccf;
  param_2[0xe] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar11 >> 0x18) * 4) ^
                 *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar11 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar11 & 0xff) * 4);
  uVar11 = (uVar17 & 0xffffff) >> 0x10 ^ uVar9 << 8;
  param_2[0xf] = *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar14 >> 0x18) * 4) ^
                 *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar15 = uVar16 + 0xc8864662 + uVar11;
  uVar14 = (uVar12 & 0xffffff) >> 0x10 ^ uVar10 << 8;
  uVar12 = (uVar13 - uVar14) + 0x3779b99e;
  param_2[0x10] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar15 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar17 = (uVar7 >> 8) << 0x18 ^ uVar16 >> 8;
  param_2[0x11] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar15 = (uVar8 >> 8) << 0x18 ^ uVar13 >> 8;
  uVar7 = uVar17 + 0x910c8cc4 + uVar11;
  uVar12 = (uVar15 - uVar14) + 0x6ef3733c;
  param_2[0x12] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar7 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar7 & 0xff) * 4);
  uVar8 = (uVar10 & 0xffffff) >> 0x10 ^ uVar11 << 8;
  uVar10 = uVar17 + 0x22191988 + uVar8;
  param_2[0x13] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar7 = (uVar9 & 0xffffff) >> 0x10 ^ uVar14 << 8;
  uVar12 = (uVar15 - uVar7) + 0xdde6e678;
  param_2[0x14] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar10 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar10 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar10 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar10 & 0xff) * 4);
  uVar9 = (uVar13 >> 8) << 0x18 ^ uVar17 >> 8;
  param_2[0x15] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar16 = (uVar16 >> 8) << 0x18 ^ uVar15 >> 8;
  uVar13 = uVar9 + 0x4432330f + uVar8;
  uVar12 = (uVar16 - uVar7) + 0xbbcdccf1;
  param_2[0x16] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar13 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar13 & 0xff) * 4);
  uVar10 = (uVar14 & 0xffffff) >> 0x10 ^ uVar8 << 8;
  uVar14 = uVar9 + 0x8864661d + uVar10;
  param_2[0x17] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar13 = (uVar11 & 0xffffff) >> 0x10 ^ uVar7 << 8;
  uVar12 = (uVar16 - uVar13) + 0x779b99e3;
  param_2[0x18] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar14 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar14 & 0xff) * 4);
  uVar11 = (uVar15 >> 8) << 0x18 ^ uVar9 >> 8;
  param_2[0x19] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar14 = (uVar17 >> 8) << 0x18 ^ uVar16 >> 8;
  uVar12 = uVar11 + 0x10c8cc3a + uVar10;
  uVar15 = (uVar14 - uVar13) + 0xef3733c6;
  param_2[0x1a] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar12 & 0xff) * 4);
  uVar12 = (uVar7 & 0xffffff) >> 0x10 ^ uVar10 << 8;
  uVar10 = uVar11 + 0x21919873 + uVar12;
  param_2[0x1b] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar15 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar15 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar15 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar15 & 0xff) * 4);
  uVar7 = (uVar8 & 0xffffff) >> 0x10 ^ uVar13 << 8;
  uVar8 = (uVar14 - uVar7) + 0xde6e678d;
  param_2[0x1c] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar10 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar10 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar10 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar10 & 0xff) * 4);
  param_2[0x1d] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar8 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar8 & 0xff) * 4);
  uVar12 = ((uVar16 >> 8) << 0x18 ^ uVar11 >> 8) + 0x432330e5 + uVar12;
  uVar7 = (((uVar9 >> 8) << 0x18 ^ uVar14 >> 8) - uVar7) + 0xbcdccf1b;
  param_2[0x1e] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar12 & 0xff) * 4);
  param_2[0x1f] =
       *(uint *)(&DAT_1534bdee0 + (ulonglong)(uVar7 >> 0x18) * 4) ^
       *(uint *)(&DAT_1534bdae0 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd6e0 + (ulonglong)(uVar7 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_1534bd2e0 + (ulonglong)(uVar7 & 0xff) * 4);
  return;
}

