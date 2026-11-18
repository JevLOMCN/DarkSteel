// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 44

// <lambda_invoker_cdecl> @ 147677730

void __cdecl
`FAudioChunkCache::GetChunk'[::O]::<lambda_2>::<lambda_invoker_cdecl>(EAudioChunkLoadResult param_1)

{
  return;
}

// <lambda_1> @ 147685620

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

<lambda_1> * __thiscall
`FAudioChunkCache::KickOffAsyncLoad'::__l47::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(FAudioChunkCache **)this = param_1->__this;
  lVar1 = *(longlong *)&param_1->OnLoadCompleted;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(longlong *)((longlong)this + 0x10) = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->OnLoadCompleted).field_0x28;
    puVar4 = (undefined8 *)&(param_1->OnLoadCompleted).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    (**(code **)*puVar4)();
  }
  *(FCacheElement **)((longlong)this + 0x40) = param_1->CacheElement;
  uVar3 = *(undefined8 *)&(param_1->InKey).ObjectKey;
  *(FName *)((longlong)this + 0x48) = (param_1->InKey).SoundWaveName;
  *(undefined8 *)((longlong)this + 0x50) = uVar3;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&(param_1->InKey).ObjectKey.C;
  *(uint *)((longlong)this + 0x60) = (param_1->InKey).ChunkIndex;
  *(int *)((longlong)this + 100) = param_1->ChunkDataSize;
  *(Type *)((longlong)this + 0x68) = param_1->CallbackThread;
  *(EAsyncIOPriorityAndFlags *)((longlong)this + 0x6c) = param_1->AsyncIOPriority;
  return this;
}

// FAudioChunkCache @ 147685ee0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FAudioChunkCache * __thiscall
FAudioChunkCache::FAudioChunkCache(FAudioChunkCache *this,uint param_1,uint param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TAtomic<unsigned___int64> *pTVar5;
  TAtomic<unsigned___int64> *pTVar6;
  TQueue<FAudioChunkCache::FCacheMissInfo,1> *pTVar7;
  TNode *pTVar8;
  FAudioChunkCache *pFVar9;
  longlong lVar10;
  TAtomic<unsigned___int64> *pTVar11;
  ulonglong uVar12;
  
  pTVar11 = (TAtomic<unsigned___int64> *)0x0;
  this->MaxChunkSize = param_1;
  (this->CacheOverflowCount).Counter = 0;
  (this->CachePool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachePool).ArrayNum = 0;
  (this->CachePool).ArrayMax = 0;
  this->MostRecentElement = (FCacheElement *)0x0;
  this->LeastRecentElement = (FCacheElement *)0x0;
  this->ChunksInUse = 0;
  uVar12 = (ulonglong)param_2;
  pTVar5 = ::operator_new(8);
  pTVar6 = pTVar11;
  if (pTVar5 != (TAtomic<unsigned___int64> *)0x0) {
    *pTVar5 = (TAtomic<unsigned___int64>)0x0;
    pTVar6 = pTVar5;
  }
  (this->MemoryCounterBytes).Obj.Ptr = pTVar6;
  this->MemoryLimitBytes = param_3;
  pTVar5 = ::operator_new(8);
  pTVar6 = pTVar11;
  if (pTVar5 != (TAtomic<unsigned___int64> *)0x0) {
    *pTVar5 = (TAtomic<unsigned___int64>)0x0;
    pTVar6 = pTVar5;
  }
  (this->ForceInlineMemoryCounterBytes).Obj.Ptr = pTVar6;
  pTVar5 = ::operator_new(8);
  pTVar6 = pTVar11;
  if (pTVar5 != (TAtomic<unsigned___int64> *)0x0) {
    *pTVar5 = (TAtomic<unsigned___int64>)0x0;
    pTVar6 = pTVar5;
  }
  (this->FeatureMemoryCounterBytes).Obj.Ptr = pTVar6;
  (this->NumberOfLoadsInFlight).Counter = 0;
  this->TimeOfBeginPlayCycles = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CacheMutationCriticalSection,4000);
  *(undefined8 *)&this->CacheLookupIdMap = 0;
  *(undefined8 *)&(this->CacheLookupIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->CacheLookupIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->CacheLookupIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->CacheLookupIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CacheLookupIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CacheLookupIdMap).field_0x34 = 0;
  *(undefined8 *)&(this->CacheLookupIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->CacheLookupIdMap).field_0x48 = 0;
  *(undefined8 *)&this->SoundWaveTracker = 0;
  *(undefined8 *)&(this->SoundWaveTracker).field_0x8 = 0;
  *(undefined8 *)&(this->SoundWaveTracker).field_0x20 = 0;
  *(undefined4 *)&(this->SoundWaveTracker).field_0x28 = 0;
  *(undefined4 *)&(this->SoundWaveTracker).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoundWaveTracker).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoundWaveTracker).field_0x34 = 0;
  *(undefined8 *)&(this->SoundWaveTracker).field_0x40 = 0;
  *(undefined4 *)&(this->SoundWaveTracker).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->SoundWaveMemoryTrackerCritSec,4000);
  pTVar7 = ::operator_new(0x10);
  if (pTVar7 == (TQueue<FAudioChunkCache::FCacheMissInfo,1> *)0x0) {
    pTVar7 = (TQueue<FAudioChunkCache::FCacheMissInfo,1> *)0x0;
  }
  else {
    pTVar8 = ::operator_new(0x20);
    if (pTVar8 == (TNode *)0x0) {
      pTVar7->Tail = (TNode *)0x0;
      pTVar7->Head = (TNode *)0x0;
    }
    else {
      pTVar8->NextNode = (TNode *)0x0;
      (pTVar8->Item).SoundWaveName.ComparisonIndex = 0;
      (pTVar8->Item).SoundWaveName.Number = 0;
      (pTVar8->Item).ChunkIndex = 0;
      (pTVar8->Item).TotalChunksInWave = 0;
      *(undefined8 *)&(pTVar8->Item).bBlockedForLoad = 0;
      pTVar8->NextNode = (TNode *)0x0;
      (pTVar8->Item).SoundWaveName.ComparisonIndex = 0;
      (pTVar8->Item).SoundWaveName.Number = 0;
      pTVar7->Tail = pTVar8;
      pTVar7->Head = pTVar8;
    }
  }
  (this->CacheMissQueue).Obj.Ptr = pTVar7;
  this->bLogCacheMisses = false;
  if ((param_2 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChunks > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x326,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FAudioChunkCache *)(*pcVar2)();
    return pFVar9;
  }
  TArray<FAudioChunkCache::FCacheElement,TSizedDefaultAllocator<32>_>::Reset
            (&this->CachePool,param_2);
  if (param_2 != 0) {
    do {
      iVar4 = (this->CachePool).ArrayNum;
      if (iVar4 == (this->CachePool).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8b0,&(this->CachePool).AllocatorInstance,&(this->CachePool).ArrayMax);
      }
      (this->CachePool).ArrayNum = iVar4 + 1;
      lVar10 = (longlong)iVar4 * 0xb0;
      pFVar1 = (this->CachePool).AllocatorInstance.Data;
      *(undefined8 *)(pFVar1 + lVar10) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 8) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x10) = 0;
      *(undefined4 *)(pFVar1 + lVar10 + 0x18) = 0xffffffff;
      *(TAtomic<unsigned___int64> **)(pFVar1 + lVar10 + 0x40) = pTVar11;
      pTVar11 = (TAtomic<unsigned___int64> *)&pTVar11->field_0x1;
      *(undefined8 *)(pFVar1 + lVar10 + 0x20) = 0;
      *(undefined4 *)(pFVar1 + lVar10 + 0x28) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x30) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x38) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x48) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x50) = 0;
      *(undefined4 *)(pFVar1 + lVar10 + 0x58) = 0;
      pFVar1[lVar10 + 0x5c] = (FScriptContainerElement)0x0;
      *(undefined4 *)(pFVar1 + lVar10 + 0x60) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x68) = 0;
      *(undefined4 *)(pFVar1 + lVar10 + 0x70) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x78) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x80) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x88) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0x90) = 0;
      pFVar1[lVar10 + 0x98] = (FScriptContainerElement)0xff;
      *(undefined8 *)(pFVar1 + lVar10 + 0x9c) = 0;
      *(undefined8 *)(pFVar1 + lVar10 + 0xa4) = 0;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  LOCK();
  (this->CacheOverflowCount).Counter = 0;
  UNLOCK();
  if ((this->MemoryLimitBytes == 0) && (3 < (byte)LogAudioStreamCaching._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
  }
  return this;
}

// ~FAudioChunkCache @ 147689e70

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::~FAudioChunkCache(FAudioChunkCache *this)

{
  int *piVar1;
  int iVar2;
  FCacheElement *pFVar3;
  TQueue<FAudioChunkCache::FCacheMissInfo,1> *pTVar4;
  TNode *pTVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioStreamCache,true);
  piVar1 = &(this->CachePool).ArrayMax;
  pFVar3 = (FCacheElement *)(this->CachePool).AllocatorInstance.Data;
  iVar2 = (this->CachePool).ArrayNum;
  if ((this->CachePool).ArrayMax < 0) {
    DestructItems<FAudioChunkCache::FCacheElement,int>(pFVar3,iVar2);
    (this->CachePool).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,&(this->CachePool).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FAudioChunkCache::FCacheElement,int>(pFVar3,iVar2);
    (this->CachePool).ArrayNum = 0;
  }
  if (((this->NumberOfLoadsInFlight).Counter != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfLoadsInFlight.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x339,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  pTVar4 = (this->CacheMissQueue).Obj.Ptr;
  if (pTVar4 != (TQueue<FAudioChunkCache::FCacheMissInfo,1> *)0x0) {
    pTVar5 = pTVar4->Tail;
    while (pTVar5 != (TNode *)0x0) {
      pTVar4->Tail = pTVar5->NextNode;
      ::operator_delete(pTVar5,0x20);
      pTVar5 = pTVar4->Tail;
    }
    ::operator_delete(pTVar4,0x10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SoundWaveMemoryTrackerCritSec);
  *(undefined4 *)&(this->SoundWaveTracker).field_0x48 = 0;
  pvVar6 = *(void **)&(this->SoundWaveTracker).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoundWaveTracker);
  *(undefined4 *)&(this->CacheLookupIdMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->CacheLookupIdMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CacheLookupIdMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CacheMutationCriticalSection);
  ::operator_delete((this->FeatureMemoryCounterBytes).Obj.Ptr,8);
  ::operator_delete((this->ForceInlineMemoryCounterBytes).Obj.Ptr,8);
  ::operator_delete((this->MemoryCounterBytes).Obj.Ptr,8);
  DestructItems<FAudioChunkCache::FCacheElement,int>
            ((FCacheElement *)(this->CachePool).AllocatorInstance.Data,(this->CachePool).ArrayNum);
  pFVar7 = (this->CachePool).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// operator() @ 14768ccf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
`FAudioChunkCache::KickOffAsyncLoad'::__l47::<lambda_1>::operator()(void *this,EStatus param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  wchar_t *pwVar7;
  EAudioChunkLoadResult EVar8;
  undefined1 auStack_338 [32];
  wchar_t *local_318;
  wchar_t *local_310;
  LARGE_INTEGER local_308 [2];
  TStringBuilderBase<wchar_t> local_2f8;
  wchar_t local_2d8 [40];
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [128];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  plVar2 = *(longlong **)((longlong)this + 0x40);
  if (((*plVar2 == *(longlong *)((longlong)this + 0x48)) &&
      (((*(int *)((longlong)plVar2 + 0x14) == *(int *)((longlong)this + 0x5c) &&
        (int)plVar2[2] == *(int *)((longlong)this + 0x58)) &&
       *(int *)((longlong)plVar2 + 0xc) == *(int *)((longlong)this + 0x54)) &&
       *(int *)((longlong)this + 0x50) == (int)plVar2[1])) &&
     ((int)plVar2[3] == *(int *)((longlong)this + 0x60))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  EVar8 = Completed;
  if (5 < (byte)LogAudioTiming._0_1_) {
    if (*(char *)((longlong)plVar2 + 0x5c) != '\0') {
      local_2f8.Base = local_2d8;
      local_2f8.bIsDynamic = false;
      local_2f8.bIsExternal = false;
      local_2f8.CurPos = local_2d8;
      local_2f8.End = (wchar_t *)&local_288;
      FGuid::AppendString((FGuid *)(plVar2 + 1),&local_2f8,DigitsWithHyphensLower);
      if (local_2f8.End < (TStringBuilderBase<wchar_t> *)(local_2f8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_2f8,1);
      }
      pwVar7 = local_2f8.Base;
      *local_2f8.CurPos = L'\0';
      local_288.Base = local_268;
      local_288.CurPos = local_268;
      local_288.End = (wchar_t *)&local_168;
      local_288.bIsDynamic = false;
      local_288.bIsExternal = false;
      ::FName::AppendString(*(FName **)((longlong)this + 0x40),&local_288);
      if (local_288.End < (TStringBuilderBase<wchar_t> *)(local_288.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_288,1);
      }
      *local_288.CurPos = L'\0';
      local_318 = pwVar7;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2f8);
    }
    if (5 < (byte)LogAudioTiming._0_1_) {
      if ((char)(*(FName **)((longlong)this + 0x40))[0xb].Number != '\0') {
        uVar1 = *(undefined4 *)((longlong)this + 100);
        local_288.Base = local_268;
        local_288.CurPos = local_268;
        local_288.bIsDynamic = false;
        local_288.bIsExternal = false;
        local_288.End = (wchar_t *)&local_168;
        ::FName::AppendString(*(FName **)((longlong)this + 0x40),&local_288);
        if (local_288.End < (TStringBuilderBase<wchar_t> *)(local_288.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_288,1);
        }
        *local_288.CurPos = L'\0';
        local_310 = L"DID NOT MATCH!";
        if (bVar6) {
          local_310 = L"matched";
        }
        local_318 = (wchar_t *)CONCAT44(local_318._4_4_,uVar1);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
      }
      if (((5 < (byte)LogAudioTiming._0_1_) &&
          (*(char *)(*(longlong *)((longlong)this + 0x40) + 0x5c) != '\0')) && (!bVar6)) {
        local_2f8.Base = local_2d8;
        local_2f8.bIsDynamic = false;
        local_2f8.bIsExternal = false;
        local_2f8.CurPos = local_2d8;
        local_2f8.End = (wchar_t *)&local_288;
        FGuid::AppendString((FGuid *)((longlong)this + 0x50),&local_2f8,DigitsWithHyphensLower);
        if (local_2f8.End < (TStringBuilderBase<wchar_t> *)(local_2f8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_2f8,1);
        }
        pwVar7 = local_2f8.Base;
        *local_2f8.CurPos = L'\0';
        local_168.Base = local_148;
        uVar1 = *(undefined4 *)((longlong)this + 0x60);
        local_168.CurPos = local_148;
        local_168.End = (wchar_t *)local_48;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        ::FName::AppendString((FName *)((longlong)this + 0x48),&local_168);
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        *local_168.CurPos = L'\0';
        local_288.Base = local_268;
        local_288.CurPos = local_268;
        local_288.End = (wchar_t *)&local_168;
        local_288.bIsDynamic = false;
        local_288.bIsExternal = false;
        ::FName::AppendString(*(FName **)((longlong)this + 0x40),&local_288);
        if (local_288.End < (TStringBuilderBase<wchar_t> *)(local_288.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_288,1);
        }
        *local_288.CurPos = L'\0';
        local_310 = pwVar7;
        local_318 = (wchar_t *)CONCAT44(local_318._4_4_,uVar1);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2f8);
      }
    }
  }
  puVar3 = *(undefined8 **)((longlong)this + 0x40);
  uVar5 = *(undefined8 *)((longlong)this + 0x50);
  *puVar3 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[1] = uVar5;
  puVar3[2] = *(undefined8 *)((longlong)this + 0x58);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)((longlong)this + 0x60);
  *(undefined4 *)(*(longlong *)((longlong)this + 0x40) + 0x28) =
       *(undefined4 *)((longlong)this + 100);
  LOCK();
  *(uint *)(*(longlong *)((longlong)this + 0x40) + 0x58) = (uint)(param_1 == Ok);
  UNLOCK();
  if ((param_1 == Cancelled) &&
     (memset(*(void **)(*(longlong *)((longlong)this + 0x40) + 0x20),0,
             (ulonglong)*(uint *)(*(longlong *)((longlong)this + 0x40) + 0x28)),
     2 < (byte)LogAudio._0_1_)) {
    ::FName::ToString((FName *)((longlong)this + 0x48),(FString *)&local_308[0].s);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if ((void *)local_308[0].QuadPart != (void *)0x0) {
      FMemory::Free((void *)local_308[0]);
    }
  }
  QueryPerformanceCounter(local_308);
  *(LARGE_INTEGER *)(*(longlong *)((longlong)this + 0x40) + 0x88) = local_308[0];
  lVar4 = *(longlong *)((longlong)this + 0x40);
  if (param_1 == Cancelled) {
    EVar8 = Interrupted;
  }
  *(float *)(lVar4 + 0x90) =
       (float)((double)(ulonglong)(*(longlong *)(lVar4 + 0x88) - *(longlong *)(lVar4 + 0x80)) *
               FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
  FAudioChunkCache::ExecuteOnLoadCompleteCallback
            (EVar8,(TFunction<void___cdecl(EAudioChunkLoadResult)> *)((longlong)this + 0x10),
             (Type *)((longlong)this + 0x68));
  LOCK();
  *(int *)(*(longlong *)this + 0x50) = *(int *)(*(longlong *)this + 0x50) + -1;
  UNLOCK();
  AddLoadCounters(*(EAsyncIOPriorityAndFlags *)((longlong)this + 0x6c),-1);
  return;
}

// AddForceInlineSoundWave @ 147690e30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FAudioChunkCache::AddForceInlineSoundWave
          (FAudioChunkCache *this,TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  FName FVar1;
  FSoundWaveProxy *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TAtomic<unsigned___int64> *pTVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  ESoundWaveLoadingBehavior EVar8;
  FName *pFVar9;
  FPlatformAudioCookOverrides *pFVar10;
  FBulkData *this_00;
  long64 lVar11;
  FSoundWaveMemoryTracker *pFVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  TSharedPtr<FSoundWaveProxy,1> *local_res10;
  FString local_28;
  
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWave.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x451,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  EVar8 = FSoundWaveProxy::GetLoadingBehavior(param_1->Object);
  if (EVar8 != ForceInline) {
    local_res10 = param_1;
    `FAudioChunkCache::AddForceInlineSoundWave'::__l2::<lambda_1>::operator()(&local_res10);
  }
  if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar8 = FSoundWaveProxy::GetLoadingBehavior(param_1->Object);
  if (EVar8 == ForceInline) {
    if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar9 = FSoundWaveProxy::GetRuntimeFormat(param_1->Object);
    FVar1 = *pFVar9;
    if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = param_1->Object;
    pFVar10 = USoundWave::GetPlatformCompressionOverridesForCurrentPlatform();
    this_00 = (FBulkData *)FSoundWaveProxy::GetCompressedData(pFVar2,FVar1,pFVar10);
    if (this_00 == (FBulkData *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = FBulkData::GetBulkDataSize(this_00);
    }
    lpCriticalSection = &this->SoundWaveMemoryTrackerCritSec;
    if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar14 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
             -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar12 = TMapBase<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>_>
              ::FindOrAddImpl<TSharedPtr<FSoundWaveProxy,1>_const_&>
                        ((TMapBase<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>_>
                          *)&this->SoundWaveTracker,uVar14 >> 0x10 ^ uVar14,param_1);
    if (pFVar12->RefCount < 0) {
      if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar9 = FSoundWaveProxy::GetFName(param_1->Object);
      ::FName::ToString(pFVar9,&local_28);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tracker.RefCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x461,
                         L"AudioStreamCache::AddForceInlineSoundWave: ref count for Added sound wave is negative!: %s"
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar12->RefCount = pFVar12->RefCount + 1;
    if (pFVar12->RefCount == 1) {
      pFVar12->MemoryCount = lVar11;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pTVar4 = (this->ForceInlineMemoryCounterBytes).Obj.Ptr;
      LOCK();
      *pTVar4 = (TAtomic<unsigned___int64>)((longlong)*pTVar4 + lVar11);
      UNLOCK();
      uVar15 = (longlong)*(this->ForceInlineMemoryCounterBytes).Obj.Ptr +
               (longlong)*(this->FeatureMemoryCounterBytes).Obj.Ptr +
               (longlong)*(this->MemoryCounterBytes).Obj.Ptr;
      if ((TrimCacheWhenOverBudgetCVar != 0) && (uVar5 = this->MemoryLimitBytes, uVar5 < uVar15)) {
        if (MemoryLimitTrimPercentageCVar <= 0.0) {
          TrimMemory(this,uVar15 - uVar5,true);
        }
        else {
          fVar16 = MemoryLimitTrimPercentageCVar;
          if (__real_3f800000 <= MemoryLimitTrimPercentageCVar) {
            fVar16 = __real_3f800000;
          }
          fVar16 = fVar16 * (float)uVar5;
          lVar13 = 0;
          if ((__real_5f000000 <= fVar16) &&
             (fVar16 = fVar16 - __real_5f000000, fVar16 < __real_5f000000)) {
            lVar13 = -0x8000000000000000;
          }
          TrimMemory(this,(longlong)fVar16 + lVar13,true);
        }
      }
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// AddMemoryCountedFeature @ 147691b00

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioChunkCache::AddMemoryCountedFeature
          (FAudioChunkCache *this,FAudioStreamCacheMemoryHandle *param_1)

{
  TAtomic<unsigned___int64> *pTVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  FName local_res8;
  FString local_18;
  
  if (4 < (byte)LogAudioStreamCaching._0_1_) {
    local_res8 = param_1->FeatureName;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = (this->FeatureMemoryCounterBytes).Obj.Ptr;
  LOCK();
  *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + param_1->MemoryUseInBytes);
  UNLOCK();
  if (4 < (byte)LogAudioStreamCaching._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
  }
  uVar4 = (longlong)*(this->ForceInlineMemoryCounterBytes).Obj.Ptr +
          (longlong)*(this->FeatureMemoryCounterBytes).Obj.Ptr +
          (longlong)*(this->MemoryCounterBytes).Obj.Ptr;
  if ((TrimCacheWhenOverBudgetCVar != 0) && (uVar2 = this->MemoryLimitBytes, uVar2 < uVar4)) {
    if (0.0 < MemoryLimitTrimPercentageCVar) {
      fVar5 = MemoryLimitTrimPercentageCVar;
      if (__real_3f800000 <= MemoryLimitTrimPercentageCVar) {
        fVar5 = __real_3f800000;
      }
      fVar5 = fVar5 * (float)uVar2;
      lVar3 = 0;
      if ((__real_5f000000 <= fVar5) && (fVar5 = fVar5 - __real_5f000000, fVar5 < __real_5f000000))
      {
        lVar3 = -0x8000000000000000;
      }
      TrimMemory(this,(longlong)fVar5 + lVar3,true);
      return;
    }
    TrimMemory(this,uVar4 - uVar2,true);
    return;
  }
  return;
}

// AddNewReferenceToChunk @ 147691e40

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::AddNewReferenceToChunk(FAudioChunkCache *this,FChunkKey *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FCacheElement *pFVar3;
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = FindElementForKey(this,param_1);
  if (pFVar3 == (FCacheElement *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423385>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x427,"FoundElement");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((pFVar3->NumConsumers).Counter < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundElement->NumConsumers.GetValue() >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x42a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    (pFVar3->NumConsumers).Counter = (pFVar3->NumConsumers).Counter + 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x000147691ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddOrTouchChunk @ 147691f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FAudioChunkCache::AddOrTouchChunk
          (FAudioChunkCache *this,FChunkKey *param_1,TSharedPtr<FSoundWaveData,1> *param_2,
          TFunction<void___cdecl(EAudioChunkLoadResult)> *param_3,Type param_4,bool param_5)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  int *piVar1;
  ulonglong uVar2;
  FName FVar3;
  TQueue<FAudioChunkCache::FCacheMissInfo,1> *pTVar4;
  TNode *pTVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EAsyncIOPriorityAndFlags EVar11;
  uint uVar12;
  FCacheElement *pFVar13;
  FStreamedAudioChunk *pFVar14;
  ulonglong uVar15;
  ulong64 uVar16;
  TFunction<void___cdecl(EAudioChunkLoadResult)> *pTVar17;
  TNode *pTVar18;
  longlong *plVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStackY_418 [32];
  uint local_3d0;
  undefined1 local_3c8 [48];
  TStringBuilderBase<wchar_t> local_398;
  wchar_t local_378 [40];
  TStringBuilderBase<wchar_t> local_328;
  wchar_t local_308 [40];
  TStringBuilderBase<wchar_t> local_2b8;
  wchar_t local_298 [128];
  TStringBuilderBase<wchar_t> local_198;
  wchar_t local_178 [128];
  ulonglong local_78 [7];
  
  fVar7 = __real_5f000000;
  local_78[0] = __security_cookie.value ^ (ulonglong)auStackY_418;
  if ((__real_322bcc77 <
       (float)((uint)StreamCacheSizeOverrideMBCVar & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
     (0.0 < StreamCacheSizeOverrideMBCVar)) {
    fVar21 = StreamCacheSizeOverrideMBCVar * __real_44800000;
    if (__real_5f000000 <= fVar21) {
      fVar21 = fVar21 - __real_5f000000;
    }
    this->MemoryLimitBytes = (longlong)fVar21 * 0x400;
  }
  if (param_2->Object != (FSoundWaveData *)0x0) {
    if ((param_1->ChunkIndex != 0xffffffff) &&
       (uVar9 = FSoundWaveData::GetNumChunks(param_2->Object), param_1->ChunkIndex < uVar9)) {
      lpCriticalSection = &this->CacheMutationCriticalSection;
      if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar13 = FindElementForKey(this,param_1);
      if (pFVar13 != (FCacheElement *)0x0) {
        TouchElement(this,pFVar13);
        if (((pFVar13->Read != (FBulkDataBatchRequest)0x0) &&
            (iVar10 = (**(code **)(*(longlong *)pFVar13->Read + 0x20))(), iVar10 == 1)) &&
           (EVar11 = GetAsyncPriorityForChunk(this,param_1,param_5),
           (int)pFVar13->Priority < (int)EVar11)) {
          if ((5 < (byte)LogAudioStreamCaching._0_1_) && (pFVar13->bWantsExtraLogging != false)) {
            local_398.Base = local_378;
            local_398.bIsDynamic = false;
            local_398.bIsExternal = false;
            local_398.CurPos = local_378;
            local_398.End = (wchar_t *)&local_328;
            FGuid::AppendString(&(pFVar13->Key).ObjectKey,&local_398,DigitsWithHyphensLower);
            if (local_398.End < (TStringBuilderBase<wchar_t> *)(local_398.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_398,1);
            }
            *local_398.CurPos = L'\0';
            local_2b8.Base = local_298;
            local_2b8.CurPos = local_298;
            local_2b8.End = (wchar_t *)&local_198;
            local_2b8.bIsDynamic = false;
            local_2b8.bIsExternal = false;
            ::FName::AppendString((FName *)pFVar13,&local_2b8);
            if (local_2b8.End < (TStringBuilderBase<wchar_t> *)(local_2b8.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_2b8,1);
            }
            *local_2b8.CurPos = L'\0';
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2b8);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_398);
          }
          FBulkDataBatchRequest::UpdatePriority(&pFVar13->Read,EVar11);
          pFVar13->Priority = EVar11;
        }
        if (pFVar13->bIsLoaded != (FThreadSafeBool)0x0) {
          ExecuteOnLoadCompleteCallback(AlreadyLoaded,param_3,&param_4);
        }
        if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar13->bWantsExtraLogging != false)) {
          local_328.Base = local_308;
          local_328.bIsDynamic = false;
          local_328.bIsExternal = false;
          local_328.CurPos = local_308;
          local_328.End = (wchar_t *)&local_2b8;
          FGuid::AppendString(&(pFVar13->Key).ObjectKey,&local_328,DigitsWithHyphensLower);
          if (local_328.End < (TStringBuilderBase<wchar_t> *)(local_328.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_328,1);
          }
          *local_328.CurPos = L'\0';
          local_198.Base = local_178;
          local_198.CurPos = local_178;
          local_198.End = (wchar_t *)local_78;
          local_198.bIsDynamic = false;
          local_198.bIsExternal = false;
          ::FName::AppendString((FName *)pFVar13,&local_198);
          if (local_198.End < local_198.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_198,1);
          }
          *local_198.CurPos = L'\0';
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_198);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_328);
        }
        piVar1 = &(pFVar13->DebugInfo).NumTimesTouched;
        *piVar1 = *piVar1 + 1;
        FCacheElement::UpdateDebugInfoLoadingBehavior(pFVar13);
        uVar16 = pFVar13->CacheLookupID;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        lVar20 = *(longlong *)param_3;
LAB_1476922b5:
        if (lVar20 == 0) {
          return uVar16;
        }
        plVar19 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar19 = *(longlong **)&param_3->field_0x28;
        }
        (**(code **)(*plVar19 + 0x10))();
        return uVar16;
      }
      pFVar13 = InsertChunk(this,param_1,param_2);
      bVar8 = param_5;
      if (pFVar13 != (FCacheElement *)0x0) {
        (pFVar13->DebugInfo).bWasCacheMiss = param_5;
        FCacheElement::UpdateDebugInfoLoadingBehavior(pFVar13);
        pFVar14 = FCacheElement::GetChunk(pFVar13,param_1->ChunkIndex);
        if (((pFVar14 != (FStreamedAudioChunk *)0x0) &&
            (uVar15 = (longlong)*(this->FeatureMemoryCounterBytes).Obj.Ptr +
                      (longlong)pFVar14->AudioDataSize +
                      (longlong)*(this->ForceInlineMemoryCounterBytes).Obj.Ptr +
                      (longlong)*(this->MemoryCounterBytes).Obj.Ptr,
            TrimCacheWhenOverBudgetCVar != 0)) && (uVar2 = this->MemoryLimitBytes, uVar2 < uVar15))
        {
          if (MemoryLimitTrimPercentageCVar <= 0.0) {
            uVar16 = uVar15 - uVar2;
          }
          else {
            fVar21 = MemoryLimitTrimPercentageCVar;
            if (__real_3f800000 <= MemoryLimitTrimPercentageCVar) {
              fVar21 = __real_3f800000;
            }
            fVar21 = fVar21 * (float)uVar2;
            lVar20 = 0;
            if ((fVar7 <= fVar21) && (fVar21 = fVar21 - fVar7, fVar21 < fVar7)) {
              lVar20 = -0x8000000000000000;
            }
            uVar16 = (longlong)fVar21 + lVar20;
          }
          TrimMemory(this,uVar16,true);
        }
        pTVar17 = TFunction<void___cdecl(enum_EAudioChunkLoadResult)>::
                  TFunction<void___cdecl(enum_EAudioChunkLoadResult)>(local_3c8,param_3);
        KickOffAsyncLoad(this,pFVar13,param_1,pTVar17,param_4,bVar8);
        if ((bVar8 != false) &&
           ((this->bLogCacheMisses != false || (AlwaysLogCacheMissesCVar != 0)))) {
          uVar12 = FCacheElement::GetNumChunks(pFVar13);
          FVar3 = param_1->SoundWaveName;
          pTVar4 = (this->CacheMissQueue).Obj.Ptr;
          uVar9 = param_1->ChunkIndex;
          local_3d0 = local_3d0 & 0xffffff00;
          pTVar18 = ::operator_new(0x20);
          if (pTVar18 != (TNode *)0x0) {
            pTVar18->NextNode = (TNode *)0x0;
            (pTVar18->Item).SoundWaveName = FVar3;
            (pTVar18->Item).ChunkIndex = uVar9;
            (pTVar18->Item).TotalChunksInWave = uVar12;
            *(uint *)&(pTVar18->Item).bBlockedForLoad = local_3d0;
            pTVar5 = pTVar4->Head;
            pTVar4->Head = pTVar18;
            pTVar5->NextNode = pTVar18;
          }
        }
        uVar16 = pFVar13->CacheLookupID;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        lVar20 = *(longlong *)param_3;
        goto LAB_1476922b5;
      }
      ExecuteOnLoadCompleteCallback(CacheBlown,param_3,&param_4);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      goto LAB_1476924c5;
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423604>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x34c,"false");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return uVar16;
    }
  }
  ExecuteOnLoadCompleteCallback(ChunkOutOfBounds,param_3,&param_4);
LAB_1476924c5:
  if (*(longlong *)param_3 != 0) {
    plVar19 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar19 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  return 0xffffffffffffffff;
}

// BeginLoggingCacheMisses @ 147694c30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::BeginLoggingCacheMisses(FAudioChunkCache *this)

{
  this->bLogCacheMisses = true;
  return;
}

// BlockForAllPendingLoads @ 147694f30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioChunkCache::BlockForAllPendingLoads(FAudioChunkCache *this)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  FCacheElement *pFVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  
  bVar2 = false;
  QueryPerformanceCounter(&local_res8);
  lpCriticalSection = &this->CacheMutationCriticalSection;
  while( true ) {
    if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    for (pFVar1 = this->MostRecentElement; pFVar1 != (FCacheElement *)0x0;
        pFVar1 = pFVar1->LessRecentElement) {
      bVar2 = (bool)(bVar2 | pFVar1->bIsLoaded == (FThreadSafeBool)0x0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (!bVar2) break;
    QueryPerformanceCounter(&local_res8);
    if (4 < (byte)LogAudioStreamCaching._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    }
    FWindowsPlatformProcess::Sleep(0.0);
  }
  return;
}

// CancelAllPendingLoads @ 147698190

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::CancelAllPendingLoads(FAudioChunkCache *this)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FBulkDataBatchRequest FVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FBulkDataBatchRequest *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  FCacheElement *local_38;
  FBulkDataBatchRequest local_30;
  ForAnyElementType local_28;
  int local_20;
  int iStack_1c;
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  iStack_1c = 0;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_38 = this->MostRecentElement;
  while( true ) {
    if (local_38 == (FCacheElement *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar4 = local_20;
      pFVar1 = local_28.Data + (longlong)local_20 * 8;
      FVar8.Data = local_28.Data;
      while( true ) {
        if (local_20 != iVar4) {
          `TCheckedPointerIterator<FAudioChunkCache::FCacheElement_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar8.Data == pFVar1) break;
        pFVar7 = &(*(FCacheElement **)FVar8.Data)->Read;
        if ((*pFVar7 != (FBulkDataBatchRequest)0x0) &&
           (iVar6 = (**(code **)(*(longlong *)*pFVar7 + 0x20))(), iVar6 == 1)) {
          if (*pFVar7 != (FBulkDataBatchRequest)0x0) {
            (**(code **)(*(longlong *)*pFVar7 + 0x28))();
          }
          if (pFVar7 != &local_30) {
            FVar2 = *pFVar7;
            *pFVar7 = (FBulkDataBatchRequest)0x0;
            if (FVar2 != (FBulkDataBatchRequest)0x0) {
              (**(code **)(*(longlong *)FVar2 + 0x10))();
            }
          }
        }
        FVar8.Data = FVar8.Data + 8;
      }
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      return;
    }
    if (((local_28.Data <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < local_28.Data + (longlong)iStack_1c * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    if (local_20 == iStack_1c) {
      local_20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_28,&iStack_1c);
    }
    *(FCacheElement **)(local_28.Data + (longlong)local_20 * 8) = local_38;
    local_38 = local_38->LessRecentElement;
    local_20 = local_20 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ClearCache @ 147698590

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAudioChunkCache::ClearCache(FAudioChunkCache *this)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = (this->CachePool).ArrayNum;
  uVar8 = (ulonglong)uVar1;
  if (5 < (byte)LogAudioStreamCaching._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
  }
  TArray<FAudioChunkCache::FCacheElement,TSizedDefaultAllocator<32>_>::Reset(&this->CachePool,uVar1)
  ;
  if (((this->NumberOfLoadsInFlight).Counter != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfLoadsInFlight.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar7 = 0;
  if (uVar1 != 0) {
    do {
      iVar5 = (this->CachePool).ArrayNum;
      if (iVar5 == (this->CachePool).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8b0,&(this->CachePool).AllocatorInstance,&(this->CachePool).ArrayMax);
      }
      (this->CachePool).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0xb0;
      pFVar2 = (this->CachePool).AllocatorInstance.Data;
      *(undefined8 *)(pFVar2 + lVar6) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 8) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x10) = 0;
      *(undefined4 *)(pFVar2 + lVar6 + 0x18) = 0xffffffff;
      *(longlong *)(pFVar2 + lVar6 + 0x40) = lVar7;
      lVar7 = lVar7 + 1;
      *(undefined8 *)(pFVar2 + lVar6 + 0x20) = 0;
      *(undefined4 *)(pFVar2 + lVar6 + 0x28) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x30) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x38) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x48) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x50) = 0;
      *(undefined4 *)(pFVar2 + lVar6 + 0x58) = 0;
      pFVar2[lVar6 + 0x5c] = (FScriptContainerElement)0x0;
      *(undefined4 *)(pFVar2 + lVar6 + 0x60) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x68) = 0;
      *(undefined4 *)(pFVar2 + lVar6 + 0x70) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x78) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x80) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x88) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x90) = 0;
      pFVar2[lVar6 + 0x98] = (FScriptContainerElement)0xff;
      *(undefined8 *)(pFVar2 + lVar6 + 0x9c) = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0xa4) = 0;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  this->MostRecentElement = (FCacheElement *)0x0;
  this->LeastRecentElement = (FCacheElement *)0x0;
  this->ChunksInUse = 0;
                    /* WARNING: Could not recover jumptable at 0x000147698721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// DebugBirdsEyeDisplay @ 14769b9f0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTuple<int,int> __thiscall
FAudioChunkCache::DebugBirdsEyeDisplay
          (FAudioChunkCache *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,
          int param_5,TVector<double> *param_6,TRotator<double> *param_7)

{
  ESoundWaveLoadingBehavior EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TTuple<int,int> TVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  FCacheElement *pFVar15;
  float fVar16;
  int local_res8;
  undefined4 in_stack_0000002c;
  int local_88;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  FLinearColor_u_0 local_70 [3];
  
  dVar5 = __real_4024000000000000;
  pFVar15 = this->MostRecentElement;
  local_res8 = param_5;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  iVar13 = (int)((double)(*(int *)(CONCAT44(in_stack_0000002c,param_4) + 0xa4) + param_5 * -2) *
                __real_3fe0000000000000);
  local_88 = (int)param_6;
  local_74 = 0;
  fVar16 = (float)this->ChunksInUse / (float)((iVar13 / 10) * 4);
  if (fVar16 <= __real_3f800000) {
    fVar16 = __real_3f800000;
  }
  fVar16 = __real_bf000000 - (fVar16 + fVar16);
  if (pFVar15 != (FCacheElement *)0x0) {
    do {
      uVar11 = 0;
      local_78 = 0;
      if ((local_74 < 0) && (local_74 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_80,0,&local_74);
      }
      uVar12 = uVar11;
      if (local_78 < 0xd) {
        iVar10 = 0xd - local_78;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar10,&local_80,&local_78,&local_74);
        memset(local_80.Data + (longlong)iVar7 * 4,0,(longlong)iVar10 << 2);
      }
      else if (0xd < local_78) {
        iVar7 = local_78 + -0xd;
        if (iVar7 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            TVar9 = (TTuple<int,int>)(*pcVar3)();
            return TVar9;
          }
        }
        else if (iVar7 == 0) goto joined_r0x00014769bbfd;
        iVar10 = (local_78 - iVar7) + -0xd;
        if (iVar10 != 0) {
          memmove(local_80.Data + 0x34,local_80.Data + 0x34 + (longlong)iVar7 * 4,
                  (longlong)iVar10 << 2);
        }
        local_78 = local_78 - iVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_80,local_78,&local_74);
      }
joined_r0x00014769bbfd:
      for (; (pFVar15 != (FCacheElement *)0x0 && ((int)uVar12 < -((int)ROUND(fVar16) >> 1)));
          uVar12 = (ulonglong)((int)uVar12 + 1)) {
        iVar7 = (pFVar15->NumConsumers).Counter;
        bVar6 = (pFVar15->DebugInfo).bWasCacheMiss;
        EVar1 = (pFVar15->DebugInfo).LoadingBehavior;
        if ((iVar7 < 2) && ((iVar7 == 0 || ((pFVar15->DebugInfo).LoadingBehavior == RetainOnLoad))))
        {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (pFVar15->ChunkDataSize == 0) {
          if ((local_78 < 0xb) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            TVar9 = (TTuple<int,int>)(*pcVar3)();
            return TVar9;
          }
          *(int *)(local_80.Data + 0x28) = *(int *)(local_80.Data + 0x28) + 1;
        }
        else if (pFVar15->bIsLoaded == (FThreadSafeBool)0x0) {
          if ((local_78 < 0xc) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            TVar9 = (TTuple<int,int>)(*pcVar3)();
            return TVar9;
          }
          *(int *)(local_80.Data + 0x2c) = *(int *)(local_80.Data + 0x2c) + 1;
        }
        else if (EVar1 == RetainOnLoad) {
          if (bVar4) {
            if (bVar6 == false) {
              if ((local_78 < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                TVar9 = (TTuple<int,int>)(*pcVar3)();
                return TVar9;
              }
              *(int *)local_80.Data = *(int *)local_80.Data + 1;
            }
            else {
              if ((local_78 < 5) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                TVar9 = (TTuple<int,int>)(*pcVar3)();
                return TVar9;
              }
              *(int *)(local_80.Data + 0x10) = *(int *)(local_80.Data + 0x10) + 1;
            }
          }
          else if (bVar6 == false) {
            if ((local_78 < 2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              TVar9 = (TTuple<int,int>)(*pcVar3)();
              return TVar9;
            }
            *(int *)(local_80.Data + 4) = *(int *)(local_80.Data + 4) + 1;
          }
          else {
            if ((local_78 < 6) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              TVar9 = (TTuple<int,int>)(*pcVar3)();
              return TVar9;
            }
            *(int *)(local_80.Data + 0x14) = *(int *)(local_80.Data + 0x14) + 1;
          }
        }
        else if (EVar1 == PrimeOnLoad) {
          if (bVar4) {
            if (bVar6 == false) {
              if ((local_78 < 3) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                TVar9 = (TTuple<int,int>)(*pcVar3)();
                return TVar9;
              }
              *(int *)(local_80.Data + 8) = *(int *)(local_80.Data + 8) + 1;
            }
            else {
              if ((local_78 < 7) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                TVar9 = (TTuple<int,int>)(*pcVar3)();
                return TVar9;
              }
              *(int *)(local_80.Data + 0x18) = *(int *)(local_80.Data + 0x18) + 1;
            }
          }
          else if (bVar6 == false) {
            if ((local_78 < 4) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              TVar9 = (TTuple<int,int>)(*pcVar3)();
              return TVar9;
            }
            *(int *)(local_80.Data + 0xc) = *(int *)(local_80.Data + 0xc) + 1;
          }
          else {
            if ((local_78 < 8) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              TVar9 = (TTuple<int,int>)(*pcVar3)();
              return TVar9;
            }
            *(int *)(local_80.Data + 0x1c) = *(int *)(local_80.Data + 0x1c) + 1;
          }
        }
        else if (EVar1 == LoadOnDemand) {
          if (bVar4) {
            if ((local_78 < 9) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              TVar9 = (TTuple<int,int>)(*pcVar3)();
              return TVar9;
            }
            *(int *)(local_80.Data + 0x20) = *(int *)(local_80.Data + 0x20) + 1;
          }
          else {
            if ((local_78 < 10) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              TVar9 = (TTuple<int,int>)(*pcVar3)();
              return TVar9;
            }
            *(int *)(local_80.Data + 0x24) = *(int *)(local_80.Data + 0x24) + 1;
          }
        }
        else {
          if ((local_78 < 0xd) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            TVar9 = (TTuple<int,int>)(*pcVar3)();
            return TVar9;
          }
          *(int *)(local_80.Data + 0x30) = *(int *)(local_80.Data + 0x30) + 1;
        }
        pFVar15 = pFVar15->LessRecentElement;
      }
      iVar7 = -1;
      uVar12 = uVar11;
      uVar14 = uVar11;
      do {
        iVar10 = (int)uVar11;
        if ((local_78 <= iVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          TVar9 = (TTuple<int,int>)(*pcVar3)();
          return TVar9;
        }
        iVar2 = *(int *)(local_80.Data + uVar12);
        iVar8 = iVar10;
        if (iVar2 <= iVar7) {
          iVar8 = (int)uVar14;
        }
        uVar11 = (ulonglong)(iVar10 + 1U);
        uVar12 = uVar12 + 4;
        uVar14 = (ulonglong)iVar8;
        if (iVar2 <= iVar7) {
          iVar2 = iVar7;
        }
        iVar7 = iVar2;
      } while ((int)(iVar10 + 1U) < 0xd);
      local_70[0] = ColorOther.field0_0x0;
      switch(iVar8) {
      case 0:
      case 4:
        local_70[0] = ColorRetainedAndPlaying.field0_0x0;
        break;
      case 1:
      case 5:
        local_70[0] = ColorRetained.field0_0x0;
        break;
      case 2:
      case 6:
        local_70[0] = ColorPrimedAndPlaying.field0_0x0;
        break;
      case 3:
      case 7:
        local_70[0] = ColorPrimed.field0_0x0;
        break;
      case 8:
        local_70[0] = ColorLODAndPlaying.field0_0x0;
        break;
      case 9:
        local_70[0] = ColorLOD.field0_0x0;
        break;
      case 10:
        local_70[0] = ColorTrimmed.field0_0x0;
        break;
      case 0xb:
        local_70[0] = ColorLoadInProgress.field0_0x0;
        break;
      case 0xc:
        break;
      default:
        goto switchD_14769c0a5_default;
      }
switchD_14769c0a5_default:
      FCanvas::DrawTile((FCanvas *)CONCAT44(in_stack_0000002c,param_4),(double)local_res8,
                        (double)local_88,dVar5,dVar5,0.0,0.0,0.0,0.0,
                        (FLinearColor *)&local_70[0]._s_0,(FTexture *)0x0,true);
      iVar7 = local_88 + 10;
      iVar10 = local_res8 + 10;
      local_res8 = param_5;
      if (iVar10 < iVar13 + param_5) {
        iVar7 = local_88;
        local_res8 = iVar10;
      }
      local_88 = iVar7;
    } while (pFVar15 != (FCacheElement *)0x0);
  }
  *(int *)&param_1->_padding_ = param_5;
  *(int *)((longlong)&param_1->_padding_ + 4) = (int)param_6;
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return (TTuple<int,int>)param_1;
}

// DebugDisplay @ 14769c220

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTuple<int,int> __thiscall
FAudioChunkCache::DebugDisplay
          (FAudioChunkCache *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,
          int param_5,TVector<double> *param_6,TRotator<double> *param_7)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  TAtomic<unsigned___int64> TVar4;
  TAtomic<unsigned___int64> TVar5;
  code *pcVar6;
  uint uVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  UFont *pUVar20;
  size_t sVar21;
  TTuple<int,int> TVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  FLinearColor *pFVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  FCanvas *this_00;
  uint uVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined4 in_stack_0000002c;
  undefined4 uVar38;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  FString local_3a8;
  int local_398;
  float local_394;
  int local_390;
  float local_38c;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FScriptContainerElement *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  ULevel *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  FString local_2f8;
  ULineBatchComponent *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FString local_2d8;
  UPhysicsCollisionHandler *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  FString local_2b8;
  FScriptContainerElement *local_2a8;
  int iStack_2a0;
  int iStack_29c;
  FString local_298;
  FScriptContainerElement *local_288;
  int iStack_280;
  int iStack_27c;
  FString local_278;
  FScriptContainerElement *local_268;
  int iStack_260;
  int iStack_25c;
  FScriptContainerElement *local_258;
  int iStack_250;
  int iStack_24c;
  FString local_248;
  FScriptContainerElement *local_238;
  int iStack_230;
  int iStack_22c;
  FString local_228;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FString local_208;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  int iStack_1ec;
  FString local_1e8;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [24];
  longlong lStack_1a0;
  TObjectPtr<ULevel>_u_0 local_198;
  TObjectPtr<UNetDriver>_u_0 TStack_190;
  TObjectPtr<ULineBatchComponent>_u_0 local_188;
  TObjectPtr<ULineBatchComponent>_u_0 TStack_180;
  undefined1 local_178 [16];
  TObjectPtr<UPhysicsCollisionHandler>_u_0 local_168;
  TObjectPtr<UPhysicsQueryHandler>_u_0 TStack_160;
  undefined1 local_158 [16];
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [184];
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::PrintfImpl(&local_340,L"Number of chunks loaded: %d of %d");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_340.Data.ArrayNum != 0) {
    FVar23.Data = local_340.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_360,(wchar_t *)FVar23.Data);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  iVar12 = (this->CacheOverflowCount).Counter;
  ::FString::PrintfImpl(&local_330,L"The cache has blown %d times)");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_330.Data.ArrayNum != 0) {
    FVar23.Data = local_330.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_370,(wchar_t *)FVar23.Data);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  local_398 = 0;
  local_390 = 0;
  pUVar20 = UEngine::GetSmallFont();
  UFont::GetStringHeightAndWidth(pUVar20,L"Cache XX ",&local_390,&local_398);
  pUVar20 = UEngine::GetSmallFont();
  if (local_360.Data.ArrayNum == 0) {
    local_318 = (FScriptContainerElement *)0x15060d16c;
LAB_14769c37f:
    sVar21 = wcslen((wchar_t *)local_318);
    uStack_310 = (undefined4)sVar21;
  }
  else {
    uStack_310 = 0;
    local_318 = local_360.Data.AllocatorInstance.Data;
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769c37f;
  }
  pFVar27 = &FLinearColor::Green;
  lStack_1a0 = CONCAT44(uStack_30c,uStack_310);
  local_1b8._16_8_ = local_318;
  this_00 = (FCanvas *)CONCAT44(in_stack_0000002c,param_4);
  FCanvas::DrawShadowedString
            (this_00,(double)(local_398 + param_5),(double)((int)param_6 + -0xc),
             (TStringView<wchar_t> *)(local_1b8 + 0x10),pUVar20,&FLinearColor::Green,
             &FLinearColor::Black);
  if (iVar12 != 0) {
    pFVar27 = &FLinearColor::Red;
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_370.Data.ArrayNum == 0) {
    local_308 = (ULevel *)0x15060d16c;
LAB_14769c428:
    sVar21 = wcslen((wchar_t *)local_308);
    uStack_300 = (undefined4)sVar21;
  }
  else {
    uStack_300 = 0;
    local_308 = (ULevel *)local_370.Data.AllocatorInstance.Data;
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769c428;
  }
  TStack_190._4_4_ = uStack_2fc;
  TStack_190._0_4_ = uStack_300;
  local_198.DebugPtr = local_308;
  FCanvas::DrawShadowedString
            (this_00,(double)(local_398 + param_5),(double)((int)param_6 + -2),
             (TStringView<wchar_t> *)&local_198.ObjectPtr,pUVar20,pFVar27,&FLinearColor::Black);
  local_394 = (float)((int)param_6 + 0x14);
  uVar10 = 0;
  local_3d8 = 0;
  local_3ac = 0;
  local_3b0 = 0;
  local_3b4 = 0;
  local_3b8 = 0;
  local_3c0 = 0;
  local_3d4 = 0;
  local_3d0 = 0;
  uVar7 = 0;
  local_3cc = 0;
  local_3c8 = 0;
  local_3c4 = 0;
  uVar31 = uVar10;
  if (0 < this->ChunksInUse) {
    lVar28 = 0;
    uVar29 = uVar10;
    uVar24 = uVar10;
    do {
      uVar11 = 0;
      if ((int)uVar24 < (this->CachePool).ArrayNum) {
        uVar11 = ~uVar24 >> 0x1f;
      }
      uVar30 = uVar29;
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar30 = uVar7, bVar9)) {
        pcVar6 = (code *)swi(3);
        TVar22 = (TTuple<int,int>)(*pcVar6)();
        return TVar22;
      }
      pFVar3 = (this->CachePool).AllocatorInstance.Data;
      uVar10 = uVar10 + *(int *)(pFVar3 + lVar28 + 0x28);
      FVar1 = pFVar3[lVar28 + 0xa8];
      FVar2 = pFVar3[lVar28 + 0x98];
      if ((*(int *)(pFVar3 + lVar28 + 0x60) < 2) &&
         ((*(int *)(pFVar3 + lVar28 + 0x60) == 0 ||
          (pFVar3[lVar28 + 0x98] == (FScriptContainerElement)0x1)))) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      uVar29 = uVar30;
      if (*(int *)(pFVar3 + lVar28 + 0x28) == 0) {
        local_3cc = local_3cc + 1;
      }
      else if (*(int *)(pFVar3 + lVar28 + 0x58) == 0) {
        local_3c8 = local_3c8 + 1;
      }
      else if (FVar2 == (FScriptContainerElement)0x1) {
        if (bVar9) {
          if (FVar1 == (FScriptContainerElement)0x0) {
            local_3d8 = local_3d8 + 1;
          }
          else {
            local_3b8 = local_3b8 + 1;
          }
        }
        else if (FVar1 == (FScriptContainerElement)0x0) {
          local_3ac = local_3ac + 1;
        }
        else {
          local_3c0 = local_3c0 + 1;
        }
      }
      else if (FVar2 == (FScriptContainerElement)0x2) {
        if (bVar9) {
          if (FVar1 == (FScriptContainerElement)0x0) {
            local_3b0 = local_3b0 + 1;
          }
          else {
            local_3d4 = local_3d4 + 1;
          }
        }
        else if (FVar1 == (FScriptContainerElement)0x0) {
          local_3b4 = local_3b4 + 1;
        }
        else {
          local_3d0 = local_3d0 + 1;
        }
      }
      else if (FVar2 == (FScriptContainerElement)0x3) {
        uVar29 = uVar30 + 1;
        uVar7 = uVar30 + 1;
        if (!bVar9) {
          uVar29 = uVar30;
          uVar31 = uVar31 + 1;
          uVar7 = uVar30;
        }
      }
      else {
        local_3c4 = local_3c4 + 1;
      }
      uVar24 = uVar24 + 1;
      lVar28 = lVar28 + 0xb0;
    } while ((int)uVar24 < this->ChunksInUse);
    this_00 = (FCanvas *)CONCAT44(in_stack_0000002c,param_4);
  }
  TVar4 = *(this->ForceInlineMemoryCounterBytes).Obj.Ptr;
  TVar5 = *(this->FeatureMemoryCounterBytes).Obj.Ptr;
  uVar10 = TVar4._0_4_ + TVar5._0_4_ + uVar10;
  dVar34 = (double)uVar10;
  if (uVar10 == 0) {
    dVar36 = 0.0;
    dVar34 = 0.0;
  }
  else {
    dVar36 = (double)(ulonglong)TVar5 / dVar34;
    dVar34 = (double)(ulonglong)TVar4 / dVar34;
  }
  ::FString::PrintfImpl
            (&local_2f8,L"Using: %.4f Megabytes (%llu bytes). Max Potential Usage: %.4f Megabytes.")
  ;
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_2f8.Data.ArrayNum != 0) {
    FVar23.Data = local_2f8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1e8,(wchar_t *)FVar23.Data);
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetMediumFont();
  if (local_1e8.Data.ArrayNum == 0) {
    local_2e8 = (ULineBatchComponent *)0x15060d16c;
LAB_14769c76e:
    sVar21 = wcslen((wchar_t *)local_2e8);
    uStack_2e0 = (undefined4)sVar21;
  }
  else {
    uStack_2e0 = 0;
    local_2e8 = (ULineBatchComponent *)local_1e8.Data.AllocatorInstance.Data;
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769c76e;
  }
  fVar8 = local_394;
  TStack_180._4_4_ = uStack_2dc;
  TStack_180._0_4_ = uStack_2e0;
  dVar37 = (double)param_5;
  local_188.DebugPtr = local_2e8;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)(int)local_394,(TStringView<wchar_t> *)&local_188.ObjectPtr,
             pUVar20,&FLinearColor::White,&FLinearColor::Black);
  local_394 = (float)dVar34;
  local_38c = (float)dVar36;
  fVar32 = local_394 + local_38c;
  fVar35 = (float)(int)(local_3c8 + local_3c4 + local_3cc + uVar31 + uVar7 + local_3d0 + local_3d4 +
                        local_3c0 + local_3b8 + local_3b4 + local_3b0 + local_3ac + local_3d8);
  fVar33 = __real_7f7fc99e;
  if (__real_3e45798ee2308c3a <
      (double)(float)((uint)(fVar32 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (0.0 < fVar32) {
      fVar35 = fVar35 + (float)(int)((fVar32 / (__real_3f800000 - fVar32)) * fVar35);
    }
    fVar33 = fVar35;
    if (fVar35 == 0.0) {
      fVar33 = __real_3f800000;
    }
  }
  fVar33 = __real_3f800000 / fVar33;
  local_388 = (int)((float)((this_00->ParentSize).field0_0x0._s_0.X + param_5 * -2) *
                   __real_3f000000);
  fVar32 = (float)local_388;
  iVar12 = (int)(fVar32 * (float)local_3ac * fVar33);
  iVar13 = (int)(fVar32 * (float)local_3b0 * fVar33);
  iVar14 = (int)((float)local_3b8 * fVar33 * fVar32);
  iVar15 = (int)((float)local_3c0 * fVar33 * fVar32);
  iVar16 = (int)((float)local_3d4 * fVar33 * fVar32);
  iVar17 = (int)((float)local_3d0 * fVar33 * fVar32);
  iVar18 = (int)(fVar32 * (float)(int)uVar7 * fVar33);
  local_384 = (int)(fVar32 * (float)(int)uVar31 * fVar33);
  local_380 = (int)(fVar32 * (float)local_3cc * fVar33);
  local_37c = (int)(fVar32 * (float)local_3c8 * fVar33);
  local_378 = (int)(fVar32 * (float)local_3c4 * fVar33);
  local_374 = (int)(fVar32 * local_394);
  iVar19 = (int)(fVar32 * local_38c);
  pUVar20 = UEngine::GetSmallFont();
  local_1d8 = L"Cache Composition:";
  uStack_1d0 = 0x12;
  local_178._12_4_ = uStack_1cc;
  local_178._8_4_ = 0x12;
  local_178._0_8_ = L"Cache Composition:";
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 0x18),(TStringView<wchar_t> *)local_178,pUVar20,
             &FLinearColor::White,&FLinearColor::Black);
  ::FString::PrintfImpl(&local_350,L"Retained: %.2f %%");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_350.Data.ArrayNum != 0) {
    FVar23.Data = local_350.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_3a8,(wchar_t *)FVar23.Data);
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_3a8.Data.ArrayNum == 0) {
    local_2c8 = (UPhysicsCollisionHandler *)0x15060d16c;
LAB_14769cb31:
    sVar21 = wcslen((wchar_t *)local_2c8);
    uStack_2c0 = (undefined4)sVar21;
  }
  else {
    uStack_2c0 = 0;
    local_2c8 = (UPhysicsCollisionHandler *)local_3a8.Data.AllocatorInstance.Data;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769cb31;
  }
  TStack_160._4_4_ = uStack_2bc;
  TStack_160._0_4_ = uStack_2c0;
  local_168.DebugPtr = local_2c8;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 0x27),(TStringView<wchar_t> *)&local_168.ObjectPtr
             ,pUVar20,&ColorRetainedAndPlaying,&FLinearColor::Black);
  ::FString::PrintfImpl(&local_2b8,L"Primed: %.2f %%");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_2b8.Data.ArrayNum != 0) {
    FVar23.Data = local_2b8.Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_3a8,(wchar_t *)FVar23.Data);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_3a8.Data.ArrayNum == 0) {
    local_2a8 = (FScriptContainerElement *)0x15060d16c;
LAB_14769cbfc:
    sVar21 = wcslen((wchar_t *)local_2a8);
    iStack_2a0 = (int)sVar21;
  }
  else {
    iStack_2a0 = 0;
    local_2a8 = local_3a8.Data.AllocatorInstance.Data;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769cbfc;
  }
  local_158._12_4_ = iStack_29c;
  local_158._8_4_ = iStack_2a0;
  local_158._0_8_ = local_2a8;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 0x36),(TStringView<wchar_t> *)local_158,pUVar20,
             &ColorPrimedAndPlaying,&FLinearColor::Black);
  ::FString::PrintfImpl(&local_298,L"Load On Demand: %.2f %%");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_298.Data.ArrayNum != 0) {
    FVar23.Data = local_298.Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_3a8,(wchar_t *)FVar23.Data);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_3a8.Data.ArrayNum == 0) {
    local_288 = (FScriptContainerElement *)0x15060d16c;
LAB_14769ccd2:
    sVar21 = wcslen((wchar_t *)local_288);
    iStack_280 = (int)sVar21;
  }
  else {
    iStack_280 = 0;
    local_288 = local_3a8.Data.AllocatorInstance.Data;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769ccd2;
  }
  local_148._12_4_ = iStack_27c;
  local_148.Size = iStack_280;
  local_148.DataPtr = (wchar_t *)local_288;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 0x45),&local_148,pUVar20,&ColorLODAndPlaying,
             &FLinearColor::Black);
  ::FString::PrintfImpl(&local_278,L"Trimmed: %.2f %%");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_278.Data.ArrayNum != 0) {
    FVar23.Data = local_278.Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_3a8,(wchar_t *)FVar23.Data);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_3a8.Data.ArrayNum == 0) {
    local_268 = (FScriptContainerElement *)0x15060d16c;
LAB_14769cda2:
    sVar21 = wcslen((wchar_t *)local_268);
    iStack_260 = (int)sVar21;
  }
  else {
    iStack_260 = 0;
    local_268 = local_3a8.Data.AllocatorInstance.Data;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769cda2;
  }
  local_138._12_4_ = iStack_25c;
  local_138.Size = iStack_260;
  local_138.DataPtr = (wchar_t *)local_268;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 0x54),&local_138,pUVar20,&ColorTrimmed,
             &FLinearColor::Black);
  ::FString::PrintfImpl(&local_2d8,L"Load In Progress: %.2f %%");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_2d8.Data.ArrayNum != 0) {
    FVar23.Data = local_2d8.Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_3a8,(wchar_t *)FVar23.Data);
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_3a8.Data.ArrayNum == 0) {
    local_258 = (FScriptContainerElement *)0x15060d16c;
LAB_14769ce66:
    sVar21 = wcslen((wchar_t *)local_258);
    iStack_250 = (int)sVar21;
  }
  else {
    iStack_250 = 0;
    local_258 = local_3a8.Data.AllocatorInstance.Data;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769ce66;
  }
  local_128._12_4_ = iStack_24c;
  local_128.Size = iStack_250;
  local_128.DataPtr = (wchar_t *)local_258;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 99),&local_128,pUVar20,&ColorLoadInProgress,
             &FLinearColor::Black);
  ::FString::PrintfImpl(&local_248,L"Force Inline: %.2f %% (%.2f MB)");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_248.Data.ArrayNum != 0) {
    FVar23.Data = local_248.Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_3a8,(wchar_t *)FVar23.Data);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_3a8.Data.ArrayNum == 0) {
    local_238 = (FScriptContainerElement *)0x15060d16c;
LAB_14769cf46:
    sVar21 = wcslen((wchar_t *)local_238);
    iStack_230 = (int)sVar21;
  }
  else {
    iStack_230 = 0;
    local_238 = local_3a8.Data.AllocatorInstance.Data;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769cf46;
  }
  local_118._12_4_ = iStack_22c;
  local_118.Size = iStack_230;
  local_118.DataPtr = (wchar_t *)local_238;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 0x72),&local_118,pUVar20,&ColorForceInline,
             &FLinearColor::Black);
  ::FString::PrintfImpl(&local_228,L"External Features: %.2f %% (%.2f MB)");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar23.Data = local_228.Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_3a8,(wchar_t *)FVar23.Data);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_3a8.Data.ArrayNum == 0) {
    local_218 = (FScriptContainerElement *)0x15060d16c;
LAB_14769d01e:
    sVar21 = wcslen((wchar_t *)local_218);
    iStack_210 = (int)sVar21;
  }
  else {
    iStack_210 = 0;
    local_218 = local_3a8.Data.AllocatorInstance.Data;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769d01e;
  }
  local_108._12_4_ = uStack_20c;
  local_108._8_4_ = iStack_210;
  local_108._0_8_ = local_218;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 0x81),(TStringView<wchar_t> *)local_108,pUVar20,
             &ColorExternalFeatures,&FLinearColor::Black);
  ::FString::PrintfImpl(&local_208,L"Other: %.2f %%");
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar23.Data = local_208.Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_3a8,(wchar_t *)FVar23.Data);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  pUVar20 = UEngine::GetSmallFont();
  if (local_3a8.Data.ArrayNum == 0) {
    local_1f8 = (FScriptContainerElement *)0x15060d16c;
LAB_14769d0e6:
    sVar21 = wcslen((wchar_t *)local_1f8);
    iStack_1f0 = (int)sVar21;
  }
  else {
    iStack_1f0 = 0;
    local_1f8 = local_3a8.Data.AllocatorInstance.Data;
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14769d0e6;
  }
  local_f8._12_4_ = iStack_1ec;
  local_f8._8_4_ = iStack_1f0;
  uVar38 = 1;
  local_f8._0_8_ = local_1f8;
  FCanvas::DrawShadowedString
            (this_00,dVar37,(double)((int)fVar8 + 0x9a),(TStringView<wchar_t> *)local_f8,pUVar20,
             &ColorOther,&FLinearColor::Black);
  FCanvas::DrawTile(this_00,dVar37,(double)((int)fVar8 + 0xb2),(double)(local_388 + 4),
                    __real_403c000000000000,0.0,0.0,0.0,0.0,&FLinearColor::Black,(FTexture *)0x0,
                    true);
  dVar34 = __real_4038000000000000;
  dVar36 = (double)((int)fVar8 + 0xb4);
  dVar37 = (double)(param_5 + 2);
  FCanvas::DrawTile(this_00,dVar37,dVar36,(double)iVar14,__real_4038000000000000,0.0,0.0,0.0,0.0,
                    &ColorCacheMiss,(FTexture *)0x0,true);
  iVar14 = (int)(fVar32 * (float)local_3d8 * fVar33) + iVar14;
  iVar25 = param_5 + 2 + iVar14;
  FCanvas::DrawTile(this_00,(double)iVar25,dVar36,(double)iVar15,dVar34,0.0,0.0,0.0,0.0,
                    &ColorCacheMiss,(FTexture *)0x0,true);
  iVar26 = iVar15 + iVar25 + iVar12;
  FCanvas::DrawTile(this_00,(double)iVar26,dVar36,(double)iVar16,dVar34,0.0,0.0,0.0,0.0,
                    &ColorCacheMiss,(FTexture *)0x0,true);
  FCanvas::DrawTile(this_00,(double)(iVar16 + iVar26 + iVar13),dVar36,(double)iVar17,dVar34,0.0,0.0,
                    0.0,0.0,&ColorCacheMiss,(FTexture *)0x0,true);
  dVar34 = __real_4034000000000000;
  dVar36 = (double)((int)fVar8 + 0xb6);
  FCanvas::DrawTile(this_00,dVar37,dVar36,(double)iVar14,__real_4034000000000000,0.0,0.0,0.0,0.0,
                    &ColorRetainedAndPlaying,(FTexture *)0x0,true);
  iVar15 = iVar15 + iVar12;
  FCanvas::DrawTile(this_00,(double)iVar25,dVar36,(double)iVar15,dVar34,0.0,0.0,0.0,0.0,
                    &ColorRetained,(FTexture *)0x0,true);
  iVar25 = iVar25 + iVar15;
  iVar16 = iVar16 + iVar13;
  FCanvas::DrawTile(this_00,(double)iVar25,dVar36,(double)iVar16,dVar34,0.0,0.0,0.0,0.0,
                    &ColorPrimedAndPlaying,(FTexture *)0x0,true);
  iVar25 = iVar25 + iVar16;
  iVar17 = (int)(fVar32 * (float)local_3b4 * fVar33) + iVar17;
  FCanvas::DrawTile(this_00,(double)iVar25,dVar36,(double)iVar17,dVar34,0.0,0.0,0.0,0.0,&ColorPrimed
                    ,(FTexture *)0x0,true);
  iVar17 = iVar17 + iVar25;
  FCanvas::DrawTile(this_00,(double)iVar17,dVar36,(double)iVar18,dVar34,0.0,0.0,0.0,0.0,
                    &ColorLODAndPlaying,(FTexture *)0x0,true);
  iVar12 = local_384;
  iVar17 = iVar17 + iVar18;
  FCanvas::DrawTile(this_00,(double)iVar17,dVar36,(double)local_384,dVar34,0.0,0.0,0.0,0.0,&ColorLOD
                    ,(FTexture *)0x0,true);
  iVar13 = local_380;
  iVar17 = iVar17 + iVar12;
  FCanvas::DrawTile(this_00,(double)iVar17,dVar36,(double)local_380,dVar34,0.0,0.0,0.0,0.0,
                    &ColorTrimmed,(FTexture *)0x0,true);
  iVar12 = local_37c;
  iVar17 = iVar17 + iVar13;
  FCanvas::DrawTile(this_00,(double)iVar17,dVar36,(double)local_37c,dVar34,0.0,0.0,0.0,0.0,
                    &ColorLoadInProgress,(FTexture *)0x0,true);
  iVar13 = local_378;
  iVar17 = iVar17 + iVar12;
  FCanvas::DrawTile(this_00,(double)iVar17,dVar36,(double)local_378,dVar34,0.0,0.0,0.0,0.0,
                    &ColorOther,(FTexture *)0x0,true);
  iVar12 = local_374;
  iVar17 = iVar17 + iVar13;
  if ((0 < local_374) || (0 < iVar19)) {
    FCanvas::DrawTile(this_00,(double)iVar17,dVar36,__real_4014000000000000,dVar34,0.0,0.0,0.0,0.0,
                      &FLinearColor::Black,(FTexture *)0x0,true);
    iVar17 = iVar17 + 5;
    if (0 < iVar12) {
      FCanvas::DrawTile(this_00,(double)iVar17,dVar36,(double)(iVar12 + -5),dVar34,0.0,0.0,0.0,0.0,
                        &ColorForceInline,(FTexture *)0x0,true);
      iVar17 = iVar17 + iVar12;
    }
    if (0 < iVar19) {
      FCanvas::DrawTile(this_00,(double)iVar17,dVar36,(double)(iVar19 + -5),dVar34,0.0,0.0,0.0,0.0,
                        &ColorExternalFeatures,(FTexture *)0x0,true);
    }
  }
  iVar12 = (int)fVar8 + 0xce;
  *(int *)&param_1->_padding_ = param_5;
  *(int *)((longlong)&param_1->_padding_ + 4) = iVar12;
  iVar13 = (int)this_00;
  if (DebugViewCVar == 0) {
    TVar22 = DebugDisplayLegacy(this,(UWorld *)local_1c8,param_2,param_3,iVar13,param_5,
                                (TVector<double> *)CONCAT44(uVar38,(int)fVar8 + 0xd2),param_7);
  }
  else {
    if (DebugViewCVar == 1) goto LAB_14769d90f;
    if (DebugViewCVar == 2) {
      DebugBirdsEyeDisplay
                (this,(UWorld *)(local_1c8 + 8),param_2,param_3,iVar13,param_5,
                 (TVector<double> *)CONCAT44(uVar38,iVar12),param_7);
      goto LAB_14769d90f;
    }
    if (DebugViewCVar != 3) goto LAB_14769d90f;
    TVar22 = DebugVisualDisplay(this,(UWorld *)local_1b8,param_2,param_3,iVar13,param_5,
                                (TVector<double> *)CONCAT44(uVar38,iVar12),param_7);
  }
  param_1->_padding_ = *(longlong *)TVar22;
LAB_14769d90f:
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (TTuple<int,int>)param_1;
}

// DebugDisplayLegacy @ 14769d990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTuple<int,int> __thiscall
FAudioChunkCache::DebugDisplayLegacy
          (FAudioChunkCache *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,
          int param_5,TVector<double> *param_6,TRotator<double> *param_7)

{
  ulonglong *puVar1;
  float fVar2;
  FCacheElement *pFVar3;
  FName *this_00;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar15;
  uint uVar16;
  int iVar17;
  TTuple<int,int> TVar18;
  UFont *this_01;
  FString *pFVar19;
  ulonglong uVar20;
  FLinearColor *pFVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  uint uVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  TTuple<FAudioChunkCache::FCacheElement_*,int> *pTVar27;
  uint uVar28;
  ulonglong *puVar29;
  int iVar30;
  longlong lVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 in_stack_0000002c;
  undefined1 auStackY_568 [32];
  <lambda_4> local_518 [8];
  ForAnyElementType local_510;
  uint local_508;
  uint local_504;
  ESoundWaveLoadingBehavior local_500;
  char local_4ff;
  char local_4fe;
  char local_4fd;
  FTabularRenderHelper local_4f8;
  TArray<Audio::FTabularRenderHelper::FItem,TSizedDefaultAllocator<32>_> local_4d8;
  int local_4c8 [4];
  LARGE_INTEGER local_4b8;
  FName local_4b0;
  FCacheElement *local_4a8;
  uint uStack_4a0;
  undefined4 uStack_49c;
  FLinearColor_u_0 local_498;
  FLinearColor_u_0 local_488;
  FCanvas *local_478;
  TTuple<int,int> local_470;
  LPCRITICAL_SECTION local_468;
  FString local_460;
  FString local_450;
  FLinearColor_u_0 local_440;
  FLinearColor_u_0 local_430;
  FLinearColor_u_0 local_420;
  FString local_410;
  FString local_400;
  FLinearColor_u_0 local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FLinearColor local_300;
  FLinearColor local_2f0;
  FString local_2e0;
  FItem local_2c8;
  FString local_2a8;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  FString local_288;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  FString local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  FString local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  FString local_228;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  FString local_208;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  FString local_1e8;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  FString local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  FString local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  FString local_188;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  FString local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  FString local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  FString local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  FString local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8 [22];
  
  local_e8[0] = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_478 = (FCanvas *)CONCAT44(in_stack_0000002c,param_4);
  local_468 = (LPCRITICAL_SECTION)&this->CacheMutationCriticalSection;
  local_470 = (TTuple<int,int>)param_1;
  if (local_468 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_468);
  iVar17 = DebugCacheDisplaySortMethod;
  uVar28 = 0;
  pFVar3 = this->MostRecentElement;
  local_510.Data = (FScriptContainerElement *)0x0;
  local_508 = 0;
  local_504 = 0;
  uVar24 = uVar28;
  local_420._0_8_ = ___xmm_3f8000003e3c00003f4f00003e300000;
  local_420._8_8_ = _UNK_15174b7d8;
  local_3f0._0_8_ = ___xmm_3f8000003f4f00003e3000003e3c0000;
  local_3f0._8_8_ = _UNK_15174b7f8;
  local_430._0_8_ = ___xmm_3f8000003e2c00003efc00003f4c0000;
  local_430._8_8_ = _UNK_15174b7c8;
  do {
    if (pFVar3 == (FCacheElement *)0x0) {
      if (iVar17 == 1) {
        AlgoImpl::
        IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l14::<lambda_1>,TGreater<float>_>
                  ((TTuple<FAudioChunkCache::FCacheElement_*,int> *)local_510.Data,uVar24,
                   (<lambda_1>)local_518[0],(TGreater<float>)local_518[0]);
        uVar24 = local_508;
      }
      else if (iVar17 == 2) {
        AlgoImpl::
        IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l15::<lambda_2>,TGreater<int>_>
                  ((TTuple<FAudioChunkCache::FCacheElement_*,int> *)local_510.Data,uVar24,
                   (<lambda_2>)local_518[0],(TGreater<int>)local_518[0]);
        uVar24 = local_508;
      }
      else if (iVar17 == 3) {
        AlgoImpl::
        IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l16::<lambda_3>,TGreater<int>_>
                  ((TTuple<FAudioChunkCache::FCacheElement_*,int> *)local_510.Data,uVar24,
                   (<lambda_3>)local_518[0],(TGreater<int>)local_518[0]);
        uVar24 = local_508;
      }
      else if (iVar17 == 4) {
        AlgoImpl::
        IntroSortInternal<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,_FAudioChunkCache::DebugDisplayLegacy_::__l17::<lambda_4>,TGreater<unsigned___int64>_>
                  ((TTuple<FAudioChunkCache::FCacheElement_*,int> *)local_510.Data,uVar24,
                   local_518[0],(TGreater<unsigned___int64>)local_518[0]);
        uVar24 = local_508;
      }
      iVar17 = DebugMaxElementsDisplayCVar;
      lVar31 = (longlong)DebugMaxElementsDisplayCVar;
      if (DebugMaxElementsDisplayCVar < (int)uVar24) {
        if ((int)uVar24 < DebugMaxElementsDisplayCVar) {
          iVar30 = DebugMaxElementsDisplayCVar - uVar24;
          iVar17 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar30,&local_510,(int *)&local_508,(int *)&local_504);
          DefaultConstructItems<TTuple<FAudioChunkCache::FCacheElement_*,int>,int>
                    (local_510.Data + (longlong)iVar17 * 0x10,iVar30);
        }
        else {
          if (DebugMaxElementsDisplayCVar < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)DebugMaxElementsDisplayCVar);
          }
          if (DebugMaxElementsDisplayCVar < (int)uVar24) {
            uVar28 = uVar24 - DebugMaxElementsDisplayCVar;
            if (((int)(DebugMaxElementsDisplayCVar | uVar28) < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), uVar24 = local_508, bVar15)) {
              pcVar4 = (code *)swi(3);
              TVar18 = (TTuple<int,int>)(*pcVar4)();
              return TVar18;
            }
            if (uVar28 != 0) {
              iVar17 = (uVar24 - iVar17) - uVar28;
              if (iVar17 != 0) {
                memmove(local_510.Data + lVar31 * 0x10,
                        local_510.Data + lVar31 * 0x10 + (longlong)(int)uVar28 * 0x10,
                        (longlong)iVar17 << 4);
                uVar24 = local_508;
              }
              local_508 = uVar24 - uVar28;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&local_510,local_508,(int *)&local_504);
            }
          }
        }
      }
      ::FString::PrintfImpl(&local_460,L"Number of chunks loaded: %d of %d");
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_460.Data.ArrayNum != 0) {
        FVar26.Data = local_460.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_400,(wchar_t *)FVar26.Data);
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_450,L"The cache has blown %d times)");
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_450.Data.ArrayNum != 0) {
        FVar26.Data = local_450.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_410,(wchar_t *)FVar26.Data);
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      local_4c8[0] = 0;
      local_4c8[1] = 0;
      this_01 = UEngine::GetSmallFont();
      UFont::GetStringHeightAndWidth(this_01,L"Cache XX ",local_4c8 + 1,local_4c8);
      fVar37 = 0.0;
      QueryPerformanceCounter(&local_4b8);
      local_4f8.HeaderColor.field0_0x0._s_0 = FColor::White.field0_0x0;
      local_4f8.RowColor.field0_0x0._s_0.B = FColor::Green.field0_0x0._0_1_;
      local_4f8.RowColor.field0_0x0._s_0.G = FColor::Green.field0_0x0._1_1_;
      local_4f8.RowColor.field0_0x0._s_0.R = FColor::Green.field0_0x0._2_1_;
      local_4f8.RowColor.field0_0x0._s_0.A = FColor::Green.field0_0x0._3_1_;
      local_4f8.Cols.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4f8.Cols.ArrayNum = 0;
      local_4f8.Cols.ArrayMax = 0;
      local_4f8.Font = UEngine::GetTinyFont();
      pFVar19 = ::FString::FString(&local_2e0,L"Name");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,0x40);
      pFVar19 = ::FString::FString(&local_3e0,L"Chunk");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,10);
      pFVar19 = ::FString::FString(&local_3d0,L"Size(kb)");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,10);
      pFVar19 = ::FString::FString(&local_3c0,L"Loadtime(ms)");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,0x14);
      pFVar19 = ::FString::FString(&local_3b0,L"Loaded at(sec)");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,0x14);
      pFVar19 = ::FString::FString(&local_3a0,L"Load-Behavior");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,0x14);
      pFVar19 = ::FString::FString(&local_390,L"Format");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,8);
      pFVar19 = ::FString::FString(&local_380,L"Refs");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,6);
      pFVar19 = ::FString::FString(&local_370,L"Reqs");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,6);
      pFVar19 = ::FString::FString(&local_360,L"Offset(secs)");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,0x14);
      pFVar19 = ::FString::FString(&local_350,L"Inlined");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,10);
      pFVar19 = ::FString::FString(&local_340,L"Wasinline");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,10);
      pFVar19 = ::FString::FString(&local_330,L"Cachemiss");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,10);
      pFVar19 = ::FString::FString(&local_320,L"Stale");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,10);
      pFVar19 = ::FString::FString(&local_310,L"Destroyed");
      Audio::FTabularRenderHelper::AddCol(&local_4f8,pFVar19,10);
      fVar14 = _UNK_15174b7bc;
      fVar13 = _UNK_15174b7b8;
      fVar12 = _UNK_15174b7b4;
      fVar11 = ___xmm_3f8000003e2c00003e3800003f4c0000;
      fVar10 = __real_3daaaaab;
      fVar9 = _UNK_15090c6dc;
      fVar8 = _UNK_15090c6d8;
      fVar7 = _UNK_15090c6d4;
      fVar6 = ___xmm_3f8000003f800000000000003f800000;
      fVar5 = __real_3f800000;
      uVar20 = (ulonglong)(int)local_508;
      pTVar27 = (TTuple<FAudioChunkCache::FCacheElement_*,int> *)(local_510.Data + uVar20 * 0x10);
      local_4b8.s.LowPart = local_508;
      uVar25 = uVar20;
      FVar26.Data = local_510.Data;
      while( true ) {
        if ((int)uVar20 != (int)uVar25) {
          `TCheckedPointerIterator<TTuple<FAudioChunkCache::FCacheElement_*,int>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_518);
        }
        if ((TTuple<FAudioChunkCache::FCacheElement_*,int> *)FVar26.Data == pTVar27) break;
        this_00 = *(FName **)FVar26.Data;
        local_4c8[2] = this_00[0xf].Number;
        local_500 = (ESoundWaveLoadingBehavior)this_00[0x13].ComparisonIndex.Value;
        local_4fe = (char)this_00[0x15].ComparisonIndex.Value;
        local_4ff = *(char *)((longlong)&this_00[0x15].ComparisonIndex.Value + 1);
        local_4fd = *(char *)((longlong)&this_00[0x15].ComparisonIndex.Value + 2);
        local_518[0] = *(<lambda_4> *)((longlong)&this_00[0x15].ComparisonIndex.Value + 3);
        local_4b0 = *(FName *)&this_00[0x13].Number;
        fVar2 = (float)this_00[0x12].ComparisonIndex.Value;
        fVar37 = fVar37 + __real_3d23d70a;
        uVar28 = this_00[5].ComparisonIndex.Value;
        if (fVar5 <= fVar37) {
          fVar37 = fVar5;
        }
        pFVar21 = FLinearColor::LerpUsingHSV
                            (&local_300,(FLinearColor *)&local_3f0._s_0,&FLinearColor::Gray,fVar37);
        if (this_00[0xb].ComparisonIndex.Value == 0) {
          fVar33 = FLinearColor::Yellow.field0_0x0._0_4_;
          fVar34 = FLinearColor::Yellow.field0_0x0._4_4_;
          fVar35 = FLinearColor::Yellow.field0_0x0._8_4_;
          fVar36 = FLinearColor::Yellow.field0_0x0._12_4_;
        }
        else if ((int)this_00[0xc].ComparisonIndex.Value < 1) {
          fVar33 = (pFVar21->field0_0x0)._s_0.R;
          fVar34 = (pFVar21->field0_0x0)._s_0.G;
          fVar35 = (pFVar21->field0_0x0)._s_0.B;
          fVar36 = (pFVar21->field0_0x0)._s_0.A;
          if (uVar28 == 0) {
            fVar33 = fVar11;
            fVar34 = fVar12;
            fVar35 = fVar13;
            fVar36 = fVar14;
          }
        }
        else {
          fVar37 = (float)(int)this_00[0xc].ComparisonIndex.Value * fVar10;
          if (fVar5 <= fVar37) {
            fVar37 = fVar5;
          }
          pFVar21 = FLinearColor::LerpUsingHSV
                              (&local_2f0,(FLinearColor *)&local_420._s_0,
                               (FLinearColor *)&local_430._s_0,fVar37);
          fVar33 = (pFVar21->field0_0x0)._s_0.R;
          fVar34 = (pFVar21->field0_0x0)._s_0.G;
          fVar35 = (pFVar21->field0_0x0)._s_0.B;
          fVar36 = (pFVar21->field0_0x0)._s_0.A;
        }
        if ((char)this_00[0xb].Number != '\0') {
          fVar33 = fVar6;
          fVar34 = fVar7;
          fVar35 = fVar8;
          fVar36 = fVar9;
        }
        local_498._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
        dVar32 = (double)fVar2 * __real_3f847ae147ae147b;
        local_498._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
        if (__real_3ff0000000000000 <= dVar32) {
          dVar32 = __real_3ff0000000000000;
        }
        local_498._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
        local_498._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * __real_3b808081;
        local_488._s_0.R =
             FLinearColor::sRGBToLinearTable[(uint)FColor::Green.field0_0x0 >> 0x10 & 0xff];
        local_488._s_0.G =
             FLinearColor::sRGBToLinearTable[(uint)FColor::Green.field0_0x0 >> 8 & 0xff];
        local_488._s_0.B = FLinearColor::sRGBToLinearTable[(uint)FColor::Green.field0_0x0 & 0xff];
        local_488._s_0.A = (float)((uint)FColor::Green.field0_0x0 >> 0x18) * __real_3b808081;
        if (dVar32 <= 0.0) {
          dVar32 = 0.0;
        }
        FLinearColor::LerpUsingHSV
                  ((FLinearColor *)&local_440._s_0,(FLinearColor *)&local_488._s_0,
                   (FLinearColor *)&local_498._s_0,(float)dVar32);
        ::FName::ToString(this_00,&local_2c8.Text);
        local_2c8.Color.field0_0x0._s_0.R = fVar33;
        local_2c8.Color.field0_0x0._s_0.G = fVar34;
        local_2c8.Color.field0_0x0._s_0.B = fVar35;
        local_2c8.Color.field0_0x0._s_0.A = fVar36;
        ::FString::PrintfImpl(&local_2a8,L"%d/%d");
        local_298 = fVar33;
        fStack_294 = fVar34;
        fStack_290 = fVar35;
        fStack_28c = fVar36;
        ::FString::PrintfImpl(&local_288,L"%u");
        local_278 = fVar33;
        fStack_274 = fVar34;
        fStack_270 = fVar35;
        fStack_26c = fVar36;
        ::FString::PrintfImpl(&local_268,L"%.2f");
        local_258 = local_440._0_8_;
        uStack_250 = local_440._8_8_;
        ::FString::PrintfImpl(&local_248,L"%.2f");
        local_238 = local_440._0_8_;
        uStack_230 = local_440._8_8_;
        pwVar22 = EnumToString(local_500);
        pwVar23 = wcsstr(pwVar22,L"::");
        if (pwVar23 != (wchar_t *)0x0) {
          pwVar22 = pwVar23 + 2;
        }
        ::FString::FString(&local_228,pwVar22);
        local_218 = fVar33;
        fStack_214 = fVar34;
        fStack_210 = fVar35;
        fStack_20c = fVar36;
        ::FName::ToString(&local_4b0,&local_208);
        local_1f8 = fVar33;
        fStack_1f4 = fVar34;
        fStack_1f0 = fVar35;
        fStack_1ec = fVar36;
        ::FString::PrintfImpl(&local_1e8,L"%d");
        local_1d8 = fVar33;
        fStack_1d4 = fVar34;
        fStack_1d0 = fVar35;
        fStack_1cc = fVar36;
        ::FString::PrintfImpl(&local_1c8,L"%d");
        local_1b8 = fVar33;
        fStack_1b4 = fVar34;
        fStack_1b0 = fVar35;
        fStack_1ac = fVar36;
        ::FString::PrintfImpl(&local_1a8,L"%.2f");
        pwVar22 = L"true";
        if (local_4ff == '\0') {
          pwVar22 = L"false";
        }
        local_198 = fVar33;
        fStack_194 = fVar34;
        fStack_190 = fVar35;
        fStack_18c = fVar36;
        ::FString::FString(&local_188,pwVar22);
        pwVar22 = L"true";
        if (local_4fe == '\0') {
          pwVar22 = L"false";
        }
        local_178 = fVar33;
        fStack_174 = fVar34;
        fStack_170 = fVar35;
        fStack_16c = fVar36;
        ::FString::FString(&local_168,pwVar22);
        pwVar22 = L"true";
        if (local_4fd == '\0') {
          pwVar22 = L"false";
        }
        local_158 = fVar33;
        fStack_154 = fVar34;
        fStack_150 = fVar35;
        fStack_14c = fVar36;
        ::FString::FString(&local_148,pwVar22);
        local_138 = fVar33;
        fStack_134 = fVar34;
        fStack_130 = fVar35;
        fStack_12c = fVar36;
        ::FString::FString(&local_128,L"false");
        pwVar22 = L"true";
        if (local_518[0] == (<lambda_4>)0x0) {
          pwVar22 = L"false";
        }
        local_118 = fVar33;
        fStack_114 = fVar34;
        fStack_110 = fVar35;
        fStack_10c = fVar36;
        ::FString::FString(&local_108,pwVar22);
        local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d8.ArrayNum = 0xf;
        local_f8 = fVar33;
        fStack_f4 = fVar34;
        fStack_f0 = fVar35;
        fStack_ec = fVar36;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0xf,0,&local_4d8.AllocatorInstance,0xf,&local_4d8.ArrayMax);
        ConstructItems<Audio::FTabularRenderHelper::FItem,Audio::FTabularRenderHelper::FItem,int>
                  (local_4d8.AllocatorInstance.Data,&local_2c8,0xf);
        Audio::FTabularRenderHelper::AddRow(&local_4f8,&local_4d8);
        DestructItems<Audio::FTabularRenderHelper::FItem,int>
                  ((FItem *)local_4d8.AllocatorInstance.Data,local_4d8.ArrayNum);
        if ((FItem *)local_4d8.AllocatorInstance.Data != (FItem *)0x0) {
          FMemory::Free(local_4d8.AllocatorInstance.Data);
        }
        puVar29 = local_e8;
        lVar31 = 0xf;
        do {
          puVar1 = puVar29 + -4;
          puVar29 = puVar29 + -4;
          lVar31 = lVar31 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            FMemory::Free((void *)*puVar1);
          }
        } while (lVar31 != 0);
        uVar20 = (ulonglong)local_508;
        FVar26.Data = FVar26.Data + 0x10;
        uVar25 = (ulonglong)local_4b8.s.LowPart;
      }
      Audio::FTabularRenderHelper::Draw(&local_4f8,local_478,param_5,(int)param_6);
      TVar18 = local_470;
      *(undefined8 *)local_470 = 0;
      DestructItems<Audio::FTabularRenderHelper::FCol,int>
                ((FCol *)local_4f8.Cols.AllocatorInstance.Data,local_4f8.Cols.ArrayNum);
      lpCriticalSection = local_468;
      if ((FCol *)local_4f8.Cols.AllocatorInstance.Data != (FCol *)0x0) {
        FMemory::Free(local_4f8.Cols.AllocatorInstance.Data);
      }
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
      if ((TTuple<FAudioChunkCache::FCacheElement_*,int> *)local_510.Data !=
          (TTuple<FAudioChunkCache::FCacheElement_*,int> *)0x0) {
        FMemory::Free(local_510.Data);
      }
      LeaveCriticalSection(lpCriticalSection);
      return TVar18;
    }
    if (((iVar17 != 1) && (iVar17 != 4)) || ((pFVar3->DebugInfo).bWasLoadedFromInlineChunk == false)
       ) {
      uVar16 = uVar24;
      local_4a8 = pFVar3;
      uStack_4a0 = uVar28;
      if (((local_510.Data <= (TTuple<FAudioChunkCache::FCacheElement_*,int> *)&local_4a8) &&
          ((TTuple<FAudioChunkCache::FCacheElement_*,int> *)&local_4a8 <
           (TTuple<FAudioChunkCache::FCacheElement_*,int> *)
           ((longlong)local_510.Data + (longlong)(int)local_504 * 0x10))) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar16 = local_508, bVar15)) {
        pcVar4 = (code *)swi(3);
        TVar18 = (TTuple<int,int>)(*pcVar4)();
        return TVar18;
      }
      if (uVar16 == local_504) {
        uVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_510,(int *)&local_504);
      }
      uVar24 = uVar16 + 1;
      *(FCacheElement **)(local_510.Data + (longlong)(int)uVar16 * 0x10) = local_4a8;
      *(longlong *)(local_510.Data + (longlong)(int)uVar16 * 0x10 + 8) =
           CONCAT44(uStack_49c,uStack_4a0);
      local_508 = uVar24;
    }
    pFVar3 = pFVar3->LessRecentElement;
    uVar28 = uVar28 + 1;
  } while( true );
}

// DebugPrint @ 14769e690

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FString * __thiscall
FAudioChunkCache::DebugPrint(FAudioChunkCache *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  FCacheElement *pFVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FString local_168;
  int local_158;
  int local_154;
  FString local_150;
  wchar_t *local_140;
  wchar_t *local_138;
  wchar_t *local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8 [9];
  
  bVar4 = false;
  if (&this->CacheMutationCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CacheMutationCriticalSection);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_168,L"Number of chunks loaded: %d of %d");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar7.Data = local_168.Data.AllocatorInstance.Data;
  }
  ::FString::FString(local_c8,(wchar_t *)FVar7.Data);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_168,L"The cache has blown %d times");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar7.Data = local_168.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_d8,(wchar_t *)FVar7.Data);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_168,local_c8,L"\n");
  iVar8 = local_168.Data.ArrayNum + -1;
  if (local_168.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar8);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(&local_168,&local_d8,L"\n");
  iVar8 = local_168.Data.ArrayNum + -1;
  if (local_168.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar8);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  for (pFVar3 = this->MostRecentElement; pFVar3 != (FCacheElement *)0x0;
      pFVar3 = pFVar3->LessRecentElement) {
  }
  ::FString::PrintfImpl
            (&local_168,
             L"External Features:\t, Force Inline:\t, Retaining:\t, Loaded:\t, Max Potential Usage:\t, \n"
            );
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar7.Data = local_168.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_e8,(wchar_t *)FVar7.Data);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl
            (&local_168,
             L"%.4f Megabytes (%.3f%% of total capacity)\t %.4f Megabytes (%.3f%% of total capacity)\t %.4f Megabytes (%.3f%% of total capacity)\t,  %.4f Megabytes (%llu bytes)\t, %.4f Megabytes\t, \n"
            );
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar7.Data = local_168.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_f8,(wchar_t *)FVar7.Data);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_150,&local_e8,&local_f8);
  ::FString::ConcatFC(&local_168,&local_150,L"\n");
  iVar8 = local_168.Data.ArrayNum + -1;
  if (local_168.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar8);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  pFVar3 = this->MostRecentElement;
  ::FString::AppendChars
            (__return_storage_ptr__,
             L"Index:\t, Size (KB):\t, Chunk:\t, Request Count:\t, Average Index:\t, Number of Handles Retaining Chunk:\t, Chunk Load Time:\t, Name: \t, LoadingBehavior: \t, Notes:\t, \n"
             ,0xa0);
  while (pFVar3 != (FCacheElement *)0x0) {
    local_154 = (pFVar3->DebugInfo).NumTotalChunks;
    local_158 = (pFVar3->DebugInfo).NumTimesTouched;
    uVar1 = pFVar3->ChunkDataSize;
    local_138 = L"";
    local_130 = L"";
    if (pFVar3->bIsLoaded == (FThreadSafeBool)0x0) {
      local_138 = L"(Loading In Progress)";
    }
    if ((pFVar3->DebugInfo).bWasCacheMiss != false) {
      local_130 = L"(Cache Miss!)";
    }
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
    if ((pFVar3->DebugInfo).bLoadingBehaviorExternallyOverriden != false) {
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x150640f14;
    }
    local_140 = EnumToString((pFVar3->DebugInfo).LoadingBehavior);
    pwVar5 = wcsstr(local_140,L"::");
    if (pwVar5 != (wchar_t *)0x0) {
      local_140 = pwVar5 + 2;
    }
    if (uVar1 != 0) {
      bVar4 = true;
      ::FName::ToString((FName *)pFVar3,&local_118);
    }
    ::FString::PrintfImpl
              (&local_128,
               L"%4i.\t, %6.2f\t, %d of %d\t, %d\t, %6.2f\t, %d\t,  %6.4f\t, %s\t, %s%s, %s %s %s %s %s"
              );
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar7.Data = local_128.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_108,(wchar_t *)FVar7.Data);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if ((bVar4) &&
       (bVar4 = false, local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (uVar1 != 0) {
      ::FString::ConcatFC(&local_150,&local_108,L"\n");
      iVar8 = local_150.Data.ArrayNum + -1;
      if (local_150.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_150.Data.AllocatorInstance.Data,iVar8);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = pFVar3->LessRecentElement;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(__return_storage_ptr__,L"Cache Miss Log:\n",0x10);
  pFVar6 = FlushCacheMissLog(this,&local_118);
  iVar2 = (pFVar6->Data).ArrayNum;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar8);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CacheMutationCriticalSection);
  return __return_storage_ptr__;
}

// DebugVisualDisplay @ 14769edf0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTuple<int,int> __thiscall
FAudioChunkCache::DebugVisualDisplay
          (FAudioChunkCache *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,
          int param_5,TVector<double> *param_6,TRotator<double> *param_7)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  ESoundWaveLoadingBehavior EVar1;
  int iVar2;
  FCacheElement *pFVar3;
  FCanvas *this_00;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  FLinearColor *pFVar11;
  int iVar12;
  int iVar13;
  undefined4 in_stack_0000002c;
  FLinearColor_u_0 local_a0 [6];
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  dVar10 = __real_4008000000000000;
  dVar9 = __real_4014000000000000;
  fVar8 = __real_40a00000;
  fVar7 = __real_40400000;
  this_00 = (FCanvas *)CONCAT44(in_stack_0000002c,param_4);
  pFVar3 = this->MostRecentElement;
  iVar12 = (int)((float)((this_00->ParentSize).field0_0x0._s_0.X + param_5 * -2) * __real_3f000000);
  iVar6 = 0;
  iVar13 = (int)param_6;
  while (pFVar3 != (FCacheElement *)0x0) {
    iVar2 = (pFVar3->NumConsumers).Counter;
    EVar1 = (pFVar3->DebugInfo).LoadingBehavior;
    if ((iVar2 < 2) && ((iVar2 == 0 || ((pFVar3->DebugInfo).LoadingBehavior == RetainOnLoad)))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((pFVar3->DebugInfo).bWasCacheMiss == false) || (EVar1 == LoadOnDemand)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    local_a0[0] = ColorTrimmed.field0_0x0;
    if ((pFVar3->ChunkDataSize != 0) &&
       (local_a0[0] = ColorLoadInProgress.field0_0x0, pFVar3->bIsLoaded != (FThreadSafeBool)0x0)) {
      if (EVar1 == RetainOnLoad) {
        pFVar11 = &ColorRetained;
        if (bVar4) {
          pFVar11 = &ColorRetainedAndPlaying;
        }
        local_a0[0] = pFVar11->field0_0x0;
      }
      else if (EVar1 == PrimeOnLoad) {
        pFVar11 = &ColorPrimed;
        if (bVar4) {
          pFVar11 = &ColorPrimedAndPlaying;
        }
        local_a0[0] = pFVar11->field0_0x0;
      }
      else {
        local_a0[0] = FLinearColor::Gray.field0_0x0;
        if (EVar1 == LoadOnDemand) {
          pFVar11 = &ColorLOD;
          if (bVar4) {
            pFVar11 = &ColorLODAndPlaying;
          }
          local_a0[0] = pFVar11->field0_0x0;
        }
      }
    }
    if (bVar5) {
      FCanvas::DrawTile(this_00,(double)(iVar6 + param_5),(double)iVar13,dVar9,dVar9,0.0,0.0,fVar8,
                        fVar8,&ColorCacheMiss,(FTexture *)0x0,true);
    }
    FCanvas::DrawTile(this_00,(double)(param_5 + 1 + iVar6),(double)(iVar13 + 1),dVar10,dVar10,0.0,
                      0.0,fVar7,fVar7,(FLinearColor *)&local_a0[0]._s_0,(FTexture *)0x0,true);
    iVar2 = iVar6 + 5;
    if (iVar12 <= iVar2) {
      iVar13 = iVar13 + 7;
    }
    pFVar3 = pFVar3->LessRecentElement;
    iVar6 = 0;
    if (iVar2 < iVar12) {
      iVar6 = iVar2;
    }
  }
  *(int *)((longlong)&param_1->_padding_ + 4) = iVar13 - (int)param_6;
  *(undefined4 *)&param_1->_padding_ = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (TTuple<int,int>)param_1;
}

// DoesKeyContainValidChunkIndex @ 1476a16a0

bool __cdecl
FAudioChunkCache::DoesKeyContainValidChunkIndex(FChunkKey *param_1,FSoundWaveData *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1->ChunkIndex != 0xffffffff) {
    uVar1 = param_1->ChunkIndex;
    uVar2 = FSoundWaveData::GetNumChunks(param_2);
    if (uVar1 < uVar2) {
      return true;
    }
  }
  return false;
}

// EvictLeastRecentChunk @ 1476a6660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCacheElement * __thiscall
FAudioChunkCache::EvictLeastRecentChunk(FAudioChunkCache *this,bool param_1)

{
  FBulkDataBatchRequest *pFVar1;
  FBulkDataBatchRequest FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FCacheElement *pFVar7;
  wchar_t *pwVar8;
  FCacheElement *pFVar9;
  undefined1 auStack_528 [32];
  wchar_t *local_508;
  FName local_4f0;
  FBulkDataBatchRequest local_4e8 [2];
  TStringBuilderBase<wchar_t> local_4d8;
  wchar_t local_4b8 [40];
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [40];
  TStringBuilderBase<wchar_t> local_3f8;
  wchar_t local_3d8 [40];
  TStringBuilderBase<wchar_t> local_388;
  wchar_t local_368 [128];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_528;
  pFVar7 = this->LeastRecentElement;
  if (pFVar7 == (FCacheElement *)0x0) {
LAB_1476a6a91:
    pFVar7 = (FCacheElement *)0x0;
  }
  else {
    if (((pFVar7->NumConsumers).Counter < 1) && (*(int *)&(pFVar7->bIsLoaded).field_0x0 != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((*(int *)&(pFVar7->bIsLoaded).field_0x0 == 0) && ((pFVar7->NumConsumers).Counter < 1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar5) {
      if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar7->bWantsExtraLogging != false)) {
        local_4d8.Base = local_4b8;
        local_4d8.CurPos = local_4b8;
        local_4d8.bIsDynamic = false;
        local_4d8.bIsExternal = false;
        local_4d8.End = (wchar_t *)&local_468;
        FGuid::AppendString(&(pFVar7->Key).ObjectKey,&local_4d8,DigitsWithHyphensLower);
        if (local_4d8.End < (TStringBuilderBase<wchar_t> *)(local_4d8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_4d8,1);
        }
        pwVar8 = local_4d8.Base;
        *local_4d8.CurPos = L'\0';
        local_388.Base = local_368;
        local_388.CurPos = local_368;
        local_388.End = (wchar_t *)&local_268;
        local_388.bIsDynamic = false;
        local_388.bIsExternal = false;
        ::FName::AppendString((FName *)pFVar7,&local_388);
        if (local_388.End < (TStringBuilderBase<wchar_t> *)(local_388.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_388,1);
        }
        *local_388.CurPos = L'\0';
        local_508 = pwVar8;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_388);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4d8);
      }
      if (pFVar7->MoreRecentElement == (FCacheElement *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheElement->MoreRecentElement != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                           ,0x6c2,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FCacheElement *)(*pcVar3)();
          return pFVar7;
        }
      }
      if (pFVar7->LessRecentElement != (FCacheElement *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheElement->LessRecentElement == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                           ,0x6c3,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FCacheElement *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar9 = pFVar7->MoreRecentElement;
      if (pFVar9 == (FCacheElement *)0x0) {
        iVar6 = 0x6c6;
LAB_1476a69b8:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewLeastRecentElement",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                           ,iVar6,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FCacheElement *)(*pcVar3)();
          return pFVar7;
        }
      }
    }
    else {
      if ((!param_1) || (!bVar4)) {
        if ((this->MostRecentElement == (FCacheElement *)0x0) ||
           (this->MostRecentElement->LessRecentElement == (FCacheElement *)0x0)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MostRecentElement && MostRecentElement->LessRecentElement",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                             ,0x6d7,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FCacheElement *)(*pcVar3)();
            return pFVar7;
          }
        }
        do {
          if (pFVar7 == this->MostRecentElement->LessRecentElement) break;
          if (((pFVar7->NumConsumers).Counter < 1) && (pFVar7->bIsLoaded != (FThreadSafeBool)0x0)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((pFVar7->bIsLoaded == (FThreadSafeBool)0x0) && ((pFVar7->NumConsumers).Counter < 1)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (bVar5) {
            if (pFVar7->MoreRecentElement != (FCacheElement *)0x0) {
              pFVar7->MoreRecentElement->LessRecentElement = pFVar7->LessRecentElement;
            }
            if (pFVar7->LessRecentElement == (FCacheElement *)0x0) {
              iVar6 = 0x6ec;
LAB_1476a6b37:
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CacheElement->LessRecentElement",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                                 ,iVar6,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FCacheElement *)(*pcVar3)();
                return pFVar7;
              }
            }
LAB_1476a6b57:
            pFVar7->LessRecentElement->MoreRecentElement = pFVar7->MoreRecentElement;
            if ((3 < (byte)LogAudioStreamCaching._0_1_) && (pFVar7->bWantsExtraLogging != false)) {
              local_468.Base = local_448;
              local_468.bIsDynamic = false;
              local_468.bIsExternal = false;
              local_468.CurPos = local_448;
              local_468.End = (wchar_t *)&local_3f8;
              FGuid::AppendString(&(pFVar7->Key).ObjectKey,&local_468,DigitsWithHyphensLower);
              if (local_468.End < (TStringBuilderBase<wchar_t> *)(local_468.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_468,1);
              }
              pwVar8 = local_468.Base;
              *local_468.CurPos = L'\0';
              local_268.Base = local_248;
              local_268.CurPos = local_248;
              local_268.End = (wchar_t *)&local_148;
              local_268.bIsDynamic = false;
              local_268.bIsExternal = false;
              ::FName::AppendString((FName *)pFVar7,&local_268);
              if (local_268.End < (TStringBuilderBase<wchar_t> *)(local_268.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_268,1);
              }
              *local_268.CurPos = L'\0';
              local_508 = pwVar8;
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
            }
            goto LAB_1476a6c79;
          }
          if ((param_1) && (bVar4)) {
            pFVar1 = &pFVar7->Read;
            if (pFVar7->Read != (FBulkDataBatchRequest)0x0) {
              iVar6 = (**(code **)(*(longlong *)pFVar7->Read + 0x20))();
              if (iVar6 == 1) {
                if (*pFVar1 != (FBulkDataBatchRequest)0x0) {
                  (**(code **)(*(longlong *)*pFVar1 + 0x28))();
                }
                if (pFVar1 != local_4e8) {
                  FVar2 = *pFVar1;
                  *pFVar1 = (FBulkDataBatchRequest)0x0;
                  if (FVar2 != (FBulkDataBatchRequest)0x0) {
                    (**(code **)(*(longlong *)FVar2 + 0x10))();
                  }
                }
              }
            }
            if (pFVar7->MoreRecentElement != (FCacheElement *)0x0) {
              pFVar7->MoreRecentElement->LessRecentElement = pFVar7->LessRecentElement;
            }
            if (pFVar7->LessRecentElement == (FCacheElement *)0x0) {
              iVar6 = 0x6fb;
              goto LAB_1476a6b37;
            }
            goto LAB_1476a6b57;
          }
          pFVar7 = pFVar7->MoreRecentElement;
        } while (pFVar7 != (FCacheElement *)0x0);
        if (2 < (byte)LogAudioStreamCaching._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Cache_blown__Pl_15173ecb0,
                     (FLogCategoryBase *)&LogAudioStreamCaching);
        }
        goto LAB_1476a6a91;
      }
      if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar7->bWantsExtraLogging != false)) {
        local_3f8.Base = local_3d8;
        local_3f8.bIsDynamic = false;
        local_3f8.bIsExternal = false;
        local_3f8.CurPos = local_3d8;
        local_3f8.End = (wchar_t *)&local_388;
        FGuid::AppendString(&(pFVar7->Key).ObjectKey,&local_3f8,DigitsWithHyphensLower);
        pwVar8 = TStringBuilderBase<wchar_t>::operator*(&local_3f8);
        local_148.bIsDynamic = false;
        local_148.bIsExternal = false;
        local_148.Base = local_128;
        local_148.CurPos = local_128;
        local_148.End = (wchar_t *)local_28;
        ::FName::AppendString((FName *)pFVar7,&local_148);
        TStringBuilderBase<wchar_t>::operator*(&local_148);
        local_508 = pwVar8;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3f8);
      }
      pFVar1 = &pFVar7->Read;
      if (pFVar7->Read != (FBulkDataBatchRequest)0x0) {
        iVar6 = (**(code **)(*(longlong *)pFVar7->Read + 0x20))();
        if (iVar6 == 1) {
          if (*pFVar1 != (FBulkDataBatchRequest)0x0) {
            (**(code **)(*(longlong *)*pFVar1 + 0x28))();
          }
          if ((FName *)pFVar1 != &local_4f0) {
            FVar2 = *pFVar1;
            *pFVar1 = (FBulkDataBatchRequest)0x0;
            if (FVar2 != (FBulkDataBatchRequest)0x0) {
              (**(code **)(*(longlong *)FVar2 + 0x10))();
            }
          }
        }
      }
      pFVar9 = pFVar7->MoreRecentElement;
      if (pFVar9 == (FCacheElement *)0x0) {
        iVar6 = 0x6d0;
        goto LAB_1476a69b8;
      }
    }
    this->LeastRecentElement = pFVar9;
LAB_1476a6c79:
    (pFVar7->DebugInfo).Format.ComparisonIndex = 0;
    (pFVar7->DebugInfo).Format.Number = 0;
    (pFVar7->DebugInfo).TimeLoadEndedCycles = 0;
    (pFVar7->DebugInfo).NumTotalChunks = 0;
    (pFVar7->DebugInfo).NumTimesTouched = 0;
    (pFVar7->DebugInfo).TimeLoadStartedCycles = 0;
    (pFVar7->DebugInfo).TimeToLoadMs = 0.0;
    (pFVar7->DebugInfo).AverageLocationInCacheWhenNeeded = 0.0;
    (pFVar7->DebugInfo).LoadingBehavior = Uninitialized;
    (pFVar7->DebugInfo).bWasCacheMiss = false;
    (pFVar7->DebugInfo).bWasLoadedFromInlineChunk = false;
    (pFVar7->DebugInfo).bWasInlinedButUnloaded = false;
    (pFVar7->DebugInfo).bWaveDestroyed = false;
  }
  return pFVar7;
}

// ExecuteOnLoadCompleteCallback @ 1476a74f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAudioChunkCache::ExecuteOnLoadCompleteCallback
          (EAudioChunkLoadResult param_1,TFunction<void___cdecl(EAudioChunkLoadResult)> *param_2,
          Type *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  EAudioChunkLoadResult local_a8 [16];
  code *local_98 [5];
  undefined8 *local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  EAudioChunkLoadResult local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*param_3 == AnyNormalThreadNormalTask) {
    local_a8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar1 = *(code **)param_2;
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    uVar2 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar2,local_a8);
  }
  else {
    local_68 = *(longlong *)param_2;
    local_40 = (longlong *)0x0;
    if (local_68 != 0) {
      puVar3 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar3)(puVar3,local_58);
    }
    local_98[0] = (code *)0x0;
    local_38 = param_1;
    puVar3 = FMemory::Malloc(0x50,0x10);
    *puVar3 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAudioChunkCache::ExecuteOnLoadCompleteCallback'::`7'::<lambda_1>,1,1>
               ::_vftable_;
    puVar3[7] = 0;
    puVar3[2] = local_68;
    local_70 = puVar3;
    if (local_68 != 0) {
      plVar4 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      (**(code **)*plVar4)();
    }
    *(EAudioChunkLoadResult *)(puVar3 + 8) = local_38;
    if (puVar3 + 2 != (longlong *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FAudioChunkCache::ExecuteOnLoadCompleteCallback'::__l7::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(*param_3,(TUniqueFunction<void___cdecl(void)> *)local_98);
    if (local_68 != 0) {
      plVar4 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar4 = local_40;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return;
}

// FindElementForKey @ 1476a8ad0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCacheElement * __thiscall
FAudioChunkCache::FindElementForKey(FAudioChunkCache *this,FChunkKey *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  FCacheElement *pFVar7;
  uint uVar8;
  FCacheElement *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FCacheElement *pFVar13;
  FString local_48;
  FString local_38;
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = GetCacheLookupIDForChunk(this,param_1);
  pFVar7 = (FCacheElement *)0x0;
  uVar8 = 0;
  if (uVar6 != 0xffffffffffffffff) {
    if (((ulonglong)(longlong)(this->CachePool).ArrayNum <= uVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheOffset < CachePool.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                           ,0x5cf,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FCacheElement *)(*pcVar3)();
      return pFVar7;
    }
    uVar10 = (uint)uVar6;
    uVar11 = ~uVar10 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar10 < (this->CachePool).ArrayNum) {
      uVar5 = uVar11;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FCacheElement *)(*pcVar3)();
      return pFVar7;
    }
    pFVar2 = (this->CachePool).AllocatorInstance.Data;
    lVar12 = (longlong)(int)uVar10 * 0xb0;
    if (((*(FName *)(pFVar2 + lVar12) == param_1->SoundWaveName) &&
        (((*(uint *)(pFVar2 + lVar12 + 0x14) == (param_1->ObjectKey).D &&
          *(uint *)(pFVar2 + lVar12 + 0x10) == (param_1->ObjectKey).C) &&
         *(uint *)(pFVar2 + lVar12 + 0xc) == (param_1->ObjectKey).B) &&
         *(uint *)(pFVar2 + lVar12 + 8) == (param_1->ObjectKey).A)) &&
       (*(uint *)(pFVar2 + lVar12 + 0x18) == param_1->ChunkIndex)) {
      if ((int)uVar10 < (this->CachePool).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FCacheElement *)(*pcVar3)();
        return pFVar7;
      }
      pFVar9 = (FCacheElement *)((this->CachePool).AllocatorInstance.Data + lVar12);
      goto LAB_1476a8efa;
    }
    if (5 < (byte)LogAudioStreamCaching._0_1_) {
      uVar5 = uVar8;
      if ((int)uVar10 < (this->CachePool).ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FCacheElement *)(*pcVar3)();
        return pFVar7;
      }
      ::FName::ToString((FName *)((this->CachePool).AllocatorInstance.Data + lVar12),&local_38);
      ::FName::ToString(&param_1->SoundWaveName,&local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar9 = pFVar7;
  if (EnableExhaustiveCacheSearchesCVar != 0) {
    if (SearchUsingChunkArrayCVar == 0) {
      pFVar9 = this->MostRecentElement;
      if (pFVar9 != (FCacheElement *)0x0) {
        do {
          if (((param_1->SoundWaveName == (pFVar9->Key).SoundWaveName) &&
              ((((pFVar9->Key).ObjectKey.C == (param_1->ObjectKey).C &&
                (pFVar9->Key).ObjectKey.D == (param_1->ObjectKey).D) &&
               (pFVar9->Key).ObjectKey.B == (param_1->ObjectKey).B) &&
               (pFVar9->Key).ObjectKey.A == (param_1->ObjectKey).A)) &&
             (param_1->ChunkIndex == (pFVar9->Key).ChunkIndex)) {
            fVar1 = (pFVar9->DebugInfo).AverageLocationInCacheWhenNeeded;
            (pFVar9->DebugInfo).AverageLocationInCacheWhenNeeded =
                 ((float)(int)pFVar7 - fVar1) / (float)((pFVar9->DebugInfo).NumTimesTouched + 1) +
                 fVar1;
            if (3 < (byte)LogAudioStreamCaching._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
            }
            goto LAB_1476a8efa;
          }
          pFVar9 = pFVar9->LessRecentElement;
          uVar8 = (int)pFVar7 + 1;
          pFVar7 = (FCacheElement *)(ulonglong)uVar8;
          if (pFVar9 == (FCacheElement *)0x0) goto LAB_1476a8efa;
        } while ((int)uVar8 < this->ChunksInUse);
        pFVar9 = (FCacheElement *)0x0;
        if (2 < (byte)LogAudioStreamCaching._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
        }
      }
    }
    else {
      pFVar13 = pFVar7;
      if (0 < this->ChunksInUse) {
        do {
          uVar10 = (uint)pFVar7;
          uVar5 = uVar8;
          if ((int)uVar10 < (this->CachePool).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FCacheElement *)(*pcVar3)();
            return pFVar7;
          }
          pFVar2 = (this->CachePool).AllocatorInstance.Data;
          if (((param_1->SoundWaveName ==
                *(FName *)(pFVar2 + (longlong)&(pFVar13->Key).SoundWaveName)) &&
              (((*(uint *)(pFVar2 + 0x14 + (longlong)&(pFVar13->Key).SoundWaveName) ==
                 (param_1->ObjectKey).D &&
                *(uint *)(pFVar2 + 0x10 + (longlong)&(pFVar13->Key).SoundWaveName) ==
                (param_1->ObjectKey).C) &&
               *(uint *)(pFVar2 + 0xc + (longlong)&(pFVar13->Key).SoundWaveName) ==
               (param_1->ObjectKey).B) &&
               *(uint *)(pFVar2 + 8 + (longlong)&(pFVar13->Key).SoundWaveName) ==
               (param_1->ObjectKey).A)) &&
             (param_1->ChunkIndex ==
              *(uint *)(pFVar2 + 0x18 + (longlong)&(pFVar13->Key).SoundWaveName))) {
            if (3 < (byte)LogAudioStreamCaching._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
            }
            if ((int)uVar10 < (this->CachePool).ArrayNum) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar7 = (FCacheElement *)(*pcVar3)();
              return pFVar7;
            }
            pFVar9 = (FCacheElement *)
                     ((this->CachePool).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xb0);
            break;
          }
          pFVar7 = (FCacheElement *)(ulonglong)(uVar10 + 1);
          pFVar13 = pFVar13 + 1;
        } while ((int)(uVar10 + 1) < this->ChunksInUse);
      }
    }
  }
LAB_1476a8efa:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar9;
}

// FlushCacheMissLog @ 1476a9870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FString * __thiscall
FAudioChunkCache::FlushCacheMissLog(FAudioChunkCache *this,FString *__return_storage_ptr__)

{
  FName *pFVar1;
  TQueue<FAudioChunkCache::FCacheMissInfo,1> *pTVar2;
  TNode *pTVar3;
  code *pcVar4;
  FName FVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FString *pFVar10;
  ulonglong uVar11;
  TNode *pTVar12;
  byte bVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar17;
  FMissedChunk *pFVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 auStack_248 [32];
  FMissedChunk *local_228;
  FMissedChunk *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined1 local_1f8;
  FIdentityFunctor local_1f7 [7];
  ForAnyElementType local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  undefined1 local_1e0 [8];
  FName local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  FString local_1c0;
  FString local_1b0;
  int local_1a0 [2];
  FMissedChunk local_198;
  FName local_188;
  int local_180;
  FString *local_178;
  FString local_168;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  FName *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  pFVar20 = (FScriptContainerElement *)0x0;
  local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.Data.ArrayNum = 0;
  local_1b0.Data.ArrayMax = 0;
  local_178 = __return_storage_ptr__;
  ::FString::AppendChars(&local_1b0,L"All Cache Misses:\nSoundWave:\t, ChunkIndex\n",0x2a);
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  pFVar9 = ::operator_new(0x20);
  pFVar17 = pFVar20;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)(pFVar9 + 8) = 0;
    *(undefined8 *)(pFVar9 + 0x10) = 0;
    *(undefined8 *)(pFVar9 + 0x18) = 0;
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)(pFVar9 + 8) = 0;
    pFVar17 = pFVar9;
  }
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  local_168.Data.AllocatorInstance.Data = pFVar17;
  while( true ) {
    uVar8 = local_70;
    pTVar2 = (this->CacheMissQueue).Obj.Ptr;
    pTVar12 = pTVar2->Tail->NextNode;
    if (pTVar12 == (TNode *)0x0) break;
    local_1d8 = (pTVar12->Item).SoundWaveName;
    uStack_1d0._0_4_ = (pTVar12->Item).ChunkIndex;
    uStack_1d0._4_4_ = (pTVar12->Item).TotalChunksInWave;
    uStack_110 = 0;
    local_118 = 0;
    local_1c8 = *(undefined4 *)&(pTVar12->Item).bBlockedForLoad;
    pTVar3 = pTVar2->Tail;
    pTVar2->Tail = pTVar12;
    (pTVar12->Item).SoundWaveName.ComparisonIndex = 0;
    (pTVar12->Item).SoundWaveName.Number = 0;
    (pTVar12->Item).ChunkIndex = 0;
    (pTVar12->Item).TotalChunksInWave = 0;
    *(undefined4 *)&(pTVar12->Item).bBlockedForLoad = 0;
    local_108 = 0;
    ::operator_delete(pTVar3,0x20);
    pFVar10 = ::FName::ToString(&local_1d8,&local_b8);
    iVar16 = (pFVar10->Data).ArrayNum;
    iVar19 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar19 = 0;
    }
    ::FString::AppendChars(&local_1b0,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar19);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(&local_1b0,L"\t, ",3);
    ::FString::AppendInt(&local_1b0,(int)uStack_1d0);
    ::FString::AppendChars(&local_1b0,L"\n",1);
    FVar5 = local_1d8;
    iVar16 = (int)uStack_1d0;
    local_188 = local_1d8;
    local_180 = (int)uStack_1d0;
    uVar8 = ::GetTypeHash(local_1d8.ComparisonIndex);
    uVar8 = uVar8 + FVar5.Number;
    uVar8 = uVar8 * 0x40 + -0x61c88647 + iVar16 + (uVar8 >> 2) ^ uVar8;
    if (local_98._8_4_ != local_64) {
      FVar15 = (ForElementType<FSetElementId>)local_60;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = local_58;
      }
      iVar16 = *(int *)((longlong)FVar15 + (ulonglong)(local_50 - 1U & uVar8) * 4);
      while (iVar16 != -1) {
        lVar14 = local_98._0_8_ + (longlong)iVar16 * 0x18;
        if ((*(FName *)(local_98._0_8_ + (longlong)iVar16 * 0x18) == local_188) &&
           (*(int *)(lVar14 + 8) == local_180)) {
          if ((iVar16 != -1) && (lVar14 != 0)) goto LAB_1476a9af5;
          break;
        }
        iVar16 = *(int *)(lVar14 + 0x10);
      }
    }
    local_120 = &local_188;
    local_228 = (FMissedChunk *)0x0;
    TSet<TTuple<FAudioChunkCache::FCacheMissEntry,int>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FCacheMissEntry,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FAudioChunkCache::FCacheMissEntry_const_&>_>
              ((TSet<TTuple<FAudioChunkCache::FCacheMissEntry,int>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FCacheMissEntry,int,0>,FDefaultSetAllocator>
                *)local_98,(uint)local_1a0,
               (TKeyInitializer<FAudioChunkCache::FCacheMissEntry_const_&> *)(ulonglong)uVar8,
               (bool *)&local_120);
    lVar14 = local_98._0_8_ + (longlong)local_1a0[0] * 0x18;
LAB_1476a9af5:
    *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
    if ((KeepCacheMissBufferOnFlushCVar != 0) &&
       (pFVar9 = ::operator_new(0x20), pFVar9 != (FScriptContainerElement *)0x0)) {
      *(undefined8 *)pFVar9 = 0;
      *(FName *)(pFVar9 + 8) = local_1d8;
      *(undefined8 *)(pFVar9 + 0x10) = uStack_1d0;
      *(undefined4 *)(pFVar9 + 0x18) = local_1c8;
      *(FScriptContainerElement **)local_168.Data.AllocatorInstance.Data = pFVar9;
      local_168.Data.AllocatorInstance.Data = pFVar9;
    }
  }
  uStack_150 = 0;
  uStack_14c = 1;
  local_1f0.Data = (FScriptContainerElement *)0x0;
  local_1e8 = 0;
  uStack_1e4 = 0;
  uStack_13c = uStack_150;
  local_138 = uStack_150;
  if (local_70 != 0) {
    puVar21 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar21 = local_78;
    }
    uVar22 = *puVar21;
    pFVar9 = pFVar20;
    local_138 = 0;
    uStack_150 = 0;
    while (uVar22 == 0) {
      iVar16 = (int)pFVar20;
      local_138 = (int)pFVar9 + 0x20;
      pFVar9 = (FScriptContainerElement *)(ulonglong)local_138;
      uStack_150 = iVar16 + 1;
      pFVar20 = (FScriptContainerElement *)(ulonglong)uStack_150;
      uStack_13c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_150)
      goto LAB_1476a9bd0;
      uVar22 = puVar21[(longlong)iVar16 + 1];
    }
    uStack_14c = -uVar22 & uVar22;
    uVar11 = (ulonglong)uStack_14c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_128 = (int)lVar14;
    uStack_13c = (local_138 - 1) + local_128;
    if ((int)local_70 < (int)uStack_13c) {
      uStack_13c = local_70;
    }
  }
LAB_1476a9bd0:
  local_158 = (longlong *)local_98;
  local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar22 = local_70 & 0xffffffe0;
  iStack_130 = local_98._8_4_ - local_64;
  uStack_140 = 0xffffffff;
  TStack_f8.CurrentBitIndex = uStack_13c;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_14c,uStack_150);
  iVar16 = (int)local_70 >> 5;
  TStack_f8._28_4_ = uStack_13c;
  TStack_f8.BaseBitIndex = local_138;
  uStack_d8 = CONCAT44(uStack_12c,iStack_130);
  bVar13 = (byte)local_70;
  uStack_134 = uStack_13c;
  local_100 = local_158;
  TStack_f8.Array = local_148;
  if (((int)local_70 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar4)();
    return pFVar10;
  }
  if (uVar8 != local_70) {
    puVar21 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar21 = local_78;
    }
    uVar8 = -1 << (bVar13 & 0x1f) & puVar21[iVar16];
    while (uVar8 == 0) {
      lVar14 = (longlong)iVar16;
      uVar22 = uVar22 + 0x20;
      iVar16 = iVar16 + 1;
      uVar8 = local_70;
      if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar16)
      goto LAB_1476a9ce1;
      uVar8 = puVar21[lVar14 + 1];
    }
    uVar11 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_124 = (int)lVar14;
    uVar8 = local_124 + -1 + uVar22;
    if ((int)local_70 < (int)uVar8) {
      uVar8 = local_70;
    }
  }
LAB_1476a9ce1:
  while( true ) {
    plVar6 = local_100;
    if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
      local_1f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FCacheMissEntry,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    if (((TStack_f8.CurrentBitIndex == uVar8) &&
        (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar6 == (longlong *)local_98)) break;
    pFVar1 = (FName *)(*plVar6 + (longlong)TStack_f8.CurrentBitIndex * 0x18);
    local_198.SoundWaveName = *pFVar1;
    local_198.ChunkIndex = pFVar1[1].ComparisonIndex.Value;
    local_198.MissCount = pFVar1[1].Number;
    if ((local_1f0.Data <= &local_198) &&
       (&local_198 < (FMissedChunk *)(local_1f0.Data + (longlong)(int)uStack_1e4 * 0x10))) {
      local_210 = (longlong)(int)local_1e8;
      local_208 = 0x10;
      local_228 = &local_198;
      local_220 = (FMissedChunk *)local_1f0.Data;
      local_218 = (longlong)(int)uStack_1e4;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FString *)(*pcVar4)();
        return pFVar10;
      }
    }
    if (local_1e8 == uStack_1e4) {
      local_1e8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&local_1f0,(int *)&uStack_1e4);
    }
    lVar14 = (longlong)(int)local_1e8;
    local_1e8 = local_1e8 + 1;
    *(FName *)&local_1f0.Data[lVar14 * 0x10].field_0x0 = local_198.SoundWaveName;
    *(ulonglong *)(local_1f0.Data + lVar14 * 0x10 + 8) =
         CONCAT44(local_198.MissCount,local_198.ChunkIndex);
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  }
  AlgoImpl::
  IntroSortInternal<_FAudioChunkCache::FlushCacheMissLog_::__l2::FMissedChunk,int,FIdentityFunctor,TDereferenceWrapper<_FAudioChunkCache::FlushCacheMissLog_::__l2::FMissedChunk,_FAudioChunkCache::FlushCacheMissLog_::__l2::FCacheMissSortPredicate>_>
            ((FMissedChunk *)local_1f0.Data,local_1e8,local_1f7[0],
             (FCacheMissSortPredicate *)local_1f7);
  ::FString::FString(&local_1c0,L"Most Missed Chunks:\n");
  ::FString::AppendChars(&local_1c0,L"Name:\t, Index:\t, Miss Count:\n",0x1d);
  uVar8 = local_1e8;
  uVar11 = (ulonglong)(int)local_1e8;
  pFVar18 = (FMissedChunk *)(local_1f0.Data + uVar11 * 0x10);
  this_00.Data = local_1f0.Data;
  while( true ) {
    if ((uint)uVar11 != uVar8) {
      `TCheckedPointerIterator<`FAudioChunkCache::FlushCacheMissLog'::__l2::FMissedChunk,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_1e0);
    }
    if ((FMissedChunk *)this_00.Data == pFVar18) break;
    pFVar10 = ::FName::ToString((FName *)this_00.Data,&local_a8);
    iVar16 = (pFVar10->Data).ArrayNum;
    iVar19 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar19 = 0;
    }
    ::FString::AppendChars(&local_1c0,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar19);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(&local_1c0,L"\t, ",3);
    ::FString::AppendInt(&local_1c0,((FMissedChunk *)this_00.Data)->ChunkIndex);
    ::FString::AppendChars(&local_1c0,L"\t, ",3);
    ::FString::AppendInt(&local_1c0,((FMissedChunk *)this_00.Data)->MissCount);
    ::FString::AppendChars(&local_1c0,L"\n",1);
    uVar11 = (ulonglong)local_1e8;
    this_00.Data = this_00.Data + 0x10;
  }
  if (KeepCacheMissBufferOnFlushCVar != 0) {
    while (pFVar20 = *(FScriptContainerElement **)pFVar17, pFVar20 != (FScriptContainerElement *)0x0
          ) {
      local_1d8 = *(FName *)(pFVar20 + 8);
      uStack_1d0 = *(undefined8 *)(pFVar20 + 0x10);
      uStack_c8 = 0;
      local_d0 = 0;
      local_1c8 = *(undefined4 *)(pFVar20 + 0x18);
      *(undefined8 *)(pFVar20 + 8) = 0;
      *(undefined8 *)(pFVar20 + 0x10) = 0;
      *(undefined4 *)(pFVar20 + 0x18) = 0;
      ::operator_delete(pFVar17,0x20);
      pTVar2 = (this->CacheMissQueue).Obj.Ptr;
      pTVar12 = ::operator_new(0x20);
      pFVar17 = pFVar20;
      if (pTVar12 != (TNode *)0x0) {
        pTVar12->NextNode = (TNode *)0x0;
        (pTVar12->Item).SoundWaveName = local_1d8;
        (pTVar12->Item).ChunkIndex = (int)uStack_1d0;
        (pTVar12->Item).TotalChunksInWave = uStack_1d0._4_4_;
        *(undefined4 *)&(pTVar12->Item).bBlockedForLoad = local_1c8;
        pTVar3 = pTVar2->Head;
        pTVar2->Head = pTVar12;
        pTVar3->NextNode = pTVar12;
      }
    }
  }
  ::FString::ConcatFC(&local_168,&local_1c0,L"\n");
  pFVar10 = local_178;
  ::FString::ConcatFF(local_178,&local_168,&local_1b0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if ((FMissedChunk *)local_1f0.Data != (FMissedChunk *)0x0) {
    FMemory::Free(local_1f0.Data);
  }
  while (pFVar17 != (FScriptContainerElement *)0x0) {
    pFVar20 = *(FScriptContainerElement **)pFVar17;
    ::operator_delete(pFVar17,0x20);
    pFVar17 = pFVar20;
    pFVar10 = local_178;
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FCacheMissEntry,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FCacheMissEntry,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAudioChunkCache::FCacheMissEntry,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  return pFVar10;
}

// GetAsyncPriorityForChunk @ 1476adc00

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

EAsyncIOPriorityAndFlags __thiscall
FAudioChunkCache::GetAsyncPriorityForChunk(FAudioChunkCache *this,FChunkKey *param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = PlaybackRequestPriorityCVar;
  if (!param_2) {
    iVar1 = ReadRequestPriorityCVar;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return AIOP_Normal;
    }
    if (iVar1 == 2) {
      return AIOP_BelowNormal;
    }
    if (iVar1 == 3) {
      return AIOP_Low;
    }
    if (iVar1 == 4) {
      return AIOP_MIN;
    }
  }
  return AIOP_High;
}

// GetCacheLookupIDForChunk @ 1476aec00

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

ulong64 __thiscall
FAudioChunkCache::GetCacheLookupIDForChunk(FAudioChunkCache *this,FChunkKey *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulong64 *puVar4;
  ulong64 uVar5;
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FAudioChunkCache::FChunkKey>
                    ((TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
                      *)&this->CacheLookupIdMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)&this->CacheLookupIdMap;
    puVar4 = (ulong64 *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      puVar4 = (ulong64 *)0x0;
    }
    if (puVar4 != (ulong64 *)0x0) {
      uVar5 = *puVar4;
      goto LAB_1476aec71;
    }
  }
  uVar5 = 0xffffffffffffffff;
LAB_1476aec71:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar5;
}

// GetChunk @ 1476af660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<unsigned_char,int> * __thiscall
FAudioChunkCache::GetChunk
          (FAudioChunkCache *this,TArrayView<unsigned_char,int> *__return_storage_ptr__,
          FChunkKey *param_1,TSharedPtr<FSoundWaveData,1> *param_2,bool param_3,bool param_4,
          ulong64 *param_5)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  float fVar1;
  uint uVar2;
  TAtomic<unsigned___int64> *pTVar3;
  TQueue<FAudioChunkCache::FCacheMissInfo,1> *pTVar4;
  TNode *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  FCacheElement *pFVar11;
  TArrayView<unsigned_char,int> *pTVar12;
  FSoundWaveData *pFVar13;
  TNode *pTVar14;
  float fVar15;
  undefined1 auStackY_438 [32];
  undefined1 local_404 [4];
  FLLMScope local_400 [2];
  FMemScope local_3f8;
  FString local_3f0;
  LARGE_INTEGER local_3e0;
  FString local_3d8;
  uint local_3c8;
  uchar *local_3c0;
  code *local_3b8 [2];
  undefined **local_3a8;
  code *local_3a0;
  undefined8 local_390;
  TStringBuilderBase<wchar_t> local_388;
  wchar_t local_368 [40];
  TStringBuilderBase<wchar_t> local_318;
  wchar_t local_2f8 [40];
  TStringBuilderBase<wchar_t> local_2a8;
  wchar_t local_288 [128];
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [128];
  ulonglong local_68 [5];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_438;
  lpCriticalSection = &this->CacheMutationCriticalSection;
  local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_5;
  local_3f8 = (FMemScope)param_2;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar11 = FindElementForKey(this,param_1);
  if (pFVar11 == (FCacheElement *)0x0) {
    pFVar11 = InsertChunk(this,param_1,(TSharedPtr<FSoundWaveData,1> *)local_3f8);
    if (pFVar11 == (FCacheElement *)0x0) {
      *param_5 = 0xffffffffffffffff;
      if (3 < (byte)LogAudioStreamCaching._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      }
    }
    else {
      *param_5 = pFVar11->CacheLookupID;
      if (param_3) {
        local_3f0.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)FCacheElement::GetChunk(pFVar11,param_1->ChunkIndex);
        if ((FStreamedAudioChunk *)local_3f0.Data.AllocatorInstance.Data !=
            (FStreamedAudioChunk *)0x0) {
          if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar11->bWantsExtraLogging != false)) {
            local_318.Base = local_2f8;
            local_318.bIsDynamic = false;
            local_318.bIsExternal = false;
            local_318.CurPos = local_2f8;
            local_318.End = (wchar_t *)&local_2a8;
            FGuid::AppendString(&(pFVar11->Key).ObjectKey,&local_318,DigitsWithHyphensLower);
            local_3e0 = (LARGE_INTEGER)TStringBuilderBase<wchar_t>::operator*(&local_318);
            local_188.Base = local_168;
            local_188.CurPos = local_168;
            local_188.End = (wchar_t *)local_68;
            local_188.bIsDynamic = false;
            local_188.bIsExternal = false;
            ::FName::AppendString((FName *)pFVar11,&local_188);
            if (local_188.End < local_188.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_188,1);
            }
            *local_188.CurPos = L'\0';
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_318);
          }
          uVar2 = *(uint *)(local_3f0.Data.AllocatorInstance.Data + 4);
          pFVar13 = TSharedPtr<FSoundWaveData,1>::operator->
                              ((TSharedPtr<FSoundWaveData,1> *)local_3f8);
          fVar1 = pFVar13->SampleRate;
          uVar10 = FCacheElement::GetNumChunks(pFVar11);
          fVar15 = __real_bf800000;
          if (*(uint *)(local_3f0.Data.AllocatorInstance.Data + 8) != 0xffffffff) {
            fVar15 = (float)*(uint *)(local_3f0.Data.AllocatorInstance.Data + 8) / fVar1;
          }
          (pFVar11->DebugInfo).OffsetInSeconds = fVar15;
          (pFVar11->DebugInfo).NumTotalChunks = uVar10 - 1;
          QueryPerformanceCounter(&local_3e0);
          uVar10 = pFVar11->ChunkDataSize;
          (pFVar11->DebugInfo).TimeLoadStartedCycles = (ulong64)local_3e0;
          (pFVar11->DebugInfo).TimeLoadEndedCycles = (ulong64)local_3e0;
          (pFVar11->DebugInfo).TimeToLoadMs = 0.0;
          pTVar3 = (this->MemoryCounterBytes).Obj.Ptr;
          LOCK();
          *pTVar3 = (TAtomic<unsigned___int64>)((longlong)*pTVar3 - (ulonglong)uVar10);
          UNLOCK();
          FLLMScope::FLLMScope(local_400,AudioStreamCacheCompressedData,false,None,Default,true);
          FMemScope::FMemScope(&local_3f8,AudioStreamCacheCompressedData,true);
          local_3c0 = FMemory::Realloc(pFVar11->ChunkData,(longlong)(int)uVar2,0);
          pFVar11->ChunkData = local_3c0;
          bVar9 = FStreamedAudioChunk::GetCopy
                            ((FStreamedAudioChunk *)local_3f0.Data.AllocatorInstance.Data,&local_3c0
                            );
          if (bVar9) {
            FMemScope::~FMemScope(&local_3f8);
            FLLMScope::~FLLMScope(local_400);
            pTVar3 = (this->MemoryCounterBytes).Obj.Ptr;
            LOCK();
            *pTVar3 = (TAtomic<unsigned___int64>)((longlong)*pTVar3 + (longlong)(int)uVar2);
            UNLOCK();
            uVar10 = (param_1->ObjectKey).A;
            uVar8 = (param_1->ObjectKey).B;
            (pFVar11->Key).SoundWaveName = param_1->SoundWaveName;
            (pFVar11->Key).ObjectKey.A = uVar10;
            (pFVar11->Key).ObjectKey.B = uVar8;
            uVar10 = (param_1->ObjectKey).D;
            (pFVar11->Key).ObjectKey.C = (param_1->ObjectKey).C;
            (pFVar11->Key).ObjectKey.D = uVar10;
            (pFVar11->Key).ChunkIndex = param_1->ChunkIndex;
            pFVar11->ChunkDataSize = uVar2;
            LOCK();
            pFVar11->bIsLoaded = (FThreadSafeBool)0x1;
            UNLOCK();
            if ((-1 < (pFVar11->NumConsumers).Counter) ||
               (bVar9 = `FAudioChunkCache::GetChunk'::__l116::<lambda_1>::operator()(local_404),
               bVar9)) {
              LOCK();
              (pFVar11->NumConsumers).Counter = (pFVar11->NumConsumers).Counter + 1;
              UNLOCK();
              TArrayView<unsigned_char,int>::TArrayView<unsigned_char,int><unsigned_char>
                        (__return_storage_ptr__,pFVar11->ChunkData,uVar2);
            }
            else {
              LOCK();
              (pFVar11->NumConsumers).Counter = 1;
              UNLOCK();
              TArrayView<unsigned_char,int>::TArrayView<unsigned_char,int><unsigned_char>
                        (__return_storage_ptr__,pFVar11->ChunkData,uVar2);
            }
          }
          else {
            if (2 < (byte)LogAudioStreamCaching._0_1_) {
              ::FName::ToString(&param_1->SoundWaveName,&local_3f0);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
              if ((FStreamedAudioChunk *)local_3f0.Data.AllocatorInstance.Data !=
                  (FStreamedAudioChunk *)0x0) {
                FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
              }
            }
            __return_storage_ptr__->DataPtr = (uchar *)0x0;
            __return_storage_ptr__->ArrayNum = 0;
            FMemScope::~FMemScope(&local_3f8);
            FLLMScope::~FLLMScope(local_400);
          }
          goto LAB_1476afd30;
        }
        if (1 < (byte)LogAudioStreamCaching._0_1_) {
          ::FName::ToString(&param_1->SoundWaveName,&local_3d8);
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
          if ((FName)local_3d8.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_390 = 0;
        local_3a8 = &
                    ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        local_3a0 = `FAudioChunkCache::GetChunk'[::O]::<lambda_2>::<lambda_invoker_cdecl>;
        local_3b8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<void_(__cdecl*)(enum_EAudioChunkLoadResult),void,enum_EAudioChunkLoadResult>
                       ::Call;
        KickOffAsyncLoad(this,pFVar11,param_1,
                         (TFunction<void___cdecl(EAudioChunkLoadResult)> *)local_3b8,
                         AnyNormalThreadNormalTask,param_4);
      }
      if ((this->bLogCacheMisses != false) && (!param_3)) {
        local_3d8.Data.ArrayMax = FCacheElement::GetNumChunks(pFVar11);
        local_3d8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&param_1->SoundWaveName
        ;
        pTVar4 = (this->CacheMissQueue).Obj.Ptr;
        local_3d8.Data.ArrayNum = param_1->ChunkIndex;
        local_3c8 = local_3c8 & 0xffffff00;
        pTVar14 = ::operator_new(0x20);
        if (pTVar14 != (TNode *)0x0) {
          pTVar14->NextNode = (TNode *)0x0;
          (pTVar14->Item).SoundWaveName = (FName)local_3d8.Data.AllocatorInstance.Data;
          (pTVar14->Item).ChunkIndex = local_3d8.Data.ArrayNum;
          (pTVar14->Item).TotalChunksInWave = local_3d8.Data.ArrayMax;
          *(uint *)&(pTVar14->Item).bBlockedForLoad = local_3c8;
          pTVar5 = pTVar4->Head;
          pTVar4->Head = pTVar14;
          pTVar5->NextNode = pTVar14;
        }
      }
    }
LAB_1476afd29:
    __return_storage_ptr__->DataPtr = (uchar *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar11->bWantsExtraLogging != false)) {
      local_388.Base = local_368;
      local_388.bIsDynamic = false;
      local_388.bIsExternal = false;
      local_388.CurPos = local_368;
      local_388.End = (wchar_t *)&local_318;
      FGuid::AppendString(&(pFVar11->Key).ObjectKey,&local_388,DigitsWithHyphensLower);
      if (local_388.End < (TStringBuilderBase<wchar_t> *)(local_388.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_388,1);
      }
      *local_388.CurPos = L'\0';
      local_2a8.Base = local_288;
      local_2a8.CurPos = local_288;
      local_2a8.End = (wchar_t *)&local_188;
      local_2a8.bIsDynamic = false;
      local_2a8.bIsExternal = false;
      ::FName::AppendString((FName *)pFVar11,&local_2a8);
      if (local_2a8.End < (TStringBuilderBase<wchar_t> *)(local_2a8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_2a8,1);
      }
      *local_2a8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2a8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_388);
      param_5 = (ulong64 *)local_3f0.Data.AllocatorInstance.Data;
    }
    uVar7 = *(undefined4 *)((longlong)&pFVar11->CacheLookupID + 4);
    ((FStreamedAudioChunk *)param_5)->DataSize = *(undefined4 *)&pFVar11->CacheLookupID;
    ((FStreamedAudioChunk *)param_5)->AudioDataSize = uVar7;
    TouchElement(this,pFVar11);
    if (pFVar11->bIsLoaded == (FThreadSafeBool)0x0) {
      if (!param_3) goto LAB_1476afd29;
      FCacheElement::WaitForAsyncLoadCompletion(pFVar11,false);
    }
    if (((pFVar11->NumConsumers).Counter < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundElement->NumConsumers.GetValue() >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                           ,0x3be,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TArrayView<unsigned_char,int> *)(*pcVar6)();
      return pTVar12;
    }
    LOCK();
    (pFVar11->NumConsumers).Counter = (pFVar11->NumConsumers).Counter + 1;
    UNLOCK();
    uVar2 = pFVar11->ChunkDataSize;
    __return_storage_ptr__->DataPtr = pFVar11->ChunkData;
    __return_storage_ptr__->ArrayNum = uVar2;
    if (((int)uVar2 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TArrayView<unsigned_char,int> *)(*pcVar6)();
      return pTVar12;
    }
  }
LAB_1476afd30:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// HandleStarvation @ 1476b6c80

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioChunkCache::HandleStarvation
          (FAudioChunkCache *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,uint param_3,
          uint param_4)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FSoundWaveData,1> *pTVar5;
  FCacheElement *pFVar6;
  FSoundWaveProxy *this_00;
  FName *pFVar7;
  LARGE_INTEGER local_res10;
  TSharedPtr<FSoundWaveData,1> local_98;
  FString local_88;
  FString local_78;
  FChunkKey local_68 [2];
  
  if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar5 = FSoundWaveProxy::GetSoundWaveData(param_1->Object,&local_98);
  local_68[0].SoundWaveName.ComparisonIndex.Value = 0;
  local_68[0].SoundWaveName.Number = 0;
  local_68[0].ObjectKey.A = 0;
  local_68[0].ObjectKey.B = 0;
  local_68[0].ObjectKey.C = 0;
  local_68[0].ObjectKey.D = 0;
  local_68[0].ChunkIndex = param_2;
  if (pTVar5->Object != (FSoundWaveData *)0x0) {
    local_68[0].SoundWaveName = pTVar5->Object->NameCached;
    if ((pTVar5->Object == (FSoundWaveData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = pTVar5->Object;
    local_68[0].ObjectKey.A = (pFVar1->WaveGuid).A;
    local_68[0].ObjectKey.B = (pFVar1->WaveGuid).B;
    local_68[0].ObjectKey.C = (pFVar1->WaveGuid).C;
    local_68[0].ObjectKey.D = (pFVar1->WaveGuid).D;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  pFVar6 = FindElementForKey(this,local_68);
  if (pFVar6 == (FCacheElement *)0x0) {
    if (5 < (byte)LogAudioTiming._0_1_) {
      if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = FSoundWaveProxy::GetFName(param_1->Object);
      ::FName::ToString(pFVar7,&local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (((pFVar6->Read != (FBulkDataBatchRequest)0x0) &&
           (iVar4 = (**(code **)(*(longlong *)pFVar6->Read + 0x20))(), iVar4 == 1)) &&
          (pFVar6->Priority != AIOP_CriticalPath)) {
    QueryPerformanceCounter(&local_res10);
    if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar6->bWantsExtraLogging != false)) {
      switch(pFVar6->Priority & AIOP_PRIORITY_MASK) {
      case AIOP_MIN:
        break;
      case AIOP_Low:
        break;
      case AIOP_BelowNormal:
        break;
      case AIOP_Normal:
        break;
      case AIOP_High:
        break;
      case AIOP_CriticalPath:
      }
      this_00 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
      pFVar7 = FSoundWaveProxy::GetFName(this_00);
      ::FName::ToString(pFVar7,&local_88);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    FBulkDataBatchRequest::UpdatePriority(&pFVar6->Read,AIOP_CriticalPath);
    pFVar6->Priority = AIOP_CriticalPath;
  }
  return;
}

// InsertChunk @ 1476ba0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCacheElement * __thiscall
FAudioChunkCache::InsertChunk
          (FAudioChunkCache *this,FChunkKey *param_1,TSharedPtr<FSoundWaveData,1> *param_2)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  float fVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  uint uVar8;
  FCacheElement *pFVar9;
  FCacheElement *pFVar10;
  wchar_t *pwVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FCacheElement *pFVar15;
  FSoundWaveData *pFVar16;
  FStreamedAudioChunk *pFVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  longlong local_e0;
  FString local_d8;
  TStringBuilderBase<wchar_t> local_c8;
  wchar_t local_a8 [40];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_108;
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->ChunksInUse < (this->CachePool).ArrayNum) &&
     ((ulonglong)
      ((longlong)*(this->FeatureMemoryCounterBytes).Obj.Ptr +
       (longlong)*(this->ForceInlineMemoryCounterBytes).Obj.Ptr +
      (longlong)*(this->MemoryCounterBytes).Obj.Ptr) < this->MemoryLimitBytes)) {
    uVar14 = this->ChunksInUse;
    iVar4 = (this->CachePool).ArrayNum;
    uVar13 = 0;
    if ((int)uVar14 < iVar4) {
      uVar13 = ~uVar14 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (local_e8 = (wchar_t *)(longlong)(int)uVar14, local_e0 = (longlong)iVar4,
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar15 = (FCacheElement *)(*pcVar7)();
      return pFVar15;
    }
    pFVar15 = (FCacheElement *)
              ((this->CachePool).AllocatorInstance.Data + (longlong)(int)uVar14 * 0xb0);
    pFVar15->CacheLookupID = (longlong)this->ChunksInUse;
    this->ChunksInUse = this->ChunksInUse + 1;
  }
  else {
    if (bLoggedCacheSaturated == false) {
      if (3 < (byte)LogAudioStreamCaching._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      }
      bLoggedCacheSaturated = true;
    }
    pFVar15 = EvictLeastRecentChunk(this,false);
    if (BlockForPendingLoadOnCacheOverflowCVar != 0) {
      if (pFVar15 != (FCacheElement *)0x0) goto LAB_1476ba1a5;
      if (2 < (byte)LogAudioStreamCaching._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      }
      pFVar15 = EvictLeastRecentChunk(this,true);
    }
    if (pFVar15 == (FCacheElement *)0x0) {
      if (3 < (byte)LogAudioStreamCaching._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return (FCacheElement *)0x0;
    }
  }
LAB_1476ba1a5:
  if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar15->bWantsExtraLogging != false)) {
    local_c8.Base = local_a8;
    local_c8.CurPos = local_a8;
    local_c8.bIsDynamic = false;
    local_c8.bIsExternal = false;
    local_c8.End = (wchar_t *)local_58;
    FGuid::AppendString(&param_1->ObjectKey,&local_c8,DigitsWithHyphensLower);
    if (local_c8.End < local_c8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_c8,1);
    }
    pwVar11 = local_c8.Base;
    *local_c8.CurPos = L'\0';
    pFVar16 = TSharedPtr<FSoundWaveData,1>::operator->(param_2);
    ::FName::ToString(&pFVar16->NameCached,&local_d8);
    local_e8 = pwVar11;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c8);
  }
  LOCK();
  pFVar15->bIsLoaded = (FThreadSafeBool)0x0;
  UNLOCK();
  uVar14 = (param_1->SoundWaveName).Number;
  uVar13 = (param_1->ObjectKey).A;
  uVar8 = (param_1->ObjectKey).B;
  (pFVar15->Key).SoundWaveName.ComparisonIndex.Value =
       (param_1->SoundWaveName).ComparisonIndex.Value;
  (pFVar15->Key).SoundWaveName.Number = uVar14;
  (pFVar15->Key).ObjectKey.A = uVar13;
  (pFVar15->Key).ObjectKey.B = uVar8;
  uVar14 = (param_1->ObjectKey).D;
  (pFVar15->Key).ObjectKey.C = (param_1->ObjectKey).C;
  (pFVar15->Key).ObjectKey.D = uVar14;
  (pFVar15->Key).ChunkIndex = param_1->ChunkIndex;
  (pFVar15->SoundWaveWeakPtr).Object = param_2->Object;
  pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (pFVar15->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pFVar15->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (pFVar15->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController = pTVar5;
  }
  TouchElement(this,pFVar15);
  if (param_2->Object != (FSoundWaveData *)0x0) {
    (pFVar15->DebugInfo).Format = param_2->Object->RuntimeFormat;
    if ((param_2->Object == (FSoundWaveData *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar15 = (FCacheElement *)(*pcVar7)();
      return pFVar15;
    }
    pFVar17 = FSoundWaveData::GetChunk(param_2->Object,param_1->ChunkIndex);
    if ((param_2->Object == (FSoundWaveData *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar15 = (FCacheElement *)(*pcVar7)();
      return pFVar15;
    }
    fVar3 = param_2->Object->SampleRate;
    if ((param_2->Object == (FSoundWaveData *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar15 = (FCacheElement *)(*pcVar7)();
      return pFVar15;
    }
    uVar14 = FSoundWaveData::GetNumChunks(param_2->Object);
    fVar18 = __real_bf800000;
    if (pFVar17->SeekOffsetInAudioFrames != 0xffffffff) {
      fVar18 = (float)pFVar17->SeekOffsetInAudioFrames / fVar3;
    }
    (pFVar15->DebugInfo).NumTotalChunks = uVar14 - 1;
    (pFVar15->DebugInfo).OffsetInSeconds = fVar18;
  }
  if ((this->LeastRecentElement == (FCacheElement *)0x0) && (1 < this->ChunksInUse)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CacheMutationCriticalSection);
    pFVar9 = this->MostRecentElement;
    for (pFVar10 = this->MostRecentElement->LessRecentElement; pFVar10 != (FCacheElement *)0x0;
        pFVar10 = pFVar10->LessRecentElement) {
      pFVar9 = pFVar10;
    }
    this->LeastRecentElement = pFVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CacheMutationCriticalSection);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SetCacheLookupIDForChunk(this,param_1,pFVar15->CacheLookupID);
  return pFVar15;
}

// KickOffAsyncLoad @ 1476bb3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001476bba3b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff8f8 : 0x0001476bba3f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAudioChunkCache::KickOffAsyncLoad
          (FAudioChunkCache *this,FCacheElement *param_1,FChunkKey *param_2,
          TFunction<void___cdecl(EAudioChunkLoadResult)> *param_3,Type param_4,bool param_5)

{
  FBulkDataBatchRequest *pFVar1;
  int *piVar2;
  TAtomic<unsigned___int64> *pTVar3;
  FBulkDataBatchRequest FVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uchar *puVar12;
  long64 lVar13;
  void *this_00;
  TEventRef<unsigned_int> TVar14;
  FWriteBuffer *pFVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  FStreamedAudioChunk *pFVar19;
  TBulkData<unsigned_char> *this_01;
  EAsyncIOPriorityAndFlags EVar20;
  undefined1 auStackY_898 [32];
  FAudioChunkCache *local_850;
  FLLMScope local_848 [2];
  FStreamedAudioChunk *local_840;
  undefined8 local_838;
  FBulkData *local_830;
  FIoBuffer local_828;
  TFunction<void___cdecl(EAudioChunkLoadResult)> *local_820;
  FBulkDataBuffer<unsigned_char> local_818;
  FMemScope local_808;
  LARGE_INTEGER local_800;
  LARGE_INTEGER local_7f8;
  FBuilder local_7f0;
  FBulkDataBatchRequest local_7d8;
  longlong local_7d0;
  FName local_7c8;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  code *local_758 [2];
  longlong local_748 [3];
  longlong *local_730;
  FAudioChunkCache *local_728;
  longlong local_718;
  longlong local_708;
  longlong lStack_700;
  longlong local_6f8;
  longlong local_6f0;
  FCacheElement *local_6e8;
  FName local_6e0;
  undefined8 uStack_6d8;
  longlong local_6d0;
  uint local_6c8;
  uint local_6c4;
  Type local_6c0;
  EAsyncIOPriorityAndFlags local_6bc;
  undefined4 *local_6b8;
  longlong local_6b0;
  TStringBuilderBase<wchar_t> local_6a8;
  wchar_t local_688 [40];
  TStringBuilderBase<wchar_t> local_638;
  wchar_t local_618 [40];
  TStringBuilderBase<wchar_t> local_5c8;
  wchar_t local_5a8 [40];
  TStringBuilderBase<wchar_t> local_558;
  wchar_t local_538 [40];
  TStringBuilderBase<wchar_t> local_4e8;
  wchar_t local_4c8 [128];
  TStringBuilderBase<wchar_t> local_3c8;
  wchar_t local_3a8 [128];
  TStringBuilderBase<wchar_t> local_2a8;
  wchar_t local_288 [128];
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [128];
  ulonglong local_68 [5];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_898;
  local_850 = this;
  local_820 = param_3;
  local_840 = FCacheElement::GetChunk(param_1,param_2->ChunkIndex);
  if (local_840 == (FStreamedAudioChunk *)0x0) {
    if (1 < (byte)LogAudioStreamCaching._0_1_) {
      ::FName::ToString(&param_2->SoundWaveName,&local_7c0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
      }
    }
    if (*(longlong *)param_3 == 0) {
      return;
    }
    plVar16 = *(longlong **)&param_3->field_0x28;
    goto LAB_1476bc15f;
  }
  uVar11 = local_840->AudioDataSize;
  EVar20 = AIOP_MIN;
  iVar10 = PlaybackRequestPriorityCVar;
  if (!param_5) {
    iVar10 = ReadRequestPriorityCVar;
  }
  if (iVar10 == 0) {
LAB_1476bb4ef:
    EVar20 = AIOP_High;
  }
  else if (iVar10 == 1) {
    EVar20 = AIOP_Normal;
  }
  else if (iVar10 == 2) {
    EVar20 = AIOP_BelowNormal;
  }
  else if (iVar10 == 3) {
    EVar20 = AIOP_Low;
  }
  else if (iVar10 != 4) goto LAB_1476bb4ef;
  if ((5 < (byte)LogAudioTiming._0_1_) && (param_1->bWantsExtraLogging != false)) {
    local_6a8.Base = local_688;
    local_6a8.bIsDynamic = false;
    local_6a8.bIsExternal = false;
    local_6a8.CurPos = local_688;
    local_6a8.End = (wchar_t *)&local_638;
    FGuid::AppendString(&(param_1->Key).ObjectKey,&local_6a8,DigitsWithHyphensLower);
    if (local_6a8.End < (TStringBuilderBase<wchar_t> *)(local_6a8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_6a8,1);
    }
    *local_6a8.CurPos = L'\0';
    local_4e8.CurPos = local_4c8;
    local_4e8.End = (wchar_t *)&local_3c8;
    local_4e8.bIsDynamic = false;
    local_4e8.bIsExternal = false;
    local_4e8.Base = local_4c8;
    ::FName::AppendString((FName *)param_1,&local_4e8);
    if (local_4e8.End < (TStringBuilderBase<wchar_t> *)(local_4e8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_4e8,1);
    }
    *local_4e8.CurPos = L'\0';
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4e8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_6a8);
    this = local_850;
  }
  pTVar3 = (this->MemoryCounterBytes).Obj.Ptr;
  LOCK();
  *pTVar3 = (TAtomic<unsigned___int64>)((longlong)*pTVar3 - (ulonglong)param_1->ChunkDataSize);
  UNLOCK();
  FLLMScope::FLLMScope(local_848,AudioStreamCacheCompressedData,false,None,Default,true);
  FMemScope::FMemScope(&local_808,AudioStreamCacheCompressedData,true);
  pFVar19 = local_840;
  puVar12 = FMemory::Realloc(param_1->ChunkData,(longlong)local_840->AudioDataSize,0);
  param_1->ChunkData = puVar12;
  param_1->ChunkDataSize = pFVar19->AudioDataSize;
  FMemScope::~FMemScope(&local_808);
  FLLMScope::~FLLMScope(local_848);
  pTVar3 = (this->MemoryCounterBytes).Obj.Ptr;
  LOCK();
  *pTVar3 = (TAtomic<unsigned___int64>)((longlong)*pTVar3 + (ulonglong)param_1->ChunkDataSize);
  UNLOCK();
  uVar9 = FCacheElement::GetNumChunks(param_1);
  (param_1->DebugInfo).NumTotalChunks = uVar9 - 1;
  FCacheElement::UpdateDebugInfoLoadingBehavior(param_1);
  if (param_1->bIsLoaded == (FThreadSafeBool)0x0) {
    pFVar1 = &param_1->Read;
    if (((param_1->Read != (FBulkDataBatchRequest)0x0) &&
        (iVar10 = (**(code **)(*(longlong *)param_1->Read + 0x20))(), iVar10 == 1)) &&
       ((int)param_1->Priority < (int)EVar20)) {
      FBulkDataBatchRequest::UpdatePriority(pFVar1,EVar20);
      param_1->Priority = EVar20;
    }
    if ((5 < (byte)LogAudioTiming._0_1_) && (param_1->bWantsExtraLogging != false)) {
      local_558.Base = local_538;
      local_558.bIsDynamic = false;
      local_558.bIsExternal = false;
      local_558.CurPos = local_538;
      local_558.End = (wchar_t *)&local_4e8;
      FGuid::AppendString(&(param_1->Key).ObjectKey,&local_558,DigitsWithHyphensLower);
      TStringBuilderBase<wchar_t>::operator*(&local_558);
      local_2a8.bIsDynamic = false;
      local_2a8.bIsExternal = false;
      local_2a8.Base = local_288;
      local_2a8.CurPos = local_288;
      local_2a8.End = (wchar_t *)&local_188;
      ::FName::AppendString((FName *)param_1,&local_2a8);
      TStringBuilderBase<wchar_t>::operator*(&local_2a8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2a8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_558);
      pFVar19 = local_840;
      this = local_850;
    }
    if ((*pFVar1 != (FBulkDataBatchRequest)0x0) &&
       (iVar10 = (**(code **)(*(longlong *)*pFVar1 + 0x20))(), iVar10 == 1)) {
      if (*pFVar1 != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)*pFVar1 + 0x28))();
      }
      if (pFVar1 != &local_7d8) {
        FVar4 = *pFVar1;
        *pFVar1 = (FBulkDataBatchRequest)0x0;
        if (FVar4 != (FBulkDataBatchRequest)0x0) {
          (**(code **)(*(longlong *)FVar4 + 0x10))();
        }
      }
    }
  }
  this_01 = &pFVar19->BulkData;
  local_830 = (FBulkData *)this_01;
  lVar13 = FBulkData::GetBulkDataSize((FBulkData *)this_01);
  if (((int)lVar13 < (int)uVar11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkDataSize <= ChunkBulkDataSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x7b5,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1->ChunkDataSize < uVar11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("((uint32)ChunkDataSize) <= CacheElement->ChunkDataSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x7b6,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  LOCK();
  (this->NumberOfLoadsInFlight).Counter = (this->NumberOfLoadsInFlight).Counter + 1;
  UNLOCK();
  AddLoadCounters(EVar20,1);
  local_6f0 = 0;
  local_718 = *(longlong *)local_820;
  local_728 = this;
  if (local_718 != 0) {
    puVar17 = (undefined8 *)&local_820->field_0x10;
    if (*(undefined8 **)&local_820->field_0x28 != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)&local_820->field_0x28;
    }
    (**(code **)*puVar17)(puVar17,&local_708);
  }
  local_6c8 = param_2->ChunkIndex;
  local_6e0 = param_2->SoundWaveName;
  uStack_6d8._0_4_ = (param_2->ObjectKey).A;
  uStack_6d8._4_4_ = (param_2->ObjectKey).B;
  local_6d0._0_4_ = (param_2->ObjectKey).C;
  local_6d0._4_4_ = (param_2->ObjectKey).D;
  local_6c0 = param_4;
  local_758[0] = (code *)0x0;
  local_6e8 = param_1;
  local_6c4 = uVar11;
  local_6bc = EVar20;
  local_730 = FMemory::Malloc(0x80,0x10);
  *local_730 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAudioChunkCache::KickOffAsyncLoad'::`47'::<lambda_1>,0,1>::
                _vftable_;
  local_730[2] = (longlong)local_728;
  local_730[4] = local_718;
  local_730[9] = local_6f0;
  local_6f0 = 0;
  local_730[6] = local_708;
  local_730[7] = lStack_700;
  local_730[8] = local_6f8;
  if (local_730[4] != 0) {
    local_718 = 0;
  }
  local_730[10] = (longlong)local_6e8;
  *(uint *)(local_730 + 0xb) = local_6e0.ComparisonIndex.Value;
  *(uint *)((longlong)local_730 + 0x5c) = local_6e0.Number;
  *(undefined4 *)(local_730 + 0xc) = (undefined4)uStack_6d8;
  *(undefined4 *)((longlong)local_730 + 100) = uStack_6d8._4_4_;
  local_730[0xd] = local_6d0;
  *(uint *)(local_730 + 0xe) = local_6c8;
  *(uint *)((longlong)local_730 + 0x74) = local_6c4;
  *(Type *)(local_730 + 0xf) = local_6c0;
  *(EAsyncIOPriorityAndFlags *)((longlong)local_730 + 0x7c) = local_6bc;
  if (local_730 + 2 != (longlong *)0x0) {
    local_758[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FAudioChunkCache::KickOffAsyncLoad'::__l47::<lambda_1>,void,enum_FBulkDataRequest::EStatus>
                   ::Call;
  }
  if (local_718 != 0) {
    (**(code **)(local_708 + 0x10))();
  }
  QueryPerformanceCounter(&local_800);
  (param_1->DebugInfo).TimeLoadStartedCycles = (ulong64)local_800;
  pFVar1 = &param_1->Read;
  if (pFVar1 != (FBulkDataBatchRequest *)&local_7d0) {
    FVar4 = *pFVar1;
    *pFVar1 = (FBulkDataBatchRequest)0x0;
    if (FVar4 != (FBulkDataBatchRequest)0x0) {
      (**(code **)(*(longlong *)FVar4 + 0x10))();
    }
  }
  bVar8 = FBulkData::IsBulkDataLoaded((FBulkData *)this_01);
  if (bVar8) {
    if ((5 < (byte)LogAudioTiming._0_1_) && (param_1->bWantsExtraLogging != false)) {
      local_638.Base = local_618;
      local_638.bIsDynamic = false;
      local_638.bIsExternal = false;
      local_638.CurPos = local_618;
      local_638.End = (wchar_t *)&local_5c8;
      FGuid::AppendString(&(param_1->Key).ObjectKey,&local_638,DigitsWithHyphensLower);
      if (local_638.End < (TStringBuilderBase<wchar_t> *)(local_638.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_638,1);
      }
      *local_638.CurPos = L'\0';
      local_188.Base = local_168;
      local_188.CurPos = local_168;
      local_188.End = (wchar_t *)local_68;
      local_188.bIsDynamic = false;
      local_188.bIsExternal = false;
      ::FName::AppendString((FName *)param_1,&local_188);
      TStringBuilderBase<wchar_t>::operator*(&local_188);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_638);
    }
    FStreamedAudioChunk::MoveOutAsBuffer(local_840,&local_818);
    if ((local_818.View.ArrayNum < (longlong)(ulonglong)param_1->ChunkDataSize) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheElement->ChunkDataSize <= ChunkMemory.GetView().Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                           ,0x7e9,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    memcpy(param_1->ChunkData,local_818.View.DataPtr,local_818.View.ArrayNum);
    if (5 < (byte)LogAudioStreamCaching._0_1_) {
      QueryPerformanceCounter(&local_7f8);
      ::FName::ToString(&param_2->SoundWaveName,&local_7b0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
      }
    }
    (param_1->DebugInfo).bWasLoadedFromInlineChunk = true;
    if (6 < (byte)LogAudioStreamCaching._0_1_) {
      ::FName::ToString(&param_2->SoundWaveName,&local_7a0);
      UE::Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)&PTR_u_COPY_DISCARD__s_15173f4b8,
                 (FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
      }
    }
    local_850 = (FAudioChunkCache *)CONCAT44(local_850._4_4_,2);
    UE::Core::Private::Function::CheckCallable(local_758[0]);
    pcVar7 = local_758[0];
    plVar16 = local_748;
    if (local_730 != (longlong *)0x0) {
      plVar16 = local_730;
    }
    this_00 = (void *)(**(code **)(*plVar16 + 8))();
    if (pcVar7 == UE::Core::Private::Function::
                  TFunctionRefCaller<`FAudioChunkCache::KickOffAsyncLoad'::__l47::<lambda_1>,void,enum_FBulkDataRequest::EStatus>
                  ::Call) {
      `FAudioChunkCache::KickOffAsyncLoad'::__l47::<lambda_1>::operator()
                (this_00,(EStatus)local_850);
    }
    else {
      (*pcVar7)(this_00,&local_850);
    }
    if (local_818.View.DataPtr != (uchar *)0x0) {
      FMemory::Free(local_818.View.DataPtr);
    }
  }
  else {
    if (6 < (byte)LogAudioStreamCaching._0_1_) {
      ::FName::ToString(&param_2->SoundWaveName,&local_790);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_790.Data.AllocatorInstance.Data);
      }
    }
    uVar11 = FBulkData::GetBulkDataFlags((FBulkData *)this_01);
    if (((uVar11 & 1) == 0) ||
       (uVar11 = FBulkData::GetBulkDataFlags((FBulkData *)this_01), (uVar11 & 0x40) != 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    (param_1->DebugInfo).bWasInlinedButUnloaded = bVar8;
    if ((4 < (byte)LogAudioStreamCaching._0_1_) && (bVar8 != false)) {
      ::FName::ToString(&param_2->SoundWaveName,&local_780);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_780.Data.AllocatorInstance.Data);
      }
    }
    if (5 < (byte)LogAudioStreamCaching._0_1_) {
      ::FName::ToString(&param_2->SoundWaveName,&local_770);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_770.Data.AllocatorInstance.Data);
      }
    }
    if ((3 < (byte)LogAudioStreamCaching._0_1_) && (param_1->bWantsExtraLogging != false)) {
      local_5c8.Base = local_5a8;
      local_5c8.bIsDynamic = false;
      local_5c8.bIsExternal = false;
      local_5c8.CurPos = local_5a8;
      local_5c8.End = (wchar_t *)&local_558;
      FGuid::AppendString(&(param_1->Key).ObjectKey,&local_5c8,DigitsWithHyphensLower);
      if (local_5c8.End < (TStringBuilderBase<wchar_t> *)(local_5c8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_5c8,1);
      }
      *local_5c8.CurPos = L'\0';
      local_3c8.Base = local_3a8;
      local_3c8.CurPos = local_3a8;
      local_3c8.End = (wchar_t *)&local_2a8;
      local_3c8.bIsDynamic = false;
      local_3c8.bIsExternal = false;
      ::FName::AppendString((FName *)param_1,&local_3c8);
      if (local_3c8.End < (TStringBuilderBase<wchar_t> *)(local_3c8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_3c8,1);
      }
      *local_3c8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3c8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_5c8);
    }
    if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
      local_838 = 0;
      TVar14 = (TEventRef<unsigned_int>)&local_838;
    }
    else {
      TVar14 = FStringTrace::GetNameRef(&local_7c8);
    }
    uVar5 = *(undefined8 *)TVar14;
    bVar8 = false;
    if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                ((TLogScope<0> *)&local_6b8);
      bVar8 = true;
      *local_6b8 = (int)uVar5;
      *(undefined8 *)(local_6b0 + 0x28) = *(undefined8 *)(local_6b0 + 0x20);
    }
    FBulkDataBatchRequest::FBatchBuilder::FBatchBuilder((FBatchBuilder *)&local_7f0,1);
    FIoBuffer::FIoBuffer(&local_828,Wrap,param_1->ChunkData,(ulonglong)param_1->ChunkDataSize);
    FBulkDataBatchRequest::FBatchBuilder::Read
              ((FBatchBuilder *)&local_7f0,local_830,0,(ulonglong)param_1->ChunkDataSize,
               EVar20 | AIOP_FLAG_DONTCACHE,&local_828,(FBulkDataRequest *)0x0);
    FBulkDataBatchRequest::FBatchBuilder::Issue
              ((FBatchBuilder *)&local_7f0,
               (TFunction<void___cdecl(FBulkDataRequest::EStatus)> *)local_758,&param_1->Read);
    param_1->Priority = EVar20;
    if (local_828.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_828.CorePtr.Reference);
      LOCK();
      piVar2 = (int *)((longlong)local_828.CorePtr.Reference + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_828.CorePtr.Reference);
        ::operator_delete((void *)local_828.CorePtr.Reference,0x20);
      }
    }
    FBulkDataBatchRequest::FBuilder::~FBuilder(&local_7f0);
    if (bVar8) {
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar6 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar15 = *(FWriteBuffer **)(lVar6 + 0x20);
      if ((int)pFVar15 - *(int *)&pFVar15->Cursor < 1) {
        pFVar15 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar15->Cursor = '\n';
      pFVar15->Cursor = pFVar15->Cursor + 1;
      pFVar15->Committed = pFVar15->Cursor;
    }
  }
  if (local_758[0] != (code *)0x0) {
    plVar16 = local_748;
    if (local_730 != (longlong *)0x0) {
      plVar16 = local_730;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (*(longlong *)local_820 == 0) {
    return;
  }
  plVar16 = *(longlong **)&local_820->field_0x28;
  param_3 = local_820;
LAB_1476bc15f:
  plVar18 = (longlong *)&param_3->field_0x10;
  if (plVar16 != (longlong *)0x0) {
    plVar18 = plVar16;
  }
  (**(code **)(*plVar18 + 0x10))();
  return;
}

// LinearSearchCacheForElement @ 1476bc1a0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCacheElement * __thiscall
FAudioChunkCache::LinearSearchCacheForElement(FAudioChunkCache *this,FChunkKey *param_1)

{
  float fVar1;
  FCacheElement *pFVar2;
  int iVar3;
  
  pFVar2 = this->MostRecentElement;
  iVar3 = 0;
  if (pFVar2 != (FCacheElement *)0x0) {
    while (((param_1->SoundWaveName != (pFVar2->Key).SoundWaveName ||
            ((((pFVar2->Key).ObjectKey.D != (param_1->ObjectKey).D ||
              (pFVar2->Key).ObjectKey.B != (param_1->ObjectKey).B) ||
             (pFVar2->Key).ObjectKey.C != (param_1->ObjectKey).C) ||
             (pFVar2->Key).ObjectKey.A != (param_1->ObjectKey).A)) ||
           (param_1->ChunkIndex != (pFVar2->Key).ChunkIndex))) {
      pFVar2 = pFVar2->LessRecentElement;
      iVar3 = iVar3 + 1;
      if (pFVar2 == (FCacheElement *)0x0) {
        return (FCacheElement *)0x0;
      }
      if (this->ChunksInUse <= iVar3) {
        if (2 < (byte)LogAudioStreamCaching._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
        }
        return (FCacheElement *)0x0;
      }
    }
    fVar1 = (pFVar2->DebugInfo).AverageLocationInCacheWhenNeeded;
    (pFVar2->DebugInfo).AverageLocationInCacheWhenNeeded =
         ((float)iVar3 - fVar1) / (float)((pFVar2->DebugInfo).NumTimesTouched + 1) + fVar1;
    if (3 < (byte)LogAudioStreamCaching._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    }
  }
  return pFVar2;
}

// LinearSearchChunkArrayForElement @ 1476bc280

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FCacheElement * __thiscall
FAudioChunkCache::LinearSearchChunkArrayForElement(FAudioChunkCache *this,FChunkKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCacheElement *pFVar4;
  FName *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < this->ChunksInUse) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->CachePool).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCacheElement *)(*pcVar1)();
        return pFVar4;
      }
      pFVar5 = (FName *)((this->CachePool).AllocatorInstance.Data + lVar7);
      if (((param_1->SoundWaveName == *pFVar5) &&
          (((pFVar5[2].Number == (param_1->ObjectKey).D &&
            pFVar5[2].ComparisonIndex.Value == (param_1->ObjectKey).C) &&
           pFVar5[1].Number == (param_1->ObjectKey).B) &&
           pFVar5[1].ComparisonIndex.Value == (param_1->ObjectKey).A)) &&
         (param_1->ChunkIndex == pFVar5[3].ComparisonIndex.Value)) {
        if (3 < (byte)LogAudioStreamCaching._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
        }
        uVar3 = 0;
        if ((int)uVar6 < (this->CachePool).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FCacheElement *)(*pcVar1)();
          return pFVar4;
        }
        return (FCacheElement *)
               ((this->CachePool).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xb0);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0xb0;
    } while ((int)uVar6 < this->ChunksInUse);
  }
  return (FCacheElement *)0x0;
}

// RemoveForceInlineSoundWave @ 1476c24c0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FAudioChunkCache::RemoveForceInlineSoundWave
          (FAudioChunkCache *this,TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  TMap<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>_>
  *this_00;
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TAtomic<unsigned___int64> *pTVar3;
  code *pcVar4;
  bool bVar5;
  ESoundWaveLoadingBehavior EVar6;
  int iVar7;
  FName *pFVar8;
  uint uVar9;
  atomic<int> *paVar10;
  int *piVar11;
  TSharedPtr<FSoundWaveProxy,1> *local_res10;
  TSharedPtr<FSoundWaveProxy_const_,1> local_68;
  TSharedPtr<FSoundWaveProxy_const_,1> local_58;
  FString local_48;
  FString local_38;
  
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWave.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x487,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  EVar6 = FSoundWaveProxy::GetLoadingBehavior(param_1->Object);
  if (EVar6 != ForceInline) {
    local_res10 = param_1;
    `FAudioChunkCache::RemoveForceInlineSoundWave'::__l2::<lambda_1>::operator()(&local_res10);
  }
  if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar6 = FSoundWaveProxy::GetLoadingBehavior(param_1->Object);
  if (EVar6 != ForceInline) {
    return;
  }
  lpCriticalSection = &this->SoundWaveMemoryTrackerCritSec;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  this_00 = &this->SoundWaveTracker;
  local_68.Object = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar9 = ((uint)((ulonglong)local_68.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_68.Object >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_68.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar7 = TSet<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FSoundWaveProxy_const_,1>_>
                    ((TSet<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>,FDefaultSetAllocator>
                      *)this_00,uVar9 >> 0x10 ^ uVar9,&local_68);
  if (iVar7 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    piVar11 = (int *)0x0;
  }
  else {
    lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    piVar11 = (int *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      piVar11 = (int *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (piVar11 != (int *)0x0) goto LAB_1476c26fa;
  }
  if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = FSoundWaveProxy::GetFName(param_1->Object);
  ::FName::ToString(pFVar8,&local_48);
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Tracker != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                     ,0x498,
                     L"AudioStreamCache::RemoveForceInlineSoundWave: Attempted to remove SoundWave that was never added, or has already been removed: %s"
                    );
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1476c26fa:
  if (*piVar11 < 1) {
    if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = FSoundWaveProxy::GetFName(param_1->Object);
    ::FName::ToString(pFVar8,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tracker->RefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x499,
                       L"AudioStreamCache::RemoveForceInlineSoundWve: Attempted to remove SoundWave that has a ref count of zero or less. Something has gone horribly wrong: %s"
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar1 = *(longlong *)(piVar11 + 2);
  *piVar11 = *piVar11 + -1;
  if (*piVar11 == 0) {
    local_58.Object = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_58.SharedReferenceCount.ReferenceController = pTVar2;
    if (*(int *)&(this->SoundWaveTracker).field_0x8 != *(int *)&(this->SoundWaveTracker).field_0x34)
    {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      uVar9 = ((uint)((ulonglong)local_58.Object >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_58.Object >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      TSet<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>,FDefaultSetAllocator>
      ::RemoveImpl<TSharedPtr<FSoundWaveProxy_const_,1>_>
                ((TSet<TTuple<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker>,TDefaultMapHashableKeyFuncs<TSharedPtr<FSoundWaveProxy,1>,FAudioChunkCache::FSoundWaveMemoryTracker,0>,FDefaultSetAllocator>
                  *)this_00,uVar9 >> 0x10 ^ uVar9,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (this->ForceInlineMemoryCounterBytes).Obj.Ptr;
    LOCK();
    *pTVar3 = (TAtomic<unsigned___int64>)((longlong)*pTVar3 - lVar1);
    UNLOCK();
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveMemoryCountedFeature @ 1476c2c30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioChunkCache::RemoveMemoryCountedFeature
          (FAudioChunkCache *this,FAudioStreamCacheMemoryHandle *param_1)

{
  TAtomic<unsigned___int64> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  if (4 < (byte)LogAudioStreamCaching._0_1_) {
    local_res8 = param_1->FeatureName;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((ulonglong)*(this->FeatureMemoryCounterBytes).Obj.Ptr < param_1->MemoryUseInBytes) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FeatureMemoryCounterBytes->Load() >= Feature.GetMemoryUseInBytes()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x4c2,L"Count (%lu) < Remove (%lu)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = (this->FeatureMemoryCounterBytes).Obj.Ptr;
  LOCK();
  *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 - param_1->MemoryUseInBytes);
  UNLOCK();
  if (4 < (byte)LogAudioStreamCaching._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    return;
  }
  return;
}

// RemoveReferenceToChunk @ 1476c31a0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::RemoveReferenceToChunk(FAudioChunkCache *this,FChunkKey *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FCacheElement *pFVar3;
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = FindElementForKey(this,param_1);
  if (pFVar3 == (FCacheElement *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423373>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x433,"FoundElement");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((pFVar3->NumConsumers).Counter < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundElement->NumConsumers.GetValue() >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x436,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    (pFVar3->NumConsumers).Counter = (pFVar3->NumConsumers).Counter + -1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x0001476c3252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReportCacheSize @ 1476c3620

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

ulong64 __thiscall FAudioChunkCache::ReportCacheSize(FAudioChunkCache *this)

{
  return (ulonglong)(uint)((this->CachePool).ArrayNum * this->MaxChunkSize);
}

// SetCacheLookupIDForChunk @ 1476c7b30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FAudioChunkCache::SetCacheLookupIDForChunk
          (FAudioChunkCache *this,FChunkKey *param_1,ulong64 param_2)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  uint uVar1;
  ulong64 *puVar2;
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection != (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = ::GetTypeHash(param_1);
    puVar2 = TMapBase<FAudioChunkCache::FChunkKey,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>_>
             ::FindOrAddImpl<FAudioChunkCache::FChunkKey_const_&>
                       ((TMapBase<FAudioChunkCache::FChunkKey,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>_>
                         *)&this->CacheLookupIdMap,uVar1,param_1);
    *puVar2 = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001476c7b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetUpLeastRecentChunk @ 1476c9c60

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::SetUpLeastRecentChunk(FAudioChunkCache *this)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  FCacheElement *pFVar1;
  FCacheElement *pFVar2;
  
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = this->MostRecentElement;
  for (pFVar2 = this->MostRecentElement->LessRecentElement; pFVar2 != (FCacheElement *)0x0;
      pFVar2 = pFVar2->LessRecentElement) {
    pFVar1 = pFVar2;
  }
  this->LeastRecentElement = pFVar1;
                    /* WARNING: Could not recover jumptable at 0x0001476c9cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ShouldAddNewChunk @ 1476c9dc0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FAudioChunkCache::ShouldAddNewChunk(FAudioChunkCache *this)

{
  if ((this->ChunksInUse < (this->CachePool).ArrayNum) &&
     ((ulonglong)
      ((longlong)*(this->FeatureMemoryCounterBytes).Obj.Ptr +
       (longlong)*(this->ForceInlineMemoryCounterBytes).Obj.Ptr +
      (longlong)*(this->MemoryCounterBytes).Obj.Ptr) < this->MemoryLimitBytes)) {
    return true;
  }
  return false;
}

// StopLoggingCacheMisses @ 1476ca640

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::StopLoggingCacheMisses(FAudioChunkCache *this)

{
  this->bLogCacheMisses = false;
  return;
}

// TouchElement @ 1476cabe0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::TouchElement(FAudioChunkCache *this,FCacheElement *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  FCacheElement *pFVar1;
  FCacheElement *pFVar2;
  FCacheElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->MostRecentElement != (FCacheElement *)0x0) &&
     (this->MostRecentElement == this->LeastRecentElement)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MostRecentElement == nullptr || MostRecentElement != LeastRecentElement",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x622,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->LessRecentElement == param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElement->LessRecentElement != InElement",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x623,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lpCriticalSection = &this->CacheMutationCriticalSection;
  if (lpCriticalSection != (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = this->MostRecentElement;
    if (param_1 != pFVar1) {
      if (this->LeastRecentElement == param_1) {
        this->LeastRecentElement = param_1->MoreRecentElement;
      }
      pFVar2 = param_1->LessRecentElement;
      pFVar3 = param_1->MoreRecentElement;
      this->MostRecentElement = param_1;
      param_1->MoreRecentElement = (FCacheElement *)0x0;
      param_1->LessRecentElement = pFVar1;
      if (pFVar1 != (FCacheElement *)0x0) {
        pFVar1->MoreRecentElement = param_1;
      }
      if (pFVar2 != pFVar3) {
        if (pFVar2 != (FCacheElement *)0x0) {
          pFVar2->MoreRecentElement = pFVar3;
        }
        if (pFVar3 != (FCacheElement *)0x0) {
          pFVar3->LessRecentElement = pFVar2;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001476cacea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TrimMemory @ 1476cad10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FAudioChunkCache::TrimMemory(FAudioChunkCache *this,ulong64 param_1,bool param_2)

{
  FCacheElement *pFVar1;
  TAtomic<unsigned___int64> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSoundWaveData *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  ulong64 uVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  TReferenceControllerBase<1> *pTVar11;
  FCacheElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FAudioChunkCache *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 auStackY_5b8 [32];
  TReferenceControllerBase<1> *local_580;
  FLLMScope local_558;
  FLLMScope local_554;
  FAudioChunkCache *local_550;
  undefined8 local_548;
  undefined8 local_540;
  FMemScope local_538;
  FMemScope local_530;
  LPCRITICAL_SECTION local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_504;
  undefined8 local_4fc;
  undefined8 local_4f4;
  undefined4 local_4ec;
  TStringBuilderBase<wchar_t> local_4e8;
  wchar_t local_4c8 [40];
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [40];
  TStringBuilderBase<wchar_t> local_408;
  wchar_t local_3e8 [40];
  TStringBuilderBase<wchar_t> local_398;
  wchar_t local_378 [128];
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [128];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CacheMutationCriticalSection;
  local_550 = this;
  local_528 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if ((this->MostRecentElement == (FCacheElement *)0x0) ||
     (pFVar1 = this->MostRecentElement->LessRecentElement, pFVar1 == (FCacheElement *)0x0)) {
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pFVar12 = this->LeastRecentElement;
    local_580 = (TReferenceControllerBase<1> *)0x0;
    pTVar15 = pTVar11;
    if (pFVar12 != pFVar1) {
      do {
        if (param_1 <= pTVar15) break;
        if ((((pFVar12->NumConsumers).Counter < 1) && (pFVar12->bIsLoaded != (FThreadSafeBool)0x0))
           && (pFVar12->ChunkDataSize != 0)) {
          if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar12->bWantsExtraLogging != false)) {
            local_4e8.Base = local_4c8;
            local_4e8.bIsDynamic = false;
            local_4e8.bIsExternal = false;
            local_4e8.CurPos = local_4c8;
            local_4e8.End = (wchar_t *)&local_478;
            FGuid::AppendString(&(pFVar12->Key).ObjectKey,&local_4e8,DigitsWithHyphensLower);
            if (local_4e8.End < (TStringBuilderBase<wchar_t> *)(local_4e8.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_4e8,1);
            }
            *local_4e8.CurPos = L'\0';
            local_398.Base = local_378;
            local_398.CurPos = local_378;
            local_398.End = (wchar_t *)&local_278;
            local_398.bIsDynamic = false;
            local_398.bIsExternal = false;
            ::FName::AppendString((FName *)pFVar12,&local_398);
            if (local_398.End < (TStringBuilderBase<wchar_t> *)(local_398.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_398,1);
            }
            *local_398.CurPos = L'\0';
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_398);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4e8);
            this = local_550;
            pTVar15 = local_580;
          }
          pTVar2 = (this->MemoryCounterBytes).Obj.Ptr;
          pTVar15 = (TReferenceControllerBase<1> *)
                    ((longlong)&pTVar15->_padding_ + (ulonglong)pFVar12->ChunkDataSize);
          LOCK();
          *pTVar2 = (TAtomic<unsigned___int64>)
                    ((longlong)*pTVar2 - (ulonglong)pFVar12->ChunkDataSize);
          UNLOCK();
          if ((pFVar12->ChunkData == (uchar *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentElement->ChunkData",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                                 ,0x4e2,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return uVar10;
          }
          FLLMScope::FLLMScope(&local_558,AudioStreamCacheCompressedData,false,None,Default,true);
          FMemScope::FMemScope(&local_538,AudioStreamCacheCompressedData,true);
          FMemory::Free(pFVar12->ChunkData);
          pFVar12->ChunkData = (uchar *)0x0;
          pFVar12->ChunkDataSize = 0;
          if (*(int *)&(this->CacheLookupIdMap).field_0x8 !=
              *(int *)&(this->CacheLookupIdMap).field_0x34) {
            uVar8 = ::GetTypeHash(&pFVar12->Key);
            TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
            ::RemoveImpl<FAudioChunkCache::FChunkKey>
                      ((TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
                        *)&this->CacheLookupIdMap,uVar8,&pFVar12->Key);
          }
          local_520 = 0;
          local_518 = 0;
          local_510 = 0;
          local_508 = 0xffffffff;
          (pFVar12->Key).SoundWaveName.ComparisonIndex = 0;
          (pFVar12->Key).SoundWaveName.Number = 0;
          (pFVar12->Key).ObjectKey.A = 0;
          (pFVar12->Key).ObjectKey.B = 0;
          (pFVar12->Key).ObjectKey.C = 0;
          (pFVar12->Key).ObjectKey.D = 0;
          (pFVar12->Key).ChunkIndex = 0xffffffff;
          (pFVar12->DebugInfo).TimeLoadEndedCycles = 0;
          (pFVar12->DebugInfo).NumTotalChunks = 0;
          (pFVar12->DebugInfo).NumTimesTouched = 0;
          (pFVar12->DebugInfo).TimeLoadStartedCycles = 0;
          (pFVar12->DebugInfo).TimeToLoadMs = 0.0;
          (pFVar12->DebugInfo).AverageLocationInCacheWhenNeeded = 0.0;
          (pFVar12->DebugInfo).LoadingBehavior = Uninitialized;
          (pFVar12->DebugInfo).bWasCacheMiss = false;
          (pFVar12->DebugInfo).bWasLoadedFromInlineChunk = false;
          (pFVar12->DebugInfo).bWasInlinedButUnloaded = false;
          (pFVar12->DebugInfo).bWaveDestroyed = false;
          (pFVar12->DebugInfo).Format.ComparisonIndex = 0;
          (pFVar12->DebugInfo).Format.Number = 0;
          local_548 = 0;
          FMemScope::~FMemScope(&local_538);
          FLLMScope::~FLLMScope(&local_558);
          local_580 = pTVar15;
        }
        pFVar12 = pFVar12->MoreRecentElement;
      } while (pFVar12 != pFVar1);
      lpCriticalSection = (LPCRITICAL_SECTION)&this->CacheMutationCriticalSection;
    }
    if (((param_2) && (0 < EnableTrimmingRetainedAudioCVar)) && (pTVar15 < param_1)) {
      if (5 < (byte)LogAudioStreamCaching._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      }
      pFVar1 = this->LeastRecentElement;
      pFVar12 = local_550->MostRecentElement->LessRecentElement;
      pFVar14 = local_550;
      while ((pFVar1 != pFVar12 && (lpCriticalSection = local_528, pTVar15 < param_1))) {
        if (pFVar1->ChunkDataSize != 0) {
          pTVar3 = (pFVar1->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController;
          pTVar13 = pTVar3;
          pTVar15 = local_580;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            aVar6 = pTVar3->SharedReferenceCount;
            do {
              pTVar13 = pTVar11;
              if (aVar6 == (atomic<int>)0x0) goto LAB_1476cb0f6;
              LOCK();
              aVar9 = pTVar3->SharedReferenceCount;
              bVar7 = aVar6 == aVar9;
              if (bVar7) {
                pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
                aVar9 = aVar6;
              }
              UNLOCK();
              aVar6 = aVar9;
            } while (!bVar7);
            pFVar4 = (pFVar1->SoundWaveWeakPtr).Object;
            pTVar13 = pTVar3;
            if (pFVar4 != (FSoundWaveData *)0x0) {
              bVar7 = FAudioChunkHandle::IsValid(&pFVar4->FirstChunk);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              if (bVar7) {
                pTVar3 = (pFVar1->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController;
                pTVar13 = pTVar3;
                if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
                  aVar6 = pTVar3->SharedReferenceCount;
                  do {
                    pTVar13 = pTVar11;
                    if (aVar6 == (atomic<int>)0x0) goto LAB_1476cb155;
                    LOCK();
                    aVar9 = pTVar3->SharedReferenceCount;
                    bVar7 = aVar6 == aVar9;
                    if (bVar7) {
                      pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
                      aVar9 = aVar6;
                    }
                    UNLOCK();
                    aVar6 = aVar9;
                  } while (!bVar7);
                  pFVar4 = (pFVar1->SoundWaveWeakPtr).Object;
                  pTVar13 = pTVar3;
                  if (pFVar4 != (FSoundWaveData *)0x0) {
                    if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar1->bWantsExtraLogging != false)) {
                      local_478.Base = local_458;
                      local_478.bIsDynamic = false;
                      local_478.bIsExternal = false;
                      local_478.CurPos = local_458;
                      local_478.End = (wchar_t *)&local_408;
                      FGuid::AppendString(&(pFVar1->Key).ObjectKey,&local_478,DigitsWithHyphensLower
                                         );
                      if (local_478.End < (TStringBuilderBase<wchar_t> *)(local_478.CurPos + 1)) {
                        TStringBuilderBase<wchar_t>::Extend(&local_478,1);
                      }
                      *local_478.CurPos = L'\0';
                      local_278.Base = local_258;
                      local_278.CurPos = local_258;
                      local_278.End = (wchar_t *)&local_158;
                      local_278.bIsDynamic = false;
                      local_278.bIsExternal = false;
                      ::FName::AppendString((FName *)pFVar1,&local_278);
                      if (local_278.End < (TStringBuilderBase<wchar_t> *)(local_278.CurPos + 1)) {
                        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
                      }
                      *local_278.CurPos = L'\0';
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
                      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
                      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
                      pFVar14 = local_550;
                    }
                    FSoundWaveData::ReleaseCompressedAudio(pFVar4);
                  }
                }
LAB_1476cb155:
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar13);
                if (((pFVar1->NumConsumers).Counter < 1) &&
                   (pFVar1->bIsLoaded != (FThreadSafeBool)0x0)) {
                  if ((5 < (byte)LogAudioTiming._0_1_) && (pFVar1->bWantsExtraLogging != false)) {
                    local_408.Base = local_3e8;
                    local_408.bIsDynamic = false;
                    local_408.bIsExternal = false;
                    local_408.CurPos = local_3e8;
                    local_408.End = (wchar_t *)&local_398;
                    FGuid::AppendString(&(pFVar1->Key).ObjectKey,&local_408,DigitsWithHyphensLower);
                    if (local_408.End < (TStringBuilderBase<wchar_t> *)(local_408.CurPos + 1)) {
                      TStringBuilderBase<wchar_t>::Extend(&local_408,1);
                    }
                    *local_408.CurPos = L'\0';
                    local_158.Base = local_138;
                    local_158.CurPos = local_138;
                    local_158.End = (wchar_t *)local_38;
                    local_158.bIsDynamic = false;
                    local_158.bIsExternal = false;
                    ::FName::AppendString((FName *)pFVar1,&local_158);
                    if (local_158.End < local_158.CurPos + 1) {
                      TStringBuilderBase<wchar_t>::Extend(&local_158,1);
                    }
                    *local_158.CurPos = L'\0';
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
                    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
                    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_408);
                  }
                  local_580 = (TReferenceControllerBase<1> *)
                              ((longlong)&local_580->_padding_ + (ulonglong)pFVar1->ChunkDataSize);
                  pTVar2 = (pFVar14->MemoryCounterBytes).Obj.Ptr;
                  LOCK();
                  *pTVar2 = (TAtomic<unsigned___int64>)
                            ((longlong)*pTVar2 - (ulonglong)pFVar1->ChunkDataSize);
                  UNLOCK();
                  if ((pFVar1->ChunkData == (uchar *)0x0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("CurrentElement->ChunkData",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                                         ,0x50f,L""), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    uVar10 = (*pcVar5)();
                    return uVar10;
                  }
                  FLLMScope::FLLMScope
                            (&local_554,AudioStreamCacheCompressedData,false,None,Default,true);
                  FMemScope::FMemScope(&local_530,AudioStreamCacheCompressedData,true);
                  FMemory::Free(pFVar1->ChunkData);
                  pFVar1->ChunkData = (uchar *)0x0;
                  pFVar1->ChunkDataSize = 0;
                  if (*(int *)&(pFVar14->CacheLookupIdMap).field_0x8 !=
                      *(int *)&(pFVar14->CacheLookupIdMap).field_0x34) {
                    uVar8 = ::GetTypeHash(&pFVar1->Key);
                    TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FAudioChunkCache::FChunkKey>
                              ((TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
                                *)&pFVar14->CacheLookupIdMap,uVar8,&pFVar1->Key);
                  }
                  local_504 = 0;
                  local_4fc = 0;
                  local_4f4 = 0;
                  local_4ec = 0xffffffff;
                  (pFVar1->Key).SoundWaveName.ComparisonIndex = 0;
                  (pFVar1->Key).SoundWaveName.Number = 0;
                  (pFVar1->Key).ObjectKey.A = 0;
                  (pFVar1->Key).ObjectKey.B = 0;
                  (pFVar1->Key).ObjectKey.C = 0;
                  (pFVar1->Key).ObjectKey.D = 0;
                  (pFVar1->Key).ChunkIndex = 0xffffffff;
                  (pFVar1->DebugInfo).TimeLoadEndedCycles = 0;
                  (pFVar1->DebugInfo).NumTotalChunks = 0;
                  (pFVar1->DebugInfo).NumTimesTouched = 0;
                  (pFVar1->DebugInfo).TimeLoadStartedCycles = 0;
                  (pFVar1->DebugInfo).TimeToLoadMs = 0.0;
                  (pFVar1->DebugInfo).AverageLocationInCacheWhenNeeded = 0.0;
                  (pFVar1->DebugInfo).LoadingBehavior = Uninitialized;
                  (pFVar1->DebugInfo).bWasCacheMiss = false;
                  (pFVar1->DebugInfo).bWasLoadedFromInlineChunk = false;
                  (pFVar1->DebugInfo).bWasInlinedButUnloaded = false;
                  (pFVar1->DebugInfo).bWaveDestroyed = false;
                  (pFVar1->DebugInfo).Format.ComparisonIndex = 0;
                  (pFVar1->DebugInfo).Format.Number = 0;
                  local_540 = 0;
                  FMemScope::~FMemScope(&local_530);
                  FLLMScope::~FLLMScope(&local_554);
                  pTVar15 = local_580;
                }
              }
              goto LAB_1476cb542;
            }
          }
LAB_1476cb0f6:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
        }
LAB_1476cb542:
        pFVar1 = pFVar1->MoreRecentElement;
        lpCriticalSection = local_528;
      }
      if (5 < (byte)LogAudioStreamCaching._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      }
    }
    if (5 < (byte)LogAudioStreamCaching._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return (ulong64)pTVar15;
}

// operator() @ 15050ecb0

bool __thiscall
`FAudioChunkCache::AddForceInlineSoundWave'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6168786850648423341>);
  if (bVar3) {
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)*plVar1);
    ::FName::ToString(this_00,&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6168786850648423341>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050ed4c;
    }
  }
  bVar3 = false;
LAB_15050ed4c:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 15050ee10

bool __thiscall
`FAudioChunkCache::RemoveForceInlineSoundWave'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6168786850648423287>);
  if (bVar3) {
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)*plVar1);
    ::FName::ToString(this_00,&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6168786850648423287>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050eeac;
    }
  }
  bVar3 = false;
LAB_15050eeac:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 15050f120

bool __thiscall `FAudioChunkCache::GetChunk'::__l116::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6168786850648423423>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6168786850648423423>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

