// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 15

// FStreamingGeometryCacheData @ 14ca070b0

FStreamingGeometryCacheData * __thiscall
FStreamingGeometryCacheData::FStreamingGeometryCacheData
          (FStreamingGeometryCacheData *this,UGeometryCacheTrackStreamable *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  pTVar2 = (TNode *)0x0;
  this->Track = param_1;
  (this->ChunksNeeded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunksNeeded).ArrayNum = 0;
  (this->ChunksNeeded).ArrayMax = 0;
  (this->ChunksAvailable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunksAvailable).ArrayNum = 0;
  (this->ChunksAvailable).ArrayMax = 0;
  *(undefined8 *)&this->Chunks = 0;
  *(undefined8 *)&(this->Chunks).field_0x8 = 0;
  *(undefined8 *)&(this->Chunks).field_0x20 = 0;
  *(undefined4 *)&(this->Chunks).field_0x28 = 0;
  *(undefined4 *)&(this->Chunks).field_0x2c = 0x80;
  *(undefined4 *)&(this->Chunks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Chunks).field_0x34 = 0;
  *(undefined8 *)&(this->Chunks).field_0x40 = 0;
  *(undefined4 *)&(this->Chunks).field_0x48 = 0;
  (this->ChunksRequested).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunksRequested).ArrayNum = 0;
  (this->ChunksRequested).ArrayMax = 0;
  (this->ChunksEvicted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunksEvicted).ArrayNum = 0;
  (this->ChunksEvicted).ArrayMax = 0;
  (this->IoRequestsToCompleteAndDeleteOnGameThread).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IoRequestsToCompleteAndDeleteOnGameThread).ArrayNum = 0;
  (this->IoRequestsToCompleteAndDeleteOnGameThread).ArrayMax = 0;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).ReadRequest = (IBulkDataIORequest *)0x0;
    *(undefined8 *)&(pTVar1->Item).LoadedChunkIndex = 0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).ReadRequest = (IBulkDataIORequest *)0x0;
    (pTVar1->Item).LoadedChunkIndex = 0;
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
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// ~FStreamingGeometryCacheData @ 14ca090c0

void __thiscall
FStreamingGeometryCacheData::~FStreamingGeometryCacheData(FStreamingGeometryCacheData *this)

{
  TMap<int,FResidentChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>_>
  *this_00;
  undefined1 *puVar1;
  ForElementType<FSetElementId> FVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                         ,0x1f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FlushRenderingCommands();
  BlockTillAllRequestsFinished(this,0.0);
  if (((this->ChunksRequested).ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunksRequested.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                         ,0x26,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->Chunks;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar10 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      RemoveResidentChunk(this,(FResidentChunk *)(*local_48 + ((longlong)(int)uVar10 * 5 + 1) * 8));
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar10 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar9 = 1;
      }
      else {
        uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_18->HashSize < iVar9)) || (iVar9 < local_18->HashSize)) {
        local_18->HashSize = iVar9;
        TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar8 = 1 < *(int *)&(this->Chunks).field_0x48;
  if (!bVar8) {
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->Chunks).field_0xc;
  *(undefined4 *)&(this->Chunks).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Chunks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Chunks).field_0x34 = 0;
  iVar9 = *(int *)&(this->Chunks).field_0x2c;
  *(undefined4 *)&(this->Chunks).field_0x28 = 0;
  if ((iVar9 < 0) || (0x80 < iVar9)) {
    *(undefined4 *)&(this->Chunks).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Chunks).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->Chunks).field_0x48 = 1;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
              *)this_00);
  }
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
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->CompletedChunks).Tail;
  }
  pFVar4 = (this->IoRequestsToCompleteAndDeleteOnGameThread).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ChunksEvicted).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ChunksRequested).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->Chunks).field_0x48 = 0;
  pvVar5 = *(void **)&(this->Chunks).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FResidentChunk>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  pFVar4 = (this->ChunksAvailable).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ChunksNeeded).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator() @ 14ca0c580

void __thiscall
`FStreamingGeometryCacheData::UpdateStreamingStatus'::__l15::<lambda_1>::operator()
          (void *this,bool param_1,IBulkDataIORequest *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_c;
  
  uVar2 = *(undefined4 *)((longlong)this + 8);
  puVar4 = (undefined8 *)(*(longlong *)this + 0xb0);
  puVar3 = ::operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = param_2;
    puVar3[2] = CONCAT44(uStack_c,uVar2);
    if (((ulonglong)puVar4 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    puVar1 = (undefined8 *)*puVar4;
    *puVar4 = puVar3;
    UNLOCK();
    if (((ulonglong)puVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    *puVar1 = puVar3;
    UNLOCK();
  }
  return;
}

// AddNeededChunk @ 14ca0e0f0

void __thiscall
FStreamingGeometryCacheData::AddNeededChunk(FStreamingGeometryCacheData *this,uint param_1)

{
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
            (&this->ChunksNeeded,(int *)local_res10);
  return;
}

// AddResidentChunk @ 14ca0e120

FResidentChunk * __thiscall
FStreamingGeometryCacheData::AddResidentChunk
          (FStreamingGeometryCacheData *this,int param_1,FStreamedGeometryCacheChunk *param_2)

{
  longlong lVar1;
  TKeyInitializer<int_const_&> local_res8;
  int local_res10 [2];
  int *local_res18;
  
  local_res18 = local_res10;
  local_res10[0] = param_1;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<int_const_&>_>
            ((TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
              *)&this->Chunks,&local_res8,(bool *)&local_res18);
  lVar1 = *(longlong *)&(this->Chunks).field_0x0 + (longlong)(int)local_res8.Key * 0x28;
  *(undefined4 *)(lVar1 + 0x14) = 0;
  ((FResidentChunk *)(lVar1 + 8))->Memory = (void *)0x0;
  *(int *)(lVar1 + 0x10) = param_2->DataSize;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return (FResidentChunk *)(lVar1 + 8);
}

// BlockTillAllRequestsFinished @ 14ca0f050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamingGeometryCacheData::BlockTillAllRequestsFinished
          (FStreamingGeometryCacheData *this,float param_1)

{
  TMap<int,FResidentChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>_>
  *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_bool___cdecl_FStreamingGeometryCacheData::BlockTillAllRequestsFinished(float)_::_2_::FStat_FGeoCaStreaming_BlockTillAllRequestsFinished>
  FVar12;
  ulonglong uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  bool bVar16;
  uint uVar17;
  LARGE_INTEGER local_res8;
  FName local_res18;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  *pTStack_90;
  longlong *local_88;
  undefined1 auStack_80 [16];
  uint uStack_70;
  uint uStack_6c;
  longlong local_68;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  *pTStack_60;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  *local_58;
  undefined2 local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_FGeoCaStreaming_BlockTillAllRequestsFinished ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_FStreamingGeometryCacheData::BlockTillAllRequestsFinished(float)_::_2_::FStat_FGeoCaStreaming_BlockTillAllRequestsFinished>
         )0x0) {
      pFVar11 = ::FName::FName((FName *)&local_res8.s,"FGeoCaStreaming_BlockTillAllRequestsFinished"
                              );
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_FGeoCaStreaming_BlockTillAllRequestsFinished,
                 *pFVar11,L"FGeoCaStreaming_BlockTillAllRequestsFinished","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_FGeoCaStreaming_BlockTillAllRequestsFinished;
  if (StatPtr_FGeoCaStreaming_BlockTillAllRequestsFinished ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FStreamingGeometryCacheData::BlockTillAllRequestsFinished(float)_::_2_::FStat_FGeoCaStreaming_BlockTillAllRequestsFinished>
       )0x0) {
    pFVar11 = ::FName::FName(&local_res18,"FGeoCaStreaming_BlockTillAllRequestsFinished");
    FVar12 = (FThreadSafeStaticStat<_public:_bool___cdecl_FStreamingGeometryCacheData::BlockTillAllRequestsFinished(float)_::_2_::FStat_FGeoCaStreaming_BlockTillAllRequestsFinished>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_FGeoCaStreaming_BlockTillAllRequestsFinished,*pFVar11,
                          L"FGeoCaStreaming_BlockTillAllRequestsFinished","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar17 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar17 == 0)) {
LAB_14ca0f1b2:
    bVar6 = false;
    FVar15.ComparisonIndex.Value = 0;
    FVar15.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                   ,0x124);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0f1b2;
    local_res8.s.LowPart = FVar14.Value;
    local_res8.s.HighPart = uVar17;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar6 = true;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->Chunks;
  local_58 = (TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (param_1 == 0.0) {
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_b8,
               (TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_50 = 0;
    stack0xffffffffffffff88 = local_b8._16_16_;
    local_88 = (longlong *)local_b8._0_8_;
    auStack_80._0_8_ = local_b8._8_8_;
    local_68 = local_98;
    pTStack_60 = pTStack_90;
    uVar13 = local_b8._24_8_ >> 0x20;
    if (*(int *)(local_b8._16_8_ + 0x18) <= local_b8._28_4_) goto LAB_14ca0f45b;
    do {
      plVar2 = *(longlong **)(*local_88 + 0x18 + (longlong)(int)uVar13 * 0x28);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
        ProcessCompletedChunks(this);
      }
      uStack_70 = uStack_70 & ~auStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_80);
      uVar13 = (ulonglong)uStack_6c;
    } while ((int)uStack_6c < *(int *)(auStack_80._8_8_ + 0x18));
  }
  else {
    QueryPerformanceCounter(&local_res8);
    dVar4 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
            FGenericPlatformTime::SecondsPerCycle;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_b8,
               (TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
                *)pTVar1);
    fVar8 = __real_3a83126f;
    local_50 = 0;
    stack0xffffffffffffff88 = local_b8._16_16_;
    local_88 = (longlong *)local_b8._0_8_;
    auStack_80._0_8_ = local_b8._8_8_;
    local_68 = local_98;
    pTStack_60 = pTStack_90;
    uVar13 = local_b8._24_8_ >> 0x20;
    uVar17 = local_b8._28_4_;
    if (*(int *)(local_b8._16_8_ + 0x18) <= (int)uVar17) goto LAB_14ca0f45b;
    while( true ) {
      plVar2 = local_88;
      if (*(longlong *)(*local_88 + 0x18 + (longlong)(int)uVar13 * 0x28) != 0) {
        QueryPerformanceCounter(&local_res8);
        if (((float)((dVar4 + (double)param_1) -
                    (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                    FGenericPlatformTime::SecondsPerCycle) < fVar8) ||
           (cVar9 = (**(code **)(**(longlong **)(*plVar2 + 0x18 + (longlong)(int)uVar17 * 0x28) +
                                0x10))(), cVar9 == '\0')) {
          if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
            uVar17 = *(int *)&(local_58->Elements).field_0x8 -
                     *(int *)&(local_58->Elements).field_0x34;
            if (uVar17 < 4) {
              iVar10 = 1;
            }
            else {
              uVar13 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              iVar10 = 1 << ((byte)lVar3 & 0x1f);
            }
            if (((0 < (int)uVar17) && (local_58->HashSize < iVar10)) ||
               (iVar10 < local_58->HashSize)) {
              local_58->HashSize = iVar10;
              TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
              ::Rehash(local_58);
            }
          }
          bVar16 = false;
          goto LAB_14ca0f45e;
        }
        ProcessCompletedChunks(this);
      }
      uStack_70 = uStack_70 & ~auStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_80);
      if (*(int *)(auStack_80._8_8_ + 0x18) <= (int)uStack_6c) break;
      uVar13 = (ulonglong)uStack_6c;
      uVar17 = uStack_6c;
    }
  }
  if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
    uVar17 = *(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34;
    if (uVar17 < 4) {
      iVar10 = 1;
    }
    else {
      uVar13 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((0 < (int)uVar17) && (local_58->HashSize < iVar10)) || (iVar10 < local_58->HashSize)) {
      local_58->HashSize = iVar10;
      TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
      ::Rehash(local_58);
    }
  }
LAB_14ca0f45b:
  bVar16 = true;
LAB_14ca0f45e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return bVar16;
}

// IsStreamingInProgress @ 14ca23c00

bool __thiscall
FStreamingGeometryCacheData::IsStreamingInProgress(FStreamingGeometryCacheData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->ChunksRequested).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// MapChunk @ 14ca24060

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
FStreamingGeometryCacheData::MapChunk(FStreamingGeometryCacheData *this,uint param_1,uint *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
  FScriptContainerElement *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ProcessCompletedChunks(this);
  pFVar7 = (this->ChunksAvailable).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)(this->ChunksAvailable).ArrayNum * 4;
  for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 4) {
    if (*(uint *)pFVar7 == param_1) {
      if (*(int *)&(this->Chunks).field_0x8 == *(int *)&(this->Chunks).field_0x34)
      goto LAB_14ca24197;
      puVar9 = *(undefined1 **)&(this->Chunks).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->Chunks).field_0x38;
      }
      iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & param_1) * 4);
      if (iVar5 == -1) goto LAB_14ca24197;
      goto LAB_14ca24180;
    }
  }
  pFVar7 = (this->ChunksRequested).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)(this->ChunksRequested).ArrayNum * 4;
  for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 4) {
    if (*(uint *)pFVar7 == param_1) {
      if ((byte)LogGeoCaStreaming._0_1_ < 5) goto LAB_14ca24130;
      pFVar8 = &::LOG_Static;
      goto LAB_14ca24121;
    }
  }
  pFVar7 = (this->ChunksEvicted).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (longlong)(this->ChunksEvicted).ArrayNum * 4;
  for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 4) {
    if (*(uint *)pFVar7 == param_1) {
      if ((byte)LogGeoCaStreaming._0_1_ < 5) goto LAB_14ca24130;
      pFVar8 = &::LOG_Static;
      goto LAB_14ca24121;
    }
  }
  if (4 < (byte)LogGeoCaStreaming._0_1_) {
    pFVar8 = &::LOG_Static;
LAB_14ca24121:
    UE::Logging::Private::BasicLog<5>(pFVar8,(FLogCategoryBase *)&LogGeoCaStreaming);
  }
LAB_14ca24130:
  puVar6 = (uchar *)0x0;
LAB_14ca24132:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return puVar6;
  while (iVar5 = *(int *)(lVar2 + 0x20), iVar5 != -1) {
LAB_14ca24180:
    lVar2 = *(longlong *)&this->Chunks + (longlong)iVar5 * 0x28;
    if (*(uint *)(*(longlong *)&this->Chunks + (longlong)iVar5 * 0x28) == param_1) {
      puVar10 = (undefined8 *)(lVar2 + 8);
      if (lVar2 == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      if (puVar10 == (undefined8 *)0x0) goto LAB_14ca2419b;
      goto LAB_14ca241c1;
    }
  }
LAB_14ca24197:
  puVar10 = (undefined8 *)0x0;
LAB_14ca2419b:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ResidentChunk",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                     ,0x1a2,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    puVar6 = (uchar *)(*pcVar3)();
    return puVar6;
  }
LAB_14ca241c1:
  if (param_2 != (uint *)0x0) {
    *param_2 = *(uint *)(puVar10 + 1);
  }
  *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) + 1;
  puVar6 = (uchar *)*puVar10;
  goto LAB_14ca24132;
}

// OnAsyncReadComplete @ 14ca242d0

void __thiscall
FStreamingGeometryCacheData::OnAsyncReadComplete
          (FStreamingGeometryCacheData *this,int param_1,IBulkDataIORequest *param_2)

{
  TQueue<FCompletedChunk,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  undefined4 uStack_c;
  
  pTVar1 = &this->CompletedChunks;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).ReadRequest = param_2;
    *(ulonglong *)&(pTVar3->Item).LoadedChunkIndex = CONCAT44(uStack_c,param_1);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  return;
}

// PrefetchData @ 14ca27110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamingGeometryCacheData::PrefetchData
          (FStreamingGeometryCacheData *this,UGeometryCacheComponent *param_1)

{
  int *piVar1;
  longlong lVar2;
  FName FVar3;
  UGeometryCacheTrackStreamable *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<float> *pTVar9;
  int iVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_PrefetchData> FVar17;
  long64 lVar18;
  void *pvVar19;
  uchar auVar20 [8];
  FThreadSafeStaticStat<FStat_STAT_ChunkDataResident> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_ChunkDataStreamed> FVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType FVar26;
  int iVar27;
  FBulkData *pFVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  FBulkData *this_00;
  FNameEntryId FVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  bool local_res20;
  uint local_128;
  undefined1 local_124;
  undefined1 local_123 [3];
  FScriptContainerElement *local_120;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  FBulkData *local_108;
  FColor_u_0 local_100;
  uint local_fc;
  uint local_f8 [2];
  TKeyInitializer<int_const_&> local_f0;
  FScriptContainerElement *local_e8;
  FName local_e0;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  FName local_c8;
  FName local_c0;
  uint *local_b0;
  FName local_a8;
  FName local_a0;
  FScriptContainerElement *local_98;
  LPCRITICAL_SECTION local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58 [4];
  
  FVar17 = StatPtr_STAT_PrefetchData;
  if (StatPtr_STAT_PrefetchData == (FThreadSafeStaticStat<FStat_STAT_PrefetchData>)0x0) {
    pFVar16 = ::FName::FName(&local_68,"STAT_PrefetchData");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_PrefetchData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrefetchData,*pFVar16,
                        L"Prefetch Data","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar17;
  bVar8 = false;
  bVar7 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_100.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_100._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_e0.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                   ,0x72);
        bVar8 = true;
        bVar7 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar11 = true;
      goto LAB_14ca2727f;
    }
  }
  bVar8 = bVar12;
  bVar7 = bVar11;
  bVar11 = false;
  local_c8 = local_c0;
LAB_14ca2727f:
  local_90 = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (local_90 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_90);
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                          ,0x75,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar9 = CVarPrefetchSeconds.Ref;
  fVar36 = param_1->StartTimeOffset;
  if (__real_46610000 <= param_1->StartTimeOffset) {
    fVar36 = __real_46610000;
  }
  if (fVar36 <= __real_c6610000) {
    fVar36 = __real_c6610000;
  }
  fVar36 = fVar36 + param_1->ElapsedTime;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar34 = param_1->PlayDirection * pTVar9->ShadowedValue[0] + fVar36;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  fVar35 = fVar34;
  if (fVar36 <= fVar34) {
    fVar35 = fVar36;
  }
  if (fVar34 <= fVar36) {
    fVar34 = fVar36;
  }
  UGeometryCacheTrackStreamable::GetChunksForTimeRange
            (this->Track,fVar35,fVar34,param_1->bLooping,&local_118);
  iVar10 = local_118.ArrayNum;
  pFVar29 = local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 4;
  FVar26.Data = local_118.AllocatorInstance.Data;
  while( true ) {
    if (local_118.ArrayNum != iVar10) {
      local_124 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_124);
    }
    if (FVar26.Data == pFVar29) break;
    local_fc = *(uint *)FVar26.Data;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&this->ChunksNeeded,(int *)&local_fc);
    FVar26.Data = FVar26.Data + 4;
  }
  iVar10 = local_118.ArrayNum;
  local_98 = local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 4;
  FVar26.Data = local_118.AllocatorInstance.Data;
LAB_14ca273d7:
  do {
    pFVar29 = local_98;
    local_e8 = FVar26.Data;
    if (local_118.ArrayNum != iVar10) {
      local_123[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_123);
    }
    lpCriticalSection = local_90;
    FVar3 = local_c8;
    if (FVar26.Data == pFVar29) {
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      LeaveCriticalSection(lpCriticalSection);
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar3,CycleScopeEnd);
      }
      return;
    }
    local_128 = *(uint *)FVar26.Data;
    ProcessCompletedChunks(this);
    pFVar25 = (this->ChunksAvailable).AllocatorInstance.Data;
    pFVar28 = (FBulkData *)&this->ChunksAvailable;
    pFVar29 = pFVar25 + (longlong)(this->ChunksAvailable).ArrayNum * 4;
    for (; local_108 = pFVar28, pFVar25 != pFVar29; pFVar25 = pFVar25 + 4) {
      if (*(uint *)pFVar25 == local_128) goto LAB_14ca27c15;
    }
    pFVar29 = (this->ChunksEvicted).AllocatorInstance.Data;
    pFVar25 = pFVar29;
    while( true ) {
      if (pFVar25 == pFVar29 + (longlong)(this->ChunksEvicted).ArrayNum * 4) goto LAB_14ca2745f;
      if (*(uint *)pFVar25 == local_128) break;
      pFVar25 = pFVar25 + 4;
    }
    if (((pFVar29 <= (FScriptContainerElement *)&local_128) &&
        ((FScriptContainerElement *)&local_128 <
         pFVar29 + (longlong)(this->ChunksEvicted).ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar15 = (this->ChunksEvicted).ArrayNum;
    uVar14 = local_128;
    if (iVar15 != 0) {
      pFVar29 = (this->ChunksEvicted).AllocatorInstance.Data;
      iVar27 = 0;
      lVar30 = 0;
      bVar12 = *(uint *)pFVar29 != local_128;
      local_120 = pFVar29;
      iVar32 = 0;
      do {
        iVar31 = iVar32;
        do {
          lVar30 = lVar30 + 1;
          iVar31 = iVar31 + 1;
          if (iVar15 <= lVar30) break;
        } while (bVar12 == (*(uint *)(pFVar29 + lVar30 * 4) != uVar14));
        if (bVar12 != false) {
          if (iVar27 != iVar32) {
            memmove(pFVar29 + (longlong)iVar27 * 4,pFVar29 + (longlong)iVar32 * 4,
                    (longlong)(iVar31 - iVar32) << 2);
            pFVar29 = local_120;
            uVar14 = local_128;
          }
          iVar27 = iVar27 + (iVar31 - iVar32);
        }
        bVar12 = (bool)(bVar12 ^ 1);
        iVar32 = iVar31;
      } while (lVar30 < iVar15);
      (this->ChunksEvicted).ArrayNum = iVar27;
      FVar26.Data = local_e8;
      pFVar28 = local_108;
    }
    pFVar29 = (pFVar28->DataAllocation).Allocation.RawData;
    if (((pFVar29 <= (FScriptContainerElement *)&local_128) &&
        ((FScriptContainerElement *)&local_128 <
         pFVar29 + (longlong)*(int *)((longlong)(pFVar28->BulkMeta).Data + 4) * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar14 = local_128, bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar15 = *(int *)(pFVar28->BulkMeta).Data;
    piVar1 = (int *)((longlong)(pFVar28->BulkMeta).Data + 4);
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar28,piVar1);
      uVar14 = local_128;
    }
    *(int *)(pFVar28->BulkMeta).Data = iVar15 + 1;
    FVar26.Data = FVar26.Data + 4;
    *(uint *)((pFVar28->DataAllocation).Allocation.RawData + (longlong)iVar15 * 4) = uVar14;
  } while( true );
LAB_14ca2745f:
  pFVar29 = (this->ChunksRequested).AllocatorInstance.Data;
  for (pFVar25 = pFVar29; uVar14 = local_128,
      pFVar25 != pFVar29 + (longlong)(this->ChunksRequested).ArrayNum * 4; pFVar25 = pFVar25 + 4) {
    if (*(uint *)pFVar25 == local_128) {
      if (((pFVar29 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 <
           pFVar29 + (longlong)(this->ChunksRequested).ArrayMax * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = (this->ChunksRequested).ArrayNum;
      uVar14 = local_128;
      if (iVar15 != 0) {
        pFVar29 = (this->ChunksRequested).AllocatorInstance.Data;
        iVar27 = 0;
        lVar30 = 0;
        local_res20 = *(uint *)pFVar29 != local_128;
        iVar32 = 0;
        local_120 = pFVar29;
        do {
          iVar31 = iVar32;
          do {
            lVar30 = lVar30 + 1;
            iVar31 = iVar31 + 1;
            if (iVar15 <= lVar30) break;
          } while (local_res20 == (*(uint *)(pFVar29 + lVar30 * 4) != uVar14));
          if (local_res20 != false) {
            if (iVar27 != iVar32) {
              memmove(pFVar29 + (longlong)iVar27 * 4,pFVar29 + (longlong)iVar32 * 4,
                      (longlong)(iVar31 - iVar32) << 2);
              pFVar29 = local_120;
              uVar14 = local_128;
            }
            iVar27 = iVar27 + (iVar31 - iVar32);
          }
          local_res20 = (bool)(local_res20 ^ 1);
          iVar32 = iVar31;
        } while (lVar30 < iVar15);
        (this->ChunksRequested).ArrayNum = iVar27;
        pFVar28 = local_108;
      }
      break;
    }
  }
  pUVar4 = this->Track;
  uVar13 = 0;
  if ((int)uVar14 < (pUVar4->Chunks).ArrayNum) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar29 = (pUVar4->Chunks).AllocatorInstance.Data;
  lVar30 = (longlong)(int)uVar14 * 0x38;
  this_00 = (FBulkData *)(pFVar29 + lVar30 + 0x10);
  local_108 = this_00;
  lVar18 = FBulkData::GetBulkDataSize(this_00);
  if ((lVar18 < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Chunk.BulkData.GetBulkDataSize() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                          ,0xa8,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = *(int *)(pFVar29 + lVar30);
  lVar18 = FBulkData::GetBulkDataSize(this_00);
  if ((lVar18 != iVar15) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Chunk.BulkData.GetBulkDataSize() == Chunk.DataSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                          ,0xa9,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_f8[0] = local_128;
  local_b0 = local_f8;
  TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<int_const_&>_>
            ((TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
              *)&this->Chunks,&local_f0,(bool *)&local_b0);
  lVar5 = *(longlong *)&this->Chunks;
  lVar2 = (longlong)(int)local_f0.Key * 5 + 1;
  *(undefined4 *)(lVar5 + 0xc + lVar2 * 8) = 0;
  *(undefined8 *)(lVar5 + lVar2 * 8) = 0;
  pFVar25 = (FScriptContainerElement *)(lVar5 + lVar2 * 8);
  *(undefined4 *)(pFVar25 + 8) = *(undefined4 *)(pFVar29 + lVar30);
  *(undefined8 *)(pFVar25 + 0x10) = 0;
  local_120 = pFVar25;
  pvVar19 = FMemory::Malloc((longlong)*(int *)(pFVar29 + lVar30),0);
  *(void **)pFVar25 = pvVar19;
  auVar20 = (uchar  [8])(longlong)*(int *)(pFVar29 + lVar30);
  if (auVar20 != (uchar  [8])0x0) {
    FVar21 = StatPtr_STAT_ChunkDataResident;
    if (StatPtr_STAT_ChunkDataResident == (FThreadSafeStaticStat<FStat_STAT_ChunkDataResident>)0x0)
    {
      pFVar16 = ::FName::FName(&local_60,"STAT_ChunkDataResident");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_ChunkDataResident>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChunkDataResident,*pFVar16,
                          L"Resident Chunks","STATGROUP_GeometryCache","STATCAT_Advanced",
                          L"GeometryCache",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar21;
    FVar33 = FVar3.ComparisonIndex.Value;
    uVar14 = FVar3.Number;
    local_d8 = FVar33.Value;
    uStack_d4 = uVar14;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      local_88.NameAndInfo.Number = uVar14 & 0xffffafff | 0xa000;
      local_a8 = FVar3;
      local_88.StatData.Pad = auVar20;
      local_88.NameAndInfo.Index.Value = FVar33.Value;
      FThreadStats::AddStatMessage(pFVar22,&local_88);
      FStatsTrace::Add(&local_a8,(long64)auVar20);
      if (pFVar22->ScopeCount == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  auVar20 = (uchar  [8])(longlong)*(int *)(pFVar29 + lVar30);
  if (auVar20 != (uchar  [8])0x0) {
    FVar24 = StatPtr_STAT_ChunkDataStreamed;
    if (StatPtr_STAT_ChunkDataStreamed == (FThreadSafeStaticStat<FStat_STAT_ChunkDataStreamed>)0x0)
    {
      pFVar16 = ::FName::FName(local_58,"STAT_ChunkDataStreamed");
      FVar24 = (FThreadSafeStaticStat<FStat_STAT_ChunkDataStreamed>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChunkDataStreamed,*pFVar16,
                          L"Streamed Chunks","STATGROUP_GeometryCache","STATCAT_Advanced",
                          L"GeometryCache",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar24;
    FVar33 = FVar3.ComparisonIndex.Value;
    uVar14 = FVar3.Number;
    local_d0 = FVar33.Value;
    uStack_cc = uVar14;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      local_78.NameAndInfo.Number = uVar14 & 0xffffafff | 0xa000;
      local_a0 = FVar3;
      local_78.StatData.Pad = auVar20;
      local_78.NameAndInfo.Index.Value = FVar33.Value;
      FThreadStats::AddStatMessage(pFVar22,&local_78);
      FStatsTrace::Add(&local_a0,(long64)auVar20);
      if (pFVar22->ScopeCount == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  FBulkData::GetCopy(local_108,(void **)local_120,true);
  pFVar29 = (((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar28)->AllocatorInstance).Data;
  if (((pFVar29 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       pFVar29 + (longlong)((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar28)->ArrayMax * 4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar28)->ArrayNum;
  if (iVar15 == ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar28)->ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)pFVar28,
                        &((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar28)->ArrayMax);
  }
  ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar28)->ArrayNum = iVar15 + 1;
  *(uint *)((((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar28)->AllocatorInstance).Data +
           (longlong)iVar15 * 4) = local_128;
  FVar26.Data = local_e8;
LAB_14ca27c15:
  FVar26.Data = FVar26.Data + 4;
  goto LAB_14ca273d7;
}

// ProcessCompletedChunks @ 14ca281f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamingGeometryCacheData::ProcessCompletedChunks(FStreamingGeometryCacheData *this)

{
  int *piVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_OutstandingRequests> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ChunkDataResident> FVar16;
  FThreadSafeStaticStat<FStat_STAT_ChunkDataStreamed> FVar17;
  IGeometryCacheStreamingManager *pIVar18;
  int iVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  FNameEntryId FVar22;
  uint uVar23;
  uint uVar24;
  uint uVar26;
  longlong *plVar27;
  uchar auVar28 [8];
  IBulkDataIORequest *local_res10;
  uint local_res18;
  uint uStackX_1c;
  uint local_res20;
  uint uStackX_24;
  IBulkDataIORequest *local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  uint uStack_c4;
  longlong *local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FStatMessage local_a0;
  FStatMessage local_90;
  FStatMessage local_80;
  undefined8 local_70;
  undefined4 uStack_68;
  uint uStack_64;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  longlong *plVar25;
  
  bVar8 = IsInGameThread();
  if ((bVar8) || (bVar8 = IsInRenderingThread(), bVar8)) {
    while( true ) {
      plVar21 = (longlong *)0x0;
      pTVar2 = ((this->CompletedChunks).Tail)->NextNode;
      if (pTVar2 == (TNode *)0x0) break;
      local_d8 = (pTVar2->Item).ReadRequest;
      uStack_d0 = *(undefined8 *)&(pTVar2->Item).LoadedChunkIndex;
      pTVar3 = (this->CompletedChunks).Tail;
      (this->CompletedChunks).Tail = pTVar2;
      local_70 = 0;
      uStack_68 = 0;
      (pTVar2->Item).ReadRequest = (IBulkDataIORequest *)0x0;
      *(ulonglong *)&(pTVar2->Item).LoadedChunkIndex = (ulonglong)uStack_64 << 0x20;
      ::operator_delete(pTVar3,0x18);
      if (*(int *)&(this->Chunks).field_0x8 == *(int *)&(this->Chunks).field_0x34) {
LAB_14ca28308:
        if ((byte)LogGeoCaStreaming._0_1_ < 2) {
          return;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreaming);
        return;
      }
      puVar4 = *(undefined1 **)&(this->Chunks).field_0x40;
      puVar20 = &(this->Chunks).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar20 = puVar4;
      }
      iVar10 = *(int *)(puVar20 +
                       (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & (uint)uStack_d0) * 4);
      if (iVar10 == -1) goto LAB_14ca28308;
      while (lVar11 = *(longlong *)&this->Chunks + (longlong)iVar10 * 0x28,
            *(uint *)(*(longlong *)&this->Chunks + (longlong)iVar10 * 0x28) != (uint)uStack_d0) {
        iVar10 = *(int *)(lVar11 + 0x20);
        if (iVar10 == -1) goto LAB_14ca28308;
      }
      plVar25 = (longlong *)(lVar11 + 8);
      if (lVar11 == 0) {
        plVar25 = plVar21;
      }
      local_c0 = plVar25;
      if (plVar25 == (longlong *)0x0) goto LAB_14ca28308;
      if (plVar25[2] != 0) {
        lVar11 = (**(code **)((longlong)*local_d8 + 0x18))();
        if (lVar11 == 0) {
          if (1 < (byte)LogGeoCaStreaming._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreaming);
          }
          pFVar5 = (this->ChunksRequested).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)&uStack_d0) &&
              ((FScriptContainerElement *)&uStack_d0 <
               pFVar5 + (longlong)(this->ChunksRequested).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (this->ChunksRequested).ArrayNum;
          if (iVar10 != 0) {
            pFVar5 = (this->ChunksRequested).AllocatorInstance.Data;
            bVar8 = *(int *)pFVar5 != (uint)uStack_d0;
            plVar25 = plVar21;
            plVar27 = plVar21;
            iVar19 = (uint)uStack_d0;
            do {
              uVar23 = (uint)plVar25;
              uVar24 = uVar23;
              do {
                plVar21 = (longlong *)((longlong)plVar21 + 1);
                uVar24 = uVar24 + 1;
                plVar25 = (longlong *)(ulonglong)uVar24;
                if ((longlong)iVar10 <= (longlong)plVar21) break;
              } while (bVar8 == (*(int *)(pFVar5 + (longlong)plVar21 * 4) != iVar19));
              if (bVar8 != false) {
                uVar26 = (uint)plVar27;
                if (uVar26 != uVar23) {
                  memmove(pFVar5 + (longlong)(int)uVar26 * 4,pFVar5 + (longlong)(int)uVar23 * 4,
                          (longlong)(int)(uVar24 - uVar23) << 2);
                  iVar19 = (uint)uStack_d0;
                }
                plVar27 = (longlong *)(ulonglong)(uVar26 + (uVar24 - uVar23));
              }
              bVar8 = (bool)(bVar8 ^ 1);
            } while ((longlong)plVar21 < (longlong)iVar10);
            (this->ChunksRequested).ArrayNum = (int)plVar27;
            plVar25 = local_c0;
          }
        }
        else {
          *plVar25 = lVar11;
          pFVar5 = (this->ChunksAvailable).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)&uStack_d0) &&
              ((FScriptContainerElement *)&uStack_d0 <
               pFVar5 + (longlong)(this->ChunksAvailable).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (this->ChunksAvailable).ArrayNum;
          piVar1 = &(this->ChunksAvailable).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(this->ChunksAvailable).AllocatorInstance,piVar1);
          }
          (this->ChunksAvailable).ArrayNum = iVar10 + 1;
          *(uint *)((this->ChunksAvailable).AllocatorInstance.Data + (longlong)iVar10 * 4) =
               (uint)uStack_d0;
          pFVar5 = (this->ChunksRequested).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)&uStack_d0) &&
              ((FScriptContainerElement *)&uStack_d0 <
               pFVar5 + (longlong)(this->ChunksRequested).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (this->ChunksRequested).ArrayNum;
          if (iVar10 != 0) {
            pFVar5 = (this->ChunksRequested).AllocatorInstance.Data;
            bVar8 = *(int *)pFVar5 != (uint)uStack_d0;
            plVar25 = plVar21;
            plVar27 = plVar21;
            iVar19 = (uint)uStack_d0;
            do {
              uVar23 = (uint)plVar25;
              uVar24 = uVar23;
              do {
                plVar21 = (longlong *)((longlong)plVar21 + 1);
                uVar24 = uVar24 + 1;
                plVar25 = (longlong *)(ulonglong)uVar24;
                if ((longlong)iVar10 <= (longlong)plVar21) break;
              } while (bVar8 == (*(int *)(pFVar5 + (longlong)plVar21 * 4) != iVar19));
              if (bVar8 != false) {
                uVar26 = (uint)plVar27;
                if (uVar26 != uVar23) {
                  memmove(pFVar5 + (longlong)(int)uVar26 * 4,pFVar5 + (longlong)(int)uVar23 * 4,
                          (longlong)(int)(uVar24 - uVar23) << 2);
                  iVar19 = (uint)uStack_d0;
                }
                plVar27 = (longlong *)(ulonglong)(uVar26 + (uVar24 - uVar23));
              }
              bVar8 = (bool)(bVar8 ^ 1);
            } while ((longlong)plVar21 < (longlong)iVar10);
            (this->ChunksRequested).ArrayNum = (int)plVar27;
            plVar25 = local_c0;
          }
          if (FThreadStats::bPrimaryEnable != false) {
            FVar13 = StatPtr_STAT_OutstandingRequests;
            if (StatPtr_STAT_OutstandingRequests ==
                (FThreadSafeStaticStat<FStat_STAT_OutstandingRequests>)0x0) {
              pFVar12 = ::FName::FName(&local_60,"STAT_OutstandingRequests");
              FVar13 = (FThreadSafeStaticStat<FStat_STAT_OutstandingRequests>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutstandingRequests,
                                  *pFVar12,L"Outstanding Requests","STATGROUP_GeometryCache",
                                  "STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,false,false
                                  ,MCR_Invalid);
            }
            FVar6 = *(FName *)FVar13;
            FVar22 = FVar6.ComparisonIndex.Value;
            uVar24 = FVar6.Number;
            local_res18 = FVar22.Value;
            uStackX_1c = uVar24;
            if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar14 == (FThreadStats *)0x0) {
                pFVar15 = FThreadStatsPool::Get();
                pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
              }
              local_a0.NameAndInfo.Number = uVar24 & 0xffffbfff | 0xb000;
              local_a0.StatData.Pad[0] = '\x01';
              local_a0.StatData.Pad[1] = '\0';
              local_a0.StatData.Pad[2] = '\0';
              local_a0.StatData.Pad[3] = '\0';
              local_a0.StatData.Pad[4] = '\0';
              local_a0.StatData.Pad[5] = '\0';
              local_a0.StatData.Pad[6] = '\0';
              local_a0.StatData.Pad[7] = '\0';
              local_b8 = FVar6;
              local_a0.NameAndInfo.Index.Value = FVar22.Value;
              FThreadStats::AddStatMessage(pFVar14,&local_a0);
              FStatsTrace::Add(&local_b8,-1);
              if (pFVar14->ScopeCount == 0) {
                FThreadStats::Flush(pFVar14,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar14,false,false);
              }
            }
          }
          auVar28 = (uchar  [8])(longlong)(int)plVar25[1];
          if (auVar28 != (uchar  [8])0x0) {
            FVar16 = StatPtr_STAT_ChunkDataResident;
            if (StatPtr_STAT_ChunkDataResident ==
                (FThreadSafeStaticStat<FStat_STAT_ChunkDataResident>)0x0) {
              pFVar12 = ::FName::FName(&local_58,"STAT_ChunkDataResident");
              FVar16 = (FThreadSafeStaticStat<FStat_STAT_ChunkDataResident>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChunkDataResident,
                                  *pFVar12,L"Resident Chunks","STATGROUP_GeometryCache",
                                  "STATCAT_Advanced",L"GeometryCache",true,false,ST_int64,false,
                                  false,MCR_Physical);
            }
            FVar6 = *(FName *)FVar16;
            FVar22 = FVar6.ComparisonIndex.Value;
            uVar24 = FVar6.Number;
            local_res20 = FVar22.Value;
            uStackX_24 = uVar24;
            if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar14 == (FThreadStats *)0x0) {
                pFVar15 = FThreadStatsPool::Get();
                pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
              }
              local_90.NameAndInfo.Number = uVar24 & 0xffffafff | 0xa000;
              local_b0 = FVar6;
              local_90.StatData.Pad = auVar28;
              local_90.NameAndInfo.Index.Value = FVar22.Value;
              FThreadStats::AddStatMessage(pFVar14,&local_90);
              FStatsTrace::Add(&local_b0,(long64)auVar28);
              if (pFVar14->ScopeCount == 0) {
                FThreadStats::Flush(pFVar14,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar14,false,false);
              }
            }
          }
          auVar28 = (uchar  [8])(longlong)(int)plVar25[1];
          if (auVar28 != (uchar  [8])0x0) {
            FVar17 = StatPtr_STAT_ChunkDataStreamed;
            if (StatPtr_STAT_ChunkDataStreamed ==
                (FThreadSafeStaticStat<FStat_STAT_ChunkDataStreamed>)0x0) {
              pFVar12 = ::FName::FName(local_50,"STAT_ChunkDataStreamed");
              FVar17 = (FThreadSafeStaticStat<FStat_STAT_ChunkDataStreamed>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChunkDataStreamed,
                                  *pFVar12,L"Streamed Chunks","STATGROUP_GeometryCache",
                                  "STATCAT_Advanced",L"GeometryCache",true,false,ST_int64,false,
                                  false,MCR_Physical);
            }
            FVar6 = *(FName *)FVar17;
            FVar22 = FVar6.ComparisonIndex.Value;
            uVar24 = FVar6.Number;
            local_c8 = FVar22.Value;
            uStack_c4 = uVar24;
            if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar14 == (FThreadStats *)0x0) {
                pFVar15 = FThreadStatsPool::Get();
                pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
              }
              local_80.NameAndInfo.Number = uVar24 & 0xffffafff | 0xa000;
              local_a8 = FVar6;
              local_80.StatData.Pad = auVar28;
              local_80.NameAndInfo.Index.Value = FVar22.Value;
              FThreadStats::AddStatMessage(pFVar14,&local_80);
              FStatsTrace::Add(&local_a8,(long64)auVar28);
              if (pFVar14->ScopeCount == 0) {
                FThreadStats::Flush(pFVar14,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar14,false,false);
              }
            }
          }
          pIVar18 = IGeometryCacheStreamingManager::Get();
          LOCK();
          (pIVar18->IoBandwidth).Counter = (pIVar18->IoBandwidth).Counter + (int)plVar25[1];
          UNLOCK();
        }
        plVar25[2] = 0;
      }
      cVar9 = (**(code **)((longlong)*local_d8 + 8))();
      if (cVar9 == '\0') {
        TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>::
        Emplace<IBulkDataIORequest_*_const_&>
                  (&this->DelayedDeleteReadRequests,&local_res10,(bool *)&local_d8);
      }
      else if (local_d8 != (IBulkDataIORequest *)0x0) {
        (**(code **)*local_d8)(local_d8,1);
      }
    }
  }
  return;
}

// RemoveResidentChunk @ 14ca294e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamingGeometryCacheData::RemoveResidentChunk
          (FStreamingGeometryCacheData *this,FResidentChunk *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_ChunkDataResident> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar6 [8];
  FName local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  if ((param_1->Refcount != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadedChunk.Refcount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                         ,0x46,
                         L"Tried to remove a chunk wich was still mapped. Make sure there is an unmap for every map."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->IORequest != (IBulkDataIORequest *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadedChunk.IORequest == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                         ,0x47,
                         L"RemoveResidentChunk was called on a chunk which hasn\'t been processed by ProcessCompletedChunks yet."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->Memory != (void *)0x0) {
    auVar6 = (uchar  [8])(longlong)param_1->DataSize;
    if (auVar6 != (uchar  [8])0x0) {
      FVar5 = StatPtr_STAT_ChunkDataResident;
      if (StatPtr_STAT_ChunkDataResident == (FThreadSafeStaticStat<FStat_STAT_ChunkDataResident>)0x0
         ) {
        pFVar4 = ::FName::FName(&local_res18,"STAT_ChunkDataResident");
        FVar5 = (FThreadSafeStaticStat<FStat_STAT_ChunkDataResident>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChunkDataResident,*pFVar4,
                           L"Resident Chunks","STATGROUP_GeometryCache","STATCAT_Advanced",
                           L"GeometryCache",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar5;
      local_res10 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
        local_res10 = FVar1;
        local_28.StatData.Pad = auVar6;
        local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_28);
        FStatsTrace::Add(&local_res10,-(longlong)auVar6);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    FMemory::Free(param_1->Memory);
  }
  param_1->Memory = (void *)0x0;
  param_1->IORequest = (IBulkDataIORequest *)0x0;
  param_1->DataSize = 0;
  param_1->Refcount = 0;
  return;
}

// ResetNeededChunks @ 14ca29cb0

void __thiscall FStreamingGeometryCacheData::ResetNeededChunks(FStreamingGeometryCacheData *this)

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

// UnmapChunk @ 14ca2c9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamingGeometryCacheData::UnmapChunk(FStreamingGeometryCacheData *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  longlong lVar8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->Chunks).field_0x8 != *(int *)&(this->Chunks).field_0x34) {
    puVar7 = *(undefined1 **)&(this->Chunks).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Chunks).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->Chunks).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->Chunks + (longlong)iVar5 * 0x28;
        if (*(uint *)(*(longlong *)&this->Chunks + (longlong)iVar5 * 0x28) == param_1) {
          lVar8 = lVar1 + 8;
          if (lVar1 == 0) {
            lVar8 = 0;
          }
          if (lVar8 != 0) {
            if ((*(int *)(lVar8 + 0xc) < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ResidentChunk->Refcount > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                                   ,0x1b4,
                                   L"Map/Unmap out of balance. Make sure you unmap once fore every map."
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar6 = (this->ChunksAvailable).AllocatorInstance.Data;
            pFVar2 = pFVar6 + (longlong)(this->ChunksAvailable).ArrayNum * 4;
            goto joined_r0x00014ca2caed;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  if (4 < (byte)LogGeoCaStreaming._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreaming);
  }
  goto LAB_14ca2ca83;
joined_r0x00014ca2caed:
  if (pFVar6 == pFVar2) goto LAB_14ca2cafd;
  if (*(uint *)pFVar6 == param_1) goto LAB_14ca2cb47;
  pFVar6 = pFVar6 + 4;
  goto joined_r0x00014ca2caed;
LAB_14ca2cafd:
  pFVar6 = (this->ChunksEvicted).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)(this->ChunksEvicted).ArrayNum * 4;
  for (; pFVar6 != pFVar2; pFVar6 = pFVar6 + 4) {
    if (*(uint *)pFVar6 == param_1) goto LAB_14ca2cb47;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ChunksAvailable.Contains(ChunkIndex) || ChunksEvicted.Contains(ChunkIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                     ,0x1b5,L"Tried to unmap a chunk in an invalid state.");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ca2cb47:
  *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + -1;
LAB_14ca2ca83:
                    /* WARNING: Could not recover jumptable at 0x00014ca2ca9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdateStreamingStatus @ 14ca2f2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamingGeometryCacheData::UpdateStreamingStatus(FStreamingGeometryCacheData *this)

{
  TBulkData<unsigned_char> *this_00;
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ForElementType<FSetElementId> FVar6;
  undefined1 *puVar7;
  code *pcVar8;
  FStreamingGeometryCacheData *pFVar9;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *pTVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FStreamedGeometryCacheChunk *pFVar16;
  long64 lVar17;
  void *pvVar18;
  TStatId TVar19;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  TEventRef<unsigned_int> TVar20;
  IBulkDataIORequest *pIVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_OutstandingRequests> FVar23;
  FWriteBuffer *pFVar24;
  FResidentChunk *pFVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  undefined ***pppuVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  ForElementType<FSetElementId> FVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  FNameEntryId FVar40;
  FStreamingGeometryCacheData *pFVar41;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *pTVar42;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar43;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar44;
  uchar auVar45 [8];
  longlong lVar46;
  longlong lVar47;
  uint *puVar48;
  undefined1 auStackY_2f8 [32];
  int local_298;
  byte local_294;
  undefined1 local_293;
  undefined1 local_292;
  undefined1 local_291;
  FScriptContainerElement *local_290;
  uint local_288;
  FStreamingGeometryCacheData *local_280;
  TArray<int,TSizedDefaultAllocator<32>_> *local_270;
  int local_268 [2];
  TKeyInitializer<int_const_&> local_260;
  int local_258 [2];
  TKeyInitializer<int_const_&> local_250;
  FStreamedGeometryCacheChunk *local_248;
  LPCRITICAL_SECTION local_240;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *local_238
  ;
  int iStack_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  int local_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  uint local_208;
  uint uStack_204;
  undefined8 local_200;
  uint local_1f8;
  uint uStack_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int *local_1e0;
  FName local_1d8;
  int *local_1d0;
  FName local_1c8;
  FScriptContainerElement *local_1c0;
  longlong *local_1b8;
  FStatMessage local_1b0;
  IBulkDataIORequest *local_1a0;
  TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator> *local_198
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FName local_138 [4];
  FName local_118 [4];
  undefined4 local_f4;
  undefined4 local_d4;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  code *local_78 [2];
  undefined **local_68;
  FStreamingGeometryCacheData *local_60;
  int local_58;
  undefined4 local_54;
  undefined ***local_50;
  undefined4 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_280 = this;
  local_240 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  local_288 = (this->ChunksNeeded).ArrayNum;
  uVar26 = (ulonglong)(int)local_288;
  pTVar43 = &this->ChunksAvailable;
  pFVar30 = (this->ChunksNeeded).AllocatorInstance.Data;
  local_1c0 = pFVar30 + uVar26 * 4;
  uVar32 = local_138[3].Number;
  local_270 = pTVar43;
LAB_14ca2f355:
  while( true ) {
    pFVar29 = local_1c0;
    local_290 = pFVar30;
    if ((this->ChunksNeeded).ArrayNum != (int)uVar26) {
      local_293 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_293);
    }
    if (pFVar30 == pFVar29) break;
    pFVar27 = (pTVar43->AllocatorInstance).Data;
    local_298 = *(int *)pFVar30;
    pFVar29 = pFVar27 + (longlong)pTVar43->ArrayNum * 4;
    for (; pFVar27 != pFVar29; pFVar27 = pFVar27 + 4) {
      if (*(int *)pFVar27 == local_298) goto LAB_14ca2fbf9;
    }
    pFVar29 = (this->ChunksEvicted).AllocatorInstance.Data;
    pFVar27 = pFVar29;
    while( true ) {
      if (pFVar27 == pFVar29 + (longlong)(this->ChunksEvicted).ArrayNum * 4) goto LAB_14ca2f3d1;
      if (*(int *)pFVar27 == local_298) break;
      pFVar27 = pFVar27 + 4;
    }
    if (((pFVar29 <= (FScriptContainerElement *)&local_298) &&
        ((FScriptContainerElement *)&local_298 <
         pFVar29 + (longlong)(this->ChunksEvicted).ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar15 = (this->ChunksEvicted).ArrayNum;
    iVar33 = local_298;
    if (iVar15 != 0) {
      pFVar30 = (this->ChunksEvicted).AllocatorInstance.Data;
      iVar34 = 0;
      lVar46 = 0;
      local_294 = *(int *)pFVar30 != local_298;
      iVar35 = 0;
      do {
        iVar36 = iVar35;
        do {
          lVar46 = lVar46 + 1;
          iVar36 = iVar36 + 1;
          if (iVar15 <= lVar46) break;
        } while ((bool)local_294 == (*(int *)(pFVar30 + lVar46 * 4) != iVar33));
        if (local_294 != 0) {
          if (iVar34 != iVar35) {
            memmove(pFVar30 + (longlong)iVar34 * 4,pFVar30 + (longlong)iVar35 * 4,
                    (longlong)(iVar36 - iVar35) << 2);
            iVar33 = local_298;
          }
          iVar34 = iVar34 + (iVar36 - iVar35);
        }
        local_294 = local_294 ^ 1;
        iVar35 = iVar36;
      } while (lVar46 < iVar15);
      (local_280->ChunksEvicted).ArrayNum = iVar34;
      pFVar30 = local_290;
      pTVar43 = local_270;
      uVar32 = local_138[3].Number;
    }
    pFVar29 = (pTVar43->AllocatorInstance).Data;
    if (((pFVar29 <= (FScriptContainerElement *)&local_298) &&
        ((FScriptContainerElement *)&local_298 < pFVar29 + (longlong)pTVar43->ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), iVar33 = local_298, bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar15 = pTVar43->ArrayNum;
    if (iVar15 == pTVar43->ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar43->AllocatorInstance,&pTVar43->ArrayMax);
      iVar33 = local_298;
    }
    pFVar30 = pFVar30 + 4;
    pTVar43->ArrayNum = iVar15 + 1;
    *(int *)((pTVar43->AllocatorInstance).Data + (longlong)iVar15 * 4) = iVar33;
    uVar26 = (ulonglong)local_288;
    this = local_280;
  }
  ProcessCompletedChunks(this);
  pFVar9 = local_280;
  uVar32 = pTVar43->ArrayNum - 1;
  if (-1 < (int)uVar32) {
    lVar46 = (longlong)(int)uVar32 * 4;
    do {
      uVar37 = ~uVar32 >> 0x1f;
      uVar44 = 0;
      if ((int)uVar32 < pTVar43->ArrayNum) {
        uVar44 = uVar37;
      }
      if ((uVar44 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar29 = (pFVar9->ChunksNeeded).AllocatorInstance.Data;
      pFVar30 = pFVar29 + (longlong)(pFVar9->ChunksNeeded).ArrayNum * 4;
      if (pFVar29 != pFVar30) {
        do {
          if (*(int *)pFVar29 == *(int *)((pTVar43->AllocatorInstance).Data + lVar46))
          goto LAB_14ca2fe2b;
          pFVar29 = pFVar29 + 4;
        } while (pFVar29 != pFVar30);
      }
      uVar44 = 0;
      if ((int)uVar32 < (pFVar9->ChunksAvailable).ArrayNum) {
        uVar44 = uVar37;
      }
      if ((uVar44 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&pFVar9->ChunksEvicted,
                 (int *)((pFVar9->ChunksAvailable).AllocatorInstance.Data + lVar46));
      pTVar43 = local_270;
      uVar44 = 0;
      if ((int)uVar32 < local_270->ArrayNum) {
        uVar44 = uVar37;
      }
      if ((uVar44 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar30 = (pTVar43->AllocatorInstance).Data + lVar46;
      iVar15 = pTVar43->ArrayNum + ~uVar32;
      if (iVar15 != 0) {
        memmove(pFVar30,pFVar30 + 4,(longlong)iVar15 << 2);
      }
      pTVar43->ArrayNum = pTVar43->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&pTVar43->AllocatorInstance,pTVar43->ArrayNum,&pTVar43->ArrayMax);
LAB_14ca2fe2b:
      lVar46 = lVar46 + -4;
      uVar32 = uVar32 - 1;
      this = pFVar9;
    } while (-1 < (int)uVar32);
  }
  pFVar9 = local_280;
  uVar32 = (this->ChunksEvicted).ArrayNum - 1;
  pFVar41 = this;
  if (-1 < (int)uVar32) {
    lVar47 = (longlong)(int)uVar32;
    pTVar43 = &this->ChunksEvicted;
    lVar46 = lVar47 * 4;
    do {
      uVar44 = 0;
      if ((int)uVar32 < (this->ChunksEvicted).ArrayNum) {
        uVar44 = ~uVar32 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar25 = TMapBase<int,FResidentChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>_>
                ::FindChecked((TMapBase<int,FResidentChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>_>
                               *)&this->Chunks,*(int *)((pTVar43->AllocatorInstance).Data + lVar46))
      ;
      if (pFVar25->Refcount == 0) {
        RemoveResidentChunk(pFVar9,pFVar25);
        uVar44 = 0;
        if ((int)uVar32 < (this->ChunksEvicted).ArrayNum) {
          uVar44 = ~uVar32 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar30 = (pTVar43->AllocatorInstance).Data + lVar47 * 4;
        iVar15 = (this->ChunksEvicted).ArrayNum + ~uVar32;
        if (iVar15 != 0) {
          memmove(pFVar30,pFVar30 + 4,(longlong)iVar15 << 2);
        }
        iVar15 = (this->ChunksEvicted).ArrayNum + -1;
        (this->ChunksEvicted).ArrayNum = iVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar43->AllocatorInstance,iVar15,&(this->ChunksEvicted).ArrayMax);
      }
      lVar47 = lVar47 + -1;
      lVar46 = lVar46 + -4;
      uVar32 = uVar32 - 1;
      pFVar41 = pFVar9;
    } while (-1 < (int)uVar32);
  }
  pFVar9 = local_280;
  iStack_230 = 0;
  local_c8._0_8_ = 0;
  pTVar42 = &pFVar41->DelayedDeleteReadRequests;
  local_c8._8_8_ = 0;
  local_a8 = (uint *)0x0;
  uStack_22c = 1;
  local_228 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(local_280->DelayedDeleteReadRequests).Elements.field_0x10;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_218 = 0;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  iVar15 = *(int *)&(local_280->DelayedDeleteReadRequests).Elements.field_0x28;
  uStack_21c = 0;
  if (iVar15 != 0) {
    puVar48 = *(uint **)&(local_280->DelayedDeleteReadRequests).Elements.field_0x20;
    if (puVar48 == (uint *)0x0) {
      puVar48 = (uint *)local_228;
    }
    uVar32 = *puVar48;
    local_218 = 0;
    while (uVar32 == 0) {
      lVar46 = (longlong)iStack_230;
      local_218 = local_218 + 0x20;
      iStack_230 = iStack_230 + 1;
      uStack_21c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_230) goto LAB_14ca3004e;
      uVar32 = puVar48[lVar46 + 1];
    }
    uStack_22c = -uVar32 & uVar32;
    uVar26 = (ulonglong)uStack_22c * 2 + 1;
    lVar46 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar46 == 0; lVar46 = lVar46 + -1) {
      }
    }
    uStack_21c = local_218 + -1 + (int)lVar46;
    local_1e8 = (int)lVar46;
    if (iVar15 < (int)uStack_21c) {
      uStack_21c = iVar15;
    }
  }
LAB_14ca3004e:
  puVar7 = &(local_280->DelayedDeleteReadRequests).Elements.field_0x10;
  uStack_214 = local_f4;
  iStack_210 = *(int *)&(local_280->DelayedDeleteReadRequests).Elements.field_0x8 -
               *(int *)&(local_280->DelayedDeleteReadRequests).Elements.field_0x34;
  uVar32 = *(uint *)&(local_280->DelayedDeleteReadRequests).Elements.field_0x28;
  uVar44 = uVar32 & 0xffffffe0;
  uStack_220 = 0xffffffff;
  local_198 = pTVar42;
  TStack_190._padding_ = CONCAT44(uStack_22c,iStack_230);
  iVar33 = (int)uVar32 >> 5;
  TStack_190.Array = local_228;
  TStack_190.UnvisitedBitMask = 0xffffffff;
  TStack_190.CurrentBitIndex = uStack_21c;
  TStack_190.BaseBitIndex = local_218;
  TStack_190._28_4_ = local_f4;
  uStack_170 = CONCAT44(uStack_20c,iStack_210);
  local_238 = pTVar42;
  if ((((int)uVar32 < 0) || (iVar15 < (int)uVar32)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar37 = *(uint *)&(pFVar9->DelayedDeleteReadRequests).Elements.field_0x28;
  if (uVar32 != uVar37) {
    puVar38 = *(undefined1 **)&(pFVar9->DelayedDeleteReadRequests).Elements.field_0x20;
    puVar39 = puVar7;
    if (puVar38 != (undefined1 *)0x0) {
      puVar39 = puVar38;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar39 + (longlong)iVar33 * 4);
    while (uVar32 == 0) {
      lVar46 = (longlong)iVar33;
      uVar44 = uVar44 + 0x20;
      iVar33 = iVar33 + 1;
      uVar32 = uVar37;
      if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
      goto LAB_14ca30160;
      uVar32 = *(uint *)(puVar39 + lVar46 * 4 + 4);
    }
    uVar26 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar46 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar46 == 0; lVar46 = lVar46 + -1) {
      }
    }
    uVar32 = (uVar44 - 1) + (int)lVar46;
    local_1e4 = (int)lVar46;
    if ((int)uVar37 < (int)uVar32) {
      uVar32 = uVar37;
    }
  }
LAB_14ca30160:
  while( true ) {
    pTVar10 = local_198;
    if (*(int *)&(local_198->Elements).field_0x8 - *(int *)&(local_198->Elements).field_0x34 !=
        (int)uStack_170) {
      local_292 = 0;
      `TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_292);
    }
    uVar44 = local_a0;
    if (((TStack_190.CurrentBitIndex == uVar32) &&
        (TStack_190.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar7)) &&
       (pTVar10 == pTVar42)) break;
    local_1b8 = *(longlong **)
                 (*(longlong *)&pTVar10->Elements + (longlong)TStack_190.CurrentBitIndex * 0x10);
    cVar14 = (**(code **)(*local_1b8 + 8))();
    if (cVar14 != '\0') {
      TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>::
      Emplace<IBulkDataIORequest_*_const_&>
                ((TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
                  *)local_c8,&local_1a0,(bool *)&local_1b8);
    }
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
  }
  iStack_230 = 0;
  local_218 = 0;
  uStack_22c = 1;
  uStack_21c = 0;
  if (local_a0 != 0) {
    puVar48 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar48 = local_a8;
    }
    uVar32 = *puVar48;
    while (uVar32 == 0) {
      lVar46 = (longlong)iStack_230;
      local_218 = local_218 + 0x20;
      iStack_230 = iStack_230 + 1;
      uStack_21c = local_a0;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_230)
      goto LAB_14ca30260;
      uVar32 = puVar48[lVar46 + 1];
    }
    uStack_22c = -uVar32 & uVar32;
    uVar26 = (ulonglong)uStack_22c * 2 + 1;
    lVar46 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar46 == 0; lVar46 = lVar46 + -1) {
      }
    }
    uStack_21c = local_218 + -1 + (int)lVar46;
    local_1f0 = (int)lVar46;
    if ((int)local_a0 < (int)uStack_21c) {
      uStack_21c = local_a0;
    }
  }
LAB_14ca30260:
  local_238 = (TSet<IBulkDataIORequest_*,DefaultKeyFuncs<IBulkDataIORequest_*,0>,FDefaultSetAllocator>
               *)local_c8;
  uStack_214 = local_d4;
  local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
  iStack_210 = local_c8._8_4_ - local_94;
  uVar32 = local_a0 & 0xffffffe0;
  uStack_220 = 0xffffffff;
  local_288 = -1 << ((byte)local_a0 & 0x1f);
  local_168 = (longlong *)local_238;
  TStack_160._padding_ = CONCAT44(uStack_22c,iStack_230);
  iVar15 = (int)local_a0 >> 5;
  local_290 = (FScriptContainerElement *)CONCAT44(local_290._4_4_,local_a0);
  TStack_160.Array = local_228;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160.CurrentBitIndex = uStack_21c;
  TStack_160.BaseBitIndex = local_218;
  TStack_160._28_4_ = local_d4;
  uStack_140 = CONCAT44(uStack_20c,iStack_210);
  if (((int)local_a0 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar9 = local_280;
  if (uVar44 != local_a0) {
    puVar48 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar48 = local_a8;
    }
    uVar44 = local_288 & puVar48[iVar15];
    while (uVar44 == 0) {
      lVar46 = (longlong)iVar15;
      uVar32 = uVar32 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
        local_290 = (FScriptContainerElement *)CONCAT44(local_290._4_4_,local_a0);
        uVar44 = local_a0;
        goto LAB_14ca3039c;
      }
      uVar44 = puVar48[lVar46 + 1];
    }
    uVar26 = (ulonglong)(-uVar44 & uVar44) * 2 + 1;
    lVar46 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar46 == 0; lVar46 = lVar46 + -1) {
      }
    }
    local_1ec = (int)lVar46;
    uVar44 = local_1ec + -1 + uVar32;
    if ((int)local_a0 < (int)uVar44) {
      uVar44 = local_a0;
    }
    local_290 = (FScriptContainerElement *)CONCAT44(local_290._4_4_,uVar44);
  }
LAB_14ca3039c:
  pTVar42 = &local_280->DelayedDeleteReadRequests;
  while( true ) {
    plVar11 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      local_291 = 0;
      `TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_291);
    }
    lpCriticalSection = local_240;
    if (((TStack_160.CurrentBitIndex == uVar44) &&
        (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
       (plVar11 == (longlong *)local_c8)) break;
    puVar5 = *(undefined8 **)(*plVar11 + (longlong)TStack_160.CurrentBitIndex * 0x10);
    if (*(int *)&(pFVar9->DelayedDeleteReadRequests).Elements.field_0x8 !=
        *(int *)&(pFVar9->DelayedDeleteReadRequests).Elements.field_0x34) {
      uVar32 = ((uint)((ulonglong)puVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar5 >> 4)) *
               -0x7a143595;
      uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb;
      FVar6 = (pFVar9->DelayedDeleteReadRequests).Hash.SecondaryData;
      FVar31 = (ForElementType<FSetElementId>)&(pFVar9->DelayedDeleteReadRequests).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar31 = FVar6;
      }
      uVar32 = *(uint *)((longlong)FVar31 +
                        ((longlong)(pFVar9->DelayedDeleteReadRequests).HashSize - 1U &
                        (longlong)(int)(uVar32 >> 0x10 ^ uVar32)) * 4);
      if (uVar32 != 0xffffffff) {
LAB_14ca30470:
        if (*(undefined8 **)(*(longlong *)&pTVar42->Elements + (longlong)(int)uVar32 * 0x10) !=
            puVar5) goto code_r0x00014ca3047c;
        if (((int)uVar32 < 0) ||
           (*(int *)&(pFVar9->DelayedDeleteReadRequests).Elements.field_0x28 <= (int)uVar32)) {
LAB_14ca304fd:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Elements.IsValidIndex(ElementIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                              ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                             );
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          if ((*(int *)&(pFVar9->DelayedDeleteReadRequests).Elements.field_0x28 <= (int)uVar32) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar7 = *(undefined1 **)&(pFVar9->DelayedDeleteReadRequests).Elements.field_0x20;
          puVar38 = &(pFVar9->DelayedDeleteReadRequests).Elements.field_0x10;
          if (puVar7 != (undefined1 *)0x0) {
            puVar38 = puVar7;
          }
          uVar44 = uVar32;
          if ((int)uVar32 < 0) {
            uVar44 = uVar32 + 0x1f;
          }
          if ((*(uint *)(puVar38 + (longlong)((int)uVar44 >> 5) * 4) >> (uVar32 & 0x1f) & 1) == 0)
          goto LAB_14ca304fd;
        }
        FVar6 = (pFVar9->DelayedDeleteReadRequests).Hash.SecondaryData;
        lVar46 = (longlong)(int)uVar32 * 0x10 + *(longlong *)&pTVar42->Elements;
        FVar31 = (ForElementType<FSetElementId>)&(pFVar9->DelayedDeleteReadRequests).Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar31 = FVar6;
        }
        puVar48 = (uint *)((longlong)FVar31 + (longlong)*(int *)(lVar46 + 0xc) * 4);
        while( true ) {
          uVar44 = *puVar48;
          if ((uVar44 == 0xffffffff) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NextElementIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                  ,0x2b5,L"Corrupt hash"), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (uVar44 == uVar32) break;
          puVar48 = (uint *)(*(longlong *)&pTVar42->Elements + 8 + (longlong)(int)uVar44 * 0x10);
        }
        *puVar48 = *(uint *)(lVar46 + 8);
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)pTVar42,uVar32,1);
        uVar44 = (uint)local_290;
      }
    }
LAB_14ca305a5:
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<IBulkDataIORequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
LAB_14ca30609:
  LeaveCriticalSection(lpCriticalSection);
  return;
code_r0x00014ca3047c:
  uVar32 = *(uint *)(*(longlong *)&pTVar42->Elements + 8 + (longlong)(int)uVar32 * 0x10);
  if (uVar32 == 0xffffffff) goto LAB_14ca305a5;
  goto LAB_14ca30470;
LAB_14ca2f3d1:
  pFVar27 = (this->ChunksRequested).AllocatorInstance.Data;
  pTVar2 = &this->ChunksRequested;
  pFVar29 = pFVar27 + (longlong)(this->ChunksRequested).ArrayNum * 4;
  for (; pFVar27 != pFVar29; pFVar27 = pFVar27 + 4) {
    if (*(int *)pFVar27 == local_298) goto LAB_14ca2fbf9;
  }
  pFVar16 = UGeometryCacheTrackStreamable::GetChunk(this->Track,local_298);
  this_00 = &pFVar16->BulkData;
  local_248 = pFVar16;
  bVar12 = FBulkData::IsBulkDataLoaded((FBulkData *)this_00);
  if (bVar12) {
    local_1e0 = local_268;
    local_268[0] = local_298;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
                *)&this->Chunks,&local_260,(bool *)&local_1e0);
    lVar46 = *(longlong *)&this->Chunks + (longlong)(int)local_260.Key * 0x28;
    *(undefined4 *)(lVar46 + 0x14) = 0;
    *(undefined8 *)(lVar46 + 8) = 0;
    iVar15 = pFVar16->DataSize;
    *(undefined8 *)(lVar46 + 0x18) = 0;
    *(int *)(lVar46 + 0x10) = iVar15;
    iVar15 = pFVar16->DataSize;
    lVar17 = FBulkData::GetBulkDataSize((FBulkData *)&pFVar16->BulkData);
    if ((lVar17 != iVar15) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Chunk.BulkData.GetBulkDataSize() == Chunk.DataSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                            ,0xcd,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pvVar18 = FMemory::Malloc((longlong)pFVar16->DataSize,0);
    *(void **)(lVar46 + 8) = pvVar18;
    auVar45 = (uchar  [8])(longlong)pFVar16->DataSize;
    if (auVar45 != (uchar  [8])0x0) {
      TVar19 = FThreadSafeStaticStatInner<FStat_STAT_ChunkDataResident,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_ChunkDataResident,1> *)
                          &StatPtr_STAT_ChunkDataResident);
      FVar3 = *(FName *)(TVar19.StatIdPtr)->Name;
      FVar40 = FVar3.ComparisonIndex.Value;
      uVar44 = FVar3.Number;
      local_208 = FVar40.Value;
      uStack_204 = uVar44;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_1b0.NameAndInfo.Number = uVar44 & 0xffffafff | 0xa000;
        local_1d8 = FVar3;
        local_1b0.StatData.Pad = auVar45;
        local_1b0.NameAndInfo.Index.Value = FVar40.Value;
        FThreadStats::AddStatMessage(this_01,&local_1b0);
        FStatsTrace::Add(&local_1d8,(long64)auVar45);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
          pFVar16 = local_248;
        }
        else {
          pFVar16 = local_248;
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
            pFVar16 = local_248;
          }
        }
      }
    }
    pvVar18 = FBulkData::LockReadOnly((FBulkData *)&pFVar16->BulkData);
    memcpy(*(void **)(lVar46 + 8),pvVar18,(longlong)pFVar16->DataSize);
    FBulkData::Unlock((FBulkData *)&pFVar16->BulkData);
    pTVar43 = local_270;
    pFVar30 = (local_270->AllocatorInstance).Data;
    if (((pFVar30 <= (FScriptContainerElement *)&local_298) &&
        ((FScriptContainerElement *)&local_298 < pFVar30 + (longlong)local_270->ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar15 = pTVar43->ArrayNum;
    if (iVar15 == pTVar43->ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar43->AllocatorInstance,&pTVar43->ArrayMax);
    }
    pTVar43->ArrayNum = iVar15 + 1;
    *(int *)((pTVar43->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_298;
    pFVar30 = local_290;
  }
  else {
    bVar12 = FBulkData::CanLoadFromDisk((FBulkData *)this_00);
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Chunk.BulkData.CanLoadFromDisk()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                            ,0xd7,L"Bulk data is not loaded and cannot be loaded from disk!"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar12 = FBulkData::IsStoredCompressedOnDisk((FBulkData *)this_00);
    if ((bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Chunk.BulkData.IsStoredCompressedOnDisk()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                            ,0xd8,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_258[0] = local_298;
    local_1d0 = local_258;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
                *)&this->Chunks,&local_250,(bool *)&local_1d0);
    lVar46 = *(longlong *)&this->Chunks + (longlong)(int)local_250.Key * 0x28;
    *(undefined4 *)(lVar46 + 0x14) = 0;
    *(undefined8 *)(lVar46 + 8) = 0;
    iVar15 = pFVar16->DataSize;
    bVar12 = false;
    *(undefined8 *)(lVar46 + 0x18) = 0;
    *(int *)(lVar46 + 0x10) = iVar15;
    lVar17 = FBulkData::GetBulkDataSize((FBulkData *)this_00);
    if ((lVar17 != iVar15) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Chunk.BulkData.GetBulkDataSize() == ResidentChunk.DataSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\StreamingGeometryCacheData.cpp"
                            ,0xe0,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStreamingGeometryCacheData::UpdateStreamingStatus'::`15'::<lambda_1>,0,0>
                ::_vftable_;
    local_60 = local_280;
    local_58 = local_298;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FStreamingGeometryCacheData::UpdateStreamingStatus'::__l15::<lambda_1>,void,bool,IBulkDataIORequest_*>
                  ::Call;
    local_54 = uVar32;
    if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
      local_200 = 0;
      TVar20 = (TEventRef<unsigned_int>)&local_200;
    }
    else {
      ::FName::FName(&local_1c8,"GeometryCache");
      TVar20 = FStringTrace::GetNameRef(local_118);
    }
    uVar4 = *(undefined8 *)TVar20;
    if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                ((TLogScope<0> *)&local_48);
      bVar12 = true;
      *local_48 = (int)uVar4;
      *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
    }
    pIVar21 = FBulkData::CreateStreamingRequest
                        ((FBulkData *)this_00,AIOP_BelowNormal,
                         (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_78,(uchar *)0x0
                        );
    *(IBulkDataIORequest **)(lVar46 + 0x18) = pIVar21;
    if (pIVar21 == (IBulkDataIORequest *)0x0) {
      if (1 < (byte)LogGeoCaStreaming._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeoCaStreaming);
      }
      if (bVar12) {
        lVar46 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar46 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar24 = *(FWriteBuffer **)(lVar46 + 0x20);
        if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 1) {
          pFVar24 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar24->Cursor = '\n';
        pFVar24->Cursor = pFVar24->Cursor + 1;
        pFVar24->Committed = pFVar24->Cursor;
      }
      if (local_78[0] != (code *)0x0) {
        pppuVar28 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar28 = local_50;
        }
        (*(code *)(*pppuVar28)[2])();
      }
      goto LAB_14ca30609;
    }
    pFVar30 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar30 <= (FScriptContainerElement *)&local_298) &&
        ((FScriptContainerElement *)&local_298 <
         pFVar30 + (longlong)(this->ChunksRequested).ArrayMax * 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar15 = (this->ChunksRequested).ArrayNum;
    piVar1 = &(this->ChunksRequested).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ChunksRequested).ArrayNum = iVar15 + 1;
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_298;
    if (FThreadStats::bPrimaryEnable != false) {
      FVar23 = StatPtr_STAT_OutstandingRequests;
      if (StatPtr_STAT_OutstandingRequests ==
          (FThreadSafeStaticStat<FStat_STAT_OutstandingRequests>)0x0) {
        pFVar22 = ::FName::FName(local_138,"STAT_OutstandingRequests");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_OutstandingRequests>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutstandingRequests,*pFVar22,
                            L"Outstanding Requests","STATGROUP_GeometryCache","STATCAT_Advanced",
                            L"GeometryCache",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar23;
      local_1f8 = (uint)FVar3.ComparisonIndex.Value;
      uStack_1f4 = FVar3.Number;
      FThreadStats::AddMessage<__int64>(FVar3,Add,1,false);
    }
    if (bVar12) {
      lVar46 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar46 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar24 = *(FWriteBuffer **)(lVar46 + 0x20);
      if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 1) {
        pFVar24 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar24->Cursor = '\n';
      pFVar24->Cursor = pFVar24->Cursor + 1;
      pFVar24->Committed = pFVar24->Cursor;
    }
    pFVar30 = local_290;
    pTVar43 = local_270;
    if (local_78[0] != (code *)0x0) {
      pppuVar28 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar28 = local_50;
      }
      (*(code *)(*pppuVar28)[2])();
      pFVar30 = local_290;
      pTVar43 = local_270;
    }
  }
LAB_14ca2fbf9:
  pFVar30 = pFVar30 + 4;
  uVar26 = (ulonglong)local_288;
  this = local_280;
  goto LAB_14ca2f355;
}

