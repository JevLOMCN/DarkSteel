// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// FLiveAllocCollection @ 14d3cc830

FLiveAllocCollection * __thiscall
TraceServices::FLiveAllocCollection::FLiveAllocCollection(FLiveAllocCollection *this)

{
  this->LastAlloc = (FAllocationItem *)0x0;
  FShortLivingAllocs::FShortLivingAllocs(&this->ShortLivingAllocs);
  *(undefined8 *)&(this->LongLivingAllocs).AllocsMap = 0;
  *(undefined8 *)&(this->LongLivingAllocs).AllocsMap.field_0x8 = 0;
  *(undefined8 *)&(this->LongLivingAllocs).AllocsMap.field_0x20 = 0;
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x28 = 0;
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x34 = 0;
  *(undefined8 *)&(this->LongLivingAllocs).AllocsMap.field_0x40 = 0;
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x48 = 0;
  *(undefined8 *)&(this->HeapAllocs).AddressMap = 0;
  *(undefined8 *)&(this->HeapAllocs).AddressMap.field_0x8 = 0;
  *(undefined8 *)&(this->HeapAllocs).AddressMap.field_0x20 = 0;
  *(undefined4 *)&(this->HeapAllocs).AddressMap.field_0x28 = 0;
  *(undefined4 *)&(this->HeapAllocs).AddressMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HeapAllocs).AddressMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HeapAllocs).AddressMap.field_0x34 = 0;
  *(undefined8 *)&(this->HeapAllocs).AddressMap.field_0x40 = 0;
  *(undefined4 *)&(this->HeapAllocs).AddressMap.field_0x48 = 0;
  (this->HeapAllocs).AllocCount = 0;
  *(undefined8 *)&(this->SwapAllocs).AddressMap = 0;
  *(undefined8 *)&(this->SwapAllocs).AddressMap.field_0x8 = 0;
  *(undefined8 *)&(this->SwapAllocs).AddressMap.field_0x20 = 0;
  *(undefined4 *)&(this->SwapAllocs).AddressMap.field_0x28 = 0;
  *(undefined4 *)&(this->SwapAllocs).AddressMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SwapAllocs).AddressMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SwapAllocs).AddressMap.field_0x34 = 0;
  *(undefined8 *)&(this->SwapAllocs).AddressMap.field_0x40 = 0;
  *(undefined4 *)&(this->SwapAllocs).AddressMap.field_0x48 = 0;
  (this->SwapAllocs).AllocCount = 0;
  this->TotalAllocCount = 0;
  this->MaxAllocCount = 0;
  return this;
}

// ~FLiveAllocCollection @ 14d3d06c0

void __thiscall
TraceServices::FLiveAllocCollection::~FLiveAllocCollection(FLiveAllocCollection *this)

{
  FAllocMap *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  FNode *pFVar3;
  void *pvVar4;
  code *pcVar5;
  FAllocMap *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_104;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FAllocMap *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  FHeapAllocs::Reset(&this->HeapAllocs);
  FHeapAllocs::Reset(&this->SwapAllocs);
  this_00 = &this->LongLivingAllocs;
  iVar19 = *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x28;
  TStack_c0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->LongLivingAllocs).AllocsMap.field_0x10;
  iVar12 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar19 != 0) {
    puVar16 = *(uint **)&(this->LongLivingAllocs).AllocsMap.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_c0.Array;
    }
    uVar17 = *puVar16;
    iVar15 = 0;
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      iVar15 = iVar15 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d3d0781;
      uVar17 = puVar16[lVar11 + 1];
    }
    uVar8 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = local_res20 + -1 + iVar15;
    if (iVar19 < iVar9) {
      iVar9 = iVar19;
    }
  }
LAB_14d3d0781:
  uVar17 = *(uint *)&(this->LongLivingAllocs).AllocsMap.field_0x28;
  uVar18 = uVar17 & 0xffffffe0;
  puVar1 = &(this->LongLivingAllocs).AllocsMap.field_0x10;
  TStack_c0._padding_ = CONCAT44(uVar8,iVar12);
  TStack_c0.CurrentBitIndex = iVar9;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = iVar15;
  uStack_a0 = CONCAT44(uStack_104,
                       *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x8 -
                       *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x34);
  if ((((int)uVar17 < 0) || (iVar19 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->LongLivingAllocs).AllocsMap.field_0x28;
  if (uVar17 != uVar8) {
    puVar13 = *(undefined1 **)&(this->LongLivingAllocs).AllocsMap.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->LongLivingAllocs).AllocsMap.field_0x10;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar18 = uVar18 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d3d08b0;
      uVar17 = *(uint *)(puVar13 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar17 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = uVar8;
    }
  }
LAB_14d3d08b0:
  while( true ) {
    if (*(int *)&(this->LongLivingAllocs).AllocsMap.field_0x8 -
        *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x34 != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c0.CurrentBitIndex == uVar17) &&
       (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    ::operator_delete(*(void **)(*(longlong *)&this_00->AllocsMap + 8 +
                                (longlong)TStack_c0.CurrentBitIndex * 0x18),0x40);
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
           *)this_00);
  for (pFVar3 = (this->ShortLivingAllocs).LastAddedAllocNode; pFVar3 != (FNode *)0x0;
      pFVar3 = pFVar3->Prev) {
    ::operator_delete(pFVar3->Alloc,0x40);
  }
  operator_delete__((this->ShortLivingAllocs).AllNodes);
  iVar19 = 0;
  (this->ShortLivingAllocs).AllNodes = (FNode *)0x0;
  (this->ShortLivingAllocs).LastAddedAllocNode = (FNode *)0x0;
  (this->ShortLivingAllocs).OldestAllocNode = (FNode *)0x0;
  (this->ShortLivingAllocs).FirstUnusedNode = (FNode *)0x0;
  (this->ShortLivingAllocs).AllocCount = 0;
  if (this->LastAlloc != (FAllocationItem *)0x0) {
    ::operator_delete(this->LastAlloc,0x40);
    this->LastAlloc = (FAllocationItem *)0x0;
  }
  FHeapAllocs::Reset(&this->SwapAllocs);
  *(undefined4 *)&(this->SwapAllocs).AddressMap.field_0x48 = 0;
  pvVar4 = *(void **)&(this->SwapAllocs).AddressMap.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SwapAllocs);
  FHeapAllocs::Reset(&this->HeapAllocs);
  *(undefined4 *)&(this->HeapAllocs).AddressMap.field_0x48 = 0;
  pvVar4 = *(void **)&(this->HeapAllocs).AddressMap.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FHeapAllocs::FList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HeapAllocs);
  iVar12 = *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x28;
  puVar13 = &(this->LongLivingAllocs).AllocsMap.field_0x10;
  iVar15 = 0;
  uVar8 = 1;
  iVar10 = iVar19;
  if (iVar12 != 0) {
    puVar16 = *(uint **)&(this->LongLivingAllocs).AllocsMap.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar13;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar15;
      iVar19 = iVar19 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d3d0a4f;
      uVar17 = puVar16[lVar11 + 1];
    }
    uVar8 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = iVar19 + -1 + (int)lVar11;
    if (iVar12 < iVar10) {
      iVar10 = iVar12;
    }
  }
LAB_14d3d0a4f:
  uVar17 = *(uint *)&(this->LongLivingAllocs).AllocsMap.field_0x28;
  uVar18 = uVar17 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar8,iVar15);
  TStack_90.CurrentBitIndex = iVar10;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar17 >> 5;
  TStack_90._28_4_ = iVar9;
  TStack_90.BaseBitIndex = iVar19;
  uStack_70 = CONCAT44(uStack_cc,
                       *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x8 -
                       *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x34);
  local_98 = this_00;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar13;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->LongLivingAllocs).AllocsMap.field_0x28;
  if (uVar17 != uVar8) {
    puVar14 = *(undefined1 **)&(this->LongLivingAllocs).AllocsMap.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->LongLivingAllocs).AllocsMap.field_0x10;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar17 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d3d0b60;
      uVar17 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar17 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = uVar8;
    }
  }
LAB_14d3d0b60:
  while( true ) {
    pFVar6 = local_98;
    if (*(int *)&(local_98->AllocsMap).field_0x8 - *(int *)&(local_98->AllocsMap).field_0x34 !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == uVar17) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == this_00))
    break;
    ::operator_delete(*(void **)(*(longlong *)&pFVar6->AllocsMap + 8 +
                                (longlong)TStack_90.CurrentBitIndex * 0x18),0x40);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  bVar7 = 1 < *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x48;
  if (!bVar7) {
    TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->LongLivingAllocs).AllocsMap.field_0xc;
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x34 = 0;
  iVar19 = *(int *)&(this->LongLivingAllocs).AllocsMap.field_0x2c;
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x28 = 0;
  if ((iVar19 < 0) || (0x80 < iVar19)) {
    *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar13,0)
    ;
  }
  if (bVar7) {
    *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x48 = 1;
    TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>,TraceServices::FAllocMap::TAddressKeyFuncs<TraceServices::FAllocationItem_*>,FDefaultSetAllocator>
              *)this_00);
  }
  *(undefined4 *)&(this->LongLivingAllocs).AllocsMap.field_0x48 = 0;
  pvVar4 = *(void **)&(this->LongLivingAllocs).AllocsMap.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FAllocationItem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  for (pFVar3 = (this->ShortLivingAllocs).LastAddedAllocNode; pFVar3 != (FNode *)0x0;
      pFVar3 = pFVar3->Prev) {
    ::operator_delete(pFVar3->Alloc,0x40);
  }
  operator_delete__((this->ShortLivingAllocs).AllNodes);
  (this->ShortLivingAllocs).AllNodes = (FNode *)0x0;
  (this->ShortLivingAllocs).LastAddedAllocNode = (FNode *)0x0;
  (this->ShortLivingAllocs).OldestAllocNode = (FNode *)0x0;
  (this->ShortLivingAllocs).FirstUnusedNode = (FNode *)0x0;
  (this->ShortLivingAllocs).AllocCount = 0;
  return;
}

