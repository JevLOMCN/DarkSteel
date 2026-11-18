// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 9

// ~TSparseArrayBase<20,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_> @ 14a977d60

void __thiscall
TSparseArrayBase<20,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
::
~TSparseArrayBase<20,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
          (TSparseArrayBase<20,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
           *this)

{
  void *pvVar1;
  atomic<__int64> *paVar2;
  
  paVar2 = UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter::Get();
  LOCK();
  *paVar2 = (atomic<__int64>)
            ((longlong)*paVar2 -
            *(longlong *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8);
  UNLOCK();
  UE::Mutable::Private::FGlobalMemoryCounter::Update
            (-*(longlong *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8);
  pvVar1 = *(void **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  *(undefined8 *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8 = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  paVar2 = UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter::Get();
  LOCK();
  *paVar2 = (atomic<__int64>)((longlong)*paVar2 - (this->Data).AllocatorInstance.AllocSize);
  UNLOCK();
  UE::Mutable::Private::FGlobalMemoryCounter::Update(-(this->Data).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->Data).AllocatorInstance._padding_;
  (this->Data).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// AllocateIndex @ 14a98a3f0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<20,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
::AllocateIndex(TSparseArrayBase<20,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar8;
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0x62,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((this->Data).ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < GetMaxIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  pTVar8 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
             **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,100,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  pTVar8 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
             **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  puVar2 = (pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  lVar3 = (this->Data).AllocatorInstance._padding_;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)(lVar3 + (longlong)param_1 * 0x14);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a98a590

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
::AllocateIndex(TSparseArrayBase<24,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar8;
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0x62,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((this->Data).ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < GetMaxIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  pTVar8 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
             **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,100,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  pTVar8 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
             **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  puVar2 = (pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  lVar3 = (this->Data).AllocatorInstance._padding_;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)(lVar3 + (longlong)param_1 * 0x18);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a98a730

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
::AllocateIndex(TSparseArrayBase<32,8,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar7;
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x62,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  if (((this->Data).ArrayNum <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < GetMaxIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  pTVar7 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
             **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  if (((*(uint *)((pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4) >> (param_1 & 0x1fU)
       & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,100,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  pTVar7 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
             **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer =
       (void *)((longlong)param_1 * 0x20 + (this->Data).AllocatorInstance._padding_);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a98a8e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<48,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<48,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  ForElementType<unsigned_int> FVar8;
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0x62,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((this->Data).ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < GetMaxIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  if ((*(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) >> (param_1 & 0x1fU) & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,100,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  puVar2 = (uint *)((longlong)FVar8 + (longlong)iVar6 * 4);
  *puVar2 = *puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  pFVar3 = (this->Data).AllocatorInstance.Data;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x30;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 14a9c39c0

void __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<32,8,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  longlong lVar2;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  if (param_2 != 0) {
    lVar2 = (this->Data).AllocatorInstance._padding_;
    uVar11 = (ulonglong)param_1;
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)(uVar11 * 0x20 + lVar2);
    do {
      iVar10 = (int)uVar11;
      if (((iVar10 < 0) || ((this->AllocationFlags).NumBits <= iVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
      pTVar9 = &this->AllocationFlags;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                     *)0x0) {
        pTVar9 = pTVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      if (((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)(iVar7 >> 5) * 4) & uVar12)
           == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)((longlong)this->FirstFreeIndex * 0x20 + lVar2) = iVar10;
      }
      *puVar13 = 0xffffffff;
      if (this->NumFreeIndices < 1) {
        iVar7 = -1;
      }
      else {
        iVar7 = this->FirstFreeIndex;
      }
      puVar13[1] = iVar7;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar10;
      if (((iVar10 < 0) || ((this->AllocationFlags).NumBits <= iVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
      pTVar9 = &this->AllocationFlags;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                     *)0x0) {
        pTVar9 = pTVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      puVar13 = puVar13 + 8;
      puVar1 = (pTVar9->AllocatorInstance).InlineData + (longlong)(iVar7 >> 5) * 4;
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InsertUninitialized @ 14aad8690

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<1,1,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<1,1,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FSparseArrayAllocationInfo *pFVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (param_1 < *piVar1) {
    pFVar14 = (this->Data).AllocatorInstance.Data;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar14 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar14 + (longlong)iVar12 * 8) = 0xffffffff;
        *(int *)(pFVar14 + (longlong)iVar12 * 8 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar14 + (longlong)this->FirstFreeIndex * 8) = iVar12;
        }
        this->FirstFreeIndex = iVar12;
        iVar4 = (this->AllocationFlags).NumBits;
        iVar15 = (int)((iVar4 >> 0x1f & 0x1fU) + iVar4) >> 5;
        if ((iVar4 == 0) || (iVar15 != (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5)) {
          TBitArray<FDefaultBitArrayAllocator>::Reserve(this_00,iVar4 + 1);
          iVar7 = (this->AllocationFlags).NumBits + 1;
          (this->AllocationFlags).NumBits = iVar7;
          uVar11 = iVar7 >> 0x1f & 0x1f;
          uVar8 = iVar7 + uVar11;
          iVar7 = (uVar8 & 0x1f) - uVar11;
          if (iVar7 != 0) {
            FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
            FVar10 = (ForElementType<unsigned_int>)this_00;
            if (FVar13 != (ForElementType<unsigned_int>)0x0) {
              FVar10 = FVar13;
            }
            puVar3 = (uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4);
            *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
          }
        }
        else {
          (this->AllocationFlags).NumBits = iVar4 + 1;
        }
        FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)this_00;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar13;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)iVar15 * 4);
        *puVar3 = *puVar3 & ~(1 << ((byte)iVar4 & 0x1f));
        if ((iVar4 != iVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags.Add(false) == FreeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0x17a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FSparseArrayAllocationInfo *)(*pcVar5)();
          return pFVar9;
        }
        this->NumFreeIndices = this->NumFreeIndices + 1;
        iVar12 = *piVar2;
      } while (iVar12 < (this->Data).ArrayNum);
    }
  }
  if (((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSparseArrayAllocationInfo *)(*pcVar5)();
    return pFVar9;
  }
  FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)this_00;
  }
  if (((*(uint *)((longlong)FVar13 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4
                 ) >> (param_1 & 0x1fU) & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x184,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSparseArrayAllocationInfo *)(*pcVar5)();
    return pFVar9;
  }
  this->NumFreeIndices = this->NumFreeIndices + -1;
  iVar12 = *(int *)(pFVar14 + (longlong)param_1 * 8);
  iVar4 = *(int *)(pFVar14 + (longlong)param_1 * 8 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar14 + (longlong)iVar12 * 8 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar14 + (longlong)iVar4 * 8) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ~TSparseArrayBase<24,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_> @ 14ab5fd60

void __thiscall
TSparseArrayBase<24,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
::
~TSparseArrayBase<24,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
          (TSparseArrayBase<24,4,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
           *this)

{
  void *pvVar1;
  
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter -
              *(longlong *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8);
  UNLOCK();
  UE::Mutable::Private::FGlobalMemoryCounter::Update
            (-*(longlong *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8);
  pvVar1 = *(void **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  *(undefined8 *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8 = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  LOCK();
  ::Counter = (atomic<__int64>)((longlong)::Counter - (this->Data).AllocatorInstance.AllocSize);
  UNLOCK();
  UE::Mutable::Private::FGlobalMemoryCounter::Update(-(this->Data).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->Data).AllocatorInstance._padding_;
  (this->Data).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// ~TSparseArrayBase<32,8,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_> @ 14ab5fde0

void __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
::
~TSparseArrayBase<32,8,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
          (TSparseArrayBase<32,8,TSparseArrayAllocator<UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>,TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>_>
           *this)

{
  void *pvVar1;
  
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter -
              *(longlong *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8);
  UNLOCK();
  UE::Mutable::Private::FGlobalMemoryCounter::Update
            (-*(longlong *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8);
  pvVar1 = *(void **)&(this->AllocationFlags).AllocatorInstance.SecondaryData;
  *(undefined8 *)&(this->AllocationFlags).AllocatorInstance.SecondaryData.field_0x8 = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  LOCK();
  ::Counter = (atomic<__int64>)((longlong)::Counter - (this->Data).AllocatorInstance.AllocSize);
  UNLOCK();
  UE::Mutable::Private::FGlobalMemoryCounter::Update(-(this->Data).AllocatorInstance.AllocSize);
  pvVar1 = (void *)(this->Data).AllocatorInstance._padding_;
  (this->Data).AllocatorInstance.AllocSize = 0;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

