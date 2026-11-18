// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 11

// rrlog2neg_bk<32> @ 14ff4d660

float __cdecl oo2net::rrlog2neg_bk<32>(uint param_1)

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
  return (float)(int)(((0x20 - iVar1) * 0x2000 -
                      (int)((ulonglong)
                            ((uint)c_log2table_bk[uVar2 + 1] - (uint)c_log2table_bk[uVar2]) *
                            (ulonglong)(uVar3 << 6) + 0x9fffffff >> 0x20)) -
                     (uint)c_log2table_bk[uVar2]) * __real_39000000;
}

// rrArithDecodeGetBitsInState @ 14ff4d6d0

float __cdecl oo2net::rrArithDecodeGetBitsInState(rrArithDecoder *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1->range;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar3 = uVar3 << ((byte)(0x20 - iVar1) & 0x1f);
  uVar2 = uVar3 >> 0x1a;
  return (float)(int)(((0x20 - iVar1) * 0x2000 -
                      (int)((ulonglong)
                            ((uint)c_log2table_bk[uVar2 + 1] - (uint)c_log2table_bk[uVar2]) *
                            (ulonglong)(uVar3 << 6) + 0x9fffffff >> 0x20)) -
                     (uint)c_log2table_bk[uVar2]) * __real_39000000 +
         (float)(longlong)(param_1->ptr + (-4 - (longlong)param_1->start)) * __real_41000000;
}

// rrArithDecodeInit @ 14ff4d770

void __cdecl oo2net::rrArithDecodeInit(rrArithDecoder *param_1,void *param_2)

{
  byte bVar1;
  uchar uVar2;
  ushort uVar3;
  uint3 uVar4;
  
  param_1->ptr = param_2;
  param_1->start = param_2;
  param_1->range = 0xffffffff;
  bVar1 = *(byte *)param_2;
  param_1->code = (uint)bVar1 << 8;
  param_1->ptr = (uchar *)((longlong)param_2 + 1);
  uVar3 = CONCAT11(bVar1,*(uchar *)((longlong)param_2 + 1));
  param_1->ptr = (uchar *)((longlong)param_2 + 2);
  param_1->code = (uint)uVar3 << 8;
  uVar4 = CONCAT21(uVar3,*(uchar *)((longlong)param_2 + 2));
  param_1->ptr = (uchar *)((longlong)param_2 + 3);
  param_1->code = (uint)uVar4 << 8;
  uVar2 = *(uchar *)((longlong)param_2 + 3);
  param_1->ptr = (uchar *)((longlong)param_2 + 4);
  param_1->code = CONCAT31(uVar4,uVar2);
  return;
}

// rrArithDecodeTellPos @ 14ff4d7e0

long64 __cdecl oo2net::rrArithDecodeTellPos(rrArithDecoder *param_1)

{
  uint uVar1;
  long64 lVar2;
  
  lVar2 = (longlong)param_1->ptr - (longlong)param_1->start;
  uVar1 = param_1->range;
  if (0x2000000 < uVar1) {
    return lVar2 + -3;
  }
  if (0x20000 < uVar1) {
    return lVar2 + -2;
  }
  if (0x200 < uVar1) {
    lVar2 = lVar2 + -1;
  }
  return lVar2;
}

// rrArithEncodeFlush @ 14ff4d820

long64 __cdecl oo2net::rrArithEncodeFlush(rrArithEncoder *param_1)

{
  uint uVar1;
  uchar uVar2;
  uint uVar3;
  uchar *puVar4;
  
  uVar3 = param_1->low;
  if (0x2000000 < param_1->range) {
    if (uVar3 + 0x1000000 < uVar3) {
      puVar4 = param_1->ptr + -1;
      uVar2 = *puVar4;
      while (uVar2 == 0xff) {
        *puVar4 = '\0';
        puVar4 = puVar4 + -1;
        uVar2 = *puVar4;
      }
      *puVar4 = uVar2 + '\x01';
    }
    *param_1->ptr = (uchar)(uVar3 + 0x1000000 >> 0x18);
    param_1->ptr = param_1->ptr + 1;
    return (longlong)param_1->ptr - (longlong)param_1->start;
  }
  uVar1 = uVar3 + 0x10000;
  if (uVar1 < uVar3) {
    puVar4 = param_1->ptr + -1;
    uVar2 = param_1->ptr[-1];
    while (uVar2 == 0xff) {
      *puVar4 = '\0';
      puVar4 = puVar4 + -1;
      uVar2 = *puVar4;
    }
    *puVar4 = uVar2 + '\x01';
  }
  *param_1->ptr = (uchar)(uVar1 >> 0x18);
  param_1->ptr = param_1->ptr + 1;
  *param_1->ptr = (uchar)(uVar1 >> 0x10);
  param_1->ptr = param_1->ptr + 1;
  return (longlong)param_1->ptr - (longlong)param_1->start;
}

// rrArithEncodeGetBitsInState @ 14ff4d8e0

float __cdecl oo2net::rrArithEncodeGetBitsInState(rrArithEncoder *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1->range;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar3 = uVar3 << ((byte)(0x20 - iVar1) & 0x1f);
  uVar2 = uVar3 >> 0x1a;
  return (float)(int)(((0x20 - iVar1) * 0x2000 -
                      (int)((ulonglong)
                            ((uint)c_log2table_bk[uVar2 + 1] - (uint)c_log2table_bk[uVar2]) *
                            (ulonglong)(uVar3 << 6) + 0x9fffffff >> 0x20)) -
                     (uint)c_log2table_bk[uVar2]) * __real_39000000 +
         (float)((longlong)param_1->ptr - (longlong)param_1->start) * __real_41000000;
}

// rrArithEncodeInit @ 14ff4d980

void __cdecl oo2net::rrArithEncodeInit(rrArithEncoder *param_1,void *param_2)

{
  param_1->ptr = param_2;
  param_1->start = param_2;
  param_1->low = 0;
  param_1->range = 0xffffffff;
  return;
}

// rrArithEncodePropagateCarry @ 14ff4d9a0

void __cdecl oo2net::rrArithEncodePropagateCarry(rrArithEncoder *param_1)

{
  uchar uVar1;
  uchar *puVar2;
  
  puVar2 = param_1->ptr + -1;
  uVar1 = param_1->ptr[-1];
  while (uVar1 == 0xff) {
    *puVar2 = '\0';
    puVar2 = puVar2 + -1;
    uVar1 = *puVar2;
  }
  *puVar2 = uVar1 + '\x01';
  return;
}

// rrArithEncodeTellPos @ 14ff4d9e0

long64 __cdecl oo2net::rrArithEncodeTellPos(rrArithEncoder *param_1)

{
  uint uVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar2 = param_1->ptr;
  puVar3 = param_1->start;
  uVar1 = param_1->range;
  if (0x2000000 < uVar1) {
    return (long64)(puVar2 + (1 - (longlong)puVar3));
  }
  if (0x20000 < uVar1) {
    return (long64)(puVar2 + (2 - (longlong)puVar3));
  }
  return (long64)(puVar2 + (((ulonglong)(uVar1 < 0x201) + 3) - (longlong)puVar3));
}

// rrClz32 @ 14ff4da30

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

// rrPtrDiff @ 14ff4da50

long64 __cdecl oo2net::rrPtrDiff(long64 param_1)

{
  return param_1;
}

