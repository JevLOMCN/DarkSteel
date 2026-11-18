// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// operator() @ 1477ffd50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TDefaultDelete<TTraceThreadData<FOverlapDatum>_>::operator()
          (TDefaultDelete<TTraceThreadData<FOverlapDatum>_> *this,
          TTraceThreadData<FOverlapDatum> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar1;
  longlong lVar2;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  if (param_1 != (TTraceThreadData<FOverlapDatum> *)0x0) {
    lVar2 = 0x40;
    pTVar1 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1[1].Buffer[0].Delegate;
    do {
      this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar1[-0xe].field_0x10;
      lVar2 = lVar2 + -1;
      if (*(void **)&pTVar1[-0xd].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1[-0xd].field_0x10);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
      if (*(void **)(pTVar1 + -0xd) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar1 + -0xd));
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this_00);
      if (*(void **)&pTVar1[-0x14].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1[-0x14].field_0x10);
      }
      if (*(void **)&pTVar1[-0x15].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1[-0x15].field_0x8);
      }
      pTVar1 = this_00;
    } while (lVar2 != 0);
    ::operator_delete(param_1,0x5000);
  }
  return;
}

// operator() @ 1477ffe00

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TDefaultDelete<TTraceThreadData<FTraceDatum>_>::operator()
          (TDefaultDelete<TTraceThreadData<FTraceDatum>_> *this,
          TTraceThreadData<FTraceDatum> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar1;
  longlong lVar2;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  if (param_1 != (TTraceThreadData<FTraceDatum> *)0x0) {
    lVar2 = 0x40;
    pTVar1 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1[1].Buffer[0].Delegate;
    do {
      this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar1[-0xf].field_0x8;
      lVar2 = lVar2 + -1;
      if (*(void **)&pTVar1[-0xe].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1[-0xe].field_0x8);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
      if (*(void **)&pTVar1[-0xf].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1[-0xf].field_0x10);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this_00);
      if (*(void **)(pTVar1 + -0x16) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar1 + -0x16));
      }
      if (*(void **)&pTVar1[-0x18].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1[-0x18].field_0x10);
      }
      pTVar1 = this_00;
    } while (lVar2 != 0);
    ::operator_delete(param_1,0x5800);
  }
  return;
}

// operator() @ 147a2d640

void __thiscall
TDefaultDelete<FRepState>::operator()(TDefaultDelete<FRepState> *this,FRepState *param_1)

{
  FReceivingRepState *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (FRepState *)0x0) {
    TDefaultDelete<FSendingRepState>::operator()
              ((TDefaultDelete<FSendingRepState> *)&param_1->SendingRepState,
               (param_1->SendingRepState).Ptr);
    this_00 = (param_1->ReceivingRepState).Ptr;
    if (this_00 != (FReceivingRepState *)0x0) {
      *(undefined4 *)&(this_00->RepNotifyMetaData).field_0x48 = 0;
      pvVar1 = *(void **)&(this_00->RepNotifyMetaData).field_0x40;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FProperty_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00->RepNotifyMetaData);
      pFVar2 = (this_00->RepNotifies).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      *(undefined4 *)&(this_00->GuidReferencesMap).field_0x48 = 0;
      pvVar1 = *(void **)&(this_00->GuidReferencesMap).field_0x40;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00->GuidReferencesMap);
      FRepStateStaticBuffer::~FRepStateStaticBuffer(&this_00->StaticBuffer);
      ::operator_delete(this_00,0xd0);
    }
    ::operator_delete(param_1,0x10);
  }
  return;
}

// operator() @ 147a2d700

void __thiscall
TDefaultDelete<FSendingRepState>::operator()
          (TDefaultDelete<FSendingRepState> *this,FSendingRepState *param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  int *piVar4;
  longlong lVar5;
  
  if (param_1 != (FSendingRepState *)0x0) {
    DestructItems<TSharedPtr<INetDeltaBaseState,1>,int>
              ((TSharedPtr<INetDeltaBaseState,1> *)
               (param_1->CheckpointCustomDeltaState).AllocatorInstance.Data,
               (param_1->CheckpointCustomDeltaState).ArrayNum);
    pFVar2 = (param_1->CheckpointCustomDeltaState).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TSharedPtr<INetDeltaBaseState,1>,int>
              ((TSharedPtr<INetDeltaBaseState,1> *)
               (param_1->CDOCustomDeltaState).AllocatorInstance.Data,
               (param_1->CDOCustomDeltaState).ArrayNum);
    pFVar2 = (param_1->CDOCustomDeltaState).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TSharedPtr<INetDeltaBaseState,1>,int>
              ((TSharedPtr<INetDeltaBaseState,1> *)
               (param_1->RecentCustomDeltaState).AllocatorInstance.Data,
               (param_1->RecentCustomDeltaState).ArrayNum);
    pFVar2 = (param_1->RecentCustomDeltaState).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FVar3 = (param_1->InactiveParents).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    pFVar2 = (param_1->InactiveChangelist).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->LifetimeChangelist).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FRepChangedHistory,int>
              ((FRepChangedHistory *)(param_1->PreOpenAckHistory).AllocatorInstance.Data,
               (param_1->PreOpenAckHistory).ArrayNum);
    pFVar2 = (param_1->PreOpenAckHistory).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    piVar4 = &(param_1->Retirement).ArrayNum;
    DestructItems<FPropertyRetirement,int>
              ((FPropertyRetirement *)(param_1->Retirement).AllocatorInstance.Data,*piVar4);
    pFVar2 = (param_1->Retirement).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    lVar5 = 0x20;
    do {
      puVar1 = (undefined8 *)(piVar4 + -8);
      piVar4 = piVar4 + -8;
      lVar5 = lVar5 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar5 != 0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->RepChangedPropertyTracker).SharedReferenceCount.ReferenceController);
    ::operator_delete(param_1,0x4c0);
  }
  return;
}

// operator() @ 147ac2460

void __thiscall
TDefaultDelete<FDeltaCheckpointData>::operator()
          (TDefaultDelete<FDeltaCheckpointData> *this,FDeltaCheckpointData *param_1)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  if (param_1 != (FDeltaCheckpointData *)0x0) {
    *(undefined4 *)&(param_1->ChannelsToClose).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->ChannelsToClose).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,enum_EChannelCloseReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,enum_EChannelCloseReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&param_1->ChannelsToClose);
    (param_1->DestroyedDynamicActors).HashSize = 0;
    FVar2 = (param_1->DestroyedDynamicActors).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(param_1->DestroyedDynamicActors).Elements);
    (param_1->DestroyedNetStartupActors).HashSize = 0;
    FVar2 = (param_1->DestroyedNetStartupActors).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(param_1->DestroyedNetStartupActors).Elements);
    DestructItems<FString,int>
              ((FString *)(param_1->RecordingDeletedNetStartupActors).AllocatorInstance.Data,
               (param_1->RecordingDeletedNetStartupActors).ArrayNum);
    pFVar3 = (param_1->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(param_1,0x100);
  }
  return;
}

// operator() @ 147fae9f0

void __thiscall
TDefaultDelete<UE::Net::TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory>_>
::operator()(void *this,
            TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
            *param_1)

{
  ForElementType<int> FVar1;
  ForElementType<UE::Net::FEscalationCounter> FVar2;
  void *pvVar3;
  longlong *plVar4;
  
  if (param_1 !=
      (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
       *)0x0) {
    FVar1 = param_1->RegisteredCountersAlloc[0].AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar2 = (param_1->CountersPerPeriodAlloc).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FEscalationCounter>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (param_1->SecondCountersAlloc).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FEscalationCounter>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (param_1->FrameCountersAlloc).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FEscalationCounter>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    pvVar3 = (void *)(param_1->StateAlloc)._padding_;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    (param_1->StateAlloc)._padding_ = (longlong)&___7FStateStruct__6B_;
    pvVar3 = (void *)(param_1->StateAlloc)._padding_;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    if (*(void **)&param_1->field_0xc8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0xc8);
    }
    if (*(void **)&param_1->field_0xb8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0xb8);
    }
    FStructOnScope::~FStructOnScope((FStructOnScope *)&param_1->field_0x58);
    if (*(longlong *)&param_1->field_0x20 != 0) {
      plVar4 = (longlong *)&param_1->field_0x30;
      if (*(longlong **)&param_1->field_0x48 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_1->field_0x48;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (*(void **)&param_1->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x8);
    }
    ::operator_delete(param_1,0x960);
  }
  return;
}

// operator() @ 14871bfb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TDefaultDelete<UE::SVT::FStreamingManager::FStreamingInfo>::operator()
          (TDefaultDelete<UE::SVT::FStreamingManager::FStreamingInfo> *this,FStreamingInfo *param_1)

{
  FTileDataTexture *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  
  if (param_1 != (FStreamingInfo *)0x0) {
    pFVar1 = (param_1->TileDataTexture).Ptr;
    if (pFVar1 != (FTileDataTexture *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    pFVar2 = (param_1->TileAllocator).Allocations.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    operator_delete__((param_1->TileAllocator).FreeHeap.Heap);
    operator_delete__((param_1->TileAllocator).FreeHeap.Keys);
    operator_delete__((param_1->TileAllocator).FreeHeap.HeapIndexes);
    (param_1->TileAllocator).FreeHeap.HeapNum = 0;
    (param_1->TileAllocator).FreeHeap.HeapSize = 0;
    (param_1->TileAllocator).FreeHeap.IndexSize = 0;
    (param_1->TileAllocator).FreeHeap.Heap = (uint *)0x0;
    (param_1->TileAllocator).FreeHeap.Keys = (ulong64 *)0x0;
    (param_1->TileAllocator).FreeHeap.HeapIndexes = (uint *)0x0;
    FVar3 = (param_1->MipLevelStreamingSize).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    DestructItems<TUniquePtr<UE::SVT::FStreamingInstance,TDefaultDelete<UE::SVT::FStreamingInstance>_>,int>
              ((TUniquePtr<UE::SVT::FStreamingInstance,TDefaultDelete<UE::SVT::FStreamingInstance>_>
                *)(param_1->StreamingInstances).AllocatorInstance.Data,
               (param_1->StreamingInstances).ArrayNum);
    pFVar2 = (param_1->StreamingInstances).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<UE::SVT::FStreamingManager::FFrameInfo,int>
              ((FFrameInfo *)(param_1->PerFrameInfo).AllocatorInstance.Data,
               (param_1->PerFrameInfo).ArrayNum);
    pFVar2 = (param_1->PerFrameInfo).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0x110);
  }
  return;
}

// operator() @ 148810e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TDefaultDelete<UE::Tick::FTaskSyncManager>::operator()
          (TDefaultDelete<UE::Tick::FTaskSyncManager> *this,FTaskSyncManager *param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (FTaskSyncManager *)0x0) {
    if (GEngine != (UEngine *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &GEngine->WorldContextDestroyedEvent,param_1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->ManagerLock);
    *(undefined4 *)&(param_1->RegisteredNameMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->RegisteredNameMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->RegisteredNameMap);
    *(undefined4 *)&(param_1->RegisteredDataMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->RegisteredDataMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::Tick::FTaskSyncManager::FRegisteredSyncPointData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->RegisteredDataMap);
    DestructItems<UE::Tick::FTaskSyncManager::FBatchData,int>
              ((FBatchData *)(param_1->BatchList).AllocatorInstance.Data,
               (param_1->BatchList).ArrayNum);
    pFVar2 = (param_1->BatchList).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0xf8);
  }
  return;
}

