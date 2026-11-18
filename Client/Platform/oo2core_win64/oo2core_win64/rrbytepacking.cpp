// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 21

// check_value_cast<unsigned___int64,__int64> @ 14f3924e0

ulong64 __cdecl oo2::check_value_cast<unsigned___int64,__int64>(long64 *param_1)

{
  return *param_1;
}

// rrFloatPackToInt @ 14f3924f0

int __cdecl oo2::rrFloatPackToInt(float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = 1 << ((byte)param_4 & 0x1f);
  fVar3 = ((float)iVar2 / (param_3 - param_2)) * (param_1 - param_2);
  if (0.0 <= fVar3) {
    iVar1 = (int)(fVar3 + __real_3f000000);
    if (iVar2 + -1 <= (int)(fVar3 + __real_3f000000)) {
      iVar1 = iVar2 + -1;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  iVar1 = (int)(fVar3 - __real_3f000000);
  if (iVar2 + -1 <= (int)(fVar3 - __real_3f000000)) {
    iVar1 = iVar2 + -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// rrFloatUnpackInt @ 14f392560

float __cdecl oo2::rrFloatUnpackInt(int param_1,float param_2,float param_3,int param_4)

{
  return (__real_3f800000 / (float)(1 << ((byte)param_4 & 0x1f))) * (param_3 - param_2) *
         (float)param_1;
}

// rrGet64VariableModPow2 @ 14f3925a0

uchar * __cdecl
oo2::rrGet64VariableModPow2(uchar *param_1,uchar *param_2,ulong64 *param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = uVar3;
  while( true ) {
    if (param_2 <= param_1) {
      return (uchar *)0x0;
    }
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    lVar1 = (ulonglong)bVar2 - (1L << ((byte)param_4 & 0x3f));
    bVar2 = (byte)uVar4;
    if (-1 < lVar1) break;
    uVar4 = (ulonglong)(uint)((int)uVar4 + param_4);
    uVar3 = uVar3 + (lVar1 + 0x100 << (bVar2 & 0x3f));
  }
  *param_3 = (lVar1 << (bVar2 & 0x3f)) + uVar3;
  return param_1;
}

// rrGet64VariableModPow2SeriesWB @ 14f392620

uchar * __cdecl
oo2::rrGet64VariableModPow2SeriesWB
          (uchar *param_1,uchar *param_2,ulong64 *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  uVar8 = 1L << ((byte)param_4 & 0x3f);
  if (param_1 < param_2 + -1) {
    pbVar1 = param_1 + 2;
    uVar7 = (ulonglong)CONCAT11(*param_1,param_1[1]);
    if (uVar7 < uVar8) {
      pbVar6 = (byte *)0x0;
      pbVar5 = pbVar1;
      pbVar9 = pbVar6;
      pbVar4 = pbVar6;
      while (pbVar1 = pbVar6, pbVar5 < param_2) {
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        lVar2 = (ulonglong)bVar3 - (1L << ((byte)param_5 & 0x3f));
        bVar3 = (byte)pbVar4;
        if (-1 < lVar2) {
          pbVar6 = pbVar9 + (lVar2 << (bVar3 & 0x3f));
          pbVar1 = pbVar5;
          break;
        }
        pbVar4 = (byte *)(ulonglong)(uint)((int)pbVar4 + param_5);
        pbVar9 = pbVar9 + (lVar2 + 0x100 << (bVar3 & 0x3f));
      }
      *param_3 = ((longlong)pbVar6 << ((byte)param_4 & 0x3f)) + uVar7 + (0x10000 - uVar8);
    }
    else {
      *param_3 = uVar7 - uVar8;
    }
  }
  else {
    pbVar1 = (byte *)0x0;
  }
  return pbVar1;
}

// rrGetVariableModPow2 @ 14f392710

uchar * __cdecl oo2::rrGetVariableModPow2(uchar *param_1,uchar *param_2,uint *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = iVar3;
  while( true ) {
    if (param_2 <= param_1) {
      return (uchar *)0x0;
    }
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    iVar1 = (uint)bVar2 - (1 << ((byte)param_4 & 0x1f));
    bVar2 = (byte)iVar3;
    if (-1 < iVar1) break;
    iVar3 = iVar3 + param_4;
    iVar4 = iVar4 + (iVar1 + 0x100 << (bVar2 & 0x1f));
  }
  *param_3 = (iVar1 << (bVar2 & 0x1f)) + iVar4;
  return param_1;
}

// rrGetVariableModPow2Series2 @ 14f392780

uchar * __cdecl
oo2::rrGetVariableModPow2Series2
          (uchar *param_1,uchar *param_2,uint *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (param_2 <= param_1) {
    return (uchar *)0x0;
  }
  pbVar1 = param_1 + 1;
  uVar7 = (uint)*param_1 + (-1 << ((byte)param_4 & 0x1f));
  if (-1 < (int)uVar7) {
    *param_3 = uVar7;
    return pbVar1;
  }
  pbVar2 = (byte *)0x0;
  iVar6 = 0;
  pbVar4 = pbVar2;
  pbVar8 = pbVar2;
  do {
    if (param_2 <= pbVar1) {
LAB_14f392808:
      *param_3 = uVar7 + 0x100 + (iVar6 << ((byte)param_4 & 0x1f));
      return pbVar2;
    }
    bVar3 = *pbVar1;
    pbVar1 = pbVar1 + 1;
    iVar5 = (uint)bVar3 - (1 << ((byte)param_5 & 0x1f));
    bVar3 = (byte)pbVar4;
    if (-1 < iVar5) {
      iVar6 = (int)pbVar8 + (iVar5 << (bVar3 & 0x1f));
      pbVar2 = pbVar1;
      goto LAB_14f392808;
    }
    pbVar4 = (byte *)(ulonglong)(uint)((int)pbVar4 + param_5);
    pbVar8 = (byte *)(ulonglong)(uint)((int)pbVar8 + (iVar5 + 0x100 << (bVar3 & 0x1f)));
  } while( true );
}

// rrGetVariableModPow2Series3 @ 14f392840

uchar * __cdecl
oo2::rrGetVariableModPow2Series3
          (uchar *param_1,uchar *param_2,uint *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_res20;
  
  if (param_2 <= param_1) {
    return (uchar *)0x0;
  }
  pbVar4 = param_1 + 1;
  uVar6 = (uint)*param_1 + (-1 << ((byte)param_4 & 0x1f));
  if (-1 < (int)uVar6) {
    *param_3 = uVar6;
    return pbVar4;
  }
  if (pbVar4 < param_2) {
    pbVar5 = param_1 + 2;
    local_res20 = (uint)*pbVar4 + (-1 << ((byte)param_5 & 0x1f));
    if (local_res20 < 0) {
      iVar8 = 0;
      pbVar4 = pbVar5;
      iVar7 = iVar8;
      pbVar3 = (byte *)0x0;
      while (pbVar5 = (byte *)0x0, pbVar4 < param_2) {
        pbVar5 = pbVar4 + 1;
        iVar1 = (uint)*pbVar4 - (1 << ((byte)param_6 & 0x1f));
        bVar2 = (byte)pbVar3;
        if (-1 < iVar1) {
          iVar8 = (iVar1 << (bVar2 & 0x1f)) + iVar7;
          break;
        }
        pbVar3 = (byte *)(ulonglong)(uint)((int)pbVar3 + param_6);
        iVar7 = iVar7 + (iVar1 + 0x100 << (bVar2 & 0x1f));
        pbVar4 = pbVar5;
      }
      local_res20 = local_res20 + 0x100 + (iVar8 << ((byte)param_5 & 0x1f));
    }
  }
  else {
    pbVar5 = (byte *)0x0;
  }
  *param_3 = uVar6 + 0x100 + (local_res20 << ((byte)param_4 & 0x1f));
  return pbVar5;
}

// rrGetVariableModPow2SeriesWB @ 14f392960

uchar * __cdecl
oo2::rrGetVariableModPow2SeriesWB
          (uchar *param_1,uchar *param_2,uint *param_3,int param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  
  iVar9 = 1 << ((byte)param_4 & 0x1f);
  if (param_1 < param_2 + -1) {
    pbVar2 = param_1 + 2;
    uVar8 = (uint)CONCAT11(*param_1,param_1[1]);
    if ((int)uVar8 < iVar9) {
      pbVar7 = (byte *)0x0;
      iVar6 = 0;
      pbVar5 = pbVar2;
      pbVar4 = pbVar7;
      pbVar10 = pbVar7;
      while (pbVar2 = pbVar7, pbVar5 < param_2) {
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        iVar1 = (uint)bVar3 - (1 << ((byte)param_5 & 0x1f));
        bVar3 = (byte)pbVar4;
        if (-1 < iVar1) {
          iVar6 = (int)pbVar10 + (iVar1 << (bVar3 & 0x1f));
          pbVar2 = pbVar5;
          break;
        }
        pbVar4 = (byte *)(ulonglong)(uint)((int)pbVar4 + param_5);
        pbVar10 = (byte *)(ulonglong)(uint)((int)pbVar10 + (iVar1 + 0x100 << (bVar3 & 0x1f)));
      }
      *param_3 = (iVar6 << ((byte)param_4 & 0x1f)) + uVar8 + (0x10000 - iVar9);
    }
    else {
      *param_3 = uVar8 - iVar9;
    }
  }
  else {
    pbVar2 = (byte *)0x0;
  }
  return pbVar2;
}

// rrGetVariableModPow2SeriesWBA @ 14f392a40

uchar * __cdecl
oo2::rrGetVariableModPow2SeriesWBA
          (uchar *param_1,uchar *param_2,long64 *param_3,int param_4,int param_5)

{
  uchar *puVar1;
  ulong64 local_res18 [2];
  
  puVar1 = rrGet64VariableModPow2SeriesWB(param_1,param_2,local_res18,param_4,param_5);
  *param_3 = local_res18[0];
  return puVar1;
}

// rrGetVariableModPow2_FileSize @ 14f392a70

uchar * __cdecl oo2::rrGetVariableModPow2_FileSize(uchar *param_1,uchar *param_2,long64 *param_3)

{
  uchar *puVar1;
  
  puVar1 = rrGet64VariableModPow2SeriesWB(param_1,param_2,(ulong64 *)param_3,0xd,4);
  return puVar1;
}

// rrPut64VariableModPow2 @ 14f392aa0

uchar * __cdecl oo2::rrPut64VariableModPow2(uchar *param_1,ulong64 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = 1L << ((byte)param_3 & 0x3f);
  uVar2 = 0x100 - lVar4;
  cVar3 = (char)lVar4;
  if (uVar2 <= param_2) {
    do {
      uVar1 = param_2 - uVar2;
      param_2 = uVar1 >> ((byte)param_3 & 0x3f);
      *param_1 = cVar3 - 1U & (byte)uVar1;
      param_1 = param_1 + 1;
    } while (uVar2 <= param_2);
  }
  *param_1 = cVar3 + (char)param_2;
  return param_1 + 1;
}

// rrPut64VariableModPow2SeriesWB @ 14f392b00

uchar * __cdecl
oo2::rrPut64VariableModPow2SeriesWB(uchar *param_1,ulong64 param_2,int param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  short sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  char cVar7;
  
  lVar1 = 1L << ((byte)param_3 & 0x3f);
  if (param_2 < 0x10000U - lVar1) {
    sVar3 = (short)param_2 + (short)lVar1;
    *param_1 = (uchar)((ushort)sVar3 >> 8);
    param_1[1] = (uchar)sVar3;
    return param_1 + 2;
  }
  uVar4 = param_2 - (0x10000U - lVar1);
  uVar2 = lVar1 - 1U & uVar4;
  param_1[1] = (uchar)uVar2;
  uVar4 = uVar4 >> ((byte)param_3 & 0x3f);
  *param_1 = (uchar)(uVar2 >> 8);
  lVar1 = 1L << ((byte)param_4 & 0x3f);
  pbVar6 = param_1 + 2;
  uVar2 = 0x100 - lVar1;
  cVar7 = (char)lVar1;
  if (uVar2 <= uVar4) {
    do {
      uVar5 = uVar4 - uVar2;
      uVar4 = uVar5 >> ((byte)param_4 & 0x3f);
      *pbVar6 = cVar7 - 1U & (byte)uVar5;
      pbVar6 = pbVar6 + 1;
    } while (uVar2 <= uVar4);
  }
  *pbVar6 = cVar7 + (char)uVar4;
  return pbVar6 + 1;
}

// rrPutVariableModPow2 @ 14f392bb0

uchar * __cdecl oo2::rrPutVariableModPow2(uchar *param_1,uint param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 1 << ((byte)param_3 & 0x1f);
  uVar1 = 0x100 - iVar3;
  cVar2 = (char)iVar3;
  if (uVar1 <= param_2) {
    do {
      *param_1 = cVar2 - 1U & (byte)(param_2 - uVar1);
      param_1 = param_1 + 1;
      param_2 = param_2 - uVar1 >> ((byte)param_3 & 0x1f);
    } while (uVar1 <= param_2);
  }
  *param_1 = cVar2 + (char)param_2;
  return param_1 + 1;
}

// rrPutVariableModPow2Series2 @ 14f392c20

uchar * __cdecl
oo2::rrPutVariableModPow2Series2(uchar *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  iVar2 = 1 << ((byte)param_3 & 0x1f);
  uVar3 = 0x100 - iVar2;
  pbVar5 = param_1 + 1;
  cVar1 = (char)iVar2;
  if (param_2 < uVar3) {
    *param_1 = cVar1 + (char)param_2;
    return pbVar5;
  }
  uVar3 = param_2 - uVar3;
  uVar4 = uVar3 >> ((byte)param_3 & 0x1f);
  iVar2 = 1 << ((byte)param_4 & 0x1f);
  uVar6 = 0x100 - iVar2;
  *param_1 = cVar1 - 1U & (byte)uVar3;
  cVar1 = (char)iVar2;
  if (uVar6 <= uVar4) {
    do {
      *pbVar5 = cVar1 - 1U & (byte)(uVar4 - uVar6);
      pbVar5 = pbVar5 + 1;
      uVar4 = uVar4 - uVar6 >> ((byte)param_4 & 0x1f);
    } while (uVar6 <= uVar4);
  }
  *pbVar5 = cVar1 + (char)uVar4;
  return pbVar5 + 1;
}

// rrPutVariableModPow2Series3 @ 14f392cc0

uchar * __cdecl
oo2::rrPutVariableModPow2Series3(uchar *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  
  iVar5 = 1 << ((byte)param_3 & 0x1f);
  uVar2 = 0x100 - iVar5;
  pbVar1 = param_1 + 1;
  cVar4 = (char)iVar5;
  if (param_2 < uVar2) {
    *param_1 = cVar4 + (char)param_2;
    return pbVar1;
  }
  uVar2 = param_2 - uVar2;
  uVar3 = uVar2 >> ((byte)param_3 & 0x1f);
  pbVar6 = param_1 + 2;
  *param_1 = cVar4 - 1U & (byte)uVar2;
  iVar5 = 1 << ((byte)param_4 & 0x1f);
  uVar2 = 0x100 - iVar5;
  cVar4 = (char)iVar5;
  if (uVar3 < uVar2) {
    *pbVar1 = cVar4 + (char)uVar3;
    return pbVar6;
  }
  uVar3 = uVar3 - uVar2;
  uVar2 = uVar3 >> ((byte)param_4 & 0x1f);
  iVar5 = 1 << ((byte)param_5 & 0x1f);
  uVar7 = 0x100 - iVar5;
  *pbVar1 = cVar4 - 1U & (byte)uVar3;
  cVar4 = (char)iVar5;
  if (uVar7 <= uVar2) {
    do {
      uVar3 = uVar2 - uVar7;
      uVar2 = uVar3 >> ((byte)param_5 & 0x1f);
      *pbVar6 = cVar4 - 1U & (byte)uVar3;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 <= uVar2);
  }
  *pbVar6 = cVar4 + (char)uVar2;
  return pbVar6 + 1;
}

// rrPutVariableModPow2SeriesWB @ 14f392da0

uchar * __cdecl
oo2::rrPutVariableModPow2SeriesWB(uchar *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  char cVar6;
  
  iVar1 = 1 << ((byte)param_3 & 0x1f);
  if (param_2 < 0x10000U - iVar1) {
    sVar3 = (short)param_2 + (short)iVar1;
    *param_1 = (uchar)((ushort)sVar3 >> 8);
    param_1[1] = (uchar)sVar3;
    return param_1 + 2;
  }
  uVar4 = param_2 - (0x10000U - iVar1);
  uVar2 = iVar1 - 1U & uVar4;
  param_1[1] = (uchar)uVar2;
  uVar4 = uVar4 >> ((byte)param_3 & 0x1f);
  *param_1 = (uchar)(uVar2 >> 8);
  iVar1 = 1 << ((byte)param_4 & 0x1f);
  pbVar5 = param_1 + 2;
  uVar2 = 0x100 - iVar1;
  cVar6 = (char)iVar1;
  if (uVar2 <= uVar4) {
    do {
      *pbVar5 = cVar6 - 1U & (byte)(uVar4 - uVar2);
      pbVar5 = pbVar5 + 1;
      uVar4 = uVar4 - uVar2 >> ((byte)param_4 & 0x1f);
    } while (uVar2 <= uVar4);
  }
  *pbVar5 = cVar6 + (char)uVar4;
  return pbVar5 + 1;
}

// rrPutVariableModPow2SeriesWBA @ 14f392e50

uchar * __cdecl
oo2::rrPutVariableModPow2SeriesWBA(uchar *param_1,long64 param_2,int param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  short sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  char cVar7;
  
  lVar1 = 1L << ((byte)param_3 & 0x3f);
  if ((ulonglong)param_2 < 0x10000U - lVar1) {
    sVar3 = (short)param_2 + (short)lVar1;
    *param_1 = (uchar)((ushort)sVar3 >> 8);
    param_1[1] = (uchar)sVar3;
    return param_1 + 2;
  }
  uVar4 = param_2 - (0x10000U - lVar1);
  uVar2 = lVar1 - 1U & uVar4;
  param_1[1] = (uchar)uVar2;
  uVar4 = uVar4 >> ((byte)param_3 & 0x3f);
  *param_1 = (uchar)(uVar2 >> 8);
  lVar1 = 1L << ((byte)param_4 & 0x3f);
  pbVar6 = param_1 + 2;
  uVar2 = 0x100 - lVar1;
  cVar7 = (char)lVar1;
  if (uVar2 <= uVar4) {
    do {
      uVar5 = uVar4 - uVar2;
      uVar4 = uVar5 >> ((byte)param_4 & 0x3f);
      *pbVar6 = cVar7 - 1U & (byte)uVar5;
      pbVar6 = pbVar6 + 1;
    } while (uVar2 <= uVar4);
  }
  *pbVar6 = cVar7 + (char)uVar4;
  return pbVar6 + 1;
}

// rrPutVariableModPow2_FileSize @ 14f392e60

uchar * __cdecl oo2::rrPutVariableModPow2_FileSize(uchar *param_1,long64 param_2)

{
  uchar *puVar1;
  
  puVar1 = rrPut64VariableModPow2SeriesWB(param_1,param_2,0xd,4);
  return puVar1;
}

// rr_ftoi_round @ 14f392e80

int __cdecl oo2::rr_ftoi_round(float param_1)

{
  if (0.0 <= param_1) {
    return (int)(param_1 + __real_3f000000);
  }
  return (int)(param_1 - __real_3f000000);
}

// rr_ftoi_trunc @ 14f392eb0

int __cdecl oo2::rr_ftoi_trunc(float param_1)

{
  return (int)param_1;
}

