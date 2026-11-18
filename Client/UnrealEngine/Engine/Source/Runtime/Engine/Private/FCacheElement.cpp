// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetChunk @ 1476afd80

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

FStreamedAudioChunk * __thiscall
FAudioChunkCache::FCacheElement::GetChunk(FCacheElement *this,uint param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  uint uVar4;
  FStreamedAudioChunk *pFVar5;
  bool bVar6;
  uint local_res10 [2];
  FSoundWaveData *local_38;
  TReferenceControllerBase<1> *local_30;
  uint *local_28;
  FSoundWaveData **local_20;
  FString local_18;
  
  local_30 = (this->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController;
  pFVar5 = (FStreamedAudioChunk *)0x0;
  local_38 = (FSoundWaveData *)0x0;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = local_30->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_30 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1476afdd5;
      }
      LOCK();
      aVar3 = local_30->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        local_30->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      local_38 = (this->SoundWaveWeakPtr).Object;
    }
  }
LAB_1476afdd5:
  local_res10[0] = param_1;
  if (local_38 == (FSoundWaveData *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6168786850648424027>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                       ,0x1a5,"SoundWaveDataPtr");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStreamedAudioChunk *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    if ((local_38 == (FSoundWaveData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStreamedAudioChunk *)(*pcVar1)();
      return pFVar5;
    }
    if (local_38->LoadingBehavior == ForceInline) {
      EnumToString(ForceInline);
      if ((local_38 == (FSoundWaveData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FStreamedAudioChunk *)(*pcVar1)();
        return pFVar5;
      }
      ::FName::ToString(&local_38->NameCached,&local_18);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr->GetLoadingBehavior() != ESoundWaveLoadingBehavior::ForceInline"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioStreamingCache.cpp"
                         ,0x1a9,
                         L"Calling GetNumChunks on a FSoundWaveProxy that is Force-Inlined is not allowed! SoundWave: %s - %s"
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FStreamedAudioChunk *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((local_38 == (FSoundWaveData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStreamedAudioChunk *)(*pcVar1)();
      return pFVar5;
    }
    uVar4 = FSoundWaveData::GetNumChunks(local_38);
    if (uVar4 <= local_res10[0]) {
      local_28 = local_res10;
      local_20 = &local_38;
      bVar6 = `FAudioChunkCache::FCacheElement::GetChunk'::__l15::<lambda_1>::operator()(&local_28);
      if (!bVar6) goto LAB_1476aff89;
    }
    if ((local_38 == (FSoundWaveData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStreamedAudioChunk *)(*pcVar1)();
      return pFVar5;
    }
    pFVar5 = FSoundWaveData::GetChunk(local_38,local_res10[0]);
  }
LAB_1476aff89:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return pFVar5;
}

// GetNumChunks @ 1476b25e0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

uint __thiscall FAudioChunkCache::FCacheElement::GetNumChunks(FCacheElement *this)

{
  FSoundWaveData *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1476b2610;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    this_00 = (this->SoundWaveWeakPtr).Object;
    if (this_00 != (FSoundWaveData *)0x0) {
      uVar3 = FSoundWaveData::GetNumChunks(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return uVar3;
    }
  }
LAB_1476b2610:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return 0;
}

// IsBeingPlayed @ 1476ba7e0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FAudioChunkCache::FCacheElement::IsBeingPlayed(FCacheElement *this)

{
  int iVar1;
  
  iVar1 = (this->NumConsumers).Counter;
  if ((iVar1 < 2) && ((iVar1 == 0 || ((this->DebugInfo).LoadingBehavior == RetainOnLoad)))) {
    return false;
  }
  return true;
}

// IsSoundWaveRetainingAudio @ 1476bac50

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall FAudioChunkCache::FCacheElement::IsSoundWaveRetainingAudio(FCacheElement *this)

{
  FSoundWaveData *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1476bac80;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->SoundWaveWeakPtr).Object;
    if (pFVar1 != (FSoundWaveData *)0x0) {
      bVar5 = FAudioChunkHandle::IsValid(&pFVar1->FirstChunk);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return bVar5;
    }
  }
LAB_1476bac80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ReleaseRetainedAudioOnSoundWave @ 1476c0d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioChunkCache::FCacheElement::ReleaseRetainedAudioOnSoundWave(FCacheElement *this)

{
  FSoundWaveData *this_00;
  atomic<int> aVar1;
  wchar_t *pwVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 auStack_1f8 [32];
  wchar_t *local_1d8;
  TStringBuilderBase<wchar_t> local_1c8;
  wchar_t local_1a8 [40];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pTVar4 = (this->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1476c0d5b;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar5);
    this_00 = (this->SoundWaveWeakPtr).Object;
    if (this_00 != (FSoundWaveData *)0x0) {
      if ((5 < (byte)LogAudioTiming._0_1_) && (this->bWantsExtraLogging != false)) {
        local_1c8.Base = local_1a8;
        local_1c8.CurPos = local_1a8;
        local_1c8.End = (wchar_t *)&local_158;
        local_1c8.bIsDynamic = false;
        local_1c8.bIsExternal = false;
        FGuid::AppendString(&(this->Key).ObjectKey,&local_1c8,DigitsWithHyphensLower);
        if (local_1c8.End < (TStringBuilderBase<wchar_t> *)(local_1c8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_1c8,1);
        }
        pwVar2 = local_1c8.Base;
        local_158.Base = local_138;
        *local_1c8.CurPos = L'\0';
        local_158.CurPos = local_138;
        local_158.End = (wchar_t *)local_38;
        local_158.bIsDynamic = false;
        local_158.bIsExternal = false;
        ::FName::AppendString((FName *)this,&local_158);
        if (local_158.End < local_158.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_158,1);
        }
        *local_158.CurPos = L'\0';
        local_1d8 = pwVar2;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1c8);
      }
      FSoundWaveData::ReleaseCompressedAudio(this_00);
    }
  }
LAB_1476c0d5b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// UpdateDebugInfoLoadingBehavior @ 1476cc7d0

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAudioChunkCache::FCacheElement::UpdateDebugInfoLoadingBehavior(FCacheElement *this)

{
  FSoundWaveData *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->SoundWaveWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_1476cc836:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1476cc836;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->SoundWaveWeakPtr).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pFVar1 != (FSoundWaveData *)0x0) {
      (this->DebugInfo).LoadingBehavior = pFVar1->LoadingBehavior;
      bVar5 = pFVar1->bLoadingBehaviorOverridden;
      goto LAB_1476cc84b;
    }
  }
  (this->DebugInfo).LoadingBehavior = Uninitialized;
  bVar5 = false;
  (this->DebugInfo).bWaveDestroyed = true;
LAB_1476cc84b:
  (this->DebugInfo).bLoadingBehaviorExternallyOverriden = bVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// WaitForAsyncLoadCompletion @ 1476cdc80

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAudioChunkCache::FCacheElement::WaitForAsyncLoadCompletion(FCacheElement *this,bool param_1)

{
  FBulkDataBatchRequest *this_00;
  FBulkDataBatchRequest FVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  FBulkDataBatchRequest local_28;
  FString local_20;
  
  this_00 = &this->Read;
  if ((*this_00 != (FBulkDataBatchRequest)0x0) &&
     (iVar3 = (**(code **)(*(longlong *)*this_00 + 0x20))(), iVar3 == 1)) {
    if (param_1) {
      if (*this_00 != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)*this_00 + 0x28))();
      }
    }
    else {
      uVar5 = 0;
      do {
        bVar2 = FBulkDataBatchRequest::WaitFor(this_00,1000);
        if (!bVar2) break;
        if ((2 < (byte)LogAudioStreamCaching._0_1_) && ((int)uVar5 == (int)(uVar5 / 5) * 5)) {
          ::FName::ToString((FName *)this,&local_20);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
          if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_20.Data.AllocatorInstance.Data);
          }
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < 10);
    }
    if (this_00 != &local_28) {
      FVar1 = *this_00;
      *this_00 = (FBulkDataBatchRequest)0x0;
      if (FVar1 != (FBulkDataBatchRequest)0x0) {
        (**(code **)(*(longlong *)FVar1 + 0x10))();
      }
    }
  }
  return;
}

// operator() @ 15050f3e0

bool __thiscall
`FAudioChunkCache::FCacheElement::GetChunk'::__l15::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6168786850648424021>);
  if (bVar3) {
    plVar1 = *(longlong **)((longlong)this + 8);
    if ((*plVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    ::FName::ToString((FName *)(*plVar1 + 0x7c),&local_18);
    plVar1 = *(longlong **)((longlong)this + 8);
    if ((*plVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FSoundWaveData::GetNumChunks((FSoundWaveData *)*plVar1);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6168786850648424021>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050f4d4;
    }
  }
  bVar3 = false;
LAB_15050f4d4:
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

