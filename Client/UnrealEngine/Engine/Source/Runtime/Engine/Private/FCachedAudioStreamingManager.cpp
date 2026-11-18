// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// <lambda_invoker_cdecl> @ 1476775d0

void __cdecl
`FCachedAudioStreamingManager::GetLoadedChunk'::__l88::<lambda_1>::<lambda_invoker_cdecl>
          (EAudioChunkLoadResult param_1)

{
  return;
}

// FCachedAudioStreamingManager @ 1476876e0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FCachedAudioStreamingManager * __thiscall
FCachedAudioStreamingManager::FCachedAudioStreamingManager
          (FCachedAudioStreamingManager *this,FCachedAudioStreamingManagerParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCachedAudioStreamingManager *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  this->_padding_ = 0;
  (this->CacheArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheArray).ArrayNum = 0;
  (this->CacheArray).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FCachedAudioStreamingManager__6B_;
  FLLMScope::FLLMScope(local_res18,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AudioStreamCache,true);
  if ((param_1->Caches).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InitParams.Caches.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x1d7,
                       L"FCachedAudioStreamingManager should be initialized with dimensions for at least one cache."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCachedAudioStreamingManager *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar1 = (param_1->Caches).ArrayNum;
  pFVar7 = (param_1->Caches).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_1->Caches).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCachedAudioStreamingManagerParams::FCacheDimensions_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar4 = (this->CacheArray).ArrayNum;
    if (pFVar7 == pFVar6) break;
    if (iVar4 == (this->CacheArray).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x160,8,&(this->CacheArray).AllocatorInstance,&(this->CacheArray).ArrayMax)
      ;
    }
    (this->CacheArray).ArrayNum = iVar4 + 1;
    FAudioChunkCache::FAudioChunkCache
              ((FAudioChunkCache *)
               ((this->CacheArray).AllocatorInstance.Data + (longlong)iVar4 * 0x160),*(uint *)pFVar7
               ,*(uint *)(pFVar7 + 4),*(ulong64 *)(pFVar7 + 8));
    pFVar7 = pFVar7 + 0x10;
  }
  AlgoImpl::
  IntroSortInternal<FAudioChunkCache,int,FIdentityFunctor,TDereferenceWrapper<FAudioChunkCache,TLess<void>_>_>
            ((FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data,iVar4,local_res8[0],
             (TLess<void> *)local_res10);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return this;
}

// ~FCachedAudioStreamingManager @ 14768a510

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::~FCachedAudioStreamingManager(FCachedAudioStreamingManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCachedAudioStreamingManager__6B_;
  DestructItems<FAudioChunkCache,int>
            ((FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data,
             (this->CacheArray).ArrayNum);
  pFVar1 = (this->CacheArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// AddForceInlineSoundWave @ 147691180

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::AddForceInlineSoundWave
          (FCachedAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0 < (this->CacheArray).ArrayNum) {
    FAudioChunkCache::AddForceInlineSoundWave
              ((FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data,param_1);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6168786850648423910>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                     ,0x21a,"CacheArray.Num() > 0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AddLevel @ 1476911f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::AddLevel(FCachedAudioStreamingManager *this,ULevel *param_1)

{
  return;
}

// AddMemoryCountedFeature @ 147691c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::AddMemoryCountedFeature
          (FCachedAudioStreamingManager *this,FAudioStreamCacheMemoryHandle *param_1)

{
  FAudioChunkCache *this_00;
  TAtomic<unsigned___int64> *pTVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  float fVar8;
  FName local_res8;
  FString local_18;
  
  if ((this->CacheArray).ArrayNum < 1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423892>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x22c,"CacheArray.Num() > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_00 = (FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data;
    if (4 < (byte)LogAudioStreamCaching._0_1_) {
      local_res8 = param_1->FeatureName;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pTVar1 = (this_00->FeatureMemoryCounterBytes).Obj.Ptr;
    LOCK();
    *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + param_1->MemoryUseInBytes);
    UNLOCK();
    if (4 < (byte)LogAudioStreamCaching._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    }
    uVar6 = (longlong)*(this_00->ForceInlineMemoryCounterBytes).Obj.Ptr +
            (longlong)*(this_00->FeatureMemoryCounterBytes).Obj.Ptr +
            (longlong)*(this_00->MemoryCounterBytes).Obj.Ptr;
    if ((TrimCacheWhenOverBudgetCVar != 0) && (uVar2 = this_00->MemoryLimitBytes, uVar2 < uVar6)) {
      if (MemoryLimitTrimPercentageCVar <= 0.0) {
        uVar7 = uVar6 - uVar2;
      }
      else {
        fVar8 = MemoryLimitTrimPercentageCVar;
        if (__real_3f800000 <= MemoryLimitTrimPercentageCVar) {
          fVar8 = __real_3f800000;
        }
        fVar8 = fVar8 * (float)uVar2;
        lVar5 = 0;
        if ((__real_5f000000 <= fVar8) && (fVar8 = fVar8 - __real_5f000000, fVar8 < __real_5f000000)
           ) {
          lVar5 = -0x8000000000000000;
        }
        uVar7 = (longlong)fVar8 + lVar5;
      }
      FAudioChunkCache::TrimMemory(this_00,uVar7,true);
    }
  }
  return;
}

// AddReferenceToChunk @ 1476928d0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::AddReferenceToChunk
          (FCachedAudioStreamingManager *this,FAudioChunkHandle *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FAudioChunkCache *this_00;
  FCacheElement *pFVar3;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FChunkKey local_28;
  
  FLLMScope::FLLMScope(local_res10,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AudioStreamCache,true);
  this_00 = GetCacheForChunkSize(this,param_1->CachedDataNumBytes);
  if (this_00 == (FAudioChunkCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x2dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.SoundWaveName = param_1->CorrespondingWaveName;
  local_28.ObjectKey.A = (param_1->CorrespondingWaveGuid).A;
  local_28.ObjectKey.B = (param_1->CorrespondingWaveGuid).B;
  local_28.ObjectKey.C = (param_1->CorrespondingWaveGuid).C;
  local_28.ObjectKey.D = (param_1->CorrespondingWaveGuid).D;
  local_28.ChunkIndex = param_1->ChunkIndex;
  lpCriticalSection = &this_00->CacheMutationCriticalSection;
  if (lpCriticalSection != (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = FAudioChunkCache::FindElementForKey(this_00,&local_28);
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
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// BlockTillAllRequestsFinished @ 147695050

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

int __thiscall
FCachedAudioStreamingManager::BlockTillAllRequestsFinished
          (FCachedAudioStreamingManager *this,float param_1,bool param_2)

{
  int iVar1;
  FAudioChunkCache *this_00;
  FAudioChunkCache *pFVar2;
  undefined1 local_res8 [8];
  FLLMScope local_res20 [2];
  FMemScope local_28 [2];
  
  FLLMScope::FLLMScope(local_res20,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(local_28,AudioStreamCache,true);
  iVar1 = (this->CacheArray).ArrayNum;
  this_00 = (FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->CacheArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAudioChunkCache,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FAudioChunkCache::CancelAllPendingLoads(this_00);
    this_00 = this_00 + 1;
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res20);
  return 0;
}

// CancelForcedResources @ 147698340

void __thiscall
FCachedAudioStreamingManager::CancelForcedResources(FCachedAudioStreamingManager *this)

{
  return;
}

// GenerateMemoryReport @ 1476aa860

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FString * __thiscall
FCachedAudioStreamingManager::GenerateMemoryReport
          (FCachedAudioStreamingManager *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FAudioChunkCache *this_00;
  FAudioChunkCache *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (this->CacheArray).ArrayNum;
  this_00 = (FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data;
  pFVar4 = this_00 + iVar1;
  while( true ) {
    if ((this->CacheArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAudioChunkCache,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar4) break;
    pFVar3 = FAudioChunkCache::DebugPrint(this_00,&local_28);
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
  }
  return __return_storage_ptr__;
}

// GetCacheForChunkSize @ 1476ae950

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FAudioChunkCache * __thiscall
FCachedAudioStreamingManager::GetCacheForChunkSize(FCachedAudioStreamingManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FAudioChunkCache *pFVar5;
  uint uVar6;
  uint uVar7;
  FAudioChunkCache *pFVar8;
  FAudioChunkCache *pFVar9;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  uint *local_res18;
  FMemScope local_res20;
  
  local_res10[0] = param_1;
  FLLMScope::FLLMScope(local_res8,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AudioStreamCache,true);
  pFVar8 = (FAudioChunkCache *)0x0;
  pFVar5 = pFVar8;
  pFVar9 = pFVar8;
  if (0 < (this->CacheArray).ArrayNum) {
    do {
      uVar6 = (uint)pFVar5;
      uVar7 = ~uVar6 >> 0x1f;
      uVar3 = 0;
      uVar4 = uVar3;
      if ((int)uVar6 < (this->CacheArray).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAudioChunkCache *)(*pcVar1)();
        return pFVar5;
      }
      if ((*(int *)((this->CacheArray).AllocatorInstance.Data + -0x60 +
                   (longlong)&(pFVar9->CacheMutationCriticalSection).Value) < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CacheArray[CacheIndex].MaxChunkSize >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                             ,0x2ac,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAudioChunkCache *)(*pcVar1)();
        return pFVar5;
      }
      uVar4 = uVar3;
      if ((int)uVar6 < (this->CacheArray).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAudioChunkCache *)(*pcVar1)();
        return pFVar5;
      }
      if (local_res10[0] <=
          *(uint *)((this->CacheArray).AllocatorInstance.Data + -0x60 +
                   (longlong)&(pFVar9->CacheMutationCriticalSection).Value)) {
        if ((int)uVar6 < (this->CacheArray).ArrayNum) {
          uVar3 = uVar7;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FAudioChunkCache *)(*pcVar1)();
          return pFVar5;
        }
        pFVar8 = (FAudioChunkCache *)
                 ((this->CacheArray).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x160);
        goto LAB_1476aea95;
      }
      pFVar5 = (FAudioChunkCache *)(ulonglong)(uVar6 + 1);
      pFVar9 = pFVar9 + 1;
    } while ((int)(uVar6 + 1) < (this->CacheArray).ArrayNum);
  }
  local_res18 = local_res10;
  `FCachedAudioStreamingManager::GetCacheForChunkSize'::__l2::<lambda_1>::operator()(&local_res18);
LAB_1476aea95:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar8;
}

// GetCacheForWave @ 1476aeb10

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FAudioChunkCache * __thiscall
FCachedAudioStreamingManager::GetCacheForWave
          (FCachedAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAudioChunkCache *pFVar4;
  FStreamedAudioChunk *pFVar5;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AudioStreamCache,true);
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423781>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x29b,"InSoundWave.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAudioChunkCache *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    uVar3 = FSoundWaveProxy::GetNumChunks(param_1->Object);
    if (1 < uVar3) {
      if (param_1->Object == (FSoundWaveProxy *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FAudioChunkCache *)(*pcVar1)();
          return pFVar4;
        }
      }
      pFVar5 = FSoundWaveProxy::GetChunk(param_1->Object,1);
      pFVar4 = GetCacheForChunkSize(this,pFVar5->AudioDataSize);
      goto LAB_1476aeb82;
    }
  }
  pFVar4 = (FAudioChunkCache *)0x0;
LAB_1476aeb82:
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return pFVar4;
}

// GetLoadedChunk @ 1476b1a60

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FAudioChunkHandle * __thiscall
FCachedAudioStreamingManager::GetLoadedChunk
          (FCachedAudioStreamingManager *this,FAudioChunkHandle *__return_storage_ptr__,
          TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,bool param_3,bool param_4)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  code *pcVar1;
  FName FVar2;
  TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
  *pTVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FAudioChunkHandle *pFVar7;
  FAudioChunkCache *pFVar8;
  FSoundWaveProxy *pFVar9;
  FName *pFVar10;
  ulong64 uVar11;
  ForElementType<FSetElementId> FVar12;
  uint uVar13;
  uint uVar14;
  FLLMScope local_res18 [2];
  uint local_res20;
  TSharedPtr<FSoundWaveData,1> local_158;
  FChunkKey local_148;
  uint local_128;
  FMemScope local_120;
  int local_118;
  uint local_114;
  FName local_110;
  FChunkKey local_108;
  TArrayView<unsigned_char,int> local_e8;
  TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
  *local_d8;
  FChunkKey *local_d0;
  FMemScope local_c8;
  FAudioChunkCache *local_c0;
  TSharedPtr<FSoundWaveProxy,1> *local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  
  local_res20 = param_2;
  FLLMScope::FLLMScope(local_res18,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(&local_120,AudioStreamCache,true);
  uVar14 = (uint)param_3;
  if (ForceBlockForLoadCVar != 0) {
    uVar14 = 1;
  }
  local_114 = uVar14;
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423863>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x249,"SoundWave.IsValid()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
      return pFVar7;
    }
    FAudioChunkHandle::FAudioChunkHandle(__return_storage_ptr__);
  }
  else {
    FSoundWaveProxy::GetSoundWaveData(param_1->Object,&local_158);
    if (local_158.Object == (FSoundWaveData *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6168786850648423857>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x24f,"SoundWaveData.IsValid()");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
        return pFVar7;
      }
    }
    else {
      pFVar8 = GetCacheForWave(this,param_1);
      local_c0 = pFVar8;
      if (pFVar8 != (FAudioChunkCache *)0x0) {
        if ((param_2 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ChunkIndex != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                               ,0x259,
                               L"Decoder tried to access the zeroth chunk through the streaming manager. Use USoundWave::GetZerothChunk() instead."
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
          return pFVar7;
        }
        local_148.SoundWaveName.ComparisonIndex.Value = 0;
        local_148.SoundWaveName.Number = 0;
        local_148.ObjectKey.A = 0;
        local_148.ObjectKey.B = 0;
        local_148.ObjectKey.C = 0;
        local_148.ObjectKey.D = 0;
        local_148.ChunkIndex = param_2;
        if (local_158.Object == (FSoundWaveData *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L"");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
            return pFVar7;
          }
        }
        else {
          if ((local_158.Object == (FSoundWaveData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
            return pFVar7;
          }
          local_148.SoundWaveName = (local_158.Object)->NameCached;
          local_148.ObjectKey.A = ((local_158.Object)->WaveGuid).A;
          local_148.ObjectKey.B = ((local_158.Object)->WaveGuid).B;
          local_148.ObjectKey.C = ((local_158.Object)->WaveGuid).C;
          local_148.ObjectKey.D = ((local_158.Object)->WaveGuid).D;
        }
        if ((local_148.ChunkIndex == 0xffffffff) ||
           (uVar6 = FSoundWaveData::GetNumChunks(local_158.Object), uVar6 <= local_148.ChunkIndex))
        {
          if (2 < (byte)LogAudioStreamCaching._0_1_) {
            if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
              return pFVar7;
            }
            pFVar10 = FSoundWaveProxy::GetFName(param_1->Object);
            ::FName::ToString(pFVar10,&local_80);
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
          FAudioChunkHandle::FAudioChunkHandle(__return_storage_ptr__);
        }
        else {
          local_110 = (FName)FAudioChunkCache::GetCacheLookupIDForChunk(pFVar8,&local_148);
          bVar4 = SUB41(uVar14,0);
          if ((param_4 == false) && (bVar4 == false)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          FAudioChunkCache::GetChunk
                    (pFVar8,&local_e8,&local_148,&local_158,bVar4,bVar5,(ulong64 *)&local_110);
          if (((3 < (byte)LogAudioStreamCaching._0_1_) && (bVar4 != false)) &&
             (local_e8.DataPtr == (uchar *)0x0)) {
            pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
            pFVar10 = FSoundWaveProxy::GetFName(pFVar9);
            ::FName::ToString(pFVar10,&local_b0);
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
          }
          lpCriticalSection = &pFVar8->CacheMutationCriticalSection;
          if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          local_d8 = (TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
                      *)&pFVar8->CacheLookupIdMap;
          uVar11 = CityHash64((char *)&local_148.ObjectKey,0x10);
          uVar14 = local_148.ChunkIndex;
          FVar2 = local_148.SoundWaveName;
          local_128 = ::GetTypeHash(local_148.SoundWaveName.ComparisonIndex);
          pTVar3 = local_d8;
          local_128 = local_128 + FVar2.Number;
          local_128 = local_128 * 0x40 + uVar14 + 0x9e3779b9 + (local_128 >> 2) ^ local_128;
          local_128 = local_128 * 0x40 + -0x61c88647 + (int)uVar11 + (local_128 >> 2) ^ local_128;
          if (*(int *)&(local_d8->Elements).field_0x8 != *(int *)&(local_d8->Elements).field_0x34) {
            FVar12 = (local_d8->Hash).SecondaryData;
            if (FVar12 == (ForElementType<FSetElementId>)0x0) {
              FVar12 = (ForElementType<FSetElementId>)&local_d8->Hash;
            }
            uVar14 = *(uint *)((longlong)FVar12 +
                              (ulonglong)(local_d8->HashSize - 1U & local_128) * 4);
            if (uVar14 != 0xffffffff) {
              do {
                pFVar10 = (FName *)((longlong)(int)uVar14 * 0x30 + *(longlong *)&local_d8->Elements)
                ;
                if (*pFVar10 == local_148.SoundWaveName) {
                  if ((((local_148.ObjectKey.D == pFVar10[2].Number &&
                        local_148.ObjectKey.C == pFVar10[2].ComparisonIndex.Value) &&
                       local_148.ObjectKey.B == pFVar10[1].Number) &&
                       local_148.ObjectKey.A == pFVar10[1].ComparisonIndex.Value) &&
                     (pFVar10[3].ComparisonIndex.Value == local_148.ChunkIndex)) {
                    if ((uVar14 != 0xffffffff) && (pFVar10 != (FName *)0x0)) goto LAB_1476b1e90;
                    break;
                  }
                }
                uVar14 = pFVar10[5].ComparisonIndex.Value;
              } while (uVar14 != 0xffffffff);
            }
          }
          local_d0 = &local_148;
          TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FAudioChunkCache::FChunkKey_const_&>_>
                    (local_d8,(uint)&local_118,
                     (TKeyInitializer<FAudioChunkCache::FChunkKey_const_&> *)(ulonglong)local_128,
                     (bool *)&local_d0);
          pFVar10 = (FName *)((longlong)local_118 * 0x30 + *(longlong *)&pTVar3->Elements);
LAB_1476b1e90:
          pFVar10[4] = local_110;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          uVar14 = local_res20;
          if (((5 < (byte)LogAudioStreamCaching._0_1_) && ((char)local_114 == '\0')) &&
             (local_e8.DataPtr == (uchar *)0x0)) {
            pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
            pFVar10 = FSoundWaveProxy::GetFName(pFVar9);
            ::FName::ToString(pFVar10,&local_a0);
            uVar14 = local_res20;
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
          }
          FLLMScope::FLLMScope((FLLMScope *)&param_3,AudioStreamCache,false,None,Default,true);
          FMemScope::FMemScope(&local_c8,AudioStreamCache,true);
          if (param_1->Object == (FSoundWaveProxy *)0x0) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6168786850648423743>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                               ,0x2c1,"InSoundWave.IsValid()");
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
              return pFVar7;
            }
            uVar13 = 0xffffffff;
          }
          else {
            uVar6 = FSoundWaveProxy::GetNumChunks(param_1->Object);
            if ((int)uVar6 < 3) {
              uVar13 = 0xffffffff;
            }
            else {
              uVar13 = 1;
              if (uVar14 != uVar6 - 1) {
                uVar13 = uVar14 + 1;
              }
            }
          }
          FMemScope::~FMemScope(&local_c8);
          FLLMScope::~FLLMScope((FLLMScope *)&param_3);
          if (uVar13 != 0xffffffff) {
            local_108.SoundWaveName.ComparisonIndex.Value = 0;
            local_108.SoundWaveName.Number = 0;
            local_108.ObjectKey.A = 0;
            local_108.ObjectKey.B = 0;
            local_108.ObjectKey.C = 0;
            local_108.ObjectKey.D = 0;
            local_108.ChunkIndex = uVar13;
            if (local_158.Object != (FSoundWaveData *)0x0) {
              if ((local_158.Object == (FSoundWaveData *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar4)) {
                pcVar1 = (code *)swi(3);
                pFVar7 = (FAudioChunkHandle *)(*pcVar1)();
                return pFVar7;
              }
              local_108.SoundWaveName = (local_158.Object)->NameCached;
              local_108.ObjectKey.A = ((local_158.Object)->WaveGuid).A;
              local_108.ObjectKey.B = ((local_158.Object)->WaveGuid).B;
              local_108.ObjectKey.C = ((local_158.Object)->WaveGuid).C;
              local_108.ObjectKey.D = ((local_158.Object)->WaveGuid).D;
            }
            pFVar8 = local_c0;
            local_58 = &
                       ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
            ;
            local_40 = 0;
            local_50 = `FCachedAudioStreamingManager::GetLoadedChunk'::__l88::<lambda_1>::
                       <lambda_invoker_cdecl>;
            local_68[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<void_(__cdecl*)(enum_EAudioChunkLoadResult),void,enum_EAudioChunkLoadResult>
                          ::Call;
            uVar11 = FAudioChunkCache::AddOrTouchChunk
                               (local_c0,&local_108,&local_158,
                                (TFunction<void___cdecl(EAudioChunkLoadResult)> *)local_68,
                                AnyNormalThreadNormalTask,param_4);
            if (uVar11 == 0xffffffffffffffff) {
              if (2 < (byte)LogAudioStreamCaching._0_1_) {
                pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
                pFVar10 = FSoundWaveProxy::GetFName(pFVar9);
                ::FName::ToString(pFVar10,&local_90);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
                if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_90.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              FAudioChunkCache::SetCacheLookupIDForChunk(pFVar8,&local_108,uVar11);
            }
          }
          pFVar9 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
          pFVar10 = FSoundWaveProxy::GetFName(pFVar9);
          IAudioStreamingManager::BuildChunkHandle
                    (__return_storage_ptr__,local_e8.DataPtr,local_e8.ArrayNum,param_1,pFVar10,
                     uVar14,(ulong64)local_110);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_158.SharedReferenceCount.ReferenceController);
        FMemScope::~FMemScope(&local_120);
        FLLMScope::~FLLMScope(local_res18);
        return __return_storage_ptr__;
      }
      local_b8 = param_1;
      `FCachedAudioStreamingManager::GetLoadedChunk'::__l113::<lambda_2>::operator()(&local_b8);
    }
    FAudioChunkHandle::FAudioChunkHandle(__return_storage_ptr__);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  FMemScope::~FMemScope(&local_120);
  FLLMScope::~FLLMScope(local_res18);
  return __return_storage_ptr__;
}

// GetNextChunkIndex @ 1476b2520

int __cdecl
FCachedAudioStreamingManager::GetNextChunkIndex(TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AudioStreamCache,true);
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423743>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x2c1,"InSoundWave.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    uVar4 = FSoundWaveProxy::GetNumChunks(param_1->Object);
    if (2 < (int)uVar4) {
      iVar3 = 1;
      if (param_2 != uVar4 - 1) {
        iVar3 = param_2 + 1;
      }
      goto LAB_1476b25b5;
    }
  }
  iVar3 = -1;
LAB_1476b25b5:
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return iVar3;
}

// HandleStarvation @ 1476b6ff0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::HandleStarvation
          (FCachedAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,
          uint param_3,uint param_4)

{
  FAudioChunkCache *this_00;
  
  this_00 = GetCacheForWave(this,param_1);
  if (this_00 != (FAudioChunkCache *)0x0) {
    FAudioChunkCache::HandleStarvation(this_00,param_1,param_2,param_3,param_4);
  }
  return;
}

// NotifyLevelChange @ 1476bd860

void __thiscall FCachedAudioStreamingManager::NotifyLevelChange(FCachedAudioStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 1476bd870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::NotifyLevelOffset
          (FCachedAudioStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  return;
}

// RemoveForceInlineSoundWave @ 1476c2880

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::RemoveForceInlineSoundWave
          (FCachedAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0 < (this->CacheArray).ArrayNum) {
    FAudioChunkCache::RemoveForceInlineSoundWave
              ((FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data,param_1);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6168786850648423901>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                     ,0x223,"CacheArray.Num() > 0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveLevel @ 1476c2c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::RemoveLevel(FCachedAudioStreamingManager *this,ULevel *param_1)

{
  return;
}

// RemoveMemoryCountedFeature @ 1476c2d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::RemoveMemoryCountedFeature
          (FCachedAudioStreamingManager *this,FAudioStreamCacheMemoryHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FName local_res8;
  FString local_18;
  
  if ((this->CacheArray).ArrayNum < 1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423883>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x235,"CacheArray.Num() > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar1 = (this->CacheArray).AllocatorInstance.Data;
    if (4 < (byte)LogAudioStreamCaching._0_1_) {
      local_res8 = param_1->FeatureName;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if ((**(ulonglong **)(pFVar1 + 0x48) < param_1->MemoryUseInBytes) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FeatureMemoryCounterBytes->Load() >= Feature.GetMemoryUseInBytes()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                           ,0x4c2,L"Count (%lu) < Remove (%lu)"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar2 = *(longlong **)(pFVar1 + 0x48);
    LOCK();
    *plVar2 = *plVar2 - param_1->MemoryUseInBytes;
    UNLOCK();
    if (4 < (byte)LogAudioStreamCaching._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    }
  }
  return;
}

// RemoveReferenceToChunk @ 1476c3270

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FCachedAudioStreamingManager::RemoveReferenceToChunk
          (FCachedAudioStreamingManager *this,FAudioChunkHandle *param_1)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FAudioChunkCache *this_00;
  FCacheElement *pFVar3;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FChunkKey local_28;
  
  FLLMScope::FLLMScope(local_res10,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AudioStreamCache,true);
  this_00 = GetCacheForChunkSize(this,param_1->CachedDataNumBytes);
  if (this_00 == (FAudioChunkCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x2ef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.SoundWaveName = param_1->CorrespondingWaveName;
  local_28.ObjectKey.A = (param_1->CorrespondingWaveGuid).A;
  local_28.ObjectKey.B = (param_1->CorrespondingWaveGuid).B;
  local_28.ObjectKey.C = (param_1->CorrespondingWaveGuid).C;
  local_28.ObjectKey.D = (param_1->CorrespondingWaveGuid).D;
  local_28.ChunkIndex = param_1->ChunkIndex;
  lpCriticalSection = &this_00->CacheMutationCriticalSection;
  if (lpCriticalSection != (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = FAudioChunkCache::FindElementForKey(this_00,&local_28);
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
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RenderStatAudioStreaming @ 1476c33e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

int __thiscall
FCachedAudioStreamingManager::RenderStatAudioStreaming
          (FCachedAudioStreamingManager *this,UWorld *param_1,FViewport *param_2,FCanvas *param_3,
          int param_4,int param_5,TVector<double> *param_6,TRotator<double> *param_7)

{
  int iVar1;
  FCanvas *pFVar2;
  int iVar3;
  UFont *pUVar4;
  size_t sVar5;
  ForAnyElementType FVar6;
  FAudioChunkCache *this_00;
  int iVar7;
  FAudioChunkCache *pFVar8;
  int iVar9;
  int local_res8;
  int local_resc;
  UWorld *local_res10;
  FCanvas *local_res18;
  FCanvas *local_res20;
  undefined4 uVar10;
  FString local_88;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  
  local_res10 = param_1;
  local_res18 = (FCanvas *)param_2;
  local_res20 = param_3;
  pUVar4 = UEngine::GetSmallFont();
  iVar7 = param_5;
  local_68.Size = 0xe;
  local_68.DataPtr = L"Stream Caches:";
  FCanvas::DrawShadowedString
            (param_3,(double)param_4,(double)param_5,&local_68,pUVar4,&FLinearColor::White,
             &FLinearColor::Black);
  iVar1 = (this->CacheArray).ArrayNum;
  iVar7 = iVar7 + 0xc;
  this_00 = (FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data;
  pFVar8 = this_00 + iVar1;
  iVar9 = iVar7;
  do {
    if ((this->CacheArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAudioChunkCache,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_5);
    }
    if (this_00 == pFVar8) {
      return iVar9 + iVar7;
    }
    ::FString::PrintfImpl(&local_88,L"Cache %d");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar6.Data = local_88.Data.AllocatorInstance.Data;
    }
    ::FString::FString((FString *)&local_68,(wchar_t *)FVar6.Data);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pUVar4 = UEngine::GetSmallFont();
    if (local_68.Size == 0) {
      local_78 = L"";
LAB_1476c351c:
      sVar5 = wcslen(local_78);
      iVar3 = (int)sVar5;
    }
    else {
      iVar3 = 0;
      local_78 = local_68.DataPtr;
      if (local_68.DataPtr != (wchar_t *)0x0) goto LAB_1476c351c;
    }
    pFVar2 = local_res20;
    local_58._12_4_ = uStack_6c;
    local_58.Size = iVar3;
    uVar10 = 1;
    local_58.DataPtr = local_78;
    iStack_70 = iVar3;
    FCanvas::DrawShadowedString
              (local_res20,(double)param_4,(double)iVar7,&local_58,pUVar4,&FLinearColor::White,
               &FLinearColor::Black);
    iVar7 = iVar7 + 0xc;
    FAudioChunkCache::DebugDisplay
              (this_00,(UWorld *)&local_res8,(FViewport *)local_res10,local_res18,(int)pFVar2,
               param_4,(TVector<double> *)CONCAT44(uVar10,iVar7),(TRotator<double> *)param_6);
    param_4 = param_4 + local_res8;
    iVar3 = local_resc;
    if (local_resc < iVar9) {
      iVar3 = iVar9;
    }
    iVar9 = iVar3;
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
    this_00 = this_00 + 1;
  } while( true );
}

// RequestChunk @ 1476c3630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
FCachedAudioStreamingManager::RequestChunk
          (FCachedAudioStreamingManager *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,
          TFunction<void___cdecl(EAudioChunkLoadResult)> *param_3,Type param_4,bool param_5)

{
  TDontCopy<UE::FWindowsRecursiveMutex> *lpCriticalSection;
  FSoundWaveData *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  FAudioChunkCache *this_00;
  TSharedPtr<FSoundWaveData,1> *pTVar6;
  ulong64 uVar7;
  undefined8 *puVar8;
  FName *pFVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  uint uVar12;
  TMap<FAudioChunkCache::FChunkKey,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>_>
  *this_01;
  FLLMScope local_d8;
  uint local_d4;
  FChunkKey local_d0;
  int local_b0 [2];
  FName local_a8;
  FMemScope local_a0;
  FChunkKey *local_98;
  TSharedPtr<FSoundWaveData,1> local_90;
  TSharedPtr<FSoundWaveData,1> local_80;
  TFunction<void___cdecl(EAudioChunkLoadResult)> local_68;
  
  FLLMScope::FLLMScope(&local_d8,AudioStreamCache,false,None,Default,true);
  FMemScope::FMemScope(&local_a0,AudioStreamCache,true);
  this_00 = GetCacheForWave(this,param_1);
  if (this_00 != (FAudioChunkCache *)0x0) {
    if (param_1->Object != (FSoundWaveProxy *)0x0) {
      pTVar6 = FSoundWaveProxy::GetSoundWaveData(param_1->Object,&local_90);
      local_d0.SoundWaveName.ComparisonIndex.Value = 0;
      local_d0.SoundWaveName.Number = 0;
      local_d0.ObjectKey.A = 0;
      local_d0.ObjectKey.B = 0;
      local_d0.ObjectKey.C = 0;
      local_d0.ObjectKey.D = 0;
      local_d0.ChunkIndex = param_2;
      if (pTVar6->Object != (FSoundWaveData *)0x0) {
        local_d0.SoundWaveName = pTVar6->Object->NameCached;
        if ((pTVar6->Object == (FSoundWaveData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar1 = pTVar6->Object;
        local_d0.ObjectKey.A = (pFVar1->WaveGuid).A;
        local_d0.ObjectKey.B = (pFVar1->WaveGuid).B;
        local_d0.ObjectKey.C = (pFVar1->WaveGuid).C;
        local_d0.ObjectKey.D = (pFVar1->WaveGuid).D;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      local_68._0_8_ = *(undefined8 *)param_3;
      local_68._40_8_ = 0;
      if (local_68._0_8_ != 0) {
        puVar8 = (undefined8 *)&param_3->field_0x10;
        if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)&param_3->field_0x28;
        }
        (**(code **)*puVar8)(puVar8,&local_68.field_0x10);
      }
      if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pTVar6 = FSoundWaveProxy::GetSoundWaveData(param_1->Object,&local_80);
      local_a8 = (FName)FAudioChunkCache::AddOrTouchChunk
                                  (this_00,&local_d0,pTVar6,&local_68,param_4,param_5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      lpCriticalSection = &this_00->CacheMutationCriticalSection;
      if (lpCriticalSection == (TDontCopy<UE::FWindowsRecursiveMutex> *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this_01 = &this_00->CacheLookupIdMap;
      uVar7 = CityHash64((char *)&local_d0.ObjectKey,0x10);
      uVar12 = local_d0.ChunkIndex;
      FVar3 = local_d0.SoundWaveName;
      local_d4 = ::GetTypeHash(local_d0.SoundWaveName.ComparisonIndex);
      local_d4 = local_d4 + FVar3.Number;
      local_d4 = local_d4 * 0x40 + uVar12 + 0x9e3779b9 + (local_d4 >> 2) ^ local_d4;
      local_d4 = local_d4 * 0x40 + -0x61c88647 + (int)uVar7 + (local_d4 >> 2) ^ local_d4;
      if (*(int *)&(this_00->CacheLookupIdMap).field_0x8 !=
          *(int *)&(this_00->CacheLookupIdMap).field_0x34) {
        puVar11 = *(undefined1 **)&(this_00->CacheLookupIdMap).field_0x40;
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &(this_00->CacheLookupIdMap).field_0x38;
        }
        uVar12 = *(uint *)(puVar11 +
                          (ulonglong)
                          (*(int *)&(this_00->CacheLookupIdMap).field_0x48 - 1U & local_d4) * 4);
        if (uVar12 != 0xffffffff) {
          do {
            pFVar9 = (FName *)((longlong)(int)uVar12 * 0x30 + *(longlong *)&this_01->field_0x0);
            if (((*pFVar9 == local_d0.SoundWaveName) &&
                (((local_d0.ObjectKey.D == pFVar9[2].Number &&
                  local_d0.ObjectKey.C == pFVar9[2].ComparisonIndex.Value) &&
                 local_d0.ObjectKey.B == pFVar9[1].Number) &&
                 local_d0.ObjectKey.A == pFVar9[1].ComparisonIndex.Value)) &&
               (pFVar9[3].ComparisonIndex.Value == local_d0.ChunkIndex)) {
              if ((uVar12 != 0xffffffff) && (pFVar9 != (FName *)0x0)) goto LAB_1476c398a;
              break;
            }
            uVar12 = pFVar9[5].ComparisonIndex.Value;
          } while (uVar12 != 0xffffffff);
        }
      }
      local_98 = &local_d0;
      TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FAudioChunkCache::FChunkKey_const_&>_>
                ((TSet<TTuple<FAudioChunkCache::FChunkKey,unsigned___int64>,TDefaultMapHashableKeyFuncs<FAudioChunkCache::FChunkKey,unsigned___int64,0>,FDefaultSetAllocator>
                  *)this_01,(uint)local_b0,
                 (TKeyInitializer<FAudioChunkCache::FChunkKey_const_&> *)(ulonglong)local_d4,
                 (bool *)&local_98);
      pFVar9 = (FName *)((longlong)local_b0[0] * 0x30 + *(longlong *)&this_01->field_0x0);
LAB_1476c398a:
      FVar3 = local_a8;
      pFVar9[4] = local_a8;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FMemScope::~FMemScope(&local_a0);
      FLLMScope::~FLLMScope(&local_d8);
      if (*(longlong *)param_3 != 0) {
        plVar10 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar10 = *(longlong **)&param_3->field_0x28;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      return FVar3 != (FName)0xffffffffffffffff;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648423678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x302,"SoundWave.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_a8 = (FName)param_1;
  `FCachedAudioStreamingManager::RequestChunk'::__l7::<lambda_1>::operator()(&local_a8);
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(&local_d8);
  if (*(longlong *)param_3 != 0) {
    plVar10 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return false;
}

// SetDisregardWorldResourcesForFrames @ 1476c7c10

void __thiscall
FCachedAudioStreamingManager::SetDisregardWorldResourcesForFrames
          (FCachedAudioStreamingManager *this,int param_1)

{
  return;
}

// SetProfilingMode @ 1476c9240

void __thiscall
FCachedAudioStreamingManager::SetProfilingMode(FCachedAudioStreamingManager *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = (this->CacheArray).ArrayNum;
  pFVar2 = (this->CacheArray).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x160;
  if (param_1) {
    while( true ) {
      if ((this->CacheArray).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FAudioChunkCache,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar2 == pFVar3) break;
      pFVar2[0x158] = (FScriptContainerElement)0x1;
      pFVar2 = pFVar2 + 0x160;
    }
  }
  else {
    while( true ) {
      if ((this->CacheArray).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FAudioChunkCache,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar2 == pFVar3) break;
      pFVar2[0x158] = (FScriptContainerElement)0x0;
      pFVar2 = pFVar2 + 0x160;
    }
  }
  return;
}

// TrimMemory @ 1476cb600

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FCachedAudioStreamingManager::TrimMemory(FCachedAudioStreamingManager *this,ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  FAudioChunkCache *this_00;
  FAudioChunkCache *pFVar6;
  ulong64 uVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->CacheArray).ArrayNum;
  this_00 = (FAudioChunkCache *)(this->CacheArray).AllocatorInstance.Data;
  pFVar6 = this_00 + iVar1;
  uVar7 = param_1;
  while( true ) {
    if ((this->CacheArray).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAudioChunkCache,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar6) break;
    uVar4 = FAudioChunkCache::TrimMemory(this_00,uVar7,false);
    uVar5 = uVar7;
    if (uVar4 < uVar7) {
      uVar5 = uVar4;
    }
    uVar7 = uVar7 - uVar5;
    if (uVar7 == 0) break;
    this_00 = this_00 + 1;
  }
  if (param_1 < uVar7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytesLeftToFree <= NumBytesToFree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x8b1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
  }
  if (3 < (byte)LogAudioStreamCaching._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
  }
  return param_1 - uVar7;
}

// UpdateResourceStreaming @ 1476ccd20

void __thiscall
FCachedAudioStreamingManager::UpdateResourceStreaming
          (FCachedAudioStreamingManager *this,float param_1,bool param_2)

{
  return;
}

// operator() @ 15050edc0

bool __thiscall
`FCachedAudioStreamingManager::GetCacheForChunkSize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6168786850648423754>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6168786850648423754>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15050ef90

bool __thiscall
`FCachedAudioStreamingManager::RequestChunk'::__l7::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6168786850648423659>);
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
                      (&bGEnsureHasExecuted<_6168786850648423659>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050f02c;
    }
  }
  bVar3 = false;
LAB_15050f02c:
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

// operator() @ 15050f700

bool __thiscall
`FCachedAudioStreamingManager::GetLoadedChunk'::__l113::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6168786850648423791>);
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
                      (&bGEnsureHasExecuted<_6168786850648423791>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050f79c;
    }
  }
  bVar3 = false;
LAB_15050f79c:
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

