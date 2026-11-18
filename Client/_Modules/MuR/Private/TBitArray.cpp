// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// Add @ 14a989080

int __thiscall
TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
::Add(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
      *this,bool param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = AddUninitialized(this,1);
  pTVar2 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
             **)&(this->AllocatorInstance).SecondaryData;
  if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 *)0x0) {
    this = pTVar2;
  }
  uVar6 = iVar3 >> 0x1f & 0x1f;
  iVar4 = iVar3 + uVar6;
  bVar5 = ((byte)iVar4 & 0x1f) - (char)uVar6;
  puVar1 = (this->AllocatorInstance).InlineData + (longlong)(iVar4 >> 5) * 4;
  *(uint *)puVar1 = ~(1 << (bVar5 & 0x1f)) & *(uint *)puVar1 | (uint)param_1 << (bVar5 & 0x1f);
  return iVar3;
}

// AddUninitialized @ 14a98a280

int __thiscall
TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
::AddUninitialized(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                   *this,int param_1)

{
  int iVar1;
  uchar *puVar2;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
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
      uVar10 = this->MaxBits + 0x1fU >> 5;
      uVar11 = iVar1 + 0x1fU >> 5;
      uVar12 = (ulonglong)uVar11;
      uVar8 = 4;
      if (4 < uVar11) {
        if (uVar10 < 5) {
          uVar10 = 0;
        }
        if (uVar10 == 0) {
          if (4 < uVar12) {
            uVar8 = uVar12;
          }
        }
        else {
          uVar8 = (uVar12 * 3 >> 3) + 0x10 + uVar12;
        }
        uVar9 = FMemory::QuantizeSize(uVar8 * 4,0);
        uVar8 = uVar9 >> 2 & 0xffffffff;
        if ((int)(uVar9 >> 2) < (int)uVar11) {
          uVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = (int)uVar8 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar11 = this->NumBits >> 0x1f & 0x1f;
    uVar10 = this->NumBits + uVar11;
    iVar7 = (uVar10 & 0x1f) - uVar11;
    if (iVar7 != 0) {
      pTVar3 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 **)&(this->AllocatorInstance).SecondaryData;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                     *)0x0) {
        this = pTVar3;
      }
      puVar2 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar10 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  return iVar6;
}

// Realloc @ 14a9c20b0

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
::Realloc(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
          *this,int param_1)

{
  uchar *puVar1;
  void *_Src;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  _Src = *(void **)&(this->AllocatorInstance).SecondaryData;
  uVar5 = this->MaxBits + 0x1fU >> 5;
  uVar4 = param_1 + 0x1fU >> 5;
  if (uVar5 < 5) {
    if (_Src == (void *)0x0) goto LAB_14a9c2135;
    memmove(this,_Src,(ulonglong)uVar4 << 2);
    uVar5 = 0;
    uVar4 = 0;
  }
  else if (_Src == (void *)0x0) {
    UE::Mutable::Private::
    TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>
    ::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,0,uVar5,4);
    memmove(*(void **)&(this->AllocatorInstance).SecondaryData,this,(ulonglong)uVar4 << 2);
    goto LAB_14a9c2135;
  }
  UE::Mutable::Private::
  TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>
  ::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,uVar4,uVar5,4);
LAB_14a9c2135:
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar5;
  iVar3 = (uVar4 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    pTVar2 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
               **)&(this->AllocatorInstance).SecondaryData;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar4 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

