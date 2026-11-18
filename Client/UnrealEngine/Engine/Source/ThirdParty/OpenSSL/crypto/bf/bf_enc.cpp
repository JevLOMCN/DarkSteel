// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// BF_cbc_encrypt @ 14f7ab4d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BF_cbc_encrypt(byte *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,byte *param_5,
                   int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_38;
  uint local_34;
  byte *local_30;
  
  if (param_6 == 0) {
    iVar6 = param_3 - 8;
    local_30 = param_5;
    uVar8 = (uint)*param_5 << 0x18 | (uint)param_5[1] << 0x10 | (uint)param_5[2] << 8 |
            (uint)param_5[3];
    uVar9 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | (uint)param_5[6] << 8 |
            (uint)param_5[7];
    if (-1 < iVar6) {
      uVar10 = (ulonglong)(param_3 >> 3);
      iVar6 = iVar6 + (param_3 >> 3) * -8;
      uVar7 = uVar8;
      uVar5 = uVar9;
      do {
        uVar8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                (uint)param_1[3];
        uVar9 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
                (uint)param_1[7];
        param_1 = param_1 + 8;
        local_38 = uVar8;
        local_34 = uVar9;
        BF_decrypt(&local_38,param_4);
        local_38 = local_38 ^ uVar7;
        local_34 = local_34 ^ uVar5;
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar10 = uVar10 - 1;
        uVar7 = uVar8;
        uVar5 = uVar9;
      } while (uVar10 != 0);
    }
    pbVar1 = local_30;
    uVar7 = uVar8;
    uVar5 = uVar9;
    if (iVar6 != -8) {
      uVar7 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
              (uint)param_1[3];
      uVar5 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 |
              (uint)CONCAT11(param_1[6],param_1[7]);
      local_38 = uVar7;
      local_34 = uVar5;
      BF_decrypt(&local_38,param_4);
      local_38 = local_38 ^ uVar8;
      local_34 = local_34 ^ uVar9;
      param_2 = param_2 + (iVar6 + 8);
      switch(iVar6) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)local_34;
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 8);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x10);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x18);
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)local_38;
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 8);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x10);
      case -7:
        param_2[-1] = (char)(local_38 >> 0x18);
      }
    }
    *pbVar1 = (byte)(uVar7 >> 0x18);
    pbVar1[1] = (byte)(uVar7 >> 0x10);
    pbVar1[2] = (byte)(uVar7 >> 8);
    pbVar1[3] = (byte)uVar7;
    pbVar1[4] = (byte)(uVar5 >> 0x18);
    pbVar1[5] = (byte)(uVar5 >> 0x10);
    pbVar1[6] = (byte)(uVar5 >> 8);
    pbVar1[7] = (byte)uVar5;
    return;
  }
  iVar6 = param_3 - 8;
  local_30 = param_5;
  local_38 = (uint)*param_5 << 0x18 | (uint)param_5[1] << 0x10 | (uint)param_5[2] << 8 |
             (uint)param_5[3];
  local_34 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | (uint)param_5[6] << 8 |
             (uint)param_5[7];
  if (-1 < iVar6) {
    uVar10 = (ulonglong)(param_3 >> 3);
    iVar6 = iVar6 + (param_3 >> 3) * -8;
    do {
      pbVar1 = param_1 + 4;
      pbVar2 = param_1 + 5;
      local_38 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                 (uint)param_1[3]) ^ local_38;
      pbVar3 = param_1 + 6;
      pbVar4 = param_1 + 7;
      param_1 = param_1 + 8;
      local_34 = ((uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar4
                 ) ^ local_34;
      BF_encrypt(&local_38,param_4);
      *param_2 = (char)(local_38 >> 0x18);
      param_2[1] = (char)(local_38 >> 0x10);
      param_2[2] = (char)(local_38 >> 8);
      param_2[3] = (char)local_38;
      param_2[4] = (char)(local_34 >> 0x18);
      param_2[5] = (char)(local_34 >> 0x10);
      param_2[6] = (char)(local_34 >> 8);
      param_2[7] = (char)local_34;
      param_2 = param_2 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  pbVar1 = local_30;
  if (iVar6 != -8) {
    param_1 = param_1 + (iVar6 + 8);
    uVar8 = 0;
    uVar9 = 0;
    switch(iVar6) {
    case 0:
      uVar8 = (uint)param_1[-1];
      param_1 = param_1 + -1;
    case -1:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 8;
    case -2:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 0x10;
    case -3:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 0x18;
    case -4:
      uVar9 = (uint)param_1[-1];
      param_1 = param_1 + -1;
    case -5:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar9 = uVar9 | (uint)*pbVar2 << 8;
    case -6:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar9 = uVar9 | (uint)*pbVar2 << 0x10;
    case -7:
      uVar9 = uVar9 | (uint)param_1[-1] << 0x18;
    default:
      local_38 = uVar9 ^ local_38;
      local_34 = uVar8 ^ local_34;
      BF_encrypt(&local_38,param_4);
      *param_2 = (char)(local_38 >> 0x18);
      param_2[1] = (char)(local_38 >> 0x10);
      param_2[2] = (char)(local_38 >> 8);
      param_2[3] = (char)local_38;
      param_2[4] = (char)(local_34 >> 0x18);
      param_2[5] = (char)(local_34 >> 0x10);
      param_2[6] = (char)(local_34 >> 8);
      param_2[7] = (char)local_34;
    }
  }
  *pbVar1 = (byte)(local_38 >> 0x18);
  pbVar1[1] = (byte)(local_38 >> 0x10);
  pbVar1[2] = (byte)(local_38 >> 8);
  pbVar1[3] = (byte)local_38;
  pbVar1[4] = (byte)(local_34 >> 0x18);
  pbVar1[5] = (byte)(local_34 >> 0x10);
  pbVar1[6] = (byte)(local_34 >> 8);
  pbVar1[7] = (byte)local_34;
  return;
}

// BF_decrypt @ 14f7aba50

void BF_decrypt(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_2[0x11] ^ *param_1;
  uVar6 = (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
           param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
          param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0x10] ^ param_1[1];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xf];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xe];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xd];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xc];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xb];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[10];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[9];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[8];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[7];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[6];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[5];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[4];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[3];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[2];
  uVar1 = param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12];
  uVar2 = param_2[(ulonglong)(uVar6 >> 0x18) + 0x12];
  uVar3 = param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12];
  uVar4 = param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12];
  uVar5 = param_2[1];
  *param_1 = uVar6 ^ *param_2;
  param_1[1] = uVar7 ^ (uVar1 + uVar2 ^ uVar3) + uVar4 ^ uVar5;
  return;
}

// BF_encrypt @ 14f7abf00

void BF_encrypt(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_1 ^ *param_2;
  uVar6 = (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
           param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
          param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[1] ^ param_1[1];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[2];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[3];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[4];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[5];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[6];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[7];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[8];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[9];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[10];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xb];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xc];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xd];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xe];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xf];
  uVar1 = param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12];
  uVar2 = param_2[(ulonglong)(uVar6 >> 0x18) + 0x12];
  uVar3 = param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12];
  uVar4 = param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12];
  uVar5 = param_2[0x10];
  *param_1 = uVar6 ^ param_2[0x11];
  param_1[1] = uVar7 ^ (uVar1 + uVar2 ^ uVar3) + uVar4 ^ uVar5;
  return;
}

