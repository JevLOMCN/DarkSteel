// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// SM4_decrypt @ 14f7af360

void SM4_decrypt(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar3 = param_3[0x1f] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar7 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar7 = ((uint)(uVar2 >> 6) | uVar7 << 0x12) ^ (uVar7 << 10 | (uint)(uVar1 >> 6)) ^
          ((uint)uVar2 | uVar7 << 0x18) ^
          (uVar7 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^
          CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar7;
  uVar3 = param_3[0x1e] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1d] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1c] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1b] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1a] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x19] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x18] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x17] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x16] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x15] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x14] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x13] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x12] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x11] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x10] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xf] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xe] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xd] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xc] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xb] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[10] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[9] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[8] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[7] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[6] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[5] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[4] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[3] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar7 = uVar7 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[2] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[1] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = *param_3 ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  param_2[3] = (char)uVar4;
  *param_2 = (char)(uVar4 >> 0x18);
  param_2[1] = (char)(uVar4 >> 0x10);
  param_2[2] = (char)(uVar4 >> 8);
  param_2[4] = (char)(uVar6 >> 0x18);
  param_2[5] = (char)(uVar6 >> 0x10);
  param_2[6] = (char)(uVar6 >> 8);
  param_2[7] = (char)uVar6;
  param_2[8] = (char)(uVar5 >> 0x18);
  param_2[9] = (char)(uVar5 >> 0x10);
  param_2[10] = (char)(uVar5 >> 8);
  param_2[0xb] = (char)uVar5;
  param_2[0xc] = (char)(uVar7 >> 0x18);
  param_2[0xd] = (char)(uVar7 >> 0x10);
  param_2[0xe] = (char)(uVar7 >> 8);
  param_2[0xf] = (char)uVar7;
  return;
}

// SM4_encrypt @ 14f7b0130

void SM4_encrypt(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar3 = *param_3 ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar7 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar7 = ((uint)(uVar2 >> 6) | uVar7 << 0x12) ^ (uVar7 << 10 | (uint)(uVar1 >> 6)) ^
          ((uint)uVar2 | uVar7 << 0x18) ^
          (uVar7 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^
          CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar7;
  uVar3 = param_3[1] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[2] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[3] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[4] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[5] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[6] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[7] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[8] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[9] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[10] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xb] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xc] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xd] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xe] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xf] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x10] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x11] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x12] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x13] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x14] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x15] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x16] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x17] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x18] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x19] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1a] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1b] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_1534e9b50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1c] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar7 = uVar7 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1d] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1e] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1f] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_1534e9a50)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  param_2[3] = (char)uVar4;
  *param_2 = (char)(uVar4 >> 0x18);
  param_2[1] = (char)(uVar4 >> 0x10);
  param_2[2] = (char)(uVar4 >> 8);
  param_2[4] = (char)(uVar6 >> 0x18);
  param_2[5] = (char)(uVar6 >> 0x10);
  param_2[6] = (char)(uVar6 >> 8);
  param_2[7] = (char)uVar6;
  param_2[8] = (char)(uVar5 >> 0x18);
  param_2[9] = (char)(uVar5 >> 0x10);
  param_2[10] = (char)(uVar5 >> 8);
  param_2[0xb] = (char)uVar5;
  param_2[0xc] = (char)(uVar7 >> 0x18);
  param_2[0xd] = (char)(uVar7 >> 0x10);
  param_2[0xe] = (char)(uVar7 >> 8);
  param_2[0xf] = (char)uVar7;
  return;
}

// SM4_set_key @ 14f7b0f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 SM4_set_key(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_28 [4];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7b0f10;
  local_18 = __security_cookie.value ^ (ulonglong)local_28;
  local_28[0] = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ 0xa3b1bac6
  ;
  local_28[1] = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^
                0x56aa3350;
  local_28[2] = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]) ^
                0x677d9197;
  local_28[3] = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]) ^
                0xb27022dc;
  lVar7 = (longlong)&DAT_1534e9f60 - (longlong)param_2;
  uVar6 = 2;
  do {
    uVar1 = uVar6 + 1;
    uVar3 = uVar6 - 1 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    uVar4 = uVar1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    uVar5 = uVar6 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    uVar3 = local_28[(int)uVar3] ^ local_28[(int)uVar4] ^ local_28[(int)uVar5] ^
            *(uint *)(lVar7 + (longlong)param_2);
    uVar2 = CONCAT21(CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],(&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]
                             ),(&DAT_1534e9a50)[uVar3 >> 8 & 0xff]);
    uVar4 = CONCAT31(uVar2,(&DAT_1534e9a50)[uVar3 & 0xff]);
    uVar6 = uVar6 - 2 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    uVar4 = (uVar4 << 0xd |
            (uint)(ushort)(CONCAT11((&DAT_1534e9a50)[uVar3 >> 0x18],
                                    (&DAT_1534e9a50)[uVar3 >> 0x10 & 0xff]) >> 3)) ^
            ((uint)(uVar2 >> 1) | uVar4 << 0x17) ^ local_28[(int)uVar6] ^ uVar4;
    *param_2 = uVar4;
    param_2 = param_2 + 1;
    local_28[(int)uVar6] = uVar4;
    uVar6 = uVar1;
  } while (uVar1 != 0x22);
  return 1;
}

