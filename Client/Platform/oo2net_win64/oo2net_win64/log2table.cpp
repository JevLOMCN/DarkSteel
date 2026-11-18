// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 6

// log2tabled_bk_32 @ 14ff61790

int __cdecl oo2net::log2tabled_bk_32(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0x20) {
    return c_log2tabled_bk_32[param_1];
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar3 = param_1 << ((byte)(0x20 - iVar1) & 0x1f);
  uVar2 = uVar3 >> 0x1a;
  return ((0x20 - iVar1) * 0x2000 -
         (int)((ulonglong)((uint)c_log2table_bk[uVar2 + 1] - (uint)c_log2table_bk[uVar2]) *
               (ulonglong)(uVar3 << 6) + 0x9fffffff >> 0x20)) - (uint)c_log2table_bk[uVar2];
}

// rrClz32 @ 14ff61810

uint __cdecl oo2net::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrClz64 @ 14ff61830

uint __cdecl oo2net::rrClz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (int)lVar1;
}

// rrlog2_bk @ 14ff61850

float __cdecl oo2net::rrlog2_bk(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x20) {
    iVar3 = c_log2tabled_bk_32[param_1];
  }
  else {
    iVar3 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar2 = param_1 << ((byte)(0x20 - iVar3) & 0x1f);
    uVar1 = uVar2 >> 0x1a;
    iVar3 = ((0x20 - iVar3) * 0x2000 -
            (int)((ulonglong)((uint)c_log2table_bk[uVar1 + 1] - (uint)c_log2table_bk[uVar1]) *
                  (ulonglong)(uVar2 << 6) + 0x9fffffff >> 0x20)) - (uint)c_log2table_bk[uVar1];
  }
  return __real_42000000 - (float)iVar3 * __real_39000000;
}

// rrlog2_bk_U64 @ 14ff618e0

float __cdecl oo2net::rrlog2_bk_U64(ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (0xffffffff < param_1) {
    lVar1 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = (int)lVar1 + -0x1f;
    param_1 = param_1 >> ((byte)iVar2 & 0x3f);
    fVar5 = (float)iVar2;
  }
  uVar4 = (uint)param_1;
  if (uVar4 < 0x20) {
    iVar2 = c_log2tabled_bk_32[param_1 & 0xffffffff];
  }
  else {
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar4 = uVar4 << ((byte)(0x20 - iVar2) & 0x1f);
    uVar3 = uVar4 >> 0x1a;
    iVar2 = ((0x20 - iVar2) * 0x2000 -
            (int)((ulonglong)((uint)c_log2table_bk[uVar3 + 1] - (uint)c_log2table_bk[uVar3]) *
                  (ulonglong)(uVar4 << 6) + 0x9fffffff >> 0x20)) - (uint)c_log2table_bk[uVar3];
  }
  return (__real_42000000 - (float)iVar2 * __real_39000000) + fVar5;
}

// rrlog2neg_bk_32 @ 14ff619a0

float __cdecl oo2net::rrlog2neg_bk_32(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0x20) {
    return (float)c_log2tabled_bk_32[param_1] * __real_39000000;
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar3 = param_1 << ((byte)(0x20 - iVar1) & 0x1f);
  uVar2 = uVar3 >> 0x1a;
  return (float)(int)(((0x20 - iVar1) * 0x2000 -
                      (int)((ulonglong)
                            ((uint)c_log2table_bk[uVar2 + 1] - (uint)c_log2table_bk[uVar2]) *
                            (ulonglong)(uVar3 << 6) + 0x9fffffff >> 0x20)) -
                     (uint)c_log2table_bk[uVar2]) * __real_39000000;
}

