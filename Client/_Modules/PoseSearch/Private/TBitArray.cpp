// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// Add @ 14a8b0670

int __thiscall
TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::Add
          (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *this,bool param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = AddUninitialized(this,1);
  pTVar2 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
           (this->AllocatorInstance).SecondaryData.Data;
  if (pTVar2 != (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
    this = pTVar2;
  }
  uVar6 = iVar3 >> 0x1f & 0x1f;
  iVar4 = iVar3 + uVar6;
  bVar5 = ((byte)iVar4 & 0x1f) - (char)uVar6;
  puVar1 = (this->AllocatorInstance).InlineData + (longlong)(iVar4 >> 5) * 4;
  *(uint *)puVar1 = ~(1 << (bVar5 & 0x1f)) & *(uint *)puVar1 | (uint)param_1 << (bVar5 & 0x1f);
  return iVar3;
}

// AddUninitialized @ 14a8b0c60

int __thiscall
TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *this,int param_1)

{
  int iVar1;
  uchar *puVar2;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = this->NumBits;
  if (0 < param_1) {
    if (iVar6 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = (int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5;
    }
    iVar1 = iVar6 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar7) {
      this->NumBits = iVar1;
      return iVar6;
    }
    if (this->MaxBits < iVar1) {
      uVar8 = this->MaxBits + 0x1fU >> 5;
      uVar9 = iVar1 + 0x1fU >> 5;
      if (uVar9 < 2) {
        uVar8 = 1;
      }
      else {
        if (uVar8 < 2) {
          uVar8 = 0;
        }
        if (uVar8 == 0) {
          uVar8 = 4;
          if (4 < uVar9) {
            uVar8 = uVar9;
          }
        }
        else {
          uVar8 = (int)((ulonglong)uVar9 * 3 >> 3) + 0x10 + uVar9;
        }
        if (uVar8 < uVar9) {
          uVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = uVar8 << 5;
      Realloc(this,iVar6);
    }
    this->NumBits = this->NumBits + param_1;
    uVar9 = this->NumBits >> 0x1f & 0x1f;
    uVar8 = this->NumBits + uVar9;
    iVar7 = (uVar8 & 0x1f) - uVar9;
    if (iVar7 != 0) {
      pTVar3 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocatorInstance).SecondaryData.Data;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        this = pTVar3;
      }
      puVar2 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar8 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  return iVar6;
}

// AddUninitialized @ 14a8b0dc0

int __thiscall
TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *this,int param_1)

{
  int iVar1;
  uchar *puVar2;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = this->NumBits;
  if (0 < param_1) {
    if (iVar6 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = (int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5;
    }
    iVar1 = iVar6 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar7) {
      this->NumBits = iVar1;
      return iVar6;
    }
    if (this->MaxBits < iVar1) {
      uVar8 = this->MaxBits + 0x1fU >> 5;
      uVar9 = iVar1 + 0x1fU >> 5;
      if (uVar9 < 3) {
        uVar8 = 2;
      }
      else {
        if (uVar8 < 3) {
          uVar8 = 0;
        }
        if (uVar8 == 0) {
          uVar8 = 4;
          if (4 < uVar9) {
            uVar8 = uVar9;
          }
        }
        else {
          uVar8 = (int)((ulonglong)uVar9 * 3 >> 3) + 0x10 + uVar9;
        }
        if (uVar8 < uVar9) {
          uVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = uVar8 << 5;
      Realloc(this,iVar6);
    }
    this->NumBits = this->NumBits + param_1;
    uVar9 = this->NumBits >> 0x1f & 0x1f;
    uVar8 = this->NumBits + uVar9;
    iVar7 = (uVar8 & 0x1f) - uVar9;
    if (iVar7 != 0) {
      pTVar3 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
               (this->AllocatorInstance).SecondaryData.Data;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
        this = pTVar3;
      }
      puVar2 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar8 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  return iVar6;
}

// Realloc @ 14a8c3940

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *this,int param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  int iVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  undefined1 local_res10 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar4 = (this->AllocatorInstance).SecondaryData.Data;
  uVar7 = this->MaxBits + 0x1fU >> 5;
  uVar6 = param_1 + 0x1fU >> 5;
  if (uVar7 < 2) {
    if (puVar4 != (uint *)0x0) {
      memmove(this,puVar4,(ulonglong)uVar6 << 2);
    }
  }
  else if (puVar4 == (uint *)0x0) {
    puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
    uVar8 = 8;
    if (0xf < (ulonglong)(uVar7 * 4)) {
      uVar8 = 0x10;
    }
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)(pFVar5 + 2),(ulonglong)(uVar7 * 4),uVar8);
    (this->AllocatorInstance).SecondaryData.Data = puVar4;
    memmove(puVar4,this,(ulonglong)uVar6 << 2);
  }
  else {
    TMemStackAllocator<0>::ForElementType<unsigned_int>::ResizeAllocation
              (&(this->AllocatorInstance).SecondaryData,uVar6,uVar7,4);
  }
  uVar7 = this->NumBits >> 0x1f & 0x1f;
  uVar6 = this->NumBits + uVar7;
  iVar3 = (uVar6 & 0x1f) - uVar7;
  if (iVar3 != 0) {
    pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
             (this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar6 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// Realloc @ 14a8c3a60

void __thiscall
TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *this,int param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar2;
  int iVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  undefined1 local_res10 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar4 = (this->AllocatorInstance).SecondaryData.Data;
  uVar7 = this->MaxBits + 0x1fU >> 5;
  uVar6 = param_1 + 0x1fU >> 5;
  if (uVar7 < 3) {
    if (puVar4 != (uint *)0x0) {
      memmove(this,puVar4,(ulonglong)uVar6 << 2);
    }
  }
  else if (puVar4 == (uint *)0x0) {
    puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
    uVar8 = 8;
    if (0xf < (ulonglong)(uVar7 * 4)) {
      uVar8 = 0x10;
    }
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)(pFVar5 + 2),(ulonglong)(uVar7 * 4),uVar8);
    (this->AllocatorInstance).SecondaryData.Data = puVar4;
    memmove(puVar4,this,(ulonglong)uVar6 << 2);
  }
  else {
    TMemStackAllocator<0>::ForElementType<unsigned_int>::ResizeAllocation
              (&(this->AllocatorInstance).SecondaryData,uVar6,uVar7,4);
  }
  uVar7 = this->NumBits >> 0x1f & 0x1f;
  uVar6 = this->NumBits + uVar7;
  iVar3 = (uVar6 & 0x1f) - uVar7;
  if (iVar3 != 0) {
    pTVar2 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
             (this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar6 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// Assign<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> @ 14a90f690

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
Assign<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>
          (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *this,
          TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *param_1)

{
  int iVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar4) || (0x20 < this->MaxBits)) {
    uVar3 = 0x20;
    if (0x20 < (int)uVar4) {
      uVar3 = uVar4;
    }
    this->MaxBits = uVar3;
    Realloc(this,0);
  }
  iVar1 = param_1->NumBits;
  this->NumBits = iVar1;
  if (iVar1 != 0) {
    pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
             (param_1->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      param_1 = pTVar2;
    }
    pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
             (this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      this = pTVar2;
    }
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// Add @ 14a9206a0

int __thiscall
TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Add
          (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *this,bool param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = AddUninitialized(this,1);
  pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
           (this->AllocatorInstance).SecondaryData.Data;
  if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    this = pTVar2;
  }
  uVar6 = iVar3 >> 0x1f & 0x1f;
  iVar4 = iVar3 + uVar6;
  bVar5 = ((byte)iVar4 & 0x1f) - (char)uVar6;
  puVar1 = (this->AllocatorInstance).InlineData + (longlong)(iVar4 >> 5) * 4;
  *(uint *)puVar1 = ~(1 << (bVar5 & 0x1f)) & *(uint *)puVar1 | (uint)param_1 << (bVar5 & 0x1f);
  return iVar3;
}

// SetRange @ 14a93db50

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::SetRange
          (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *this,int param_1,
          int param_2,bool param_3)

{
  uchar *puVar1;
  uint uVar2;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x379,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2 != 0) {
    uVar8 = param_1 >> 0x1f & 0x1f;
    iVar6 = param_1 + uVar8;
    uVar12 = iVar6 >> 5;
    iVar9 = param_1 + param_2 + 0x1f;
    uVar11 = -1 << (((byte)iVar6 & 0x1f) - (char)uVar8 & 0x1f);
    iVar9 = ((int)((iVar9 >> 0x1f & 0x1fU) + iVar9) >> 5) - uVar12;
    pTVar3 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
             (this->AllocatorInstance).SecondaryData.Data;
    uVar8 = 0xffffffff >> (0x20 - ((byte)(param_1 + param_2) & 0x1f) & 0x1f);
    pTVar7 = this;
    if (pTVar3 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
      pTVar7 = pTVar3;
    }
    uVar2 = *(uint *)((pTVar7->AllocatorInstance).InlineData + (ulonglong)uVar12 * 4);
    puVar1 = (pTVar7->AllocatorInstance).InlineData + (ulonglong)uVar12 * 4;
    if (param_3) {
      if (iVar9 == 1) {
        *(uint *)puVar1 = uVar8 & uVar11 | uVar2;
      }
      else {
        *(uint *)puVar1 = uVar2 | uVar11;
        puVar10 = (uint *)(puVar1 + 4);
        uVar11 = iVar9 - 2;
        if (uVar11 != 0) {
          memset(puVar10,-1,(ulonglong)uVar11 * 4);
          puVar10 = puVar10 + uVar11;
        }
        *puVar10 = *puVar10 | uVar8;
      }
    }
    else if (iVar9 == 1) {
      *(uint *)puVar1 = ~(uVar8 & uVar11) & uVar2;
    }
    else {
      *(uint *)puVar1 = ~uVar11 & uVar2;
      puVar10 = (uint *)(puVar1 + 4);
      uVar11 = iVar9 - 2;
      if (uVar11 != 0) {
        memset(puVar10,0,(ulonglong)uVar11 * 4);
        puVar10 = puVar10 + uVar11;
      }
      *puVar10 = *puVar10 & ~uVar8;
    }
    if ((this->MaxBits < this->NumBits) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumBits <= MaxBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x238,
                           L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((this->NumBits < 0) || (this->MaxBits < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumBits >= 0 && MaxBits >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar11 = this->NumBits >> 0x1f & 0x1f;
    uVar8 = this->NumBits + uVar11;
    iVar9 = (uVar8 & 0x1f) - uVar11;
    if (iVar9 != 0) {
      pTVar3 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocatorInstance).SecondaryData.Data;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        this = pTVar3;
      }
      if (((*(uint *)((this->AllocatorInstance).InlineData + (longlong)((int)uVar8 >> 5) * 4) &
           -1 << ((byte)iVar9 & 0x1f)) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(LastWord & SlackMask) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x243,
                             L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

