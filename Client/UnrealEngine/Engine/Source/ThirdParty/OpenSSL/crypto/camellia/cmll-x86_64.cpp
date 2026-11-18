// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// Camellia_EncryptBlock_Rounds @ 140e1b160

void Camellia_EncryptBlock_Rounds(undefined8 param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_2[3];
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  _x86_64_Camellia_encrypt(param_4,param_3);
  *param_4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  param_4[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  param_4[2] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  param_4[3] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  return;
}

// L$SEH_begin_Camellia_EncryptBlock_Rounds @ 140e1b16d

void L_SEH_begin_Camellia_EncryptBlock_Rounds
               (undefined8 param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_2[3];
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  _x86_64_Camellia_encrypt(param_4,param_3);
  *param_4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  param_4[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  param_4[2] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  param_4[3] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  return;
}

// _x86_64_Camellia_encrypt @ 140e1b200

uint _x86_64_Camellia_encrypt(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong unaff_RBP;
  uint in_R10D;
  uint uVar4;
  uint in_R11D;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_R14;
  uint *unaff_R15;
  
  param_4 = param_4 ^ *unaff_R14;
  param_3 = param_3 ^ unaff_R14[1];
  uVar5 = in_R11D ^ unaff_R14[2];
  uVar4 = in_R10D ^ unaff_R14[3];
  while( true ) {
    uVar1 = unaff_R14[5] ^ param_3;
    uVar3 = unaff_R14[4] ^ param_4;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar1 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar1 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar1 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 8);
    uVar1 = *(uint *)(unaff_RBP + (ulonglong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar3 >> 0x18) * 8) ^ uVar2;
    uVar4 = uVar4 ^ uVar1;
    uVar6 = uVar5 ^ uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar5 = unaff_R14[7] ^ uVar4;
    uVar2 = unaff_R14[6] ^ uVar6;
    uVar1 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar5 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar5 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 8);
    uVar5 = *(uint *)(unaff_RBP + (ulonglong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar2 >> 0x18) * 8) ^ uVar1;
    param_3 = param_3 ^ uVar5;
    uVar3 = param_4 ^ uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
    uVar5 = unaff_R14[9] ^ param_3;
    uVar2 = unaff_R14[8] ^ uVar3;
    uVar1 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar5 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar5 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 8);
    uVar5 = *(uint *)(unaff_RBP + (ulonglong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar2 >> 0x18) * 8) ^ uVar1;
    uVar4 = uVar4 ^ uVar5;
    uVar7 = uVar6 ^ uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
    uVar5 = unaff_R14[0xb] ^ uVar4;
    uVar2 = unaff_R14[10] ^ uVar7;
    uVar1 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar5 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar5 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 8);
    uVar5 = *(uint *)(unaff_RBP + (ulonglong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar2 >> 0x18) * 8) ^ uVar1;
    param_3 = param_3 ^ uVar5;
    uVar6 = uVar3 ^ uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
    uVar5 = unaff_R14[0xd] ^ param_3;
    uVar2 = unaff_R14[0xc] ^ uVar6;
    uVar1 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar5 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar5 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar5 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar5 >> 0x10 & 0xff) * 8);
    uVar5 = *(uint *)(unaff_RBP + (ulonglong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar2 >> 0x18) * 8) ^ uVar1;
    uVar4 = uVar4 ^ uVar5;
    uVar5 = uVar7 ^ uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
    uVar1 = unaff_R14[0xf] ^ uVar4;
    uVar3 = unaff_R14[0xe] ^ uVar5;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar1 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar1 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar1 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 8);
    uVar1 = *(uint *)(unaff_RBP + (ulonglong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar3 >> 0x18) * 8) ^ uVar2;
    param_3 = param_3 ^ uVar1;
    if (unaff_R14 + 0x10 == unaff_R15) break;
    uVar3 = unaff_R14[0x11] & param_3;
    uVar4 = uVar4 ^ (unaff_R14[0x12] | uVar5);
    param_4 = uVar6 ^ uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18) ^ (uVar3 << 1 | (uint)((int)uVar3 < 0));
    param_3 = param_3 ^ (unaff_R14[0x10] | param_4);
    uVar5 = uVar5 ^ ((unaff_R14[0x13] & uVar4) << 1 | (uint)((int)(unaff_R14[0x13] & uVar4) < 0));
    unaff_R14 = unaff_R14 + 0x10;
  }
  return unaff_R14[0x11] ^ uVar4;
}

// Camellia_DecryptBlock_Rounds @ 140e1b4f0

void Camellia_DecryptBlock_Rounds(undefined8 param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_2[3];
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  _x86_64_Camellia_decrypt(param_4,param_3);
  *param_4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  param_4[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  param_4[2] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  param_4[3] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  return;
}

// L$SEH_begin_Camellia_DecryptBlock_Rounds @ 140e1b4fd

void L_SEH_begin_Camellia_DecryptBlock_Rounds
               (undefined8 param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_2[3];
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  _x86_64_Camellia_decrypt(param_4,param_3);
  *param_4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  param_4[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  param_4[2] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  param_4[3] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  return;
}

// _x86_64_Camellia_decrypt @ 140e1b590

uint _x86_64_Camellia_decrypt(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong unaff_RBP;
  uint in_R10D;
  uint uVar5;
  uint in_R11D;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_R14;
  uint *unaff_R15;
  
  param_4 = param_4 ^ *unaff_R14;
  param_3 = param_3 ^ unaff_R14[1];
  uVar6 = in_R11D ^ unaff_R14[2];
  uVar5 = in_R10D ^ unaff_R14[3];
  while( true ) {
    uVar2 = unaff_R14[-1] ^ param_3;
    uVar4 = unaff_R14[-2] ^ param_4;
    uVar3 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar2 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 8);
    uVar2 = *(uint *)(unaff_RBP + (ulonglong)(uVar4 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar4 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar4 >> 0x18) * 8) ^ uVar3;
    uVar5 = uVar5 ^ uVar2;
    uVar7 = uVar6 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18);
    uVar6 = unaff_R14[-3] ^ uVar5;
    uVar3 = unaff_R14[-4] ^ uVar7;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (ulonglong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar3 >> 0x18) * 8) ^ uVar2;
    param_3 = param_3 ^ uVar6;
    uVar4 = param_4 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-5] ^ param_3;
    uVar3 = unaff_R14[-6] ^ uVar4;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (ulonglong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar3 >> 0x18) * 8) ^ uVar2;
    uVar5 = uVar5 ^ uVar6;
    uVar8 = uVar7 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-7] ^ uVar5;
    uVar3 = unaff_R14[-8] ^ uVar8;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (ulonglong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar3 >> 0x18) * 8) ^ uVar2;
    param_3 = param_3 ^ uVar6;
    uVar7 = uVar4 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-9] ^ param_3;
    uVar3 = unaff_R14[-10] ^ uVar7;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (ulonglong)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar3 >> 0x18) * 8) ^ uVar2;
    uVar5 = uVar5 ^ uVar6;
    uVar6 = uVar8 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar2 = unaff_R14[-0xb] ^ uVar5;
    uVar4 = unaff_R14[-0xc] ^ uVar6;
    uVar3 = *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (ulonglong)(uVar2 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 8);
    uVar2 = *(uint *)(unaff_RBP + (ulonglong)(uVar4 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (ulonglong)(uVar4 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (ulonglong)(uVar4 >> 0x18) * 8) ^ uVar3;
    param_3 = param_3 ^ uVar2;
    puVar1 = unaff_R14 + -0x10;
    if (puVar1 == unaff_R15) break;
    uVar4 = unaff_R14[-0xd] & param_3;
    uVar5 = uVar5 ^ (*puVar1 | uVar6);
    param_4 = uVar7 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ (uVar4 << 1 | (uint)((int)uVar4 < 0));
    param_3 = param_3 ^ (unaff_R14[-0xe] | param_4);
    uVar6 = uVar6 ^ ((unaff_R14[-0xf] & uVar5) << 1 | (uint)((int)(unaff_R14[-0xf] & uVar5) < 0));
    unaff_R14 = puVar1;
  }
  return unaff_R14[-0xd] ^ param_3;
}

// Camellia_Ekeygen @ 140e1b860

undefined8 Camellia_Ekeygen(int param_1,uint *param_2,ulonglong *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  
  uVar11 = *param_2;
  uVar14 = param_2[1];
  uVar18 = param_2[2];
  uVar24 = param_2[3];
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
  uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
  uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
  *(uint *)param_3 = uVar14;
  *(uint *)((longlong)param_3 + 4) = uVar11;
  *(uint *)(param_3 + 1) = uVar24;
  *(uint *)((longlong)param_3 + 0xc) = uVar18;
  if (param_1 != 0x80) {
    uVar11 = param_2[4];
    uVar14 = param_2[5];
    if (param_1 == 0xc0) {
      uVar18 = ~uVar11;
      uVar24 = ~uVar14;
    }
    else {
      uVar18 = param_2[6];
      uVar24 = param_2[7];
    }
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
    *(uint *)(param_3 + 4) = uVar14;
    *(uint *)((longlong)param_3 + 0x24) = uVar11;
    *(uint *)(param_3 + 5) = uVar24;
    *(uint *)((longlong)param_3 + 0x2c) = uVar18;
    uVar14 = uVar14 ^ (uint)*param_3;
    uVar11 = uVar11 ^ *(uint *)((longlong)param_3 + 4);
    uVar24 = uVar24 ^ (uint)param_3[1];
    uVar18 = uVar18 ^ *(uint *)((longlong)param_3 + 0xc);
  }
  uVar2 = DAT_140e1c064;
  uVar8 = DAT_140e1c060;
  uVar1 = DAT_140e1c044 ^ uVar11;
  uVar7 = L_Camellia_SIGMA ^ uVar14;
  uVar6 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar1 >> 8 & 0xff) * 8) ^
          *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar1 & 0xff) * 8 + 4) ^
          *(uint *)(&L_Camellia_SBOX + (uVar1 >> 0x18)) ^
          *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 8);
  uVar1 = *(uint *)(&L_Camellia_SBOX + (uVar7 & 0xff)) ^
          *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar7 >> 8 & 0xff) * 8 + 4) ^
          *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 8) ^
          *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar7 >> 0x18) * 8) ^ uVar6;
  uVar18 = uVar18 ^ uVar1;
  uVar7 = uVar24 ^ uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
  uVar24 = DAT_140e1c04c ^ uVar18;
  uVar6 = DAT_140e1c048 ^ uVar7;
  uVar1 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar24 >> 8 & 0xff) * 8) ^
          *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar24 & 0xff) * 8 + 4) ^
          *(uint *)(&L_Camellia_SBOX + (uVar24 >> 0x18)) ^
          *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar24 >> 0x10 & 0xff) * 8);
  uVar24 = *(uint *)(&L_Camellia_SBOX + (uVar6 & 0xff)) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar6 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar6 >> 0x18) * 8) ^ uVar1;
  uVar6 = uVar14 ^ uVar24 ^ (uVar1 >> 8 | uVar1 << 0x18) ^ (uint)*param_3;
  uVar1 = uVar11 ^ uVar24 ^ *(uint *)((longlong)param_3 + 4);
  uVar11 = DAT_140e1c054 ^ uVar1;
  uVar24 = DAT_140e1c050 ^ uVar6;
  uVar14 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar11 >> 8 & 0xff) * 8) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar11 & 0xff) * 8 + 4) ^
           *(uint *)(&L_Camellia_SBOX + (uVar11 >> 0x18)) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 8);
  uVar11 = *(uint *)(&L_Camellia_SBOX + (uVar24 & 0xff)) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar24 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar24 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar24 >> 0x18) * 8) ^ uVar14;
  uVar24 = uVar18 ^ *(uint *)((longlong)param_3 + 0xc) ^ uVar11;
  uVar7 = uVar7 ^ (uint)param_3[1] ^ uVar11 ^ (uVar14 >> 8 | uVar14 << 0x18);
  uVar11 = DAT_140e1c05c ^ uVar24;
  uVar18 = DAT_140e1c058 ^ uVar7;
  uVar14 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar11 >> 8 & 0xff) * 8) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar11 & 0xff) * 8 + 4) ^
           *(uint *)(&L_Camellia_SBOX + (uVar11 >> 0x18)) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 8);
  uVar11 = *(uint *)(&L_Camellia_SBOX + (uVar18 & 0xff)) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar18 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar18 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar18 >> 0x18) * 8) ^ uVar14;
  uVar1 = uVar1 ^ uVar11;
  uVar11 = uVar6 ^ uVar11 ^ (uVar14 >> 8 | uVar14 << 0x18);
  if (param_1 == 0x80) {
    uVar12 = CONCAT44(uVar1,uVar11);
    uVar19 = CONCAT44(uVar24,uVar7);
    uVar4 = *param_3;
    uVar10 = param_3[1];
    param_3[2] = uVar12;
    param_3[3] = uVar19;
    uVar3 = uVar4 << 0xf;
    uVar15 = uVar10 >> 0x31;
    uVar25 = uVar4 >> 0x31;
    uVar9 = uVar10 << 0xf;
    param_3[4] = uVar3 | uVar15;
    param_3[5] = uVar9 | uVar25;
    uVar13 = uVar12 << 0xf | (ulonglong)(uVar24 >> 0x11);
    uVar20 = uVar19 << 0xf | (ulonglong)(uVar1 >> 0x11);
    param_3[6] = uVar13;
    param_3[7] = uVar20;
    uVar16 = (uVar19 & 0x1ffffffffffff) >> 0x22;
    uVar26 = (uVar12 & 0x1ffffffffffff) >> 0x22;
    uVar13 = uVar13 << 0xf | uVar16;
    uVar21 = uVar20 << 0xf | uVar26;
    param_3[8] = uVar13;
    param_3[9] = uVar21;
    uVar20 = (uVar10 & 0x1ffffffffffff) >> 0x13;
    uVar27 = (uVar4 & 0x1ffffffffffff) >> 0x13;
    uVar4 = (uVar3 | uVar15) << 0x1e | uVar20;
    uVar10 = (uVar9 | uVar25) << 0x1e | uVar27;
    param_3[10] = uVar4;
    param_3[0xb] = uVar10;
    uVar19 = (uVar19 << 0xf & 0x1ffffffffffff) >> 0x22;
    uVar28 = (uVar12 << 0xf & 0x1ffffffffffff) >> 0x22;
    uVar12 = uVar13 << 0xf | uVar19;
    param_3[0xc] = uVar12;
    uVar13 = (uVar9 & 0x3ffffffff) >> 0x13;
    uVar29 = (uVar3 & 0x3ffffffff) >> 0x13;
    uVar10 = uVar10 << 0xf | uVar29;
    param_3[0xd] = uVar10;
    uVar17 = ((ulonglong)uVar7 & 0x7ffff) >> 4;
    uVar30 = ((ulonglong)uVar11 & 0x7ffff) >> 4;
    uVar12 = uVar12 << 0xf | uVar17;
    uVar21 = (uVar21 << 0xf | uVar28) << 0xf | uVar30;
    param_3[0xe] = uVar12;
    param_3[0xf] = uVar21;
    uVar4 = (uVar4 << 0xf | uVar13) << 0x11 | (uVar9 & 0x7ffff | uVar25) >> 2;
    uVar10 = uVar10 << 0x11 | (uVar3 & 0x7ffff | uVar15) >> 2;
    param_3[0x10] = uVar4;
    param_3[0x11] = uVar10;
    uVar4 = uVar4 << 0x11 | ((uVar25 & 3) << 0x1e | uVar27) >> 0xf;
    uVar10 = uVar10 << 0x11 | ((uVar15 & 3) << 0x1e | uVar20) >> 0xf;
    param_3[0x12] = uVar4;
    param_3[0x13] = uVar10;
    uVar3 = uVar12 << 0x22 |
            (((ulonglong)uVar7 & 0xf) << 0xf | (ulonglong)(uVar1 >> 0x11)) << 0xf | uVar26;
    uVar9 = uVar21 << 0x22 |
            (((ulonglong)uVar11 & 0xf) << 0xf | (ulonglong)(uVar24 >> 0x11)) << 0xf | uVar16;
    param_3[0x14] = uVar3;
    param_3[0x15] = uVar9;
    param_3[0x16] = uVar4 << 0x11 | ((uVar27 & 0x7fff) << 0xf | uVar29) >> 0xd;
    param_3[0x17] = uVar10 << 0x11 | ((uVar20 & 0x7fff) << 0xf | uVar13) >> 0xd;
    param_3[0x18] = uVar3 << 0x11 | (uVar28 << 0xf | uVar30) >> 0xd;
    param_3[0x19] = uVar9 << 0x11 | (uVar19 << 0xf | uVar17) >> 0xd;
    uVar5 = 3;
  }
  else {
    *(uint *)(param_3 + 6) = uVar11;
    *(uint *)((longlong)param_3 + 0x34) = uVar1;
    *(uint *)(param_3 + 7) = uVar7;
    *(uint *)((longlong)param_3 + 0x3c) = uVar24;
    uVar11 = uVar11 ^ (uint)param_3[4];
    uVar1 = uVar1 ^ *(uint *)((longlong)param_3 + 0x24);
    uVar2 = uVar2 ^ uVar1;
    uVar8 = uVar8 ^ uVar11;
    uVar18 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar2 >> 8 & 0xff) * 8) ^
             *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar2 & 0xff) * 8 + 4) ^
             *(uint *)(&L_Camellia_SBOX + (uVar2 >> 0x18)) ^
             *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 8);
    uVar14 = *(uint *)(&L_Camellia_SBOX + (uVar8 & 0xff)) ^
             *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar8 >> 8 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 8) ^
             *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar8 >> 0x18) * 8) ^ uVar18;
    uVar8 = uVar24 ^ *(uint *)((longlong)param_3 + 0x2c) ^ uVar14;
    uVar2 = uVar7 ^ (uint)param_3[5] ^ uVar14 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar14 = DAT_140e1c06c ^ uVar8;
    uVar24 = DAT_140e1c068 ^ uVar2;
    uVar18 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar14 >> 8 & 0xff) * 8) ^
             *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar14 & 0xff) * 8 + 4) ^
             *(uint *)(&L_Camellia_SBOX + (uVar14 >> 0x18)) ^
             *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 8);
    uVar14 = *(uint *)(&L_Camellia_SBOX + (uVar24 & 0xff)) ^
             *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar24 >> 8 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar24 >> 0x10 & 0xff) * 8) ^
             *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar24 >> 0x18) * 8) ^ uVar18;
    uVar1 = uVar1 ^ uVar14;
    uVar4 = *param_3;
    uVar10 = param_3[1];
    uVar3 = param_3[4];
    uVar9 = param_3[5];
    uVar12 = param_3[6];
    uVar13 = param_3[7];
    uVar25 = CONCAT44(uVar1,uVar11 ^ uVar14 ^ (uVar18 >> 8 | uVar18 << 0x18));
    uVar22 = CONCAT44(uVar8,uVar2);
    param_3[2] = uVar25;
    param_3[3] = uVar22;
    uVar16 = uVar3 << 0xf;
    uVar15 = uVar16 | uVar9 >> 0x31;
    uVar19 = uVar9 << 0xf;
    uVar17 = uVar19 | uVar3 >> 0x31;
    param_3[4] = uVar15;
    param_3[5] = uVar17;
    uVar27 = uVar13 >> 0x31;
    uVar31 = uVar12 >> 0x31;
    uVar37 = uVar12 << 0xf | uVar27;
    uVar39 = uVar13 << 0xf | uVar31;
    param_3[6] = uVar37;
    param_3[7] = uVar39;
    uVar28 = (uVar9 & 0x1ffffffffffff) >> 0x22;
    uVar32 = (uVar3 & 0x1ffffffffffff) >> 0x22;
    uVar20 = uVar15 << 0xf | uVar28;
    uVar17 = uVar17 << 0xf | uVar32;
    param_3[8] = uVar20;
    param_3[9] = uVar17;
    uVar26 = uVar25 << 0x1e | (ulonglong)(uVar8 >> 2);
    uVar23 = uVar22 << 0x1e | (ulonglong)(uVar1 >> 2);
    param_3[10] = uVar26;
    param_3[0xb] = uVar23;
    uVar29 = uVar10 >> 0x13;
    uVar33 = uVar4 >> 0x13;
    uVar15 = uVar4 << 0x2d | uVar29;
    uVar21 = uVar10 << 0x2d | uVar33;
    param_3[0xc] = uVar15;
    param_3[0xd] = uVar21;
    uVar30 = (uVar13 & 0x1ffffffffffff) >> 0x13;
    uVar34 = (uVar12 & 0x1ffffffffffff) >> 0x13;
    uVar38 = uVar37 << 0x1e | uVar30;
    uVar40 = uVar39 << 0x1e | uVar34;
    param_3[0xe] = uVar38;
    param_3[0xf] = uVar40;
    uVar37 = (uVar10 & 0x7ffff) >> 4;
    uVar35 = (uVar4 & 0x7ffff) >> 4;
    uVar15 = uVar15 << 0xf | uVar37;
    uVar21 = uVar21 << 0xf | uVar35;
    param_3[0x10] = uVar15;
    param_3[0x11] = uVar21;
    uVar39 = (uVar19 & 0x1ffffffffffff) >> 0x13;
    uVar36 = (uVar16 & 0x1ffffffffffff) >> 0x13;
    param_3[0x12] = uVar20 << 0x1e | uVar39;
    param_3[0x13] = uVar17 << 0x1e | uVar36;
    uVar17 = (uVar22 & 0x3ffffffff) >> 4;
    uVar22 = (uVar25 & 0x3ffffffff) >> 4;
    uVar20 = uVar26 << 0x1e | uVar17;
    uVar25 = uVar23 << 0x1e | uVar22;
    param_3[0x14] = uVar20;
    param_3[0x15] = uVar25;
    uVar10 = uVar15 << 0x11 | (uVar10 << 0x2d & 0x1ffffffffffff | uVar33) >> 0x20;
    uVar4 = uVar21 << 0x11 | (uVar4 << 0x2d & 0x1ffffffffffff | uVar29) >> 0x20;
    param_3[0x16] = uVar10;
    param_3[0x17] = uVar4;
    uVar13 = uVar38 << 0x20 | (uVar13 << 0xf & 0x3ffffffff | uVar31) >> 2;
    uVar12 = uVar40 << 0x20 | (uVar12 << 0xf & 0x3ffffffff | uVar27) >> 2;
    param_3[0x18] = uVar13;
    param_3[0x19] = uVar12;
    param_3[0x1a] = uVar39 << 0x22 | (uVar19 & 0x7ffff | uVar3 >> 0x31) << 0xf | uVar32;
    param_3[0x1b] = uVar36 << 0x22 | (uVar16 & 0x7ffff | uVar9 >> 0x31) << 0xf | uVar28;
    param_3[0x1c] = uVar13 << 0x11 | ((uVar31 & 3) << 0x1e | uVar34) >> 0xf;
    param_3[0x1d] = uVar12 << 0x11 | ((uVar27 & 3) << 0x1e | uVar30) >> 0xf;
    param_3[0x1e] = uVar10 << 0x22 | ((uVar33 & 0xffffffff) << 0xf | uVar35) >> 0xd;
    param_3[0x1f] = uVar4 << 0x22 | ((uVar29 & 0xffffffff) << 0xf | uVar37) >> 0xd;
    param_3[0x20] = uVar17 << 0x33 | uVar25 >> 0xd;
    param_3[0x21] = uVar22 << 0x33 | uVar20 >> 0xd;
    uVar5 = 4;
  }
  return uVar5;
}

// L$SEH_begin_Camellia_Ekeygen @ 140e1b86d

undefined8 L_SEH_begin_Camellia_Ekeygen(int param_1,uint *param_2,ulonglong *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  
  uVar11 = *param_2;
  uVar14 = param_2[1];
  uVar18 = param_2[2];
  uVar24 = param_2[3];
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
  uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
  uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
  *(uint *)param_3 = uVar14;
  *(uint *)((longlong)param_3 + 4) = uVar11;
  *(uint *)(param_3 + 1) = uVar24;
  *(uint *)((longlong)param_3 + 0xc) = uVar18;
  if (param_1 != 0x80) {
    uVar11 = param_2[4];
    uVar14 = param_2[5];
    if (param_1 == 0xc0) {
      uVar18 = ~uVar11;
      uVar24 = ~uVar14;
    }
    else {
      uVar18 = param_2[6];
      uVar24 = param_2[7];
    }
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
    *(uint *)(param_3 + 4) = uVar14;
    *(uint *)((longlong)param_3 + 0x24) = uVar11;
    *(uint *)(param_3 + 5) = uVar24;
    *(uint *)((longlong)param_3 + 0x2c) = uVar18;
    uVar14 = uVar14 ^ (uint)*param_3;
    uVar11 = uVar11 ^ *(uint *)((longlong)param_3 + 4);
    uVar24 = uVar24 ^ (uint)param_3[1];
    uVar18 = uVar18 ^ *(uint *)((longlong)param_3 + 0xc);
  }
  uVar2 = DAT_140e1c064;
  uVar8 = DAT_140e1c060;
  uVar1 = DAT_140e1c044 ^ uVar11;
  uVar7 = L_Camellia_SIGMA ^ uVar14;
  uVar6 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar1 >> 8 & 0xff) * 8) ^
          *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar1 & 0xff) * 8 + 4) ^
          *(uint *)(&L_Camellia_SBOX + (uVar1 >> 0x18)) ^
          *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 8);
  uVar1 = *(uint *)(&L_Camellia_SBOX + (uVar7 & 0xff)) ^
          *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar7 >> 8 & 0xff) * 8 + 4) ^
          *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar7 >> 0x10 & 0xff) * 8) ^
          *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar7 >> 0x18) * 8) ^ uVar6;
  uVar18 = uVar18 ^ uVar1;
  uVar7 = uVar24 ^ uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
  uVar24 = DAT_140e1c04c ^ uVar18;
  uVar6 = DAT_140e1c048 ^ uVar7;
  uVar1 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar24 >> 8 & 0xff) * 8) ^
          *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar24 & 0xff) * 8 + 4) ^
          *(uint *)(&L_Camellia_SBOX + (uVar24 >> 0x18)) ^
          *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar24 >> 0x10 & 0xff) * 8);
  uVar24 = *(uint *)(&L_Camellia_SBOX + (uVar6 & 0xff)) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar6 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar6 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar6 >> 0x18) * 8) ^ uVar1;
  uVar6 = uVar14 ^ uVar24 ^ (uVar1 >> 8 | uVar1 << 0x18) ^ (uint)*param_3;
  uVar1 = uVar11 ^ uVar24 ^ *(uint *)((longlong)param_3 + 4);
  uVar11 = DAT_140e1c054 ^ uVar1;
  uVar24 = DAT_140e1c050 ^ uVar6;
  uVar14 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar11 >> 8 & 0xff) * 8) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar11 & 0xff) * 8 + 4) ^
           *(uint *)(&L_Camellia_SBOX + (uVar11 >> 0x18)) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 8);
  uVar11 = *(uint *)(&L_Camellia_SBOX + (uVar24 & 0xff)) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar24 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar24 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar24 >> 0x18) * 8) ^ uVar14;
  uVar24 = uVar18 ^ *(uint *)((longlong)param_3 + 0xc) ^ uVar11;
  uVar7 = uVar7 ^ (uint)param_3[1] ^ uVar11 ^ (uVar14 >> 8 | uVar14 << 0x18);
  uVar11 = DAT_140e1c05c ^ uVar24;
  uVar18 = DAT_140e1c058 ^ uVar7;
  uVar14 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar11 >> 8 & 0xff) * 8) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar11 & 0xff) * 8 + 4) ^
           *(uint *)(&L_Camellia_SBOX + (uVar11 >> 0x18)) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 8);
  uVar11 = *(uint *)(&L_Camellia_SBOX + (uVar18 & 0xff)) ^
           *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar18 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar18 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar18 >> 0x18) * 8) ^ uVar14;
  uVar1 = uVar1 ^ uVar11;
  uVar11 = uVar6 ^ uVar11 ^ (uVar14 >> 8 | uVar14 << 0x18);
  if (param_1 == 0x80) {
    uVar12 = CONCAT44(uVar1,uVar11);
    uVar19 = CONCAT44(uVar24,uVar7);
    uVar4 = *param_3;
    uVar10 = param_3[1];
    param_3[2] = uVar12;
    param_3[3] = uVar19;
    uVar3 = uVar4 << 0xf;
    uVar15 = uVar10 >> 0x31;
    uVar25 = uVar4 >> 0x31;
    uVar9 = uVar10 << 0xf;
    param_3[4] = uVar3 | uVar15;
    param_3[5] = uVar9 | uVar25;
    uVar13 = uVar12 << 0xf | (ulonglong)(uVar24 >> 0x11);
    uVar20 = uVar19 << 0xf | (ulonglong)(uVar1 >> 0x11);
    param_3[6] = uVar13;
    param_3[7] = uVar20;
    uVar16 = (uVar19 & 0x1ffffffffffff) >> 0x22;
    uVar26 = (uVar12 & 0x1ffffffffffff) >> 0x22;
    uVar13 = uVar13 << 0xf | uVar16;
    uVar21 = uVar20 << 0xf | uVar26;
    param_3[8] = uVar13;
    param_3[9] = uVar21;
    uVar20 = (uVar10 & 0x1ffffffffffff) >> 0x13;
    uVar27 = (uVar4 & 0x1ffffffffffff) >> 0x13;
    uVar4 = (uVar3 | uVar15) << 0x1e | uVar20;
    uVar10 = (uVar9 | uVar25) << 0x1e | uVar27;
    param_3[10] = uVar4;
    param_3[0xb] = uVar10;
    uVar19 = (uVar19 << 0xf & 0x1ffffffffffff) >> 0x22;
    uVar28 = (uVar12 << 0xf & 0x1ffffffffffff) >> 0x22;
    uVar12 = uVar13 << 0xf | uVar19;
    param_3[0xc] = uVar12;
    uVar13 = (uVar9 & 0x3ffffffff) >> 0x13;
    uVar29 = (uVar3 & 0x3ffffffff) >> 0x13;
    uVar10 = uVar10 << 0xf | uVar29;
    param_3[0xd] = uVar10;
    uVar17 = ((ulonglong)uVar7 & 0x7ffff) >> 4;
    uVar30 = ((ulonglong)uVar11 & 0x7ffff) >> 4;
    uVar12 = uVar12 << 0xf | uVar17;
    uVar21 = (uVar21 << 0xf | uVar28) << 0xf | uVar30;
    param_3[0xe] = uVar12;
    param_3[0xf] = uVar21;
    uVar4 = (uVar4 << 0xf | uVar13) << 0x11 | (uVar9 & 0x7ffff | uVar25) >> 2;
    uVar10 = uVar10 << 0x11 | (uVar3 & 0x7ffff | uVar15) >> 2;
    param_3[0x10] = uVar4;
    param_3[0x11] = uVar10;
    uVar4 = uVar4 << 0x11 | ((uVar25 & 3) << 0x1e | uVar27) >> 0xf;
    uVar10 = uVar10 << 0x11 | ((uVar15 & 3) << 0x1e | uVar20) >> 0xf;
    param_3[0x12] = uVar4;
    param_3[0x13] = uVar10;
    uVar3 = uVar12 << 0x22 |
            (((ulonglong)uVar7 & 0xf) << 0xf | (ulonglong)(uVar1 >> 0x11)) << 0xf | uVar26;
    uVar9 = uVar21 << 0x22 |
            (((ulonglong)uVar11 & 0xf) << 0xf | (ulonglong)(uVar24 >> 0x11)) << 0xf | uVar16;
    param_3[0x14] = uVar3;
    param_3[0x15] = uVar9;
    param_3[0x16] = uVar4 << 0x11 | ((uVar27 & 0x7fff) << 0xf | uVar29) >> 0xd;
    param_3[0x17] = uVar10 << 0x11 | ((uVar20 & 0x7fff) << 0xf | uVar13) >> 0xd;
    param_3[0x18] = uVar3 << 0x11 | (uVar28 << 0xf | uVar30) >> 0xd;
    param_3[0x19] = uVar9 << 0x11 | (uVar19 << 0xf | uVar17) >> 0xd;
    uVar5 = 3;
  }
  else {
    *(uint *)(param_3 + 6) = uVar11;
    *(uint *)((longlong)param_3 + 0x34) = uVar1;
    *(uint *)(param_3 + 7) = uVar7;
    *(uint *)((longlong)param_3 + 0x3c) = uVar24;
    uVar11 = uVar11 ^ (uint)param_3[4];
    uVar1 = uVar1 ^ *(uint *)((longlong)param_3 + 0x24);
    uVar2 = uVar2 ^ uVar1;
    uVar8 = uVar8 ^ uVar11;
    uVar18 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar2 >> 8 & 0xff) * 8) ^
             *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar2 & 0xff) * 8 + 4) ^
             *(uint *)(&L_Camellia_SBOX + (uVar2 >> 0x18)) ^
             *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 8);
    uVar14 = *(uint *)(&L_Camellia_SBOX + (uVar8 & 0xff)) ^
             *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar8 >> 8 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 8) ^
             *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar8 >> 0x18) * 8) ^ uVar18;
    uVar8 = uVar24 ^ *(uint *)((longlong)param_3 + 0x2c) ^ uVar14;
    uVar2 = uVar7 ^ (uint)param_3[5] ^ uVar14 ^ (uVar18 >> 8 | uVar18 << 0x18);
    uVar14 = DAT_140e1c06c ^ uVar8;
    uVar24 = DAT_140e1c068 ^ uVar2;
    uVar18 = *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar14 >> 8 & 0xff) * 8) ^
             *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar14 & 0xff) * 8 + 4) ^
             *(uint *)(&L_Camellia_SBOX + (uVar14 >> 0x18)) ^
             *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 8);
    uVar14 = *(uint *)(&L_Camellia_SBOX + (uVar24 & 0xff)) ^
             *(uint *)((longlong)&L_Camellia_SBOX + (ulonglong)(uVar24 >> 8 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_140e1c884 + (ulonglong)(uVar24 >> 0x10 & 0xff) * 8) ^
             *(uint *)(&DAT_140e1c880 + (ulonglong)(uVar24 >> 0x18) * 8) ^ uVar18;
    uVar1 = uVar1 ^ uVar14;
    uVar4 = *param_3;
    uVar10 = param_3[1];
    uVar3 = param_3[4];
    uVar9 = param_3[5];
    uVar12 = param_3[6];
    uVar13 = param_3[7];
    uVar25 = CONCAT44(uVar1,uVar11 ^ uVar14 ^ (uVar18 >> 8 | uVar18 << 0x18));
    uVar22 = CONCAT44(uVar8,uVar2);
    param_3[2] = uVar25;
    param_3[3] = uVar22;
    uVar16 = uVar3 << 0xf;
    uVar15 = uVar16 | uVar9 >> 0x31;
    uVar19 = uVar9 << 0xf;
    uVar17 = uVar19 | uVar3 >> 0x31;
    param_3[4] = uVar15;
    param_3[5] = uVar17;
    uVar27 = uVar13 >> 0x31;
    uVar31 = uVar12 >> 0x31;
    uVar37 = uVar12 << 0xf | uVar27;
    uVar39 = uVar13 << 0xf | uVar31;
    param_3[6] = uVar37;
    param_3[7] = uVar39;
    uVar28 = (uVar9 & 0x1ffffffffffff) >> 0x22;
    uVar32 = (uVar3 & 0x1ffffffffffff) >> 0x22;
    uVar20 = uVar15 << 0xf | uVar28;
    uVar17 = uVar17 << 0xf | uVar32;
    param_3[8] = uVar20;
    param_3[9] = uVar17;
    uVar26 = uVar25 << 0x1e | (ulonglong)(uVar8 >> 2);
    uVar23 = uVar22 << 0x1e | (ulonglong)(uVar1 >> 2);
    param_3[10] = uVar26;
    param_3[0xb] = uVar23;
    uVar29 = uVar10 >> 0x13;
    uVar33 = uVar4 >> 0x13;
    uVar15 = uVar4 << 0x2d | uVar29;
    uVar21 = uVar10 << 0x2d | uVar33;
    param_3[0xc] = uVar15;
    param_3[0xd] = uVar21;
    uVar30 = (uVar13 & 0x1ffffffffffff) >> 0x13;
    uVar34 = (uVar12 & 0x1ffffffffffff) >> 0x13;
    uVar38 = uVar37 << 0x1e | uVar30;
    uVar40 = uVar39 << 0x1e | uVar34;
    param_3[0xe] = uVar38;
    param_3[0xf] = uVar40;
    uVar37 = (uVar10 & 0x7ffff) >> 4;
    uVar35 = (uVar4 & 0x7ffff) >> 4;
    uVar15 = uVar15 << 0xf | uVar37;
    uVar21 = uVar21 << 0xf | uVar35;
    param_3[0x10] = uVar15;
    param_3[0x11] = uVar21;
    uVar39 = (uVar19 & 0x1ffffffffffff) >> 0x13;
    uVar36 = (uVar16 & 0x1ffffffffffff) >> 0x13;
    param_3[0x12] = uVar20 << 0x1e | uVar39;
    param_3[0x13] = uVar17 << 0x1e | uVar36;
    uVar17 = (uVar22 & 0x3ffffffff) >> 4;
    uVar22 = (uVar25 & 0x3ffffffff) >> 4;
    uVar20 = uVar26 << 0x1e | uVar17;
    uVar25 = uVar23 << 0x1e | uVar22;
    param_3[0x14] = uVar20;
    param_3[0x15] = uVar25;
    uVar10 = uVar15 << 0x11 | (uVar10 << 0x2d & 0x1ffffffffffff | uVar33) >> 0x20;
    uVar4 = uVar21 << 0x11 | (uVar4 << 0x2d & 0x1ffffffffffff | uVar29) >> 0x20;
    param_3[0x16] = uVar10;
    param_3[0x17] = uVar4;
    uVar13 = uVar38 << 0x20 | (uVar13 << 0xf & 0x3ffffffff | uVar31) >> 2;
    uVar12 = uVar40 << 0x20 | (uVar12 << 0xf & 0x3ffffffff | uVar27) >> 2;
    param_3[0x18] = uVar13;
    param_3[0x19] = uVar12;
    param_3[0x1a] = uVar39 << 0x22 | (uVar19 & 0x7ffff | uVar3 >> 0x31) << 0xf | uVar32;
    param_3[0x1b] = uVar36 << 0x22 | (uVar16 & 0x7ffff | uVar9 >> 0x31) << 0xf | uVar28;
    param_3[0x1c] = uVar13 << 0x11 | ((uVar31 & 3) << 0x1e | uVar34) >> 0xf;
    param_3[0x1d] = uVar12 << 0x11 | ((uVar27 & 3) << 0x1e | uVar30) >> 0xf;
    param_3[0x1e] = uVar10 << 0x22 | ((uVar33 & 0xffffffff) << 0xf | uVar35) >> 0xd;
    param_3[0x1f] = uVar4 << 0x22 | ((uVar29 & 0xffffffff) << 0xf | uVar37) >> 0xd;
    param_3[0x20] = uVar17 << 0x33 | uVar25 >> 0xd;
    param_3[0x21] = uVar22 << 0x33 | uVar20 >> 0xd;
    uVar5 = 4;
  }
  return uVar5;
}

// L$SEH_begin_Camellia_cbc_encrypt @ 140e1d08d

/* WARNING: Type propagation algorithm not settling */

void L_SEH_begin_Camellia_cbc_encrypt
               (uint *param_1,uint *param_2,ulonglong param_3,longlong param_4,uint *param_5,
               int param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar14;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulonglong uStack_88;
  longlong alStack_80 [3];
  uint auStack_68 [2];
  undefined8 uStack_60;
  longlong lStack_58;
  undefined1 auStack_50 [32];
  
  bVar14 = false;
  if (param_3 != 0) {
    lVar3 = -(-((param_4 + -0x7f) - (longlong)alStack_80) & 0x3c0U);
    uVar9 = *(uint *)(param_4 + 0x110);
    *(uint **)((longlong)&lStack_58 + lVar3) = param_5;
    *(undefined1 **)(auStack_50 + lVar3) = &stack0xffffffffffffffd0;
    lVar5 = 0x20;
    do {
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (param_6 == 0) {
      *(ulonglong *)((longlong)alStack_80 + lVar3) = param_4 + (ulonglong)uVar9 * 0x40;
      *(undefined1 **)((longlong)alStack_80 + lVar3 + 8U) =
           (undefined1 *)((longlong)param_1 + (param_3 + 0xf & 0xfffffffffffffff0));
      *(ulonglong *)((longlong)alStack_80 + lVar3 + 0x10U) = param_3 & 0xf;
      uVar4 = *(undefined8 *)param_5;
      uVar7 = *(undefined8 *)(param_5 + 2);
      while( true ) {
        uVar9 = *param_1;
        uVar10 = param_1[1];
        uVar11 = param_1[2];
        uVar12 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        uVar9 = param_1[3];
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        *(undefined8 *)((longlong)auStack_68 + lVar3) = uVar4;
        uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18
        ;
        *(undefined8 *)((longlong)&uStack_60 + lVar3) = uVar7;
        uVar13 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        *(undefined8 *)((longlong)&uStack_88 + lVar3) = 0x140e1d28e;
        _x86_64_Camellia_decrypt();
        uVar6 = *(ulonglong *)((longlong)alStack_80 + lVar3 + 0x10U);
        uVar4 = *(undefined8 *)param_1;
        uVar7 = *(undefined8 *)(param_1 + 2);
        uVar9 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
                ) ^ *(uint *)((longlong)auStack_68 + lVar3);
        uVar10 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                 uVar10 << 0x18) ^ *(uint *)((longlong)auStack_68 + lVar3 + 4);
        uVar11 = (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                 uVar11 << 0x18) ^ *(uint *)((longlong)&uStack_60 + lVar3);
        param_1 = param_1 + 4;
        uVar12 = (uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                 uVar13 << 0x18) ^ *(uint *)((longlong)&uStack_60 + lVar3 + 4);
        if (param_1 == *(uint **)((longlong)alStack_80 + lVar3 + 8U)) break;
        *param_2 = uVar9;
        param_2[1] = uVar10;
        param_2[2] = uVar11;
        param_2[3] = uVar12;
        param_2 = param_2 + 4;
      }
      puVar2 = *(undefined8 **)((longlong)&lStack_58 + lVar3);
      if (uVar6 == 0) {
        *param_2 = uVar9;
        param_2[1] = uVar10;
        param_2[2] = uVar11;
        param_2[3] = uVar12;
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
      }
      else {
        *(uint *)((longlong)auStack_68 + lVar3) = uVar9;
        *(uint *)((longlong)auStack_68 + lVar3 + 4) = uVar10;
        *(uint *)((longlong)&uStack_60 + lVar3) = uVar11;
        *(uint *)((longlong)&uStack_60 + lVar3 + 4) = uVar12;
        *(ulonglong *)((longlong)&uStack_88 + lVar3) =
             (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
             (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((longlong)uVar6 < 0) * 0x80 |
             (ulonglong)(uVar6 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
             (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000
             | (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
        puVar8 = (undefined1 *)((longlong)auStack_68 + lVar3);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)param_2 = *puVar8;
          puVar8 = puVar8 + 1;
          param_2 = (uint *)((longlong)param_2 + 1);
        }
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
      }
    }
    else {
      uVar6 = param_3 & 0xf;
      puVar1 = (uint *)((longlong)param_1 + (param_3 & 0xfffffffffffffff0));
      *(longlong *)((longlong)alStack_80 + lVar3) = param_4;
      *(uint **)((longlong)alStack_80 + lVar3 + 8U) = puVar1;
      *(ulonglong *)((longlong)alStack_80 + lVar3 + 0x10U) = uVar6;
      uVar9 = *param_5;
      uVar10 = param_5[1];
      uVar11 = param_5[2];
      uVar12 = param_5[3];
      if (puVar1 == param_1) goto L_cbc_enc_tail;
      while( true ) {
        do {
          uVar9 = uVar9 ^ *param_1;
          uVar10 = uVar10 ^ param_1[1];
          uVar11 = uVar11 ^ param_1[2];
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          uVar12 = uVar12 ^ param_1[3];
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          *(undefined8 *)((longlong)&uStack_88 + lVar3) = 0x140e1d194;
          _x86_64_Camellia_encrypt();
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          puVar1 = *(uint **)((longlong)alStack_80 + lVar3 + 8U);
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
          uVar6 = *(ulonglong *)((longlong)alStack_80 + lVar3 + 0x10U);
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                   uVar11 << 0x18;
          *param_2 = uVar9;
          uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                   uVar12 << 0x18;
          param_2[1] = uVar10;
          param_2[2] = uVar11;
          param_1 = param_1 + 4;
          param_2[3] = uVar12;
          param_2 = param_2 + 4;
        } while (param_1 != puVar1);
        if (uVar6 == 0) break;
L_cbc_enc_tail:
        *(undefined8 *)((longlong)auStack_68 + lVar3) = 0;
        *(undefined8 *)((longlong)&uStack_60 + lVar3) = 0;
        *(undefined8 *)((longlong)alStack_80 + lVar3 + 0x10U) = 0;
        *(ulonglong *)((longlong)&uStack_88 + lVar3) =
             (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)bVar14 * 0x400 |
             (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 | 0x40 |
             (ulonglong)(in_AF & 1) * 0x10 | 4 | (ulonglong)(in_ID & 1) * 0x200000 |
             (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
             (ulonglong)(in_AC & 1) * 0x40000;
        puVar8 = (undefined1 *)((longlong)auStack_68 + lVar3);
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = (char)*param_1;
          param_1 = (uint *)((longlong)param_1 + 1);
          puVar8 = puVar8 + 1;
        }
        uVar6 = *(ulonglong *)((longlong)&uStack_88 + lVar3);
        in_NT = (uVar6 & 0x4000) != 0;
        bVar14 = (uVar6 & 0x400) != 0;
        in_IF = (uVar6 & 0x200) != 0;
        in_TF = (uVar6 & 0x100) != 0;
        in_AF = (uVar6 & 0x10) != 0;
        in_ID = (uVar6 & 0x200000) != 0;
        in_AC = (uVar6 & 0x40000) != 0;
        in_VIP = 0;
        in_VIF = 0;
        param_1 = (uint *)((longlong)auStack_68 + lVar3);
        *(longlong *)((longlong)alStack_80 + lVar3 + 8U) = (longlong)&lStack_58 + lVar3;
      }
      puVar1 = *(uint **)((longlong)&lStack_58 + lVar3);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
    }
  }
  return;
}

