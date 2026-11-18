// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 10

// FJournalChunkInfoPage @ 148cb4580

FJournalChunkInfoPage * __thiscall
StorageServer::FJournalChunkInfoPage::FJournalChunkInfoPage
          (FJournalChunkInfoPage *this,FJournalChunkInfoPage *param_1)

{
  TMap<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
  *pTVar1;
  TMap<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  pTVar1 = &this->Entries;
  this->_padding_ = (longlong)&___7FJournalPageBase_StorageServer__6B_;
  pTVar2 = &param_1->Entries;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  this->_padding_ = (longlong)&___7FJournalChunkInfoPage_StorageServer__6B_;
  this->MaxEntryCount = param_1->MaxEntryCount;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Entries).field_0x8 = 0;
  *(undefined8 *)&(this->Entries).field_0x20 = 0;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  *(undefined8 *)&(this->Entries).field_0x40 = 0;
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->Entries).field_0x10;
    *(undefined4 *)&(this->Entries).field_0x8 = *(undefined4 *)&(param_1->Entries).field_0x8;
    _Src = &(param_1->Entries).field_0x10;
    *(undefined4 *)&(this->Entries).field_0xc = *(undefined4 *)&(param_1->Entries).field_0xc;
    *(undefined8 *)&(param_1->Entries).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Entries).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->Entries).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->Entries).field_0x20 = *(undefined8 *)&(param_1->Entries).field_0x20;
      *(undefined8 *)&(param_1->Entries).field_0x20 = 0;
      *(undefined4 *)&(this->Entries).field_0x28 = *(undefined4 *)&(param_1->Entries).field_0x28;
      *(undefined4 *)&(this->Entries).field_0x2c = *(undefined4 *)&(param_1->Entries).field_0x2c;
      *(undefined8 *)&(param_1->Entries).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Entries).field_0x30 = *(undefined4 *)&(param_1->Entries).field_0x30;
    *(undefined4 *)&(this->Entries).field_0x34 = *(undefined4 *)&(param_1->Entries).field_0x34;
    *(undefined4 *)&(param_1->Entries).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Entries).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Entries).field_0x40 == 0) {
    *(undefined4 *)&(this->Entries).field_0x38 = *(undefined4 *)&(param_1->Entries).field_0x38;
  }
  pvVar3 = *(void **)&(this->Entries).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->Entries).field_0x40 = *(undefined8 *)&(param_1->Entries).field_0x40;
  *(undefined8 *)&(param_1->Entries).field_0x40 = 0;
  *(undefined4 *)&(this->Entries).field_0x48 = *(undefined4 *)&(param_1->Entries).field_0x48;
  *(undefined4 *)&(param_1->Entries).field_0x48 = 0;
  return this;
}

// FJournalChunkInfoPage @ 148cb46e0

FJournalChunkInfoPage * __thiscall
StorageServer::FJournalChunkInfoPage::FJournalChunkInfoPage
          (FJournalChunkInfoPage *this,long64 param_1,int param_2)

{
  this->_padding_ = -1;
  this->_padding_ = (longlong)&___7FJournalChunkInfoPage_StorageServer__6B_;
  *(undefined8 *)&this->Entries = 0;
  *(undefined8 *)&(this->Entries).field_0x8 = 0;
  *(undefined8 *)&(this->Entries).field_0x20 = 0;
  this->_padding_ = param_1;
  *(undefined2 *)&this->_padding_ = 2;
  this->MaxEntryCount = param_2;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Entries).field_0x40 = 0;
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  return this;
}

// Add @ 148cbae80

EJournalPageResult __thiscall
StorageServer::FJournalChunkInfoPage::Add
          (FJournalChunkInfoPage *this,FIoChunkId *param_1,FCacheChunkInfo *param_2)

{
  EJournalPageResult EVar1;
  FCacheChunkInfo *this_00;
  FIoChunkId *local_18;
  FCacheChunkInfo *local_10;
  
  this_00 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
            ::Find((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                    *)&this->Entries,param_1);
  if (this_00 == (FCacheChunkInfo *)0x0) {
    if (*(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34 <
        this->MaxEntryCount) {
      local_18 = param_1;
      local_10 = param_2;
      TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>_>
                ((TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                  *)&this->Entries,
                 (TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&> *)
                 &stack0x00000008,(bool *)&local_18);
      EVar1 = Ok;
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    }
    else {
      EVar1 = PageFull;
    }
  }
  else {
    FCacheChunkInfo::operator=(this_00,param_2);
    EVar1 = EntryAlreadyExists;
  }
  return EVar1;
}

// Contains @ 148cbf2c0

bool __thiscall
StorageServer::FJournalChunkInfoPage::Contains(FJournalChunkInfoPage *this,FIoChunkId *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  
  uVar2 = *(uint *)(param_1->Id + 8);
  uVar1 = *(undefined8 *)param_1->Id;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x20);
  if (*(int *)&(this->Entries).field_0x8 != *(int *)&(this->Entries).field_0x34) {
    puVar6 = *(undefined1 **)&(this->Entries).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Entries).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->Entries).field_0x48 - 1U &
                              (uVar2 >> 0x18) + 0x58a2c485 +
                              ((((((uVar4 >> 8 & 0xff) * 0x21 +
                                  ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)) * 0x21 +
                                 (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 + (uVar2 & 0xff)) *
                                0x21 + (uVar2 >> 8 & 0xff)) * 0x21 + (uVar2 >> 0x10 & 0xff)) * 0x21
                              + (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 +
                                ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)) * 0x40a9121 +
                              (uVar4 & 0xff) * -0x13be2b1f +
                              ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 +
                              ((uint)uVar1 & 0xff) * 0x30f35d61) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&this->Entries;
      do {
        lVar7 = (longlong)iVar5 * 0x40;
        if ((*(longlong *)(lVar7 + lVar3) == *(longlong *)param_1->Id) &&
           (*(int *)(lVar7 + 8 + lVar3) == *(int *)(param_1->Id + 8))) goto LAB_148cbf3ea;
        iVar5 = *(int *)(lVar7 + 0x38 + lVar3);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_148cbf3ea:
  return iVar5 != -1;
}

// GetEntry @ 148cc7140

bool __thiscall
StorageServer::FJournalChunkInfoPage::GetEntry
          (FJournalChunkInfoPage *this,FIoChunkId *param_1,FCacheChunkInfo *param_2)

{
  FCacheChunkInfo *pFVar1;
  
  pFVar1 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
           ::Find((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                   *)&this->Entries,param_1);
  if (pFVar1 == (FCacheChunkInfo *)0x0) {
    return false;
  }
  FCacheChunkInfo::operator=(param_2,pFVar1);
  return true;
}

// Invalidate @ 148ccbce0

void __thiscall
StorageServer::FJournalChunkInfoPage::Invalidate(FJournalChunkInfoPage *this,FIoChunkId *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
          ::Remove((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                    *)&this->Entries,param_1);
  if (0 < iVar2) {
    __GTraceCounterZenJournalSectionedEntries.Value =
         __GTraceCounterZenJournalSectionedEntries.Value + -1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenJournalSectionedEntries.CounterId == (atomic<unsigned_int>)0x0) {
        uVar1 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenJournalSectionedEntries.CounterName,
                           TraceCounterType_Int,
                           __GTraceCounterZenJournalSectionedEntries.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenJournalSectionedEntries.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenJournalSectionedEntries.CounterId._2_2_ = 0;
          __GTraceCounterZenJournalSectionedEntries.CounterId._0_2_ = uVar1;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenJournalSectionedEntries.CounterId._0_2_,
                 __GTraceCounterZenJournalSectionedEntries.Value);
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  return;
}

// InvalidateAll @ 148ccc500

void __thiscall StorageServer::FJournalChunkInfoPage::InvalidateAll(FJournalChunkInfoPage *this)

{
  TMap<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->Entries;
  *(bool *)((longlong)&this->_padding_ + 1) =
       0 < *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34;
  bVar3 = 1 < *(int *)&(this->Entries).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->Entries).field_0xc;
  *(undefined4 *)&(this->Entries).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  iVar2 = *(int *)&(this->Entries).field_0x2c;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->Entries).field_0x48 = 1;
    TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// IsFull @ 148cccb70

bool __thiscall StorageServer::FJournalChunkInfoPage::IsFull(FJournalChunkInfoPage *this)

{
  return this->MaxEntryCount <=
         *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34;
}

// IterateChunkIds @ 148cce130

void __thiscall
StorageServer::FJournalChunkInfoPage::IterateChunkIds
          (FJournalChunkInfoPage *this,
          TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&)>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Entries).field_0x28;
  puVar1 = &(this->Entries).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Entries).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148cce1ce;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148cce1ce:
  uVar10 = *(uint *)&(this->Entries).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Entries).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Entries).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148cce2d0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_148cce2d0:
  while( true ) {
    if (*(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34 != (int)uStack_40)
    {
      `TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = (longlong)TStack_60.CurrentBitIndex * 0x40 + *(longlong *)&this->Entries;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar8,lVar8 + 0x10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Serialize @ 148cdd900

void __thiscall
StorageServer::FJournalChunkInfoPage::Serialize(FJournalChunkInfoPage *this,FArchive *param_1)

{
  TSetPrivateFriend::
  Serialize<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                      *)&this->Entries);
  return;
}

