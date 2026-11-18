// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 42

// ED25519_public_from_private @ 14f78dab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ED25519_public_from_private(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_198 [32];
  char local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [48];
  undefined1 local_f8 [40];
  undefined1 local_d0 [40];
  undefined1 local_a8 [80];
  byte local_58 [31];
  byte local_39;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f78dabc;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  SHA512(param_2,0x20,local_58);
  local_58[0] = local_58[0] & 0xf8;
  local_39 = local_39 & 0x3f | 0x40;
  FUN_14f793040(local_f8,local_58);
  FUN_14f78f550(local_178,local_a8);
  FUN_14f78f870(local_128,local_f8,local_178);
  FUN_14f78f870(local_150,local_d0,local_178);
  FUN_14f791010(param_1,local_150);
  FUN_14f791010(local_178,local_128);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_178[0] << 7;
  OPENSSL_cleanse(local_58,0x40);
  return;
}

// ED25519_sign @ 14f78dbc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ED25519_sign(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 auStack_328 [32];
  char local_308 [40];
  undefined1 local_2e0 [40];
  undefined1 local_2b8 [48];
  undefined1 local_288 [224];
  undefined1 local_1a8 [40];
  undefined1 local_180 [40];
  undefined1 local_158 [80];
  byte local_108 [31];
  byte local_e9;
  undefined1 local_e8 [32];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14f78dbdb;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_328;
  SHA512_Init(local_288);
  SHA512_Update(local_288,param_5,0x20);
  SHA512_Final(local_108,local_288);
  local_108[0] = local_108[0] & 0xf8;
  local_e9 = local_e9 & 0x3f | 0x40;
  SHA512_Init(local_288);
  SHA512_Update(local_288,local_e8,0x20);
  SHA512_Update(local_288,param_2,param_3);
  SHA512_Final(local_c8,local_288);
  FUN_14f795a40(local_c8);
  FUN_14f793040(local_1a8,local_c8);
  FUN_14f78f550(local_308,local_158);
  FUN_14f78f870(local_2b8,local_1a8,local_308);
  FUN_14f78f870(local_2e0,local_180,local_308);
  FUN_14f791010(param_1,local_2e0);
  FUN_14f791010(local_308,local_2b8);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_308[0] << 7;
  SHA512_Init(local_288);
  SHA512_Update(local_288,param_1,0x20);
  SHA512_Update(local_288,param_4,0x20);
  SHA512_Update(local_288,param_2,param_3);
  SHA512_Final(local_88,local_288);
  FUN_14f795a40(local_88);
  FUN_14f793990(param_1 + 0x20,local_88,local_108,local_c8);
  OPENSSL_cleanse(local_288,0xd8);
  OPENSSL_cleanse(local_c8,0x40);
  OPENSSL_cleanse(local_108,0x40);
  return 1;
}

// ED25519_verify @ 14f78dde0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool ED25519_verify(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_348 [32];
  char local_328 [40];
  undefined1 local_300 [40];
  undefined1 local_2d8 [48];
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  undefined1 local_208 [40];
  undefined1 local_1e0 [40];
  undefined1 local_1b8 [48];
  undefined1 local_188 [224];
  byte local_a8 [31];
  byte local_89;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_a8[0] = 0xed;
  local_a8[1] = 0xd3;
  local_a8[2] = 0xf5;
  local_a8[3] = 0x5c;
  local_a8[4] = 0x1a;
  local_a8[5] = 99;
  local_a8[6] = 0x12;
  local_a8[7] = 0x58;
  local_a8[8] = 0xd6;
  local_a8[9] = 0x9c;
  local_a8[10] = 0xf7;
  local_a8[0xb] = 0xa2;
  local_a8[0xc] = 0xde;
  local_a8[0xd] = 0xf9;
  local_a8[0xe] = 0xde;
  local_a8[0xf] = 0x14;
  if (0x10 < *(byte *)(param_3 + 0x3f)) {
    return false;
  }
  if (*(byte *)(param_3 + 0x3f) == 0x10) {
    iVar4 = 0xf;
    iVar2 = memcmp((void *)(param_3 + 0x30),&DAT_1534e5ee0,0xf);
    if (iVar2 != 0) {
      return false;
    }
    lVar3 = 0xf;
    do {
      bVar1 = *(byte *)(lVar3 + param_3 + 0x20);
      if (bVar1 < local_a8[lVar3]) break;
      if (bVar1 != local_a8[lVar3]) {
        return false;
      }
      iVar4 = iVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
    if (iVar4 < 0) {
      return false;
    }
  }
  iVar2 = FUN_14f791dc0(&local_2a8,param_4);
  if (iVar2 != 0) {
    return false;
  }
  local_2a8 = -local_2a8;
  local_2a4 = -local_2a4;
  local_2a0 = -local_2a0;
  local_29c = -local_29c;
  local_298 = -local_298;
  local_294 = -local_294;
  local_290 = -local_290;
  local_28c = -local_28c;
  local_288 = -local_288;
  local_284 = -local_284;
  local_230 = -local_230;
  local_22c = -local_22c;
  local_228 = -local_228;
  local_224 = -local_224;
  local_220 = -local_220;
  local_21c = -local_21c;
  local_218 = -local_218;
  local_214 = -local_214;
  local_210 = -local_210;
  local_20c = -local_20c;
  SHA512_Init(local_188);
  SHA512_Update(local_188,param_3,0x20);
  SHA512_Update(local_188,param_4,0x20);
  SHA512_Update(local_188,param_1,param_2);
  SHA512_Final(local_88,local_188);
  FUN_14f795a40(local_88);
  FUN_14f791660(local_208,local_88,&local_2a8,param_3 + 0x20);
  FUN_14f78f550(local_328,local_1b8);
  FUN_14f78f870(local_2d8,local_208,local_328);
  FUN_14f78f870(local_300,local_1e0,local_328);
  FUN_14f791010(local_a8,local_300);
  FUN_14f791010(local_328,local_2d8);
  local_89 = local_89 ^ local_328[0] << 7;
  iVar2 = CRYPTO_memcmp(local_a8,param_3,0x20);
  return iVar2 == 0;
}

// X25519 @ 14f78e040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X25519(undefined8 param_1)

{
  int iVar1;
  
  FUN_14f796870();
  iVar1 = CRYPTO_memcmp(&DAT_1534e5ea0,param_1,0x20);
  return iVar1 != 0;
}

// X25519_public_from_private @ 14f78e090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void X25519_public_from_private(undefined8 param_1,uint *param_2)

{
  undefined1 auStack_178 [32];
  undefined1 local_158 [48];
  undefined1 local_128 [40];
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 local_28 [15];
  byte bStack_19;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f78e0a5;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_38 = *param_2 & 0xfffffff8;
  local_28 = SUB1615(*(undefined1 (*) [16])(param_2 + 4),0);
  bStack_19 = SUB161(*(undefined1 (*) [16])(param_2 + 4),0xf) & 0x3f | 0x40;
  FUN_14f793040(local_128,&local_38);
  local_88 = local_100 + local_d8;
  local_60 = local_d8 - local_100;
  local_84 = local_fc + local_d4;
  local_5c = local_d4 - local_fc;
  local_80 = local_f8 + local_d0;
  local_58 = local_d0 - local_f8;
  local_7c = local_f4 + local_cc;
  local_54 = local_cc - local_f4;
  local_78 = local_f0 + local_c8;
  local_50 = local_c8 - local_f0;
  local_74 = local_ec + local_c4;
  local_4c = local_c4 - local_ec;
  local_70 = local_e8 + local_c0;
  local_48 = local_c0 - local_e8;
  local_6c = local_e4 + local_bc;
  local_44 = local_bc - local_e4;
  local_68 = local_e0 + local_b8;
  local_40 = local_b8 - local_e0;
  local_64 = local_dc + local_b4;
  local_3c = local_b4 - local_dc;
  FUN_14f78f550(local_158,&local_60);
  FUN_14f78f870(&local_88,&local_88,local_158);
  FUN_14f791010(param_1,&local_88);
  OPENSSL_cleanse(&local_38,0x20);
  return;
}

// FUN_14f78e210 @ 14f78e210

void FUN_14f78e210(uint *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  
  uVar1 = -(uint)param_3;
  *param_1 = *param_1 ^ (*param_1 ^ *param_2) & uVar1;
  param_1[1] = param_1[1] ^ (param_2[1] ^ param_1[1]) & uVar1;
  param_1[2] = param_1[2] ^ (param_2[2] ^ param_1[2]) & uVar1;
  param_1[3] = param_1[3] ^ (param_2[3] ^ param_1[3]) & uVar1;
  param_1[4] = param_1[4] ^ (param_2[4] ^ param_1[4]) & uVar1;
  param_1[5] = param_1[5] ^ (param_2[5] ^ param_1[5]) & uVar1;
  param_1[6] = param_1[6] ^ (param_2[6] ^ param_1[6]) & uVar1;
  param_1[7] = param_1[7] ^ (param_2[7] ^ param_1[7]) & uVar1;
  param_1[8] = param_1[8] ^ (param_2[8] ^ param_1[8]) & uVar1;
  param_1[9] = param_1[9] ^ (param_2[9] ^ param_1[9]) & uVar1;
  param_1[10] = param_1[10] ^ (param_2[10] ^ param_1[10]) & uVar1;
  param_1[0xb] = param_1[0xb] ^ (param_2[0xb] ^ param_1[0xb]) & uVar1;
  param_1[0xc] = param_1[0xc] ^ (param_2[0xc] ^ param_1[0xc]) & uVar1;
  param_1[0xd] = param_1[0xd] ^ (param_2[0xd] ^ param_1[0xd]) & uVar1;
  param_1[0xe] = param_1[0xe] ^ (param_2[0xe] ^ param_1[0xe]) & uVar1;
  param_1[0xf] = param_1[0xf] ^ (param_2[0xf] ^ param_1[0xf]) & uVar1;
  param_1[0x10] = param_1[0x10] ^ (param_2[0x10] ^ param_1[0x10]) & uVar1;
  param_1[0x11] = param_1[0x11] ^ (param_2[0x11] ^ param_1[0x11]) & uVar1;
  param_1[0x12] = param_1[0x12] ^ (param_2[0x12] ^ param_1[0x12]) & uVar1;
  param_1[0x13] = param_1[0x13] ^ (param_2[0x13] ^ param_1[0x13]) & uVar1;
  param_1[0x14] = param_1[0x14] ^ (param_2[0x14] ^ param_1[0x14]) & uVar1;
  param_1[0x15] = param_1[0x15] ^ (param_2[0x15] ^ param_1[0x15]) & uVar1;
  param_1[0x16] = param_1[0x16] ^ (param_2[0x16] ^ param_1[0x16]) & uVar1;
  param_1[0x17] = param_1[0x17] ^ (param_2[0x17] ^ param_1[0x17]) & uVar1;
  param_1[0x18] = param_1[0x18] ^ (param_2[0x18] ^ param_1[0x18]) & uVar1;
  param_1[0x19] = param_1[0x19] ^ (param_2[0x19] ^ param_1[0x19]) & uVar1;
  param_1[0x1a] = param_1[0x1a] ^ (param_2[0x1a] ^ param_1[0x1a]) & uVar1;
  param_1[0x1b] = param_1[0x1b] ^ (param_2[0x1b] ^ param_1[0x1b]) & uVar1;
  param_1[0x1c] = param_1[0x1c] ^ (param_2[0x1c] ^ param_1[0x1c]) & uVar1;
  param_1[0x1d] = param_1[0x1d] ^ (param_2[0x1d] ^ param_1[0x1d]) & uVar1;
  return;
}

// FUN_14f78e530 @ 14f78e530

void FUN_14f78e530(ulonglong *param_1,uint7 *param_2)

{
  uint7 uVar1;
  uint6 uVar2;
  uint6 uVar3;
  uint7 uVar4;
  uint6 uVar5;
  
  uVar1 = *param_2;
  uVar2 = *(uint6 *)((longlong)param_2 + 0x1a);
  uVar3 = *(uint6 *)((longlong)param_2 + 7);
  uVar4 = *(uint7 *)((longlong)param_2 + 0xd);
  uVar5 = *(uint6 *)((longlong)param_2 + 0x14);
  *param_1 = (ulonglong)uVar1 & 0x7ffffffffffff;
  param_1[1] = ((ulonglong)uVar3 & 0x3fffffffffff) << 5 | (ulonglong)(uVar1 >> 0x33);
  param_1[3] = ((ulonglong)uVar5 & 0xfffffffffff) << 7 | (ulonglong)(uVar4 >> 0x31);
  param_1[2] = ((ulonglong)uVar4 & 0x1ffffffffffff) << 2 | (ulonglong)(uVar3 >> 0x2e);
  param_1[4] = ((ulonglong)uVar2 & 0x7fffffffffff) << 4 | (ulonglong)(uVar5 >> 0x2c);
  return;
}

// FUN_14f78e700 @ 14f78e700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f78e700(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14f78e71a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  x25519_fe51_sqr(local_40);
  x25519_fe51_sqr(local_90,local_40);
  x25519_fe51_sqr(local_90,local_90);
  x25519_fe51_mul(local_90,param_2,local_90);
  x25519_fe51_mul(local_40,local_40,local_90);
  x25519_fe51_sqr(local_b8,local_40);
  x25519_fe51_mul(local_90,local_90,local_b8);
  x25519_fe51_sqr(local_b8,local_90);
  lVar1 = 4;
  do {
    x25519_fe51_sqr(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe51_mul(local_90,local_b8,local_90);
  x25519_fe51_sqr(local_b8,local_90);
  lVar1 = 9;
  do {
    x25519_fe51_sqr(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe51_mul(local_b8,local_b8,local_90);
  x25519_fe51_sqr(local_68,local_b8);
  lVar1 = 0x13;
  do {
    x25519_fe51_sqr(local_68,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe51_mul(local_b8,local_68,local_b8);
  lVar1 = 10;
  do {
    x25519_fe51_sqr(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe51_mul(local_90,local_b8,local_90);
  x25519_fe51_sqr(local_b8,local_90);
  lVar1 = 0x31;
  do {
    x25519_fe51_sqr(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe51_mul(local_b8,local_b8,local_90);
  x25519_fe51_sqr(local_68,local_b8);
  lVar1 = 99;
  do {
    x25519_fe51_sqr(local_68,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe51_mul(local_b8,local_68,local_b8);
  lVar1 = 0x32;
  do {
    x25519_fe51_sqr(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe51_mul(local_90,local_b8,local_90);
  lVar1 = 5;
  do {
    x25519_fe51_sqr(local_90,local_90);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe51_mul(param_1,local_90,local_40);
  return;
}

// FUN_14f78ea00 @ 14f78ea00

void FUN_14f78ea00(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  lVar3 = param_2[4];
  uVar4 = *param_2 +
          (((((*param_2 + 0x13U >> 0x33) + param_2[1] >> 0x33) + lVar1 >> 0x33) + lVar2 >> 0x33) +
           lVar3 >> 0x33) * 0x13;
  uVar5 = uVar4 & 0x7ffffffffffff;
  uVar4 = param_2[1] + (uVar4 >> 0x33);
  *param_1 = (char)uVar5;
  uVar6 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar1 + (uVar4 >> 0x33);
  uVar7 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar2 + (uVar4 >> 0x33);
  uVar8 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar3 + (uVar4 >> 0x33) & 0x7ffffffffffff;
  param_1[1] = (char)(uVar5 >> 8);
  param_1[2] = (char)(uVar5 >> 0x10);
  param_1[3] = (char)(uVar5 >> 0x18);
  param_1[4] = (char)(uVar5 >> 0x20);
  param_1[5] = (char)(uVar5 >> 0x28);
  param_1[7] = (char)(uVar6 >> 5);
  param_1[8] = (char)(uVar6 >> 0xd);
  param_1[9] = (char)(uVar6 >> 0x15);
  param_1[10] = (char)(uVar6 >> 0x1d);
  param_1[0xb] = (char)(uVar6 >> 0x25);
  param_1[6] = (byte)(uVar5 >> 0x30) | (char)uVar6 << 3;
  param_1[0xc] = (byte)(uVar6 >> 0x2d) | (char)uVar7 << 6;
  param_1[0xd] = (char)(uVar7 >> 2);
  param_1[0xe] = (char)(uVar7 >> 10);
  param_1[0xf] = (char)(uVar7 >> 0x12);
  param_1[0x10] = (char)(uVar7 >> 0x1a);
  param_1[0x11] = (char)(uVar7 >> 0x22);
  param_1[0x12] = (char)(uVar7 >> 0x2a);
  param_1[0x14] = (char)(uVar8 >> 7);
  param_1[0x15] = (char)(uVar8 >> 0xf);
  param_1[0x16] = (char)(uVar8 >> 0x17);
  param_1[0x17] = (char)(uVar8 >> 0x1f);
  param_1[0x18] = (char)(uVar8 >> 0x27);
  param_1[0x13] = (byte)(uVar7 >> 0x32) | (char)uVar8 * '\x02';
  param_1[0x19] = (byte)(uVar8 >> 0x2f) | (char)uVar4 << 4;
  param_1[0x1a] = (char)(uVar4 >> 4);
  param_1[0x1b] = (char)(uVar4 >> 0xc);
  param_1[0x1c] = (char)(uVar4 >> 0x14);
  param_1[0x1d] = (char)(uVar4 >> 0x1c);
  param_1[0x1e] = (char)(uVar4 >> 0x24);
  param_1[0x1f] = (char)(uVar4 >> 0x2c);
  return;
}

// FUN_14f78ecd0 @ 14f78ecd0

void FUN_14f78ecd0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = (ulonglong)*(uint5 *)((longlong)param_2 + 0x19) << 8 |
               ((ulonglong)*(ushort *)((longlong)param_2 + 0x1e) & 0x7fff) << 0x30 |
               (ulonglong)*(byte *)(param_2 + 3);
  return;
}

// FUN_14f78ee50 @ 14f78ee50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f78ee50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14f78ee6a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  x25519_fe64_sqr(local_38);
  x25519_fe64_sqr(local_78,local_38);
  x25519_fe64_sqr(local_78,local_78);
  x25519_fe64_mul(local_78,param_2,local_78);
  x25519_fe64_mul(local_38,local_38,local_78);
  x25519_fe64_sqr(local_98,local_38);
  x25519_fe64_mul(local_78,local_78,local_98);
  x25519_fe64_sqr(local_98,local_78);
  lVar1 = 4;
  do {
    x25519_fe64_sqr(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe64_mul(local_78,local_98,local_78);
  x25519_fe64_sqr(local_98,local_78);
  lVar1 = 9;
  do {
    x25519_fe64_sqr(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe64_mul(local_98,local_98,local_78);
  x25519_fe64_sqr(local_58,local_98);
  lVar1 = 0x13;
  do {
    x25519_fe64_sqr(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe64_mul(local_98,local_58,local_98);
  lVar1 = 10;
  do {
    x25519_fe64_sqr(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe64_mul(local_78,local_98,local_78);
  x25519_fe64_sqr(local_98,local_78);
  lVar1 = 0x31;
  do {
    x25519_fe64_sqr(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe64_mul(local_98,local_98,local_78);
  x25519_fe64_sqr(local_58,local_98);
  lVar1 = 99;
  do {
    x25519_fe64_sqr(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe64_mul(local_98,local_58,local_98);
  lVar1 = 0x32;
  do {
    x25519_fe64_sqr(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe64_mul(local_78,local_98,local_78);
  lVar1 = 5;
  do {
    x25519_fe64_sqr(local_78,local_78);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  x25519_fe64_mul(param_1,local_78,local_38);
  return;
}

// FUN_14f78f240 @ 14f78f240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78f240(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014f78f254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memmove(param_1,param_2,0x28);
  return;
}

// FUN_14f78f270 @ 14f78f270

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78f270(int *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int local_res10;
  int local_res18;
  int local_58;
  
  lVar16 = (ulonglong)(uint3)param_2[1] * 0x40;
  lVar1 = lVar16 + 0x1000000;
  lVar9 = (ulonglong)*(uint3 *)((longlong)param_2 + 10) * 8;
  uVar13 = param_2[4];
  lVar2 = lVar9 + 0x1000000;
  lVar15 = (ulonglong)*(uint3 *)((longlong)param_2 + 0x17) * 0x20;
  lVar10 = ((ulonglong)
            ((*(byte *)((longlong)param_2 + 0x1f) & 0x7f) << 0x10 |
            (uint)*(byte *)((longlong)param_2 + 0x1d)) |
           (ulonglong)*(byte *)((longlong)param_2 + 0x1e) << 8) * 4;
  lVar17 = (ulonglong)*param_2 + (lVar10 + 0x1000000 >> 0x19) * 0x13;
  lVar18 = (ulonglong)*(uint3 *)((longlong)param_2 + 7) * 0x20 + (lVar1 >> 0x19);
  lVar3 = (ulonglong)uVar13 + 0x1000000;
  lVar4 = lVar15 + 0x1000000;
  lVar8 = (lVar2 >> 0x19) + (ulonglong)*(uint3 *)((longlong)param_2 + 0xd) * 4;
  lVar11 = lVar17 + 0x2000000;
  lVar5 = lVar8 + 0x2000000;
  lVar19 = (ulonglong)(uint3)param_2[5] * 0x80 + (lVar3 >> 0x19);
  lVar6 = lVar18 + 0x2000000;
  lVar7 = lVar19 + 0x2000000;
  lVar14 = (ulonglong)*(uint3 *)((longlong)param_2 + 0x1a) * 0x10 + (lVar4 >> 0x19);
  local_res10 = (int)lVar16;
  lVar16 = lVar14 + 0x2000000;
  param_1[1] = ((int)(lVar11 >> 0x1a) - ((uint)lVar1 & 0xfe000000)) + local_res10;
  *param_1 = (int)lVar17 - ((uint)lVar11 & 0xfc000000);
  local_res18 = (int)lVar9;
  param_1[2] = (int)lVar18 - ((uint)lVar6 & 0xfc000000);
  param_1[3] = ((int)(lVar6 >> 0x1a) - ((uint)lVar2 & 0xfe000000)) + local_res18;
  param_1[4] = (int)lVar8 - ((uint)lVar5 & 0xfc000000);
  param_1[6] = (int)lVar19 - ((uint)lVar7 & 0xfc000000);
  iVar12 = (int)lVar10;
  param_1[5] = ((int)(lVar5 >> 0x1a) - ((uint)lVar3 & 0xfe000000)) + uVar13;
  local_58 = (int)lVar15;
  param_1[7] = ((int)(lVar7 >> 0x1a) - ((uint)lVar4 & 0xfe000000)) + local_58;
  param_1[8] = (int)lVar14 - ((uint)lVar16 & 0xfc000000);
  param_1[9] = ((int)(lVar16 >> 0x1a) - (iVar12 + 0x1000000U & 0xfe000000)) + iVar12;
  return;
}

// FUN_14f78f550 @ 14f78f550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78f550(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  undefined1 local_30 [32];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f78f574;
  FUN_14f790470(local_30);
  FUN_14f790470(local_80,local_30);
  FUN_14f790470(local_80,local_80);
  FUN_14f78f870(local_80,param_2,local_80);
  FUN_14f78f870(local_30,local_30,local_80);
  FUN_14f790470(local_a8,local_30);
  FUN_14f78f870(local_80,local_80,local_a8);
  FUN_14f790470(local_a8,local_80);
  lVar2 = 4;
  lVar1 = 4;
  do {
    FUN_14f790470(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14f78f870(local_80,local_a8,local_80);
  FUN_14f790470(local_a8,local_80);
  lVar1 = 9;
  do {
    FUN_14f790470(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14f78f870(local_a8,local_a8,local_80);
  FUN_14f790470(local_58,local_a8);
  lVar1 = 0x13;
  do {
    FUN_14f790470(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14f78f870(local_a8,local_58,local_a8);
  lVar1 = 10;
  do {
    FUN_14f790470(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14f78f870(local_80,local_a8,local_80);
  FUN_14f790470(local_a8,local_80);
  lVar1 = 0x31;
  lVar3 = 0x31;
  do {
    FUN_14f790470(local_a8,local_a8);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_14f78f870(local_a8,local_a8,local_80);
  FUN_14f790470(local_58,local_a8);
  lVar3 = 99;
  do {
    FUN_14f790470(local_58,local_58);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_14f78f870(local_a8,local_58,local_a8);
  FUN_14f790470(local_a8,local_a8);
  do {
    FUN_14f790470(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14f78f870(local_80,local_a8,local_80);
  FUN_14f790470(local_80,local_80);
  do {
    FUN_14f790470(local_80,local_80);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_14f78f870(param_1,local_80,local_30);
  return;
}

// FUN_14f78f7d0 @ 14f78f7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_14f78f7d0(undefined8 param_1)

{
  byte local_28 [32];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f78f7da;
  FUN_14f791010(local_28,param_1);
  return local_28[0] & 1;
}

// FUN_14f78f800 @ 14f78f800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14f78f800(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f78f80a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  FUN_14f791010(local_38,param_1);
  iVar1 = CRYPTO_memcmp(local_38,&DAT_1534e5ec0,0x20);
  return iVar1 != 0;
}

// FUN_14f78f870 @ 14f78f870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f78f870(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  int local_58;
  
  lVar29 = (longlong)param_2[9];
  lVar33 = (longlong)param_2[1];
  lVar40 = (longlong)param_2[3];
  lVar37 = (longlong)param_2[5];
  lVar28 = (longlong)param_2[7];
  lVar3 = (longlong)(param_2[9] * 2);
  lVar4 = (longlong)(param_2[1] * 2);
  lVar27 = (longlong)param_3[5];
  lVar30 = (longlong)param_3[3];
  lVar24 = (longlong)param_3[2];
  lVar31 = (longlong)param_3[4];
  lVar32 = (longlong)param_3[1];
  lVar5 = (longlong)(param_3[9] * 0x13);
  lVar6 = (longlong)(param_2[3] * 2);
  lVar7 = (longlong)(param_3[7] * 0x13);
  lVar8 = (longlong)(param_2[5] * 2);
  lVar9 = (longlong)(param_3[5] * 0x13);
  lVar10 = (longlong)(param_2[7] * 2);
  lVar35 = (longlong)(param_3[3] * 0x13);
  lVar19 = (longlong)(param_3[2] * 0x13);
  lVar11 = (longlong)param_2[8];
  lVar12 = (longlong)(param_3[4] * 0x13);
  lVar13 = (longlong)param_2[6];
  lVar14 = (longlong)(param_3[6] * 0x13);
  lVar15 = (longlong)param_2[4];
  lVar16 = (longlong)(param_3[8] * 0x13);
  lVar17 = (longlong)param_2[2];
  lVar21 = (longlong)*param_2;
  lVar18 = (longlong)*param_3;
  lVar39 = (param_3[1] * 0x13) * lVar3 + lVar21 * *param_3 + lVar17 * lVar16 + lVar15 * lVar14 +
           lVar13 * lVar12 + lVar11 * lVar19 + lVar35 * lVar10 + lVar9 * lVar8 + lVar7 * lVar6 +
           lVar5 * lVar4;
  lVar25 = lVar31 * lVar21 + lVar24 * lVar17 + *param_3 * lVar15 + lVar16 * lVar13 + lVar14 * lVar11
           + lVar32 * lVar6 + lVar30 * lVar4 + lVar10 * lVar7 + lVar8 * lVar5 + lVar9 * lVar3;
  uVar20 = lVar25 + 0x2000000;
  lVar34 = lVar33 * *param_3 + lVar40 * lVar16 + lVar32 * lVar21 + lVar37 * lVar14 + lVar28 * lVar12
           + lVar29 * lVar19 + lVar11 * lVar35 + lVar13 * lVar9 + lVar15 * lVar7 + lVar17 * lVar5 +
           (lVar39 + 0x2000000 >> 0x1a);
  lVar41 = lVar33 * lVar31 + lVar40 * lVar24 + lVar27 * lVar21 + lVar37 * *param_3 + lVar28 * lVar16
           + lVar30 * lVar17 + lVar29 * lVar14 + lVar32 * lVar15 + lVar11 * lVar7 + lVar13 * lVar5 +
           ((longlong)uVar20 >> 0x1a);
  lVar38 = (longlong)param_3[6];
  lVar19 = lVar41 + 0x1000000;
  lVar26 = lVar24 * lVar21 + *param_3 * lVar17 + lVar16 * lVar15 + lVar14 * lVar13 + lVar12 * lVar11
           + lVar32 * lVar4 + lVar10 * lVar9 + lVar8 * lVar7 + lVar35 * lVar3 + lVar6 * lVar5 +
           (lVar34 + 0x1000000 >> 0x19);
  lVar35 = lVar26 + 0x2000000;
  lVar22 = lVar38 * lVar21 + lVar31 * lVar17 + lVar24 * lVar15 + *param_3 * lVar13 + lVar27 * lVar4
           + lVar16 * lVar11 + lVar32 * lVar8 + lVar30 * lVar6 + lVar10 * lVar5 + lVar7 * lVar3 +
           (lVar19 >> 0x19);
  lVar1 = lVar22 + 0x2000000;
  lVar23 = (longlong)param_3[7];
  lVar36 = lVar33 * lVar24 + lVar40 * lVar18 + lVar37 * lVar16 + lVar30 * lVar21 + lVar32 * lVar17 +
           lVar28 * lVar14 + lVar29 * lVar12 + lVar11 * lVar9 + lVar13 * lVar7 + lVar15 * lVar5 +
           (lVar35 >> 0x1a);
  lVar7 = lVar36 + 0x1000000;
  lVar12 = lVar21 * lVar23 + lVar38 * lVar33 + lVar40 * lVar31 + lVar37 * lVar24 + lVar27 * lVar17 +
           lVar28 * lVar18 + lVar29 * lVar16 + lVar30 * lVar15 + lVar32 * lVar13 + lVar11 * lVar5 +
           (lVar1 >> 0x1a);
  lVar25 = lVar25 + ((lVar7 >> 0x19) - (uVar20 & 0xfffffffffc000000));
  lVar9 = lVar12 + 0x1000000;
  lVar14 = lVar25 + 0x2000000;
  lVar6 = lVar21 * param_3[8] + lVar4 * lVar23 + lVar38 * lVar17 + lVar31 * lVar15 + lVar24 * lVar13
          + lVar27 * lVar6 + lVar18 * lVar11 + lVar32 * lVar10 + lVar30 * lVar8 + lVar5 * lVar3 +
          (lVar9 >> 0x19);
  lVar3 = lVar6 + 0x2000000;
  lVar8 = param_3[9] * lVar21 + lVar33 * param_3[8] + lVar17 * lVar23 + lVar38 * lVar40 +
          lVar37 * lVar31 + lVar28 * lVar24 + lVar27 * lVar15 + lVar29 * lVar18 + lVar30 * lVar13 +
          lVar32 * lVar11 + (lVar3 >> 0x1a);
  lVar4 = lVar8 + 0x1000000;
  lVar39 = lVar39 + ((lVar4 >> 0x19) * 0x13 - (lVar39 + 0x2000000U & 0xfffffffffc000000));
  lVar5 = lVar39 + 0x2000000;
  *param_1 = (int)lVar39 - ((uint)lVar5 & 0xfc000000);
  iVar2 = (int)lVar34;
  param_1[2] = (int)lVar26 - ((uint)lVar35 & 0xfc000000);
  param_1[1] = ((int)(lVar5 >> 0x1a) - (iVar2 + 0x1000000U & 0xfe000000)) + iVar2;
  local_58 = (int)lVar41;
  param_1[3] = (int)lVar36 - ((uint)lVar7 & 0xfe000000);
  param_1[4] = (int)lVar25 - ((uint)lVar14 & 0xfc000000);
  param_1[5] = ((int)(lVar14 >> 0x1a) - ((uint)lVar19 & 0xfe000000)) + local_58;
  param_1[9] = (int)lVar8 - ((uint)lVar4 & 0xfe000000);
  param_1[6] = (int)lVar22 - ((uint)lVar1 & 0xfc000000);
  param_1[7] = (int)lVar12 - ((uint)lVar9 & 0xfe000000);
  param_1[8] = (int)lVar6 - ((uint)lVar3 & 0xfc000000);
  return;
}

// FUN_14f7901f0 @ 14f7901f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7901f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f790214;
  FUN_14f790470(local_60);
  FUN_14f790470(local_88,local_60);
  FUN_14f790470(local_88,local_88);
  FUN_14f78f870(local_88,param_2,local_88);
  FUN_14f78f870(local_60,local_60,local_88);
  FUN_14f790470(local_60,local_60);
  FUN_14f78f870(local_60,local_88,local_60);
  FUN_14f790470(local_88,local_60);
  lVar1 = 4;
  do {
    FUN_14f790470(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14f78f870(local_60,local_88,local_60);
  FUN_14f790470(local_88,local_60);
  lVar1 = 9;
  lVar2 = 9;
  do {
    FUN_14f790470(local_88,local_88);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_14f78f870(local_88,local_88,local_60);
  FUN_14f790470(local_38,local_88);
  lVar2 = 0x13;
  do {
    FUN_14f790470(local_38,local_38);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_14f78f870(local_88,local_38,local_88);
  FUN_14f790470(local_88,local_88);
  do {
    FUN_14f790470(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14f78f870(local_60,local_88,local_60);
  FUN_14f790470(local_88,local_60);
  lVar1 = 0x31;
  lVar2 = 0x31;
  do {
    FUN_14f790470(local_88,local_88);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_14f78f870(local_88,local_88,local_60);
  FUN_14f790470(local_38,local_88);
  lVar2 = 99;
  do {
    FUN_14f790470(local_38,local_38);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_14f78f870(local_88,local_38,local_88);
  FUN_14f790470(local_88,local_88);
  do {
    FUN_14f790470(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14f78f870(local_60,local_88,local_60);
  FUN_14f790470(local_60,local_60);
  FUN_14f790470(local_60,local_60);
  FUN_14f78f870(param_1,local_60,param_2);
  return;
}

// FUN_14f790470 @ 14f790470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f790470(int *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  int local_68;
  
  iVar2 = param_2[5];
  lVar20 = (longlong)iVar2;
  lVar23 = (longlong)param_2[4];
  iVar3 = *param_2;
  lVar24 = (longlong)param_2[2];
  iVar4 = param_2[9];
  iVar5 = param_2[6];
  lVar17 = (longlong)iVar5;
  iVar6 = param_2[7];
  lVar18 = (longlong)iVar6;
  iVar7 = param_2[1];
  lVar29 = (longlong)param_2[3];
  lVar16 = (longlong)param_2[8];
  lVar13 = (longlong)(iVar5 * 0x13);
  lVar8 = (longlong)(param_2[4] * 2);
  lVar27 = (longlong)(iVar6 * 0x26);
  lVar9 = (longlong)(param_2[3] * 2);
  lVar31 = (longlong)(param_2[8] * 0x13);
  lVar10 = (longlong)(param_2[2] * 2);
  lVar25 = (longlong)(iVar4 * 0x26);
  lVar11 = (longlong)(iVar7 * 2);
  lVar12 = (iVar2 * 0x26) * lVar20 + (longlong)iVar3 * (longlong)iVar3 + lVar11 * lVar25 +
           lVar10 * lVar31 + lVar9 * lVar27 + lVar8 * lVar13;
  lVar21 = (longlong)(iVar2 * 2);
  lVar32 = (longlong)(iVar3 * 2);
  lVar26 = (iVar5 * 2) * lVar31 + lVar24 * lVar24 + lVar23 * lVar32 + lVar21 * lVar25 +
           lVar18 * lVar27 + lVar11 * lVar9;
  uVar22 = lVar26 + 0x2000000;
  lVar33 = iVar7 * lVar32 + lVar24 * lVar25 + lVar23 * lVar27 + lVar21 * lVar13 + lVar31 * lVar9 +
           (lVar12 + 0x2000000 >> 0x1a);
  lVar34 = (longlong)(iVar6 * 2);
  lVar19 = lVar17 * lVar25 + lVar29 * lVar10 + lVar34 * lVar31 + lVar23 * lVar11 + lVar32 * lVar20 +
           ((longlong)uVar22 >> 0x1a);
  lVar15 = lVar24 * lVar32 + iVar7 * lVar11 + lVar17 * lVar13 + lVar21 * lVar27 + lVar25 * lVar9 +
           lVar31 * lVar8 + (lVar33 + 0x1000000 >> 0x19);
  lVar28 = lVar19 + 0x1000000;
  lVar13 = lVar15 + 0x2000000;
  lVar14 = lVar17 * lVar32 + lVar16 * lVar31 + lVar34 * lVar25 + lVar29 * lVar9 + lVar21 * lVar11 +
           lVar23 * lVar10 + (lVar28 >> 0x19);
  lVar1 = lVar14 + 0x2000000;
  lVar31 = lVar29 * lVar32 + lVar24 * lVar11 + lVar23 * lVar25 + lVar17 * lVar27 + lVar21 * lVar31 +
           (lVar13 >> 0x1a);
  lVar29 = lVar31 + 0x1000000;
  lVar30 = lVar16 * lVar25 + lVar32 * lVar18 + lVar17 * lVar11 + lVar23 * lVar9 + lVar10 * lVar20 +
           (lVar1 >> 0x1a);
  lVar26 = lVar26 + ((lVar29 >> 0x19) - (uVar22 & 0xfffffffffc000000));
  lVar24 = lVar30 + 0x1000000;
  lVar27 = lVar26 + 0x2000000;
  lVar23 = lVar16 * lVar32 + iVar4 * lVar25 + lVar23 * lVar23 + lVar34 * lVar11 + lVar17 * lVar10 +
           lVar21 * lVar9 + (lVar24 >> 0x19);
  lVar21 = lVar23 + 0x2000000;
  param_1[7] = (int)lVar30 - ((uint)lVar24 & 0xfe000000);
  lVar8 = iVar4 * lVar32 + lVar16 * lVar11 + lVar17 * lVar9 + lVar18 * lVar10 + lVar8 * lVar20 +
          (lVar21 >> 0x1a);
  param_1[8] = (int)lVar23 - ((uint)lVar21 & 0xfc000000);
  lVar24 = lVar8 + 0x1000000;
  lVar12 = lVar12 + ((lVar24 >> 0x19) * 0x13 - (lVar12 + 0x2000000U & 0xfffffffffc000000));
  lVar21 = lVar12 + 0x2000000;
  *param_1 = (int)lVar12 - ((uint)lVar21 & 0xfc000000);
  iVar2 = (int)lVar33;
  param_1[2] = (int)lVar15 - ((uint)lVar13 & 0xfc000000);
  param_1[1] = ((int)(lVar21 >> 0x1a) - (iVar2 + 0x1000000U & 0xfe000000)) + iVar2;
  param_1[3] = (int)lVar31 - ((uint)lVar29 & 0xfe000000);
  local_68 = (int)lVar19;
  param_1[4] = (int)lVar26 - ((uint)lVar27 & 0xfc000000);
  param_1[5] = ((int)(lVar27 >> 0x1a) - ((uint)lVar28 & 0xfe000000)) + local_68;
  param_1[9] = (int)lVar8 - ((uint)lVar24 & 0xfe000000);
  param_1[6] = (int)lVar14 - ((uint)lVar1 & 0xfc000000);
  return;
}

// FUN_14f790a20 @ 14f790a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f790a20(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  
  iVar6 = param_2[5];
  lVar21 = (longlong)iVar6;
  iVar7 = param_2[7];
  lVar20 = (longlong)iVar7;
  lVar27 = (longlong)param_2[2];
  iVar8 = param_2[6];
  lVar19 = (longlong)iVar8;
  lVar23 = (longlong)param_2[4];
  iVar9 = param_2[9];
  iVar10 = *param_2;
  lVar32 = (longlong)param_2[3];
  lVar33 = (longlong)param_2[8];
  iVar11 = param_2[1];
  lVar18 = (longlong)(iVar8 * 0x13);
  lVar12 = (longlong)(param_2[4] * 2);
  lVar29 = (longlong)(iVar7 * 0x26);
  lVar13 = (longlong)(param_2[3] * 2);
  lVar30 = (longlong)(param_2[8] * 0x13);
  lVar14 = (longlong)(param_2[2] * 2);
  lVar16 = (longlong)(iVar9 * 0x26);
  lVar15 = (longlong)(iVar11 * 2);
  lVar22 = (longlong)(iVar6 * 2);
  lVar31 = ((iVar6 * 0x26) * lVar21 + (longlong)iVar10 * (longlong)iVar10 + lVar15 * lVar16 +
            lVar14 * lVar30 + lVar13 * lVar29 + lVar12 * lVar18) * 2;
  lVar17 = (longlong)(iVar10 * 2);
  lVar25 = ((iVar8 * 2) * lVar30 + lVar22 * lVar16 + lVar20 * lVar29 + lVar15 * lVar13 +
            lVar27 * lVar27 + lVar23 * lVar17) * 2;
  uVar24 = lVar25 + 0x2000000;
  lVar1 = (lVar31 + 0x2000000 >> 0x1a) +
          (lVar27 * lVar16 + lVar23 * lVar29 + lVar22 * lVar18 + lVar30 * lVar13 + iVar11 * lVar17)
          * 2;
  lVar28 = (longlong)(iVar7 * 2);
  lVar2 = ((longlong)uVar24 >> 0x1a) +
          (lVar19 * lVar16 + lVar32 * lVar14 + lVar28 * lVar30 + lVar23 * lVar15 + lVar17 * lVar21)
          * 2;
  lVar3 = (lVar1 + 0x1000000 >> 0x19) +
          (iVar11 * lVar15 + lVar19 * lVar18 + lVar22 * lVar29 + lVar16 * lVar13 + lVar30 * lVar12 +
          lVar27 * lVar17) * 2;
  lVar5 = lVar3 + 0x2000000;
  lVar4 = (lVar2 + 0x1000000 >> 0x19) +
          (lVar33 * lVar30 + lVar28 * lVar16 + lVar32 * lVar13 + lVar22 * lVar15 + lVar23 * lVar14 +
          lVar19 * lVar17) * 2;
  lVar18 = lVar4 + 0x2000000;
  lVar30 = (lVar5 >> 0x1a) +
           (lVar27 * lVar15 + lVar23 * lVar16 + lVar19 * lVar29 + lVar22 * lVar30 + lVar32 * lVar17)
           * 2;
  lVar27 = lVar30 + 0x1000000;
  lVar32 = (lVar18 >> 0x1a) +
           (lVar17 * lVar20 + lVar19 * lVar15 + lVar23 * lVar13 + lVar14 * lVar21 + lVar33 * lVar16)
           * 2;
  lVar29 = lVar32 + 0x1000000;
  lVar25 = lVar25 + ((lVar27 >> 0x19) - (uVar24 & 0xfffffffffc000000));
  lVar26 = lVar25 + 0x2000000;
  lVar22 = (lVar29 >> 0x19) +
           (lVar28 * lVar15 + lVar19 * lVar14 + lVar22 * lVar13 + lVar33 * lVar17 + iVar9 * lVar16 +
           lVar23 * lVar23) * 2;
  lVar16 = lVar22 + 0x2000000;
  lVar14 = (lVar16 >> 0x1a) +
           (lVar19 * lVar13 + lVar20 * lVar14 + lVar12 * lVar21 + iVar9 * lVar17 + lVar33 * lVar15)
           * 2;
  lVar12 = lVar14 + 0x1000000;
  lVar31 = lVar31 + ((lVar12 >> 0x19) * 0x13 - (lVar31 + 0x2000000U & 0xfffffffffc000000));
  lVar13 = lVar31 + 0x2000000;
  *param_1 = (int)lVar31 - ((uint)lVar13 & 0xfc000000);
  iVar6 = (int)lVar1;
  param_1[1] = ((int)(lVar13 >> 0x1a) - (iVar6 + 0x1000000U & 0xfe000000)) + iVar6;
  param_1[2] = (int)lVar3 - ((uint)lVar5 & 0xfc000000);
  param_1[3] = (int)lVar30 - ((uint)lVar27 & 0xfe000000);
  param_1[6] = (int)lVar4 - ((uint)lVar18 & 0xfc000000);
  param_1[4] = (int)lVar25 - ((uint)lVar26 & 0xfc000000);
  param_1[7] = (int)lVar32 - ((uint)lVar29 & 0xfe000000);
  param_1[8] = (int)lVar22 - ((uint)lVar16 & 0xfc000000);
  iVar6 = (int)lVar2;
  param_1[5] = ((int)(lVar26 >> 0x1a) - (iVar6 + 0x1000000U & 0xfe000000)) + iVar6;
  param_1[9] = (int)lVar14 - ((uint)lVar12 & 0xfe000000);
  return;
}

// FUN_14f791010 @ 14f791010

void FUN_14f791010(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  iVar1 = param_2[2];
  iVar2 = param_2[3];
  iVar3 = param_2[4];
  iVar4 = param_2[5];
  iVar5 = param_2[6];
  iVar6 = param_2[7];
  iVar7 = param_2[8];
  iVar8 = param_2[9];
  uVar13 = *param_2 +
           (((((((((((iVar8 * 0x13 + 0x1000000 >> 0x19) + *param_2 >> 0x1a) + param_2[1] >> 0x19) +
                   iVar1 >> 0x1a) + iVar2 >> 0x19) + iVar3 >> 0x1a) + iVar4 >> 0x19) + iVar5 >> 0x1a
              ) + iVar6 >> 0x19) + iVar7 >> 0x1a) + iVar8 >> 0x19) * 0x13;
  uVar14 = uVar13 & 0x3ffffff;
  uVar13 = param_2[1] + ((int)uVar13 >> 0x1a);
  *param_1 = (char)uVar14;
  uVar15 = uVar13 & 0x1ffffff;
  uVar13 = iVar1 + ((int)uVar13 >> 0x19);
  uVar16 = uVar13 & 0x3ffffff;
  uVar13 = iVar2 + ((int)uVar13 >> 0x1a);
  uVar17 = uVar13 & 0x1ffffff;
  uVar13 = iVar3 + ((int)uVar13 >> 0x19);
  uVar9 = uVar13 & 0x3ffffff;
  uVar13 = iVar4 + ((int)uVar13 >> 0x1a);
  uVar12 = uVar13 & 0x1ffffff;
  uVar13 = iVar5 + ((int)uVar13 >> 0x19);
  uVar11 = uVar13 & 0x3ffffff;
  uVar13 = iVar6 + ((int)uVar13 >> 0x1a);
  uVar10 = uVar13 & 0x1ffffff;
  uVar13 = iVar7 + ((int)uVar13 >> 0x19);
  uVar18 = uVar13 & 0x3ffffff;
  uVar13 = iVar8 + ((int)uVar13 >> 0x1a) & 0x1ffffff;
  param_1[1] = (char)(uVar14 >> 8);
  param_1[2] = (char)(uVar14 >> 0x10);
  param_1[0x10] = (char)uVar12;
  param_1[3] = (byte)(uVar14 >> 0x18) | (char)uVar15 << 2;
  param_1[4] = (char)((int)uVar15 >> 6);
  param_1[5] = (char)((int)uVar15 >> 0xe);
  param_1[7] = (char)((int)uVar16 >> 5);
  param_1[8] = (char)((int)uVar16 >> 0xd);
  param_1[6] = (byte)((int)uVar15 >> 0x16) | (char)uVar16 << 3;
  param_1[9] = (byte)((int)uVar16 >> 0x15) | (char)uVar17 << 5;
  param_1[10] = (char)((int)uVar17 >> 3);
  param_1[0xb] = (char)((int)uVar17 >> 0xb);
  param_1[0xd] = (char)((int)uVar9 >> 2);
  param_1[0xe] = (char)((int)uVar9 >> 10);
  param_1[0x11] = (char)(uVar12 >> 8);
  param_1[0x12] = (char)(uVar12 >> 0x10);
  param_1[0xc] = (byte)((int)uVar17 >> 0x13) | (char)uVar9 << 6;
  param_1[0x14] = (char)((int)uVar11 >> 7);
  param_1[0x15] = (char)((int)uVar11 >> 0xf);
  param_1[0xf] = (char)((int)uVar9 >> 0x12);
  param_1[0x13] = (byte)(uVar12 >> 0x18) | (char)uVar11 * '\x02';
  param_1[0x17] = (char)((int)uVar10 >> 5);
  param_1[0x18] = (char)((int)uVar10 >> 0xd);
  param_1[0x16] = (byte)((int)uVar11 >> 0x17) | (char)uVar10 << 3;
  param_1[0x19] = (byte)((int)uVar10 >> 0x15) | (char)uVar18 << 4;
  param_1[0x1a] = (char)((int)uVar18 >> 4);
  param_1[0x1b] = (char)((int)uVar18 >> 0xc);
  param_1[0x1d] = (char)((int)uVar13 >> 2);
  param_1[0x1f] = (char)((int)uVar13 >> 0x12);
  param_1[0x1c] = (byte)((int)uVar18 >> 0x14) | (char)uVar13 << 6;
  param_1[0x1e] = (char)((int)uVar13 >> 10);
  return;
}

// FUN_14f791280 @ 14f791280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f791280(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = param_2[10] + *param_2;
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  FUN_14f78f870(param_1 + 0x14,param_1);
  FUN_14f78f870(param_1 + 10,param_1 + 10,param_3 + 0x28);
  FUN_14f78f870(param_1 + 0x1e,param_3 + 0x78,param_2 + 0x1e);
  FUN_14f78f870(param_1,param_2 + 0x14,param_3 + 0x50);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  iVar7 = param_1[6];
  iVar8 = param_1[7];
  iVar9 = param_1[8];
  iVar10 = param_1[9];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = param_1[0x1e] + iVar1 * 2;
  param_1[0x15] = param_1[0x1f] + iVar2 * 2;
  param_1[0x16] = param_1[0x20] + iVar3 * 2;
  param_1[0x17] = param_1[0x21] + iVar4 * 2;
  param_1[0x18] = param_1[0x22] + iVar5 * 2;
  param_1[0x19] = param_1[0x23] + iVar6 * 2;
  param_1[0x1a] = param_1[0x24] + iVar7 * 2;
  param_1[0x1b] = param_1[0x25] + iVar8 * 2;
  param_1[0x1c] = param_1[0x26] + iVar9 * 2;
  param_1[0x1d] = param_1[0x27] + iVar10 * 2;
  param_1[0x23] = iVar6 * 2 - param_1[0x23];
  param_1[0x27] = iVar10 * 2 - param_1[0x27];
  param_1[0x1e] = iVar1 * 2 - param_1[0x1e];
  param_1[0x1f] = iVar2 * 2 - param_1[0x1f];
  param_1[0x20] = iVar3 * 2 - param_1[0x20];
  param_1[0x21] = iVar4 * 2 - param_1[0x21];
  param_1[0x22] = iVar5 * 2 - param_1[0x22];
  param_1[0x24] = iVar7 * 2 - param_1[0x24];
  param_1[0x25] = iVar8 * 2 - param_1[0x25];
  param_1[0x26] = iVar9 * 2 - param_1[0x26];
  return;
}

// FUN_14f791660 @ 14f791660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f791660(undefined8 *param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_938 [32];
  undefined1 local_918 [40];
  undefined1 local_8f0 [40];
  undefined1 local_8c8 [40];
  undefined1 local_8a0 [40];
  undefined1 local_878 [40];
  undefined1 local_850 [40];
  undefined1 local_828 [40];
  undefined1 local_800 [40];
  undefined1 local_7d8 [40];
  undefined1 local_7b0 [40];
  undefined1 local_788 [40];
  undefined1 local_760 [40];
  undefined1 local_738 [160];
  undefined1 local_698 [160];
  undefined1 local_5f8 [160];
  undefined1 local_558 [160];
  undefined1 local_4b8 [160];
  undefined1 local_418 [160];
  undefined1 local_378 [160];
  undefined1 local_2d8 [160];
  char local_238 [252];
  char acStack_13c [256];
  char acStack_3c [4];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f79167e;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_938;
  FUN_14f795670(local_238);
  FUN_14f795670(acStack_13c + 4,param_4);
  FUN_14f792de0(local_738,param_3);
  memmove(local_7d8,param_3,0x28);
  memmove(local_7b0,(void *)((longlong)param_3 + 0x28),0x28);
  memmove(local_788,(void *)((longlong)param_3 + 0x50),0x28);
  FUN_14f7929f0(local_918,local_7d8);
  FUN_14f78f870(local_7d8,local_918,local_8a0);
  FUN_14f78f870(local_7b0,local_8f0,local_8c8);
  FUN_14f78f870(local_788,local_8c8,local_8a0);
  FUN_14f78f870(local_760,local_918,local_8f0);
  FUN_14f791280(local_918,local_7d8,local_738);
  FUN_14f78f870(local_878,local_918,local_8a0);
  FUN_14f78f870(local_850,local_8f0,local_8c8);
  FUN_14f78f870(local_828,local_8c8,local_8a0);
  FUN_14f78f870(local_800,local_918,local_8f0);
  FUN_14f792de0(local_698,local_878);
  FUN_14f791280(local_918,local_7d8,local_698);
  FUN_14f78f870(local_878,local_918,local_8a0);
  FUN_14f78f870(local_850,local_8f0,local_8c8);
  FUN_14f78f870(local_828,local_8c8,local_8a0);
  FUN_14f78f870(local_800,local_918,local_8f0);
  FUN_14f792de0(local_5f8,local_878);
  FUN_14f791280(local_918,local_7d8,local_5f8);
  FUN_14f78f870(local_878,local_918,local_8a0);
  FUN_14f78f870(local_850,local_8f0,local_8c8);
  FUN_14f78f870(local_828,local_8c8,local_8a0);
  FUN_14f78f870(local_800,local_918,local_8f0);
  FUN_14f792de0(local_558,local_878);
  FUN_14f791280(local_918,local_7d8,local_558);
  FUN_14f78f870(local_878,local_918,local_8a0);
  FUN_14f78f870(local_850,local_8f0,local_8c8);
  FUN_14f78f870(local_828,local_8c8,local_8a0);
  FUN_14f78f870(local_800,local_918,local_8f0);
  FUN_14f792de0(local_4b8,local_878);
  FUN_14f791280(local_918,local_7d8,local_4b8);
  FUN_14f78f870(local_878,local_918,local_8a0);
  FUN_14f78f870(local_850,local_8f0,local_8c8);
  FUN_14f78f870(local_828,local_8c8,local_8a0);
  FUN_14f78f870(local_800,local_918,local_8f0);
  FUN_14f792de0(local_418,local_878);
  FUN_14f791280(local_918,local_7d8,local_418);
  FUN_14f78f870(local_878,local_918,local_8a0);
  FUN_14f78f870(local_850,local_8f0,local_8c8);
  FUN_14f78f870(local_828,local_8c8,local_8a0);
  FUN_14f78f870(local_800,local_918,local_8f0);
  FUN_14f792de0(local_378,local_878);
  FUN_14f791280(local_918,local_7d8,local_378);
  FUN_14f78f870(local_878,local_918,local_8a0);
  FUN_14f78f870(local_850,local_8f0,local_8c8);
  FUN_14f78f870(local_828,local_8c8,local_8a0);
  FUN_14f78f870(local_800,local_918,local_8f0);
  FUN_14f792de0(local_2d8,local_878);
  iVar3 = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  lVar4 = 0;
  do {
    if ((acStack_13c[lVar4 + 3] != '\0') || (acStack_3c[lVar4 + 3] != '\0')) break;
    if ((acStack_13c[lVar4 + 2] != '\0') || (acStack_3c[lVar4 + 2] != '\0')) {
      iVar3 = iVar3 + -1;
      break;
    }
    if ((acStack_13c[lVar4 + 1] != '\0') || (acStack_3c[lVar4 + 1] != '\0')) {
      iVar3 = iVar3 + -2;
      break;
    }
    if ((acStack_13c[lVar4] != '\0') || (acStack_3c[lVar4] != '\0')) {
      iVar3 = iVar3 + -3;
      break;
    }
    iVar3 = iVar3 + -4;
    lVar1 = lVar4 + 0xfb;
    lVar4 = lVar4 + -4;
  } while (-1 < lVar1);
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      FUN_14f7929f0(local_918,param_1);
      cVar2 = local_238[lVar4];
      if (cVar2 < '\x01') {
        if (cVar2 < '\0') {
          FUN_14f78f870(local_878,local_918,local_8a0);
          FUN_14f78f870(local_850,local_8f0,local_8c8);
          FUN_14f78f870(local_828,local_8c8,local_8a0);
          FUN_14f78f870(local_800,local_918,local_8f0);
          FUN_14f793410(local_918,local_878,local_738 + (longlong)-((int)cVar2 / 2) * 0xa0);
        }
      }
      else {
        FUN_14f78f870(local_878,local_918,local_8a0);
        FUN_14f78f870(local_850,local_8f0,local_8c8);
        FUN_14f78f870(local_828,local_8c8,local_8a0);
        FUN_14f78f870(local_800,local_918,local_8f0);
        FUN_14f791280(local_918,local_878,local_738 + (longlong)((int)cVar2 / 2) * 0xa0);
      }
      cVar2 = acStack_13c[lVar4 + 4];
      if (cVar2 < '\x01') {
        if (cVar2 < '\0') {
          FUN_14f78f870(local_878,local_918,local_8a0);
          FUN_14f78f870(local_850,local_8f0,local_8c8);
          FUN_14f78f870(local_828,local_8c8,local_8a0);
          FUN_14f78f870(local_800,local_918,local_8f0);
          FUN_14f792510(local_918,local_878,&DAT_1534e5ae0 + (longlong)-((int)cVar2 / 2) * 0x78);
        }
      }
      else {
        FUN_14f78f870(local_878,local_918,local_8a0);
        FUN_14f78f870(local_850,local_8f0,local_8c8);
        FUN_14f78f870(local_828,local_8c8,local_8a0);
        FUN_14f78f870(local_800,local_918,local_8f0);
        FUN_14f792130(local_918,local_878,&DAT_1534e5ae0 + (longlong)((int)cVar2 / 2) * 0x78);
      }
      FUN_14f78f870(param_1,local_918,local_8a0);
      FUN_14f78f870(param_1 + 5,local_8f0,local_8c8);
      FUN_14f78f870(param_1 + 10,local_8c8,local_8a0);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

// FUN_14f791dc0 @ 14f791dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f791dc0(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f791ddf;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  FUN_14f78f270(param_1 + 10);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x14] = 1;
  FUN_14f790470(&local_e8,param_1 + 10);
  FUN_14f78f870(&local_c0,&local_e8,&DAT_1534de238);
  iVar5 = local_e8 - param_1[0x14];
  local_cc = local_cc - param_1[0x1b];
  local_c8 = local_c8 - param_1[0x1c];
  local_a4 = local_a4 + param_1[0x1b];
  local_a0 = local_a0 + param_1[0x1c];
  local_e4 = local_e4 - param_1[0x15];
  local_e0 = local_e0 - param_1[0x16];
  local_dc = local_dc - param_1[0x17];
  local_d8 = local_d8 - param_1[0x18];
  local_d4 = local_d4 - param_1[0x19];
  local_d0 = local_d0 - param_1[0x1a];
  local_c4 = local_c4 - param_1[0x1d];
  local_c0 = local_c0 + param_1[0x14];
  local_bc = local_bc + param_1[0x15];
  local_b8 = local_b8 + param_1[0x16];
  local_b4 = local_b4 + param_1[0x17];
  local_b0 = local_b0 + param_1[0x18];
  local_ac = local_ac + param_1[0x19];
  local_a8 = local_a8 + param_1[0x1a];
  local_9c = local_9c + param_1[0x1d];
  local_e8 = iVar5;
  FUN_14f790470(&local_98,&local_c0);
  FUN_14f78f870(&local_98,&local_98,&local_c0);
  FUN_14f790470(param_1,&local_98);
  FUN_14f78f870(param_1,param_1,&local_c0);
  FUN_14f78f870(param_1,param_1,&local_e8);
  FUN_14f7901f0(param_1,param_1);
  FUN_14f78f870(param_1,param_1,&local_98);
  FUN_14f78f870(param_1,param_1,&local_e8);
  FUN_14f790470(&local_70,param_1);
  FUN_14f78f870(&local_70,&local_70,&local_c0);
  iVar2 = local_dc;
  iVar1 = local_e0;
  iVar4 = local_e4;
  local_98 = local_70 - iVar5;
  local_94 = local_6c - local_e4;
  local_90 = local_68 - local_e0;
  local_8c = local_64 - local_dc;
  local_88 = local_60 - local_d8;
  local_84 = local_5c - local_d4;
  local_80 = local_58 - local_d0;
  local_7c = local_54 - local_cc;
  local_78 = local_50 - local_c8;
  local_74 = local_4c - local_c4;
  FUN_14f791010(&local_c0,&local_98);
  iVar3 = CRYPTO_memcmp(&local_c0,&DAT_1534e5ec0,0x20);
  if (iVar3 != 0) {
    local_98 = local_70 + iVar5;
    local_94 = local_6c + iVar4;
    local_90 = local_68 + iVar1;
    local_8c = local_64 + iVar2;
    local_88 = local_d8 + local_60;
    local_84 = local_d4 + local_5c;
    local_80 = local_d0 + local_58;
    local_7c = local_cc + local_54;
    local_78 = local_c8 + local_50;
    local_74 = local_c4 + local_4c;
    FUN_14f791010(&local_c0,&local_98);
    iVar4 = CRYPTO_memcmp(&local_c0,&DAT_1534e5ec0,0x20);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    FUN_14f78f870(param_1,param_1,&DAT_1534de260);
  }
  FUN_14f791010(&local_c0,param_1);
  if (((byte)local_c0 & 1) != *(byte *)(param_2 + 0x1f) >> 7) {
    *param_1 = -*param_1;
    param_1[1] = -param_1[1];
    param_1[2] = -param_1[2];
    param_1[3] = -param_1[3];
    param_1[4] = -param_1[4];
    param_1[5] = -param_1[5];
    param_1[6] = -param_1[6];
    param_1[7] = -param_1[7];
    param_1[8] = -param_1[8];
    param_1[9] = -param_1[9];
  }
  FUN_14f78f870(param_1 + 0x1e,param_1,param_1 + 10);
  return 0;
}

// FUN_14f792130 @ 14f792130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f792130(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = *param_2 + param_2[10];
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  FUN_14f78f870(param_1 + 0x14,param_1);
  FUN_14f78f870(param_1 + 10,param_1 + 10,param_3 + 0x28);
  FUN_14f78f870(param_1 + 0x1e,param_3 + 0x50,param_2 + 0x1e);
  iVar1 = param_2[0x14];
  iVar2 = param_2[0x15];
  iVar3 = param_2[0x16];
  iVar4 = param_2[0x17];
  iVar5 = param_2[0x18];
  iVar6 = param_2[0x19];
  iVar7 = param_2[0x1a];
  iVar8 = param_2[0x1b];
  iVar9 = param_2[0x1c];
  iVar10 = param_2[0x1d];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = param_1[0x1e] + iVar1 * 2;
  param_1[0x15] = param_1[0x1f] + iVar2 * 2;
  param_1[0x16] = param_1[0x20] + iVar3 * 2;
  param_1[0x17] = param_1[0x21] + iVar4 * 2;
  param_1[0x18] = param_1[0x22] + iVar5 * 2;
  param_1[0x19] = param_1[0x23] + iVar6 * 2;
  param_1[0x1a] = param_1[0x24] + iVar7 * 2;
  param_1[0x1b] = param_1[0x25] + iVar8 * 2;
  param_1[0x1c] = param_1[0x26] + iVar9 * 2;
  param_1[0x1d] = param_1[0x27] + iVar10 * 2;
  param_1[0x23] = iVar6 * 2 - param_1[0x23];
  param_1[0x27] = iVar10 * 2 - param_1[0x27];
  param_1[0x1e] = iVar1 * 2 - param_1[0x1e];
  param_1[0x1f] = iVar2 * 2 - param_1[0x1f];
  param_1[0x20] = iVar3 * 2 - param_1[0x20];
  param_1[0x21] = iVar4 * 2 - param_1[0x21];
  param_1[0x22] = iVar5 * 2 - param_1[0x22];
  param_1[0x24] = iVar7 * 2 - param_1[0x24];
  param_1[0x25] = iVar8 * 2 - param_1[0x25];
  param_1[0x26] = iVar9 * 2 - param_1[0x26];
  return;
}

// FUN_14f792510 @ 14f792510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f792510(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = *param_2 + param_2[10];
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  FUN_14f78f870(param_1 + 0x14,param_1,param_3 + 0x28);
  FUN_14f78f870(param_1 + 10,param_1 + 10,param_3);
  FUN_14f78f870(param_1 + 0x1e,param_3 + 0x50,param_2 + 0x1e);
  iVar1 = param_2[0x14];
  iVar2 = param_2[0x15];
  iVar3 = param_2[0x16];
  iVar4 = param_2[0x17];
  iVar5 = param_2[0x18];
  iVar6 = param_2[0x19];
  iVar7 = param_2[0x1a];
  iVar8 = param_2[0x1b];
  iVar9 = param_2[0x1c];
  iVar10 = param_2[0x1d];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = iVar1 * 2 - param_1[0x1e];
  param_1[0x15] = iVar2 * 2 - param_1[0x1f];
  param_1[0x16] = iVar3 * 2 - param_1[0x20];
  param_1[0x17] = iVar4 * 2 - param_1[0x21];
  param_1[0x18] = iVar5 * 2 - param_1[0x22];
  param_1[0x19] = iVar6 * 2 - param_1[0x23];
  param_1[0x1a] = iVar7 * 2 - param_1[0x24];
  param_1[0x1b] = iVar8 * 2 - param_1[0x25];
  param_1[0x1c] = iVar9 * 2 - param_1[0x26];
  param_1[0x1d] = iVar10 * 2 - param_1[0x27];
  param_1[0x21] = param_1[0x21] + iVar4 * 2;
  param_1[0x1e] = param_1[0x1e] + iVar1 * 2;
  param_1[0x1f] = param_1[0x1f] + iVar2 * 2;
  param_1[0x20] = param_1[0x20] + iVar3 * 2;
  param_1[0x22] = param_1[0x22] + iVar5 * 2;
  param_1[0x23] = param_1[0x23] + iVar6 * 2;
  param_1[0x24] = param_1[0x24] + iVar7 * 2;
  param_1[0x25] = param_1[0x25] + iVar8 * 2;
  param_1[0x26] = param_1[0x26] + iVar9 * 2;
  param_1[0x27] = param_1[0x27] + iVar10 * 2;
  return;
}

// FUN_14f792890 @ 14f792890

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f792890(longlong param_1,longlong param_2)

{
  FUN_14f78f870(param_1,param_2,param_2 + 0x78);
  FUN_14f78f870(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  FUN_14f78f870(param_1 + 0x50,param_2 + 0x50,param_2 + 0x78);
  return;
}

// FUN_14f792900 @ 14f792900

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f792900(longlong param_1,longlong param_2)

{
  FUN_14f78f870(param_1,param_2,param_2 + 0x78);
  FUN_14f78f870(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  FUN_14f78f870(param_1 + 0x50,param_2 + 0x50,param_2 + 0x78);
  FUN_14f78f870(param_1 + 0x78,param_2,param_2 + 0x28);
  return;
}

// FUN_14f7929f0 @ 14f7929f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7929f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_a8 [32];
  int *local_88;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  FUN_14f790470();
  FUN_14f790470(param_1 + 0x14,param_2 + 10);
  FUN_14f790a20(param_1 + 0x1e,param_2 + 0x14);
  param_1[10] = *param_2 + param_2[10];
  param_1[0xb] = param_2[1] + param_2[0xb];
  param_1[0xc] = param_2[0xc] + param_2[2];
  param_1[0xd] = param_2[0xd] + param_2[3];
  param_1[0xe] = param_2[0xe] + param_2[4];
  param_1[0xf] = param_2[0xf] + param_2[5];
  param_1[0x10] = param_2[0x10] + param_2[6];
  param_1[0x11] = param_2[0x11] + param_2[7];
  param_1[0x12] = param_2[0x12] + param_2[8];
  param_1[0x13] = param_2[0x13] + param_2[9];
  FUN_14f790470(&local_68,param_1 + 10);
  iVar1 = param_1[0x14];
  iVar2 = param_1[2];
  iVar3 = param_1[0x18];
  iVar15 = *param_1 + iVar1;
  iVar4 = param_1[4];
  iVar5 = param_1[3];
  iVar6 = param_1[0x19];
  iVar7 = param_1[0x1a];
  iVar8 = param_1[6];
  param_1[10] = iVar15;
  iVar9 = param_1[5];
  iVar10 = param_1[0x16];
  param_1[0xc] = iVar10 + iVar2;
  iVar11 = param_1[0x17];
  iVar12 = param_1[0x15];
  param_1[0xb] = iVar12 + param_1[1];
  param_1[0xd] = iVar11 + iVar5;
  param_1[0xe] = iVar4 + iVar3;
  param_1[0xf] = iVar9 + iVar6;
  iVar13 = local_88[7];
  param_1[0x10] = iVar8 + iVar7;
  iVar14 = param_1[0x1b];
  local_88[0x11] = iVar13 + iVar14;
  local_88[0x12] = local_88[8] + local_88[0x1c];
  local_88[0x13] = local_88[9] + local_88[0x1d];
  local_88[0x14] = iVar1 - *local_88;
  local_88[0x15] = iVar12 - local_88[1];
  local_88[0x18] = iVar3 - iVar4;
  local_88[0x19] = iVar6 - iVar9;
  local_88[0x1a] = iVar7 - iVar8;
  local_88[0x1b] = iVar14 - iVar13;
  local_88[0x1c] = local_88[0x1c] - local_88[8];
  local_88[0x1d] = local_88[0x1d] - local_88[9];
  local_88[0x16] = iVar10 - iVar2;
  local_88[0x17] = iVar11 - iVar5;
  *local_88 = local_68 - iVar15;
  local_88[1] = local_64 - local_88[0xb];
  local_88[2] = local_60 - local_88[0xc];
  local_88[3] = local_5c - local_88[0xd];
  local_88[4] = local_58 - local_88[0xe];
  local_88[5] = local_54 - local_88[0xf];
  local_88[6] = local_50 - local_88[0x10];
  local_88[7] = local_4c - local_88[0x11];
  local_88[8] = local_48 - local_88[0x12];
  local_88[9] = local_44 - local_88[0x13];
  local_88[0x1e] = local_88[0x1e] - local_88[0x14];
  local_88[0x1f] = local_88[0x1f] - local_88[0x15];
  local_88[0x20] = local_88[0x20] - local_88[0x16];
  local_88[0x21] = local_88[0x21] - local_88[0x17];
  local_88[0x22] = local_88[0x22] - local_88[0x18];
  local_88[0x23] = local_88[0x23] - local_88[0x19];
  local_88[0x24] = local_88[0x24] - local_88[0x1a];
  local_88[0x25] = local_88[0x25] - local_88[0x1b];
  local_88[0x26] = local_88[0x26] - local_88[0x1c];
  local_88[0x27] = local_88[0x27] - local_88[0x1d];
  return;
}

// FUN_14f792d40 @ 14f792d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f792d40(undefined8 param_1,void *param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  undefined1 local_48 [48];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f792d50;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  memmove(local_98,param_2,0x28);
  memmove(local_70,(void *)((longlong)param_2 + 0x28),0x28);
  memmove(local_48,(void *)((longlong)param_2 + 0x50),0x28);
  FUN_14f7929f0(param_1,local_98);
  return;
}

// FUN_14f792de0 @ 14f792de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f792de0(int *param_1,int *param_2)

{
  *param_1 = param_2[10] + *param_2;
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  memmove(param_1 + 0x14,param_2 + 0x14,0x28);
  FUN_14f78f870(param_1 + 0x1e,param_2 + 0x1e,&DAT_1534de288);
  return;
}

// FUN_14f792ef0 @ 14f792ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f792ef0(void *param_1,void *param_2)

{
  memmove(param_1,param_2,0x28);
  memmove((void *)((longlong)param_1 + 0x28),(void *)((longlong)param_2 + 0x28),0x28);
                    /* WARNING: Could not recover jumptable at 0x00014f792f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memmove((void *)((longlong)param_1 + 0x50),(void *)((longlong)param_2 + 0x50),0x28);
  return;
}

// FUN_14f792f50 @ 14f792f50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f792f50(longlong param_1,longlong param_2)

{
  char local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f792f60;
  FUN_14f78f550(local_88,param_2 + 0x50);
  FUN_14f78f870(local_38,param_2,local_88);
  FUN_14f78f870(local_60,param_2 + 0x28,local_88);
  FUN_14f791010(param_1,local_60);
  FUN_14f791010(local_88,local_38);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_88[0] << 7;
  return;
}

// FUN_14f793040 @ 14f793040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f793040(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStack_238 [32];
  undefined1 local_218 [40];
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [40];
  undefined1 local_1a0 [40];
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [48];
  undefined1 local_f8 [128];
  byte local_78 [63];
  char local_39;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14f79306a;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  pbVar7 = (byte *)(param_2 + 1);
  lVar9 = 0x10;
  pbVar8 = local_78 + 1;
  do {
    bVar1 = pbVar7[-1];
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + 2;
    *pbVar8 = bVar1 >> 4;
    pbVar8[-1] = bVar1 & 0xf;
    pbVar8[1] = bVar2 & 0xf;
    pbVar8[2] = bVar2 >> 4;
    lVar9 = lVar9 + -1;
    pbVar8 = pbVar8 + 4;
  } while (lVar9 != 0);
  cVar3 = '\0';
  uVar5 = 0;
  uVar4 = uVar5;
  do {
    local_78[uVar4] = local_78[uVar4] + cVar3;
    cVar3 = (char)(local_78[uVar4] + 8) >> 4;
    local_78[uVar4] = local_78[uVar4] + cVar3 * -0x10;
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < 0x3f);
  local_39 = local_39 + cVar3;
  pbVar7 = local_78 + 1;
  uVar6 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  do {
    FUN_14f7957c0(local_f8,uVar6 >> 1,*pbVar7);
    FUN_14f792130(local_218,param_1,local_f8);
    FUN_14f78f870(param_1,local_218,local_1a0);
    FUN_14f78f870(param_1 + 5,local_1f0,local_1c8);
    FUN_14f78f870(param_1 + 10,local_1c8,local_1a0);
    FUN_14f78f870(param_1 + 0xf,local_218,local_1f0);
    uVar6 = uVar6 + 2;
    pbVar7 = pbVar7 + 2;
  } while ((int)uVar6 < 0x40);
  memmove(local_178,param_1,0x28);
  memmove(local_150,param_1 + 5,0x28);
  memmove(local_128,param_1 + 10,0x28);
  FUN_14f7929f0(local_218,local_178);
  FUN_14f78f870(local_178,local_218,local_1a0);
  FUN_14f78f870(local_150,local_1f0,local_1c8);
  FUN_14f78f870(local_128,local_1c8,local_1a0);
  FUN_14f7929f0(local_218,local_178);
  FUN_14f78f870(local_178,local_218,local_1a0);
  FUN_14f78f870(local_150,local_1f0,local_1c8);
  FUN_14f78f870(local_128,local_1c8,local_1a0);
  FUN_14f7929f0(local_218,local_178);
  FUN_14f78f870(local_178,local_218,local_1a0);
  FUN_14f78f870(local_150,local_1f0,local_1c8);
  FUN_14f78f870(local_128,local_1c8,local_1a0);
  FUN_14f7929f0(local_218,local_178);
  FUN_14f78f870(param_1,local_218,local_1a0);
  FUN_14f78f870(param_1 + 5,local_1f0,local_1c8);
  FUN_14f78f870(param_1 + 10,local_1c8,local_1a0);
  FUN_14f78f870(param_1 + 0xf,local_218,local_1f0);
  pbVar7 = local_78;
  do {
    FUN_14f7957c0(local_f8,uVar5 >> 1,*pbVar7);
    FUN_14f792130(local_218,param_1,local_f8);
    FUN_14f78f870(param_1,local_218,local_1a0);
    FUN_14f78f870(param_1 + 5,local_1f0,local_1c8);
    FUN_14f78f870(param_1 + 10,local_1c8,local_1a0);
    FUN_14f78f870(param_1 + 0xf,local_218,local_1f0);
    uVar6 = (int)uVar5 + 2;
    uVar5 = (ulonglong)uVar6;
    pbVar7 = pbVar7 + 2;
  } while ((int)uVar6 < 0x40);
  OPENSSL_cleanse(local_78,0x40);
  return;
}

// FUN_14f793410 @ 14f793410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f793410(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = param_2[10] + *param_2;
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  FUN_14f78f870(param_1 + 0x14,param_1,param_3 + 0x28);
  FUN_14f78f870(param_1 + 10,param_1 + 10,param_3);
  FUN_14f78f870(param_1 + 0x1e,param_3 + 0x78,param_2 + 0x1e);
  FUN_14f78f870(param_1,param_2 + 0x14,param_3 + 0x50);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  iVar7 = param_1[6];
  iVar8 = param_1[7];
  iVar9 = param_1[8];
  iVar10 = param_1[9];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = iVar1 * 2 - param_1[0x1e];
  param_1[0x15] = iVar2 * 2 - param_1[0x1f];
  param_1[0x16] = iVar3 * 2 - param_1[0x20];
  param_1[0x17] = iVar4 * 2 - param_1[0x21];
  param_1[0x18] = iVar5 * 2 - param_1[0x22];
  param_1[0x19] = iVar6 * 2 - param_1[0x23];
  param_1[0x1a] = iVar7 * 2 - param_1[0x24];
  param_1[0x1b] = iVar8 * 2 - param_1[0x25];
  param_1[0x1c] = iVar9 * 2 - param_1[0x26];
  param_1[0x1d] = iVar10 * 2 - param_1[0x27];
  param_1[0x21] = param_1[0x21] + iVar4 * 2;
  param_1[0x1e] = param_1[0x1e] + iVar1 * 2;
  param_1[0x1f] = param_1[0x1f] + iVar2 * 2;
  param_1[0x20] = param_1[0x20] + iVar3 * 2;
  param_1[0x22] = param_1[0x22] + iVar5 * 2;
  param_1[0x23] = param_1[0x23] + iVar6 * 2;
  param_1[0x24] = param_1[0x24] + iVar7 * 2;
  param_1[0x25] = param_1[0x25] + iVar8 * 2;
  param_1[0x26] = param_1[0x26] + iVar9 * 2;
  param_1[0x27] = param_1[0x27] + iVar10 * 2;
  return;
}

// FUN_14f7937a0 @ 14f7937a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7937a0(longlong param_1,longlong param_2)

{
  char local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7937b0;
  FUN_14f78f550(local_88,param_2 + 0x50);
  FUN_14f78f870(local_38,param_2,local_88);
  FUN_14f78f870(local_60,param_2 + 0x28,local_88);
  FUN_14f791010(param_1,local_60);
  FUN_14f791010(local_88,local_38);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_88[0] << 7;
  return;
}

// FUN_14f793990 @ 14f793990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f793990(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  longlong lVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
  ulonglong uVar63;
  longlong lVar64;
  longlong lVar65;
  
  uVar4 = (ulonglong)((param_2[2] & 0x1f) << 0x10 | (uint)*param_2) | (ulonglong)param_2[1] << 8;
  uVar5 = (ulonglong)((uint6)*(uint3 *)(param_2 + 3) & 0x3ffff) << 3 | (ulonglong)(param_2[2] >> 5);
  uVar6 = (ulonglong)((uint5)*(ushort *)(param_2 + 6) & 0x7fff) << 6 | (ulonglong)(param_2[5] >> 2);
  uVar7 = (ulonglong)((uint6)*(uint3 *)(param_2 + 8) & 0xfffff) * 2 | (ulonglong)(param_2[7] >> 7);
  uVar8 = (ulonglong)((uint6)*(uint3 *)(param_2 + 0xb) & 0x1ffff) << 4 |
          (ulonglong)(param_2[10] >> 4);
  uVar9 = (ulonglong)((uint5)*(ushort *)(param_2 + 0xe) & 0x3fff) << 7 |
          (ulonglong)(param_2[0xd] >> 1);
  uVar10 = (ulonglong)((uint6)*(uint3 *)(param_2 + 0x10) & 0x7ffff) << 2 |
           (ulonglong)(param_2[0xf] >> 6);
  uVar11 = (ulonglong)*(ushort *)(param_2 + 0x13) << 5 | (ulonglong)(param_2[0x12] >> 3);
  uVar12 = (ulonglong)((param_2[0x17] & 0x1f) << 0x10 | (uint)param_2[0x15]) |
           (ulonglong)param_2[0x16] << 8;
  uVar13 = (ulonglong)((uint6)*(uint3 *)(param_2 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_2[0x17] >> 5);
  uVar14 = (ulonglong)((uint5)*(ushort *)(param_2 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_2[0x1a] >> 2);
  uVar53 = (ulonglong)*(uint3 *)(param_2 + 0x1d) * 2 | (ulonglong)(param_2[0x1c] >> 7);
  uVar41 = (ulonglong)((param_3[2] & 0x1f) << 0x10 | (uint)*param_3) | (ulonglong)param_3[1] << 8;
  uVar55 = (ulonglong)((uint6)*(uint3 *)(param_3 + 3) & 0x3ffff) << 3 | (ulonglong)(param_3[2] >> 5)
  ;
  uVar17 = (ulonglong)((uint5)*(ushort *)(param_3 + 6) & 0x7fff) << 6 | (ulonglong)(param_3[5] >> 2)
  ;
  uVar38 = (ulonglong)((uint6)*(uint3 *)(param_3 + 8) & 0xfffff) * 2 | (ulonglong)(param_3[7] >> 7);
  uVar49 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_3[10] >> 4);
  uVar33 = (ulonglong)((uint5)*(ushort *)(param_3 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_3[0xd] >> 1);
  uVar15 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0x10) & 0x7ffff) << 2 |
           (ulonglong)(param_3[0xf] >> 6);
  uVar61 = (ulonglong)*(ushort *)(param_3 + 0x13) << 5 | (ulonglong)(param_3[0x12] >> 3);
  uVar59 = (ulonglong)((param_3[0x17] & 0x1f) << 0x10 | (uint)param_3[0x15]) |
           (ulonglong)param_3[0x16] << 8;
  uVar63 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_3[0x17] >> 5);
  uVar58 = (ulonglong)((uint5)*(ushort *)(param_3 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_3[0x1a] >> 2);
  uVar31 = (ulonglong)*(uint3 *)(param_3 + 0x1d) * 2 | (ulonglong)(param_3[0x1c] >> 7);
  lVar43 = (((ulonglong)param_4[2] & 0x1f) << 0x10 | (ulonglong)*param_4 |
           (ulonglong)param_4[1] << 8) + uVar41 * uVar4;
  lVar36 = ((ulonglong)((uint5)*(ushort *)(param_4 + 6) & 0x7fff) << 6 |
           (ulonglong)(param_4[5] >> 2)) + uVar41 * uVar6 + uVar55 * uVar5 + uVar17 * uVar4;
  lVar37 = ((ulonglong)((uint6)*(uint3 *)(param_4 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_4[10] >> 4)) + uVar41 * uVar8 + uVar55 * uVar7 + uVar17 * uVar6 +
           uVar38 * uVar5 + uVar49 * uVar4;
  lVar44 = ((ulonglong)((uint6)*(uint3 *)(param_4 + 0x10) & 0x7ffff) << 2 |
           (ulonglong)(param_4[0xf] >> 6)) + uVar41 * uVar10 + uVar55 * uVar9 + uVar17 * uVar8 +
           uVar38 * uVar7 + uVar49 * uVar6 + uVar33 * uVar5 + uVar15 * uVar4;
  lVar57 = (((ulonglong)param_4[0x17] & 0x1f) << 0x10 | (ulonglong)param_4[0x15] |
           (ulonglong)param_4[0x16] << 8) + uVar41 * uVar12 + uVar55 * uVar11 + uVar17 * uVar10 +
           uVar38 * uVar9 + uVar49 * uVar8 + uVar33 * uVar7 + uVar15 * uVar6 + uVar61 * uVar5 +
           uVar59 * uVar4;
  lVar45 = ((ulonglong)((uint5)*(ushort *)(param_4 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_4[0x1a] >> 2)) + uVar41 * uVar14 + uVar55 * uVar13 + uVar17 * uVar12 +
           uVar38 * uVar11 + uVar49 * uVar10 + uVar33 * uVar9 + uVar15 * uVar8 + uVar61 * uVar7 +
           uVar59 * uVar6 + uVar63 * uVar5 + uVar58 * uVar4;
  lVar46 = uVar55 * uVar53 + uVar17 * uVar14 + uVar38 * uVar13 + uVar49 * uVar12 + uVar33 * uVar11 +
           uVar15 * uVar10 + uVar61 * uVar9 + uVar59 * uVar8 + uVar63 * uVar7 + uVar58 * uVar6 +
           uVar31 * uVar5;
  lVar18 = uVar38 * uVar53 + uVar49 * uVar14 + uVar33 * uVar13 + uVar15 * uVar12 + uVar61 * uVar11 +
           uVar59 * uVar10 + uVar63 * uVar9 + uVar58 * uVar8 + uVar31 * uVar7;
  lVar19 = uVar33 * uVar53 + uVar15 * uVar14 + uVar61 * uVar13 + uVar59 * uVar12 + uVar63 * uVar11 +
           uVar58 * uVar10 + uVar31 * uVar9;
  lVar20 = lVar43 + 0x100000 >> 0x15;
  lVar50 = uVar61 * uVar53 + uVar59 * uVar14 + uVar63 * uVar13 + uVar58 * uVar12 + uVar31 * uVar11;
  lVar54 = uVar63 * uVar53 + uVar58 * uVar14 + uVar31 * uVar13;
  lVar21 = uVar55 * uVar4 +
           uVar41 * uVar5 + lVar20 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 3) & 0x3ffff) << 3 |
           (ulonglong)(param_4[2] >> 5));
  uVar22 = lVar36 + 0x100000U >> 0x15;
  lVar23 = uVar38 * uVar4 +
           uVar17 * uVar5 + uVar22 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 8) & 0xfffff) * 2 | (ulonglong)(param_4[7] >> 7)
           ) + uVar41 * uVar7 + uVar55 * uVar6;
  lVar24 = lVar37 + 0x100000 >> 0x15;
  lVar25 = uVar33 * uVar4 +
           uVar49 * uVar5 + lVar24 +
           ((ulonglong)((uint5)*(ushort *)(param_4 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_4[0xd] >> 1)) + uVar41 * uVar9 + uVar55 * uVar8 + uVar17 * uVar7 +
           uVar38 * uVar6;
  lVar26 = lVar44 + 0x100000 >> 0x15;
  lVar27 = uVar61 * uVar4 +
           uVar15 * uVar5 + lVar26 +
           ((ulonglong)*(ushort *)(param_4 + 0x13) << 5 | (ulonglong)(param_4[0x12] >> 3)) +
           uVar41 * uVar11 + uVar55 * uVar10 + uVar17 * uVar9 + uVar38 * uVar8 + uVar49 * uVar7 +
           uVar33 * uVar6;
  lVar28 = lVar57 + 0x100000 >> 0x15;
  lVar29 = uVar63 * uVar4 +
           uVar59 * uVar5 + lVar28 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_4[0x17] >> 5)) + uVar41 * uVar13 + uVar55 * uVar12 + uVar17 * uVar11 +
           uVar38 * uVar10 + uVar49 * uVar9 + uVar33 * uVar8 + uVar15 * uVar7 + uVar61 * uVar6;
  lVar60 = lVar45 + 0x100000 >> 0x15;
  lVar42 = lVar46 + 0x100000 >> 0x15;
  lVar47 = uVar31 * uVar4 +
           uVar58 * uVar5 + lVar60 +
           ((ulonglong)*(uint3 *)(param_4 + 0x1d) * 2 | (ulonglong)(param_4[0x1c] >> 7)) +
           uVar41 * uVar53 + uVar55 * uVar14 + uVar17 * uVar13 + uVar38 * uVar12 + uVar49 * uVar11 +
           uVar33 * uVar10 + uVar15 * uVar9 + uVar61 * uVar8 + uVar59 * uVar7 + uVar63 * uVar6;
  lVar39 = uVar31 * uVar6 +
           uVar58 * uVar7 + lVar42 +
           uVar17 * uVar53 + uVar38 * uVar14 + uVar49 * uVar13 + uVar33 * uVar12 + uVar15 * uVar11 +
           uVar61 * uVar10 + uVar59 * uVar9 + uVar63 * uVar8;
  lVar56 = lVar18 + 0x100000 >> 0x15;
  lVar34 = uVar31 * uVar8 +
           uVar58 * uVar9 + lVar56 +
           uVar49 * uVar53 + uVar33 * uVar14 + uVar15 * uVar13 + uVar61 * uVar12 + uVar59 * uVar11 +
           uVar63 * uVar10;
  lVar48 = lVar19 + 0x100000 >> 0x15;
  lVar64 = uVar31 * uVar10 +
           uVar58 * uVar11 + lVar48 +
           uVar15 * uVar53 + uVar61 * uVar14 + uVar59 * uVar13 + uVar63 * uVar12;
  lVar16 = lVar50 + 0x100000 >> 0x15;
  lVar62 = uVar31 * uVar12 + uVar58 * uVar13 + lVar16 + uVar59 * uVar53 + uVar63 * uVar14;
  lVar30 = lVar54 + 0x100000 >> 0x15;
  lVar51 = uVar31 * uVar14 + lVar30 + uVar58 * uVar53;
  uVar4 = uVar31 * uVar53 + 0x100000 >> 0x15;
  lVar1 = lVar21 + 0x100000 >> 0x15;
  lVar2 = lVar23 + 0x100000 >> 0x15;
  lVar3 = lVar25 + 0x100000 >> 0x15;
  lVar65 = lVar64 + 0x100000 >> 0x15;
  lVar35 = lVar34 + 0x100000 >> 0x15;
  lVar50 = lVar50 + lVar65 + lVar16 * -0x200000;
  lVar16 = lVar62 + 0x100000 >> 0x15;
  lVar40 = lVar39 + 0x100000 >> 0x15;
  lVar54 = lVar54 + lVar16 + lVar30 * -0x200000;
  lVar62 = lVar62 + lVar16 * -0x200000;
  lVar30 = lVar51 + 0x100000 >> 0x15;
  lVar32 = lVar47 + 0x100000 >> 0x15;
  lVar52 = lVar27 + 0x100000 >> 0x15;
  lVar16 = uVar31 * uVar53 + lVar30 + uVar4 * -0x200000;
  lVar51 = lVar51 + lVar30 * -0x200000;
  lVar30 = lVar29 + 0x100000 >> 0x15;
  lVar19 = lVar19 + uVar4 * -0xa6f7d + lVar48 * -0x200000 + lVar35;
  lVar18 = lVar18 + uVar4 * -0xf39ad + lVar51 * -0xa6f7d + lVar16 * 0x215d1 + lVar56 * -0x200000 +
                    lVar40;
  lVar46 = lVar46 + lVar16 * 0x9fb67 +
                    lVar54 * 0x215d1 + uVar4 * 0x72d18 + lVar62 * -0xa6f7d + lVar51 * -0xf39ad +
                    lVar42 * -0x200000 + lVar32;
  lVar44 = lVar44 + lVar50 * 0xa2c13 + lVar26 * -0x200000 + lVar3;
  lVar26 = lVar44 + 0x100000 >> 0x15;
  lVar57 = lVar57 + lVar50 * 0x9fb67 +
                    lVar52 + lVar62 * 0x72d18 + lVar54 * 0xa2c13 + lVar28 * -0x200000;
  lVar48 = lVar57 + 0x100000 >> 0x15;
  lVar45 = lVar45 + lVar54 * 0x9fb67 +
                    lVar50 * 0x215d1 + lVar51 * 0x72d18 + lVar62 * -0xf39ad + lVar16 * 0xa2c13 +
                    lVar60 * -0x200000 + lVar30;
  lVar27 = lVar27 + lVar50 * 0x72d18 + lVar62 * 0xa2c13 + lVar52 * -0x200000 + lVar26;
  lVar28 = lVar46 + 0x100000 >> 0x15;
  lVar42 = lVar45 + 0x100000 >> 0x15;
  lVar29 = lVar29 + lVar62 * 0x9fb67 +
                    lVar51 * 0xa2c13 + lVar54 * 0x72d18 + lVar50 * -0xf39ad + lVar30 * -0x200000 +
                    lVar48;
  lVar47 = lVar47 + lVar51 * 0x9fb67 +
                    lVar62 * 0x215d1 +
                    uVar4 * 0xa2c13 + lVar50 * -0xa6f7d + lVar54 * -0xf39ad + lVar16 * 0x72d18 +
                    lVar32 * -0x200000 + lVar42;
  lVar39 = lVar39 + uVar4 * 0x9fb67 +
                    lVar51 * 0x215d1 + lVar16 * -0xf39ad + lVar54 * -0xa6f7d + lVar40 * -0x200000 +
                    lVar28;
  lVar54 = lVar18 + 0x100000 >> 0x15;
  lVar30 = lVar47 + 0x100000 >> 0x15;
  lVar51 = lVar27 + 0x100000 >> 0x15;
  lVar34 = lVar34 + uVar4 * 0x215d1 + lVar16 * -0xa6f7d + lVar35 * -0x200000 + lVar54;
  lVar50 = lVar39 + 0x100000 >> 0x15;
  lVar16 = lVar19 + 0x100000 >> 0x15;
  lVar64 = lVar64 + lVar16 + lVar65 * -0x200000;
  lVar32 = lVar29 + 0x100000 >> 0x15;
  lVar46 = lVar46 + lVar30 + lVar28 * -0x200000;
  lVar18 = lVar18 + lVar50 + lVar54 * -0x200000;
  lVar39 = lVar39 + lVar50 * -0x200000;
  lVar50 = lVar34 + 0x100000 >> 0x15;
  lVar34 = lVar34 + lVar50 * -0x200000;
  lVar19 = lVar19 + lVar50 + lVar16 * -0x200000;
  lVar45 = lVar45 + lVar42 * -0x200000 + lVar64 * -0xa6f7d + lVar32;
  lVar57 = lVar57 + lVar64 * -0xf39ad + lVar34 * -0xa6f7d + lVar19 * 0x215d1 + lVar48 * -0x200000 +
                    lVar51;
  lVar26 = lVar19 * 0x9fb67 + lVar44 +
           lVar34 * -0xf39ad + lVar39 * -0xa6f7d + lVar64 * 0x72d18 + lVar18 * 0x215d1 +
           lVar26 * -0x200000;
  lVar43 = lVar43 + lVar46 * 0xa2c13 + lVar20 * -0x200000;
  lVar36 = lVar36 + lVar46 * 0x9fb67 +
                    lVar1 + lVar39 * 0x72d18 + lVar18 * 0xa2c13 + uVar22 * -0x200000;
  lVar16 = lVar43 + 0x100000 >> 0x15;
  lVar37 = lVar37 + lVar18 * 0x9fb67 +
                    lVar2 + lVar34 * 0x72d18 + lVar39 * -0xf39ad + lVar19 * 0xa2c13 +
                            lVar46 * 0x215d1 + lVar24 * -0x200000;
  lVar28 = lVar36 + 0x100000 >> 0x15;
  lVar21 = lVar21 + lVar46 * 0x72d18 + lVar39 * 0xa2c13 + lVar1 * -0x200000 + lVar16;
  lVar1 = lVar37 + 0x100000 >> 0x15;
  lVar23 = lVar23 + lVar39 * 0x9fb67 +
                    lVar34 * 0xa2c13 + lVar18 * 0x72d18 + lVar46 * -0xf39ad + lVar2 * -0x200000 +
                    lVar28;
  lVar20 = lVar26 + 0x100000 >> 0x15;
  lVar25 = lVar25 + lVar34 * 0x9fb67 +
                    lVar1 + lVar18 * -0xf39ad + lVar46 * -0xa6f7d + lVar19 * 0x72d18 +
                            lVar64 * 0xa2c13 + lVar39 * 0x215d1 + lVar3 * -0x200000;
  lVar24 = lVar21 + 0x100000 >> 0x15;
  lVar27 = lVar27 + lVar64 * 0x9fb67 +
                    lVar34 * 0x215d1 + lVar19 * -0xf39ad + lVar18 * -0xa6f7d + lVar51 * -0x200000 +
                    lVar20;
  lVar18 = lVar23 + 0x100000 >> 0x15;
  lVar50 = lVar57 + 0x100000 >> 0x15;
  lVar51 = lVar25 + 0x100000 >> 0x15;
  lVar29 = lVar29 + lVar64 * 0x215d1 + lVar19 * -0xa6f7d + lVar32 * -0x200000 + lVar50;
  lVar54 = lVar45 + 0x100000 >> 0x15;
  lVar47 = lVar47 + lVar54 + lVar30 * -0x200000;
  lVar3 = lVar27 + 0x100000 >> 0x15;
  lVar46 = lVar29 + 0x100000 >> 0x15;
  lVar2 = lVar47 + 0x100000 >> 0x15;
  lVar43 = lVar43 + lVar2 * 0xa2c13 + lVar16 * -0x200000;
  lVar16 = lVar43 >> 0x15;
  lVar21 = lVar21 + lVar2 * 0x72d18 + lVar24 * -0x200000 + lVar16;
  lVar19 = lVar21 >> 0x15;
  lVar36 = lVar36 + lVar2 * 0x9fb67 + lVar28 * -0x200000 + lVar24 + lVar19;
  lVar24 = lVar36 >> 0x15;
  lVar23 = lVar23 + lVar18 * -0x200000 + lVar2 * -0xf39ad + lVar24;
  lVar28 = lVar23 >> 0x15;
  lVar18 = lVar37 + lVar2 * 0x215d1 + lVar1 * -0x200000 + lVar18 + lVar28;
  lVar1 = lVar18 >> 0x15;
  lVar25 = lVar25 + lVar2 * -0xa6f7d + lVar51 * -0x200000 + lVar1;
  lVar30 = lVar25 >> 0x15;
  lVar20 = lVar26 + lVar51 + lVar20 * -0x200000 + lVar30;
  lVar37 = lVar20 >> 0x15;
  lVar27 = lVar27 + lVar37 + lVar3 * -0x200000;
  lVar51 = lVar27 >> 0x15;
  lVar50 = lVar57 + lVar3 + lVar50 * -0x200000 + lVar51;
  lVar3 = lVar50 >> 0x15;
  lVar29 = lVar29 + lVar3 + lVar46 * -0x200000;
  lVar57 = lVar29 >> 0x15;
  lVar54 = lVar45 + lVar46 + lVar54 * -0x200000 + lVar57;
  lVar45 = lVar54 >> 0x15;
  lVar47 = lVar47 + lVar45 + lVar2 * -0x200000;
  lVar46 = lVar47 >> 0x15;
  lVar43 = lVar43 + lVar46 * 0xa2c13 + lVar16 * -0x200000;
  lVar16 = lVar43 >> 0x15;
  lVar21 = lVar21 + lVar46 * 0x72d18 + lVar19 * -0x200000 + lVar16;
  lVar43 = lVar43 + lVar16 * -0x200000;
  lVar16 = lVar21 >> 0x15;
  lVar36 = lVar36 + lVar46 * 0x9fb67 + lVar24 * -0x200000 + lVar16;
  lVar21 = lVar21 + lVar16 * -0x200000;
  lVar16 = lVar36 >> 0x15;
  lVar23 = lVar23 + lVar28 * -0x200000 + lVar46 * -0xf39ad + lVar16;
  lVar36 = lVar36 + lVar16 * -0x200000;
  lVar16 = lVar23 >> 0x15;
  lVar18 = lVar18 + lVar46 * 0x215d1 + lVar1 * -0x200000 + lVar16;
  lVar23 = lVar23 + lVar16 * -0x200000;
  lVar16 = lVar18 >> 0x15;
  lVar25 = lVar25 + lVar46 * -0xa6f7d + lVar30 * -0x200000 + lVar16;
  lVar18 = lVar18 + lVar16 * -0x200000;
  lVar16 = lVar25 >> 0x15;
  lVar20 = lVar20 + lVar16 + lVar37 * -0x200000;
  lVar25 = lVar25 + lVar16 * -0x200000;
  lVar16 = lVar20 >> 0x15;
  lVar20 = lVar20 + lVar16 * -0x200000;
  lVar27 = lVar27 + lVar16 + lVar51 * -0x200000;
  lVar16 = lVar27 >> 0x15;
  lVar50 = lVar50 + lVar16 + lVar3 * -0x200000;
  lVar27 = lVar27 + lVar16 * -0x200000;
  lVar16 = lVar50 >> 0x15;
  lVar29 = lVar29 + lVar16 + lVar57 * -0x200000;
  lVar50 = lVar50 + lVar16 * -0x200000;
  lVar16 = lVar29 >> 0x15;
  lVar54 = lVar54 + lVar16 + lVar45 * -0x200000;
  lVar29 = lVar29 + lVar16 * -0x200000;
  lVar16 = lVar54 >> 0x15;
  lVar47 = lVar47 + lVar16 + lVar46 * -0x200000;
  lVar54 = lVar54 + lVar16 * -0x200000;
  param_1[1] = (char)((ulonglong)lVar43 >> 8);
  *param_1 = (char)lVar43;
  param_1[2] = (char)lVar21 << 5 | (byte)((ulonglong)lVar43 >> 0x10);
  param_1[3] = (char)(lVar21 >> 3);
  param_1[4] = (char)(lVar21 >> 0xb);
  param_1[6] = (char)(lVar36 >> 6);
  param_1[5] = (byte)(lVar21 >> 0x13) | (char)lVar36 << 2;
  param_1[7] = (char)lVar23 << 7 | (byte)(lVar36 >> 0xe);
  param_1[8] = (char)(lVar23 >> 1);
  param_1[9] = (char)(lVar23 >> 9);
  param_1[0xb] = (char)(lVar18 >> 4);
  param_1[10] = (byte)(lVar23 >> 0x11) | (char)lVar18 << 4;
  param_1[0xc] = (char)(lVar18 >> 0xc);
  param_1[0x15] = (char)lVar50;
  param_1[0xd] = (byte)(lVar18 >> 0x14) | (char)lVar25 * '\x02';
  param_1[0xe] = (char)(lVar25 >> 7);
  param_1[0xf] = (char)lVar20 << 6 | (byte)(lVar25 >> 0xf);
  param_1[0x10] = (char)(lVar20 >> 2);
  param_1[0x11] = (char)(lVar20 >> 10);
  param_1[0x13] = (char)(lVar27 >> 5);
  param_1[0x16] = (char)((ulonglong)lVar50 >> 8);
  param_1[0x17] = (char)lVar29 << 5 | (byte)((ulonglong)lVar50 >> 0x10);
  param_1[0x18] = (char)(lVar29 >> 3);
  param_1[0x19] = (char)(lVar29 >> 0xb);
  param_1[0x12] = (byte)(lVar20 >> 0x12) | (char)lVar27 << 3;
  param_1[0x14] = (char)(lVar27 >> 0xd);
  param_1[0x1b] = (char)(lVar54 >> 6);
  param_1[0x1a] = (byte)(lVar29 >> 0x13) | (char)lVar54 << 2;
  param_1[0x1c] = (char)lVar47 << 7 | (byte)(lVar54 >> 0xe);
  param_1[0x1d] = (char)(lVar47 >> 1);
  param_1[0x1f] = (char)(lVar47 >> 0x11);
  param_1[0x1e] = (char)(lVar47 >> 9);
  return;
}

// FUN_14f795670 @ 14f795670

void FUN_14f795670(char *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  
  iVar5 = 0;
  iVar7 = 0;
  lVar9 = 0;
  do {
    bVar4 = (byte)iVar7;
    iVar7 = iVar7 + 1;
    param_1[lVar9] = *(byte *)((lVar9 >> 3) + param_2) >> (bVar4 & 7) & 1;
    lVar9 = lVar9 + 1;
  } while (iVar7 < 0x100);
  iVar7 = 0;
  pcVar10 = param_1;
  do {
    if (*pcVar10 != '\0') {
      iVar8 = iVar5 + 1;
      do {
        if (0xff < iVar8) break;
        lVar9 = (longlong)iVar8;
        cVar1 = param_1[lVar9];
        pcVar3 = param_1 + lVar9;
        if (cVar1 != '\0') {
          cVar2 = *pcVar10;
          bVar4 = (char)iVar7 + (char)iVar8;
          iVar6 = (int)cVar1 << (bVar4 & 0x1f);
          if (cVar2 + iVar6 < 0x10) {
            *pcVar10 = (cVar1 << (bVar4 & 0x1f)) + cVar2;
            *pcVar3 = '\0';
          }
          else {
            if (cVar2 - iVar6 < -0xf) break;
            *pcVar10 = cVar2 - (cVar1 << (bVar4 & 0x1f));
            if (lVar9 < 0x100) {
              iVar6 = iVar8;
              do {
                if (*pcVar3 == '\0') {
                  param_1[iVar6] = '\x01';
                  break;
                }
                *pcVar3 = '\0';
                iVar6 = iVar6 + 1;
                pcVar3 = pcVar3 + 1;
              } while ((longlong)pcVar3 - (longlong)param_1 < 0x100);
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar7 + iVar8 < 7);
    }
    iVar5 = iVar5 + 1;
    pcVar10 = pcVar10 + 1;
    iVar7 = iVar7 + -1;
    if (iVar7 < -0xff) {
      return;
    }
  } while( true );
}

// FUN_14f7957c0 @ 14f7957c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7957c0(undefined8 *param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14f7957d8;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)param_1 = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  bVar2 = param_3 + ((char)param_3 >> 7 & param_3) * -2;
  lVar3 = (longlong)param_2 * 0x3c0;
  FUN_14f78e210(param_1,&DAT_1534de2e0 + lVar3,(bVar2 ^ 1) - 1 >> 0x1f);
  FUN_14f78e210(param_1,&DAT_1534de358 + lVar3,(bVar2 ^ 2) - 1 >> 0x1f);
  uVar1 = (uint)bVar2;
  FUN_14f78e210(param_1,&DAT_1534de3d0 + lVar3,(uVar1 ^ 3) - 1 >> 0x1f);
  FUN_14f78e210(param_1,&DAT_1534de448 + lVar3,(uVar1 ^ 4) - 1 >> 0x1f);
  FUN_14f78e210(param_1,&DAT_1534de4c0 + lVar3,(uVar1 ^ 5) - 1 >> 0x1f);
  FUN_14f78e210(param_1,&DAT_1534de538 + lVar3,(uVar1 ^ 6) - 1 >> 0x1f);
  FUN_14f78e210(param_1,&DAT_1534de5b0 + lVar3,(bVar2 ^ 7) - 1 >> 0x1f);
  FUN_14f78e210(param_1,&DAT_1534de628 + lVar3,(bVar2 ^ 8) - 1 >> 0x1f);
  memmove(local_a8,param_1 + 5,0x28);
  memmove(local_80,param_1,0x28);
  local_58 = -*(int *)(param_1 + 10);
  local_54 = -*(int *)((longlong)param_1 + 0x54);
  local_50 = -*(int *)(param_1 + 0xb);
  local_4c = -*(int *)((longlong)param_1 + 0x5c);
  local_48 = -*(int *)(param_1 + 0xc);
  local_44 = -*(int *)((longlong)param_1 + 100);
  local_40 = -*(int *)(param_1 + 0xd);
  local_3c = -*(int *)((longlong)param_1 + 0x6c);
  local_38 = -*(int *)(param_1 + 0xe);
  local_34 = -*(int *)((longlong)param_1 + 0x74);
  FUN_14f78e210(param_1,local_a8,(uint)(int)(char)param_3 >> 0x1f);
  return;
}

// FUN_14f795a40 @ 14f795a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f795a40(byte *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  
  uVar9 = (ulonglong)((uint5)*(ushort *)(param_1 + 0x30) & 0x7fff) << 6 |
          (ulonglong)(param_1[0x2f] >> 2);
  uVar16 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x32) & 0xfffff) * 2 |
           (ulonglong)(param_1[0x31] >> 7);
  uVar6 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x35) & 0x1ffff) << 4 |
          (ulonglong)(param_1[0x34] >> 4);
  uVar13 = (ulonglong)((uint5)*(ushort *)(param_1 + 0x38) & 0x3fff) << 7 |
           (ulonglong)(param_1[0x37] >> 1);
  uVar12 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x3a) & 0x7ffff) << 2 |
           (ulonglong)(param_1[0x39] >> 6);
  uVar3 = (ulonglong)*(uint3 *)(param_1 + 0x3d) << 5 | (ulonglong)(param_1[0x3c] >> 3);
  lVar28 = ((ulonglong)((param_1[0x2c] & 0x1f) << 0x10 | (uint)param_1[0x2a]) |
           (ulonglong)param_1[0x2b] << 8) + uVar3 * -0xa6f7d;
  lVar34 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x25) & 0x7ffff) << 2 |
           (ulonglong)(param_1[0x24] >> 6)) + uVar13 * -0xa6f7d + uVar3 * -0xf39ad +
           uVar12 * 0x215d1;
  lVar32 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x20) & 0x1ffff) << 4 |
           (ulonglong)(param_1[0x1f] >> 4)) + uVar12 * 0x9fb67 + uVar16 * -0xa6f7d +
           uVar13 * -0xf39ad + uVar3 * 0x72d18 + uVar6 * 0x215d1;
  lVar1 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x10) & 0x7ffff) << 2 |
          (ulonglong)(param_1[0xf] >> 6)) + uVar9 * 0xa2c13;
  lVar24 = ((ulonglong)((param_1[0x17] & 0x1f) << 0x10 | (uint)param_1[0x15]) |
           (ulonglong)param_1[0x16] << 8) + uVar9 * 0x9fb67 + uVar16 * 0x72d18 + uVar6 * 0xa2c13;
  uVar5 = lVar1 + 0x100000U >> 0x15;
  lVar25 = lVar24 + 0x100000 >> 0x15;
  lVar30 = ((ulonglong)((uint5)*(ushort *)(param_1 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_1[0x1a] >> 2)) + uVar6 * 0x9fb67 + uVar16 * -0xf39ad + uVar13 * 0x72d18
           + uVar12 * 0xa2c13 + uVar9 * 0x215d1;
  lVar20 = uVar16 * 0xa2c13 +
           uVar9 * 0x72d18 + uVar5 +
           ((ulonglong)*(ushort *)(param_1 + 0x13) << 5 | (ulonglong)(param_1[0x12] >> 3));
  lVar21 = uVar13 * 0xa2c13 +
           uVar6 * 0x72d18 + lVar25 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_1[0x17] >> 5)) + uVar16 * 0x9fb67 + uVar9 * -0xf39ad;
  lVar22 = lVar30 + 0x100000 >> 0x15;
  lVar17 = uVar16 * 0x215d1 +
           uVar3 * 0xa2c13 + lVar22 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x1d) & 0xfffff) * 2 |
           (ulonglong)(param_1[0x1c] >> 7)) + uVar13 * 0x9fb67 + uVar9 * -0xa6f7d + uVar6 * -0xf39ad
           + uVar12 * 0x72d18;
  lVar18 = lVar32 + 0x100000 >> 0x15;
  lVar14 = lVar34 + 0x100000 >> 0x15;
  lVar35 = lVar21 + 0x100000 >> 0x15;
  lVar10 = uVar13 * 0x215d1 +
           lVar18 + ((ulonglong)((uint5)*(ushort *)(param_1 + 0x23) & 0x3fff) << 7 |
                    (ulonglong)(param_1[0x22] >> 1)) + uVar3 * 0x9fb67 + uVar6 * -0xa6f7d +
                    uVar12 * -0xf39ad;
  lVar4 = lVar28 + 0x100000 >> 0x15;
  lVar29 = lVar17 + 0x100000 >> 0x15;
  uVar6 = lVar20 + 0x100000U >> 0x15;
  lVar31 = uVar3 * 0x215d1 +
           lVar14 + ((ulonglong)*(ushort *)(param_1 + 0x28) << 5 | (ulonglong)(param_1[0x27] >> 3))
                    + uVar12 * -0xa6f7d;
  lVar2 = lVar10 + 0x100000 >> 0x15;
  lVar7 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x2d) & 0x3ffff) << 3 |
          (ulonglong)(param_1[0x2c] >> 5)) + lVar4;
  lVar32 = lVar32 + lVar29 + lVar18 * -0x200000;
  lVar34 = lVar34 + lVar2 + lVar14 * -0x200000;
  lVar10 = lVar10 + lVar2 * -0x200000;
  lVar2 = lVar31 + 0x100000 >> 0x15;
  lVar28 = lVar28 + lVar2 + lVar4 * -0x200000;
  lVar31 = lVar31 + lVar2 * -0x200000;
  lVar30 = lVar30 + lVar22 * -0x200000 + lVar7 * -0xa6f7d + lVar35;
  lVar24 = lVar24 + lVar7 * -0xf39ad + lVar31 * -0xa6f7d + lVar28 * 0x215d1 + lVar25 * -0x200000 +
                    uVar6;
  lVar1 = lVar1 + lVar28 * 0x9fb67 + lVar10 * -0xa6f7d + lVar31 * -0xf39ad + lVar7 * 0x72d18 +
                  lVar34 * 0x215d1 + uVar5 * -0x200000;
  lVar2 = ((ulonglong)((param_1[2] & 0x1f) << 0x10 | (uint)*param_1) | (ulonglong)param_1[1] << 8) +
          lVar32 * 0xa2c13;
  lVar14 = ((ulonglong)((uint5)*(ushort *)(param_1 + 6) & 0x7fff) << 6 |
           (ulonglong)(param_1[5] >> 2)) + lVar32 * 0x9fb67 + lVar10 * 0x72d18 + lVar34 * 0xa2c13;
  lVar19 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_1[10] >> 4)) + lVar34 * 0x9fb67 + lVar10 * -0xf39ad + lVar31 * 0x72d18
           + lVar28 * 0xa2c13 + lVar32 * 0x215d1;
  lVar33 = lVar2 + 0x100000 >> 0x15;
  lVar8 = lVar14 + 0x100000 >> 0x15;
  lVar25 = lVar10 * 0xa2c13 +
           lVar32 * 0x72d18 + lVar33 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 3) & 0x3ffff) << 3 |
           (ulonglong)(param_1[2] >> 5));
  lVar11 = lVar19 + 0x100000 >> 0x15;
  lVar18 = lVar31 * 0xa2c13 +
           lVar34 * 0x72d18 + lVar8 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 8) & 0xfffff) * 2 | (ulonglong)(param_1[7] >> 7)
           ) + lVar10 * 0x9fb67 + lVar32 * -0xf39ad;
  lVar15 = lVar1 + 0x100000 >> 0x15;
  lVar10 = lVar10 * 0x215d1 +
           lVar7 * 0xa2c13 + lVar11 +
           ((ulonglong)((uint5)*(ushort *)(param_1 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_1[0xd] >> 1)) + lVar31 * 0x9fb67 + lVar32 * -0xa6f7d +
           lVar34 * -0xf39ad + lVar28 * 0x72d18;
  lVar22 = lVar24 + 0x100000 >> 0x15;
  lVar20 = lVar20 + lVar7 * 0x9fb67 + lVar34 * -0xa6f7d + lVar28 * -0xf39ad + lVar31 * 0x215d1 +
                    uVar6 * -0x200000 + lVar15;
  lVar34 = lVar25 + 0x100000 >> 0x15;
  lVar26 = lVar10 + 0x100000 >> 0x15;
  lVar21 = lVar21 + lVar7 * 0x215d1 + lVar28 * -0xa6f7d + lVar35 * -0x200000 + lVar22;
  lVar4 = lVar30 + 0x100000 >> 0x15;
  lVar17 = lVar17 + lVar4 + lVar29 * -0x200000;
  lVar29 = lVar21 + 0x100000 >> 0x15;
  lVar32 = lVar17 + 0x100000 >> 0x15;
  lVar35 = lVar20 + 0x100000 >> 0x15;
  lVar31 = lVar18 + 0x100000 >> 0x15;
  lVar2 = lVar2 + lVar32 * 0xa2c13 + lVar33 * -0x200000;
  lVar7 = lVar2 >> 0x15;
  lVar25 = lVar25 + lVar32 * 0x72d18 + lVar34 * -0x200000 + lVar7;
  lVar28 = lVar25 >> 0x15;
  lVar8 = lVar14 + lVar32 * 0x9fb67 + lVar8 * -0x200000 + lVar34 + lVar28;
  lVar33 = lVar8 >> 0x15;
  lVar18 = lVar18 + lVar31 * -0x200000 + lVar32 * -0xf39ad + lVar33;
  lVar23 = lVar18 >> 0x15;
  lVar19 = lVar19 + lVar32 * 0x215d1 + lVar11 * -0x200000 + lVar31 + lVar23;
  lVar31 = lVar19 >> 0x15;
  lVar10 = lVar10 + lVar32 * -0xa6f7d + lVar26 * -0x200000 + lVar31;
  lVar27 = lVar10 >> 0x15;
  lVar34 = lVar1 + lVar26 + lVar15 * -0x200000 + lVar27;
  lVar11 = lVar34 >> 0x15;
  lVar20 = lVar20 + lVar11 + lVar35 * -0x200000;
  lVar15 = lVar20 >> 0x15;
  lVar24 = lVar24 + lVar35 + lVar22 * -0x200000 + lVar15;
  lVar22 = lVar24 >> 0x15;
  lVar21 = lVar21 + lVar22 + lVar29 * -0x200000;
  lVar14 = lVar21 >> 0x15;
  lVar30 = lVar30 + lVar29 + lVar4 * -0x200000 + lVar14;
  lVar29 = lVar30 >> 0x15;
  lVar17 = lVar17 + lVar29 + lVar32 * -0x200000;
  lVar4 = lVar17 >> 0x15;
  lVar2 = lVar2 + lVar4 * 0xa2c13 + lVar7 * -0x200000;
  lVar1 = lVar2 >> 0x15;
  lVar25 = lVar25 + lVar4 * 0x72d18 + lVar28 * -0x200000 + lVar1;
  lVar2 = lVar2 + lVar1 * -0x200000;
  lVar1 = lVar25 >> 0x15;
  lVar8 = lVar8 + lVar4 * 0x9fb67 + lVar33 * -0x200000 + lVar1;
  lVar25 = lVar25 + lVar1 * -0x200000;
  lVar1 = lVar8 >> 0x15;
  lVar18 = lVar18 + lVar23 * -0x200000 + lVar4 * -0xf39ad + lVar1;
  lVar8 = lVar8 + lVar1 * -0x200000;
  lVar1 = lVar18 >> 0x15;
  lVar19 = lVar19 + lVar4 * 0x215d1 + lVar31 * -0x200000 + lVar1;
  lVar18 = lVar18 + lVar1 * -0x200000;
  lVar1 = lVar19 >> 0x15;
  lVar10 = lVar10 + lVar4 * -0xa6f7d + lVar27 * -0x200000 + lVar1;
  lVar19 = lVar19 + lVar1 * -0x200000;
  lVar1 = lVar10 >> 0x15;
  lVar10 = lVar10 + lVar1 * -0x200000;
  lVar34 = lVar34 + lVar1 + lVar11 * -0x200000;
  lVar1 = lVar34 >> 0x15;
  lVar34 = lVar34 + lVar1 * -0x200000;
  lVar20 = lVar20 + lVar1 + lVar15 * -0x200000;
  lVar1 = lVar20 >> 0x15;
  lVar24 = lVar24 + lVar1 + lVar22 * -0x200000;
  lVar20 = lVar20 + lVar1 * -0x200000;
  lVar1 = lVar24 >> 0x15;
  lVar21 = lVar21 + lVar1 + lVar14 * -0x200000;
  lVar24 = lVar24 + lVar1 * -0x200000;
  lVar1 = lVar21 >> 0x15;
  lVar30 = lVar30 + lVar1 + lVar29 * -0x200000;
  lVar21 = lVar21 + lVar1 * -0x200000;
  lVar1 = lVar30 >> 0x15;
  lVar17 = lVar17 + lVar1 + lVar4 * -0x200000;
  lVar30 = lVar30 + lVar1 * -0x200000;
  param_1[1] = (byte)((ulonglong)lVar2 >> 8);
  *param_1 = (byte)lVar2;
  param_1[2] = (char)lVar25 << 5 | (byte)((ulonglong)lVar2 >> 0x10);
  param_1[3] = (byte)(lVar25 >> 3);
  param_1[4] = (byte)(lVar25 >> 0xb);
  param_1[6] = (byte)(lVar8 >> 6);
  param_1[5] = (byte)(lVar25 >> 0x13) | (char)lVar8 << 2;
  param_1[7] = (char)lVar18 << 7 | (byte)(lVar8 >> 0xe);
  param_1[8] = (byte)(lVar18 >> 1);
  param_1[9] = (byte)(lVar18 >> 9);
  param_1[0xb] = (byte)(lVar19 >> 4);
  param_1[0xc] = (byte)(lVar19 >> 0xc);
  param_1[10] = (byte)(lVar18 >> 0x11) | (char)lVar19 << 4;
  param_1[0xd] = (byte)(lVar19 >> 0x14) | (char)lVar10 * '\x02';
  param_1[0xe] = (byte)(lVar10 >> 7);
  param_1[0xf] = (char)lVar34 << 6 | (byte)(lVar10 >> 0xf);
  param_1[0x10] = (byte)(lVar34 >> 2);
  param_1[0x11] = (byte)(lVar34 >> 10);
  param_1[0x15] = (byte)lVar24;
  param_1[0x13] = (byte)(lVar20 >> 5);
  param_1[0x16] = (byte)((ulonglong)lVar24 >> 8);
  param_1[0x17] = (char)lVar21 << 5 | (byte)((ulonglong)lVar24 >> 0x10);
  param_1[0x18] = (byte)(lVar21 >> 3);
  param_1[0x19] = (byte)(lVar21 >> 0xb);
  param_1[0x12] = (byte)(lVar34 >> 0x12) | (char)lVar20 << 3;
  param_1[0x14] = (byte)(lVar20 >> 0xd);
  param_1[0x1b] = (byte)(lVar30 >> 6);
  param_1[0x1a] = (byte)(lVar21 >> 0x13) | (char)lVar30 << 2;
  param_1[0x1c] = (char)lVar17 << 7 | (byte)(lVar30 >> 0xe);
  param_1[0x1d] = (byte)(lVar17 >> 1);
  param_1[0x1f] = (byte)(lVar17 >> 0x11);
  param_1[0x1e] = (byte)(lVar17 >> 9);
  return;
}

// FUN_14f796870 @ 14f796870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f796870(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  undefined8 local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 local_50 [15];
  byte bStack_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_208;
  uVar3 = 0;
  local_180 = param_1;
  iVar1 = x25519_fe64_eligible();
  if (iVar1 == 0) {
    uStack_5c = param_2[1];
    uStack_58 = param_2[2];
    uStack_54 = param_2[3];
    local_60 = *param_2 & 0xfffffff8;
    local_50 = SUB1615(*(undefined1 (*) [16])(param_2 + 4),0);
    bStack_41 = SUB161(*(undefined1 (*) [16])(param_2 + 4),0xf) & 0x3f | 0x40;
    FUN_14f78e530(&local_88,param_3);
    local_b0 = 1;
    local_190 = 1;
    local_188 = 0xfffffffffffda;
    iVar1 = 0xfe;
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    local_90 = uVar3;
    local_a8 = uVar3;
    local_a0 = uVar3;
    local_98 = uVar3;
    while( true ) {
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = iVar1 + 7;
      }
      uVar9 = *(byte *)((longlong)&local_60 + (longlong)(iVar2 >> 3)) >> ((byte)iVar1 & 7) & 1;
      uVar8 = -(uVar9 ^ uVar3);
      uVar3 = (local_88 ^ local_b0) & uVar8;
      local_d8 = local_88 ^ uVar3;
      local_b0 = local_b0 ^ uVar3;
      uVar4 = (local_a8 ^ local_80) & uVar8;
      local_d0 = local_80 ^ uVar4;
      uVar4 = local_a8 ^ uVar4;
      uVar5 = (local_a0 ^ local_78) & uVar8;
      local_c8 = local_78 ^ uVar5;
      uVar5 = local_a0 ^ uVar5;
      uVar6 = (local_98 ^ local_70) & uVar8;
      local_c0 = local_70 ^ uVar6;
      uVar6 = local_98 ^ uVar6;
      uVar7 = (local_90 ^ local_68) & uVar8;
      local_198 = local_68 ^ uVar7;
      uVar7 = local_90 ^ uVar7;
      uVar3 = (local_190 ^ local_1c8) & uVar8;
      local_1c8 = local_1c8 ^ uVar3;
      local_190 = local_190 ^ uVar3;
      uVar3 = (local_1a0 ^ local_1d0) & uVar8;
      local_1d0 = local_1d0 ^ uVar3;
      local_1a0 = local_1a0 ^ uVar3;
      uVar3 = (local_1a8 ^ local_1d8) & uVar8;
      local_1d8 = local_1d8 ^ uVar3;
      local_1a8 = local_1a8 ^ uVar3;
      uVar3 = (local_1b0 ^ local_1e0) & uVar8;
      local_1e0 = local_1e0 ^ uVar3;
      local_1b0 = local_1b0 ^ uVar3;
      uVar8 = (local_1b8 ^ local_1e8) & uVar8;
      local_1e8 = local_1e8 ^ uVar8;
      local_1b8 = local_1b8 ^ uVar8;
      uVar3 = (ulonglong)uVar9;
      local_150 = (local_d8 - local_190) + 0xfffffffffffda;
      local_148 = (local_d0 - local_1a0) + 0xffffffffffffe;
      local_140 = (local_c8 - local_1a8) + 0xffffffffffffe;
      local_138 = (local_c0 - local_1b0) + 0xffffffffffffe;
      local_130 = (local_198 - local_1b8) + 0xffffffffffffe;
      local_100 = (local_b0 - local_1c8) + local_188;
      local_b0 = local_b0 + local_1c8;
      local_a8 = uVar4 + local_1d0;
      local_f8 = (uVar4 - local_1d0) + 0xffffffffffffe;
      local_a0 = uVar5 + local_1d8;
      local_f0 = (uVar5 - local_1d8) + 0xffffffffffffe;
      local_98 = uVar6 + local_1e0;
      local_e8 = (uVar6 - local_1e0) + 0xffffffffffffe;
      local_90 = uVar7 + local_1e8;
      local_e0 = (uVar7 - local_1e8) + 0xffffffffffffe;
      local_178 = local_190 + local_d8;
      local_170 = local_1a0 + local_d0;
      local_168 = local_1a8 + local_c8;
      local_160 = local_1b0 + local_c0;
      local_158 = local_1b8 + local_198;
      local_128 = local_190;
      local_120 = local_1a0;
      local_118 = local_1a8;
      local_110 = local_1b0;
      local_108 = local_1b8;
      local_b8 = local_198;
      x25519_fe51_mul(&local_128,&local_150,&local_b0);
      x25519_fe51_mul(&local_178,&local_178,&local_100);
      x25519_fe51_sqr(&local_150,&local_100);
      x25519_fe51_sqr(&local_100,&local_b0);
      local_d8 = local_128 + local_178;
      local_d0 = local_120 + local_170;
      local_c8 = local_118 + local_168;
      local_170 = (local_120 - local_170) + 0xffffffffffffe;
      local_c0 = local_110 + local_160;
      local_b8 = local_108 + local_158;
      local_178 = (local_128 - local_178) + 0xfffffffffffda;
      local_168 = (local_118 - local_168) + 0xffffffffffffe;
      local_160 = (local_110 - local_160) + 0xffffffffffffe;
      local_158 = (local_108 - local_158) + 0xffffffffffffe;
      x25519_fe51_mul(&local_b0,&local_100,&local_150);
      local_100 = local_100 + (0xfffffffffffda - local_150);
      local_f8 = local_f8 + (0xffffffffffffe - local_148);
      local_f0 = local_f0 + (0xffffffffffffe - local_140);
      local_e8 = local_e8 + (0xffffffffffffe - local_138);
      local_e0 = local_e0 + (0xffffffffffffe - local_130);
      x25519_fe51_sqr(&local_178,&local_178);
      x25519_fe51_mul121666(&local_128,&local_100);
      x25519_fe51_sqr(&local_d8,&local_d8);
      local_150 = local_150 + local_128;
      local_148 = local_148 + local_120;
      local_140 = local_140 + local_118;
      local_138 = local_138 + local_110;
      local_130 = local_130 + local_108;
      x25519_fe51_mul(&local_128,&local_88,&local_178);
      x25519_fe51_mul(&local_178,&local_100,&local_150);
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) break;
      local_1e8 = local_158;
      local_190 = local_128;
      local_1e0 = local_160;
      local_1d8 = local_168;
      local_1d0 = local_170;
      local_1c8 = local_178;
      local_1b8 = local_108;
      local_1b0 = local_110;
      local_1a8 = local_118;
      local_1a0 = local_120;
      local_68 = local_b8;
      local_80 = local_d0;
      local_88 = local_d8;
      local_70 = local_c0;
      local_78 = local_c8;
    }
    FUN_14f78e700(&local_178,&local_178);
    x25519_fe51_mul(&local_b0,&local_b0,&local_178);
    FUN_14f78ea00(local_180,&local_b0);
    OPENSSL_cleanse(&local_60,0x20);
  }
  else {
    FUN_14f796ea0(param_1,param_2,param_3);
  }
  return;
}

// FUN_14f796ea0 @ 14f796ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f796ea0(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [32];
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [32];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  byte local_48 [16];
  undefined1 local_38 [15];
  byte bStack_29;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f796eb7;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_48[1] = param_2[1];
  local_48[2] = param_2[2];
  local_48[3] = param_2[3];
  local_48[4] = param_2[4];
  local_48[5] = param_2[5];
  local_48[6] = param_2[6];
  local_48[7] = param_2[7];
  local_48[8] = param_2[8];
  local_48[9] = param_2[9];
  local_48[10] = param_2[10];
  local_48[0xb] = param_2[0xb];
  local_48[0xc] = param_2[0xc];
  local_48[0xd] = param_2[0xd];
  local_48[0xe] = param_2[0xe];
  local_48[0xf] = param_2[0xf];
  local_48[0] = *param_2 & 0xf8;
  local_38 = SUB1615(*(undefined1 (*) [16])(param_2 + 0x10),0);
  bStack_29 = SUB161(*(undefined1 (*) [16])(param_2 + 0x10),0xf) & 0x3f | 0x40;
  FUN_14f78ecd0(&local_68,param_3);
  local_108 = 1;
  iVar4 = 0xfe;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_e8 = 1;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uVar5 = 0;
  do {
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = iVar4 + 7;
    }
    uVar3 = local_48[iVar1 >> 3] >> ((byte)iVar4 & 7) & 1;
    uVar2 = -(ulonglong)(uVar5 ^ uVar3);
    local_a8 = (local_108 ^ local_68) & uVar2;
    uStack_a0 = (uStack_100 ^ uStack_60) & uVar2;
    local_108 = local_108 ^ local_a8;
    uStack_100 = uStack_100 ^ uStack_a0;
    local_a8 = local_68 ^ local_a8;
    uStack_a0 = uStack_60 ^ uStack_a0;
    local_98 = (local_f8 ^ local_58) & uVar2;
    uStack_90 = (uStack_f0 ^ uStack_50) & uVar2;
    local_f8 = local_f8 ^ local_98;
    uStack_f0 = uStack_f0 ^ uStack_90;
    local_98 = local_58 ^ local_98;
    uStack_90 = uStack_50 ^ uStack_90;
    uVar6 = (local_128 ^ local_e8) & uVar2;
    uVar7 = (uStack_120 ^ uStack_e0) & uVar2;
    local_128 = local_128 ^ uVar6;
    uStack_120 = uStack_120 ^ uVar7;
    local_e8 = local_e8 ^ uVar6;
    uStack_e0 = uStack_e0 ^ uVar7;
    uVar6 = (local_118 ^ local_d8) & uVar2;
    uVar2 = (uStack_110 ^ uStack_d0) & uVar2;
    local_118 = local_118 ^ uVar6;
    uStack_110 = uStack_110 ^ uVar2;
    local_d8 = local_d8 ^ uVar6;
    uStack_d0 = uStack_d0 ^ uVar2;
    x25519_fe64_sub(local_88,&local_a8,&local_e8);
    x25519_fe64_sub(local_c8,&local_108,&local_128);
    x25519_fe64_add(&local_108,&local_108,&local_128);
    x25519_fe64_add(&local_128,&local_a8,&local_e8);
    x25519_fe64_mul(&local_e8,&local_108,local_88);
    x25519_fe64_mul(&local_128,&local_128,local_c8);
    x25519_fe64_sqr(local_88,local_c8);
    x25519_fe64_sqr(local_c8,&local_108);
    x25519_fe64_add(&local_a8,&local_e8,&local_128);
    x25519_fe64_sub(&local_128,&local_e8,&local_128);
    x25519_fe64_mul(&local_108,local_c8,local_88);
    x25519_fe64_sub(local_c8,local_c8,local_88);
    x25519_fe64_sqr(&local_128,&local_128);
    x25519_fe64_mul121666(&local_e8,local_c8);
    x25519_fe64_sqr(&local_a8,&local_a8);
    x25519_fe64_add(local_88,local_88,&local_e8);
    x25519_fe64_mul(&local_e8,&local_68,&local_128);
    x25519_fe64_mul(&local_128,local_c8,local_88);
    iVar4 = iVar4 + -1;
    uVar5 = uVar3;
    local_58 = local_98;
    uStack_50 = uStack_90;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
  } while (-1 < iVar4);
  FUN_14f78ee50(&local_128,&local_128);
  x25519_fe64_mul(&local_108,&local_108,&local_128);
  x25519_fe64_tobytes(param_1,&local_108);
  OPENSSL_cleanse(local_48,0x20);
  return;
}

