// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 51

// FWmfMediaSession @ 14ea95600

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FWmfMediaSession * __thiscall FWmfMediaSession::FWmfMediaSession(FWmfMediaSession *this)

{
  code *pcVar1;
  bool bVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FEvent *pFVar5;
  FWmfMediaSession *pFVar6;
  
  *(undefined ***)this = &_vftable__for__IMFAsyncCallback__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__IMediaControls__;
  this->CanScrub = false;
  pTVar4 = (TNode *)0x0;
  this->Capabilities = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->CurrentDuration).Ticks = 0;
  (this->CurrentTopology).RawPointer = (IMFTopology *)0x0;
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar3->Item = 0;
    pTVar3->NextNode = (TNode *)0x0;
    pTVar4 = pTVar3;
  }
  (this->DeferredEvents).Tail = pTVar4;
  (this->DeferredEvents).Head = pTVar4;
  (this->MediaSession).RawPointer = (IMFMediaSession *)0x0;
  this->MediaSessionCloseEvent = (FEvent *)0x0;
  (this->LastTime).Ticks = 0;
  (this->PresentationClock).RawPointer = (IMFPresentationClock *)0x0;
  (this->RateControl).RawPointer = (IMFRateControl *)0x0;
  (this->RateSupport).RawPointer = (IMFRateSupport *)0x0;
  this->RefCount = 0;
  (this->RequestedRate).bIsSet = false;
  (this->RequestedTopology).RawPointer = (IMFTopology *)0x0;
  this->bIsRequestedTimeLoop = false;
  this->bIsRequestedTimeSeek = false;
  this->LastSetRate = -1.0;
  this->SessionRate = 0.0;
  this->SessionState = Closed;
  this->ShouldLoop = false;
  this->Status = None;
  this->bShuttingDown = false;
  (this->ThinnedRates).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThinnedRates).Ranges.ArrayNum = 0;
  (this->ThinnedRates).Ranges.ArrayMax = 0;
  (this->UnthinnedRates).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnthinnedRates).Ranges.ArrayNum = 0;
  (this->UnthinnedRates).Ranges.ArrayMax = 0;
  (this->Tracks).Object = (FWmfMediaTracks *)0x0;
  (this->Tracks).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsWaitingForEnd = false;
  (this->NextSequenceIndex).bIsSet = false;
  this->bSeekActive = false;
  (this->WorkItemQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkItemQueue).ArrayNum = 0;
  (this->WorkItemQueue).ArrayMax = 0;
  *(undefined8 *)&(this->CurrentWorkItem).WorkLoad = 0;
  *(undefined8 *)&(this->CurrentWorkItem).WorkLoad.field_0x28 = 0;
  (this->CurrentWorkItem).State.Object = (FBaseWorkItemState *)0x0;
  (this->CurrentWorkItem).State.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NumSeeksInWorkQueue = 0;
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->MediaSessionCloseEvent = pFVar5;
  if ((pFVar5 == (FEvent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MediaSessionCloseEvent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                         ,0x44,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FWmfMediaSession *)(*pcVar1)();
    return pFVar6;
  }
  return this;
}

// ~<lambda_1> @ 14ea95fb0

void __thiscall `FWmfMediaSession::SetTopology'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  if (*(longlong **)((longlong)this + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))();
  }
  return;
}

// ~FWmfMediaSession @ 14ea97910

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaSession::~FWmfMediaSession(FWmfMediaSession *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  IMFTopology *pIVar6;
  IMFRateSupport *pIVar7;
  IMFRateControl *pIVar8;
  IMFPresentationClock *pIVar9;
  IMFMediaSession *pIVar10;
  TNode *pTVar11;
  code *pcVar12;
  bool bVar13;
  longlong *plVar14;
  
  *(undefined ***)this = &_vftable__for__IMFAsyncCallback__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__IMediaControls__;
  if ((this->RefCount != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("RefCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                          ,0x4a,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  Shutdown(this);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->MediaSessionCloseEvent);
  this->MediaSessionCloseEvent = (FEvent *)0x0;
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentWorkItem).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->CurrentWorkItem).WorkLoad != 0) {
    plVar3 = *(longlong **)&(this->CurrentWorkItem).WorkLoad.field_0x28;
    plVar14 = (longlong *)&(this->CurrentWorkItem).WorkLoad.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar14 = plVar3;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  DestructItems<FWmfMediaSession::FWorkItem,int>
            ((FWorkItem *)(this->WorkItemQueue).AllocatorInstance.Data,
             (this->WorkItemQueue).ArrayNum);
  pFVar4 = (this->WorkItemQueue).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->Tracks).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pFVar4 = (this->UnthinnedRates).Ranges.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ThinnedRates).Ranges.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pIVar6 = (this->RequestedTopology).RawPointer;
  if (pIVar6 != (IMFTopology *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  pIVar7 = (this->RateSupport).RawPointer;
  if (pIVar7 != (IMFRateSupport *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  pIVar8 = (this->RateControl).RawPointer;
  if (pIVar8 != (IMFRateControl *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x10))();
  }
  pIVar9 = (this->PresentationClock).RawPointer;
  if (pIVar9 != (IMFPresentationClock *)0x0) {
    (**(code **)((longlong)*pIVar9 + 0x10))();
  }
  pIVar10 = (this->MediaSession).RawPointer;
  if (pIVar10 != (IMFMediaSession *)0x0) {
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  pTVar11 = (this->DeferredEvents).Tail;
  while (pTVar11 != (TNode *)0x0) {
    (this->DeferredEvents).Tail = pTVar11->NextNode;
    ::operator_delete(pTVar11,0x10);
    pTVar11 = (this->DeferredEvents).Tail;
  }
  pIVar6 = (this->CurrentTopology).RawPointer;
  if (pIVar6 != (IMFTopology *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  *(undefined ***)&this->field_0x8 = &___7IMediaControls__6B_;
  return;
}

// operator() @ 14ea98a70

EWorkItemResult __thiscall
`FWmfMediaSession::RequestMoreVideoData'::__l2::<lambda_1>::operator()
          (void *this,TComPtr<IMFMediaEvent> param_1,ulong param_2,T_HRESULT param_3,
          FBaseWorkItemState *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  EWorkItemResult EVar5;
  int iVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  lVar1 = *(longlong *)this;
  lVar7 = 0;
  pTVar8 = *(TReferenceControllerBase<1> **)(lVar1 + 0xf0);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea98ad8;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      lVar7 = *(longlong *)(lVar1 + 0xe8);
    }
  }
LAB_14ea98ad8:
  if (lVar7 != 0) {
    if ((lVar7 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    lVar1 = *(longlong *)(lVar7 + 0x178);
    if (lVar1 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x18);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if (((*(longlong *)(lVar1 + 0xb0) == 0) && (*(longlong *)(lVar1 + 0x40) != 0)) &&
         (*(char *)(lVar1 + 0xe3) == '\0')) {
        iVar6 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 8))();
        if ((iVar6 + *(int *)(lVar1 + 0xa0) < 6) &&
           ((*(char *)(lVar1 + 0xe2) == '\0' ||
            ((*(char *)(lVar1 + 0xe1) != '\0' && (*(int *)(lVar1 + 0xa0) == 0)))))) {
          (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x30))
                    ((longlong *)(lVar1 + 0x10),0x131,&GUID_NULL,0,0);
          *(int *)(lVar1 + 0xa0) = *(int *)(lVar1 + 0xa0) + 1;
        }
      }
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return Done;
}

// operator() @ 14ea98c00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EWorkItemResult __thiscall
`FWmfMediaSession::Seek'::__l2::<lambda_1>::operator()
          (void *this,TComPtr<IMFMediaEvent> param_1,ulong param_2,T_HRESULT param_3,
          FBaseWorkItemState *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  EWorkItemResult EVar4;
  
  if (*(int *)(param_4 + 1) == 1) {
    if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
      (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
    }
    return (EWorkItemResult)(param_2 != 0x67);
  }
  if (*(int *)(*(longlong *)this + 0x160) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSeeksInWorkQueue > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                       ,0x249,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  piVar1 = (int *)(*(longlong *)this + 0x160);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    bVar3 = FWmfMediaSession::CommitTime
                      (*(FWmfMediaSession **)this,(FTimespan)*(long64 *)((longlong)this + 8),true);
    if (bVar3) {
      *(undefined4 *)(param_4 + 1) = 1;
      if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
        (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
      }
      return RetryLater;
    }
  }
  if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return Done;
}

// operator() @ 14ea98d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EWorkItemResult __thiscall
`FWmfMediaSession::SetRate'::__l2::<lambda_1>::operator()
          (void *this,TComPtr<IMFMediaEvent> param_1,ulong param_2,T_HRESULT param_3,
          FBaseWorkItemState *param_4)

{
  EWorkItemResult EVar1;
  
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  EVar1 = FWmfMediaSession::CommitRate
                    (*(FWmfMediaSession **)this,*(float *)((longlong)this + 8),
                     (FRateWorkItemState *)param_4,param_2);
  if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return EVar1;
}

// operator() @ 14ea98da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EWorkItemResult __thiscall
`FWmfMediaSession::SetTopology'::__l2::<lambda_1>::operator()
          (void *this,TComPtr<IMFMediaEvent> param_1,ulong param_2,T_HRESULT param_3,
          FBaseWorkItemState *param_4)

{
  FWmfMediaSession *this_00;
  IMFMediaSession *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  EWorkItemResult EVar6;
  int iVar7;
  undefined8 *puVar8;
  EWorkItemResult EVar9;
  FString local_38;
  FString local_28;
  
  if (5 < (byte)LogWmfMedia._0_1_) {
    FTimespan::ToString((FTimespan *)((longlong)this + 0x10),&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  this_00 = *(FWmfMediaSession **)this;
  if (this_00->SessionState == Preparing) {
    EVar9 = Done;
    EVar6 = Done;
    if (*(longlong *)((longlong)this + 8) == 0) {
      FWmfMediaSession::UpdateCharacteristics(this_00);
      *(undefined4 *)(*(longlong *)this + 0xb8) = 5;
      lVar2 = *(longlong *)this;
      puVar8 = ::operator_new(0x10);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 4;
        puVar3 = *(undefined8 **)(lVar2 + 0x50);
        *(undefined8 **)(lVar2 + 0x50) = puVar8;
        *puVar3 = puVar8;
      }
    }
    else {
      if (((this_00->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      pIVar1 = (this_00->MediaSession).RawPointer;
      iVar7 = (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,1,*(undefined8 *)((longlong)this + 8));
      EVar6 = EVar9;
      if (iVar7 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_28,iVar7);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        *(undefined4 *)(*(longlong *)this + 0xb8) = 1;
        lVar2 = *(longlong *)this;
        puVar8 = ::operator_new(0x10);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          *(undefined4 *)(puVar8 + 1) = 5;
          puVar3 = *(undefined8 **)(lVar2 + 0x50);
          *(undefined8 **)(lVar2 + 0x50) = puVar8;
          *puVar3 = puVar8;
        }
      }
    }
  }
  else {
    EVar6 = FWmfMediaSession::CommitTopology
                      (this_00,*(IMFTopology **)((longlong)this + 8),
                       (FTopologyWorkItemState *)param_4,param_2);
    if (EVar6 == RetryLater) goto LAB_14ea98f78;
  }
  *(undefined8 *)(*(longlong *)this + 0x40) = *(undefined8 *)((longlong)this + 0x10);
LAB_14ea98f78:
  if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return EVar6;
}

// operator() @ 14ea98fb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EWorkItemResult __thiscall
`FWmfMediaSession::HandleSessionEnded'::__l29::<lambda_1>::operator()
          (void *this,TComPtr<IMFMediaEvent> param_1,ulong param_2,T_HRESULT param_3,
          FBaseWorkItemState *param_4)

{
  atomic<int> *lpCriticalSection;
  float fVar1;
  int iVar2;
  FWmfMediaSession *this_00;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  EWorkItemResult EVar9;
  int iVar10;
  FTimespan FVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)(param_4 + 1) == 1) {
    if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
      (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
    }
    EVar9 = (EWorkItemResult)(param_2 != 0x67);
  }
  else {
    this_00 = *(FWmfMediaSession **)this;
    FVar11.Ticks = (long64)pTVar12;
    if (this_00->UnpausedSessionRate <= 0.0 && this_00->UnpausedSessionRate != 0.0) {
      FVar11.Ticks = (this_00->CurrentDuration).Ticks;
    }
    bVar7 = FWmfMediaSession::CommitTime(this_00,FVar11,false);
    if (bVar7) {
      lVar3 = *(longlong *)this;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 0xf0);
      pTVar13 = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar4->SharedReferenceCount;
        do {
          pTVar13 = pTVar12;
          if (aVar6 == (atomic<int>)0x0) goto LAB_14ea99079;
          LOCK();
          aVar8 = pTVar4->SharedReferenceCount;
          bVar7 = aVar6 == aVar8;
          if (bVar7) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar8 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar8;
        } while (!bVar7);
        pTVar13 = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          pTVar12 = *(TReferenceControllerBase<1> **)(lVar3 + 0xe8);
        }
      }
LAB_14ea99079:
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        fVar1 = *(float *)(*(longlong *)this + 0xb4);
        lpCriticalSection = &pTVar12[0x12].SharedReferenceCount;
        if (lpCriticalSection == (atomic<int> *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar2 = *(int *)((longlong)&pTVar12[0x2f]._padding_ + 4);
        iVar10 = iVar2 + 1;
        if (fVar1 < 0.0) {
          iVar10 = iVar2 + -1;
        }
        *(int *)((longlong)&pTVar12[0x2f]._padding_ + 4) = iVar10;
        if (*(longlong *)&pTVar12[0x17].SharedReferenceCount != 0) {
          *(undefined1 *)(*(longlong *)&pTVar12[0x17].SharedReferenceCount + 0xe0) = 1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      *(undefined4 *)(param_4 + 1) = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
        (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
      }
      EVar9 = RetryLater;
    }
    else {
      if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
        (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
      }
      EVar9 = Done;
    }
  }
  return EVar9;
}

// operator() @ 14ea99180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EWorkItemResult __thiscall
`FWmfMediaSession::HandleSessionTopologyStatus'::__l122::<lambda_1>::operator()
          (void *this,TComPtr<IMFMediaEvent> param_1,ulong param_2,T_HRESULT param_3,
          FBaseWorkItemState *param_4)

{
  bool bVar1;
  EWorkItemResult EVar2;
  
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  if (*(int *)(param_4 + 1) == 1) {
    if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
      (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
    }
    EVar2 = (EWorkItemResult)(param_2 != 0x67);
  }
  else {
    bVar1 = FWmfMediaSession::CommitTime
                      (*(FWmfMediaSession **)this,WmfMediaSession::RequestedTimeCurrent,false);
    if (bVar1) {
      *(undefined4 *)(param_4 + 1) = 1;
      if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
        (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
      }
      EVar2 = RetryLater;
    }
    else {
      if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
        (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
      }
      EVar2 = Done;
    }
  }
  return EVar2;
}

// AddRef @ 14ea9b3f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

ulong __thiscall FWmfMediaSession::AddRef(FWmfMediaSession *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// CanControl @ 14eaa1090

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaSession::CanControl(FWmfMediaSession *this,EMediaControl param_1)

{
  bool *lpCriticalSection;
  bool bVar1;
  undefined1 uVar2;
  float fVar3;
  
  if ((this->DeferredEvents).Tail == (TNode *)0x0) {
    return false;
  }
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection == (bool *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == Pause) {
    if (this->SessionRate == 4.2039e-45) {
      if ((this->field_0xc & 4) == 0) {
        fVar3 = 0.0;
LAB_14eaa10f0:
        bVar1 = TRangeSet<float>::Contains
                          ((TRangeSet<float> *)&(this->ThinnedRates).Ranges.ArrayNum,fVar3);
        if (!bVar1) goto LAB_14eaa113a;
      }
LAB_14eaa1100:
      uVar2 = 1;
      goto LAB_14eaa113d;
    }
  }
  else if (param_1 == Resume) {
    fVar3 = __real_3f800000;
    if (this->SessionRate != 4.2039e-45) goto LAB_14eaa10f0;
  }
  else {
    if (param_1 == Scrub) {
      uVar2 = this->field_0x8;
      goto LAB_14eaa113d;
    }
    if (((param_1 == Seek) && ((this->field_0xc & 2) != 0)) &&
       (0 < (longlong)(this->CriticalSection).CriticalSection.Opaque3[2])) goto LAB_14eaa1100;
  }
LAB_14eaa113a:
  uVar2 = 0;
LAB_14eaa113d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (bool)uVar2;
}

// CommitRate @ 14eaa15c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EWorkItemResult __thiscall
FWmfMediaSession::CommitRate
          (FWmfMediaSession *this,float param_1,FRateWorkItemState *param_2,ulong param_3)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FWmfMediaTracks *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  EWorkItemResult EVar7;
  int iVar8;
  atomic<int> aVar9;
  IMFMediaSession *pIVar10;
  IMFPresentationClock *pIVar11;
  IMFRateControl *pIVar12;
  EState EVar13;
  undefined ***pppuVar14;
  undefined8 uVar15;
  undefined1 auStack_238 [32];
  EState local_218;
  FTimespan local_208;
  FWmfMediaTracks *local_200;
  TReferenceControllerBase<1> *local_1f8;
  FWmfMediaTracks *local_1f0;
  TReferenceControllerBase<1> *local_1e8;
  FTimespan local_1e0;
  FTimespan local_1d8;
  undefined8 local_1d0;
  longlong lStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  FWmfMediaSession *local_b0;
  undefined ***local_a0;
  code *local_98 [2];
  undefined **local_88;
  FWmfMediaSession *local_80;
  undefined ***local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_238;
  uVar15 = 0;
  EVar7 = Done;
  if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MediaSession != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                         ,0x362,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    EVar7 = (*pcVar2)();
    return EVar7;
  }
  if (6 < (byte)LogWmfMedia._0_1_) {
    local_218 = param_2->State;
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  if ((param_3 == 0x6b) && (param_2->State != Begin)) {
    param_2->State = Begin;
  }
  EVar13 = param_2->State;
  if ((this->RateControl).RawPointer == (IMFRateControl *)0x0) {
    if (EVar13 != Begin) {
      if (EVar13 == WaitForPause) {
        if (param_3 == 0x68) {
          return Done;
        }
        return RetryLater;
      }
      if ((EVar13 != WaitForStart) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("State->State == FRateWorkItemState::EState::WaitForStart",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                             ,0x3a5,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        EVar7 = (*pcVar2)();
        return EVar7;
      }
      if (param_3 == 0x67) {
        return Done;
      }
      return RetryLater;
    }
    if (param_1 != 0.0) {
      if (this->SessionState == Playing) {
        return Done;
      }
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
      iVar8 = (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10,0,&local_100);
      if (-1 < iVar8) {
        param_2->State = WaitForStart;
        return RetryLater;
      }
      if ((byte)LogWmfMedia._0_1_ < 6) {
        return Done;
      }
      WmfMedia::ResultToString(&local_190,iVar8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_190.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return Done;
      }
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
      return Done;
    }
    if (this->SessionState != Playing) {
      return Done;
    }
    pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
    iVar8 = (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10);
    if (-1 < iVar8) {
      param_2->State = WaitForPause;
      return RetryLater;
    }
    if ((byte)LogWmfMedia._0_1_ < 6) {
      return Done;
    }
    WmfMedia::ResultToString(&local_1a0,iVar8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_1a0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return Done;
    }
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    return Done;
  }
  if (EVar13 == Begin) {
    param_2->State = Ready;
    (param_2->LastTime).Ticks = WmfMediaSession::RequestedTimeCurrent.Ticks;
    if (param_1 == 0.0) {
      if (this->SessionState == Playing) {
        if (this->CanScrub != false) {
          local_1f0 = (FWmfMediaTracks *)0x0;
          local_1e8 = (this->Tracks).WeakReferenceCount.ReferenceController;
          if (local_1e8 != (TReferenceControllerBase<1> *)0x0) {
            aVar3 = local_1e8->SharedReferenceCount;
            do {
              if (aVar3 == (atomic<int>)0x0) {
                local_1e8 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_14eaa1c4a;
              }
              LOCK();
              aVar9 = local_1e8->SharedReferenceCount;
              bVar6 = aVar3 == aVar9;
              if (bVar6) {
                local_1e8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
                aVar9 = aVar3;
              }
              UNLOCK();
              aVar3 = aVar9;
            } while (!bVar6);
            if (local_1e8 != (TReferenceControllerBase<1> *)0x0) {
              local_1f0 = (this->Tracks).Object;
            }
          }
LAB_14eaa1c4a:
          pTVar5 = local_1e8;
          pFVar4 = local_1f0;
          if (local_1f0 != (FWmfMediaTracks *)0x0) {
            if ((local_1f0 == (FWmfMediaTracks *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              EVar7 = (*pcVar2)();
              return EVar7;
            }
            local_70 = (undefined ***)0x0;
            local_88 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::`246'::<lambda_2>,0,0>
                        ::_vftable_;
            local_98[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FWmfMediaSession::CommitRate'::__l246::<lambda_2>,void>
                          ::Call;
            local_80 = this;
            bVar6 = FWmfMediaTracks::ExecuteOnceMediaStreamSinkHasNoPendingRequests
                              (pFVar4,(TFunction<void___cdecl(void)> *)local_98);
            if (local_98[0] != (code *)0x0) {
              pppuVar14 = &local_88;
              if (local_70 != (undefined ***)0x0) {
                pppuVar14 = local_70;
              }
              (*(code *)(*pppuVar14)[2])();
            }
            if (bVar6) {
              param_2->State = Begin;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              return RetryLater;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
        }
        if ((0.0 < this->UnpausedSessionRate || this->UnpausedSessionRate == 0.0) ||
           (this->CanScrub == false)) {
          pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
          iVar8 = (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10);
          if (-1 < iVar8) {
            EVar13 = WaitForPause;
            if (this->CanScrub != false) {
              EVar13 = WaitForPauseThenSetAndRestart;
            }
            param_2->State = EVar13;
            return RetryLater;
          }
          if ((byte)LogWmfMedia._0_1_ < 6) {
            return Done;
          }
          WmfMedia::ResultToString(&local_130,iVar8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_130.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return Done;
          }
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
          return Done;
        }
        pIVar11 = TComPtr<IMFPresentationClock>::operator->(&this->PresentationClock);
        iVar8 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,0,&local_1d8,local_1a8);
        if (iVar8 == 0) {
          (param_2->LastTime).Ticks = local_1d8.Ticks;
        }
        pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
        iVar8 = (**(code **)((longlong)*pIVar10 + 0x58))(pIVar10);
        if (-1 < iVar8) {
          param_2->State = WaitForStopThenSetAndRestart;
          return RetryLater;
        }
        if ((byte)LogWmfMedia._0_1_ < 6) {
          return Done;
        }
        WmfMedia::ResultToString(&local_140,iVar8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_140.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return Done;
        }
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
        return Done;
      }
      goto LAB_14eaa1e75;
    }
    if (param_1 * this->UnpausedSessionRate < 0.0) {
      if (this->SessionState == Stopped) goto LAB_14eaa1e75;
      local_200 = (FWmfMediaTracks *)0x0;
      local_1f8 = (this->Tracks).WeakReferenceCount.ReferenceController;
      if (local_1f8 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = local_1f8->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            local_1f8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14eaa18bc;
          }
          LOCK();
          aVar9 = local_1f8->SharedReferenceCount;
          bVar6 = aVar3 == aVar9;
          if (bVar6) {
            local_1f8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar9 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar9;
        } while (!bVar6);
        if (local_1f8 != (TReferenceControllerBase<1> *)0x0) {
          local_200 = (this->Tracks).Object;
        }
      }
LAB_14eaa18bc:
      pTVar5 = local_1f8;
      pFVar4 = local_200;
      if (local_200 != (FWmfMediaTracks *)0x0) {
        if ((local_200 == (FWmfMediaTracks *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          EVar7 = (*pcVar2)();
          return EVar7;
        }
        local_a0 = (undefined ***)0x0;
        local_b8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::`121'::<lambda_1>,0,0>::
                    _vftable_;
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FWmfMediaSession::CommitRate'::__l121::<lambda_1>,void>::
                      Call;
        local_b0 = this;
        bVar6 = FWmfMediaTracks::ExecuteOnceMediaStreamSinkHasNoPendingRequests
                          (pFVar4,(TFunction<void___cdecl(void)> *)local_c8);
        if (local_c8[0] != (code *)0x0) {
          pppuVar14 = &local_b8;
          if (local_a0 != (undefined ***)0x0) {
            pppuVar14 = local_a0;
          }
          (*(code *)(*pppuVar14)[2])();
        }
        if (bVar6) {
          param_2->State = Begin;
          EVar7 = RetryLater;
          goto LAB_14eaa19fd;
        }
      }
      pIVar11 = TComPtr<IMFPresentationClock>::operator->(&this->PresentationClock);
      iVar8 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,0,&local_208,local_1b8);
      if (iVar8 == 0) {
        (param_2->LastTime).Ticks = local_208.Ticks;
      }
      pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
      iVar8 = (**(code **)((longlong)*pIVar10 + 0x58))(pIVar10);
      if (iVar8 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_180,iVar8);
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Session__p__Fai_152ffdaf0,
                     (FLogCategoryBase *)&LogWmfMedia);
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        param_2->State = WaitForStopThenSetAndRestart;
        EVar7 = RetryLater;
      }
LAB_14eaa19fd:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return EVar7;
    }
    if (this->SessionState == Playing) goto LAB_14eaa1e75;
    if (this->SessionState != Stopped) {
      if (this->CanScrub == false) {
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
        iVar8 = (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10,0,&local_e8);
        if (-1 < iVar8) {
          param_2->State = WaitForStart;
          return RetryLater;
        }
        if ((byte)LogWmfMedia._0_1_ < 6) {
          return Done;
        }
        WmfMedia::ResultToString(&local_150,iVar8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_150.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return Done;
        }
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
        return Done;
      }
      if (0.0 < this->UnpausedSessionRate || this->UnpausedSessionRate == 0.0) {
        pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
        iVar8 = (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10);
        if (-1 < iVar8) {
          param_2->State = WaitForPauseThenSetAndRestart;
          return RetryLater;
        }
        if ((byte)LogWmfMedia._0_1_ < 6) {
          return Done;
        }
        WmfMedia::ResultToString(&local_170,iVar8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_170.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return Done;
        }
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
        return Done;
      }
      pIVar11 = TComPtr<IMFPresentationClock>::operator->(&this->PresentationClock);
      iVar8 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,0,&local_1e0,local_1b0);
      if (iVar8 == 0) {
        (param_2->LastTime).Ticks = local_1e0.Ticks;
      }
      pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
      iVar8 = (**(code **)((longlong)*pIVar10 + 0x58))(pIVar10);
      if (-1 < iVar8) {
        param_2->State = WaitForStopThenSetAndRestart;
        return RetryLater;
      }
      if ((byte)LogWmfMedia._0_1_ < 6) {
        return Done;
      }
      WmfMedia::ResultToString(&local_160,iVar8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_160.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return Done;
      }
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
      return Done;
    }
  }
  else {
    if (EVar13 == WaitForStopThenSetAndRestart) {
      bVar6 = param_3 == 0x69;
    }
    else {
      if (EVar13 != WaitForPauseThenSetAndRestart) {
        if (EVar13 == WaitForPause) {
          return (uint)(param_3 != 0x68);
        }
        if (EVar13 == WaitForSetAndRestart) {
          if (param_3 != 0x6c) {
            return RetryLater;
          }
          local_1d0 = 0;
          lStack_1c8 = 0;
          local_1c0 = 0;
          lVar1 = (param_2->LastTime).Ticks;
          if (lVar1 != WmfMediaSession::RequestedTimeCurrent.Ticks) {
            local_1d0 = 0x14;
            lStack_1c8 = lVar1;
          }
          pIVar10 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
          iVar8 = (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10,0,&local_1d0);
          if (-1 < iVar8) {
            param_2->State = WaitForRestart;
            return RetryLater;
          }
          if ((byte)LogWmfMedia._0_1_ < 6) {
            return Done;
          }
          WmfMedia::ResultToString(&local_120,iVar8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_120.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return Done;
          }
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
          return Done;
        }
        if (EVar13 == WaitForSet) {
          if (param_3 == 0x6c) {
            return Done;
          }
          return RetryLater;
        }
        if (EVar13 == WaitForRestart) {
          return (uint)(param_3 != 0x67);
        }
        goto LAB_14eaa1e75;
      }
      bVar6 = param_3 == 0x68;
    }
    if (!bVar6) {
      return RetryLater;
    }
  }
  param_2->State = ReadyNeedsRestart;
LAB_14eaa1e75:
  bVar6 = TRangeSet<float>::Contains(&this->UnthinnedRates,param_1);
  if (!bVar6) {
    bVar6 = TRangeSet<float>::Contains(&this->ThinnedRates,param_1);
    if (!bVar6) {
      return Done;
    }
    uVar15 = 1;
  }
  pIVar12 = TComPtr<IMFRateControl>::operator->(&this->RateControl);
  iVar8 = (**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,uVar15,param_1);
  if (iVar8 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_110,iVar8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    return Done;
  }
  param_2->State = (param_2->State == ReadyNeedsRestart) + WaitForSet;
  return RetryLater;
}

// CommitTime @ 14eaa2050

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMediaSession::CommitTime(FWmfMediaSession *this,FTimespan param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IMFMediaSession *pIVar1;
  FWmfMediaStreamSink *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  atomic<int> aVar9;
  FString *pFVar10;
  int *piVar11;
  wchar_t *pwVar12;
  FWmfMediaTracks *pFVar13;
  FWmfMediaTracks *pFVar14;
  FWmfMediaTracks *pFVar15;
  FTimespan local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined2 local_58 [4];
  longlong local_50;
  
  pFVar13 = (FWmfMediaTracks *)0x0;
  local_res10.Ticks = param_1.Ticks;
  if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MediaSession != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                         ,0x4fd,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (local_res10.Ticks == WmfMediaSession::RequestedTimeCurrent.Ticks) {
    pwVar12 = L"<current>";
    pFVar15 = pFVar13;
  }
  else {
    pFVar10 = FTimespan::ToString(&local_res10,&local_78);
    pFVar15 = (FWmfMediaTracks *)&DAT_00000001;
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
  }
  ::FString::FString(&local_88,pwVar12);
  if ((pFVar15 != (FWmfMediaTracks *)0x0) &&
     (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  cVar7 = (*(code *)**(undefined8 **)&this->field_0x8)(&this->field_0x8,4);
  if (cVar7 == '\0') {
    if (5 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    local_res10.Ticks = WmfMediaSession::RequestedTimeCurrent.Ticks;
    local_58[0] = 0;
  }
  else if (local_res10.Ticks == WmfMediaSession::RequestedTimeCurrent.Ticks) {
    local_58[0] = 0;
  }
  else {
    local_58[0] = 0x14;
    local_50 = local_res10.Ticks;
  }
  if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pIVar1 = (this->MediaSession).RawPointer;
  iVar8 = (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,0,local_58);
  if (iVar8 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_68,iVar8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    if ((cVar7 != '\0') && (param_2)) {
      pFVar15 = (FWmfMediaTracks *)(this->Tracks).WeakReferenceCount.ReferenceController;
      pFVar14 = pFVar15;
      if (pFVar15 != (FWmfMediaTracks *)0x0) {
        aVar4 = *(atomic<int> *)&pFVar15->_padding_;
        do {
          pFVar14 = pFVar13;
          if (aVar4 == (atomic<int>)0x0) goto LAB_14eaa2297;
          LOCK();
          aVar9 = *(atomic<int> *)&pFVar15->_padding_;
          bVar5 = aVar4 == aVar9;
          if (bVar5) {
            *(atomic<int> *)&pFVar15->_padding_ = (atomic<int>)((int)aVar4 + 1);
            aVar9 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar9;
        } while (!bVar5);
        pFVar13 = (FWmfMediaTracks *)0x0;
        pFVar14 = pFVar15;
        if (pFVar15 != (FWmfMediaTracks *)0x0) {
          pFVar13 = (this->Tracks).Object;
        }
      }
LAB_14eaa2297:
      if (pFVar13 != (FWmfMediaTracks *)0x0) {
        if (((this->NextSequenceIndex).bIsSet == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextSequenceIndex.IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                               ,0x524,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if ((pFVar13 == (FWmfMediaTracks *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        piVar11 = TOptional<int>::GetValue(&this->NextSequenceIndex);
        iVar8 = *piVar11;
        if (6 < (byte)LogWmfMedia._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
        lpCriticalSection = &pFVar13->CriticalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar13->SeekIndex = iVar8;
        pFVar13->LoopIndex = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar2 = (pFVar13->MediaStreamSink).RawPointer;
        if (pFVar2 != (FWmfMediaStreamSink *)0x0) {
          pFVar2->bSeekInProgress = true;
        }
        if ((this->NextSequenceIndex).bIsSet != false) {
          (this->NextSequenceIndex).bIsSet = false;
        }
      }
      this->bSeekActive = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar14);
    }
    bVar5 = true;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// CommitTopology @ 14eaa23f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EWorkItemResult __thiscall
FWmfMediaSession::CommitTopology
          (FWmfMediaSession *this,IMFTopology *param_1,FTopologyWorkItemState *param_2,ulong param_3
          )

{
  EState EVar1;
  code *pcVar2;
  bool bVar3;
  EWorkItemResult EVar4;
  int iVar5;
  IMFMediaSession *pIVar6;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MediaSession != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                         ,0x531,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  if ((param_3 == 0x6b) && (param_2->State != Begin)) {
    param_2->State = Begin;
  }
  EVar1 = param_2->State;
  if (EVar1 == Begin) {
    if (this->SessionState == Stopped) {
      param_2->State = Ready;
LAB_14eaa2556:
      if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      iVar5 = (**(code **)((longlong)*(this->MediaSession).RawPointer + 0x40))();
      if (iVar5 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_58,iVar5);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          return Done;
        }
      }
      else {
        pIVar6 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
        if (param_1 == (IMFTopology *)0x0) {
          iVar5 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,4,0);
          if (-1 < iVar5) goto LAB_14eaa2796;
          if (5 < (byte)LogWmfMedia._0_1_) {
            WmfMedia::ResultToString(&local_38,iVar5);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          iVar5 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,1,param_1);
          if (-1 < iVar5) {
LAB_14eaa2796:
            if (5 < (byte)LogWmfMedia._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            }
            goto LAB_14eaa27b8;
          }
          if (5 < (byte)LogWmfMedia._0_1_) {
            WmfMedia::ResultToString(&local_48,iVar5);
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Session__p__Fai_152ffe1a8,
                       (FLogCategoryBase *)&LogWmfMedia);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            return Done;
          }
        }
      }
    }
    else {
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      iVar5 = (**(code **)((longlong)*(this->MediaSession).RawPointer + 0x58))();
      if (-1 < iVar5) {
        param_2->State = ReadyNeedsRestart;
        goto LAB_14eaa27b8;
      }
      if (5 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_78,iVar5);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        return Done;
      }
    }
LAB_14eaa2792:
    EVar4 = Done;
  }
  else {
    if (EVar1 == Ready) {
      return (uint)(param_3 != 0x65);
    }
    if (EVar1 != ReadyNeedsRestart) {
      if (EVar1 == WaitRestart) {
        return (uint)(param_3 != 0x67);
      }
      goto LAB_14eaa2556;
    }
    if (param_3 == 0x65) {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      pIVar6 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
      iVar5 = (**(code **)((longlong)*pIVar6 + 0x48))(pIVar6,0,&local_28);
      if (iVar5 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_68,iVar5);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          return Done;
        }
        goto LAB_14eaa2792;
      }
      param_2->State = WaitRestart;
    }
LAB_14eaa27b8:
    EVar4 = RetryLater;
  }
  return EVar4;
}

// EnqueueWorkItem @ 14eaa9930

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::EnqueueWorkItem(FWmfMediaSession *this,FWorkItem *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWorkItem *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  TArray<FWmfMediaSession::FWorkItem,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  longlong *local_res20;
  FBaseWorkItemState *local_30;
  longlong **local_28;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)&(this->CurrentWorkItem).WorkLoad == 0) {
    local_res20 = (longlong *)0x0;
    local_28 = &local_res20;
    local_30 = (param_1->State).Object;
    local_res8[0] = 0;
    local_res18[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->WorkLoad);
    pcVar4 = *(code **)&param_1->WorkLoad;
    plVar3 = *(longlong **)&(param_1->WorkLoad).field_0x28;
    plVar9 = (longlong *)&(param_1->WorkLoad).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar9 = plVar3;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    iVar7 = (*pcVar4)(uVar8,&local_res20,local_res18,local_res8,&local_30);
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
    }
    if (iVar7 == 1) {
      FWorkItem::operator=(&this->CurrentWorkItem,param_1);
    }
  }
  else {
    pTVar11 = &this->WorkItemQueue;
    pFVar2 = (FWorkItem *)(pTVar11->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->WorkItemQueue).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar1 = &(this->WorkItemQueue).ArrayMax;
    iVar7 = (this->WorkItemQueue).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1040,&pTVar11->AllocatorInstance,piVar1);
    }
    (this->WorkItemQueue).ArrayNum = iVar7 + 1;
    pFVar10 = (pTVar11->AllocatorInstance).Data + (longlong)iVar7 * 0x40;
    *(longlong *)pFVar10 = *(longlong *)&param_1->WorkLoad;
    *(longlong *)(pFVar10 + 0x28) = *(longlong *)&(param_1->WorkLoad).field_0x28;
    *(undefined8 *)&(param_1->WorkLoad).field_0x28 = 0;
    lVar5 = *(longlong *)&(param_1->WorkLoad).field_0x18;
    *(longlong *)(pFVar10 + 0x10) = *(longlong *)&(param_1->WorkLoad).field_0x10;
    *(longlong *)(pFVar10 + 0x18) = lVar5;
    *(longlong *)(pFVar10 + 0x20) = *(longlong *)&(param_1->WorkLoad).field_0x20;
    if (*(longlong *)pFVar10 != 0) {
      *(undefined8 *)&param_1->WorkLoad = 0;
    }
    *(FBaseWorkItemState **)(pFVar10 + 0x30) = (param_1->State).Object;
    *(TReferenceControllerBase<1> **)(pFVar10 + 0x38) =
         (param_1->State).SharedReferenceCount.ReferenceController;
    (param_1->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_1->State).Object = (FBaseWorkItemState *)0x0;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// ExecuteNextWorkItems @ 14eaaa6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaSession::ExecuteNextWorkItems
          (FWmfMediaSession *this,TComPtr<IMFMediaEvent> param_1,ulong param_2,undefined4 param_3)

{
  int *piVar1;
  TArray<FWmfMediaSession::FWorkItem,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FWmfMediaSession::FBaseWorkItemState,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FBaseWorkItemState *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  undefined8 uVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  undefined1 auStackY_118 [32];
  IMFMediaEvent local_e8;
  undefined4 local_e0 [2];
  ulong local_d8 [2];
  FBaseWorkItemState *local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> FStack_c0;
  LPCRITICAL_SECTION local_b8;
  IMFMediaEvent *local_b0;
  IMFMediaEvent *local_a8;
  FBaseWorkItemState *local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_b8 = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_b0 = param_1.RawPointer;
  if (local_b8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_b8);
  if (*(longlong *)&(this->CurrentWorkItem).WorkLoad != 0) goto LAB_14eaaa8ad;
  do {
    iVar16 = (this->WorkItemQueue).ArrayNum;
    if (iVar16 == 0) break;
    pTVar2 = &this->WorkItemQueue;
    if (iVar16 < 1) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_88 = *(longlong *)pFVar4;
    uStack_60 = (longlong *)0x0;
    if (local_88 != 0) {
      pFVar18 = *(FScriptContainerElement **)(pFVar4 + 0x28);
      if (*(FScriptContainerElement **)(pFVar4 + 0x28) == (FScriptContainerElement *)0x0) {
        pFVar18 = pFVar4 + 0x10;
      }
      (*(code *)**(undefined8 **)pFVar18)(pFVar18,&local_78);
    }
    lVar13 = *(longlong *)&(this->CurrentWorkItem).WorkLoad;
    uVar14 = *(undefined8 *)&(this->CurrentWorkItem).WorkLoad.field_0x8;
    uVar9 = *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x10;
    uVar10 = *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x14;
    uVar11 = *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x18;
    uVar12 = *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x1c;
    uVar17 = *(undefined8 *)&(this->CurrentWorkItem).WorkLoad.field_0x20;
    plVar7 = *(longlong **)&(this->CurrentWorkItem).WorkLoad.field_0x28;
    *(longlong *)&(this->CurrentWorkItem).WorkLoad = local_88;
    *(undefined8 *)&(this->CurrentWorkItem).WorkLoad.field_0x8 = uStack_80;
    *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x10 = local_78;
    *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x14 = uStack_74;
    *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x18 = uStack_70;
    *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x1c = uStack_6c;
    *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x20 = (undefined4)local_68;
    *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x24 = local_68._4_4_;
    *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x28 = (undefined4)uStack_60;
    *(undefined4 *)&(this->CurrentWorkItem).WorkLoad.field_0x2c = uStack_60._4_4_;
    local_78 = uVar9;
    uStack_74 = uVar10;
    uStack_70 = uVar11;
    uStack_6c = uVar12;
    local_68 = uVar17;
    uStack_60 = plVar7;
    local_88 = lVar13;
    uStack_80 = uVar14;
    if (lVar13 != 0) {
      plVar19 = (longlong *)&local_78;
      if (plVar7 != (longlong *)0x0) {
        plVar19 = plVar7;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    pFVar5 = *(FBaseWorkItemState **)(pFVar4 + 0x30);
    pTVar6 = *(TReferenceControllerBase<1> **)(pFVar4 + 0x38);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0 = (this->CurrentWorkItem).State.Object;
    pTStack_98 = (this->CurrentWorkItem).State.SharedReferenceCount.ReferenceController;
    (this->CurrentWorkItem).State.Object = pFVar5;
    (this->CurrentWorkItem).State.SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
    if ((this->WorkItemQueue).ArrayNum < 1) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar4 + 0x38));
    if (*(longlong *)pFVar4 != 0) {
      pFVar18 = *(FScriptContainerElement **)(pFVar4 + 0x28);
      if (*(FScriptContainerElement **)(pFVar4 + 0x28) == (FScriptContainerElement *)0x0) {
        pFVar18 = pFVar4 + 0x10;
      }
      (**(code **)(*(longlong *)pFVar18 + 0x10))();
    }
    iVar16 = (this->WorkItemQueue).ArrayNum + -1;
    if (iVar16 != 0) {
      memmove(pFVar4,pFVar4 + 0x40,(longlong)iVar16 << 6);
    }
    piVar1 = &(this->WorkItemQueue).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,&pTVar2->AllocatorInstance,(this->WorkItemQueue).ArrayNum,
               &(this->WorkItemQueue).ArrayMax);
LAB_14eaaa8ad:
    pTVar3 = &(this->CurrentWorkItem).State;
    pFVar5 = pTVar3->Object;
    local_e8 = *param_1.RawPointer;
    if (local_e8 != (IMFMediaEvent)0x0) {
      (**(code **)(*(longlong *)local_e8 + 8))();
    }
    local_a8 = &local_e8;
    local_e0[0] = param_3;
    local_d8[0] = param_2;
    local_d0 = pFVar5;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->CurrentWorkItem).WorkLoad);
    pcVar8 = *(code **)&(this->CurrentWorkItem).WorkLoad;
    plVar7 = *(longlong **)&(this->CurrentWorkItem).WorkLoad.field_0x28;
    plVar19 = (longlong *)&(this->CurrentWorkItem).WorkLoad.field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar19 = plVar7;
    }
    uVar17 = (**(code **)(*plVar19 + 8))();
    iVar16 = (*pcVar8)(uVar17,&local_e8,local_d8,local_e0);
    if (local_e8 != (IMFMediaEvent)0x0) {
      (**(code **)(*(longlong *)local_e8 + 0x10))();
    }
    if (iVar16 == 0) {
      if (*(longlong *)&(this->CurrentWorkItem).WorkLoad != 0) {
        plVar7 = *(longlong **)&(this->CurrentWorkItem).WorkLoad.field_0x28;
        plVar19 = (longlong *)&(this->CurrentWorkItem).WorkLoad.field_0x10;
        if (plVar7 != (longlong *)0x0) {
          plVar19 = plVar7;
        }
        (**(code **)(*plVar19 + 0x10))();
        *(undefined8 *)&(this->CurrentWorkItem).WorkLoad = 0;
      }
      local_c8 = 0;
      FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TSharedPtr<FWmfMediaSession::FBaseWorkItemState,1> *)&local_c8) {
        pTVar3->Object = (FBaseWorkItemState *)0x0;
        local_c8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CurrentWorkItem).State.SharedReferenceCount,&FStack_c0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_c0.ReferenceController);
    }
  } while (*(longlong *)&(this->CurrentWorkItem).WorkLoad == 0);
  if (local_b8 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_b8);
  }
  if (*param_1.RawPointer != (IMFMediaEvent)0x0) {
    (**(code **)(*(longlong *)*param_1.RawPointer + 0x10))();
  }
  return;
}

// Flush @ 14eaabfb0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::Flush(FWmfMediaSession *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->NextSequenceIndex).bIsSet != false) {
      (this->NextSequenceIndex).bIsSet = false;
    }
                    /* WARNING: Could not recover jumptable at 0x00014eaabfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDuration @ 14eaad040

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall FWmfMediaSession::GetDuration(FWmfMediaSession *this)

{
  bool *lpCriticalSection;
  undefined8 *in_RDX;
  
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *in_RDX = (this->CriticalSection).CriticalSection.Opaque3[2];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (FTimespan)(long64)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetEvents @ 14eaad2a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaSession::GetEvents
          (FWmfMediaSession *this,TArray<EMediaEvent,TSizedDefaultAllocator<32>_> *param_1)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TNode *pTVar6;
  EMediaEvent local_18 [4];
  
  if (this->bIsWaitingForEnd != false) {
    this->bIsWaitingForEnd = false;
    pTVar6 = ::operator_new(0x10);
    if (pTVar6 != (TNode *)0x0) {
      pTVar6->NextNode = (TNode *)0x0;
      pTVar6->Item = PlaybackEndReached;
      pTVar1 = (this->DeferredEvents).Head;
      (this->DeferredEvents).Head = pTVar6;
      pTVar1->NextNode = pTVar6;
    }
  }
  do {
    pTVar6 = ((this->DeferredEvents).Tail)->NextNode;
    if (pTVar6 == (TNode *)0x0) {
      return;
    }
    local_18[0] = pTVar6->Item;
    pTVar1 = (this->DeferredEvents).Tail;
    (this->DeferredEvents).Tail = pTVar6;
    pTVar6->Item = MediaBuffering;
    ::operator_delete(pTVar1,0x10);
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)param_1->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    param_1->ArrayNum = iVar5 + 1;
    *(EMediaEvent *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18[0];
  } while( true );
}

// GetParameters @ 14eaae6f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

undefined4 __thiscall
FWmfMediaSession::GetParameters(FWmfMediaSession *this,ulong *param_1,ulong *param_2)

{
  return 0x80004001;
}

// GetRate @ 14eaaecf0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

float __thiscall FWmfMediaSession::GetRate(FWmfMediaSession *this)

{
  bool *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->SessionRate == 4.2039e-45) {
      fVar1 = *(float *)&this->bIsRequestedTimeLoop;
    }
    else {
      fVar1 = 0.0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetState @ 14eaaf2f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EMediaState __thiscall FWmfMediaSession::GetState(FWmfMediaSession *this)

{
  bool *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = this->SessionRate;
    if ((fVar1 == 4.2039e-45) && (*(float *)&this->bIsRequestedTimeLoop == 0.0)) {
      fVar1 = 2.8026e-45;
    }
    else if (*(char *)&(this->Tracks).WeakReferenceCount.ReferenceController != '\0') {
      fVar1 = 4.2039e-45;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (EMediaState)fVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetStatus @ 14eaafff0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

EMediaStatus __thiscall FWmfMediaSession::GetStatus(FWmfMediaSession *this)

{
  bool *lpCriticalSection;
  EMediaStatus EVar1;
  
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->SessionState;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSupportedRates @ 14eab0550

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TRangeSet<float> * __thiscall
FWmfMediaSession::GetSupportedRates
          (FWmfMediaSession *this,TRangeSet<float> *__return_storage_ptr__,
          EMediaRateThinning param_1)

{
  bool *lpCriticalSection;
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar3 = 0xc0;
    if (param_1 != Thinned) {
      lVar3 = 0xd0;
    }
    (__return_storage_ptr__->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)((longlong)(this->CriticalSection).CriticalSection.Opaque1 + lVar3 + -0x10);
    _Src = *(void **)((longlong)(this->CriticalSection).CriticalSection.Opaque1 + lVar3 + -0x18);
    (__return_storage_ptr__->Ranges).ArrayNum = iVar2;
    piVar1 = &(__return_storage_ptr__->Ranges).ArrayMax;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
      memcpy((__return_storage_ptr__->Ranges).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetTime @ 14eab06e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FTimespan __thiscall FWmfMediaSession::GetTime(FWmfMediaSession *this)

{
  bool *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  IMFPresentationClock *pIVar3;
  undefined8 *in_RDX;
  int local_res8 [2];
  undefined8 local_res18;
  bool *local_res20;
  undefined1 local_28 [16];
  
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection == (bool *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_res20 = lpCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->ShouldLoop == false) &&
     (plVar1 = (longlong *)(this->LastTime).Ticks, plVar1 != (longlong *)0x0)) {
    iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,0,local_res8);
    if ((-1 < iVar2) && (local_res8[0] != 0)) {
      if (local_res8[0] == 2) {
        *in_RDX = this->MediaSessionCloseEvent;
        goto LAB_14eab077f;
      }
      pIVar3 = TComPtr<IMFPresentationClock>::operator->
                         ((TComPtr<IMFPresentationClock> *)&this->LastTime);
      iVar2 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,0,&local_res18,local_28);
      if (-1 < iVar2) {
        *in_RDX = local_res18;
        goto LAB_14eab077f;
      }
    }
  }
  *in_RDX = 0;
LAB_14eab077f:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (FTimespan)(long64)in_RDX;
}

// HandleError @ 14eab16f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaSession::HandleError(FWmfMediaSession *this,T_HRESULT param_1)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if (1 < (byte)LogWmfMedia._0_1_) {
    WmfMedia::ResultToString(&local_18,param_1);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->SessionState = Error;
  if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*(this->MediaSession).RawPointer + 0x60))();
  ResetWorkItemQueue(this);
  return;
}

// HandlePresentationEnded @ 14eab2550

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::HandlePresentationEnded(FWmfMediaSession *this)

{
  this->SessionState = Stopped;
  return;
}

// HandleSessionEnded @ 14eab2570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaSession::HandleSessionEnded(FWmfMediaSession *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWmfMediaStreamSink *pFVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  atomic<int> aVar7;
  FWmfMediaTracks *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  atomic<int> aVar10;
  undefined8 uVar11;
  TSharedRef<FWmfMediaSession::FTimeWorkItemState,1> *pTVar12;
  longlong *plVar13;
  undefined ***pppuVar14;
  bool bVar15;
  undefined1 auStack_128 [40];
  FWmfMediaTracks *local_100;
  TReferenceControllerBase<1> *local_f8;
  FTimeWorkItemState *local_f0;
  TReferenceControllerBase<1> *local_e8;
  TSharedRef<FWmfMediaSession::FTimeWorkItemState,1> local_e0;
  code *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  longlong local_98;
  undefined **local_88;
  FWmfMediaSession *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FWmfMediaSession *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  FTimeWorkItemState *local_38;
  FSharedReferencer<1> local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (6 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  this->SessionState = Stopped;
  local_100 = (FWmfMediaTracks *)0x0;
  local_f8 = (this->Tracks).WeakReferenceCount.ReferenceController;
  if (local_f8 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = local_f8->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        local_f8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14eab261b;
      }
      LOCK();
      aVar10 = local_f8->SharedReferenceCount;
      bVar15 = aVar7 == aVar10;
      if (bVar15) {
        local_f8->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar10 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar10;
    } while (!bVar15);
    if (local_f8 != (TReferenceControllerBase<1> *)0x0) {
      local_100 = (this->Tracks).Object;
    }
  }
LAB_14eab261b:
  pTVar9 = local_f8;
  pFVar8 = local_100;
  if (local_100 != (FWmfMediaTracks *)0x0) {
    if ((local_100 == (FWmfMediaTracks *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (pFVar8->MediaStreamSink).RawPointer;
    if (pFVar2 != (FWmfMediaStreamSink *)0x0) {
      local_c8 = (code *)0x0;
      plStack_a0 = (longlong *)0x0;
      lpCriticalSection = &pFVar2->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      piVar1 = &pFVar2->NumRequestsInFlight;
      *piVar1 = *piVar1 - pFVar2->NumRequestsInFlightWithSystem;
      pFVar2->NumRequestsInFlightWithSystem = 0;
      if ((*piVar1 == 0) && (*(longlong *)&pFVar2->OnIdleAction != 0)) {
        uVar6 = CONCAT44(uStack_a4,local_a8);
        pcVar3 = *(code **)&pFVar2->OnIdleAction;
        uVar11 = *(undefined8 *)&(pFVar2->OnIdleAction).field_0x8;
        lVar4 = *(longlong *)&(pFVar2->OnIdleAction).field_0x10;
        uVar5 = *(undefined8 *)&(pFVar2->OnIdleAction).field_0x18;
        local_a8 = *(undefined4 *)&(pFVar2->OnIdleAction).field_0x20;
        uStack_a4 = *(undefined4 *)&(pFVar2->OnIdleAction).field_0x24;
        plVar13 = *(longlong **)&(pFVar2->OnIdleAction).field_0x28;
        *(code **)&pFVar2->OnIdleAction = local_c8;
        *(undefined8 *)&(pFVar2->OnIdleAction).field_0x8 = uStack_c0;
        *(longlong *)&(pFVar2->OnIdleAction).field_0x10 = local_b8;
        *(undefined8 *)&(pFVar2->OnIdleAction).field_0x18 = uStack_b0;
        *(undefined8 *)&(pFVar2->OnIdleAction).field_0x20 = uVar6;
        *(longlong **)&(pFVar2->OnIdleAction).field_0x28 = plStack_a0;
        local_c8 = pcVar3;
        uStack_c0 = uVar11;
        local_b8 = lVar4;
        uStack_b0 = uVar5;
        plStack_a0 = plVar13;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (local_c8 != (code *)0x0) {
        UE::Core::Private::Function::CheckCallable(local_c8);
        pcVar3 = local_c8;
        plVar13 = &local_b8;
        if (plStack_a0 != (longlong *)0x0) {
          plVar13 = plStack_a0;
        }
        uVar11 = (**(code **)(*plVar13 + 8))();
        (*pcVar3)(uVar11);
      }
      if (local_c8 != (code *)0x0) {
        plVar13 = &local_b8;
        if (plStack_a0 != (longlong *)0x0) {
          plVar13 = plStack_a0;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  if (this->bSeekActive == false) {
    if (this->ShouldLoop == false) {
      (this->LastTime).Ticks = 0;
      this->bIsWaitingForEnd = true;
      ResetWorkItemQueue(this);
    }
    else {
      pTVar12 = MakeShared<FWmfMediaSession::FTimeWorkItemState,1>(&local_e0);
      local_f0 = pTVar12->Object;
      local_e8 = (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_e8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_e8->SharedReferenceCount = (atomic<int>)((int)local_e8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FWmfMediaSession::HandleSessionEnded'::`29'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWmfMediaSession::HandleSessionEnded'::__l29::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
                    ::Call;
      local_40 = (undefined ***)0x0;
      local_70 = (undefined ***)0x0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FWmfMediaSession::HandleSessionEnded'::`29'::<lambda_1>,0,0>
                  ::_vftable_;
      local_48 = local_78;
      local_98 = 0;
      if (local_e8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_e8->SharedReferenceCount = (atomic<int>)((int)local_e8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFStack_80 = this;
      pFStack_50 = this;
      local_38 = local_f0;
      local_30.ReferenceController = local_e8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
      JamWorkItem(this,(FWorkItem *)local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
      if (local_68[0] != (code *)0x0) {
        pppuVar14 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar14 = local_40;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      if (local_98 != 0) {
        pppuVar14 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar14 = local_70;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// HandleSessionPaused @ 14eab28a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::HandleSessionPaused(FWmfMediaSession *this,T_HRESULT param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  if (((this->RateControl).RawPointer == (IMFRateControl *)0x0) || (this->CanScrub == false)) {
    pTVar2 = ::operator_new(0x10);
    if (pTVar2 != (TNode *)0x0) {
      pTVar2->NextNode = (TNode *)0x0;
      pTVar2->Item = PlaybackSuspended;
      pTVar1 = (this->DeferredEvents).Head;
      (this->DeferredEvents).Head = pTVar2;
      pTVar1->NextNode = pTVar2;
    }
    this->SessionState = Paused;
  }
  return;
}

// HandleSessionRateChanged @ 14eab2900

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaSession::HandleSessionRateChanged
          (FWmfMediaSession *this,int param_1,IMFMediaEvent *param_2)

{
  IMFRateControl *pIVar1;
  int iVar2;
  float local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_1 < 0) {
    pIVar1 = (this->RateControl).RawPointer;
    if (pIVar1 != (IMFRateControl *)0x0) {
      local_res20[0] = 0;
      local_res10[0] = 0.0;
      iVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_res20,local_res10);
      if (iVar2 != 0) {
        local_res10[0] = __real_3f800000;
      }
      if ((local_res10[0] != this->SessionRate) &&
         (this->SessionRate = local_res10[0], local_res10[0] != 0.0)) {
        this->UnpausedSessionRate = local_res10[0];
      }
    }
  }
  else {
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    iVar2 = (**(code **)((longlong)*param_2 + 0x120))(param_2,&local_38);
    if ((((-1 < iVar2) && ((short)local_38 == 4)) && ((float)uStack_30 != this->SessionRate)) &&
       (this->SessionRate = (float)uStack_30, (float)uStack_30 != 0.0)) {
      this->UnpausedSessionRate = (float)uStack_30;
      return;
    }
  }
  return;
}

// HandleSessionStarted @ 14eab29f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaSession::HandleSessionStarted(FWmfMediaSession *this,int param_1)

{
  IMFRateControl *pIVar1;
  TNode *pTVar2;
  int iVar3;
  TNode *pTVar4;
  float fVar5;
  float local_res10 [2];
  TNode *local_res18;
  
  if (param_1 < 0) {
    return;
  }
  this->bIsWaitingForEnd = false;
  pIVar1 = (this->RateControl).RawPointer;
  if (pIVar1 == (IMFRateControl *)0x0) {
    if (__real_3f800000 != this->SessionRate) {
      this->SessionRate = 1.0;
      this->UnpausedSessionRate = 1.0;
    }
  }
  else {
    local_res10[0] = 0.0;
    iVar3 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,0,local_res10);
    if (iVar3 != 0) {
      local_res10[0] = __real_3f800000;
    }
    fVar5 = this->SessionRate;
    if ((fVar5 == local_res10[0]) ||
       (this->SessionRate = local_res10[0], fVar5 = local_res10[0], local_res10[0] == 0.0)) {
      if (fVar5 == 0.0) {
        this->SessionState = Paused;
        local_res18 = ::operator_new(0x10);
        if (local_res18 != (TNode *)0x0) {
          local_res18->NextNode = (TNode *)0x0;
          local_res18->Item = PlaybackSuspended;
          pTVar4 = (this->DeferredEvents).Head;
          (this->DeferredEvents).Head = local_res18;
          pTVar4->NextNode = local_res18;
        }
        goto LAB_14eab2b44;
      }
    }
    else {
      this->UnpausedSessionRate = local_res10[0];
    }
  }
  this->SessionState = Playing;
  local_res18 = ::operator_new(0x10);
  if (local_res18 != (TNode *)0x0) {
    local_res18->NextNode = (TNode *)0x0;
    local_res18->Item = PlaybackResumed;
    pTVar4 = (this->DeferredEvents).Head;
    (this->DeferredEvents).Head = local_res18;
    pTVar4->NextNode = local_res18;
  }
LAB_14eab2b44:
  if (6 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  if ((this->bSeekActive != false) &&
     (((this->SessionState == Playing || (this->SessionState == Paused)) &&
      (pTVar4 = ::operator_new(0x10), pTVar4 != (TNode *)0x0)))) {
    pTVar4->NextNode = (TNode *)0x0;
    pTVar4->Item = SeekCompleted;
    pTVar2 = (this->DeferredEvents).Head;
    (this->DeferredEvents).Head = pTVar4;
    pTVar2->NextNode = pTVar4;
  }
  this->bSeekActive = false;
  return;
}

// HandleSessionStopped @ 14eab2be0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::HandleSessionStopped(FWmfMediaSession *this,int param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  
  if (-1 < param_1) {
    this->SessionState = Stopped;
    pTVar2 = ::operator_new(0x10);
    if (pTVar2 != (TNode *)0x0) {
      pTVar2->NextNode = (TNode *)0x0;
      pTVar2->Item = PlaybackSuspended;
      pTVar1 = (this->DeferredEvents).Head;
      (this->DeferredEvents).Head = pTVar2;
      pTVar1->NextNode = pTVar2;
    }
  }
  return;
}

// HandleSessionTopologySet @ 14eab2c40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWmfMediaSession::HandleSessionTopologySet
          (FWmfMediaSession *this,int param_1,IMFMediaEvent *param_2)

{
  TNode *pTVar1;
  int iVar2;
  TNode *pTVar3;
  FString local_18;
  
  if (-1 < param_1) {
    iVar2 = WmfMedia::GetTopologyFromEvent(param_2,&this->CurrentTopology);
    if (-1 < iVar2) {
      if ((byte)LogWmfMedia._0_1_ < 6) {
        return;
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      return;
    }
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_18,iVar2);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  if (this->SessionState == Preparing) {
    if (1 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_18,param_1);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this->SessionState = Error;
    pTVar3 = ::operator_new(0x10);
    if (pTVar3 != (TNode *)0x0) {
      pTVar3->NextNode = (TNode *)0x0;
      pTVar3->Item = MediaOpenFailed;
      pTVar1 = (this->DeferredEvents).Head;
      (this->DeferredEvents).Head = pTVar3;
      pTVar1->NextNode = pTVar3;
    }
  }
  return;
}

// HandleSessionTopologyStatus @ 14eab2da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWmfMediaSession::HandleSessionTopologyStatus
          (FWmfMediaSession *this,int param_1,IMFMediaEvent *param_2)

{
  TNode *pTVar1;
  int iVar2;
  TSharedRef<FWmfMediaSession::FTimeWorkItemState,1> *pTVar3;
  undefined ***pppuVar4;
  wchar_t *pwVar5;
  undefined1 auStack_108 [32];
  TNode *local_e8;
  undefined1 local_d8 [16];
  int local_c8 [2];
  IMFTopology *local_c0;
  TSharedRef<FWmfMediaSession::FTimeWorkItemState,1> local_b8;
  undefined8 local_a8;
  longlong local_98;
  undefined **local_88;
  FWmfMediaSession *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FWmfMediaSession *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  TNode *local_38;
  FSharedReferencer<1> local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c8[0] = 0;
  iVar2 = (**(code **)((longlong)*param_2 + 0x38))(param_2,&MF_EVENT_TOPOLOGY_STATUS,local_c8);
  if (iVar2 < 0) {
    if ((byte)LogWmfMedia._0_1_ < 6) {
      return;
    }
    WmfMedia::ResultToString((FString *)local_d8,iVar2);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if ((TNode *)local_d8._0_8_ == (TNode *)0x0) {
      return;
    }
    FMemory::Free((void *)local_d8._0_8_);
    return;
  }
  local_c0 = (IMFTopology *)0x0;
  local_b8.Object = (FTimeWorkItemState *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a8 = 0;
  iVar2 = (**(code **)((longlong)*param_2 + 0x120))(param_2,&local_b8);
  if (iVar2 < 0) {
LAB_14eab2ea0:
    PropVariantClear((PROPVARIANT *)&local_b8);
    if (-1 < iVar2) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        if (local_c8[0] < 0xd3) {
          if (local_c8[0] == 0xd2) {
            pwVar5 = L"Dynamic Changed";
          }
          else if (local_c8[0] == 0) {
            pwVar5 = L"Invalid";
          }
          else if (local_c8[0] == 100) {
            pwVar5 = L"Ready";
          }
          else {
            if (local_c8[0] != 200) goto LAB_14eab2f6c;
            pwVar5 = L"Started Source";
          }
LAB_14eab2f8e:
          ::FString::FString((FString *)local_d8,pwVar5);
        }
        else {
          if (local_c8[0] == 300) {
            pwVar5 = L"Sink Switched";
            goto LAB_14eab2f8e;
          }
          if (local_c8[0] == 400) {
            pwVar5 = L"Ended";
            goto LAB_14eab2f8e;
          }
LAB_14eab2f6c:
          ::FString::PrintfImpl((FString *)local_d8,L"Unknown status %i");
        }
        local_e8 = (TNode *)L"";
        if (local_d8._8_4_ != 0) {
          local_e8 = (TNode *)local_d8._0_8_;
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if ((TNode *)local_d8._0_8_ != (TNode *)0x0) {
          FMemory::Free((void *)local_d8._0_8_);
        }
      }
      if (local_c0 == (this->CurrentTopology).RawPointer) {
        if (this->SessionState != Error) {
          if (-1 < param_1) {
            if (local_c8[0] == 100) {
              UpdateCharacteristics(this);
              if (this->SessionState == Preparing) {
                if (5 < (byte)LogWmfMedia._0_1_) {
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
                }
                this->SessionState = Stopped;
                local_d8._0_8_ = ::operator_new(0x10);
                if ((TNode *)local_d8._0_8_ != (TNode *)0x0) {
                  ((TNode *)local_d8._0_8_)->NextNode = (TNode *)0x0;
                  ((TNode *)local_d8._0_8_)->Item = 4;
                  pTVar1 = (this->DeferredEvents).Head;
                  (this->DeferredEvents).Head = (TNode *)local_d8._0_8_;
                  pTVar1->NextNode = (TNode *)local_d8._0_8_;
                }
              }
              else if (this->SessionState == Paused) {
                pTVar3 = MakeShared<FWmfMediaSession::FTimeWorkItemState,1>(&local_b8);
                local_d8._0_8_ = pTVar3->Object;
                local_d8._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
                if ((TReferenceControllerBase<1> *)local_d8._8_8_ !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  ((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount +
                       1);
                  UNLOCK();
                }
                local_88 = &UE::Core::Private::Function::
                            TFunction_OwnedObject<`FWmfMediaSession::HandleSessionTopologyStatus'::`122'::<lambda_1>,0,0>
                            ::_vftable_;
                local_68[0] = UE::Core::Private::Function::
                              TFunctionRefCaller<`FWmfMediaSession::HandleSessionTopologyStatus'::__l122::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
                              ::Call;
                local_40 = (undefined ***)0x0;
                local_70 = (undefined ***)0x0;
                local_58 = &UE::Core::Private::Function::
                            TFunction_OwnedObject<`FWmfMediaSession::HandleSessionTopologyStatus'::`122'::<lambda_1>,0,0>
                            ::_vftable_;
                local_48 = local_78;
                local_98 = 0;
                if ((TReferenceControllerBase<1> *)local_d8._8_8_ !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  ((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount +
                       1);
                  UNLOCK();
                }
                pFStack_80 = this;
                pFStack_50 = this;
                local_38 = (TNode *)local_d8._0_8_;
                local_30.ReferenceController = (TReferenceControllerBase<1> *)local_d8._8_8_;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)local_d8._8_8_);
                JamWorkItem(this,(FWorkItem *)local_68);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_30.ReferenceController);
                if (local_68[0] != (code *)0x0) {
                  pppuVar4 = &local_58;
                  if (local_40 != (undefined ***)0x0) {
                    pppuVar4 = local_40;
                  }
                  (*(code *)(*pppuVar4)[2])();
                }
                if (local_98 != 0) {
                  pppuVar4 = &local_88;
                  if (local_70 != (undefined ***)0x0) {
                    pppuVar4 = local_70;
                  }
                  (*(code *)(*pppuVar4)[2])();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_b8.SharedReferenceCount.ReferenceController);
              }
            }
            goto LAB_14eab3059;
          }
          if (this->SessionState == Preparing) {
            if (1 < (byte)LogWmfMedia._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            }
            this->SessionState = Error;
            local_d8._0_8_ = ::operator_new(0x10);
            if ((TNode *)local_d8._0_8_ != (TNode *)0x0) {
              ((TNode *)local_d8._0_8_)->NextNode = (TNode *)0x0;
              ((TNode *)local_d8._0_8_)->Item = 5;
              pTVar1 = (this->DeferredEvents).Head;
              (this->DeferredEvents).Head = (TNode *)local_d8._0_8_;
              pTVar1->NextNode = (TNode *)local_d8._0_8_;
            }
          }
        }
        ResetWorkItemQueue(this);
      }
      goto LAB_14eab3059;
    }
  }
  else {
    if ((short)local_b8.Object == 0xd) {
      iVar2 = (**(code **)(local_b8.SharedReferenceCount.ReferenceController)->_padding_)
                        (local_b8.SharedReferenceCount.ReferenceController,
                         &_GUID_83cf873a_f6da_4bc8_823f_bacfd55dc433,&local_c0);
      goto LAB_14eab2ea0;
    }
    iVar2 = -0x7fff0001;
    PropVariantClear((PROPVARIANT *)&local_b8);
  }
  if (5 < (byte)LogWmfMedia._0_1_) {
    WmfMedia::ResultToString((FString *)local_d8,iVar2);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if ((TNode *)local_d8._0_8_ != (TNode *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
  }
LAB_14eab3059:
  if (local_c0 != (IMFTopology *)0x0) {
    (**(code **)((longlong)*local_c0 + 0x10))();
  }
  return;
}

// Initialize @ 14eab34f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMediaSession::Initialize(FWmfMediaSession *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IMFMediaSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  HRESULT HVar5;
  int iVar6;
  IMFAttributes *local_res18;
  FWindowsRecursiveMutex *local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  Shutdown(this);
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  local_res18 = (IMFAttributes *)0x0;
  HVar5 = MFCreateAttributes(&local_res18,2);
  if (HVar5 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_58,HVar5);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = false;
    goto LAB_14eab37b6;
  }
  if (param_1) {
    bVar3 = FWindowsPlatformMisc::VerifyWindowsVersion(6,2,0);
    if (bVar3) {
      if ((local_res18 == (IMFAttributes *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      HVar5 = (*local_res18->lpVtbl->SetUINT32)(local_res18,(GUID *)&MF_LOW_LATENCY,1);
      if ((HVar5 < 0) && (5 < (byte)LogWmfMedia._0_1_)) {
        WmfMedia::ResultToString(&local_48,HVar5);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (5 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  local_res20 = lpCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = MFCreateMediaSession(local_res18,&this->MediaSession);
  if (iVar6 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_38,iVar6);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
LAB_14eab378a:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
LAB_14eab3795:
    bVar3 = false;
  }
  else {
    if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->MediaSession).RawPointer;
    iVar6 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,this,0);
    if (iVar6 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_28,iVar6);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
        goto LAB_14eab378a;
      }
      goto LAB_14eab3795;
    }
    this->SessionState = Preparing;
    bVar3 = true;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
LAB_14eab37b6:
  if (local_res18 != (IMFAttributes *)0x0) {
    (*local_res18->lpVtbl->Release)(local_res18);
  }
  return bVar3;
}

// Invoke @ 14eab5490

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

undefined4 __thiscall FWmfMediaSession::Invoke(FWmfMediaSession *this,IMFAsyncResult *param_1)

{
  ulong uVar1;
  TNode *pTVar2;
  IMFRateControl *pIVar3;
  code *pcVar4;
  atomic<int> aVar5;
  FWmfMediaTracks *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  atomic<int> aVar12;
  EMediaState EVar13;
  IMFMediaSession *pIVar14;
  FTimespan *this_00;
  TComPtr<IMFMediaEvent> TVar15;
  ulong uVar16;
  undefined1 *puVar17;
  int local_res8 [2];
  ulong local_res18 [2];
  float local_res20 [2];
  IMFMediaEvent local_198;
  TNode *local_190;
  ulong local_188 [2];
  IMFMediaEvent local_180;
  IMFMediaEvent local_178;
  IMFMediaEvent local_170;
  IMFMediaEvent local_168;
  IMFMediaEvent local_160;
  IMFMediaEvent local_158;
  IMFMediaEvent local_150;
  IMFMediaEvent local_148;
  IMFMediaEvent local_140;
  IMFMediaEvent local_138;
  FWmfMediaTracks *local_130;
  TReferenceControllerBase<1> *local_128;
  LPCRITICAL_SECTION local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  local_120 = (LPCRITICAL_SECTION)&this->CriticalSection;
  if (local_120 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_120);
  pIVar14 = (this->MediaSession).RawPointer;
  if (pIVar14 == (IMFMediaSession *)0x0) goto LAB_14eab5fae;
  local_198 = (IMFMediaEvent)0x0;
  iVar9 = (**(code **)((longlong)*pIVar14 + 0x28))(pIVar14,param_1,&local_198);
  if (iVar9 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_f8,iVar9);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
LAB_14eab55d8:
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14eab5f9d;
  }
  local_res18[0] = 0;
  if ((local_198 == (IMFMediaEvent)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  iVar9 = (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 0x108))(local_198,local_res18);
  if (iVar9 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_e8,iVar9);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      local_f8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      goto LAB_14eab55d8;
    }
    goto LAB_14eab5f9d;
  }
  local_res8[0] = 1;
  if ((local_198 == (IMFMediaEvent)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return uVar10;
  }
  iVar9 = (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 0x118))(local_198,local_res8);
  if (iVar9 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_d8,iVar9);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      goto LAB_14eab5684;
    }
  }
  else {
LAB_14eab5684:
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_b8,local_res8[0]);
      WmfMedia::MediaEventToString(&local_c8,local_res18[0]);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  uVar16 = local_res18[0];
  iVar9 = local_res8[0];
  switch(local_res18[0]) {
  case 1:
    if (1 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_a8,local_res8[0]);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    this->SessionState = Error;
    if (((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    (**(code **)((longlong)*(this->MediaSession).RawPointer + 0x60))();
    ResetWorkItemQueue(this);
  default:
    goto switchD_14eab5731_caseD_2;
  case 0x65:
    if (local_res8[0] < 0) {
LAB_14eab5c37:
      if (this->SessionState == Preparing) {
        if (1 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_88,iVar9);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        this->SessionState = Error;
        local_190 = ::operator_new(0x10);
        if (local_190 != (TNode *)0x0) {
          local_190->NextNode = (TNode *)0x0;
          local_190->Item = MediaOpenFailed;
          pTVar2 = (this->DeferredEvents).Head;
          (this->DeferredEvents).Head = local_190;
          pTVar2->NextNode = local_190;
        }
      }
    }
    else {
      iVar11 = WmfMedia::GetTopologyFromEvent((IMFMediaEvent *)local_198,&this->CurrentTopology);
      if (iVar11 < 0) {
        if (5 < (byte)LogWmfMedia._0_1_) {
          WmfMedia::ResultToString(&local_98,iVar11);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14eab5c37;
      }
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
    }
    uVar16 = local_res18[0];
    iVar9 = local_res8[0];
    local_140 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_140;
    break;
  case 0x67:
    HandleSessionStarted(this,local_res8[0]);
    uVar16 = local_res18[0];
    iVar9 = local_res8[0];
    local_150 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_150;
    break;
  case 0x68:
    if (((this->RateControl).RawPointer == (IMFRateControl *)0x0) || (this->CanScrub == false)) {
      local_190 = ::operator_new(0x10);
      if (local_190 != (TNode *)0x0) {
        local_190->NextNode = (TNode *)0x0;
        local_190->Item = PlaybackSuspended;
        pTVar2 = (this->DeferredEvents).Head;
        (this->DeferredEvents).Head = local_190;
        pTVar2->NextNode = local_190;
      }
      this->SessionState = Paused;
    }
    uVar16 = local_res18[0];
    iVar9 = local_res8[0];
    local_168 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_168;
    break;
  case 0x69:
    if (-1 < local_res8[0]) {
      this->SessionState = Stopped;
      local_190 = ::operator_new(0x10);
      if (local_190 != (TNode *)0x0) {
        local_190->NextNode = (TNode *)0x0;
        local_190->Item = PlaybackSuspended;
        pTVar2 = (this->DeferredEvents).Head;
        (this->DeferredEvents).Head = local_190;
        pTVar2->NextNode = local_190;
      }
    }
    uVar16 = local_res18[0];
    iVar9 = local_res8[0];
    local_148 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_148;
    break;
  case 0x6a:
    (**(code **)(this->MediaSessionCloseEvent->_padding_ + 0x10))();
    this->Capabilities = 0;
    (this->LastTime).Ticks = 0;
    ResetWorkItemQueue(this);
    goto switchD_14eab5731_caseD_2;
  case 0x6b:
    HandleSessionEnded(this);
    uVar16 = local_res18[0];
    iVar9 = local_res8[0];
    local_170 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_170;
    break;
  case 0x6c:
    if (local_res8[0] < 0) {
      pIVar3 = (this->RateControl).RawPointer;
      if (pIVar3 != (IMFRateControl *)0x0) {
        local_188[1] = 0;
        local_res20[0] = 0.0;
        iVar9 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,local_188 + 1,local_res20);
        if (iVar9 != 0) {
          local_res20[0] = __real_3f800000;
        }
        if ((local_res20[0] != this->SessionRate) &&
           (this->SessionRate = local_res20[0], local_res20[0] != 0.0)) {
          this->UnpausedSessionRate = local_res20[0];
        }
      }
    }
    else {
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      iVar9 = (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 0x120))(local_198,&local_118);
      if ((((-1 < iVar9) && ((short)local_118 == 4)) && ((float)uStack_110 != this->SessionRate)) &&
         (this->SessionRate = (float)uStack_110, (float)uStack_110 != 0.0)) {
        this->UnpausedSessionRate = (float)uStack_110;
      }
    }
    uVar16 = local_res18[0];
    iVar9 = local_res8[0];
    local_160 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_160;
    break;
  case 0x6d:
    local_158 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_158;
    break;
  case 0x6e:
    uVar1 = this->Capabilities;
    iVar11 = (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 0x38))
                       (local_198,&MF_EVENT_SESSIONCAPS,local_188);
    uVar16 = local_res18[0];
    iVar9 = local_res8[0];
    if (iVar11 < 0) {
      local_188[0] = uVar1;
    }
    this->Capabilities = local_188[0];
    local_180 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_180;
    break;
  case 0x6f:
    HandleSessionTopologyStatus(this,local_res8[0],(IMFMediaEvent *)local_198);
    uVar16 = local_res18[0];
    iVar9 = local_res8[0];
    local_138 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_138;
    break;
  case 0x7a:
    this->Status = this->Status | Buffering;
    local_190 = ::operator_new(0x10);
    if (local_190 != (TNode *)0x0) {
      local_190->NextNode = (TNode *)0x0;
      local_190->Item = MediaBuffering;
      pTVar2 = (this->DeferredEvents).Head;
      (this->DeferredEvents).Head = local_190;
      pTVar2->NextNode = local_190;
    }
    goto switchD_14eab5731_caseD_2;
  case 0x7b:
    this->Status = this->Status & ~Buffering;
    local_190 = ::operator_new(0x10);
    if (local_190 != (TNode *)0x0) {
      local_190->NextNode = (TNode *)0x0;
      local_190->Item = MediaBufferingComplete;
      pTVar2 = (this->DeferredEvents).Head;
      (this->DeferredEvents).Head = local_190;
      pTVar2->NextNode = local_190;
    }
    goto switchD_14eab5731_caseD_2;
  case 0x7e:
    this->Status = this->Status | Connecting;
    local_190 = ::operator_new(0x10);
    if (local_190 != (TNode *)0x0) {
      local_190->NextNode = (TNode *)0x0;
      local_190->Item = MediaConnecting;
      pTVar2 = (this->DeferredEvents).Head;
      (this->DeferredEvents).Head = local_190;
      pTVar2->NextNode = local_190;
    }
    goto switchD_14eab5731_caseD_2;
  case 0x7f:
    this->Status = this->Status & ~Connecting;
    goto switchD_14eab5731_caseD_2;
  case 0xd3:
    this->SessionState = Stopped;
    local_178 = local_198;
    if (local_198 != (IMFMediaEvent)0x0) {
      (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 8))();
    }
    TVar15.RawPointer = &local_178;
  }
  ExecuteNextWorkItems(this,TVar15,uVar16,iVar9);
switchD_14eab5731_caseD_2:
  if (((local_res18[0] != 0x6a) && (this->SessionState != Error)) &&
     ((this->MediaSession).RawPointer != (IMFMediaSession *)0x0)) {
    pIVar14 = TComPtr<IMFMediaSession>::operator->(&this->MediaSession);
    iVar9 = (**(code **)((longlong)*pIVar14 + 0x20))(pIVar14,this,0);
    if (iVar9 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        WmfMedia::ResultToString(&local_78,iVar9);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      this->Capabilities = 0;
      this->SessionState = Error;
    }
  }
  local_130 = (FWmfMediaTracks *)0x0;
  local_128 = (this->Tracks).WeakReferenceCount.ReferenceController;
  if (local_128 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = local_128->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        local_128 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14eab5e07;
      }
      LOCK();
      aVar12 = local_128->SharedReferenceCount;
      bVar8 = aVar5 == aVar12;
      if (bVar8) {
        local_128->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar12 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar12;
    } while (!bVar8);
    if (local_128 != (TReferenceControllerBase<1> *)0x0) {
      local_130 = (this->Tracks).Object;
    }
  }
LAB_14eab5e07:
  pTVar7 = local_128;
  pFVar6 = local_130;
  if (local_130 != (FWmfMediaTracks *)0x0) {
    if ((local_130 == (FWmfMediaTracks *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    EVar13 = (**(code **)(*(longlong *)&this->field_0x8 + 0x18))(&this->field_0x8);
    if (6 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    pFVar6->SessionState = EVar13;
  }
  puVar17 = &this->field_0x8;
  if (6 < (byte)LogWmfMedia._0_1_) {
    switch(this->SessionState) {
    case Closed:
      break;
    case Error:
      break;
    case Paused:
      break;
    case Playing:
      break;
    case Preparing:
      break;
    case Stopped:
    }
    this_00 = (FTimespan *)(**(code **)(*(longlong *)puVar17 + 0x30))(puVar17,local_100);
    FTimespan::ToString(this_00,local_68);
    (**(code **)(*(longlong *)puVar17 + 0x10))(puVar17);
    EVar13 = (**(code **)(*(longlong *)puVar17 + 0x18))(puVar17);
    WmfMediaSession::StateToString(EVar13);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    if (6 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)&PTR_u_Session__p__Wai_152ffd918,
                 (FLogCategoryBase *)&LogWmfMedia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_14eab5f9d:
  if (local_198 != (IMFMediaEvent)0x0) {
    (**(code **)((longlong)*(IMFMediaEvent *)local_198 + 0x10))();
  }
LAB_14eab5fae:
  if (local_120 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_120);
  }
  return 0;
}

// IsLooping @ 14eab6210

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaSession::IsLooping(FWmfMediaSession *this)

{
  bool *lpCriticalSection;
  undefined1 uVar1;
  
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = *(undefined1 *)&this->UnpausedSessionRate;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// JamWorkItem @ 14eab6660

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::JamWorkItem(FWmfMediaSession *this,FWorkItem *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWorkItem *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  TArray<FWmfMediaSession::FWorkItem,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  longlong *local_res20;
  FBaseWorkItemState *local_30;
  longlong **local_28;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)&(this->CurrentWorkItem).WorkLoad == 0) {
    local_res20 = (longlong *)0x0;
    local_28 = &local_res20;
    local_30 = (param_1->State).Object;
    local_res8[0] = 0;
    local_res18[0] = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->WorkLoad);
    pcVar5 = *(code **)&param_1->WorkLoad;
    plVar4 = *(longlong **)&(param_1->WorkLoad).field_0x28;
    plVar10 = (longlong *)&(param_1->WorkLoad).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar10 = plVar4;
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    iVar8 = (*pcVar5)(uVar9,&local_res20,local_res18,local_res8,&local_30);
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
    }
    if (iVar8 == 1) {
      FWorkItem::operator=(&this->CurrentWorkItem,param_1);
    }
  }
  else {
    pTVar11 = &this->WorkItemQueue;
    pFVar2 = (FWorkItem *)(pTVar11->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->WorkItemQueue).ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    piVar1 = &(this->WorkItemQueue).ArrayMax;
    iVar8 = (this->WorkItemQueue).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1040,&pTVar11->AllocatorInstance,piVar1);
    }
    (this->WorkItemQueue).ArrayNum = iVar8 + 1;
    pFVar3 = (pTVar11->AllocatorInstance).Data;
    memmove(pFVar3 + 0x40,pFVar3,(longlong)iVar8 << 6);
    pFVar3 = (pTVar11->AllocatorInstance).Data;
    *(longlong *)pFVar3 = *(longlong *)&param_1->WorkLoad;
    *(longlong *)(pFVar3 + 0x28) = *(longlong *)&(param_1->WorkLoad).field_0x28;
    *(undefined8 *)&(param_1->WorkLoad).field_0x28 = 0;
    lVar6 = *(longlong *)&(param_1->WorkLoad).field_0x18;
    *(longlong *)(pFVar3 + 0x10) = *(longlong *)&(param_1->WorkLoad).field_0x10;
    *(longlong *)(pFVar3 + 0x18) = lVar6;
    *(longlong *)(pFVar3 + 0x20) = *(longlong *)&(param_1->WorkLoad).field_0x20;
    if (*(longlong *)pFVar3 != 0) {
      *(undefined8 *)&param_1->WorkLoad = 0;
    }
    *(FBaseWorkItemState **)(pFVar3 + 0x30) = (param_1->State).Object;
    *(TReferenceControllerBase<1> **)(pFVar3 + 0x38) =
         (param_1->State).SharedReferenceCount.ReferenceController;
    (param_1->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (param_1->State).Object = (FBaseWorkItemState *)0x0;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// QueryInterface @ 14eab92b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

HRESULT __thiscall
FWmfMediaSession::QueryInterface(FWmfMediaSession *this,_GUID *param_1,void **param_2)

{
  HRESULT HVar1;
  
  HVar1 = QISearch(this,(LPCQITAB)QITab,(IID *)param_1,param_2);
  return HVar1;
}

// Release @ 14eab9af0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

ulong __thiscall FWmfMediaSession::Release(FWmfMediaSession *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FWmfMediaSession *)0x0)) {
    (**(code **)(*(longlong *)&this->field_0x8 + 0x78))(&this->field_0x8,1);
  }
  return iVar2 - 1U;
}

// RequestMoreVideoData @ 14eaba120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::RequestMoreVideoData(FWmfMediaSession *this)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined **local_78;
  FWmfMediaSession *pFStack_70;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  FWmfMediaSession *pFStack_40;
  undefined ***local_30;
  FBaseWorkItemState *local_28;
  FSharedReferencer<1> FStack_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWmfMediaSession::RequestMoreVideoData'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FWmfMediaSession::RequestMoreVideoData'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
                ::Call;
  local_30 = (undefined ***)0x0;
  local_60 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FWmfMediaSession::RequestMoreVideoData'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_88 = 0;
  local_28 = (FBaseWorkItemState *)0x0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFStack_70 = this;
  pFStack_40 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  EnqueueWorkItem(this,(FWorkItem *)local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar1 = local_30;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_88 != 0) {
    pppuVar1 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar1 = local_60;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// ResetWorkItemQueue @ 14eaba9c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::ResetWorkItemQueue(FWmfMediaSession *this)

{
  int *piVar1;
  
  DestructItems<FWmfMediaSession::FWorkItem,int>
            ((FWorkItem *)(this->WorkItemQueue).AllocatorInstance.Data,
             (this->WorkItemQueue).ArrayNum);
  piVar1 = &(this->WorkItemQueue).ArrayMax;
  (this->WorkItemQueue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->WorkItemQueue).AllocatorInstance,0,piVar1);
  }
  FWorkItem::Reset(&this->CurrentWorkItem);
  this->NumSeeksInWorkQueue = 0;
  return;
}

// Seek @ 14eabc000

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaSession::Seek(FWmfMediaSession *this,FTimespan *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"You have to call the override with additional options!\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.h"
                     ,0x6f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Seek @ 14eabc040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWmfMediaSession::Seek(FWmfMediaSession *this,FTimespan *param_1,FMediaSeekParams *param_2)

{
  undefined1 *this_00;
  bool *lpCriticalSection;
  FSharedReferencer<1> *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  TSharedRef<FWmfMediaSession::FTimeWorkItemState,1> *pTVar7;
  FString *pFVar8;
  undefined ***pppuVar9;
  FMediaSeekParams *pFVar10;
  wchar_t *pwVar11;
  undefined1 auStack_138 [32];
  FScriptContainerElement *local_118;
  FTimeWorkItemState *local_108;
  TReferenceControllerBase<1> *local_100;
  FString local_f8;
  bool *local_e8;
  TSharedRef<FWmfMediaSession::FTimeWorkItemState,1> local_e0;
  FString local_d0;
  FString local_c0;
  longlong local_a8;
  undefined **local_98;
  undefined1 *puStack_90;
  long64 local_88;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  undefined1 *puStack_60;
  long64 local_58;
  undefined ***local_50;
  FTimeWorkItemState *local_48;
  FSharedReferencer<1> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->DeferredEvents).Tail != (TNode *)0x0) {
    if (((param_2->NewSequenceIndex).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InAdditionalParams.NewSequenceIndex.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Wmf\\WmfMediaSession.cpp"
                           ,0x221,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (5 < (byte)LogWmfMedia._0_1_) {
      if (((param_2->NewSequenceIndex).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar2 = (param_2->NewSequenceIndex).TypedValue;
      FTimespan::ToString(param_1,&local_f8);
      local_118 = (FScriptContainerElement *)CONCAT44(local_118._4_4_,iVar2);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    this_00 = &this[-1].field_0x168;
    cVar6 = (*(code *)**(undefined8 **)this)(this,4);
    if (cVar6 == '\0') {
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
    }
    else {
      if ((-1 < param_1->Ticks) &&
         (param_1->Ticks <= (longlong)(this->CriticalSection).CriticalSection.Opaque3[2])) {
        lpCriticalSection = &this->CanScrub;
        if (lpCriticalSection != (bool *)0x0) {
          local_e8 = lpCriticalSection;
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if ((this->SessionRate == 0.0) || (this->SessionRate == 1.4013e-45)) {
            if (5 < (byte)LogWmfMedia._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            }
            bVar4 = false;
          }
          else {
            pFVar1 = &(this->CurrentWorkItem).State.SharedReferenceCount;
            *(int *)&pFVar1->ReferenceController = *(int *)&pFVar1->ReferenceController + 1;
            pFVar10 = (FMediaSeekParams *)
                      ((longlong)&(this->Tracks).WeakReferenceCount.ReferenceController + 4);
            if (param_2 != pFVar10) {
              if ((param_2->NewSequenceIndex).bIsSet == false) {
                if (this->bIsWaitingForEnd != false) {
                  this->bIsWaitingForEnd = false;
                }
              }
              else {
                (pFVar10->NewSequenceIndex).TypedValue = (param_2->NewSequenceIndex).TypedValue;
                this->bIsWaitingForEnd = true;
              }
            }
            pTVar7 = MakeShared<FWmfMediaSession::FTimeWorkItemState,1>(&local_e0);
            local_108 = pTVar7->Object;
            local_100 = (pTVar7->SharedReferenceCount).ReferenceController;
            if (local_100 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_100->SharedReferenceCount =
                   (atomic<int>)((int)local_100->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_98 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`FWmfMediaSession::Seek'::`2'::<lambda_1>,0,0>::
                        _vftable_;
            local_88 = param_1->Ticks;
            local_78[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`FWmfMediaSession::Seek'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
                          ::Call;
            local_50 = (undefined ***)0x0;
            local_80 = (undefined ***)0x0;
            local_68 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`FWmfMediaSession::Seek'::`2'::<lambda_1>,0,0>::
                        _vftable_;
            local_a8 = 0;
            if (local_100 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_100->SharedReferenceCount =
                   (atomic<int>)((int)local_100->SharedReferenceCount + 1);
              UNLOCK();
            }
            puStack_90 = this_00;
            puStack_60 = this_00;
            local_58 = local_88;
            local_48 = local_108;
            local_40.ReferenceController = local_100;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_100);
            EnqueueWorkItem((FWmfMediaSession *)this_00,(FWorkItem *)local_78);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_40.ReferenceController);
            if (local_78[0] != (code *)0x0) {
              pppuVar9 = &local_68;
              if (local_50 != (undefined ***)0x0) {
                pppuVar9 = local_50;
              }
              (*(code *)(*pppuVar9)[2])();
            }
            if (local_a8 != 0) {
              pppuVar9 = &local_98;
              if (local_80 != (undefined ***)0x0) {
                pppuVar9 = local_80;
              }
              (*(code *)(*pppuVar9)[2])();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e0.SharedReferenceCount.ReferenceController);
            bVar4 = true;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return bVar4;
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      if (5 < (byte)LogWmfMedia._0_1_) {
        pFVar8 = FTimespan::ToString((FTimespan *)
                                     ((this->CriticalSection).CriticalSection.Opaque3 + 2),&local_c0
                                    );
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        FTimespan::ToString(param_1,&local_d0);
        local_118 = (FScriptContainerElement *)pwVar11;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return false;
}

// SetLooping @ 14eabce50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaSession::SetLooping(FWmfMediaSession *this,bool param_1)

{
  bool *lpCriticalSection;
  
  lpCriticalSection = &this->CanScrub;
  if (lpCriticalSection != (bool *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(bool *)&this->UnpausedSessionRate = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetRate @ 14eabd5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWmfMediaSession::SetRate(FWmfMediaSession *this,float param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined ***pppuVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  TReferenceControllerBase<1> *pTVar6;
  undefined1 auStack_108 [32];
  LPCRITICAL_SECTION local_e8;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  undefined4 local_ac;
  longlong local_a8;
  undefined **local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined ***local_50;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if ((this->DeferredEvents).Tail == (TNode *)0x0) {
    bVar2 = false;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CanScrub;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    local_e8 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    bVar2 = TRangeSet<float>::Contains((TRangeSet<float> *)&this->Status,param_1);
    if ((bVar2) ||
       (bVar2 = TRangeSet<float>::Contains
                          ((TRangeSet<float> *)&(this->ThinnedRates).Ranges.ArrayNum,param_1), bVar2
       )) {
      this_00 = &this[-1].field_0x168;
      if (param_1 != *(float *)((longlong)&(this->RequestedTopology).RawPointer + 4)) {
        *(float *)((longlong)&(this->RequestedTopology).RawPointer + 4) = param_1;
        pTVar4 = ::operator_new(0x28);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          pTVar4->SharedReferenceCount = (atomic<int>)0x1;
          pTVar4->WeakReferenceCount = (atomic<int>)0x1;
          pTVar4->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFRateWorkItemState_FWmfMediaSession___00_SharedPointerInternals__6B_
          ;
          pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar4[1]._padding_ = (longlong)&___7FRateWorkItemState_FWmfMediaSession__6B_;
          pTVar4[2]._padding_ = 0;
          lpCriticalSection = local_e8;
          pTVar6 = pTVar4;
        }
        local_d8 = pTVar6 + 1;
        pTStack_d0 = pTVar6;
        if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        local_c8 = local_d8;
        pTStack_c0 = pTStack_d0;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FWmfMediaSession::SetRate'::`2'::<lambda_1>,0,0>::
                    _vftable_;
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FWmfMediaSession::SetRate'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
                      ::Call;
        local_50 = (undefined ***)0x0;
        local_80 = (undefined ***)0x0;
        local_68 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FWmfMediaSession::SetRate'::`2'::<lambda_1>,0,0>::
                    _vftable_;
        local_88._4_4_ = local_ac;
        local_88._0_4_ = param_1;
        local_a8 = 0;
        local_48 = local_d8;
        local_40.ReferenceController = pTStack_d0;
        if (pTStack_d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_d0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        puStack_90 = this_00;
        puStack_60 = this_00;
        local_58 = local_88;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d0);
        EnqueueWorkItem((FWmfMediaSession *)this_00,(FWorkItem *)local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40.ReferenceController);
        if (local_78[0] != (code *)0x0) {
          pppuVar5 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar5 = local_50;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        if (local_a8 != 0) {
          pppuVar5 = &local_98;
          if (local_80 != (undefined ***)0x0) {
            pppuVar5 = local_80;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      }
      bVar2 = true;
    }
    else {
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      bVar2 = false;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return bVar2;
}

// SetSessionRate @ 14eabd830

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaSession::SetSessionRate(FWmfMediaSession *this,float param_1)

{
  if ((param_1 != this->SessionRate) && (this->SessionRate = param_1, param_1 != 0.0)) {
    this->UnpausedSessionRate = param_1;
  }
  return;
}

// SetTopology @ 14eabd8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaSession::SetTopology
          (FWmfMediaSession *this,TComPtr<IMFTopology> *param_1,FTimespan param_2)

{
  IMFTopology *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  code **ppcVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 *local_c8;
  FWmfMediaSession *local_c0;
  IMFTopology *local_b8;
  long64 local_b0;
  code *local_a8;
  longlong local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  FBaseWorkItemState *local_48;
  FSharedReferencer<1> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if ((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) {
    bVar3 = false;
  }
  else {
    local_c8 = &local_d8;
    pTVar5 = ::operator_new(0x20);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFTopologyWorkItemState_FWmfMediaSession___00_SharedPointerInternals__6B_
      ;
      pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar5[1]._padding_ = (longlong)&___7FTopologyWorkItemState_FWmfMediaSession__6B_;
      pTVar7 = pTVar5;
    }
    local_e8 = pTVar7 + 1;
    uStack_e0 = pTVar7;
    if ((local_e8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_d8 = (undefined4)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = (undefined4)uStack_e0;
    uStack_cc = uStack_e0._4_4_;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar1 = param_1->RawPointer;
    local_c0 = this;
    local_b8 = pIVar1;
    if (pIVar1 != (IMFTopology *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
    }
    local_a8 = (code *)0x0;
    local_80 = (code **)0x0;
    local_b0 = param_2.Ticks;
    ppcVar6 = FMemory::Malloc(0x20,8);
    *ppcVar6 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FWmfMediaSession::SetTopology'::`2'::<lambda_1>,0,1>
                        ::_vftable_;
    ppcVar6[1] = (code *)this;
    ppcVar6[2] = (code *)pIVar1;
    local_80 = ppcVar6;
    if (pIVar1 != (IMFTopology *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
    }
    ppcVar6[3] = (code *)param_2.Ticks;
    local_78[0] = local_a8;
    if (ppcVar6 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWmfMediaSession::SetTopology'::__l2::<lambda_1>,enum_FWmfMediaSession::EWorkItemResult,TComPtr<IMFMediaEvent>,unsigned_long,long,FWmfMediaSession::FBaseWorkItemState_*>
                    ::Call;
    }
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_68[0] = (code *)local_98[0];
    local_68[1] = (code *)local_98[1];
    local_68[2] = (code *)local_98[2];
    local_a8 = (code *)0x0;
    local_48 = (FBaseWorkItemState *)CONCAT44(uStack_d4,local_d8);
    local_40.ReferenceController = (TReferenceControllerBase<1> *)CONCAT44(uStack_cc,uStack_d0);
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(uStack_cc,uStack_d0));
    EnqueueWorkItem(this,(FWorkItem *)local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    if (local_78[0] != (code *)0x0) {
      ppcVar6 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar6 = local_50;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
    if (local_a8 != (code *)0x0) {
      ppcVar6 = (code **)local_98;
      if (local_80 != (code **)0x0) {
        ppcVar6 = local_80;
      }
      (**(code **)((longlong)*ppcVar6 + 0x10))();
    }
    if (pIVar1 != (IMFTopology *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    bVar3 = true;
  }
  return bVar3;
}

// SetTracks @ 14eabdd40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaSession::SetTracks(FWmfMediaSession *this,TSharedPtr<FWmfMediaTracks,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->Tracks).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Tracks).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Tracks).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Tracks).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Shutdown @ 14eabe100

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaSession::Shutdown(FWmfMediaSession *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  IMFMediaSession *pIVar2;
  IMFTopology *pIVar3;
  IMFPresentationClock *pIVar4;
  IMFRateControl *pIVar5;
  IMFRateSupport *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  
  if ((this->MediaSession).RawPointer != (IMFMediaSession *)0x0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ResetWorkItemQueue(this);
    this->bShuttingDown = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->SessionState != Error) {
      if ((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = (**(code **)((longlong)*(this->MediaSession).RawPointer + 0x60))();
      if (iVar9 == 0) {
        (**(code **)(this->MediaSessionCloseEvent->_padding_ + 0x20))
                  (this->MediaSessionCloseEvent,0xffffffff);
        if (5 < (byte)LogWmfMedia._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
        }
      }
      else if (2 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->MediaSession).RawPointer == (IMFMediaSession *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)((longlong)*(this->MediaSession).RawPointer + 0x68))();
    pIVar2 = (this->MediaSession).RawPointer;
    if (pIVar2 != (IMFMediaSession *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
      (this->MediaSession).RawPointer = (IMFMediaSession *)0x0;
    }
    pIVar3 = (this->CurrentTopology).RawPointer;
    if (pIVar3 != (IMFTopology *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
      (this->CurrentTopology).RawPointer = (IMFTopology *)0x0;
    }
    pIVar4 = (this->PresentationClock).RawPointer;
    if (pIVar4 != (IMFPresentationClock *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
      (this->PresentationClock).RawPointer = (IMFPresentationClock *)0x0;
    }
    pIVar5 = (this->RateControl).RawPointer;
    if (pIVar5 != (IMFRateControl *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
      (this->RateControl).RawPointer = (IMFRateControl *)0x0;
    }
    pIVar6 = (this->RateSupport).RawPointer;
    if (pIVar6 != (IMFRateSupport *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))();
      (this->RateSupport).RawPointer = (IMFRateSupport *)0x0;
    }
    this->CanScrub = false;
    this->Capabilities = 0;
    (this->CurrentDuration).Ticks = 0;
    this->LastSetRate = -1.0;
    this->SessionRate = 0.0;
    this->UnpausedSessionRate = 0.0;
    this->SessionState = Closed;
    (this->LastTime).Ticks = 0;
    if ((this->RequestedRate).bIsSet != false) {
      (this->RequestedRate).bIsSet = false;
    }
    this->Status = None;
    (this->ThinnedRates).Ranges.ArrayNum = 0;
    piVar1 = &(this->ThinnedRates).Ranges.ArrayMax;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->ThinnedRates,0,piVar1);
    }
    (this->UnthinnedRates).Ranges.ArrayNum = 0;
    piVar1 = &(this->UnthinnedRates).Ranges.ArrayMax;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->UnthinnedRates,0,piVar1);
    }
    this->bSeekActive = false;
    this->bShuttingDown = false;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// UpdateCharacteristics @ 14eac21a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaSession::UpdateCharacteristics(FWmfMediaSession *this)

{
  int *piVar1;
  TComPtr<IMFRateSupport> *pTVar2;
  TRangeSet<float> *this_00;
  TRangeSet<float> *this_01;
  IMFPresentationClock *pIVar3;
  IMFRateControl *pIVar4;
  IMFMediaSession *pIVar5;
  IMFRateSupport *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  longlong *local_res20;
  TRange<float> local_138;
  TRange<float> local_128;
  TRange<float> local_118;
  TRange<float> local_108;
  TRange<float> local_f8;
  TRangeBound<float> local_e8;
  TRangeBound<float> local_e0;
  TRangeBound<float> local_d8;
  TRangeBound<float> local_d0;
  TRangeBound<float> local_c8;
  TRangeBound<float> local_c0;
  TRangeBound<float> local_b8;
  TRangeBound<float> local_b0;
  TRangeBound<float> local_a8;
  TRangeBound<float> local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  
  pIVar3 = (this->PresentationClock).RawPointer;
  if (pIVar3 != (IMFPresentationClock *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
    (this->PresentationClock).RawPointer = (IMFPresentationClock *)0x0;
  }
  pIVar4 = (this->RateControl).RawPointer;
  if (pIVar4 != (IMFRateControl *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
    (this->RateControl).RawPointer = (IMFRateControl *)0x0;
  }
  pTVar2 = &this->RateSupport;
  if (pTVar2->RawPointer != (IMFRateSupport *)0x0) {
    (**(code **)((longlong)*pTVar2->RawPointer + 0x10))();
    pTVar2->RawPointer = (IMFRateSupport *)0x0;
  }
  this_00 = &this->ThinnedRates;
  (this->ThinnedRates).Ranges.ArrayNum = 0;
  piVar1 = &(this->ThinnedRates).Ranges.ArrayMax;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  this_01 = &this->UnthinnedRates;
  (this->UnthinnedRates).Ranges.ArrayNum = 0;
  piVar1 = &(this->UnthinnedRates).Ranges.ArrayMax;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_01,0,piVar1);
  }
  this->CanScrub = false;
  pIVar5 = (this->MediaSession).RawPointer;
  if (pIVar5 == (IMFMediaSession *)0x0) {
    return;
  }
  local_res20 = (longlong *)0x0;
  iVar9 = (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5,&local_res20);
  if (iVar9 < 0) {
    if ((byte)LogWmfMedia._0_1_ < 6) goto LAB_14eac23a0;
    WmfMedia::ResultToString(&local_98,iVar9);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  else {
    if ((local_res20 == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (**(code **)*local_res20)
                      (local_res20,&_GUID_868ce85c_8ea9_4f55_ab82_b009a910a805,
                       &this->PresentationClock);
    if (-1 < iVar9) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      goto LAB_14eac23a0;
    }
    if ((byte)LogWmfMedia._0_1_ < 6) goto LAB_14eac23a0;
    WmfMedia::ResultToString(&local_88,iVar9);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_14eac23a0:
  iVar9 = MFGetService((this->MediaSession).RawPointer,&MF_RATE_CONTROL_SERVICE,
                       &_GUID_88ddcd21_03c3_4275_91ed_55ee3929328f,&this->RateControl);
  if (iVar9 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(&local_78,iVar9);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (5 < (byte)LogWmfMedia._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
    }
    if (((this->RateControl).RawPointer == (IMFRateControl *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar4 = (this->RateControl).RawPointer;
    iVar9 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,0,local_res18);
    if (iVar9 < 0) {
      if (5 < (byte)LogWmfMedia._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
      }
      local_res18[0] = __real_3f800000;
    }
    if ((local_res18[0] != this->SessionRate) &&
       (this->SessionRate = local_res18[0], local_res18[0] != 0.0)) {
      this->UnpausedSessionRate = local_res18[0];
    }
  }
  iVar9 = MFGetService((this->MediaSession).RawPointer,&MF_RATE_CONTROL_SERVICE,
                       &_GUID_0a9ccdbc_d797_4563_9667_94ec5d79292d,pTVar2);
  if (iVar9 < 0) {
    if (5 < (byte)LogWmfMedia._0_1_) {
      WmfMedia::ResultToString(local_68,iVar9);
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Session__p__Rat_152ffe5d0,
                 (FLogCategoryBase *)&LogWmfMedia);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  pIVar6 = pTVar2->RawPointer;
  if (pIVar6 != (IMFRateSupport *)0x0) {
    local_res8[0] = 0.0;
    local_res10[0] = 0.0;
    iVar9 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,0,1,local_res10);
    if (-1 < iVar9) {
      if ((pTVar2->RawPointer == (IMFRateSupport *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (**(code **)((longlong)*pTVar2->RawPointer + 0x20))(pTVar2->RawPointer,0,1,local_res8)
      ;
      if (-1 < iVar9) {
        local_e0.Type.Value = '\x01';
        local_e8.Type.Value = '\x01';
        local_138.LowerBound.Type.Value = '\x01';
        local_138.LowerBound._1_3_ = local_e8._1_3_;
        local_138.LowerBound.Value = local_res10[0];
        local_138.UpperBound.Type.Value = '\x01';
        local_138.UpperBound._1_3_ = local_e0._1_3_;
        local_138.UpperBound.Value = local_res8[0];
        TRangeSet<float>::Add(this_00,&local_138);
      }
    }
    if ((pTVar2->RawPointer == (IMFRateSupport *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (**(code **)((longlong)*pTVar2->RawPointer + 0x18))(pTVar2->RawPointer,1,1,local_res10);
    if (-1 < iVar9) {
      if ((pTVar2->RawPointer == (IMFRateSupport *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (**(code **)((longlong)*pTVar2->RawPointer + 0x20))(pTVar2->RawPointer,1,1,local_res8)
      ;
      if (-1 < iVar9) {
        local_d0.Type.Value = '\x01';
        local_d8.Type.Value = '\x01';
        local_128.LowerBound.Type.Value = '\x01';
        local_128.LowerBound._1_3_ = local_d8._1_3_;
        local_128.LowerBound.Value = local_res8[0];
        local_128.UpperBound.Type.Value = '\x01';
        local_128.UpperBound._1_3_ = local_d0._1_3_;
        local_128.UpperBound.Value = local_res10[0];
        TRangeSet<float>::Add(this_00,&local_128);
      }
    }
    if ((pTVar2->RawPointer == (IMFRateSupport *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (**(code **)((longlong)*pTVar2->RawPointer + 0x18))(pTVar2->RawPointer,0,0,local_res10);
    if (-1 < iVar9) {
      if ((pTVar2->RawPointer == (IMFRateSupport *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (**(code **)((longlong)*pTVar2->RawPointer + 0x20))(pTVar2->RawPointer,0,0,local_res8)
      ;
      if (-1 < iVar9) {
        local_c0.Type.Value = '\x01';
        local_c8.Type.Value = '\x01';
        local_118.LowerBound.Type.Value = '\x01';
        local_118.LowerBound._1_3_ = local_c8._1_3_;
        local_118.LowerBound.Value = local_res10[0];
        local_118.UpperBound.Type.Value = '\x01';
        local_118.UpperBound._1_3_ = local_c0._1_3_;
        local_118.UpperBound.Value = local_res8[0];
        TRangeSet<float>::Add(this_01,&local_118);
      }
    }
    if ((pTVar2->RawPointer == (IMFRateSupport *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (**(code **)((longlong)*pTVar2->RawPointer + 0x18))(pTVar2->RawPointer,1,0,local_res10);
    if (-1 < iVar9) {
      if ((pTVar2->RawPointer == (IMFRateSupport *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (**(code **)((longlong)*pTVar2->RawPointer + 0x20))(pTVar2->RawPointer,1,0,local_res8)
      ;
      if (-1 < iVar9) {
        local_b0.Type.Value = '\x01';
        local_b8.Type.Value = '\x01';
        local_108.LowerBound.Type.Value = '\x01';
        local_108.LowerBound._1_3_ = local_b8._1_3_;
        local_108.LowerBound.Value = local_res8[0];
        local_108.UpperBound.Type.Value = '\x01';
        local_108.UpperBound._1_3_ = local_b0._1_3_;
        local_108.UpperBound.Value = local_res10[0];
        TRangeSet<float>::Add(this_01,&local_108);
      }
    }
    bVar8 = TRangeSet<float>::Contains(this_00,0.0);
    this->CanScrub = bVar8;
    if ((pTVar2->RawPointer == (IMFRateSupport *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (**(code **)((longlong)*pTVar2->RawPointer + 0x28))(pTVar2->RawPointer,0,0,0);
    if (((-1 < iVar9) && (bVar8 = TRangeSet<float>::Contains(this_00,0.0), !bVar8)) &&
       (bVar8 = TRangeSet<float>::Contains(this_01,0.0), !bVar8)) {
      local_a0.Type.Value = '\x01';
      local_a8.Type.Value = '\x01';
      local_f8.LowerBound.Type.Value = '\x01';
      local_f8.LowerBound._1_3_ = local_a8._1_3_;
      local_f8.LowerBound.Value = 0.0;
      local_f8.UpperBound.Type.Value = '\x01';
      local_f8.UpperBound._1_3_ = local_a0._1_3_;
      local_f8.UpperBound.Value = 0.0;
      TRangeSet<float>::Add(this_01,&local_f8);
    }
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
  }
  return;
}

