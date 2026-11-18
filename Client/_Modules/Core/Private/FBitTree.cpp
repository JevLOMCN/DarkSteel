// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// AllocBit @ 141680120

uint __thiscall FBitTree::AllocBit(FBitTree *this)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (*this->Bits == 0xffffffffffffffff) {
    return 0xffffffff;
  }
  uVar6 = 0;
  iVar8 = 0;
  uVar10 = 0;
  while( true ) {
    puVar2 = this->Bits;
    puVar1 = puVar2 + uVar10;
    if ((puVar1 < puVar2) ||
       ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar2) <=
        puVar1)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("At >= Bits && At < Bits + AllocationSize / 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0xf0,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    uVar7 = ~*puVar1;
    lVar3 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
      }
    }
    uVar9 = 0x40;
    if (uVar7 != 0) {
      uVar9 = (uint)lVar3;
    }
    if (0x3f < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LowestZeroBit < 64",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0xf2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    uVar6 = uVar6 * 0x40 + uVar9;
    if (iVar8 == this->Rows - 1) break;
    uVar10 = (ulonglong)((int)uVar10 * 0x40 + 1 + uVar9);
    iVar8 = iVar8 + 1;
  }
  if ((*puVar1 >> ((ulonglong)uVar9 & 0x3f) & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!((*At) & (1ull << LowestZeroBit))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                       ,0xf6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  uVar7 = *puVar1 | 1L << ((ulonglong)uVar9 & 0x3f);
  *puVar1 = uVar7;
  if ((iVar8 != 0) && (uVar7 == 0xffffffffffffffff)) {
    do {
      puVar2 = this->Bits;
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulonglong)(uVar9 >> 6);
      puVar1 = puVar2 + uVar10;
      if ((puVar1 < puVar2) ||
         ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar2)
          <= puVar1)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("At >= Bits && At < Bits + AllocationSize / 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                           ,0x101,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
      if (*puVar1 == 0xffffffffffffffff) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("*At != ((uint64) 0xffffffffffffffff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                           ,0x102,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
      uVar7 = *puVar1 | 1L << (uVar9 & 0x3f);
      *puVar1 = uVar7;
    } while ((uVar7 == 0xffffffffffffffff) && (iVar8 = iVar8 + -1, iVar8 != 0));
  }
  return uVar6;
}

// AllocBit @ 141680320

void __thiscall FBitTree::AllocBit(FBitTree *this,uint param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((this->DesiredCapacity <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < DesiredCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x123,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar3 = this->Bits;
  uVar2 = this->Rows;
  uVar8 = (ulonglong)((param_1 >> 6) + this->OffsetOfLastRow);
  puVar1 = puVar3 + uVar8;
  if (((puVar1 < puVar3) ||
      ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar3) <=
       puVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("At >= Bits && At < Bits + AllocationSize / 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x128,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((*puVar1 >> (param_1 & 0x3f) & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!((*At) & (1ull << Rem))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x129,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *puVar1 | 1L << (param_1 & 0x3f);
  *puVar1 = uVar6;
  while( true ) {
    if ((uVar6 != 0xffffffffffffffff) || (uVar2 = uVar2 - 1, uVar2 == 0)) {
      return;
    }
    puVar3 = this->Bits;
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)(uVar7 >> 6);
    uVar7 = uVar7 & 0x3f;
    puVar1 = puVar3 + uVar8;
    if (((puVar1 < puVar3) ||
        ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar3) <=
         puVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("At >= Bits && At < Bits + AllocationSize / 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                           ,0x132,L""), bVar5)) break;
    if (((*puVar1 >> uVar7 & 1) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!((*At) & (1ull << Rem))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                           ,0x133,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *puVar1 | 1L << uVar7;
    *puVar1 = uVar6;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// CountOnes @ 14168cc00

uint __thiscall FBitTree::CountOnes(FBitTree *this,uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  
  uVar3 = 0;
  puVar4 = this->Bits + this->OffsetOfLastRow;
  if (0x3f < param_1) {
    uVar2 = (ulonglong)(param_1 >> 6);
    do {
      uVar1 = *puVar4;
      param_1 = param_1 - 0x40;
      puVar4 = puVar4 + 1;
      uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
      uVar1 = (uVar1 >> 2 & 0x3333333333333333) + (uVar1 & 0x3333333333333333);
      uVar3 = uVar3 + (byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
      ;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_1 != 0) {
    uVar2 = *puVar4 << (0x40U - (char)param_1 & 0x3f);
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
    return (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + uVar3;
  }
  return uVar3;
}

// FBitTreeInit @ 141692530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBitTree::FBitTreeInit(FBitTree *this,uint param_1,void *param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  uint local_78 [10];
  uint local_50 [10];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  this->Bits = param_2;
  this->DesiredCapacity = param_1;
  this->Rows = 1;
  this->OffsetOfLastRow = 0;
  uVar9 = 0;
  this->Capacity = 0x40;
  local_78[0] = 0;
  uVar5 = 8;
  this->AllocationSize = 8;
  uVar4 = 1;
  local_50[0] = 1;
  if (0x40 < param_1) {
    uVar10 = 0x40;
    uVar3 = 1;
    do {
      this->Capacity = uVar10 << 6;
      this->OffsetOfLastRow = uVar5 >> 3;
      if ((9 < uVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Rows < 10",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                             ,0xbc,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = this->Rows;
      uVar5 = this->AllocationSize;
      uVar9 = this->OffsetOfLastRow;
      local_78[uVar4] = uVar9;
      uVar5 = uVar5 + uVar3 * 0x200;
      local_50[uVar4] = uVar3 * 0x40;
      uVar4 = uVar4 + 1;
      this->AllocationSize = uVar5;
      this->Rows = uVar4;
      uVar10 = this->Capacity;
      param_1 = this->DesiredCapacity;
      uVar3 = uVar3 * 0x40;
    } while (uVar10 < param_1);
    param_2 = this->Bits;
  }
  uVar5 = uVar5 + ((uVar5 + uVar9 * -8) * 8 - param_1 >> 6) * -8;
  this->AllocationSize = uVar5;
  if (((param_3 < uVar5) || (param_2 == (ulong64 *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationSize <= MemorySize && Bits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0xc6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  memset(this->Bits,-(uint)param_4 & 0xff,(ulonglong)this->AllocationSize);
  if (!param_4) {
    uVar4 = 0x40;
    iVar7 = this->Rows - 2;
    if (-1 < iVar7) {
      lVar6 = (longlong)iVar7 * 4;
      do {
        uVar5 = *(uint *)((longlong)local_50 + lVar6);
        uVar9 = uVar5 * 0x40 - ((this->DesiredCapacity - 1) + uVar4) / uVar4;
        uVar10 = uVar9 & 0x3f;
        uVar9 = uVar9 >> 6;
        if (uVar5 - uVar9 < uVar5) {
          uVar3 = *(int *)((longlong)local_78 + lVar6) + (uVar5 - uVar9);
          uVar8 = (ulonglong)uVar9;
          do {
            this->Bits[uVar3] = 0xffffffffffffffff;
            uVar3 = uVar3 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (uVar10 != 0) {
          this->Bits[(*(int *)((longlong)local_78 + lVar6) - uVar9) + -1 + uVar5] =
               -1L << (0x40U - (char)uVar10 & 0x3f);
        }
        uVar4 = uVar4 << 6;
        lVar6 = lVar6 + -4;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    uVar4 = this->DesiredCapacity & 0x3f;
    if (uVar4 != 0) {
      this->Bits[(this->AllocationSize >> 3) - 1] = -1L << (sbyte)uVar4;
    }
  }
  return;
}

// FreeBit @ 141696270

void __thiscall FBitTree::FreeBit(FBitTree *this,uint param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((this->DesiredCapacity <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < DesiredCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x1a1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar3 = this->Bits;
  uVar2 = this->Rows;
  uVar8 = (ulonglong)((param_1 >> 6) + this->OffsetOfLastRow);
  puVar1 = puVar3 + uVar8;
  if (((puVar1 < puVar3) ||
      ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar3) <=
       puVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("At >= Bits && At < Bits + AllocationSize / 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x1a6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *puVar1;
  if (((uVar4 >> (param_1 & 0x3f) & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*At) & (1ull << Rem)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x1a8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *puVar1 = *puVar1 & ~(1L << (param_1 & 0x3f));
  while( true ) {
    if ((uVar4 != 0xffffffffffffffff) || (uVar2 = uVar2 - 1, uVar2 == 0)) {
      return;
    }
    puVar3 = this->Bits;
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)(uVar7 >> 6);
    puVar1 = puVar3 + uVar8;
    if (((puVar1 < puVar3) ||
        ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar3) <=
         puVar1)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("At >= Bits && At < Bits + AllocationSize / 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                           ,0x1b1,L""), bVar6)) break;
    uVar4 = *puVar1;
    *puVar1 = uVar4 & ~(1L << (uVar7 & 0x3f));
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// IsAllocated @ 1416b0aa0

bool __thiscall FBitTree::IsAllocated(FBitTree *this,uint param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (this->DesiredCapacity <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < DesiredCapacity",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                       ,0x118,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  puVar2 = this->Bits;
  puVar1 = puVar2 + ((param_1 >> 6) + this->OffsetOfLastRow);
  if ((puVar1 < puVar2) ||
     ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar2) <=
      puVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("At >= Bits && At < Bits + AllocationSize / 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                       ,0x11d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return (*puVar1 >> (param_1 & 0x3f) & 1) != 0;
}

// NextAllocBit @ 1416b4680

uint __thiscall FBitTree::NextAllocBit(FBitTree *this,uint param_1)

{
  ulonglong *puVar1;
  ulong64 *puVar2;
  ulonglong *puVar3;
  ulong64 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  if (*this->Bits == 0xffffffffffffffff) {
    return 0xffffffff;
  }
  if ((this->DesiredCapacity <= param_1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < DesiredCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x160,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return uVar8;
  }
  puVar3 = this->Bits;
  iVar12 = this->Rows - 1;
  uVar13 = (ulonglong)((param_1 >> 6) + this->OffsetOfLastRow);
  uVar8 = param_1 & 0x3f;
  puVar1 = puVar3 + uVar13;
  if (((puVar1 < puVar3) ||
      ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar3) <=
       puVar1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("At >= Bits && At < Bits + AllocationSize / 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x165,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return uVar8;
  }
  if ((*puVar1 >> uVar8 & 1) != 0) {
    uVar10 = *puVar1 | 0xffffffffffffffffU >> (0x3fU - (char)uVar8 & 0x3f);
    if (uVar10 != 0xffffffffffffffff) {
      uVar10 = ~uVar10;
      lVar5 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
        }
      }
      uVar14 = 0x40;
      if (uVar10 != 0) {
        uVar14 = (uint)lVar5;
      }
      if ((0x3f < uVar14) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LowestZeroBit < 64",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                             ,0x171,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      return param_1 + (uVar14 - uVar8);
    }
    do {
      if (iVar12 == 0) {
        return 0xffffffff;
      }
      puVar3 = this->Bits;
      iVar12 = iVar12 + -1;
      uVar8 = (int)uVar13 - 1;
      uVar13 = (ulonglong)(uVar8 >> 6);
      puVar1 = puVar3 + uVar13;
      if (((puVar1 < puVar3) ||
          ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar3)
           <= puVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("At >= Bits && At < Bits + AllocationSize / 8",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                             ,0x17e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      uVar11 = 0xffffffffffffffffU >> (0x3f - ((byte)uVar8 & 0x3f) & 0x3f) | *puVar1;
    } while (uVar11 == 0xffffffffffffffff);
    while( true ) {
      uVar9 = ~uVar11;
      uVar10 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
        }
      }
      uVar15 = 0x40;
      if (uVar9 != 0) {
        uVar15 = uVar10 & 0xffffffff;
      }
      uVar8 = (uint)uVar15;
      if ((0x3f < uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LowestZeroBit < 64",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                             ,0x188,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      if (iVar12 == this->Rows - 1) break;
      puVar4 = this->Bits;
      uVar13 = (ulonglong)((int)uVar13 * 0x40 + 1 + uVar8);
      puVar2 = puVar4 + uVar13;
      if (((puVar2 < puVar4) ||
          ((ulong64 *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar4) <=
           puVar2)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("At >= Bits && At < Bits + AllocationSize / 8",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                             ,0x193,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      uVar11 = *puVar2;
      iVar12 = iVar12 + 1;
    }
    if (((uVar11 >> (uVar15 & 0x3f) & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(LocalAt & (1ull << LowestZeroBit))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                           ,0x18b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    param_1 = ((int)uVar13 - this->OffsetOfLastRow) * 0x40 + uVar8;
    if ((this->DesiredCapacity <= param_1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result < DesiredCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                           ,0x18d,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
  }
  return param_1;
}

// NextAllocBit @ 1416b4960

uint __thiscall FBitTree::NextAllocBit(FBitTree *this)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  
  if (*this->Bits == 0xffffffffffffffff) {
    return 0xffffffff;
  }
  uVar6 = 0;
  iVar8 = 0;
  uVar9 = 0;
  while( true ) {
    puVar2 = this->Bits;
    puVar1 = puVar2 + uVar9;
    if ((puVar1 < puVar2) ||
       ((ulonglong *)(((ulonglong)this->AllocationSize & 0xfffffffffffffff8) + (longlong)puVar2) <=
        puVar1)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("At >= Bits && At < Bits + AllocationSize / 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x14a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    uVar7 = ~*puVar1;
    lVar3 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
      }
    }
    uVar10 = 0x40;
    if (uVar7 != 0) {
      uVar10 = (uint)lVar3;
    }
    if (0x3f < uVar10) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LowestZeroBit < 64",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x14c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    uVar6 = uVar6 * 0x40 + uVar10;
    if (iVar8 == this->Rows - 1) break;
    uVar9 = (ulonglong)((int)uVar9 * 0x40 + 1 + uVar10);
    iVar8 = iVar8 + 1;
  }
  if ((*puVar1 >> ((ulonglong)uVar10 & 0x3f) & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!((*At) & (1ull << LowestZeroBit))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                       ,0x150,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  return uVar6;
}

// Slow_NextAllocBits @ 1416c16e0

uint __thiscall FBitTree::Slow_NextAllocBits(FBitTree *this,uint param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar6;
  
  if ((((param_1 & param_1 - 1) != 0) && ((param_1 & 0x3f) != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(NumBits) || NumBits % 64 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                         ,0x1da,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = this->OffsetOfLastRow;
  uVar5 = (int)(param_2 >> 6) + uVar3;
  uVar6 = (ulonglong)uVar5;
  uVar4 = (this->DesiredCapacity >> 6) + uVar3;
  if (param_1 < 0x40) {
    if (uVar5 < uVar4) {
      do {
        uVar5 = 0;
        uVar7 = (1L << ((byte)param_1 & 0x3f)) - 1;
        uVar9 = (uint)(0x40 / (ulonglong)param_1);
        if (uVar9 != 0) {
          do {
            if (((uVar7 & this->Bits[uVar6]) == 0) &&
               (uVar8 = ((int)uVar6 - uVar3) * 0x40 + uVar5 * param_1, param_2 <= uVar8)) {
              return uVar8;
            }
            uVar5 = uVar5 + 1;
            uVar7 = uVar7 << ((byte)param_1 & 0x3f);
          } while (uVar5 < uVar9);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar4);
    }
  }
  else {
    uVar9 = 0;
    if (uVar5 < uVar4) {
      do {
        uVar5 = uVar9 + 1;
        uVar9 = 0;
        if (this->Bits[uVar6] == 0) {
          uVar9 = uVar5;
        }
        if (uVar9 == param_1 >> 6) {
          return (((int)uVar6 - ((param_1 >> 6) - 1)) - uVar3) * 0x40;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar4);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedCommon.cpp"
                     ,0x215,L"");
  if (!bVar2) {
    return 0xffffffff;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

