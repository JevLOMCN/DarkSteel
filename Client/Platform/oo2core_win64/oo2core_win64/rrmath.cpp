// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 27

// log2tabled_bk<32> @ 14f32f420

int __cdecl oo2::log2tabled_bk<32>(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
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

// log2tabled_bk_32 @ 14f32f480

int __cdecl oo2::log2tabled_bk_32(uint param_1)

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

// rrClosestPow2 @ 14f32f500

uint __cdecl oo2::rrClosestPow2(uint param_1)

{
  if (param_1 < 3) {
    return param_1;
  }
  return 1 << ((char)((int)(float)param_1 + 0x4afb0cU >> 0x17) + 0x81U & 0x1f);
}

// rrClz32 @ 14f32f540

uint __cdecl oo2::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrClz64 @ 14f32f560

uint __cdecl oo2::rrClz64(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (int)lVar1;
}

// rrF32AsInt @ 14f32f580

uint __cdecl oo2::rrF32AsInt(float param_1)

{
  return (uint)param_1;
}

// rrGetBitLevel64_V @ 14f32f5a0

uint __cdecl oo2::rrGetBitLevel64_V(ulong64 param_1)

{
  longlong lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (param_1 != 0) {
    return (int)lVar1 + 1;
  }
  return 0;
}

// rrGetBitLevel_V @ 14f32f5c0

uint __cdecl oo2::rrGetBitLevel_V(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 != 0) {
    return iVar1 + 1;
  }
  return 0;
}

// rrIlog2round @ 14f32f5e0

uint __cdecl oo2::rrIlog2round(uint param_1)

{
  return ((int)(float)param_1 + 0x4afb0cU >> 0x17) - 0x7f;
}

// rrIlog2roundf @ 14f32f610

uint __cdecl oo2::rrIlog2roundf(float param_1)

{
  return ((int)param_1 + 0x4afb0cU >> 0x17) - 0x7f;
}

// rrIsPow2_64 @ 14f32f640

int __cdecl oo2::rrIsPow2_64(ulong64 param_1)

{
  return (int)((param_1 & param_1 - 1) == 0);
}

// rrIsPow2_A @ 14f32f660

int __cdecl oo2::rrIsPow2_A(ulong64 param_1)

{
  return (int)((param_1 & param_1 - 1) == 0);
}

// rrNextPow2 @ 14f32f680

uint __cdecl oo2::rrNextPow2(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 2) {
    return 1;
  }
  uVar2 = param_1 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    return 1 << ((char)iVar1 + 1U & 0x1f);
  }
  return 1;
}

// rrNextPow2_64 @ 14f32f6b0

ulong64 __cdecl oo2::rrNextPow2_64(ulong64 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = param_1 - 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  if (uVar1 != 0) {
    return 1L << ((char)lVar2 + 1U & 0x3f);
  }
  return 1;
}

// rrNextPow2_A @ 14f32f6f0

ulong64 __cdecl oo2::rrNextPow2_A(ulong64 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = param_1 - 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  if (uVar1 != 0) {
    return 1L << ((char)lVar2 + 1U & 0x3f);
  }
  return 1;
}

// rrPrevPow2 @ 14f32f730

uint __cdecl oo2::rrPrevPow2(uint param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 1 << ((byte)iVar1 & 0x1f);
}

// rrPrevPow2_64 @ 14f32f750

ulong64 __cdecl oo2::rrPrevPow2_64(ulong64 param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 1L << ((byte)lVar1 & 0x3f);
}

// rrPrevPow2_A @ 14f32f770

ulong64 __cdecl oo2::rrPrevPow2_A(ulong64 param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 1L << ((byte)lVar1 & 0x3f);
}

// rr_isnan @ 14f32f7a0

int __cdecl oo2::rr_isnan(double param_1)

{
  if ((((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)param_1 & 0xfffffffffffff) != 0)) {
    return 1;
  }
  return 0;
}

// rr_isnan_f @ 14f32f800

int __cdecl oo2::rr_isnan_f(float param_1)

{
  if ((((uint)param_1 & 0x7f800000) == 0x7f800000) && (((uint)param_1 & 0x7fffff) != 0)) {
    return 1;
  }
  return 0;
}

// rr_isnaninf @ 14f32f840

int __cdecl oo2::rr_isnaninf(double param_1)

{
  return (int)(((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000);
}

// rr_isnaninf_f @ 14f32f870

int __cdecl oo2::rr_isnaninf_f(float param_1)

{
  return (int)(((uint)param_1 & 0x7f800000) == 0x7f800000);
}

// rrlog2_F64 @ 14f32f8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl oo2::rrlog2_F64(double param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = (uint)(float)param_1 >> 0x17;
  fVar1 = (float)((uint)(float)param_1 & 0x7fffff | 0x3f800000);
  iVar3 = uVar2 - 0x7f;
  dVar4 = __real_3fc314dbf86a314e;
  if (___real_3ff5555555555555 < (double)fVar1) {
    iVar3 = uVar2 - 0x7e;
    fVar1 = (float)((double)fVar1 * __real_3fe0000000000000);
    dVar4 = __real_3fd00f2b9d6480f3;
  }
  dVar6 = (double)fVar1 - __real_3ff0000000000000;
  dVar5 = dVar6 * dVar6;
  return ((dVar5 * dVar4 + (__real_3fd5555555555555 - dVar6 * __real_3fd0000000000000)) *
          dVar5 * dVar6 + (dVar6 - dVar5 * __real_3fe0000000000000)) * __real_3ff71547652b82fe +
         (double)iVar3;
}

// rrlog2_U32_approx @ 14f32f970

float __cdecl oo2::rrlog2_U32_approx(uint param_1)

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

// rrlog2_U64_approx @ 14f32fa00

float __cdecl oo2::rrlog2_U64_approx(ulong64 param_1)

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

// rrlog2_bk @ 14f32fa10

float __cdecl oo2::rrlog2_bk(uint param_1)

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

// rrlog2neg_bk_32 @ 14f32faa0

float __cdecl oo2::rrlog2neg_bk_32(uint param_1)

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

