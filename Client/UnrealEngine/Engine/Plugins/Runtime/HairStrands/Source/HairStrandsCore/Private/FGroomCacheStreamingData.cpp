// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 15

// FGroomCacheStreamingData @ 14dfeddf0

FGroomCacheStreamingData * __thiscall
FGroomCacheStreamingData::FGroomCacheStreamingData
          (FGroomCacheStreamingData *this,UGroomCache *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  this->GroomCache = param_1;
  pTVar2 = (TNode *)0x0;
  (this->ChunksNeeded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunksNeeded).ArrayNum = 0;
  (this->ChunksNeeded).ArrayMax = 0;
  *(undefined8 *)&(this->ChunksAvailable).Elements = 0;
  *(undefined8 *)&(this->ChunksAvailable).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ChunksAvailable).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ChunksAvailable).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ChunksAvailable).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunksAvailable).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunksAvailable).Elements.field_0x34 = 0;
  (this->ChunksAvailable).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ChunksAvailable).HashSize = 0;
  *(undefined8 *)&(this->ChunksRequested).Elements = 0;
  *(undefined8 *)&(this->ChunksRequested).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ChunksRequested).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ChunksRequested).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ChunksRequested).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunksRequested).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunksRequested).Elements.field_0x34 = 0;
  (this->ChunksRequested).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ChunksRequested).HashSize = 0;
  *(undefined8 *)&(this->ChunksEvicted).Elements = 0;
  *(undefined8 *)&(this->ChunksEvicted).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ChunksEvicted).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ChunksEvicted).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ChunksEvicted).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunksEvicted).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunksEvicted).Elements.field_0x34 = 0;
  (this->ChunksEvicted).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ChunksEvicted).HashSize = 0;
  *(undefined8 *)&this->Chunks = 0;
  *(undefined8 *)&(this->Chunks).field_0x8 = 0;
  *(undefined8 *)&(this->Chunks).field_0x20 = 0;
  *(undefined4 *)&(this->Chunks).field_0x28 = 0;
  *(undefined4 *)&(this->Chunks).field_0x2c = 0x80;
  *(undefined4 *)&(this->Chunks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Chunks).field_0x34 = 0;
  *(undefined8 *)&(this->Chunks).field_0x40 = 0;
  *(undefined4 *)&(this->Chunks).field_0x48 = 0;
  pTVar1 = ::operator_new(0x20);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AnimDataPtr = (FGroomCacheAnimationData *)0x0;
    (pTVar1->Item).ReadRequest = (IBulkDataIORequest *)0x0;
    (pTVar1->Item).LoadedChunkIndex = 0;
    (pTVar1->Item).bReadSuccessful = false;
    *(undefined3 *)&(pTVar1->Item).field_0x15 = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).AnimDataPtr = (FGroomCacheAnimationData *)0x0;
    (pTVar1->Item).ReadRequest = (IBulkDataIORequest *)0x0;
    (pTVar1->Item).LoadedChunkIndex = 0;
    (pTVar1->Item).bReadSuccessful = false;
    pTVar2 = pTVar1;
  }
  (this->CompletedChunks).Tail = pTVar2;
  (this->CompletedChunks).Head = pTVar2;
  *(undefined8 *)&(this->DelayedDeleteReadRequests).Elements = 0;
  *(undefined8 *)&(this->DelayedDeleteReadRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DelayedDeleteReadRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DelayedDeleteReadRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DelayedDeleteReadRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DelayedDeleteReadRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DelayedDeleteReadRequests).Elements.field_0x34 = 0;
  (this->DelayedDeleteReadRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DelayedDeleteReadRequests).HashSize = 0;
  this->LastUpdate = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~FGroomCacheStreamingData @ 14dff1790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FGroomCacheStreamingData::~FGroomCacheStreamingData(FGroomCacheStreamingData *this)

{
  TMap<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
  *this_00;
  undefined8 *puVar1;
  ForElementType<FSetElementId> FVar2;
  TNode *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *local_160
  ;
  uint uStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  longlong *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
  *local_f8;
  undefined2 local_f0;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
  *pTStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  BlockTillAllRequestsFinished(this,0.0);
  local_5c = 0x80;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar13 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>::operator=
            ((TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
              *)local_88,&this->DelayedDeleteReadRequests);
  uVar16 = local_60;
  iVar15 = 1;
  local_140 = 0;
  uStack_154 = 1;
  uStack_144 = local_140;
  if (local_60 != 0) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uStack_154 = *puVar14;
    local_140 = 0;
    uVar13 = 0;
    while (uStack_154 == 0) {
      lVar10 = (longlong)(int)uVar13;
      local_140 = local_140 + 0x20;
      uVar13 = uVar13 + 1;
      uStack_154 = 1;
      uStack_144 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_14dff1884;
      uStack_154 = puVar14[lVar10 + 1];
    }
    uStack_154 = -uStack_154 & uStack_154;
    uVar11 = (ulonglong)uStack_154 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_130 = (int)lVar10;
    uStack_144 = (local_140 - 1) + local_130;
    if ((int)local_60 < (int)uStack_144) {
      uStack_144 = local_60;
    }
  }
LAB_14dff1884:
  local_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar17 = local_60 & 0xffffffe0;
  iStack_138 = local_88._8_4_ - local_54;
  uStack_148 = 0xffffffff;
  TStack_e0.CurrentBitIndex = uStack_144;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_154,uVar13);
  iVar12 = (int)local_60 >> 5;
  TStack_e0._28_4_ = uStack_144;
  TStack_e0.BaseBitIndex = local_140;
  uStack_c0 = CONCAT44(uStack_134,iStack_138);
  bVar9 = (byte)local_60;
  local_160 = (TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
               *)local_88;
  uStack_158 = uVar13;
  uStack_13c = uStack_144;
  local_e8 = (TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
              *)local_88;
  TStack_e0.Array = local_150;
  if (((int)local_60 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar16 != local_60) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar13 = -1 << (bVar9 & 0x1f) & puVar14[iVar12];
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14dff198d;
      uVar13 = puVar14[lVar10 + 1];
    }
    uVar11 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = (int)lVar10 + -1 + uVar17;
    if ((int)local_60 < (int)uVar16) {
      uVar16 = local_60;
    }
  }
LAB_14dff198d:
  while( true ) {
    pTVar7 = local_e8;
    if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
        (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (((TStack_e0.CurrentBitIndex == uVar16) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (pTVar7 == (TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
                   *)local_88)) break;
    puVar1 = *(undefined8 **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_e0.CurrentBitIndex * 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  this_00 = &this->Chunks;
  TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_b8,
             (TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
              *)this_00);
  local_f0 = 0;
  stack0xfffffffffffffee8 = local_b8._16_16_;
  local_128 = (longlong *)local_b8._0_8_;
  auStack_120._0_8_ = local_b8._8_8_;
  local_108 = local_98;
  pTStack_100 = pTStack_90;
  uVar11 = local_b8._24_8_ >> 0x20;
  local_f8 = (TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_b8._28_4_ < *(int *)(local_b8._16_8_ + 0x18)) {
    do {
      puVar1 = *(undefined8 **)(*local_128 + 8 + (longlong)(int)uVar11 * 0x28);
      if (puVar1 != (undefined8 *)0x0) {
        DestructItems<FGroomCacheGroupData,int>
                  ((FGroomCacheGroupData *)*puVar1,*(int *)(puVar1 + 1));
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
        ::operator_delete(puVar1,0x18);
      }
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      uVar11 = (ulonglong)uStack_10c;
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
      uVar13 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
      if (3 < uVar13) {
        uVar11 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_f8->HashSize < iVar15)) || (iVar15 < local_f8->HashSize)) {
        local_f8->HashSize = iVar15;
        TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
        ::Rehash(local_f8);
      }
    }
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  (this->DelayedDeleteReadRequests).HashSize = 0;
  FVar2 = (this->DelayedDeleteReadRequests).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DelayedDeleteReadRequests).Elements);
  pTVar3 = (this->CompletedChunks).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->CompletedChunks).Tail = pTVar3->NextNode;
    ::operator_delete(pTVar3,0x20);
    pTVar3 = (this->CompletedChunks).Tail;
  }
  *(undefined4 *)&(this->Chunks).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Chunks).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FResidentGroomCacheChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FResidentGroomCacheChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FResidentGroomCacheChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  (this->ChunksEvicted).HashSize = 0;
  FVar2 = (this->ChunksEvicted).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ChunksEvicted).Elements);
  (this->ChunksRequested).HashSize = 0;
  FVar2 = (this->ChunksRequested).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ChunksRequested).Elements);
  (this->ChunksAvailable).HashSize = 0;
  FVar2 = (this->ChunksAvailable).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ChunksAvailable).Elements);
  pFVar5 = (this->ChunksNeeded).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// operator() @ 14dff5780

void __thiscall
`FGroomCacheStreamingData::UpdateStreamingStatus'::__l18::<lambda_1>::operator()
          (void *this,bool param_1,IBulkDataIORequest *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  void *pvVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined7 uVar11;
  undefined8 *puVar12;
  bool bVar13;
  bool bVar14;
  uint uStack_d4;
  FArchiveState local_c8;
  undefined8 local_38;
  void *local_30;
  longlong local_28;
  undefined8 local_20;
  
  pcVar10 = (char *)0x0;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    pcVar10 = "FGroomCacheStreamingData::CompletedCallBack";
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId200,"FGroomCacheStreamingData::CompletedCallBack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
               ,200);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId200);
  }
  uVar4 = *(undefined8 *)((longlong)this + 0x10);
  uVar2 = *(undefined4 *)((longlong)this + 8);
  uVar6 = uStack_d4 >> 8;
  uStack_d4 = uStack_d4 & 0xffffff00;
  pvVar8 = (void *)(**(code **)((longlong)*param_2 + 0x18))(param_2);
  if (pvVar8 != (void *)0x0) {
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      pcVar10 = "FGroomCacheStreamingData::CompletedCallBack_BufferSerialize";
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId207,
                 "FGroomCacheStreamingData::CompletedCallBack_BufferSerialize",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
                 ,0xcf);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId207);
    }
    iVar3 = *(int *)((longlong)this + 0xc);
    if (iVar3 < 0) {
      pcVar10 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h";
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_c8._padding_ = 0;
    local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_c8._40_8_ = 0;
    local_c8.ArSerializingDefaults = 0;
    local_c8.ArPortFlags = 0;
    local_c8.ArMaxSerializeSize = 0;
    local_c8.ArUEVer.FileVersionUE4 = 0;
    local_c8.ArUEVer.FileVersionUE5 = 0;
    local_c8.ArLicenseeUEVer = 0;
    local_c8.ArEngineVer.Major = 0;
    local_c8.ArEngineVer.Minor = 0;
    local_c8.ArEngineVer.Patch = 0;
    local_c8.ArEngineVer._6_2_ = 0;
    local_c8.ArEngineVer.Changelist = 0;
    local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_c8.SerializedProperty = (FProperty *)0x0;
    local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_c8.bCustomVersionsAreReset = false;
    local_c8._129_7_ = 0;
    local_c8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_c8);
    local_38 = 0;
    local_20 = 0x7fffffffffffffff;
    uVar11 = (undefined7)((ulonglong)pcVar10 >> 8);
    local_c8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_30 = pvVar8;
    local_28 = (longlong)iVar3;
    FArchiveState::SetIsLoading(&local_c8,true);
    (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar11,1));
    local_c8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    if (*(char *)(**(longlong **)this + 0x40) != '\0') {
      FArchiveState::SetUEVer(&local_c8,*(FPackageFileVersion *)(**(longlong **)this + 0x38));
    }
    FGroomCacheAnimationData::Serialize
              (*(FGroomCacheAnimationData **)((longlong)this + 0x10),(FArchive *)&local_c8);
    FMemory::Free(pvVar8);
    uStack_d4 = CONCAT31((int3)uVar6,1);
    FArchive::~FArchive((FArchive *)&local_c8);
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  puVar12 = (undefined8 *)(*(longlong *)this + 0x160);
  puVar9 = ::operator_new(0x20);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0;
    puVar9[1] = uVar4;
    puVar9[2] = param_2;
    puVar9[3] = CONCAT44(uStack_d4,uVar2);
    if (((ulonglong)puVar12 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    puVar1 = (undefined8 *)*puVar12;
    *puVar12 = puVar9;
    UNLOCK();
    if (((ulonglong)puVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    *puVar1 = puVar9;
    UNLOCK();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14dff6250

void __thiscall
`FGroomCacheStreamingData::UpdateStreamingStatus'::__l104::<lambda_2>::operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dff62ed;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14dff62ed:
  uVar11 = *(uint *)((longlong)this + 0x28);
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34));
  TStack_50.Array = pTVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)((longlong)this + 0x28);
  if (uVar11 != uVar7) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dff63f0;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14dff63f0:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) && (TStack_50.Array == pTVar1)) break;
    puVar4 = *(undefined8 **)(*(longlong *)this + (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// AddNeededChunk @ 14dff7f60

void __thiscall
FGroomCacheStreamingData::AddNeededChunk(FGroomCacheStreamingData *this,uint param_1)

{
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
            (&this->ChunksNeeded,(int *)local_res10);
  return;
}

// AddResidentChunk @ 14dff8050

FResidentGroomCacheChunk * __thiscall
FGroomCacheStreamingData::AddResidentChunk
          (FGroomCacheStreamingData *this,int param_1,FGroomCacheChunk *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FResidentGroomCacheChunk *pFVar1;
  FGroomCacheAnimationData *pFVar2;
  FGroomCacheAnimationData *pFVar3;
  uint local_res10 [2];
  
  lpCriticalSection = &this->CriticalSection;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = TMapBase<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
                       *)&this->Chunks,local_res10[0],(int *)local_res10);
  pFVar1->DataSize = param_2->DataSize;
  if (pFVar1->AnimDataPtr == (FGroomCacheAnimationData *)0x0) {
    pFVar2 = ::operator_new(0x18);
    pFVar3 = (FGroomCacheAnimationData *)0x0;
    if (pFVar2 != (FGroomCacheAnimationData *)0x0) {
      pFVar2->Attributes = None;
      *(undefined3 *)&pFVar2->field_0x11 = 0;
      pFVar2->Version = 0;
      (pFVar2->GroupsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->GroupsData).ArrayNum = 0;
      (pFVar2->GroupsData).ArrayMax = 0;
      pFVar3 = pFVar2;
    }
    pFVar1->AnimDataPtr = pFVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar1;
}

// BlockTillAllRequestsFinished @ 14dff86e0

bool __thiscall
FGroomCacheStreamingData::BlockTillAllRequestsFinished(FGroomCacheStreamingData *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
  *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uVar10;
  LARGE_INTEGER local_res8;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->Chunks;
  local_48 = (TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (param_1 == 0.0) {
    TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a8,
               (TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_40 = 0;
    stack0xffffffffffffff98 = local_a8._16_16_;
    local_78 = (longlong *)local_a8._0_8_;
    auStack_70._0_8_ = local_a8._8_8_;
    local_58 = local_88;
    pTStack_50 = pTStack_80;
    uVar8 = local_a8._24_8_ >> 0x20;
    if (*(int *)(local_a8._16_8_ + 0x18) <= local_a8._28_4_) goto LAB_14dff899b;
    do {
      plVar2 = *(longlong **)(*local_78 + 0x10 + (longlong)(int)uVar8 * 0x28);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
        ProcessCompletedChunks(this);
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar8 = (ulonglong)uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
  }
  else {
    QueryPerformanceCounter(&local_res8);
    dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a8,
               (TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
                *)pTVar1);
    fVar5 = __real_3a83126f;
    local_40 = 0;
    stack0xffffffffffffff98 = local_a8._16_16_;
    local_78 = (longlong *)local_a8._0_8_;
    auStack_70._0_8_ = local_a8._8_8_;
    local_58 = local_88;
    pTStack_50 = pTStack_80;
    uVar8 = local_a8._24_8_ >> 0x20;
    uVar10 = local_a8._28_4_;
    if (*(int *)(local_a8._16_8_ + 0x18) <= (int)uVar10) goto LAB_14dff899b;
    while( true ) {
      plVar2 = local_78;
      if (*(longlong *)(*local_78 + 0x10 + (longlong)(int)uVar8 * 0x28) != 0) {
        QueryPerformanceCounter(&local_res8);
        if (((float)((dVar4 + (double)param_1) -
                    (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle) < fVar5) ||
           (cVar6 = (**(code **)(**(longlong **)(*plVar2 + 0x10 + (longlong)(int)uVar10 * 0x28) +
                                0x10))(), cVar6 == '\0')) {
          if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
            uVar10 = *(int *)&(local_48->Elements).field_0x8 -
                     *(int *)&(local_48->Elements).field_0x34;
            if (uVar10 < 4) {
              iVar7 = 1;
            }
            else {
              uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar8 != 0) {
                for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              iVar7 = 1 << ((byte)lVar3 & 0x1f);
            }
            if (((0 < (int)uVar10) && (local_48->HashSize < iVar7)) || (iVar7 < local_48->HashSize))
            {
              local_48->HashSize = iVar7;
              TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
              ::Rehash(local_48);
            }
          }
          bVar9 = false;
          goto LAB_14dff899e;
        }
        ProcessCompletedChunks(this);
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      if (*(int *)(auStack_70._8_8_ + 0x18) <= (int)uStack_5c) break;
      uVar8 = (ulonglong)uStack_5c;
      uVar10 = uStack_5c;
    }
  }
  if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
    uVar10 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
    if (uVar10 < 4) {
      iVar7 = 1;
    }
    else {
      uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((0 < (int)uVar10) && (local_48->HashSize < iVar7)) || (iVar7 < local_48->HashSize)) {
      local_48->HashSize = iVar7;
      TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
      ::Rehash(local_48);
    }
  }
LAB_14dff899b:
  bVar9 = true;
LAB_14dff899e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar9;
}

// IsStreamingInProgress @ 14e020cc0

bool __thiscall FGroomCacheStreamingData::IsStreamingInProgress(FGroomCacheStreamingData *this)

{
  return 0 < *(int *)&(this->ChunksRequested).Elements.field_0x8 -
             *(int *)&(this->ChunksRequested).Elements.field_0x34;
}

// MapAnimationData @ 14e020f20

/* WARNING: Enum "Type": Some values do not have unique names */

FGroomCacheAnimationData * __thiscall
FGroomCacheStreamingData::MapAnimationData(FGroomCacheStreamingData *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGroomCacheAnimationData *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  ForElementType<FSetElementId> FVar7;
  undefined1 *puVar8;
  FGroomCacheAnimationData *pFVar9;
  bool bVar10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId406,"FGroomCacheStreamingData::MapAnimationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
               ,0x196);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId406);
  }
  ProcessCompletedChunks(this);
  if (*(int *)&(this->ChunksAvailable).Elements.field_0x8 !=
      *(int *)&(this->ChunksAvailable).Elements.field_0x34) {
    FVar7 = (this->ChunksAvailable).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->ChunksAvailable).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->ChunksAvailable).HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->ChunksAvailable).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar4 * 0xc) == param_1) {
          if (iVar4 != -1) {
            lpCriticalSection = &this->CriticalSection;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            pFVar5 = (FGroomCacheAnimationData *)0x0;
            if (*(int *)&(this->Chunks).field_0x8 == *(int *)&(this->Chunks).field_0x34)
            goto LAB_14e021167;
            puVar8 = *(undefined1 **)&(this->Chunks).field_0x40;
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &(this->Chunks).field_0x38;
            }
            iVar4 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & param_1)
                                      * 4);
            if (iVar4 == -1) goto LAB_14e021167;
            goto LAB_14e021150;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  if (*(int *)&(this->ChunksRequested).Elements.field_0x8 !=
      *(int *)&(this->ChunksRequested).Elements.field_0x34) {
    FVar7 = (this->ChunksRequested).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->ChunksRequested).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->ChunksRequested).HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->ChunksRequested).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar4 * 0xc) == param_1) {
          if ((byte)LogGroomCacheStreaming._0_1_ < 5) goto LAB_14e0210b7;
          pFVar6 = &::LOG_Static;
          goto LAB_14e0210a8;
        }
        iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  if (*(int *)&(this->ChunksEvicted).Elements.field_0x8 !=
      *(int *)&(this->ChunksEvicted).Elements.field_0x34) {
    FVar7 = (this->ChunksEvicted).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->ChunksEvicted).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->ChunksEvicted).HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->ChunksEvicted).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar4 * 0xc) == param_1) {
          if ((byte)LogGroomCacheStreaming._0_1_ < 5) goto LAB_14e0210b7;
          pFVar6 = &::LOG_Static;
          goto LAB_14e0210a8;
        }
        iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  if (4 < (byte)LogGroomCacheStreaming._0_1_) {
    pFVar6 = &::LOG_Static;
LAB_14e0210a8:
    UE::Logging::Private::BasicLog<5>(pFVar6,(FLogCategoryBase *)&LogGroomCacheStreaming);
  }
LAB_14e0210b7:
  pFVar5 = (FGroomCacheAnimationData *)0x0;
LAB_14e0210ba:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar5;
  while (iVar4 = *(int *)(lVar1 + 0x20), iVar4 != -1) {
LAB_14e021150:
    lVar1 = *(longlong *)&this->Chunks + (longlong)iVar4 * 0x28;
    if (*(uint *)(*(longlong *)&this->Chunks + (longlong)iVar4 * 0x28) == param_1) {
      pFVar9 = (FGroomCacheAnimationData *)(lVar1 + 8);
      if (lVar1 == 0) {
        pFVar9 = pFVar5;
      }
      if (pFVar9 != (FGroomCacheAnimationData *)0x0) {
        if (((pFVar9->GroupsData).AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ResidentChunk->AnimDataPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
                               ,0x1b5,
                               L"Tried to map a chunk without data. Make sure its bookkeeping is up to date."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FGroomCacheAnimationData *)(*pcVar2)();
          return pFVar5;
        }
        *(int *)&pFVar9->Attributes = *(int *)&pFVar9->Attributes + 1;
        pFVar5 = (FGroomCacheAnimationData *)(pFVar9->GroupsData).AllocatorInstance.Data;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        goto LAB_14e0210ba;
      }
      break;
    }
  }
LAB_14e021167:
  if (4 < (byte)LogGroomCacheStreaming._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGroomCacheStreaming);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  goto LAB_14e0210ba;
}

// PrefetchData @ 14e022620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingData::PrefetchData(FGroomCacheStreamingData *this,UGroomComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  UGroomCache *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  UClass *this_00;
  FResidentGroomCacheChunk *pFVar11;
  FGroomCacheAnimationData *pFVar12;
  int iVar13;
  ulonglong uVar14;
  ForElementType<FSetElementId> FVar15;
  int *piVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  bool bVar20;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20 [2];
  uint local_88 [2];
  int local_80;
  int local_7c;
  longlong local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70 [3];
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId82,"FGroomCacheStreamingData::PrefetchData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
               ,0x52);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId82);
  }
  fVar2 = param_1->ElapsedTime;
  this_00 = Z_Construct_UClass_UGroomPluginSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  uVar17 = 0;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  UGroomCache::GetFrameIndicesForTimeRange
            (this->GroomCache,fVar2,
             fVar2 + *(float *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1),
             param_1->bLooping,local_70);
  iVar8 = local_70[0].ArrayNum;
  uVar14 = (ulonglong)local_70[0].ArrayNum;
  pFVar1 = local_70[0].AllocatorInstance.Data + uVar14 * 4;
  FVar18.Data = local_70[0].AllocatorInstance.Data;
  while( true ) {
    iVar13 = (int)uVar14;
    if ((int)uVar14 != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      iVar13 = local_70[0].ArrayNum;
    }
    if (FVar18.Data == pFVar1) break;
    local_res20[0] = *(int *)FVar18.Data;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&this->ChunksNeeded,local_res20);
    uVar14 = local_70[0]._8_8_ & 0xffffffff;
    FVar18.Data = FVar18.Data + 4;
  }
  iVar8 = 2;
  if (iVar13 < 2) {
    iVar8 = iVar13;
  }
  local_78 = (longlong)iVar8;
  uVar14 = uVar17;
  if (0 < local_78) {
    do {
      ProcessCompletedChunks(this);
      uVar19 = (uint)uVar14;
      uVar9 = 0;
      if ((int)uVar19 < local_70[0].ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *(uint *)(local_70[0].AllocatorInstance.Data + uVar17 * 4);
      local_res18[0] = uVar9;
      if (*(int *)&(this->ChunksAvailable).Elements.field_0x8 !=
          *(int *)&(this->ChunksAvailable).Elements.field_0x34) {
        FVar3 = (this->ChunksAvailable).Hash.SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&(this->ChunksAvailable).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar3;
        }
        iVar8 = *(int *)((longlong)FVar15 +
                        (ulonglong)((this->ChunksAvailable).HashSize - 1U & uVar9) * 4);
        if (iVar8 != -1) {
          lVar4 = *(longlong *)&(this->ChunksAvailable).Elements;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar8 * 0xc) == uVar9) goto LAB_14e022977;
            iVar8 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0xc);
          } while (iVar8 != -1);
        }
      }
      if (*(int *)&(this->ChunksEvicted).Elements.field_0x8 !=
          *(int *)&(this->ChunksEvicted).Elements.field_0x34) {
        FVar3 = (this->ChunksEvicted).Hash.SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&(this->ChunksEvicted).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar3;
        }
        iVar8 = *(int *)((longlong)FVar15 +
                        (ulonglong)((this->ChunksEvicted).HashSize - 1U & uVar9) * 4);
        if (iVar8 != -1) {
          lVar4 = *(longlong *)&(this->ChunksEvicted).Elements;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar8 * 0xc) == uVar9) {
              local_88[0] = uVar9;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        (&this->ChunksEvicted,uVar9,(int *)local_88);
              piVar16 = &local_80;
              goto LAB_14e022967;
            }
            iVar8 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0xc);
          } while (iVar8 != -1);
        }
      }
      pUVar5 = this->GroomCache;
      uVar10 = 0;
      if ((int)uVar9 < (pUVar5->Chunks).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = AddResidentChunk(this,uVar9,
                                 (FGroomCacheChunk *)
                                 ((pUVar5->Chunks).AllocatorInstance.Data +
                                 (longlong)(int)uVar9 * 0x30));
      if (*(int *)&(this->ChunksRequested).Elements.field_0x8 !=
          *(int *)&(this->ChunksRequested).Elements.field_0x34) {
        FVar3 = (this->ChunksRequested).Hash.SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&(this->ChunksRequested).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar3;
        }
        iVar8 = *(int *)((longlong)FVar15 +
                        (ulonglong)((this->ChunksRequested).HashSize - 1U & uVar9) * 4);
        if (iVar8 != -1) {
          lVar4 = *(longlong *)&(this->ChunksRequested).Elements;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar8 * 0xc) == uVar9) {
              pFVar12 = ::operator_new(0x18);
              if (pFVar12 != (FGroomCacheAnimationData *)0x0) {
                pFVar12->Attributes = None;
                *(undefined3 *)&pFVar12->field_0x11 = 0;
                pFVar12->Version = 0;
                (pFVar12->GroupsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar12->GroupsData).ArrayNum = 0;
                (pFVar12->GroupsData).ArrayMax = 0;
                uVar9 = local_res18[0];
              }
              pFVar11->AnimDataPtr = pFVar12;
              break;
            }
            iVar8 = *(int *)(lVar4 + 4 + (longlong)iVar8 * 0xc);
          } while (iVar8 != -1);
        }
      }
      UGroomCache::GetGroomDataAtFrameIndex(this->GroomCache,uVar9,pFVar11->AnimDataPtr);
      piVar16 = &local_7c;
LAB_14e022967:
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->ChunksAvailable,piVar16,(bool *)local_res18);
LAB_14e022977:
      uVar17 = uVar17 + 1;
      uVar14 = (ulonglong)(uVar19 + 1);
    } while ((longlong)uVar17 < local_78);
  }
  UpdateStreamingStatus(this,true);
  if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessCompletedChunks @ 14e022b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGroomCacheStreamingData::ProcessCompletedChunks(FGroomCacheStreamingData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  FGroomCacheAnimationData *pFVar6;
  IBulkDataIORequest *pIVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  bool bVar12;
  uint local_res8 [2];
  int local_res10 [2];
  IBulkDataIORequest *local_res18 [2];
  IBulkDataIORequest *pIStack_70;
  undefined8 local_68;
  undefined4 local_50;
  uint uStack_4c;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId352,"FGroomCacheStreamingData::ProcessCompletedChunks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
               ,0x160);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId352);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  while (pTVar2 = ((this->CompletedChunks).Tail)->NextNode, pTVar2 != (TNode *)0x0) {
    local_68._0_4_ = (pTVar2->Item).LoadedChunkIndex;
    local_68._4_1_ = (pTVar2->Item).bReadSuccessful;
    local_68._5_3_ = *(undefined3 *)&(pTVar2->Item).field_0x15;
    pFVar6 = (pTVar2->Item).AnimDataPtr;
    pIVar7 = (pTVar2->Item).ReadRequest;
    pTVar3 = (this->CompletedChunks).Tail;
    (this->CompletedChunks).Tail = pTVar2;
    (pTVar2->Item).AnimDataPtr = (FGroomCacheAnimationData *)0x0;
    (pTVar2->Item).ReadRequest = (IBulkDataIORequest *)0x0;
    local_50 = 0;
    uStack_4c = uStack_4c & 0xffffff00;
    lVar1 = (ulonglong)uStack_4c << 0x20;
    (pTVar2->Item).LoadedChunkIndex = (int)lVar1;
    (pTVar2->Item).bReadSuccessful = (bool)(char)((ulonglong)lVar1 >> 0x20);
    *(int3 *)&(pTVar2->Item).field_0x15 = (int3)((ulonglong)lVar1 >> 0x28);
    pIStack_70 = pIVar7;
    ::operator_delete(pTVar3,0x20);
    if (*(int *)&(this->Chunks).field_0x8 == *(int *)&(this->Chunks).field_0x34) break;
    puVar4 = *(undefined1 **)&(this->Chunks).field_0x40;
    uVar8 = (uint)local_68;
    puVar10 = &(this->Chunks).field_0x38;
    if (puVar4 != (undefined1 *)0x0) {
      puVar10 = puVar4;
    }
    iVar9 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & (uint)local_68) * 4);
    if (iVar9 == -1) break;
    while (lVar1 = *(longlong *)&this->Chunks + (longlong)iVar9 * 0x28,
          *(uint *)(*(longlong *)&this->Chunks + (longlong)iVar9 * 0x28) != (uint)local_68) {
      iVar9 = *(int *)(lVar1 + 0x20);
      if (iVar9 == -1) goto LAB_14e022cd7;
    }
    plVar11 = (longlong *)(lVar1 + 8);
    if (lVar1 == 0) {
      plVar11 = (longlong *)0x0;
    }
    if (plVar11 == (longlong *)0x0) break;
    if ((IBulkDataIORequest *)plVar11[1] == (IBulkDataIORequest *)0x0) {
LAB_14e022d7c:
      local_res8[0] = uVar8;
      if (*(int *)&(this->ChunksRequested).Elements.field_0x8 !=
          *(int *)&(this->ChunksRequested).Elements.field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (&this->ChunksRequested,uVar8,(int *)local_res8);
      }
    }
    else if ((IBulkDataIORequest *)plVar11[1] == pIVar7) {
      if (local_68._4_1_ == '\0') {
        if (4 < (byte)LogGroomCacheStreaming._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGroomCacheStreaming);
        }
      }
      else {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->ChunksAvailable,local_res10,(bool *)&local_68);
      }
      plVar11[1] = 0;
      goto LAB_14e022d7c;
    }
    if ((pFVar6 != (FGroomCacheAnimationData *)*plVar11) &&
       (pFVar6 != (FGroomCacheAnimationData *)0x0)) {
      DestructItems<FGroomCacheGroupData,int>
                ((FGroomCacheGroupData *)(pFVar6->GroupsData).AllocatorInstance.Data,
                 (pFVar6->GroupsData).ArrayNum);
      pFVar5 = (pFVar6->GroupsData).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      ::operator_delete(pFVar6,0x18);
    }
    TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>::
    Emplace<IBulkDataIORequest_*_const_&>
              (&this->DelayedDeleteReadRequests,local_res18,(bool *)&pIStack_70);
  }
LAB_14e022cd7:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemoveResidentChunk @ 14e025d30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingData::RemoveResidentChunk
          (FGroomCacheStreamingData *this,FResidentGroomCacheChunk *param_1)

{
  FGroomCacheAnimationData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((param_1->Refcount != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadedChunk.Refcount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
                         ,0x42,
                         L"Tried to remove a chunk wich was still mapped. Make sure there is an unmap for every map."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->IORequest == (IBulkDataIORequest *)0x0) &&
     (pFVar1 = param_1->AnimDataPtr, pFVar1 != (FGroomCacheAnimationData *)0x0)) {
    DestructItems<FGroomCacheGroupData,int>
              ((FGroomCacheGroupData *)(pFVar1->GroupsData).AllocatorInstance.Data,
               (pFVar1->GroupsData).ArrayNum);
    pFVar2 = (pFVar1->GroupsData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x18);
  }
  param_1->AnimDataPtr = (FGroomCacheAnimationData *)0x0;
  param_1->IORequest = (IBulkDataIORequest *)0x0;
  param_1->Refcount = 0;
  param_1->DataSize = 0;
  return;
}

// ResetNeededChunks @ 14e0262c0

void __thiscall FGroomCacheStreamingData::ResetNeededChunks(FGroomCacheStreamingData *this)

{
  int *piVar1;
  
  piVar1 = &(this->ChunksNeeded).ArrayMax;
  (this->ChunksNeeded).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ChunksNeeded).AllocatorInstance,0,piVar1);
  }
  return;
}

// UnmapAnimationData @ 14e02b0c0

void __thiscall
FGroomCacheStreamingData::UnmapAnimationData(FGroomCacheStreamingData *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId448,"FGroomCacheStreamingData::UnmapAnimationData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
               ,0x1c0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId448);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->Chunks).field_0x8 != *(int *)&(this->Chunks).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Chunks).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Chunks).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->Chunks + (longlong)iVar4 * 0x28;
        if (*(uint *)(*(longlong *)&this->Chunks + (longlong)iVar4 * 0x28) == param_1) {
          lVar7 = lVar1 + 8;
          if (lVar1 == 0) {
            lVar7 = 0;
          }
          if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x10))) {
            if (*(int *)&(this->ChunksAvailable).Elements.field_0x8 ==
                *(int *)&(this->ChunksAvailable).Elements.field_0x34) goto LAB_14e02b208;
            FVar6 = (this->ChunksAvailable).Hash.SecondaryData;
            if (FVar6 == (ForElementType<FSetElementId>)0x0) {
              FVar6 = (ForElementType<FSetElementId>)&(this->ChunksAvailable).Hash;
            }
            iVar4 = *(int *)((longlong)FVar6 +
                            (ulonglong)((this->ChunksAvailable).HashSize - 1U & param_1) * 4);
            if (iVar4 == -1) goto LAB_14e02b208;
            lVar1 = *(longlong *)&(this->ChunksAvailable).Elements;
            goto LAB_14e02b1f0;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  goto LAB_14e02b295;
  while (iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc), iVar4 != -1) {
LAB_14e02b1f0:
    if (*(uint *)(lVar1 + (longlong)iVar4 * 0xc) == param_1) goto LAB_14e02b28c;
  }
LAB_14e02b208:
  if (*(int *)&(this->ChunksEvicted).Elements.field_0x8 !=
      *(int *)&(this->ChunksEvicted).Elements.field_0x34) {
    FVar6 = (this->ChunksEvicted).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->ChunksEvicted).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->ChunksEvicted).HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->ChunksEvicted).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar4 * 0xc) == param_1) goto LAB_14e02b28c;
        iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ChunksAvailable.Contains(ChunkIndex) || ChunksEvicted.Contains(ChunkIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
                     ,0x1cb,L"Tried to unmap a chunk in an invalid state.");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14e02b28c:
  *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
LAB_14e02b295:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateStreamingStatus @ 14e02cba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FGroomCacheStreamingData::UpdateStreamingStatus(FGroomCacheStreamingData *this,bool param_1)

{
  TBulkData<unsigned_char> *this_00;
  undefined1 *puVar1;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  UGroomCache *pUVar4;
  FGroomCacheAnimationData *pFVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined8 *puVar9;
  code *pcVar10;
  FGroomCacheStreamingData *pFVar11;
  FGroomCacheStreamingData *pFVar12;
  char cVar13;
  FResidentGroomCacheChunk *pFVar14;
  TEventRef<unsigned_int> TVar15;
  IBulkDataIORequest *pIVar16;
  FWriteBuffer *pFVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar19;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *pTVar20;
  ulonglong uVar21;
  code **ppcVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ForElementType<FSetElementId> FVar25;
  int iVar26;
  int iVar27;
  char cVar28;
  uint uVar29;
  FGroomCacheChunk *pFVar30;
  undefined1 *puVar31;
  uint *puVar32;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  LPCRITICAL_SECTION p_Var37;
  LPCRITICAL_SECTION p_Var38;
  bool bVar39;
  undefined1 auStack_538 [32];
  longlong local_518;
  longlong local_510;
  char local_508;
  undefined1 local_507;
  undefined1 local_506;
  undefined1 local_505;
  undefined1 local_504;
  char local_503;
  uint local_500;
  uint local_4fc;
  FGroomCacheStreamingData *local_4f8;
  undefined1 local_4ef [7];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4e8;
  undefined8 uStack_4e0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4d8;
  uint uStack_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  int local_4c0;
  undefined4 uStack_4bc;
  int local_4b8 [2];
  LPCRITICAL_SECTION local_4b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_498;
  uint local_490 [2];
  int local_488;
  undefined8 local_484;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_478;
  int local_458;
  int local_454;
  int local_450;
  int local_44c;
  undefined8 local_448;
  int local_440;
  int local_43c;
  int local_438;
  int local_434;
  int local_430;
  FName local_42c;
  longlong *local_420;
  int local_418;
  int local_414;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_408;
  undefined8 uStack_3e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d8;
  undefined8 uStack_3b8;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *local_3b0
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *local_380
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_378;
  undefined8 uStack_358;
  undefined1 local_350 [16];
  FName local_340;
  TUniqueFunction<void___cdecl(void)> local_338;
  undefined4 local_2ec;
  undefined4 local_2cc;
  undefined4 local_2ac;
  undefined1 local_2a8 [32];
  uint *local_288;
  uint local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_274;
  ForElementType<FSetElementId> local_268;
  int local_260;
  code *local_258 [2];
  code *local_248 [3];
  code **local_230;
  undefined4 *local_228;
  longlong local_220;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> local_218;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_178;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_d8;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_538;
  bVar39 = CpuChannel->Enabled < 0;
  local_503 = param_1;
  local_4f8 = this;
  if (bVar39) {
    local_508 = '\0';
  }
  else {
    local_508 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId148,"FGroomCacheStreamingData::UpdateStreamingStatus",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
               ,0x94);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId148);
  }
  cVar28 = !bVar39;
  if (this->LastUpdate != GFrameCounter) {
    local_4fc = (this->ChunksNeeded).ArrayNum;
    uVar21 = (ulonglong)(int)local_4fc;
    local_498 = &this->ChunksAvailable;
    pTVar19 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
              (this->ChunksNeeded).AllocatorInstance.Data;
    p_Var37 = (LPCRITICAL_SECTION)&(this->ChunksAvailable).Elements.field_0x8;
    local_4a0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                ((pTVar19->Hash).InlineData + uVar21 * 4 + -0x38);
    pTVar18 = local_498;
    pTVar33 = local_4a0;
    local_4b0 = p_Var37;
LAB_14e02cc82:
    do {
      local_4a8 = pTVar19;
      if ((this->ChunksNeeded).ArrayNum != (int)uVar21) {
        local_507 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_507);
        local_4b0 = p_Var37;
      }
      if (pTVar19 == pTVar33) {
        ProcessCompletedChunks(this);
        local_178.Elements._44_4_ = 0x80;
        local_178.Elements._0_8_ = 0;
        puVar1 = &(pTVar18->Elements).field_0x10;
        local_178.Elements._8_8_ = 0;
        local_178.Elements._32_8_ = 0;
        local_178.Elements._40_4_ = 0;
        local_178.Elements._52_4_ = 0;
        local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_178.HashSize = 0;
        local_178.Elements._48_4_ = 0xffffffff;
        local_478._padding_._0_4_ = 0;
        local_478._padding_._4_4_ = 1;
        local_478.UnvisitedBitMask = 0xffffffff;
        local_478.CurrentBitIndex = 0;
        local_478.BaseBitIndex = 0;
        p_Var38 = local_4b0;
        local_478.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (*(int *)&(pTVar18->Elements).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_478);
          p_Var38 = p_Var37;
        }
        uVar29 = *(uint *)&(pTVar18->Elements).field_0x28;
        local_4c0 = *(int *)&p_Var38->DebugInfo - *(int *)&(pTVar18->Elements).field_0x34;
        uStack_4e0 = CONCAT44(local_478._padding_._4_4_,(undefined4)local_478._padding_);
        uStack_4cc = local_478.CurrentBitIndex;
        uStack_4d0 = local_478.UnvisitedBitMask;
        uStack_4c4 = local_478._28_4_;
        uStack_4c8 = local_478.BaseBitIndex;
        uVar34 = uVar29 & 0xffffffe0;
        pTStack_4d8 = local_478.Array;
        iVar26 = (int)uVar29 >> 5;
        uStack_3e8 = CONCAT44(uStack_4bc,local_4c0);
        TStack_408.Array = local_478.Array;
        local_4e8 = pTVar18;
        local_410 = pTVar18;
        TStack_408._padding_ = uStack_4e0;
        TStack_408._16_8_ = _uStack_4d0;
        TStack_408._24_8_ = _uStack_4c8;
        if (((int)uVar29 < 0) &&
           (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar39)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar19 = local_498;
        pFVar11 = local_4f8;
        uVar35 = *(uint *)&(pTVar18->Elements).field_0x28;
        if (uVar29 == uVar35) goto LAB_14e02d360;
        puVar7 = *(undefined1 **)&(pTVar18->Elements).field_0x20;
        puVar31 = puVar1;
        if (puVar7 != (undefined1 *)0x0) {
          puVar31 = puVar7;
        }
        uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar26 * 4);
        if (uVar29 != 0) goto LAB_14e02d327;
        goto LAB_14e02d310;
      }
      local_4b0 = (LPCRITICAL_SECTION)&(pTVar18->Elements).field_0x8;
      uVar29 = *(uint *)&pTVar19->Elements;
      local_500 = uVar29;
      if (*(int *)&(pTVar18->Elements).field_0x8 != *(int *)&(pTVar18->Elements).field_0x34) {
        FVar3 = (pTVar18->Hash).SecondaryData;
        FVar25 = (ForElementType<FSetElementId>)&pTVar18->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = FVar3;
        }
        iVar26 = *(int *)((longlong)FVar25 + (ulonglong)(pTVar18->HashSize - 1U & uVar29) * 4);
        if (iVar26 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pTVar18->Elements + (longlong)iVar26 * 0xc) == uVar29)
            goto LAB_14e02d147;
            iVar26 = *(int *)(*(longlong *)&pTVar18->Elements + 4 + (longlong)iVar26 * 0xc);
          } while (iVar26 != -1);
        }
      }
      if (*(int *)&(this->ChunksEvicted).Elements.field_0x8 !=
          *(int *)&(this->ChunksEvicted).Elements.field_0x34) {
        FVar3 = (this->ChunksEvicted).Hash.SecondaryData;
        FVar25 = (ForElementType<FSetElementId>)&(this->ChunksEvicted).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = FVar3;
        }
        iVar26 = *(int *)((longlong)FVar25 +
                         (ulonglong)((this->ChunksEvicted).HashSize - 1U & uVar29) * 4);
        if (iVar26 != -1) {
          lVar23 = *(longlong *)&(this->ChunksEvicted).Elements;
          do {
            if (*(uint *)(lVar23 + (longlong)iVar26 * 0xc) == uVar29) {
              local_490[0] = uVar29;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        (&this->ChunksEvicted,uVar29,(int *)local_490);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (pTVar18,&local_43c,(bool *)&local_500);
              p_Var37 = (LPCRITICAL_SECTION)&(pTVar18->Elements).field_0x8;
              uVar21 = (ulonglong)local_4fc;
              pTVar19 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                        &(local_4a8->Elements).field_0x4;
              goto LAB_14e02cc82;
            }
            iVar26 = *(int *)(lVar23 + 4 + (longlong)iVar26 * 0xc);
          } while (iVar26 != -1);
        }
      }
      if (*(int *)&(this->ChunksRequested).Elements.field_0x8 !=
          *(int *)&(this->ChunksRequested).Elements.field_0x34) {
        FVar3 = (this->ChunksRequested).Hash.SecondaryData;
        FVar25 = (ForElementType<FSetElementId>)&(this->ChunksRequested).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar25 = FVar3;
        }
        iVar26 = *(int *)((longlong)FVar25 +
                         (ulonglong)((this->ChunksRequested).HashSize - 1U & uVar29) * 4);
        if (iVar26 != -1) {
          lVar23 = *(longlong *)&(this->ChunksRequested).Elements;
          do {
            if (*(uint *)(lVar23 + (longlong)iVar26 * 0xc) == uVar29) goto LAB_14e02d147;
            iVar26 = *(int *)(lVar23 + 4 + (longlong)iVar26 * 0xc);
          } while (iVar26 != -1);
        }
      }
      if (((int)uVar29 < 0) || (pUVar4 = this->GroomCache, (pUVar4->Chunks).ArrayNum <= (int)uVar29)
         ) {
        pTVar18 = &this->ChunksAvailable;
LAB_14e02d147:
        p_Var37 = (LPCRITICAL_SECTION)&(pTVar18->Elements).field_0x8;
        uVar21 = (ulonglong)local_4fc;
        pTVar19 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  &(local_4a8->Elements).field_0x4;
      }
      else {
        iVar26 = (pUVar4->Chunks).ArrayNum;
        uVar34 = 0;
        if ((int)uVar29 < iVar26) {
          uVar34 = ~uVar29 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (local_518 = (longlong)(int)uVar29, local_510 = (longlong)iVar26,
           bVar39 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar39)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar30 = (FGroomCacheChunk *)
                  ((pUVar4->Chunks).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x30);
        this_00 = &pFVar30->BulkData;
        bVar39 = FBulkData::IsBulkDataLoaded((FBulkData *)this_00);
        if (bVar39) {
          pFVar14 = AddResidentChunk(this,uVar29,pFVar30);
          UGroomCache::GetGroomDataAtFrameIndex(this->GroomCache,uVar29,pFVar14->AnimDataPtr);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&this->ChunksAvailable,&local_438,(bool *)&local_500);
          p_Var37 = (LPCRITICAL_SECTION)&(this->ChunksAvailable).Elements.field_0x8;
          pTVar19 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    &(local_4a8->Elements).field_0x4;
          uVar21 = (ulonglong)local_4fc;
          pTVar18 = &this->ChunksAvailable;
          pTVar33 = local_4a0;
        }
        else {
          bVar39 = FBulkData::CanLoadFromDisk((FBulkData *)this_00);
          if ((!bVar39) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Chunk.BulkData.CanLoadFromDisk()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
                                  ,0xb9,L"Bulk data is not loaded and cannot be loaded from disk!"),
             bVar39)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          bVar39 = FBulkData::IsStoredCompressedOnDisk((FBulkData *)this_00);
          if ((bVar39) &&
             (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Chunk.BulkData.IsStoredCompressedOnDisk()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
                                  ,0xba,L""), bVar39)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar14 = AddResidentChunk(this,uVar29,pFVar30);
          pFVar5 = pFVar14->AnimDataPtr;
          iVar26 = pFVar14->DataSize;
          if (pFVar14->IORequest != (IBulkDataIORequest *)0x0) {
            local_518 = CONCAT44(local_518._4_4_,uVar29);
            bVar39 = ::FDebug::CheckVerifyFailedImpl2
                               ("ResidentChunk.IORequest == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomCacheStreamingData.cpp"
                                ,0xc0,
                                L"Groom cache read request for chunk %d is already in progress. Make sure its bookkeeping is up to date."
                               );
            if (bVar39) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (pFVar14->IORequest == (IBulkDataIORequest *)0x0) {
            local_258[0] = (code *)0x0;
            local_230 = (code **)0x0;
            local_230 = FMemory::Malloc(0x20,8);
            *local_230 = (code *)&UE::Core::Private::Function::
                                  TFunction_OwnedObject<`FGroomCacheStreamingData::UpdateStreamingStatus'::`18'::<lambda_1>,0,1>
                                  ::_vftable_;
            local_230[1] = (code *)local_4f8;
            *(uint *)(local_230 + 2) = uVar29;
            *(int *)((longlong)local_230 + 0x14) = iVar26;
            local_230[3] = (code *)pFVar5;
            if (local_230 + 1 != (code **)0x0) {
              local_258[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`FGroomCacheStreamingData::UpdateStreamingStatus'::__l18::<lambda_1>,void,bool,IBulkDataIORequest_*>
                             ::Call;
            }
            if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
              local_484 = 0;
              TVar15 = (TEventRef<unsigned_int>)&local_484;
            }
            else {
              ::FName::FName(&local_42c,"GroomCache");
              TVar15 = FStringTrace::GetNameRef(&local_340);
            }
            uVar6 = *(undefined8 *)TVar15;
            bVar39 = false;
            if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
              UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                        ((TLogScope<0> *)&local_228);
              bVar39 = true;
              *local_228 = (int)uVar6;
              *(undefined8 *)(local_220 + 0x28) = *(undefined8 *)(local_220 + 0x20);
            }
            pIVar16 = FBulkData::CreateStreamingRequest
                                ((FBulkData *)this_00,AIOP_BelowNormal,
                                 (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_258,
                                 (uchar *)0x0);
            pFVar14->IORequest = pIVar16;
            if (pIVar16 == (IBulkDataIORequest *)0x0) {
              if (1 < (byte)LogGroomCacheStreaming._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogGroomCacheStreaming);
              }
              if (bVar39) {
                pFVar17 = UE::Trace::Private::Writer_GetBuffer();
                if ((int)pFVar17 - *(int *)&pFVar17->Cursor < 1) {
                  pFVar17 = UE::Trace::Private::Writer_NextBuffer();
                }
                *pFVar17->Cursor = '\n';
                pFVar17->Cursor = pFVar17->Cursor + 1;
                pFVar17->Committed = pFVar17->Cursor;
              }
              if (local_258[0] != (code *)0x0) {
                ppcVar22 = local_258 + 2;
                if (local_230 != (code **)0x0) {
                  ppcVar22 = local_230;
                }
                (**(code **)(*ppcVar22 + 0x10))();
              }
              break;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this->ChunksRequested,&local_434,(bool *)&local_500);
            if (bVar39) {
              pFVar17 = UE::Trace::Private::Writer_GetBuffer();
              if ((int)pFVar17 - *(int *)&pFVar17->Cursor < 1) {
                pFVar17 = UE::Trace::Private::Writer_NextBuffer();
              }
              *pFVar17->Cursor = '\n';
              pFVar17->Cursor = pFVar17->Cursor + 1;
              pFVar17->Committed = pFVar17->Cursor;
            }
            if (local_258[0] != (code *)0x0) {
              ppcVar22 = local_258 + 2;
              if (local_230 != (code **)0x0) {
                ppcVar22 = local_230;
              }
              (**(code **)(*ppcVar22 + 0x10))();
            }
          }
          pTVar19 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    &(local_4a8->Elements).field_0x4;
          uVar21 = (ulonglong)local_4fc;
          p_Var37 = (LPCRITICAL_SECTION)&(local_498->Elements).field_0x8;
          pTVar18 = local_498;
          pTVar33 = local_4a0;
          this = local_4f8;
        }
      }
    } while( true );
  }
  goto LAB_14e02dbbf;
  while (uVar29 = *(uint *)(puVar31 + lVar23 * 4 + 4), uVar29 == 0) {
LAB_14e02d310:
    lVar23 = (longlong)iVar26;
    uVar34 = uVar34 + 0x20;
    iVar26 = iVar26 + 1;
    uVar29 = uVar35;
    if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_14e02d360;
  }
LAB_14e02d327:
  uVar21 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
  lVar23 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  local_430 = (int)lVar23;
  uVar29 = local_430 + -1 + uVar34;
  if ((int)uVar35 < (int)uVar29) {
    uVar29 = uVar35;
  }
LAB_14e02d360:
  while( true ) {
    pTVar18 = local_410;
    if (*(int *)&(local_410->Elements).field_0x8 - *(int *)&(local_410->Elements).field_0x34 !=
        (int)uStack_3e8) {
      local_506 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_506);
    }
    if (((TStack_408.CurrentBitIndex == uVar29) &&
        (TStack_408.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar18 == pTVar19)) break;
    local_4b8[0] = *(int *)(*(longlong *)&pTVar18->Elements +
                           (longlong)TStack_408.CurrentBitIndex * 0xc);
    pFVar24 = (pFVar11->ChunksNeeded).AllocatorInstance.Data;
    pFVar8 = pFVar24 + (longlong)(pFVar11->ChunksNeeded).ArrayNum * 4;
    for (; pFVar24 != pFVar8; pFVar24 = pFVar24 + 4) {
      if (*(int *)pFVar24 == local_4b8[0]) goto LAB_14e02d3eb;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&pFVar11->ChunksEvicted,&local_418,(bool *)local_4b8);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_178,&local_414,(bool *)local_4b8);
LAB_14e02d3eb:
    TStack_408.UnvisitedBitMask = TStack_408.UnvisitedBitMask & ~TStack_408._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_408);
  }
  pTVar18 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                      (pTVar19,&local_128,&local_178);
  if (pTVar19 != pTVar18) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar19,pTVar18);
  }
  iVar26 = 0;
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  local_4b0 = (LPCRITICAL_SECTION)&pFVar11->CriticalSection;
  local_1c8.Elements._0_8_ = 0;
  local_1c8.Elements._8_8_ = 0;
  local_1c8.Elements._32_8_ = 0;
  local_1c8.Elements._40_4_ = 0;
  local_1c8.Elements._44_4_ = 0x80;
  local_1c8.Elements._48_4_ = 0xffffffff;
  local_1c8.Elements._52_4_ = 0;
  local_1c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1c8.HashSize = 0;
  if (local_4b0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_4b0);
  puVar1 = &(pFVar11->ChunksEvicted).Elements.field_0x10;
  uStack_4c8 = 0;
  iVar27 = *(int *)&(pFVar11->ChunksEvicted).Elements.field_0x28;
  local_4e8 = &pFVar11->ChunksEvicted;
  uVar29 = 1;
  uStack_4cc = 0;
  if (iVar27 != 0) {
    puVar32 = *(uint **)&(pFVar11->ChunksEvicted).Elements.field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)puVar1;
    }
    uVar34 = *puVar32;
    iVar26 = 0;
    while (uVar34 == 0) {
      lVar23 = (longlong)iVar26;
      uStack_4c8 = uStack_4c8 + 0x20;
      iVar26 = iVar26 + 1;
      uStack_4cc = iVar27;
      if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_14e02d53f;
      uVar34 = puVar32[lVar23 + 1];
    }
    uVar29 = -uVar34 & uVar34;
    uVar21 = (ulonglong)uVar29 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_458 = (int)lVar23;
    uStack_4cc = local_458 + -1 + uStack_4c8;
    if (iVar27 < (int)uStack_4cc) {
      uStack_4cc = iVar27;
    }
  }
LAB_14e02d53f:
  local_4c0 = *(int *)&(local_4f8->ChunksEvicted).Elements.field_0x8 -
              *(int *)&(local_4f8->ChunksEvicted).Elements.field_0x34;
  uStack_4d0 = 0xffffffff;
  uVar34 = *(uint *)&(local_4f8->ChunksEvicted).Elements.field_0x28;
  uStack_4e0 = CONCAT44(uVar29,iVar26);
  uVar29 = uVar34 & 0xffffffe0;
  uStack_4c4 = local_2ec;
  TStack_3d8._padding_ = uStack_4e0;
  iVar26 = (int)uVar34 >> 5;
  uStack_3b8 = CONCAT44(uStack_4bc,local_4c0);
  TStack_3d8.UnvisitedBitMask = 0xffffffff;
  TStack_3d8.CurrentBitIndex = uStack_4cc;
  TStack_3d8.BaseBitIndex = uStack_4c8;
  TStack_3d8._28_4_ = local_2ec;
  pTStack_4d8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_4a8 = local_4e8;
  local_3e0 = local_4e8;
  TStack_3d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar34 < 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar39)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar18 = local_4a8;
  pFVar12 = local_4f8;
  uVar35 = *(uint *)&(pFVar11->ChunksEvicted).Elements.field_0x28;
  if (uVar34 != uVar35) {
    puVar7 = *(undefined1 **)&(pFVar11->ChunksEvicted).Elements.field_0x20;
    puVar31 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar31 = puVar7;
    }
    uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar26 * 4);
    while (uVar34 == 0) {
      lVar23 = (longlong)iVar26;
      uVar29 = uVar29 + 0x20;
      iVar26 = iVar26 + 1;
      uVar34 = uVar35;
      if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
      goto LAB_14e02d670;
      uVar34 = *(uint *)(puVar31 + lVar23 * 4 + 4);
    }
    uVar21 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_454 = (int)lVar23;
    uVar34 = local_454 + -1 + uVar29;
    if ((int)uVar35 < (int)uVar34) {
      uVar34 = uVar35;
    }
  }
LAB_14e02d670:
  while( true ) {
    pTVar19 = local_3e0;
    if (*(int *)&(local_3e0->Elements).field_0x8 - *(int *)&(local_3e0->Elements).field_0x34 !=
        (int)uStack_3b8) {
      local_505 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_505);
    }
    if (((TStack_3d8.CurrentBitIndex == uVar34) &&
        (TStack_3d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar19 == pTVar18)) break;
    local_488 = *(int *)(*(longlong *)&pTVar19->Elements +
                        (longlong)TStack_3d8.CurrentBitIndex * 0xc);
    pFVar14 = TMapBase<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
              ::FindChecked((TMapBase<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
                             *)&pFVar12->Chunks,local_488);
    if (pFVar14->Refcount == 0) {
      if ((pFVar14->IORequest == (IBulkDataIORequest *)0x0) &&
         (pFVar5 = pFVar14->AnimDataPtr, pFVar5 != (FGroomCacheAnimationData *)0x0)) {
        DestructItems<FGroomCacheGroupData,int>
                  ((FGroomCacheGroupData *)(pFVar5->GroupsData).AllocatorInstance.Data,
                   (pFVar5->GroupsData).ArrayNum);
        pFVar8 = (pFVar5->GroupsData).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        ::operator_delete(pFVar5,0x18);
      }
      pFVar14->AnimDataPtr = (FGroomCacheAnimationData *)0x0;
      pFVar14->IORequest = (IBulkDataIORequest *)0x0;
      pFVar14->Refcount = 0;
      pFVar14->DataSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1c8,&local_440,(bool *)&local_488);
    }
    TStack_3d8.UnvisitedBitMask = TStack_3d8.UnvisitedBitMask & ~TStack_3d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d8);
  }
  LeaveCriticalSection(local_4b0);
  pTVar19 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                      (pTVar18,&local_d8,&local_1c8);
  cVar28 = local_508;
  if (pTVar18 != pTVar19) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar18,pTVar19);
  }
  iVar26 = 0;
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  pFVar11 = local_4f8;
  local_2a8._0_8_ = 0;
  uVar29 = 1;
  local_2a8._8_8_ = 0;
  local_288 = (uint *)0x0;
  puVar1 = &(local_4f8->DelayedDeleteReadRequests).Elements.field_0x10;
  local_280 = 0;
  local_27c = 0x80;
  pTVar2 = &local_4f8->DelayedDeleteReadRequests;
  local_278 = 0xffffffff;
  local_274 = 0;
  local_268 = (ForElementType<FSetElementId>)0x0;
  local_260 = 0;
  iVar27 = *(int *)&(local_4f8->DelayedDeleteReadRequests).Elements.field_0x28;
  uStack_4c8 = iVar26;
  uStack_4cc = iVar26;
  if (iVar27 != 0) {
    puVar32 = *(uint **)&(local_4f8->DelayedDeleteReadRequests).Elements.field_0x20;
    if (puVar32 == (uint *)0x0) {
      puVar32 = (uint *)puVar1;
    }
    uVar34 = *puVar32;
    while (uVar34 == 0) {
      lVar23 = (longlong)iVar26;
      uStack_4c8 = uStack_4c8 + 0x20;
      iVar26 = iVar26 + 1;
      uStack_4cc = iVar27;
      if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_14e02d86d;
      uVar34 = puVar32[lVar23 + 1];
    }
    uVar29 = -uVar34 & uVar34;
    uVar21 = (ulonglong)uVar29 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_450 = (int)lVar23;
    uStack_4cc = uStack_4c8 + -1 + local_450;
    if (iVar27 < (int)uStack_4cc) {
      uStack_4cc = iVar27;
    }
  }
LAB_14e02d86d:
  uVar34 = *(uint *)&(local_4f8->DelayedDeleteReadRequests).Elements.field_0x28;
  local_4c0 = *(int *)&(local_4f8->DelayedDeleteReadRequests).Elements.field_0x8 -
              *(int *)&(local_4f8->DelayedDeleteReadRequests).Elements.field_0x34;
  uVar35 = uVar34 & 0xffffffe0;
  uStack_4e0 = CONCAT44(uVar29,iVar26);
  uStack_4d0 = 0xffffffff;
  uStack_4c4 = local_2cc;
  TStack_3a8._padding_ = uStack_4e0;
  iVar26 = (int)uVar34 >> 5;
  uStack_388 = CONCAT44(uStack_4bc,local_4c0);
  TStack_3a8.UnvisitedBitMask = 0xffffffff;
  TStack_3a8.CurrentBitIndex = uStack_4cc;
  TStack_3a8.BaseBitIndex = uStack_4c8;
  TStack_3a8._28_4_ = local_2cc;
  local_4e8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)pTVar2;
  pTStack_4d8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_3b0 = pTVar2;
  TStack_3a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar34 < 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar39)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar29 = *(uint *)&(pFVar11->DelayedDeleteReadRequests).Elements.field_0x28;
  if (uVar34 != uVar29) {
    puVar7 = *(undefined1 **)&(pFVar11->DelayedDeleteReadRequests).Elements.field_0x20;
    puVar31 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar31 = puVar7;
    }
    uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar26 * 4);
    while (uVar34 == 0) {
      lVar23 = (longlong)iVar26;
      uVar35 = uVar35 + 0x20;
      iVar26 = iVar26 + 1;
      uVar34 = uVar29;
      if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
      goto LAB_14e02d990;
      uVar34 = *(uint *)(puVar31 + lVar23 * 4 + 4);
    }
    uVar21 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_44c = (int)lVar23;
    uVar34 = local_44c + -1 + uVar35;
    if ((int)uVar29 < (int)uVar34) {
      uVar34 = uVar29;
    }
  }
LAB_14e02d990:
  while( true ) {
    pTVar20 = local_3b0;
    if (*(int *)&(local_3b0->Elements).field_0x8 - *(int *)&(local_3b0->Elements).field_0x34 !=
        (int)uStack_388) {
      local_504 = 0;
      `TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_504);
    }
    if (((TStack_3a8.CurrentBitIndex == uVar34) &&
        (TStack_3a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar20 == pTVar2)
       ) break;
    local_420 = *(longlong **)
                 (*(longlong *)&pTVar20->Elements + (longlong)TStack_3a8.CurrentBitIndex * 0x10);
    cVar13 = (**(code **)(*local_420 + 8))();
    if (cVar13 != '\0') {
      TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>::
      Emplace<IBulkDataIORequest_*_const_&>
                ((TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
                  *)local_2a8,(IBulkDataIORequest **)&local_448,(bool *)&local_420);
    }
    TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
  }
  pTVar20 = TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
            ::Difference(pTVar2,&local_88,
                         (TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
                          *)local_2a8);
  if (pTVar2 != pTVar20) {
    TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>::
    Move<TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>_>
              (pTVar2,pTVar20);
  }
  uVar29 = 0;
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  uVar34 = local_280;
  iVar26 = local_2a8._8_4_ - local_274;
  if (0 < iVar26) {
    if (local_503 == '\0') {
      uVar35 = 1;
      uStack_4c8 = 0;
      uStack_4cc = uStack_4c8;
      if (local_280 != 0) {
        puVar32 = (uint *)(local_2a8 + 0x10);
        if (local_288 != (uint *)0x0) {
          puVar32 = local_288;
        }
        uVar36 = *puVar32;
        uStack_4c8 = 0;
        uVar29 = 0;
        while (uVar36 == 0) {
          lVar23 = (longlong)(int)uVar29;
          uStack_4c8 = uStack_4c8 + 0x20;
          uVar29 = uVar29 + 1;
          uStack_4cc = local_280;
          if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
          goto LAB_14e02dc90;
          uVar36 = (puVar32 + 1)[lVar23];
        }
        uVar35 = -uVar36 & uVar36;
        uVar21 = (ulonglong)uVar35 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_448._4_4_ = (int)lVar23;
        uStack_4cc = (int)lVar23 + -1 + uStack_4c8;
        if ((int)local_280 < (int)uStack_4cc) {
          uStack_4cc = local_280;
        }
      }
LAB_14e02dc90:
      local_4e8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2a8;
      pTStack_4d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10);
      uStack_4d0 = 0xffffffff;
      local_4fc = -1 << ((byte)local_280 & 0x1f);
      uVar36 = local_280 & 0xffffffe0;
      uStack_4e0 = CONCAT44(uVar35,uVar29);
      uStack_4c4 = local_2ac;
      local_380 = (TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
                   *)local_4e8;
      TStack_378._padding_ = uStack_4e0;
      iVar27 = (int)local_280 >> 5;
      TStack_378.Array = pTStack_4d8;
      TStack_378.UnvisitedBitMask = 0xffffffff;
      TStack_378.CurrentBitIndex = uStack_4cc;
      TStack_378.BaseBitIndex = uStack_4c8;
      TStack_378._28_4_ = local_2ac;
      uStack_358 = CONCAT44(uStack_4bc,iVar26);
      local_4c0 = iVar26;
      if (((int)local_280 < 0) &&
         (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar39)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar34 != local_280) {
        puVar32 = (uint *)(local_2a8 + 0x10);
        if (local_288 != (uint *)0x0) {
          puVar32 = local_288;
        }
        uVar29 = local_4fc & puVar32[iVar27];
        while (uVar29 == 0) {
          lVar23 = (longlong)iVar27;
          uVar36 = uVar36 + 0x20;
          iVar27 = iVar27 + 1;
          uVar34 = local_280;
          if ((int)((local_280 - 1) + ((int)(local_280 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
          goto LAB_14e02ddc0;
          uVar29 = (puVar32 + 1)[lVar23];
        }
        uVar21 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar34 = (int)lVar23 + -1 + uVar36;
        if ((int)local_280 < (int)uVar34) {
          uVar34 = local_280;
        }
      }
LAB_14e02ddc0:
      while( true ) {
        pTVar2 = local_380;
        if (*(int *)&(local_380->Elements).field_0x8 - *(int *)&(local_380->Elements).field_0x34 !=
            (int)uStack_358) {
          `TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4ef);
        }
        if (((TStack_378.CurrentBitIndex == uVar34) &&
            (TStack_378.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2a8 + 0x10))) &&
           (pTVar2 == (TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
                       *)local_2a8)) break;
        puVar9 = *(undefined8 **)
                  (*(longlong *)&pTVar2->Elements + (longlong)TStack_378.CurrentBitIndex * 0x10);
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
        }
        TStack_378.UnvisitedBitMask = TStack_378.UnvisitedBitMask & ~TStack_378._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_378);
      }
    }
    else {
      local_338._0_8_ = 0;
      local_338._40_8_ = 0;
      local_218.Elements._0_8_ = 0;
      local_218.Elements._8_8_ = 0;
      local_218.Elements._32_8_ = 0;
      local_218.Elements._40_4_ = 0;
      local_218.Elements._44_4_ = 0x80;
      local_218.Elements._48_4_ = 0xffffffff;
      local_218.Elements._52_4_ = 0;
      local_218.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_218.HashSize = 0;
      TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>::
      operator=(&local_218,
                (TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
                 *)local_2a8);
      Async<_FGroomCacheStreamingData::UpdateStreamingStatus_::__l104::<lambda_2>_>
                ((TFuture<void> *)local_350,ThreadPool,(<lambda_2> *)&local_218,&local_338);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_350._8_8_);
      local_218.HashSize = 0;
      if (local_218.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_218.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_218.Elements);
    }
  }
  local_260 = 0;
  local_4f8->LastUpdate = GFrameCounter;
  if (local_268 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_268);
  }
  TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2a8);
  local_1c8.HashSize = 0;
  if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.Elements);
  local_178.HashSize = 0;
  if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_178.Elements);
LAB_14e02dbbf:
  if (cVar28 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

