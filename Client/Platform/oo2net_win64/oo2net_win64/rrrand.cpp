// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 11

// rrRand32Munge @ 14ff50b40

uint __cdecl oo2net::rrRand32Munge(uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1 * 0xaa55596b ^ 0x1ef57d8a7b344e7b;
  uVar1 = (uVar1 >> 0x1d ^ uVar1) * 0x10001;
  uVar1 = uVar1 >> 0x15 ^ uVar1;
  uVar1 = (ulonglong)((int)(uVar1 >> 0x20) + (int)uVar1 ^ param_1) * 0xaa55596b ^ 0xd9ea571c8af880b6
  ;
  uVar1 = (uVar1 >> 0x1d ^ uVar1) * 0x10001;
  uVar1 = uVar1 ^ uVar1 >> 0x15;
  return (int)(uVar1 >> 0x20) + (int)uVar1;
}

// rrRand32MungeSimple @ 14ff50bd0

uint __cdecl oo2net::rrRand32MungeSimple(uint param_1)

{
  return ((param_1 >> 0xd) + param_1 * 0x80000 ^ 0x31415926) * 0x7ff8a3ed + 0x2aa01d31;
}

// rrRand64MungeSimple @ 14ff50c00

ulong64 __cdecl oo2net::rrRand64MungeSimple(ulong64 param_1)

{
  ulonglong uVar1;
  
  uVar1 = (param_1 + 0x9e3779b97f4a7c15 >> 0x1e ^ param_1 + 0x9e3779b97f4a7c15) *
          -0x40a7b892e31b1a47;
  uVar1 = (uVar1 >> 0x1b ^ uVar1) * -0x6b2fb644ecceee15;
  return uVar1 >> 0x1f ^ uVar1;
}

// rrRand64Simple_SeedFromU64Array @ 14ff50c50

ulong64 __cdecl oo2net::rrRand64Simple_SeedFromU64Array(ulong64 *param_1,int param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = 0x9e3779b97f4a7c15;
  if (0 < param_2) {
    lVar3 = 0;
    do {
      puVar1 = param_1 + lVar3;
      lVar3 = lVar3 + 1;
      uVar2 = (uVar2 >> 0x2b | uVar2 << 0x15) ^ *puVar1 * -0x40a7b892e31b1a47 ^
              uVar2 * -0x6b2fb644ecceee15;
    } while (lVar3 < param_2);
  }
  uVar2 = (uVar2 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar2 + 0x9e3779b97f4a7c15) * -0x40a7b892e31b1a47;
  uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
  return uVar2 >> 0x1f ^ uVar2;
}

// rrRandState32 @ 14ff50d00

uint __cdecl oo2net::rrRandState32(rrRandState *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1->y ^ param_1->y << 0xd;
  uVar3 = uVar3 ^ uVar3 >> 0x11;
  uVar2 = param_1->x * 0x10dcd + 0x3039;
  param_1->x = uVar2;
  uVar3 = uVar3 ^ uVar3 << 5;
  lVar1 = (ulonglong)param_1->z * 0x29a65ead + (ulonglong)param_1->c;
  param_1->y = uVar3;
  uVar2 = (int)lVar1 + uVar3 + uVar2;
  *(longlong *)&param_1->z = lVar1;
  return (uVar2 >> 0xf) + uVar2;
}

// rrRandState64 @ 14ff50d70

ulong64 __cdecl oo2net::rrRandState64(rrRandState *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_1->y ^ param_1->y << 0xd;
  uVar4 = uVar4 ^ uVar4 >> 0x11;
  iVar2 = param_1->x * 0x10dcd + 0x3039;
  uVar4 = uVar4 ^ uVar4 << 5;
  uVar1 = (ulonglong)param_1->z * 0x29a65ead + (ulonglong)param_1->c;
  uVar5 = uVar4 << 0xd ^ uVar4;
  uVar6 = iVar2 * 0x10dcd + 0x3039;
  param_1->x = uVar6;
  uVar5 = uVar5 ^ uVar5 >> 0x11;
  uVar4 = (int)uVar1 + uVar4 + iVar2;
  uVar5 = uVar5 ^ uVar5 << 5;
  param_1->y = uVar5;
  lVar3 = (uVar1 >> 0x20) + (uVar1 & 0xffffffff) * 0x29a65ead;
  uVar6 = (int)lVar3 + uVar5 + uVar6;
  *(longlong *)&param_1->z = lVar3;
  return CONCAT44((uVar4 >> 0xf) + uVar4,(uVar6 >> 0xf) + uVar6);
}

// rrRandStateMod64 @ 14ff50e40

ulong64 __cdecl oo2net::rrRandStateMod64(rrRandState *param_1,ulong64 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = param_1->y ^ param_1->y << 0xd;
  iVar5 = param_1->x * 0x10dcd + 0x3039;
  uVar8 = uVar8 ^ uVar8 >> 0x11;
  uVar8 = uVar8 ^ uVar8 << 5;
  uVar3 = (ulonglong)param_1->z * 0x29a65ead + (ulonglong)param_1->c;
  uVar6 = uVar8 << 0xd ^ uVar8;
  uVar7 = iVar5 * 0x10dcd + 0x3039;
  uVar6 = uVar6 ^ uVar6 >> 0x11;
  param_1->x = uVar7;
  uVar8 = (int)uVar3 + uVar8 + iVar5;
  uVar6 = uVar6 ^ uVar6 << 5;
  param_1->y = uVar6;
  lVar4 = (uVar3 >> 0x20) + (uVar3 & 0xffffffff) * 0x29a65ead;
  uVar7 = (int)lVar4 + uVar6 + uVar7;
  *(longlong *)&param_1->z = lVar4;
  auVar2._4_4_ = (uVar8 >> 0xf) + uVar8;
  auVar2._0_4_ = (uVar7 >> 0xf) + uVar7;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  return SUB168(auVar1 * auVar2,8);
}

// rrRandStateSeed @ 14ff50f30

void __cdecl oo2net::rrRandStateSeed(rrRandState *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = ((param_2 >> 0xd) + param_2 * 0x80000 ^ 0x31415926) * 0x7ff8a3ed + 0x2aa01d31;
  uVar2 = uVar3 ^ 0x159a55a0 ^ (uVar3 ^ 0x159a55a0) << 0xd;
  uVar2 = uVar2 ^ uVar2 >> 0x11;
  uVar2 = uVar2 << 5 ^ uVar2;
  uVar1 = ((ulonglong)uVar3 ^ 0x1f123bb5) * 0x29a65ead + ((ulonglong)uVar3 ^ 0x74cbb1);
  uVar2 = uVar2 ^ uVar2 << 0xd;
  uVar2 = uVar2 ^ uVar2 >> 0x11;
  uVar1 = (uVar1 >> 0x20) + (uVar1 & 0xffffffff) * 0x29a65ead;
  uVar2 = uVar2 << 5 ^ uVar2;
  uVar2 = uVar2 ^ uVar2 << 0xd;
  uVar2 = uVar2 ^ uVar2 >> 0x11;
  uVar1 = (uVar1 >> 0x20) + (uVar1 & 0xffffffff) * 0x29a65ead;
  uVar2 = uVar2 << 5 ^ uVar2;
  uVar2 = uVar2 ^ uVar2 << 0xd;
  uVar2 = uVar2 ^ uVar2 >> 0x11;
  *(ulonglong *)&param_1->z = (uVar1 >> 0x20) + (uVar1 & 0xffffffff) * 0x29a65ead;
  param_1->x = (uVar3 ^ 0x75bcd15) * 0x6ab9d291 + 0x3953ac6c;
  param_1->y = uVar2 << 5 ^ uVar2;
  return;
}

// rrRandStateSeedWithTime @ 14ff51050

void __cdecl oo2net::rrRandStateSeedWithTime(rrRandState *param_1,ulong64 param_2,ulong64 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar6 = (uint)(param_2 >> 0x20) ^ (uint)(param_3 >> 0x20);
  iVar3 = (((uint)(param_2 >> 0xd) & 0x7ffff) + (int)param_2 * 0x80000 ^ 0x31415926) * 0x7ff8a3ed +
          0x2aa01d31;
  uVar1 = (((uint)(param_3 >> 0xd) & 0x7ffff) + (int)param_3 * 0x80000 ^ 0x31415926) * 0x7ff8a3ed +
          0x2aa01d31;
  iVar2 = uVar1 + iVar3;
  uVar1 = (uVar1 * 0x10 | uVar1 >> 0x1c) ^
          (((uVar6 >> 0xd) + uVar6 * 0x80000 ^ 0x31415926) * 0x7ff8a3ed - uVar1) + 0x2aa01d31;
  iVar4 = uVar1 + iVar2;
  uVar1 = (uVar1 << 6 | uVar1 >> 0x1a) ^ iVar3 - uVar1;
  iVar3 = uVar1 + iVar4;
  uVar1 = (uVar1 << 8 | uVar1 >> 0x18) ^ iVar2 - uVar1;
  iVar2 = uVar1 + iVar3;
  uVar1 = (uVar1 << 0x10 | uVar1 >> 0x10) ^ iVar4 - uVar1;
  uVar8 = uVar1 + iVar2;
  uVar1 = (uVar1 << 0x13 | uVar1 >> 0xd) ^ iVar3 - uVar1;
  uVar5 = (uVar1 << 4 | uVar1 >> 0x1c) ^ iVar2 - uVar1;
  uVar6 = uVar1 + uVar8 ^ 0x159a55a0;
  uVar6 = uVar6 ^ uVar6 << 0xd;
  uVar6 = uVar6 ^ uVar6 >> 0x11;
  uVar7 = ((ulonglong)(uVar1 + uVar8 >> 0x10 ^ uVar8 * 0x10000 ^ uVar5) ^ 0x74cbb1) +
          ((ulonglong)uVar5 ^ 0x1f123bb5) * 0x29a65ead;
  uVar6 = uVar6 << 5 ^ uVar6;
  uVar6 = uVar6 ^ uVar6 << 0xd;
  uVar6 = uVar6 ^ uVar6 >> 0x11;
  uVar7 = (uVar7 >> 0x20) + (uVar7 & 0xffffffff) * 0x29a65ead;
  uVar6 = uVar6 << 5 ^ uVar6;
  uVar6 = uVar6 ^ uVar6 << 0xd;
  uVar6 = uVar6 ^ uVar6 >> 0x11;
  uVar7 = (uVar7 >> 0x20) + (uVar7 & 0xffffffff) * 0x29a65ead;
  uVar6 = uVar6 << 5 ^ uVar6;
  uVar6 = uVar6 ^ uVar6 << 0xd;
  uVar6 = uVar6 ^ uVar6 >> 0x11;
  *(ulonglong *)&param_1->z = (uVar7 >> 0x20) + (uVar7 & 0xffffffff) * 0x29a65ead;
  param_1->x = (uVar8 ^ 0x75bcd15) * 0x6ab9d291 + 0x3953ac6c;
  param_1->y = uVar6 << 5 ^ uVar6;
  return;
}

// rrRandState_Init @ 14ff51220

void __cdecl oo2net::rrRandState_Init(rrRandState *param_1)

{
  *param_1 = c_init;
  return;
}

// rrRandState_Log @ 14ff51240

void __cdecl oo2net::rrRandState_Log(rrRandState *param_1)

{
  if (g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleNet_Plugin_Printf)
              (1,"v:\\devel\\projects\\oodle2\\core\\rrrand.cpp",0x18,
               "rrRandState rrs = { 0x%08X, 0x%08X, 0x%08X, 0x%08X };\n");
  }
  return;
}

