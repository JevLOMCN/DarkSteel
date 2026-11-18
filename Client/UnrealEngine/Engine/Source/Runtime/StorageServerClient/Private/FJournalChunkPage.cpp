// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 10

// FJournalChunkPage @ 148cb4740

FJournalChunkPage * __thiscall
StorageServer::FJournalChunkPage::FJournalChunkPage
          (FJournalChunkPage *this,long64 param_1,int param_2)

{
  this->_padding_ = -1;
  this->_padding_ = (longlong)&___7FJournalChunkPage_StorageServer__6B_;
  *(undefined8 *)&this->ChunkMap = 0;
  *(undefined8 *)&(this->ChunkMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkMap).field_0x20 = 0;
  this->_padding_ = param_1;
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined4 *)&(this->ChunkMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChunkMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChunkMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkMap).field_0x48 = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->bContainsInvalidEntries = false;
  this->MaxEntryCount = param_2;
  return this;
}

// Add @ 148cbaf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EJournalPageResult __thiscall
StorageServer::FJournalChunkPage::Add
          (FJournalChunkPage *this,FIoChunkId *param_1,FCacheEntry *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  ushort uVar7;
  EJournalPageResult EVar8;
  TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar9;
  undefined1 auStackY_158 [32];
  int local_108;
  undefined1 local_104 [20];
  undefined8 *local_f0;
  int *local_e8;
  undefined8 local_d8;
  FCacheEntry local_c8;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong64 local_78;
  ulong64 uStack_70;
  ulong64 local_68;
  ulong64 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((this->Entries).ArrayNum < this->MaxEntryCount) {
    local_c8.StorageHash.Hash[0x10] = '\0';
    local_c8.StorageHash.Hash[0x11] = '\0';
    local_c8.StorageHash.Hash[0x12] = '\0';
    local_c8.StorageHash.Hash[0x13] = '\0';
    local_c8.StorageHash.Hash[0] = '\0';
    local_c8.StorageHash.Hash[1] = '\0';
    local_c8.StorageHash.Hash[2] = '\0';
    local_c8.StorageHash.Hash[3] = '\0';
    local_c8.StorageHash.Hash[4] = '\0';
    local_c8.StorageHash.Hash[5] = '\0';
    local_c8.StorageHash.Hash[6] = '\0';
    local_c8.StorageHash.Hash[7] = '\0';
    local_c8.StorageHash.Hash[8] = '\0';
    local_c8.StorageHash.Hash[9] = '\0';
    local_c8.StorageHash.Hash[10] = '\0';
    local_c8.StorageHash.Hash[0xb] = '\0';
    local_c8.StorageHash.Hash[0xc] = '\0';
    local_c8.StorageHash.Hash[0xd] = '\0';
    local_c8.StorageHash.Hash[0xe] = '\0';
    local_c8.StorageHash.Hash[0xf] = '\0';
    bVar6 = GetEntry(this,param_1,param_2->ChunkOffset,param_2->ChunkSize,&local_c8);
    if (bVar6) {
      EVar8 = EntryAlreadyExists;
    }
    else {
      local_88 = *(undefined8 *)param_1->Id;
      local_68 = param_2->StorageOffset;
      uStack_60 = param_2->StorageSize;
      uStack_80 = *(undefined4 *)(param_1->Id + 8);
      pFVar3 = (this->Entries).AllocatorInstance.Data;
      local_78 = param_2->ChunkOffset;
      uStack_70 = param_2->ChunkSize;
      local_48 = *(undefined8 *)((param_2->StorageHash).Hash + 0x10);
      uStack_40 = 1;
      local_58 = *(undefined8 *)(param_2->StorageHash).Hash;
      uStack_50 = *(undefined8 *)((param_2->StorageHash).Hash + 8);
      if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)(this->Entries).ArrayMax * 0x50
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar8 = (*pcVar4)();
        return EVar8;
      }
      local_108 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayMax;
      if (local_108 == *piVar1) {
        local_108 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&(this->Entries).AllocatorInstance,piVar1);
      }
      (this->Entries).ArrayNum = local_108 + 1;
      lVar9 = (longlong)local_108;
      pFVar3 = (this->Entries).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50) = local_88;
      *(ulonglong *)(pFVar3 + lVar9 * 0x50 + 8) = CONCAT44(uStack_7c,uStack_80);
      *(ulong64 *)(pFVar3 + lVar9 * 0x50 + 0x10) = local_78;
      *(ulong64 *)(pFVar3 + lVar9 * 0x50 + 0x10 + 8) = uStack_70;
      *(ulong64 *)(pFVar3 + lVar9 * 0x50 + 0x20) = local_68;
      *(ulong64 *)(pFVar3 + lVar9 * 0x50 + 0x20 + 8) = uStack_60;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x30) = local_58;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x30 + 8) = uStack_50;
      *(undefined8 *)(pFVar3 + lVar9 * 0x50 + 0x40) = local_48;
      *(ulonglong *)(pFVar3 + lVar9 * 0x50 + 0x40 + 8) = CONCAT71(uStack_3f,uStack_40);
      uVar2 = *(uint *)(param_1->Id + 8);
      local_d8 = *(undefined8 *)param_1->Id;
      uVar5 = (uint)((ulonglong)local_d8 >> 0x20);
      this_00 = (TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
                 *)TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
                   ::FindOrAddImpl<FIoChunkId_const_&>
                             ((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
                               *)&this->ChunkMap,
                              (uVar2 >> 0x18) + 0x58a2c485 +
                              ((((((uVar5 >> 8 & 0xff) * 0x21 +
                                  ((ushort)((ulonglong)local_d8 >> 0x30) & 0xff)) * 0x21 +
                                 (uint)(byte)((ulonglong)local_d8 >> 0x38)) * 0x21 + (uVar2 & 0xff))
                                * 0x21 + (uVar2 >> 8 & 0xff)) * 0x21 + (uVar2 >> 0x10 & 0xff)) *
                              0x21 + (((uint)((ulonglong)local_d8 >> 8) & 0xff) * 0x21 +
                                     ((uint)((ulonglong)local_d8 >> 0x10) & 0xff)) * 0x40a9121 +
                              (uVar5 & 0xff) * -0x13be2b1f +
                              ((uint)((ulonglong)local_d8 >> 0x18) & 0xff) * 0x747c7101 +
                              ((uint)local_d8 & 0xff) * 0x30f35d61,param_1);
      local_104._4_8_ = param_2->ChunkOffset;
      local_104._12_8_ = param_2->ChunkSize;
      local_f0 = (undefined8 *)(local_104 + 4);
      local_e8 = &local_108;
      TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TInterval<unsigned___int64>_&&,int_const_&>_>
                (this_00,(TPairInitializer<TInterval<unsigned___int64>_&&,int_const_&> *)local_104,
                 (bool *)&local_f0);
      __GTraceCounterZenJournalSectionedChunks.Value =
           __GTraceCounterZenJournalSectionedChunks.Value + 1;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterZenJournalSectionedChunks.CounterId == (atomic<unsigned_int>)0x0) {
          uVar7 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterZenJournalSectionedChunks.CounterName,
                             TraceCounterType_Int,
                             __GTraceCounterZenJournalSectionedChunks.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterZenJournalSectionedChunks.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterZenJournalSectionedChunks.CounterId._2_2_ = 0;
            __GTraceCounterZenJournalSectionedChunks.CounterId._0_2_ = uVar7;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterZenJournalSectionedChunks.CounterId._0_2_,
                   __GTraceCounterZenJournalSectionedChunks.Value);
      }
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
      EVar8 = Ok;
    }
  }
  else {
    EVar8 = PageFull;
  }
  return EVar8;
}

// Contains @ 148cbf400

bool __thiscall
StorageServer::FJournalChunkPage::Contains(FJournalChunkPage *this,FIoChunkId *param_1)

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
  if (*(int *)&(this->ChunkMap).field_0x8 != *(int *)&(this->ChunkMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ChunkMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ChunkMap).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ChunkMap).field_0x48 - 1U &
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
      lVar3 = *(longlong *)&this->ChunkMap;
      do {
        lVar7 = (longlong)iVar5 * 0x68;
        if ((*(longlong *)(lVar7 + lVar3) == *(longlong *)param_1->Id) &&
           (*(int *)(lVar7 + 8 + lVar3) == *(int *)(param_1->Id + 8))) goto LAB_148cbf52a;
        iVar5 = *(int *)(lVar7 + 0x60 + lVar3);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_148cbf52a:
  return iVar5 != -1;
}

// GetEntry @ 148cc7180

bool __thiscall
StorageServer::FJournalChunkPage::GetEntry
          (FJournalChunkPage *this,FIoChunkId *param_1,ulong64 param_2,ulong64 param_3,
          FCacheEntry *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ulong64 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
  *pTVar8;
  ulong64 *puVar9;
  ulong64 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  TInterval<unsigned___int64> local_18;
  
  pTVar8 = TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
           ::Find((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
                   *)&this->ChunkMap,param_1);
  if ((pTVar8 != (TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
                  *)0x0) &&
     (local_18.Min = param_2, local_18.Max = param_3, uVar7 = ::GetTypeHash(&local_18),
     *(int *)&pTVar8->field_0x8 != *(int *)&pTVar8->field_0x34)) {
    puVar13 = *(undefined1 **)&pTVar8->field_0x40;
    if (*(undefined1 **)&pTVar8->field_0x40 == (undefined1 *)0x0) {
      puVar13 = &pTVar8->field_0x38;
    }
    iVar14 = *(int *)(puVar13 + (ulonglong)(*(int *)&pTVar8->field_0x48 - 1U & uVar7) * 4);
    if (iVar14 != -1) {
      do {
        puVar10 = (ulong64 *)((longlong)iVar14 * 0x20 + *(longlong *)pTVar8);
        if ((*puVar10 == param_2) && (puVar10[1] == param_3)) {
          if (iVar14 == -1) {
            return false;
          }
          puVar9 = puVar10 + 2;
          if (puVar10 == (ulong64 *)0x0) {
            puVar9 = (ulong64 *)0x0;
          }
          if (puVar9 == (ulong64 *)0x0) {
            return false;
          }
          uVar7 = (uint)*puVar9;
          lVar12 = (longlong)(int)uVar7;
          uVar11 = 0;
          if ((int)uVar7 < (this->Entries).ArrayNum) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          pFVar1 = (this->Entries).AllocatorInstance.Data;
          uVar3 = *(ulong64 *)(pFVar1 + lVar12 * 0x50 + 0x10 + 8);
          param_4->ChunkOffset = *(ulong64 *)(pFVar1 + lVar12 * 0x50 + 0x10);
          param_4->ChunkSize = uVar3;
          uVar3 = *(ulong64 *)(pFVar1 + lVar12 * 0x50 + 0x20 + 8);
          param_4->StorageOffset = *(ulong64 *)(pFVar1 + lVar12 * 0x50 + 0x20);
          param_4->StorageSize = uVar3;
          uVar4 = *(undefined8 *)(pFVar1 + lVar12 * 0x50 + 0x30 + 8);
          *(undefined8 *)(param_4->StorageHash).Hash =
               *(undefined8 *)(pFVar1 + lVar12 * 0x50 + 0x30);
          *(undefined8 *)((param_4->StorageHash).Hash + 8) = uVar4;
          *(undefined8 *)((param_4->StorageHash).Hash + 0x10) =
               *(undefined8 *)(pFVar1 + lVar12 * 0x50 + 0x40);
          return true;
        }
        iVar14 = (int)puVar10[3];
      } while (iVar14 != -1);
    }
  }
  return false;
}

// Invalidate @ 148ccbd70

void __thiscall
StorageServer::FJournalChunkPage::Invalidate(FJournalChunkPage *this,FIoChunkId *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  local_18 = (TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
              *)TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
                ::Find((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
                        *)&this->ChunkMap,param_1);
  if (local_18 !=
      (TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
       *)0x0) {
    TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_78,local_18);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar8 = local_78._24_8_ >> 0x20;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar9 = *(uint *)((longlong)(int)uVar8 * 0x20 + 0x10 + *local_48);
        uVar6 = 0;
        if ((int)uVar9 < (this->Entries).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->Entries).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x50 + 0x48] =
             (FScriptContainerElement)0x0;
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar8 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
          local_18->HashSize = iVar7;
          TSet<TTuple<TInterval<unsigned___int64>,int>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    __GTraceCounterZenJournalSectionedChunks.Value =
         __GTraceCounterZenJournalSectionedChunks.Value + -1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenJournalSectionedChunks.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenJournalSectionedChunks.CounterName,TraceCounterType_Int
                           ,__GTraceCounterZenJournalSectionedChunks.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenJournalSectionedChunks.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenJournalSectionedChunks.CounterId._2_2_ = 0;
          __GTraceCounterZenJournalSectionedChunks.CounterId._0_2_ = uVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenJournalSectionedChunks.CounterId._0_2_,
                 __GTraceCounterZenJournalSectionedChunks.Value);
    }
    if (*(int *)&(this->ChunkMap).field_0x8 != *(int *)&(this->ChunkMap).field_0x34) {
      uVar9 = *(uint *)(param_1->Id + 8);
      uVar1 = *(undefined8 *)param_1->Id;
      uVar6 = (uint)((ulonglong)uVar1 >> 0x20);
      TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FIoChunkId>
                ((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
                  *)&this->ChunkMap,
                 (uVar9 >> 0x18) + 0x58a2c485 +
                 ((((((uVar6 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)) *
                     0x21 + (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 + (uVar9 & 0xff)) * 0x21
                  + (uVar9 >> 8 & 0xff)) * 0x21 + (uVar9 >> 0x10 & 0xff)) * 0x21 +
                 (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 +
                 ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)) * 0x40a9121 +
                 (uVar6 & 0xff) * -0x13be2b1f +
                 ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 +
                 ((uint)uVar1 & 0xff) * 0x30f35d61,param_1);
    }
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    this->bContainsInvalidEntries = true;
  }
  return;
}

// InvalidateAll @ 148ccc5c0

void __thiscall StorageServer::FJournalChunkPage::InvalidateAll(FJournalChunkPage *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = &(this->Entries).ArrayMax;
  (this->Entries).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->Entries).AllocatorInstance,0,piVar1);
  }
  bVar4 = 1 < *(int *)&(this->ChunkMap).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
                      *)&this->ChunkMap);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ChunkMap,0,*(int *)&(this->ChunkMap).field_0x8);
  puVar2 = &(this->ChunkMap).field_0xc;
  *(undefined4 *)&(this->ChunkMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&this->ChunkMap,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ChunkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->ChunkMap).field_0x2c;
  *(undefined4 *)&(this->ChunkMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ChunkMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChunkMap).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ChunkMap).field_0x48 = 1;
    TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>,FDefaultSetAllocator>
              *)&this->ChunkMap);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return;
}

// IsFull @ 148cccb90

bool __thiscall StorageServer::FJournalChunkPage::IsFull(FJournalChunkPage *this)

{
  return (this->Entries).ArrayNum == this->MaxEntryCount;
}

// IterateCacheEntries @ 148ccd670

void __thiscall
StorageServer::FJournalChunkPage::IterateCacheEntries
          (FJournalChunkPage *this,
          TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheEntry_const_&)> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<StorageServer::FJournalStoreEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2,pFVar2 + 0x10);
    pFVar2 = pFVar2 + 0x50;
  }
  return;
}

// IterateCacheEntriesForChunkId @ 148ccda80

void __thiscall
StorageServer::FJournalChunkPage::IterateCacheEntriesForChunkId
          (FJournalChunkPage *this,FIoChunkId *param_1,
          TFunctionRef<void___cdecl(StorageServer::FCacheEntry_const_&)> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
  *pTVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  pTVar7 = TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
           ::Find((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>,0>_>
                   *)&this->ChunkMap,param_1);
  if (pTVar7 != (TMap<TInterval<unsigned___int64>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,int,0>_>
                 *)0x0) {
    iVar10 = 0;
    TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar7->field_0x10;
    iVar2 = *(int *)&pTVar7->field_0x28;
    iVar9 = 0;
    uVar5 = 1;
    TStack_40.CurrentBitIndex = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&pTVar7->field_0x20;
      if (*(uint **)&pTVar7->field_0x20 == (uint *)0x0) {
        puVar11 = (uint *)TStack_40.Array;
      }
      uVar6 = *puVar11;
      while (uVar6 == 0) {
        lVar8 = (longlong)iVar10;
        iVar9 = iVar9 + 0x20;
        iVar10 = iVar10 + 1;
        TStack_40.CurrentBitIndex = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148ccdb42;
        uVar6 = puVar11[lVar8 + 1];
      }
      uVar5 = -uVar6 & uVar6;
      uVar1 = (ulonglong)uVar5 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      TStack_40.CurrentBitIndex = iVar9 + -1 + (int)lVar8;
      if (iVar2 < TStack_40.CurrentBitIndex) {
        TStack_40.CurrentBitIndex = iVar2;
      }
    }
LAB_148ccdb42:
    TStack_40._padding_ = CONCAT44(uVar5,iVar10);
    TStack_40.UnvisitedBitMask = 0xffffffff;
    TStack_40._28_4_ = TStack_40.CurrentBitIndex;
    TStack_40.BaseBitIndex = iVar9;
    if (TStack_40.CurrentBitIndex < *(int *)&pTVar7->field_0x28) {
      do {
        uVar5 = *(uint *)((longlong)TStack_40.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)pTVar7);
        uVar6 = 0;
        if ((int)uVar5 < (this->Entries).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,
                   (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x50 + 0x10);
        TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
      } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
    }
  }
  return;
}

// Serialize @ 148cdd920

void __thiscall
StorageServer::FJournalChunkPage::Serialize(FJournalChunkPage *this,FArchive *param_1)

{
  StorageServer::operator<<(param_1,this);
  return;
}

