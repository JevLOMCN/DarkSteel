// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FMD5 @ 141916ed0

FMD5 * __thiscall FMD5::FMD5(FMD5 *this)

{
  (this->Context).state[0] = 0x67452301;
  (this->Context).count[0] = 0;
  (this->Context).count[1] = 0;
  (this->Context).state[1] = 0xefcdab89;
  (this->Context).state[2] = 0x98badcfe;
  (this->Context).state[3] = 0x10325476;
  return this;
}

// ~FMD5 @ 14191bd20

void __thiscall FMD5::~FMD5(FMD5 *this)

{
  return;
}

// Decode @ 141932be0

void __thiscall FMD5::Decode(FMD5 *this,uint *param_1,uchar *param_2,int param_3)

{
  uchar *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar2 = ((longlong)param_3 - 1U >> 2) + 1;
    puVar1 = param_2 + 2;
    do {
      *param_1 = CONCAT31(CONCAT21(*(undefined2 *)puVar1,puVar1[-1]),puVar1[-2]);
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 4;
      param_1 = param_1 + 1;
    } while (lVar2 != 0);
  }
  return;
}

// Encode @ 1419354e0

void __thiscall FMD5::Encode(FMD5 *this,uchar *param_1,uint *param_2,int param_3)

{
  uchar *puVar1;
  uchar *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    lVar3 = ((longlong)param_3 - 1U >> 2) + 1;
    puVar1 = (uchar *)((longlong)param_2 + 2);
    puVar2 = param_1 + 2;
    do {
      puVar2[-2] = puVar1[-2];
      puVar2[-1] = puVar1[-1];
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      lVar3 = lVar3 + -1;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (lVar3 != 0);
  }
  return;
}

// Final @ 14193ab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMD5::Final(FMD5 *this,uchar *param_1)

{
  int iVar1;
  uchar *puVar2;
  uint uVar3;
  uchar *puVar4;
  longlong lVar5;
  undefined1 auStack_38 [32];
  uchar local_18 [8];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  lVar5 = 0;
  puVar2 = (uchar *)((longlong)(this->Context).count + 2);
  do {
    local_18[lVar5] = puVar2[-2];
    local_18[lVar5 + 1] = puVar2[-1];
    local_18[lVar5 + 2] = *puVar2;
    local_18[lVar5 + 3] = puVar2[1];
    lVar5 = lVar5 + 4;
    puVar2 = puVar2 + 4;
  } while (lVar5 < 8);
  uVar3 = (this->Context).count[0] >> 3 & 0x3f;
  iVar1 = 0x38 - uVar3;
  if (0x37 < uVar3) {
    iVar1 = 0x78 - uVar3;
  }
  Update(this,PADDING,(longlong)iVar1);
  Update(this,local_18,8);
  lVar5 = 4;
  puVar2 = (uchar *)((longlong)(this->Context).state + 2);
  puVar4 = param_1 + 2;
  do {
    puVar4[-2] = puVar2[-2];
    puVar4[-1] = puVar2[-1];
    *puVar4 = *puVar2;
    puVar4[1] = puVar2[1];
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
    puVar4 = puVar4 + 4;
  } while (lVar5 != 0);
  (this->Context).state[0] = 0;
  (this->Context).state[1] = 0;
  (this->Context).state[2] = 0;
  (this->Context).state[3] = 0;
  (this->Context).count[0] = 0;
  (this->Context).count[1] = 0;
  (this->Context).buffer[0] = '\0';
  (this->Context).buffer[1] = '\0';
  (this->Context).buffer[2] = '\0';
  (this->Context).buffer[3] = '\0';
  (this->Context).buffer[4] = '\0';
  (this->Context).buffer[5] = '\0';
  (this->Context).buffer[6] = '\0';
  (this->Context).buffer[7] = '\0';
  (this->Context).buffer[8] = '\0';
  (this->Context).buffer[9] = '\0';
  (this->Context).buffer[10] = '\0';
  (this->Context).buffer[0xb] = '\0';
  (this->Context).buffer[0xc] = '\0';
  (this->Context).buffer[0xd] = '\0';
  (this->Context).buffer[0xe] = '\0';
  (this->Context).buffer[0xf] = '\0';
  (this->Context).buffer[0x10] = '\0';
  (this->Context).buffer[0x11] = '\0';
  (this->Context).buffer[0x12] = '\0';
  (this->Context).buffer[0x13] = '\0';
  (this->Context).buffer[0x14] = '\0';
  (this->Context).buffer[0x15] = '\0';
  (this->Context).buffer[0x16] = '\0';
  (this->Context).buffer[0x17] = '\0';
  (this->Context).buffer[0x18] = '\0';
  (this->Context).buffer[0x19] = '\0';
  (this->Context).buffer[0x1a] = '\0';
  (this->Context).buffer[0x1b] = '\0';
  (this->Context).buffer[0x1c] = '\0';
  (this->Context).buffer[0x1d] = '\0';
  (this->Context).buffer[0x1e] = '\0';
  (this->Context).buffer[0x1f] = '\0';
  (this->Context).buffer[0x20] = '\0';
  (this->Context).buffer[0x21] = '\0';
  (this->Context).buffer[0x22] = '\0';
  (this->Context).buffer[0x23] = '\0';
  (this->Context).buffer[0x24] = '\0';
  (this->Context).buffer[0x25] = '\0';
  (this->Context).buffer[0x26] = '\0';
  (this->Context).buffer[0x27] = '\0';
  (this->Context).buffer[0x28] = '\0';
  (this->Context).buffer[0x29] = '\0';
  (this->Context).buffer[0x2a] = '\0';
  (this->Context).buffer[0x2b] = '\0';
  (this->Context).buffer[0x2c] = '\0';
  (this->Context).buffer[0x2d] = '\0';
  (this->Context).buffer[0x2e] = '\0';
  (this->Context).buffer[0x2f] = '\0';
  (this->Context).buffer[0x30] = '\0';
  (this->Context).buffer[0x31] = '\0';
  (this->Context).buffer[0x32] = '\0';
  (this->Context).buffer[0x33] = '\0';
  (this->Context).buffer[0x34] = '\0';
  (this->Context).buffer[0x35] = '\0';
  (this->Context).buffer[0x36] = '\0';
  (this->Context).buffer[0x37] = '\0';
  (this->Context).buffer[0x38] = '\0';
  (this->Context).buffer[0x39] = '\0';
  (this->Context).buffer[0x3a] = '\0';
  (this->Context).buffer[0x3b] = '\0';
  (this->Context).buffer[0x3c] = '\0';
  (this->Context).buffer[0x3d] = '\0';
  (this->Context).buffer[0x3e] = '\0';
  (this->Context).buffer[0x3f] = '\0';
  return;
}

// Transform @ 1419732e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMD5::Transform(FMD5 *this,uint *param_1,uchar *param_2)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int local_78 [4];
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
  
  uVar1 = *param_1;
  uVar9 = param_1[1];
  uVar6 = param_1[2];
  lVar5 = 0x10;
  uVar4 = param_1[3];
  puVar2 = param_2 + 2;
  piVar8 = local_78;
  do {
    *piVar8 = CONCAT31(CONCAT21(*(undefined2 *)puVar2,puVar2[-1]),puVar2[-2]);
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
    piVar8 = piVar8 + 1;
  } while (lVar5 != 0);
  uVar3 = (~uVar9 & uVar4 | uVar6 & uVar9) + 0xd76aa478 + local_78[0] + uVar1;
  uVar3 = (uVar3 >> 0x19 | uVar3 * 0x80) + uVar9;
  uVar4 = (~uVar3 & uVar6 | uVar3 & uVar9) + 0xe8c7b756 + local_78[1] + uVar4;
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar3;
  uVar6 = (~uVar4 & uVar9 | uVar4 & uVar3) + 0x242070db + local_78[2] + uVar6;
  uVar7 = (uVar6 >> 0xf | uVar6 * 0x20000) + uVar4;
  uVar9 = uVar9 + 0xc1bdceee + (~uVar7 & uVar3 | uVar7 & uVar4) + local_78[3];
  uVar10 = (uVar9 >> 10 | uVar9 * 0x400000) + uVar7;
  uVar9 = local_68 + -0xa83f051 + (~uVar10 & uVar4 | uVar10 & uVar7) + uVar3;
  uVar9 = (uVar9 >> 0x19 | uVar9 * 0x80) + uVar10;
  uVar6 = local_64 + 0x4787c62a + (~uVar9 & uVar7 | uVar9 & uVar10) + uVar4;
  uVar4 = (uVar6 >> 0x14 | uVar6 * 0x1000) + uVar9;
  uVar6 = local_60 + -0x57cfb9ed + (~uVar4 & uVar10 | uVar4 & uVar9) + uVar7;
  uVar3 = (uVar6 >> 0xf | uVar6 * 0x20000) + uVar4;
  uVar6 = local_5c + -0x2b96aff + (~uVar3 & uVar9 | uVar3 & uVar4) + uVar10;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar3;
  uVar9 = local_58 + 0x698098d8 + (~uVar6 & uVar4 | uVar6 & uVar3) + uVar9;
  uVar9 = (uVar9 >> 0x19 | uVar9 * 0x80) + uVar6;
  uVar4 = uVar4 + (~uVar9 & uVar3 | uVar9 & uVar6) + 0x8b44f7af + local_54;
  uVar4 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar9;
  uVar3 = uVar3 + ((~uVar4 & uVar6 | uVar4 & uVar9) - 0xa44f) + local_50;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar4;
  uVar6 = (~uVar3 & uVar9 | uVar3 & uVar4) + 0x895cd7be + local_4c + uVar6;
  uVar6 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar3;
  uVar9 = uVar9 + 0x6b901122 + (~uVar6 & uVar4 | uVar6 & uVar3) + local_48;
  uVar9 = (uVar9 >> 0x19 | uVar9 * 0x80) + uVar6;
  uVar4 = uVar4 + 0xfd987193 + (~uVar9 & uVar3 | uVar9 & uVar6) + local_44;
  uVar7 = (uVar4 >> 0x14 | uVar4 * 0x1000) + uVar9;
  uVar4 = uVar3 + 0xa679438e + (uVar7 & uVar9 | uVar6 & ~uVar7) + local_40;
  uVar4 = (uVar4 >> 0xf | uVar4 * 0x20000) + uVar7;
  uVar6 = (uVar4 & uVar7 | uVar9 & ~uVar4) + 0x49b40821 + local_3c + uVar6;
  uVar3 = (uVar6 >> 10 | uVar6 * 0x400000) + uVar4;
  uVar9 = local_78[1] + -0x9e1da9e + (uVar3 & uVar7 | uVar4 & ~uVar7) + uVar9;
  uVar6 = (uVar9 >> 0x1b | uVar9 * 0x20) + uVar3;
  uVar9 = local_60 + -0x3fbf4cc0 + (uVar3 & ~uVar4 | uVar6 & uVar4) + uVar7;
  uVar7 = (uVar9 >> 0x17 | uVar9 * 0x200) + uVar6;
  uVar4 = uVar4 + (~uVar3 & uVar6 | uVar7 & uVar3) + 0x265e5a51 + local_4c;
  uVar4 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar7;
  uVar9 = local_78[0] + -0x16493856 + (~uVar6 & uVar7 | uVar6 & uVar4) + uVar3;
  uVar9 = (uVar9 >> 0xc | uVar9 * 0x100000) + uVar4;
  uVar6 = local_64 + -0x29d0efa3 + (~uVar7 & uVar4 | uVar7 & uVar9) + uVar6;
  uVar6 = (uVar6 >> 0x1b | uVar6 * 0x20) + uVar9;
  uVar7 = uVar7 + (~uVar4 & uVar9 | uVar6 & uVar4) + 0x2441453 + local_50;
  uVar3 = (uVar7 >> 0x17 | uVar7 * 0x200) + uVar6;
  uVar4 = (~uVar9 & uVar6 | uVar3 & uVar9) + 0xd8a1e681 + local_3c + uVar4;
  uVar4 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar3;
  uVar9 = local_68 + -0x182c0438 + (~uVar6 & uVar3 | uVar4 & uVar6) + uVar9;
  uVar9 = (uVar9 >> 0xc | uVar9 * 0x100000) + uVar4;
  uVar6 = uVar6 + 0x21e1cde6 + (~uVar3 & uVar4 | uVar9 & uVar3) + local_54;
  uVar6 = (uVar6 >> 0x1b | uVar6 * 0x20) + uVar9;
  uVar3 = uVar3 + 0xc33707d6 + (~uVar4 & uVar9 | uVar6 & uVar4) + local_40;
  uVar3 = (uVar3 >> 0x17 | uVar3 * 0x200) + uVar6;
  uVar4 = local_78[3] + -0xb2af279 + (~uVar9 & uVar6 | uVar3 & uVar9) + uVar4;
  uVar4 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar3;
  uVar9 = local_58 + 0x455a14ed + (~uVar6 & uVar3 | uVar4 & uVar6) + uVar9;
  uVar7 = (uVar9 >> 0xc | uVar9 * 0x100000) + uVar4;
  uVar6 = (~uVar3 & uVar4 | uVar7 & uVar3) + 0xa9e3e905 + local_44 + uVar6;
  uVar9 = (uVar6 >> 0x1b | uVar6 * 0x20) + uVar7;
  uVar6 = local_78[2] + -0x3105c08 + (~uVar4 & uVar7 | uVar9 & uVar4) + uVar3;
  uVar6 = (uVar6 >> 0x17 | uVar6 * 0x200) + uVar9;
  uVar4 = local_5c + 0x676f02d9 + (~uVar7 & uVar9 | uVar6 & uVar7) + uVar4;
  uVar4 = (uVar4 >> 0x12 | uVar4 * 0x4000) + uVar6;
  uVar7 = (~uVar9 & uVar6 | uVar4 & uVar9) + 0x8d2a4c8a + local_48 + uVar7;
  uVar3 = (uVar7 >> 0xc | uVar7 * 0x100000) + uVar4;
  uVar9 = local_64 + -0x5c6be + (uVar3 ^ uVar4 ^ uVar6) + uVar9;
  uVar9 = (uVar9 >> 0x1c | uVar9 * 0x10) + uVar3;
  uVar6 = local_58 + -0x788e097f + (uVar9 ^ uVar3 ^ uVar4) + uVar6;
  uVar6 = (uVar6 >> 0x15 | uVar6 * 0x800) + uVar9;
  uVar4 = uVar4 + (uVar6 ^ uVar9 ^ uVar3) + 0x6d9d6122 + local_4c;
  uVar4 = (uVar4 >> 0x10 | uVar4 * 0x10000) + uVar6;
  uVar3 = uVar3 + (uVar9 ^ uVar4 ^ uVar6) + 0xfde5380c + local_40;
  uVar3 = (uVar3 >> 9 | uVar3 * 0x800000) + uVar4;
  uVar9 = local_78[1] + -0x5b4115bc + (uVar3 ^ uVar4 ^ uVar6) + uVar9;
  uVar7 = (uVar9 >> 0x1c | uVar9 * 0x10) + uVar3;
  uVar9 = local_68 + 0x4bdecfa9 + (uVar7 ^ uVar3 ^ uVar4) + uVar6;
  uVar9 = (uVar9 >> 0x15 | uVar9 * 0x800) + uVar7;
  uVar6 = local_5c + -0x944b4a0 + (uVar7 ^ uVar3 ^ uVar9) + uVar4;
  uVar6 = (uVar6 >> 0x10 | uVar6 * 0x10000) + uVar9;
  uVar4 = uVar3 + 0xbebfbc70 + (uVar7 ^ uVar6 ^ uVar9) + local_50;
  uVar3 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar6;
  uVar4 = uVar7 + 0x289b7ec6 + (uVar3 ^ uVar6 ^ uVar9) + local_44;
  uVar7 = (uVar4 >> 0x1c | uVar4 * 0x10) + uVar3;
  uVar9 = local_78[0] + -0x155ed806 + (uVar7 ^ uVar3 ^ uVar6) + uVar9;
  uVar10 = (uVar9 >> 0x15 | uVar9 * 0x800) + uVar7;
  uVar9 = local_78[3] + -0x2b10cf7b + (uVar7 ^ uVar3 ^ uVar10) + uVar6;
  uVar4 = (uVar9 >> 0x10 | uVar9 * 0x10000) + uVar10;
  uVar9 = local_60 + 0x4881d05 + (uVar7 ^ uVar4 ^ uVar10) + uVar3;
  uVar6 = (uVar9 >> 9 | uVar9 * 0x800000) + uVar4;
  uVar9 = local_54 + -0x262b2fc7 + (uVar6 ^ uVar4 ^ uVar10) + uVar7;
  uVar9 = (uVar9 >> 0x1c | uVar9 * 0x10) + uVar6;
  uVar3 = uVar10 + 0xe6db99e5 + (uVar9 ^ uVar6 ^ uVar4) + local_48;
  uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + uVar9;
  uVar4 = uVar4 + (uVar9 ^ uVar6 ^ uVar3) + 0x1fa27cf8 + local_3c;
  uVar4 = (uVar4 >> 0x10 | uVar4 * 0x10000) + uVar3;
  uVar6 = local_78[2] + -0x3b53a99b + (uVar9 ^ uVar4 ^ uVar3) + uVar6;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar9 = local_78[0] + -0xbd6ddbc + ((~uVar3 | uVar6) ^ uVar4) + uVar9;
  uVar7 = (uVar9 >> 0x1a | uVar9 * 0x40) + uVar6;
  uVar9 = local_5c + 0x432aff97 + ((~uVar4 | uVar7) ^ uVar6) + uVar3;
  uVar9 = (uVar9 >> 0x16 | uVar9 * 0x400) + uVar7;
  uVar4 = uVar4 + 0xab9423a7 + ((~uVar6 | uVar9) ^ uVar7) + local_40;
  uVar3 = (uVar4 >> 0x11 | uVar4 * 0x8000) + uVar9;
  uVar6 = local_64 + -0x36c5fc7 + ((~uVar7 | uVar3) ^ uVar9) + uVar6;
  uVar6 = (uVar6 >> 0xb | uVar6 * 0x200000) + uVar3;
  uVar4 = uVar7 + 0x655b59c3 + ((~uVar9 | uVar6) ^ uVar3) + local_48;
  uVar4 = (uVar4 >> 0x1a | uVar4 * 0x40) + uVar6;
  uVar9 = local_78[3] + -0x70f3336e + ((~uVar3 | uVar4) ^ uVar6) + uVar9;
  uVar7 = (uVar9 >> 0x16 | uVar9 * 0x400) + uVar4;
  uVar9 = (uVar3 - 0x100b83) + ((~uVar6 | uVar7) ^ uVar4) + local_50;
  uVar9 = (uVar9 >> 0x11 | uVar9 * 0x8000) + uVar7;
  uVar6 = local_78[1] + -0x7a7ba22f + ((~uVar4 | uVar9) ^ uVar7) + uVar6;
  uVar3 = (uVar6 >> 0xb | uVar6 * 0x200000) + uVar9;
  uVar6 = local_58 + 0x6fa87e4f + ((~uVar7 | uVar3) ^ uVar9) + uVar4;
  uVar6 = (uVar6 >> 0x1a | uVar6 * 0x40) + uVar3;
  uVar7 = uVar7 + ((~uVar9 | uVar6) ^ uVar3) + 0xfe2ce6e0 + local_3c;
  uVar7 = (uVar7 >> 0x16 | uVar7 * 0x400) + uVar6;
  uVar9 = local_60 + -0x5cfebcec + ((~uVar3 | uVar7) ^ uVar6) + uVar9;
  uVar9 = (uVar9 >> 0x11 | uVar9 * 0x8000) + uVar7;
  uVar3 = uVar3 + ((~uVar6 | uVar9) ^ uVar7) + 0x4e0811a1 + local_44;
  uVar3 = (uVar3 >> 0xb | uVar3 * 0x200000) + uVar9;
  uVar6 = local_68 + -0x8ac817e + ((~uVar7 | uVar3) ^ uVar9) + uVar6;
  uVar4 = (uVar6 >> 0x1a | uVar6 * 0x40) + uVar3;
  uVar6 = uVar7 + 0xbd3af235 + ((~uVar9 | uVar4) ^ uVar3) + local_4c;
  uVar6 = (uVar6 >> 0x16 | uVar6 * 0x400) + uVar4;
  uVar9 = local_78[2] + 0x2ad7d2bb + ((~uVar3 | uVar6) ^ uVar4) + uVar9;
  uVar9 = (uVar9 >> 0x11 | uVar9 * 0x8000) + uVar6;
  param_1[2] = param_1[2] + uVar9;
  *param_1 = uVar1 + uVar4;
  uVar1 = uVar3 + 0xeb86d391 + ((~uVar4 | uVar9) ^ uVar6) + local_54;
  param_1[1] = param_1[1] + (uVar1 >> 0xb | uVar1 * 0x200000) + uVar9;
  param_1[3] = param_1[3] + uVar6;
  return;
}

// Update @ 14197b520

void __thiscall FMD5::Update(FMD5 *this,uchar *param_1,ulong64 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  size_t _Size;
  
  puVar1 = (this->Context).count;
  uVar2 = (ulonglong)(*puVar1 >> 3 & 0x3f);
  _Size = -uVar2 + 0x40;
  *(ulong64 *)(this->Context).count = *(longlong *)puVar1 + param_2 * 8;
  if (param_2 < _Size) {
    _Size = 0;
  }
  else {
    memcpy((this->Context).buffer + uVar2,param_1,_Size);
    Transform(this,(uint *)this,(this->Context).buffer);
    for (uVar2 = -uVar2 + 0x7f; uVar2 < param_2; uVar2 = uVar2 + 0x40) {
      Transform(this,(uint *)this,param_1 + (uVar2 - 0x3f));
      _Size = _Size + 0x40;
    }
    uVar2 = 0;
  }
  memcpy((this->Context).buffer + uVar2,param_1 + _Size,param_2 - _Size);
  return;
}

