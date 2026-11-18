// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 41

// FChaosVDRemoteSessionsManager @ 1463094f0

/* WARNING: Enum "Type": Some values do not have unique names */

FChaosVDRemoteSessionsManager * __thiscall
FChaosVDRemoteSessionsManager::FChaosVDRemoteSessionsManager(FChaosVDRemoteSessionsManager *this)

{
  (this->LastPingTime).Ticks = 0;
  (this->MessageBusPtr).Object = (IMessageBus *)0x0;
  (this->MessageBusPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ActiveSessionsByInstanceId = 0;
  *(undefined8 *)&(this->ActiveSessionsByInstanceId).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveSessionsByInstanceId).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveSessionsByInstanceId).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveSessionsByInstanceId).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveSessionsByInstanceId).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveSessionsByInstanceId).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveSessionsByInstanceId).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveSessionsByInstanceId).field_0x48 = 0;
  *(undefined8 *)&this->PendingRecordingStatusMessages = 0;
  *(undefined8 *)&(this->PendingRecordingStatusMessages).field_0x8 = 0;
  *(undefined8 *)&(this->PendingRecordingStatusMessages).field_0x20 = 0;
  *(undefined4 *)&(this->PendingRecordingStatusMessages).field_0x28 = 0;
  *(undefined4 *)&(this->PendingRecordingStatusMessages).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRecordingStatusMessages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRecordingStatusMessages).field_0x34 = 0;
  *(undefined8 *)&(this->PendingRecordingStatusMessages).field_0x40 = 0;
  *(undefined4 *)&(this->PendingRecordingStatusMessages).field_0x48 = 0;
  *(undefined8 *)&this->PendingRecordingConnectionDetailsMessages = 0;
  *(undefined8 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x8 = 0;
  *(undefined8 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x20 = 0;
  *(undefined4 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x28 = 0;
  *(undefined4 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x34 = 0;
  *(undefined8 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x40 = 0;
  *(undefined4 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x48 = 0;
  *(undefined8 *)&this->SessionsUpdatedDelegate = 0;
  *(undefined8 *)&(this->SessionsUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SessionsUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SessionsUpdatedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->SessionDiscoveredDelegate = 0;
  *(undefined8 *)&(this->SessionDiscoveredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SessionDiscoveredDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SessionDiscoveredDelegate).field_0x18 = 2;
  *(undefined8 *)&this->SessionExpiredDelegate = 0;
  *(undefined8 *)&(this->SessionExpiredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SessionExpiredDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->SessionExpiredDelegate).field_0x18 = 2;
  *(undefined8 *)&this->RecordingStartedDelegate = 0;
  *(undefined8 *)&(this->RecordingStartedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RecordingStartedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->RecordingStartedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->RecordingStoppedDelegate = 0;
  *(undefined8 *)&(this->RecordingStoppedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RecordingStoppedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->RecordingStoppedDelegate).field_0x18 = 2;
  (this->TickHandle).Object = (FElement *)0x0;
  (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->MessagingInitializedDelegate = 0;
  *(undefined8 *)&(this->MessagingInitializedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MessagingInitializedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->MessagingInitializedDelegate).field_0x18 = 2;
  (this->SupportedMessageTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedMessageTypes).ArrayNum = 0;
  (this->SupportedMessageTypes).ArrayMax = 0;
  this->bInitialized = false;
  RegisterBuiltInMessageTypes(this);
  return this;
}

// ~FChaosVDRemoteSessionsManager @ 14630aea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::~FChaosVDRemoteSessionsManager(FChaosVDRemoteSessionsManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pFVar3 = (this->SupportedMessageTypes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MessagingInitializedDelegate).field_0x8,
             *(int *)&(this->MessagingInitializedDelegate).field_0x10);
  pvVar4 = *(void **)&(this->MessagingInitializedDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MessagingInitializedDelegate);
  pTVar5 = (this->TickHandle).WeakReferenceCount.ReferenceController;
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
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RecordingStoppedDelegate).field_0x8,
             *(int *)&(this->RecordingStoppedDelegate).field_0x10);
  pvVar4 = *(void **)&(this->RecordingStoppedDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RecordingStoppedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RecordingStartedDelegate).field_0x8,
             *(int *)&(this->RecordingStartedDelegate).field_0x10);
  pvVar4 = *(void **)&(this->RecordingStartedDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RecordingStartedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SessionExpiredDelegate).field_0x8,
             *(int *)&(this->SessionExpiredDelegate).field_0x10);
  pvVar4 = *(void **)&(this->SessionExpiredDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SessionExpiredDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SessionDiscoveredDelegate).field_0x8,
             *(int *)&(this->SessionDiscoveredDelegate).field_0x10);
  pvVar4 = *(void **)&(this->SessionDiscoveredDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SessionDiscoveredDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SessionsUpdatedDelegate).field_0x8,
             *(int *)&(this->SessionsUpdatedDelegate).field_0x10);
  pvVar4 = *(void **)&(this->SessionsUpdatedDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SessionsUpdatedDelegate);
  *(undefined4 *)&(this->PendingRecordingConnectionDetailsMessages).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PendingRecordingConnectionDetailsMessages).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDTraceDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDTraceDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDTraceDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingRecordingConnectionDetailsMessages);
  *(undefined4 *)&(this->PendingRecordingStatusMessages).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PendingRecordingStatusMessages).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDRecordingStatusMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDRecordingStatusMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDRecordingStatusMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingRecordingStatusMessages);
  *(undefined4 *)&(this->ActiveSessionsByInstanceId).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActiveSessionsByInstanceId).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveSessionsByInstanceId);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pTVar5 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
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
  return;
}

// CreateEndPoint @ 14630ee30

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMessageEndpoint,1> * __thiscall
FChaosVDRemoteSessionsManager::CreateEndPoint
          (FChaosVDRemoteSessionsManager *this,
          TSharedPtr<FMessageEndpoint,1> *__return_storage_ptr__,TSharedRef<IMessageBus,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IMessageBus *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  FTaskGraphInterface *pFVar9;
  TSharedPtr<FMessageEndpoint,1> *pTVar10;
  TRawPtrProxy<TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager>_> local_res10;
  TRawPtrProxy<TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager>_>
  local_res18;
  TRawPtrProxy<TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager>_>
  local_res20;
  undefined1 local_130 [8];
  ForAnyElementType FStack_128;
  int local_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  undefined1 local_108;
  FName local_104;
  Type local_fc;
  TSharedPtr<IMessageHandler,1> local_f8;
  TSharedPtr<IMessageHandler,1> local_e8;
  TSharedPtr<IMessageHandler,1> local_d8;
  TSharedPtr<IMessageHandler,1> local_c8;
  TSharedPtr<IMessageHandler,1> local_b8;
  TRawPtrProxy<TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager>_>
  local_a8;
  TRawPtrProxy<TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager>_>
  local_a0;
  FMessageEndpointBuilder local_98;
  FDestructionSentinel local_48;
  
  pIVar3 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_120 = 0;
  local_130 = (undefined1  [8])0x0;
  FStack_128.Data = (FScriptContainerElement *)0x0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_108 = 0;
  local_104 = MessageBusEndPointName;
  pFVar9 = FTaskGraphInterface::Get();
  local_fc = (**(code **)((longlong)*pFVar9 + 0x10))(pFVar9,0);
  local_res10.Object = ::operator_new(0x18);
  if (local_res10.Object ==
      (TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager> *)0x0) {
    local_res10.Object =
         (TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager> *)0x0;
  }
  else {
    (local_res10.Object)->Handler = this;
    (local_res10.Object)->_padding_ =
         (longlong)
         &___7__TRawMessageHandler_UFChaosVDSessionPing__VFChaosVDRemoteSessionsManager____6B_;
    (local_res10.Object)->Func = (pmf_b5e6d6fd)HandleSessionPingMessage;
    if (this == (FChaosVDRemoteSessionsManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                         ,0x58,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager>_>
            (&local_f8,&local_res10);
  if ((local_118.Data <= &local_f8) &&
     (&local_f8 <
      (TSharedPtr<IMessageHandler,1> *)(local_118.Data + (longlong)local_110._4_4_ * 0x10))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  iVar8 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_118,(int *)((longlong)&local_110 + 4));
  }
  local_110 = CONCAT44(local_110._4_4_,iVar8 + 1);
  *(IMessageHandler **)&local_118.Data[(longlong)iVar8 * 0x10].field_0x0 = local_f8.Object;
  *(TReferenceControllerBase<1> **)(local_118.Data + (longlong)iVar8 * 0x10 + 8) =
       local_f8.SharedReferenceCount.ReferenceController;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_res18.Object = ::operator_new(0x18);
  if (local_res18.Object ==
      (TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager> *)0x0)
  {
    local_res18.Object =
         (TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager> *)
         0x0;
  }
  else {
    (local_res18.Object)->Handler = this;
    (local_res18.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFChaosVDStartRecordingCommandMessage__VFChaosVDRemoteSessionsManager____6B_
    ;
    (local_res18.Object)->Func = (pmf_7bec5146)HandleRecordingStartCommandMessage;
    if (this == (FChaosVDRemoteSessionsManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                         ,0x58,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager>_>
            (&local_e8,&local_res18);
  if ((local_118.Data <= &local_e8) &&
     (&local_e8 <
      (TSharedPtr<IMessageHandler,1> *)(local_118.Data + (longlong)local_110._4_4_ * 0x10))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  iVar8 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_118,(int *)((longlong)&local_110 + 4));
  }
  local_110 = CONCAT44(local_110._4_4_,iVar8 + 1);
  *(IMessageHandler **)&local_118.Data[(longlong)iVar8 * 0x10].field_0x0 = local_e8.Object;
  *(TReferenceControllerBase<1> **)(local_118.Data + (longlong)iVar8 * 0x10 + 8) =
       local_e8.SharedReferenceCount.ReferenceController;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_res20.Object = ::operator_new(0x18);
  if (local_res20.Object ==
      (TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager> *)0x0)
  {
    local_res20.Object =
         (TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager> *)
         0x0;
  }
  else {
    (local_res20.Object)->Handler = this;
    (local_res20.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFChaosVDStopRecordingCommandMessage__VFChaosVDRemoteSessionsManager____6B_
    ;
    (local_res20.Object)->Func = (pmf_5da2d5da)HandleRecordingStopCommandMessage;
    if (this == (FChaosVDRemoteSessionsManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                         ,0x58,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager>_>
            (&local_d8,&local_res20);
  if ((local_118.Data <= &local_d8) &&
     (&local_d8 <
      (TSharedPtr<IMessageHandler,1> *)(local_118.Data + (longlong)local_110._4_4_ * 0x10))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  iVar8 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_118,(int *)((longlong)&local_110 + 4));
  }
  local_110 = CONCAT44(local_110._4_4_,iVar8 + 1);
  *(IMessageHandler **)&local_118.Data[(longlong)iVar8 * 0x10].field_0x0 = local_d8.Object;
  *(TReferenceControllerBase<1> **)(local_118.Data + (longlong)iVar8 * 0x10 + 8) =
       local_d8.SharedReferenceCount.ReferenceController;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a8.Object = ::operator_new(0x18);
  if (local_a8.Object ==
      (TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager> *)
      0x0) {
    local_a8.Object =
         (TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager>
          *)0x0;
  }
  else {
    (local_a8.Object)->Handler = this;
    (local_a8.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFChaosVDChannelStateChangeCommandMessage__VFChaosVDRemoteSessionsManager____6B_
    ;
    (local_a8.Object)->Func = (pmf_c821f2f7)HandleChangeDataChannelStateCommandMessage;
    if (this == (FChaosVDRemoteSessionsManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                         ,0x58,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager>_>
            (&local_c8,&local_a8);
  if ((local_118.Data <= &local_c8) &&
     (&local_c8 <
      (TSharedPtr<IMessageHandler,1> *)(local_118.Data + (longlong)local_110._4_4_ * 0x10))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  iVar8 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_118,(int *)((longlong)&local_110 + 4));
  }
  local_110 = CONCAT44(local_110._4_4_,iVar8 + 1);
  *(IMessageHandler **)&local_118.Data[(longlong)iVar8 * 0x10].field_0x0 = local_c8.Object;
  *(TReferenceControllerBase<1> **)(local_118.Data + (longlong)iVar8 * 0x10 + 8) =
       local_c8.SharedReferenceCount.ReferenceController;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a0.Object = ::operator_new(0x18);
  if (local_a0.Object ==
      (TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager> *)0x0
     ) {
    local_a0.Object =
         (TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager> *)
         0x0;
  }
  else {
    (local_a0.Object)->Handler = this;
    (local_a0.Object)->_padding_ =
         (longlong)
         &
         ___7__TRawMessageHandler_UFChaosVDFullSessionInfoRequestMessage__VFChaosVDRemoteSessionsManager____6B_
    ;
    (local_a0.Object)->Func = (pmf_b02ec498)HandleFullSessionStateRequestMessage;
    if (this == (FChaosVDRemoteSessionsManager *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                         ,0x58,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager>_>
            (&local_b8,&local_a0);
  if ((local_118.Data <= &local_b8) &&
     (&local_b8 <
      (TSharedPtr<IMessageHandler,1> *)(local_118.Data + (longlong)local_110._4_4_ * 0x10))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FMessageEndpoint,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  iVar8 = (int)local_110;
  if ((int)local_110 == local_110._4_4_) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_118,(int *)((longlong)&local_110 + 4));
  }
  local_110 = CONCAT44(local_110._4_4_,iVar8 + 1);
  *(IMessageHandler **)&local_118.Data[(longlong)iVar8 * 0x10].field_0x0 = local_b8.Object;
  *(TReferenceControllerBase<1> **)(local_118.Data + (longlong)iVar8 * 0x10 + 8) =
       local_b8.SharedReferenceCount.ReferenceController;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_98.Disabled = false;
  local_98.BusPtr.Object = pIVar3;
  local_98.BusPtr.WeakReferenceCount.ReferenceController = pTVar4;
  TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
            (&local_98.OnNotification,
             (TDelegate<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy> *)
             local_130);
  FVar6.Data = local_118.Data;
  iVar8 = (int)local_110;
  local_98.Handlers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Handlers.ArrayNum = (int)local_110;
  if ((int)local_110 == 0) {
    local_98.Handlers.ArrayMax = 0;
    iVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)local_110,0,&local_98.Handlers.AllocatorInstance,(int)local_110,
               &local_98.Handlers.ArrayMax);
    ConstructItems<TSharedPtr<IMessageHandler,1>,TSharedPtr<IMessageHandler,1>,int>
              (local_98.Handlers.AllocatorInstance.Data,(TSharedPtr<IMessageHandler,1> *)FVar6.Data,
               iVar8);
    iVar8 = (int)local_110;
  }
  local_98.InboxEnabled = (bool)local_108;
  local_98.Name = local_104;
  local_98.RecipientThread = local_fc;
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_118.Data,iVar8);
  if ((TSharedPtr<IMessageHandler,1> *)local_118.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_118.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
             (FWriteAccessScope *)&local_48);
  if ((local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
    local_120 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_130);
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
  FMessageEndpointBuilder::Build(&local_98,__return_storage_ptr__);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_98.Handlers.AllocatorInstance.Data,
             local_98.Handlers.ArrayNum);
  if ((TSharedPtr<IMessageHandler,1> *)local_98.Handlers.AllocatorInstance.Data !=
      (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_98.Handlers.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_98.OnNotification);
  if (local_98.BusPtr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_98.BusPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_98.BusPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_98.BusPtr.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// CreatedWrapperSessionInfo @ 14630f620

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FChaosVDSessionInfo,1> * __thiscall
FChaosVDRemoteSessionsManager::CreatedWrapperSessionInfo
          (FChaosVDRemoteSessionsManager *this,
          TSharedPtr<FChaosVDSessionInfo,1> *__return_storage_ptr__,FGuid *param_1,FString *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  TIntrusiveReferenceController<FChaosVDMultiSessionInfo,1> *pTVar7;
  TSharedPtr<FChaosVDSessionInfo,1> *pTVar8;
  FChaosVDSessionInfo *pFVar9;
  
  pTVar7 = ::operator_new(0x1c0);
  if (pTVar7 == (TIntrusiveReferenceController<FChaosVDMultiSessionInfo,1> *)0x0) {
    pFVar9 = (FChaosVDSessionInfo *)&DAT_00000010;
    pTVar7 = (TIntrusiveReferenceController<FChaosVDMultiSessionInfo,1> *)0x0;
  }
  else {
    pTVar7 = SharedPointerInternals::TIntrusiveReferenceController<FChaosVDMultiSessionInfo,1>::
             TIntrusiveReferenceController<FChaosVDMultiSessionInfo,1><>(pTVar7);
    pFVar9 = (FChaosVDSessionInfo *)&pTVar7->ObjectStorage;
    if ((pFVar9 == (FChaosVDSessionInfo *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FChaosVDSessionInfo,1> *)(*pcVar1)();
      return pTVar8;
    }
    if (pTVar7 != (TIntrusiveReferenceController<FChaosVDMultiSessionInfo,1> *)0x0) {
      LOCK();
      *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  uVar2 = param_1->A;
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  if ((pFVar9 == (FChaosVDSessionInfo *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FChaosVDSessionInfo,1> *)(*pcVar1)();
    return pTVar8;
  }
  (pFVar9->InstanceId).A = uVar2;
  (pFVar9->InstanceId).B = uVar3;
  (pFVar9->InstanceId).C = uVar4;
  (pFVar9->InstanceId).D = uVar5;
  if ((pFVar9 == (FChaosVDSessionInfo *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FChaosVDSessionInfo,1> *)(*pcVar1)();
    return pTVar8;
  }
  ::FString::operator=(&pFVar9->SessionName,param_2);
  __return_storage_ptr__->Object = pFVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar7;
  if (pTVar7 != (TIntrusiveReferenceController<FChaosVDMultiSessionInfo,1> *)0x0) {
    LOCK();
    *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar7);
  return __return_storage_ptr__;
}

// DeRegisterSessionInMultiSessionWrapper @ 14630f780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::DeRegisterSessionInMultiSessionWrapper
          (FChaosVDRemoteSessionsManager *this,TSharedRef<FChaosVDSessionInfo,1> *param_1)

{
  TMap<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
  *this_00;
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FChaosVDSessionInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  this_00 = &this->ActiveSessionsByInstanceId;
  uVar7 = CityHash64((char *)&AllRemoteSessionsWrapperGUID,0x10);
  iVar6 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar7,&AllRemoteSessionsWrapperGUID);
  lVar9 = 0;
  lVar8 = lVar9;
  if (((iVar6 == -1) ||
      (lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28, lVar8 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = *(longlong *)(lVar8 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar8 + 0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_1->Object;
  if (*(int *)(lVar1 + 0x168) != *(int *)(lVar1 + 0x194)) {
    uVar7 = CityHash64((char *)&pFVar3->InstanceId,0x10);
    TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                         *)(lVar1 + 0x160),(uint)uVar7,&pFVar3->InstanceId);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar7 = CityHash64((char *)&AllSessionsWrapperGUID,0x10);
  iVar6 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar7,&AllSessionsWrapperGUID);
  lVar8 = lVar9;
  if (((iVar6 == -1) ||
      (lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28, lVar8 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar8 + 0x18);
  lVar8 = *(longlong *)(lVar8 + 0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_1->Object;
  if (*(int *)(lVar8 + 0x168) != *(int *)(lVar8 + 0x194)) {
    uVar7 = CityHash64((char *)&pFVar3->InstanceId,0x10);
    TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                         *)(lVar8 + 0x160),(uint)uVar7,&pFVar3->InstanceId);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar7 = CityHash64((char *)&AllRemoteServersWrapperGUID,0x10);
  iVar6 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar7,&AllRemoteServersWrapperGUID);
  lVar8 = lVar9;
  if (((iVar6 == -1) ||
      (lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28, lVar8 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar8 + 0x18);
  lVar8 = *(longlong *)(lVar8 + 0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_1->Object;
  if (*(int *)(lVar8 + 0x168) != *(int *)(lVar8 + 0x194)) {
    uVar7 = CityHash64((char *)&pFVar3->InstanceId,0x10);
    TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                         *)(lVar8 + 0x160),(uint)uVar7,&pFVar3->InstanceId);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar7 = CityHash64((char *)&AllRemoteClientsWrapperGUID,0x10);
  iVar6 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar7,&AllRemoteClientsWrapperGUID);
  if (((iVar6 == -1) ||
      (lVar9 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28, lVar9 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar9 + 0x18);
  lVar8 = *(longlong *)(lVar9 + 0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_1->Object;
  if (*(int *)(lVar8 + 0x168) != *(int *)(lVar8 + 0x194)) {
    uVar7 = CityHash64((char *)&pFVar3->InstanceId,0x10);
    TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                         *)(lVar8 + 0x160),(uint)uVar7,&pFVar3->InstanceId);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// EnumerateMessageTypes @ 146311410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::EnumerateMessageTypes
          (FChaosVDRemoteSessionsManager *this,
          TFunction<void___cdecl(UScriptStruct_const_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  longlong local_res8;
  
  pFVar6 = (this->SupportedMessageTypes).AllocatorInstance.Data;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SupportedMessageTypes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UScriptStruct_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(longlong *)pFVar6 != 0) {
      local_res8 = *(longlong *)pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar5 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar5 = (longlong *)&param_1->field_0x10;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_res8);
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// GetSessionInfo @ 146313c20

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<FChaosVDSessionInfo,1> * __thiscall
FChaosVDRemoteSessionsManager::GetSessionInfo
          (FChaosVDRemoteSessionsManager *this,
          TWeakPtr<FChaosVDSessionInfo,1> *__return_storage_ptr__,FGuid *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  ulong64 uVar4;
  undefined8 *puVar5;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)&this->ActiveSessionsByInstanceId,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->ActiveSessionsByInstanceId).field_0x0 + (longlong)iVar3 * 0x28;
    puVar5 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 != (undefined8 *)0x0) {
      __return_storage_ptr__->Object = (FChaosVDSessionInfo *)*puVar5;
      pTVar2 = (TReferenceControllerBase<1> *)puVar5[1];
      (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FChaosVDSessionInfo *)0x0;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// HandleChangeDataChannelStateCommandMessage @ 146314780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleChangeDataChannelStateCommandMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDChannelStateChangeCommandMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int iVar1;
  FChaosVDOptionalDataChannel *this_00;
  uint uVar2;
  FChaosVDDataChannelsManager *pFVar3;
  FName *pFVar4;
  int iVar5;
  undefined1 *puVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName local_res10;
  
  pFVar3 = Chaos::VisualDebugger::FChaosVDDataChannelsManager::Get();
  iVar1 = (param_1->NewState).ChannelName.Data.ArrayNum;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  pFVar4 = ::FName::FName(&local_res10,iVar5,
                          (wchar_t *)(param_1->NewState).ChannelName.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar7 = *pFVar4;
  uVar2 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
  if (*(int *)&(pFVar3->AvailableChannels).field_0x8 !=
      *(int *)&(pFVar3->AvailableChannels).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar3->AvailableChannels).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar3->AvailableChannels).field_0x38;
    }
    uVar2 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(pFVar3->AvailableChannels).field_0x48 - 1U &
                               FVar7.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&pFVar3->AvailableChannels);
        if (*pFVar4 == FVar7) {
          FVar7 = (FName)(pFVar4 + 1);
          if (pFVar4 == (FName *)0x0) {
            FVar7 = FVar9;
          }
          FVar9 = FVar8;
          if (FVar7 != (FName)0x0) {
            FVar9 = *(FName *)((longlong)FVar7 + 8);
            this_00 = *(FChaosVDOptionalDataChannel **)FVar7;
            if (FVar9 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)FVar9 + 8) = *(int *)((longlong)FVar9 + 8) + 1;
              UNLOCK();
            }
            if (this_00 != (FChaosVDOptionalDataChannel *)0x0) {
              Chaos::VisualDebugger::FChaosVDOptionalDataChannel::SetChannelEnabled
                        (this_00,(param_1->NewState).bIsEnabled);
            }
          }
          break;
        }
        uVar2 = pFVar4[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar9);
  return;
}

// HandleChangeDataChannelStateResponseMessage @ 146314880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleChangeDataChannelStateResponseMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDChannelStateChangeResponseMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
  *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  ulong64 uVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)&this->ActiveSessionsByInstanceId,(uint)uVar5,&param_1->InstanceID);
  if (iVar3 != -1) {
    lVar7 = *(longlong *)&(this->ActiveSessionsByInstanceId).field_0x0 + (longlong)iVar3 * 0x28;
    pFVar6 = (FString *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      pFVar6 = (FString *)0x0;
    }
    if ((pFVar6 != (FString *)0x0) &&
       (pFVar2 = (pFVar6->Data).AllocatorInstance.Data, pFVar2 != (FScriptContainerElement *)0x0)) {
      iVar1 = (param_1->NewState).ChannelName.Data.ArrayNum;
      this_00 = (TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
                 *)(pFVar2 + 0xb0);
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar8 = L"";
        iVar3 = 0;
      }
      else {
        pwVar8 = (wchar_t *)(param_1->NewState).ChannelName.Data.AllocatorInstance.Data;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar8);
      iVar3 = TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(this_00,uVar4,&(param_1->NewState).ChannelName);
      if (iVar3 != -1) {
        lVar7 = (longlong)iVar3 * 0x30 + *(longlong *)&this_00->Elements;
        pFVar6 = (FString *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          pFVar6 = (FString *)0x0;
        }
        if (pFVar6 != (FString *)0x0) {
          ::FString::operator=(pFVar6,&(param_1->NewState).ChannelName);
          *(bool *)&pFVar6[1].Data.AllocatorInstance.Data = (param_1->NewState).bIsEnabled;
          *(bool *)((longlong)&pFVar6[1].Data.AllocatorInstance.Data + 1) =
               (param_1->NewState).bCanChangeChannelState;
          *(bool *)((longlong)&pFVar6[1].Data.AllocatorInstance.Data + 2) =
               (param_1->NewState).bWaitingUpdatedState;
        }
      }
    }
  }
  return;
}

// HandleConnectionDetailsUpdateMessage @ 146315400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleConnectionDetailsUpdateMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDTraceConnectionDetailsMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  FChaosVDTraceDetails *this_00;
  longlong *plVar6;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)&this->ActiveSessionsByInstanceId,(uint)uVar5,&param_1->InstanceId);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&this->ActiveSessionsByInstanceId + (longlong)iVar4 * 0x28;
    plVar6 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*plVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SessionInfoPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                           ,0x22d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*plVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this_00 = (FChaosVDTraceDetails *)(*plVar6 + 0x108);
      goto LAB_1463154d9;
    }
  }
  uVar5 = CityHash64((char *)param_1,0x10);
  this_00 = TMapBase<FGuid,FChaosVDTraceDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,FChaosVDTraceDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>_>
                        *)&this->PendingRecordingConnectionDetailsMessages,(uint)uVar5,
                       &param_1->InstanceId);
LAB_1463154d9:
  FChaosVDTraceDetails::operator=(this_00,&param_1->TraceDetails);
  return;
}

// HandleFullSessionStateRequestMessage @ 146315ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleFullSessionStateRequestMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDFullSessionInfoRequestMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FGuid *pFVar4;
  FChaosVDRuntimeModule *pFVar5;
  FChaosVDDataChannelsManager *this_01;
  FMessageAddress *pFVar6;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar7;
  UPackage *pUVar8;
  longlong lVar9;
  undefined8 *local_res8;
  FDateTime local_res20;
  FTimespan local_68;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_60;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_50;
  TSharedPtr<IMessageAttachment,1> local_40;
  FGuid local_30;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283477>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x26b,"MessageEndpoint");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_res8 = FMemory::Malloc(0x28,0);
    *(undefined4 *)((longlong)local_res8 + 0x21) = 0;
    *(undefined2 *)((longlong)local_res8 + 0x25) = 0;
    *(undefined1 *)((longlong)local_res8 + 0x27) = 0;
    *local_res8 = 0;
    local_res8[1] = 0;
    local_res8[2] = 0;
    local_res8[3] = 0;
    *(undefined1 *)(local_res8 + 4) = 0;
    if (local_res8 != (undefined8 *)0x0) {
      pFVar4 = FApp::GetInstanceId(&local_30);
      uVar2 = *(undefined8 *)&pFVar4->C;
      *local_res8 = *(undefined8 *)pFVar4;
      local_res8[1] = uVar2;
      pFVar5 = FChaosVDRuntimeModule::Get();
      *(bool *)(local_res8 + 4) = pFVar5->bIsRecording;
      this_01 = Chaos::VisualDebugger::FChaosVDDataChannelsManager::Get();
      Chaos::VisualDebugger::FChaosVDDataChannelsManager::
      EnumerateChannels<_FChaosVDRemoteSessionsManager::HandleFullSessionStateRequestMessage_::__l8::<lambda_1>_>
                (this_01,(<lambda_1>)&local_res8);
      if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (this->MessageEndpoint).Object;
      local_res20.Ticks = 0x2bca2875f4373fff;
      local_68.Ticks = 0;
      local_50.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Array.ArrayNum = 0;
      local_50.Array.ArrayMax = 0;
      pFVar6 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
      pTVar7 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_50,pFVar6);
      local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.ArrayNum = (pTVar7->Array).ArrayNum;
      lVar9 = (longlong)local_60.ArrayNum;
      _Src = (pTVar7->Array).AllocatorInstance.Data;
      if (local_60.ArrayNum == 0) {
        local_60.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_60.ArrayNum,0,&local_60.AllocatorInstance,local_60.ArrayNum,
                   &local_60.ArrayMax);
        memcpy(local_60.AllocatorInstance.Data,_Src,lVar9 << 4);
      }
      local_40.Object = (IMessageAttachment *)0x0;
      local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
        Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoResponseMessage,
                             (UObject *)pUVar8,L"ChaosVDFullSessionInfoResponseMessage");
      }
      FMessageEndpoint::Send
                (this_00,local_res8,
                 Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.
                 OuterSingleton,Reliable,&local_40,&local_60,&local_68,&local_res20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
      if (local_50.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Array.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// HandleFullSessionStateResponseMessage @ 146315f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleFullSessionStateResponseMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDFullSessionInfoResponseMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  undefined1 local_res8 [16];
  FScriptContainerElement *local_28;
  FScriptContainerElement *local_20;
  
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar5 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)&this->ActiveSessionsByInstanceId,(uint)uVar6,&param_1->InstanceId);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&(this->ActiveSessionsByInstanceId).field_0x0 + (longlong)iVar5 * 0x28;
    plVar8 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
      *(bool *)(*plVar8 + 0x58) = param_1->bIsRecording;
      pFVar7 = (param_1->DataChannelsStates).AllocatorInstance.Data;
      iVar5 = (param_1->DataChannelsStates).ArrayNum;
      pFVar2 = pFVar7 + (longlong)iVar5 * 0x18;
      while( true ) {
        if ((param_1->DataChannelsStates).ArrayNum != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FChaosVDDataChannelState_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar7 == pFVar2) break;
        if ((*plVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_28 = pFVar7;
        local_20 = pFVar7;
        TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FChaosVDDataChannelState_const_&>_>
                  ((TSet<TTuple<FString,FChaosVDDataChannelState>,TDefaultMapHashableKeyFuncs<FString,FChaosVDDataChannelState,0>,FDefaultSetAllocator>
                    *)(*plVar8 + 0xb0),
                   (TPairInitializer<FString_const_&,FChaosVDDataChannelState_const_&> *)
                   (local_res8 + 8),(bool *)&local_28);
        pFVar7 = pFVar7 + 0x18;
      }
    }
  }
  return;
}

// HandleRecordingStartCommandMessage @ 146316b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleRecordingStartCommandMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDStartRecordingCommandMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FChaosVDRuntimeModule *this_00;
  undefined4 uStack_1c;
  TArrayView<FString_const_,int> local_18;
  
  pFVar2 = (param_1->DataChannelsEnabledOverrideList).AllocatorInstance.Data;
  iVar1 = (param_1->DataChannelsEnabledOverrideList).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = (FString *)pFVar2;
  FChaosVisualDebuggerTrace::OverrideDefaultEnabledDataChannels(&local_18);
  this_00 = FChaosVDRuntimeModule::Get();
  FChaosVDRuntimeModule::StartRecording(this_00,param_1);
  return;
}

// HandleRecordingStatusUpdateMessage @ 146316bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleRecordingStatusUpdateMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDRecordingStatusMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  longlong lVar1;
  FChaosVDSessionInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  ulong64 uVar11;
  TMulticastDelegate<void___cdecl(TWeakPtr<FChaosVDSessionInfo,1>),FDefaultDelegateUserPolicy>
  *this_00;
  TWeakPtr<FChaosVDSessionInfo,1> *pTVar12;
  longlong *plVar13;
  FChaosVDRecordingStatusMessage *pFVar14;
  TWeakPtr<FChaosVDSessionInfo,1> local_28;
  TWeakPtr<FChaosVDSessionInfo,1> local_18;
  
  uVar11 = CityHash64((char *)param_1,0x10);
  iVar10 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FGuid>
                     ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                       *)&this->ActiveSessionsByInstanceId,(uint)uVar11,&param_1->InstanceId);
  if (iVar10 != -1) {
    lVar1 = *(longlong *)&this->ActiveSessionsByInstanceId + (longlong)iVar10 * 0x28;
    plVar13 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar13 = (longlong *)0x0;
    }
    if (plVar13 != (longlong *)0x0) {
      if (*plVar13 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SessionInfoPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                           ,0x212,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*plVar13 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = (FChaosVDSessionInfo *)*plVar13;
      if ((pFVar2->LastKnownRecordingState).bIsRecording != param_1->bIsRecording) {
        pTVar3 = (TReferenceControllerBase<1> *)plVar13[1];
        if (param_1->bIsRecording == false) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
            UNLOCK();
          }
          this_00 = &this->RecordingStoppedDelegate;
          pTVar12 = &local_18;
          local_18.Object = pFVar2;
          local_18.WeakReferenceCount.ReferenceController = pTVar3;
        }
        else {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
            UNLOCK();
          }
          this_00 = &this->RecordingStartedDelegate;
          pTVar12 = &local_28;
          local_28.Object = pFVar2;
          local_28.WeakReferenceCount.ReferenceController = pTVar3;
        }
        TMulticastDelegate<void___cdecl(TWeakPtr<FChaosVDSessionInfo,1>),FDefaultDelegateUserPolicy>
        ::Broadcast(this_00,pTVar12);
      }
      if (*plVar13 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar1 = *plVar13;
      uVar6 = (param_1->InstanceId).B;
      uVar5 = *(undefined8 *)&(param_1->InstanceId).C;
      pFVar14 = (FChaosVDRecordingStatusMessage *)(lVar1 + 0x48);
      (pFVar14->InstanceId).A = (param_1->InstanceId).A;
      (pFVar14->InstanceId).B = uVar6;
      *(undefined8 *)(lVar1 + 0x50) = uVar5;
      *(bool *)(lVar1 + 0x58) = param_1->bIsRecording;
      *(float *)(lVar1 + 0x5c) = param_1->ElapsedTime;
      goto LAB_146316d79;
    }
  }
  uVar11 = CityHash64((char *)param_1,0x10);
  pFVar14 = TMapBase<FGuid,FChaosVDRecordingStatusMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,FChaosVDRecordingStatusMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>_>
                        *)&this->PendingRecordingStatusMessages,(uint)uVar11,&param_1->InstanceId);
  uVar6 = (param_1->InstanceId).B;
  uVar7 = (param_1->InstanceId).C;
  uVar8 = (param_1->InstanceId).D;
  (pFVar14->InstanceId).A = (param_1->InstanceId).A;
  (pFVar14->InstanceId).B = uVar6;
  (pFVar14->InstanceId).C = uVar7;
  (pFVar14->InstanceId).D = uVar8;
  pFVar14->bIsRecording = param_1->bIsRecording;
  pFVar14->ElapsedTime = param_1->ElapsedTime;
LAB_146316d79:
  FChaosVDTraceDetails::operator=(&pFVar14->TraceDetails,&param_1->TraceDetails);
  return;
}

// HandleRecordingStopCommandMessage @ 146316da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleRecordingStopCommandMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDStopRecordingCommandMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FChaosVDRuntimeModule *this_00;
  
  this_00 = FChaosVDRuntimeModule::Get();
  FChaosVDRuntimeModule::StopRecording(this_00);
  return;
}

// HandleSessionPingMessage @ 146317090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleSessionPingMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDSessionPing *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FMessageEndpoint *this_01;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  EBuildTargetType EVar10;
  int iVar11;
  DWORD DVar12;
  uint *puVar13;
  FGuid *pFVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  UPackage *pUVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  undefined1 auStackY_158 [32];
  ForAnyElementType FStack_118;
  int iStack_110;
  int iStack_10c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> TStack_108;
  FString FStack_f8;
  FDateTime FStack_e8;
  FString FStack_e0;
  FTimespan FStack_d0;
  FString FStack_c8;
  FGuid FStack_b8;
  FString FStack_a8;
  FStringFormatArg FStack_98;
  FStringFormatArg FStack_78;
  FStringFormatArg FStack_58;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FStack_e8.Ticks = FStack_e8.Ticks & 0xffffffff00000000;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283664>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x1b0,"MessageEndpoint");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar13 = FMemory::Malloc(0x38,0);
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    this_00 = (FString *)(puVar13 + 8);
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x37) = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    *(undefined1 *)(puVar13 + 0xc) = 0;
    if (puVar13 != (uint *)0x0) {
      pFVar14 = FApp::GetInstanceId(&FStack_b8);
      uVar6 = pFVar14->B;
      uVar7 = pFVar14->C;
      uVar8 = pFVar14->D;
      puVar13[0] = pFVar14->A;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      *(FGuid *)(puVar13 + 4) = FApp::SessionId;
      EVar10 = FApp::GetBuildTargetType();
      *(EBuildTargetType *)(puVar13 + 0xc) = EVar10;
      FVar18 = FApp::SessionName.Data.AllocatorInstance;
      if ((((param_1->ControllerInstanceId).C == puVar13[2] &&
           (param_1->ControllerInstanceId).D == puVar13[3]) &&
          (param_1->ControllerInstanceId).B == puVar13[1]) &&
          (param_1->ControllerInstanceId).A == *puVar13) {
        ::FString::operator=(this_00,&LocalEditorSessionName);
      }
      else {
        lVar19 = (longlong)FApp::SessionName.Data.ArrayNum;
        FStack_118.Data = (FScriptContainerElement *)0x0;
        iStack_110 = FApp::SessionName.Data.ArrayNum;
        if (FApp::SessionName.Data.ArrayNum == 0) {
          iStack_10c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,FApp::SessionName.Data.ArrayNum,0,&FStack_118,
                     FApp::SessionName.Data.ArrayNum,&iStack_10c);
          memcpy(FStack_118.Data,FVar18.Data,lVar19 * 2);
        }
        FVar18.Data = (FScriptContainerElement *)L"";
        if (iStack_110 != 0) {
          FVar18.Data = FStack_118.Data;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"None");
        FVar18.Data = FStack_118.Data;
        if ((iVar11 == 0) || (lVar19 = (longlong)iStack_110, iStack_110 < 2)) {
          FStringFormatArg::FStringFormatArg(&FStack_98,GInternalProjectName);
          EVar10 = FApp::GetBuildTargetType();
          pwVar15 = ::LexToString(EVar10);
          pFVar16 = ::FString::FString(&FStack_a8,pwVar15);
          FStringFormatArg::FStringFormatArg(&FStack_78,pFVar16);
          DVar12 = FWindowsPlatformProcess::GetCurrentProcessId();
          FStack_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_e0.Data.ArrayNum = 0;
          FStack_e0.Data.ArrayMax = 0;
          ::FString::AppendInt(&FStack_e0,DVar12);
          FStringFormatArg::FStringFormatArg(&FStack_58,&FStack_e0);
          TStack_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_108.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&TStack_108.AllocatorInstance,3,&TStack_108.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (TStack_108.AllocatorInstance.Data,&FStack_98,3);
          ::FString::FormatImpl(&FStack_c8,L"{0} {1} {2}",&TStack_108);
          pFVar16 = &FStack_c8;
          bVar5 = false;
          bVar4 = true;
          bVar3 = true;
          bVar9 = true;
        }
        else {
          FStack_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_f8.Data.ArrayNum = iStack_110;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iStack_110,0,(ForAnyElementType *)&FStack_f8,iStack_110,
                     &FStack_f8.Data.ArrayMax);
          memcpy(FStack_f8.Data.AllocatorInstance.Data,FVar18.Data,lVar19 * 2);
          pFVar16 = &FStack_f8;
          bVar5 = true;
          bVar4 = false;
          bVar3 = false;
          bVar9 = false;
        }
        if (this_00 != pFVar16) {
          pFVar1 = (this_00->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (this_00->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          puVar13[10] = (pFVar16->Data).ArrayNum;
          puVar13[0xb] = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
        }
        if ((bVar9) && (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
        }
        if ((bVar3) &&
           (DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)TStack_108.AllocatorInstance.Data,TStack_108.ArrayNum),
           (FStringFormatArg *)TStack_108.AllocatorInstance.Data != (FStringFormatArg *)0x0)) {
          FMemory::Free(TStack_108.AllocatorInstance.Data);
        }
        if (bVar4) {
          if (FStack_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_58.StringValue.Data.AllocatorInstance.Data);
          }
          if (FStack_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_78.StringValue.Data.AllocatorInstance.Data);
          }
          if (FStack_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_98.StringValue.Data.AllocatorInstance.Data);
          }
        }
        if ((bVar5) && (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
        }
        if (FStack_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_118.Data);
        }
      }
      if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = (this->MessageEndpoint).Object;
      FStack_e8.Ticks = 0x2bca2875f4373fff;
      FStack_d0.Ticks = 0;
      if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar17 = Z_Construct_UPackage__Script_ChaosSolverEngine();
        Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPong,(UObject *)pUVar17,
                             L"ChaosVDSessionPong");
      }
      FMessageEndpoint::Publish
                (this_01,puVar13,
                 Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton,Network,
                 &FStack_d0,&FStack_e8);
    }
  }
  return;
}

// HandleSessionPongMessage @ 1463170a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::HandleSessionPongMessage
          (FChaosVDRemoteSessionsManager *this,FChaosVDSessionPong *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  EBuildTargetType EVar1;
  FChaosVDSessionInfo *pFVar2;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  long64 lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  UScriptStruct *pUVar12;
  bool bVar13;
  int iVar14;
  ulong64 uVar15;
  TSharedRef<FChaosVDSessionInfo,1> *pTVar16;
  undefined8 *puVar17;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar18;
  UPackage *pUVar19;
  void *pvVar20;
  FDateTime FVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  TSharedPtr<FChaosVDSessionInfo,1> *pTVar24;
  undefined1 auStackY_258 [32];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_218;
  TSharedPtr<FChaosVDSessionInfo,1> local_208;
  TSharedRef<FChaosVDSessionInfo,1> local_1f8;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_1e8;
  FDateTime local_1d8;
  FTimespan local_1d0;
  TSharedRef<FChaosVDSessionInfo,1> local_1c8;
  TSharedPtr<IMessageAttachment,1> local_1b8;
  TSharedRef<FChaosVDSessionInfo,1> local_1a0;
  FGuid local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar15 = CityHash64((char *)param_1,0x10);
  iVar14 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FGuid>
                     ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                       *)&this->ActiveSessionsByInstanceId,(uint)uVar15,&param_1->InstanceId);
  if ((iVar14 == -1) ||
     (lVar23 = *(longlong *)&this->ActiveSessionsByInstanceId + (longlong)iVar14 * 0x28, lVar23 == 0
     )) {
    pTVar24 = TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
              ::EmplaceByHash<FGuid_const_&>
                        ((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
                          *)&this->ActiveSessionsByInstanceId,(uint)uVar15,&param_1->InstanceId);
  }
  else {
    pTVar24 = (TSharedPtr<FChaosVDSessionInfo,1> *)(lVar23 + 0x10);
  }
  if (pTVar24->Object == (FChaosVDSessionInfo *)0x0) {
    pTVar16 = MakeShared<FChaosVDSessionInfo,1>(&local_1a0);
    local_208.SharedReferenceCount.ReferenceController =
         (pTVar16->SharedReferenceCount).ReferenceController;
    local_208.Object = pTVar16->Object;
    if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar24 != &local_208) {
      pTVar24->Object = local_208.Object;
      local_208.Object = (FChaosVDSessionInfo *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar24->SharedReferenceCount,&local_208.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
    puVar17 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
    uVar6 = *puVar17;
    uVar7 = puVar17[1];
    if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = pTVar24->Object;
    (pFVar2->Address).UniqueId.A = (int)uVar6;
    (pFVar2->Address).UniqueId.B = (int)((ulonglong)uVar6 >> 0x20);
    (pFVar2->Address).UniqueId.C = (int)uVar7;
    (pFVar2->Address).UniqueId.D = (int)((ulonglong)uVar7 >> 0x20);
    uVar8 = (param_1->InstanceId).A;
    uVar9 = (param_1->InstanceId).B;
    uVar10 = (param_1->InstanceId).C;
    uVar11 = (param_1->InstanceId).D;
    if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = pTVar24->Object;
    (pFVar2->InstanceId).A = uVar8;
    (pFVar2->InstanceId).B = uVar9;
    (pFVar2->InstanceId).C = uVar10;
    (pFVar2->InstanceId).D = uVar11;
    if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::FString::operator=(&pTVar24->Object->SessionName,&param_1->SessionName);
    EVar1 = param_1->BuildTargetType;
    if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar24->Object->BuildTargetType = EVar1;
    if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1f8.SharedReferenceCount.ReferenceController =
         (pTVar24->SharedReferenceCount).ReferenceController;
    local_1f8.Object = pTVar24->Object;
    if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_1f8.Object == (FChaosVDSessionInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    RegisterSessionInMultiSessionWrapper(this,&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
    if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = pTVar24->Object;
    local_188.A = (pFVar2->InstanceId).A;
    local_188.B = (pFVar2->InstanceId).B;
    local_188.C = (pFVar2->InstanceId).C;
    local_188.D = (pFVar2->InstanceId).D;
    TMulticastDelegate<void___cdecl(FGuid),FDefaultDelegateUserPolicy>::Broadcast
              (&this->SessionDiscoveredDelegate,&local_188);
    if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (this->MessageEndpoint).Object;
    if (this_00 == (FMessageEndpoint *)0x0) {
      if ((byte)LogChaosVDRemoteSession._0_1_ < 2) goto LAB_14631751d;
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"FChaosVDRemoteSessionsManager::SendFullSessionStateRequestCommand",0x41
                 ,Yes);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRemoteSession);
      FVar22.Data = (FScriptContainerElement *)local_178._padding_;
    }
    else {
      local_1d0.Ticks = 0;
      local_1d8.Ticks = 0x2bca2875f4373fff;
      local_1e8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Array.ArrayNum = 0;
      local_1e8.Array.ArrayMax = 0;
      pTVar18 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                          (&local_1e8,&pTVar24->Object->Address);
      local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.ArrayNum = (pTVar18->Array).ArrayNum;
      lVar23 = (longlong)local_218.ArrayNum;
      _Src = (pTVar18->Array).AllocatorInstance.Data;
      if (local_218.ArrayNum == 0) {
        local_218.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_218.ArrayNum,0,&local_218.AllocatorInstance,local_218.ArrayNum,
                   &local_218.ArrayMax);
        memcpy(local_218.AllocatorInstance.Data,_Src,lVar23 << 4);
      }
      local_1b8.Object = (IMessageAttachment *)0x0;
      local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar19 = Z_Construct_UPackage__Script_ChaosSolverEngine();
        Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoRequestMessage,
                             (UObject *)pUVar19,L"ChaosVDFullSessionInfoRequestMessage");
      }
      pUVar12 = Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.
                OuterSingleton;
      pvVar20 = FMemory::Malloc(1,0);
      FMessageEndpoint::Send
                (this_00,pvVar20,pUVar12,Reliable,&local_1b8,&local_218,&local_1d0,&local_1d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      FVar22.Data = local_1e8.Array.AllocatorInstance.Data;
      if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.AllocatorInstance.Data);
        FVar22.Data = local_1e8.Array.AllocatorInstance.Data;
      }
    }
    if (FVar22.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar22.Data);
    }
  }
LAB_14631751d:
  FVar21 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
  lVar3 = *FVar21.Ticks;
  if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (pTVar24->Object->LastPingTime).Ticks = lVar3;
  if ((pTVar24->Object == (FChaosVDSessionInfo *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar4 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_1c8.Object = pTVar24->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c8.SharedReferenceCount.ReferenceController = pTVar4;
  if ((local_1c8.Object == (FChaosVDSessionInfo *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ProcessPendingMessagesForSession(this,param_1,&local_1c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->SessionsUpdatedDelegate);
  return;
}

// Initialize @ 1463181a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::Initialize
          (FChaosVDRemoteSessionsManager *this,TSharedPtr<IMessageBus,1> *param_1)

{
  undefined1 local_res10 [24];
  
  if (param_1->Object != (IMessageBus *)0x0) {
    `FChaosVDRemoteSessionsManager::Initialize'::__l2::<lambda_1>::operator()(local_res10);
  }
  Initialize(this);
  return;
}

// Initialize @ 1463181d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosVDRemoteSessionsManager::Initialize(FChaosVDRemoteSessionsManager *this)

{
  FName FVar1;
  FMessageEndpoint *pFVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  TSharedPtr<IMessageBus,1> *pTVar5;
  TSharedPtr<FChaosVDSessionInfo,1> *pTVar6;
  FName local_res8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pFVar3 = ::FName::FName(&local_res8,"Messaging");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pTVar5 = (TSharedPtr<IMessageBus,1> *)(**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,local_28);
  InitializeMessagingSystem(this,pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  local_28._0_4_ = AllRemoteSessionsWrapperGUID.A;
  local_28._4_4_ = AllRemoteSessionsWrapperGUID.B;
  local_28._8_4_ = AllRemoteSessionsWrapperGUID.C;
  local_28._12_4_ = AllRemoteSessionsWrapperGUID.D;
  pTVar6 = CreatedWrapperSessionInfo
                     (this,(TSharedPtr<FChaosVDSessionInfo,1> *)local_18,(FGuid *)local_28,
                      &AllRemoteSessionsTargetName);
  TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
  ::Emplace<FGuid_const_&,TSharedPtr<FChaosVDSessionInfo,1>_>
            ((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
              *)&this->ActiveSessionsByInstanceId,&AllRemoteSessionsWrapperGUID,pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  local_18._0_4_ = AllRemoteServersWrapperGUID.A;
  local_18._4_4_ = AllRemoteServersWrapperGUID.B;
  local_18._8_4_ = AllRemoteServersWrapperGUID.C;
  local_18._12_4_ = AllRemoteServersWrapperGUID.D;
  pTVar6 = CreatedWrapperSessionInfo
                     (this,(TSharedPtr<FChaosVDSessionInfo,1> *)local_28,(FGuid *)local_18,
                      &AllRemoteServersTargetName);
  TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
  ::Emplace<FGuid_const_&,TSharedPtr<FChaosVDSessionInfo,1>_>
            ((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
              *)&this->ActiveSessionsByInstanceId,&AllRemoteServersWrapperGUID,pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  local_18._0_4_ = AllRemoteClientsWrapperGUID.A;
  local_18._4_4_ = AllRemoteClientsWrapperGUID.B;
  local_18._8_4_ = AllRemoteClientsWrapperGUID.C;
  local_18._12_4_ = AllRemoteClientsWrapperGUID.D;
  pTVar6 = CreatedWrapperSessionInfo
                     (this,(TSharedPtr<FChaosVDSessionInfo,1> *)local_28,(FGuid *)local_18,
                      &AllRemoteClientsTargetName);
  TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
  ::Emplace<FGuid_const_&,TSharedPtr<FChaosVDSessionInfo,1>_>
            ((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
              *)&this->ActiveSessionsByInstanceId,&AllRemoteClientsWrapperGUID,pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  local_18._0_4_ = AllSessionsWrapperGUID.A;
  local_18._4_4_ = AllSessionsWrapperGUID.B;
  local_18._8_4_ = AllSessionsWrapperGUID.C;
  local_18._12_4_ = AllSessionsWrapperGUID.D;
  pTVar6 = CreatedWrapperSessionInfo
                     (this,(TSharedPtr<FChaosVDSessionInfo,1> *)local_28,(FGuid *)local_18,
                      &AllSessionsTargetName);
  TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
  ::Emplace<FGuid_const_&,TSharedPtr<FChaosVDSessionInfo,1>_>
            ((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
              *)&this->ActiveSessionsByInstanceId,&AllSessionsWrapperGUID,pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  local_18._0_4_ = CustomSessionsWrapperGUID.A;
  local_18._4_4_ = CustomSessionsWrapperGUID.B;
  local_18._8_4_ = CustomSessionsWrapperGUID.C;
  local_18._12_4_ = CustomSessionsWrapperGUID.D;
  pTVar6 = CreatedWrapperSessionInfo
                     (this,(TSharedPtr<FChaosVDSessionInfo,1> *)local_28,(FGuid *)local_18,
                      &CustomSessionsTargetName);
  TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
  ::Emplace<FGuid_const_&,TSharedPtr<FChaosVDSessionInfo,1>_>
            ((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
              *)&this->ActiveSessionsByInstanceId,&CustomSessionsWrapperGUID,pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  pFVar2 = (this->MessageEndpoint).Object;
  if (pFVar2 != (FMessageEndpoint *)0x0) {
    pFVar2->Enabled = true;
  }
  this->bInitialized = true;
  return;
}

// InitializeMessagingSystem @ 1463183a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::InitializeMessagingSystem
          (FChaosVDRemoteSessionsManager *this,TSharedPtr<IMessageBus,1> *param_1)

{
  TSharedPtr<FMessageEndpoint,1> *this_00;
  atomic<int> aVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FMessageEndpoint,1> *pTVar6;
  UPackage *pUVar7;
  FTopLevelAssetPath *pFVar8;
  UScriptStruct *this_01;
  FMessageEndpoint *pFVar9;
  atomic<int> *paVar10;
  atomic<int> *paVar11;
  TRange<EMessageScope> local_res10 [2];
  TRange<EMessageScope> local_res18 [2];
  TRange<EMessageScope> local_res20 [2];
  TRange<EMessageScope> local_c8;
  TRange<EMessageScope> local_c4;
  TSharedRef<IMessageBus,1> local_c0;
  TSharedPtr<FMessageEndpoint,1> local_b0;
  TSharedPtr<IMessageBus,1> local_a0;
  TSharedPtr<FMessageEndpoint,1> local_90;
  FTopLevelAssetPath local_80;
  FTopLevelAssetPath local_70;
  FTopLevelAssetPath local_60;
  FTopLevelAssetPath local_50;
  FTopLevelAssetPath local_40;
  
  if (param_1->Object == (IMessageBus *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283903>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0xc1,"InMessageBus");
    if (!bVar5) {
      return;
    }
code_r0x000146318529:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->MessageBusPtr).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (this->MessageBusPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar10 = &pTVar3->WeakReferenceCount;
      aVar1 = *paVar10;
      *paVar10 = (atomic<int>)((int)*paVar10 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    (this->MessageBusPtr).WeakReferenceCount.ReferenceController = pTVar2;
  }
  if (param_1->Object == (IMessageBus *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_c0.Object = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c0.SharedReferenceCount.ReferenceController = pTVar2;
  if (local_c0.Object == (IMessageBus *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = CreateEndPoint(this,&local_90,&local_c0);
  this_00 = &this->MessageEndpoint;
  if (this_00 != pTVar6) {
    this_00->Object = pTVar6->Object;
    pTVar6->Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&pTVar6->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (this_00->Object == (FMessageEndpoint *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283895>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0xc9,"MessageEndpoint");
    if (bVar5) goto code_r0x000146318529;
  }
  else {
    pFVar9 = this_00->Object;
    local_res10[0].LowerBound.Type.Value = '\x01';
    local_res10[0].LowerBound.Value = Thread;
    local_res10[0].UpperBound.Type.Value = '\x02';
    local_res10[0].UpperBound.Value = Thread;
    if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar7 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPing,(UObject *)pUVar7,
                           L"ChaosVDSessionPing");
    }
    pFVar8 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton,
                        &local_80);
    FMessageEndpoint::Subscribe(pFVar9,pFVar8,local_res10);
    if (this_00->Object == (FMessageEndpoint *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = this_00->Object;
    local_res18[0].LowerBound.Type.Value = '\x01';
    local_res18[0].LowerBound.Value = Thread;
    local_res18[0].UpperBound.Type.Value = '\x02';
    local_res18[0].UpperBound.Value = Thread;
    this_01 = FChaosVDStartRecordingCommandMessage::StaticStruct();
    pFVar8 = UStruct::GetStructPathName((UStruct *)this_01,&local_70);
    FMessageEndpoint::Subscribe(pFVar9,pFVar8,local_res18);
    if (this_00->Object == (FMessageEndpoint *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = this_00->Object;
    local_res20[0].LowerBound.Type.Value = '\x01';
    local_res20[0].LowerBound.Value = Thread;
    local_res20[0].UpperBound.Type.Value = '\x02';
    local_res20[0].UpperBound.Value = Thread;
    if (Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDStopRecordingCommandMessage,
                           (UObject *)pUVar7,L"ChaosVDStopRecordingCommandMessage");
    }
    pFVar8 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.
                        OuterSingleton,&local_60);
    FMessageEndpoint::Subscribe(pFVar9,pFVar8,local_res20);
    if (this_00->Object == (FMessageEndpoint *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = this_00->Object;
    local_c8.LowerBound.Type.Value = '\x01';
    local_c8.LowerBound.Value = Thread;
    local_c8.UpperBound.Type.Value = '\x02';
    local_c8.UpperBound.Value = Thread;
    if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeCommandMessage,
                           (UObject *)pUVar7,L"ChaosVDChannelStateChangeCommandMessage");
    }
    pFVar8 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.
                        OuterSingleton,&local_50);
    FMessageEndpoint::Subscribe(pFVar9,pFVar8,&local_c8);
    if (this_00->Object == (FMessageEndpoint *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = this_00->Object;
    local_c4.LowerBound.Type.Value = '\x01';
    local_c4.LowerBound.Value = Thread;
    local_c4.UpperBound.Type.Value = '\x02';
    local_c4.UpperBound.Value = Thread;
    if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoRequestMessage,
                           (UObject *)pUVar7,L"ChaosVDFullSessionInfoRequestMessage");
    }
    pFVar8 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.
                        OuterSingleton,&local_40);
    FMessageEndpoint::Subscribe(pFVar9,pFVar8,&local_c4);
    if (this->bInitialized == false) {
      pFVar9 = TSharedPtr<FMessageEndpoint,1>::operator->(this_00);
      pFVar9->Enabled = false;
    }
    else {
      pFVar9 = TSharedPtr<FMessageEndpoint,1>::operator->(this_00);
      pFVar9->Enabled = true;
    }
    local_b0.Object = this_00->Object;
    paVar10 = (atomic<int> *)&DAT_00000008;
    pTVar2 = (this->MessageEndpoint).SharedReferenceCount.ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar11 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar11 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    local_a0.Object = param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      paVar10 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_b0.SharedReferenceCount.ReferenceController = pTVar2;
    local_a0.SharedReferenceCount.ReferenceController = pTVar3;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(TSharedPtr<IMessageBus,1>,TSharedPtr<FMessageEndpoint,1>),FDefaultDelegateUserPolicy>,TSharedPtr<IMessageBus,1>,TSharedPtr<FMessageEndpoint,1>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->MessagingInitializedDelegate,&local_a0,&local_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// ProcessPendingMessagesForSession @ 146319950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::ProcessPendingMessagesForSession
          (FChaosVDRemoteSessionsManager *this,FChaosVDSessionPong *param_1,
          TSharedRef<FChaosVDSessionInfo,1> *param_2)

{
  TMap<FGuid,FChaosVDTraceDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>_>
  *this_00;
  undefined8 *puVar1;
  uint uVar2;
  FChaosVDSessionInfo *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  pFVar3 = param_2->Object;
  uVar9 = CityHash64((char *)param_1,0x10);
  uVar8 = TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FChaosVDRecordingStatusMessage>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDRecordingStatusMessage,0>,FDefaultSetAllocator>
                      *)&this->PendingRecordingStatusMessages,(uint)uVar9,&param_1->InstanceId);
  if (uVar8 != 0xffffffff) {
    lVar13 = *(longlong *)&this->PendingRecordingStatusMessages;
    lVar12 = (longlong)(int)uVar8 * 0x80;
    puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar12);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    (pFVar3->LastKnownRecordingState).InstanceId.A = (int)uVar5;
    (pFVar3->LastKnownRecordingState).InstanceId.B = (int)((ulonglong)uVar5 >> 0x20);
    (pFVar3->LastKnownRecordingState).InstanceId.C = (int)uVar6;
    (pFVar3->LastKnownRecordingState).InstanceId.D = (int)((ulonglong)uVar6 >> 0x20);
    (pFVar3->LastKnownRecordingState).bIsRecording = *(bool *)(lVar13 + 0x20 + lVar12);
    (pFVar3->LastKnownRecordingState).ElapsedTime = *(float *)(lVar13 + 0x24 + lVar12);
    FChaosVDTraceDetails::operator=
              (&(pFVar3->LastKnownRecordingState).TraceDetails,
               (FChaosVDTraceDetails *)(lVar13 + 0x28 + lVar12));
    if ((-1 < (int)uVar8) &&
       ((int)uVar8 < *(int *)&(this->PendingRecordingStatusMessages).field_0x28)) {
      puVar10 = *(undefined1 **)&(this->PendingRecordingStatusMessages).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->PendingRecordingStatusMessages).field_0x10;
      }
      if ((*(uint *)(puVar10 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar8 & 0x1f) & 1) != 0) goto LAB_146319a34;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Elements.IsValidIndex(ElementIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                       ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_146319a34:
    puVar10 = *(undefined1 **)&(this->PendingRecordingStatusMessages).field_0x40;
    lVar13 = *(longlong *)&this->PendingRecordingStatusMessages;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->PendingRecordingStatusMessages).field_0x38;
    }
    puVar11 = (uint *)(puVar10 + (longlong)*(int *)(lVar13 + 0x7c + lVar12) * 4);
    do {
      uVar2 = *puVar11;
      if (uVar2 == 0xffffffff) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (uVar2 == uVar8) {
        *puVar11 = *(uint *)(lVar13 + 0x78 + lVar12);
        TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDRecordingStatusMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDRecordingStatusMessage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&this->PendingRecordingStatusMessages,uVar8,1);
        TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&this->PendingRecordingStatusMessages,uVar8,1);
        break;
      }
      puVar11 = (uint *)(*(longlong *)&this->PendingRecordingStatusMessages + 0x78 +
                        (longlong)(int)uVar2 * 0x80);
    } while( true );
  }
  pFVar3 = param_2->Object;
  this_00 = &this->PendingRecordingConnectionDetailsMessages;
  uVar9 = CityHash64((char *)param_1,0x10);
  uVar8 = TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FChaosVDTraceDetails>,TDefaultMapHashableKeyFuncs<FGuid,FChaosVDTraceDetails,0>,FDefaultSetAllocator>
                      *)this_00,(uint)uVar9,&param_1->InstanceId);
  if (uVar8 == 0xffffffff) {
    return;
  }
  lVar13 = (longlong)(int)uVar8 * 0x68;
  FChaosVDTraceDetails::operator=
            (&pFVar3->LastKnownConnectionDetails,
             (FChaosVDTraceDetails *)(*(longlong *)&this_00->field_0x0 + 0x10 + lVar13));
  if ((-1 < (int)uVar8) &&
     ((int)uVar8 < *(int *)&(this->PendingRecordingConnectionDetailsMessages).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->PendingRecordingConnectionDetailsMessages).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->PendingRecordingConnectionDetailsMessages).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_146319b79;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146319b79:
  puVar10 = *(undefined1 **)&(this->PendingRecordingConnectionDetailsMessages).field_0x40;
  lVar12 = *(longlong *)&this_00->field_0x0;
  if (puVar10 == (undefined1 *)0x0) {
    puVar10 = &(this->PendingRecordingConnectionDetailsMessages).field_0x38;
  }
  puVar11 = (uint *)(puVar10 + (longlong)*(int *)(lVar12 + 100 + lVar13) * 4);
  do {
    uVar2 = *puVar11;
    if (uVar2 == 0xffffffff) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (uVar2 == uVar8) {
      *puVar11 = *(uint *)(lVar12 + 0x60 + lVar13);
      TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDTraceDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FChaosVDTraceDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,uVar8,1);
      TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00,uVar8,1);
      return;
    }
    puVar11 = (uint *)(*(longlong *)&this_00->field_0x0 + 0x60 + (longlong)(int)uVar2 * 0x68);
  } while( true );
}

// PublishDataChannelStateChangeUpdate @ 146319c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::PublishDataChannelStateChangeUpdate
          (FChaosVDRemoteSessionsManager *this,FChaosVDChannelStateChangeResponseMessage *param_1)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  UPackage *pUVar5;
  FDateTime local_res8;
  FTimespan local_res18 [2];
  
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283767>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x149,"MessageEndpoint");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    puVar4 = FMemory::Malloc(0x28,0);
    uVar2 = *(undefined8 *)&(param_1->InstanceID).C;
    *puVar4 = *(undefined8 *)&param_1->InstanceID;
    puVar4[1] = uVar2;
    ::FString::FString((FString *)(puVar4 + 2),&(param_1->NewState).ChannelName);
    *(bool *)(puVar4 + 4) = (param_1->NewState).bIsEnabled;
    *(bool *)((longlong)puVar4 + 0x21) = (param_1->NewState).bCanChangeChannelState;
    *(bool *)((longlong)puVar4 + 0x22) = (param_1->NewState).bWaitingUpdatedState;
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_res18[0].Ticks = 0;
    if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeResponseMessage,
                           (UObject *)pUVar5,L"ChaosVDChannelStateChangeResponseMessage");
    }
    FMessageEndpoint::Publish
              (this_00,puVar4,
               Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.
               OuterSingleton,Network,local_res18,&local_res8);
  }
  return;
}

// PublishRecordingStatusUpdate @ 146319d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::PublishRecordingStatusUpdate
          (FChaosVDRemoteSessionsManager *this,FChaosVDRecordingStatusMessage *param_1)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  UPackage *pUVar5;
  FDateTime local_res8;
  FTimespan local_res18;
  
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x139,"MessageEndpoint");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    puVar4 = FMemory::Malloc(0x68,0);
    uVar2 = *(undefined8 *)&(param_1->InstanceId).C;
    *puVar4 = *(undefined8 *)&param_1->InstanceId;
    puVar4[1] = uVar2;
    *(bool *)(puVar4 + 2) = param_1->bIsRecording;
    *(float *)((longlong)puVar4 + 0x14) = param_1->ElapsedTime;
    FChaosVDTraceDetails::FChaosVDTraceDetails
              ((FChaosVDTraceDetails *)(puVar4 + 3),&param_1->TraceDetails);
    local_res18.Ticks = 0;
    local_res8.Ticks = 0x2bca2875f4373fff;
    if (Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDRecordingStatusMessage,
                           (UObject *)pUVar5,L"ChaosVDRecordingStatusMessage");
    }
    FMessageEndpoint::Publish
              (this_00,puVar4,
               Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton,
               Network,&local_res18,&local_res8);
  }
  return;
}

// PublishTraceConnectionDetailsUpdate @ 146319e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::PublishTraceConnectionDetailsUpdate
          (FChaosVDRemoteSessionsManager *this,FChaosVDTraceConnectionDetailsMessage *param_1)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  UPackage *pUVar5;
  FDateTime local_res8;
  FTimespan local_res18;
  
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283775>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x141,"MessageEndpoint");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    puVar4 = FMemory::Malloc(0x60,0);
    uVar2 = *(undefined8 *)&(param_1->InstanceId).C;
    *puVar4 = *(undefined8 *)&param_1->InstanceId;
    puVar4[1] = uVar2;
    FChaosVDTraceDetails::FChaosVDTraceDetails
              ((FChaosVDTraceDetails *)(puVar4 + 2),&param_1->TraceDetails);
    local_res18.Ticks = 0;
    local_res8.Ticks = 0x2bca2875f4373fff;
    if (Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDTraceConnectionDetailsMessage,
                           (UObject *)pUVar5,L"ChaosVDTraceConnectionDetailsMessage");
    }
    FMessageEndpoint::Publish
              (this_00,puVar4,
               Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.
               OuterSingleton,Network,&local_res18,&local_res8);
  }
  return;
}

// ReInitializeMessagingSystem @ 146319f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::ReInitializeMessagingSystem
          (FChaosVDRemoteSessionsManager *this,TSharedPtr<IMessageBus,1> *param_1)

{
  ShutdownMessagingSystem(this);
  InitializeMessagingSystem(this,param_1);
  return;
}

// RegisterBuiltInMessageTypes @ 146319ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::RegisterBuiltInMessageTypes(FChaosVDRemoteSessionsManager *this)

{
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  
  pTVar1 = &this->SupportedMessageTypes;
  if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPong,(UObject *)pUVar3,
                         L"ChaosVDSessionPong");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  if (Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDRecordingStatusMessage,(UObject *)pUVar3,
                         L"ChaosVDRecordingStatusMessage");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPing,(UObject *)pUVar3,
                         L"ChaosVDSessionPing");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  pUVar4 = FChaosVDStartRecordingCommandMessage::StaticStruct();
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  if (Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDStopRecordingCommandMessage,
                         (UObject *)pUVar3,L"ChaosVDStopRecordingCommandMessage");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeCommandMessage,
                         (UObject *)pUVar3,L"ChaosVDChannelStateChangeCommandMessage");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton
  ;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoRequestMessage,
                         (UObject *)pUVar3,L"ChaosVDFullSessionInfoRequestMessage");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoResponseMessage,
                         (UObject *)pUVar3,L"ChaosVDFullSessionInfoResponseMessage");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeResponseMessage,
                         (UObject *)pUVar3,L"ChaosVDChannelStateChangeResponseMessage");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.
           OuterSingleton;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  if (Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDTraceConnectionDetailsMessage,
                         (UObject *)pUVar3,L"ChaosVDTraceConnectionDetailsMessage");
  }
  pUVar4 = Z_Registration_Info_UScriptStruct_FChaosVDTraceConnectionDetailsMessage.OuterSingleton;
  iVar2 = (this->SupportedMessageTypes).ArrayNum;
  if (iVar2 == (this->SupportedMessageTypes).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->SupportedMessageTypes).ArrayMax);
  }
  (this->SupportedMessageTypes).ArrayNum = iVar2 + 1;
  *(UScriptStruct **)((pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 8) = pUVar4;
  return;
}

// RegisterExternalSupportedMessageType @ 14631a8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::RegisterExternalSupportedMessageType
          (FChaosVDRemoteSessionsManager *this,UScriptStruct *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283911>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0xb9,"ScriptStruct");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar4 = (this->SupportedMessageTypes).ArrayNum;
    piVar1 = &(this->SupportedMessageTypes).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->SupportedMessageTypes).AllocatorInstance,piVar1);
    }
    (this->SupportedMessageTypes).ArrayNum = iVar4 + 1;
    *(UScriptStruct **)((this->SupportedMessageTypes).AllocatorInstance.Data + (longlong)iVar4 * 8)
         = param_1;
  }
  return;
}

// RegisterSessionInMultiSessionWrapper @ 14631ad30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::RegisterSessionInMultiSessionWrapper
          (FChaosVDRemoteSessionsManager *this,TSharedRef<FChaosVDSessionInfo,1> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  TSharedPtr<FChaosVDSessionInfo,1> *pTVar4;
  ulong64 uVar5;
  TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  FChaosVDSessionInfo *pFVar9;
  FGuid **ppFVar10;
  bool bVar11;
  undefined1 local_res8 [16];
  TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&> local_res18;
  FGuid *local_68;
  TSharedRef<FChaosVDSessionInfo,1> *local_60;
  FGuid *local_58;
  TSharedRef<FChaosVDSessionInfo,1> *local_50;
  FGuid *local_48;
  TSharedRef<FChaosVDSessionInfo,1> *local_40;
  FGuid *local_38;
  TSharedRef<FChaosVDSessionInfo,1> *local_30;
  
  iVar3 = (param_1->Object->SessionName).Data.ArrayNum;
  if (iVar3 == LocalEditorSessionName.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Object->SessionName).Data.AllocatorInstance.Data,
                         (wchar_t *)LocalEditorSessionName.Data.AllocatorInstance.Data);
      bVar11 = iVar3 == 0;
      goto LAB_14631ad75;
    }
  }
  else {
    bVar11 = iVar3 + LocalEditorSessionName.Data.ArrayNum == 1;
LAB_14631ad75:
    if (!bVar11) {
      pTVar4 = TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
               ::FindChecked((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
                              *)&this->ActiveSessionsByInstanceId,&AllRemoteSessionsWrapperGUID);
      pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar9 = pTVar4->Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar9 == (FChaosVDSessionInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_68 = &param_1->Object->InstanceId;
      local_60 = param_1;
      TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&>_>
                ((TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                  *)(pFVar9 + 1),
                 (TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&> *)local_res8,
                 (bool *)&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (param_1->Object->BuildTargetType == Server) {
        pTVar4 = TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
                 ::FindChecked((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
                                *)&this->ActiveSessionsByInstanceId,&AllRemoteServersWrapperGUID);
        pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
        pFVar9 = pTVar4->Object;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar9 == (FChaosVDSessionInfo *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ppFVar10 = &local_58;
        local_58 = &param_1->Object->InstanceId;
        pTVar6 = (TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&> *)
                 (local_res8 + 8);
        local_50 = param_1;
      }
      else {
        pTVar4 = TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
                 ::FindChecked((TMapBase<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>_>
                                *)&this->ActiveSessionsByInstanceId,&AllRemoteClientsWrapperGUID);
        pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
        pFVar9 = pTVar4->Object;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar9 == (FChaosVDSessionInfo *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ppFVar10 = &local_48;
        local_48 = &param_1->Object->InstanceId;
        pTVar6 = &local_res18;
        local_40 = param_1;
      }
      TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&>_>
                ((TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                  *)(pFVar9 + 1),pTVar6,(bool *)ppFVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  uVar5 = CityHash64((char *)&AllSessionsWrapperGUID,0x10);
  iVar3 = TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
                      *)&this->ActiveSessionsByInstanceId,(uint)uVar5,&AllSessionsWrapperGUID);
  if (iVar3 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)&(this->ActiveSessionsByInstanceId).field_0x0 + (longlong)iVar3 * 0x28;
    if (lVar8 != 0) goto LAB_14631af66;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar11) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14631af66:
  lVar1 = *(longlong *)(lVar8 + 0x10);
  pTVar7 = *(TReferenceControllerBase<1> **)(lVar8 + 0x18);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar1 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38 = &param_1->Object->InstanceId;
  local_30 = param_1;
  TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&>_>
            ((TSet<TTuple<FGuid,TWeakPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TWeakPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x160),
             (TPairInitializer<FGuid_&,TSharedRef<FChaosVDSessionInfo,1>_const_&> *)
             &local_res18.Value,(bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// RemoveExpiredSessions @ 14631c1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::RemoveExpiredSessions
          (FChaosVDRemoteSessionsManager *this,ERemoveSessionOptions param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  longlong local_res8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
  *local_a8;
  char local_a0;
  char cStack_9f;
  TSharedRef<FChaosVDSessionInfo,1> local_98;
  FGuid local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  bVar11 = false;
  FDateTime::UtcNow();
  TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
              *)&this->ActiveSessionsByInstanceId);
  uVar8 = __real_417c9c3800000000;
  uVar1 = __real_41c1e1a300000000;
  local_a0 = '\0';
  cStack_9f = '\0';
  stack0xffffffffffffff38 = local_78._16_16_;
  auStack_d0._0_8_ = local_78._8_8_;
  local_b8 = local_58;
  pTStack_b0 = pTStack_50;
  uVar14 = local_78._24_8_ >> 0x20;
  local_a8 = (TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
              *)&this->ActiveSessionsByInstanceId;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      uVar15 = (uint)uVar14;
      lVar13 = (longlong)(int)uVar15;
      lVar2 = *(longlong *)local_78._0_8_;
      lVar3 = *(longlong *)(lVar2 + 0x10 + lVar13 * 0x28);
      if (lVar3 == 0) {
LAB_14631c407:
        TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_b0,uVar15);
        bVar11 = true;
        local_a0 = '\x01';
      }
      else if ((*(byte *)(lVar3 + 0x158) & 2) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x38);
        if ((lVar3 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar3 = *(longlong *)(lVar2 + 0x10 + lVar13 * 0x28);
        uVar14 = uVar1;
        if (*(char *)(lVar3 + 0x41) != '\x01') {
          if ((lVar3 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          cVar10 = (**(code **)(**(longlong **)(lVar2 + 0x10 + lVar13 * 0x28) + 8))();
          if (cVar10 == '\0') {
            uVar14 = uVar8;
          }
        }
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar14;
        if (((param_1 & ForceRemoveAll) != None) ||
           (auVar7._8_8_ = 0, auVar7._0_8_ = uVar14, auVar16 = roundpd(auVar16,auVar7,1),
           (longlong)auVar16._0_8_ < local_res8 - lVar4)) {
          if ((*(longlong *)(lVar2 + 0x10 + lVar13 * 0x28) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar13 * 0x28);
          local_88._0_8_ = *(undefined8 *)(lVar3 + 8);
          local_88._8_8_ = *(undefined8 *)(lVar3 + 0x10);
          TMulticastDelegate<void___cdecl(FGuid),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->SessionExpiredDelegate,&local_88);
          if ((*(longlong *)(lVar2 + 0x10 + lVar13 * 0x28) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_98.Object = *(FChaosVDSessionInfo **)(lVar2 + 0x10 + lVar13 * 0x28);
          pTVar5 = *(TReferenceControllerBase<1> **)(lVar2 + 0x18 + lVar13 * 0x28);
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_98.SharedReferenceCount.ReferenceController = pTVar5;
          if ((local_98.Object == (FChaosVDSessionInfo *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          DeRegisterSessionInMultiSessionWrapper(this,&local_98);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          uVar15 = uStack_bc;
          goto LAB_14631c407;
        }
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar14 = (ulonglong)uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if ((local_a0 != '\0') && (cStack_9f != '\0')) {
      uVar15 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar12 = 1;
      }
      else {
        uVar1 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_a8->HashSize < iVar12)) || (iVar12 < local_a8->HashSize)) {
        local_a8->HashSize = iVar12;
        TSet<TTuple<FGuid,TSharedPtr<FChaosVDSessionInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FChaosVDSessionInfo,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
    if (bVar11) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->SessionsUpdatedDelegate);
    }
  }
  return;
}

// SendDataChannelStateChangeCommand @ 14631dec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::SendDataChannelStateChangeCommand
          (FChaosVDRemoteSessionsManager *this,FMessageAddress *param_1,
          FChaosVDChannelStateChangeCommandMessage *param_2)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  UScriptStruct *pUVar1;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  UPackage *pUVar3;
  FString *this_01;
  ForAnyElementType FVar4;
  longlong lVar5;
  undefined1 auStackY_1d8 [32];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_198;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_188;
  FDateTime local_178;
  FTimespan local_170;
  TSharedPtr<IMessageAttachment,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    if ((byte)LogChaosVDRemoteSession._0_1_ < 2) {
      return;
    }
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FChaosVDRemoteSessionsManager::SendDataChannelStateChangeCommand",0x40,
               Yes);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRemoteSession);
    FVar4.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    local_170.Ticks = 0;
    local_178.Ticks = 0x2bca2875f4373fff;
    local_188.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Array.ArrayNum = 0;
    local_188.Array.ArrayMax = 0;
    pTVar2 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_188,param_1);
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.ArrayNum = (pTVar2->Array).ArrayNum;
    lVar5 = (longlong)local_198.ArrayNum;
    _Src = (pTVar2->Array).AllocatorInstance.Data;
    if (local_198.ArrayNum == 0) {
      local_198.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_198.ArrayNum,0,&local_198.AllocatorInstance,local_198.ArrayNum,
                 &local_198.ArrayMax);
      memcpy(local_198.AllocatorInstance.Data,_Src,lVar5 << 4);
    }
    local_168.Object = (IMessageAttachment *)0x0;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeCommandMessage,
                           (UObject *)pUVar3,L"ChaosVDChannelStateChangeCommandMessage");
    }
    pUVar1 = Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.
             OuterSingleton;
    this_01 = FMemory::Malloc(0x18,0);
    ::FString::FString(this_01,(FString *)param_2);
    *(bool *)&this_01[1].Data.AllocatorInstance.Data = (param_2->NewState).bIsEnabled;
    *(bool *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 1) =
         (param_2->NewState).bCanChangeChannelState;
    *(bool *)((longlong)&this_01[1].Data.AllocatorInstance.Data + 2) =
         (param_2->NewState).bWaitingUpdatedState;
    FMessageEndpoint::Send
              (this_00,this_01,pUVar1,Reliable,&local_168,&local_198,&local_170,&local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    FVar4.Data = local_188.Array.AllocatorInstance.Data;
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
      FVar4.Data = local_188.Array.AllocatorInstance.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return;
}

// SendFullSessionStateRequestCommand @ 14631e0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::SendFullSessionStateRequestCommand
          (FChaosVDRemoteSessionsManager *this,FMessageAddress *param_1)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  UScriptStruct *pUVar1;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  UPackage *pUVar3;
  void *pvVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  undefined1 auStackY_1c8 [32];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_188;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_178;
  FDateTime local_168;
  FTimespan local_160;
  TSharedPtr<IMessageAttachment,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    if ((byte)LogChaosVDRemoteSession._0_1_ < 2) {
      return;
    }
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FChaosVDRemoteSessionsManager::SendFullSessionStateRequestCommand",0x41,
               Yes);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRemoteSession);
    FVar5.Data = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    local_160.Ticks = 0;
    local_168.Ticks = 0x2bca2875f4373fff;
    local_178.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Array.ArrayNum = 0;
    local_178.Array.ArrayMax = 0;
    pTVar2 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_178,param_1);
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = (pTVar2->Array).ArrayNum;
    lVar6 = (longlong)local_188.ArrayNum;
    _Src = (pTVar2->Array).AllocatorInstance.Data;
    if (local_188.ArrayNum == 0) {
      local_188.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_188.ArrayNum,0,&local_188.AllocatorInstance,local_188.ArrayNum,
                 &local_188.ArrayMax);
      memcpy(local_188.AllocatorInstance.Data,_Src,lVar6 << 4);
    }
    local_158.Object = (IMessageAttachment *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoRequestMessage,
                           (UObject *)pUVar3,L"ChaosVDFullSessionInfoRequestMessage");
    }
    pUVar1 = Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton;
    pvVar4 = FMemory::Malloc(1,0);
    FMessageEndpoint::Send
              (this_00,pvVar4,pUVar1,Reliable,&local_158,&local_188,&local_160,&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    FVar5.Data = local_178.Array.AllocatorInstance.Data;
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
      FVar5.Data = local_178.Array.AllocatorInstance.Data;
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// SendPing @ 14631e2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosVDRemoteSessionsManager::SendPing(FChaosVDRemoteSessionsManager *this)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  FGuid *pFVar5;
  UPackage *pUVar6;
  FDateTime local_res8;
  FTimespan local_res10;
  FGuid local_18;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283676>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x1a4,"MessageEndpoint");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    puVar4 = FMemory::Malloc(0x10,0);
    *puVar4 = 0;
    puVar4[1] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      pFVar5 = FApp::GetInstanceId(&local_18);
      uVar2 = *(undefined8 *)&pFVar5->C;
      *puVar4 = *(undefined8 *)pFVar5;
      puVar4[1] = uVar2;
      if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (this->MessageEndpoint).Object;
      local_res8.Ticks = 0x2bca2875f4373fff;
      local_res10.Ticks = 0;
      if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_ChaosSolverEngine();
        Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPing,(UObject *)pUVar6,
                             L"ChaosVDSessionPing");
      }
      FMessageEndpoint::Publish
                (this_00,puVar4,Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton
                 ,Network,&local_res10,&local_res8);
    }
  }
  return;
}

// SendPong @ 14631e420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::SendPong
          (FChaosVDRemoteSessionsManager *this,FChaosVDSessionPing *param_1)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FMessageEndpoint *this_01;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  EBuildTargetType EVar10;
  int iVar11;
  DWORD DVar12;
  uint *puVar13;
  FGuid *pFVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  UPackage *pUVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  undefined1 auStackY_158 [32];
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FDateTime local_e8;
  FString local_e0;
  FTimespan local_d0;
  FString local_c8;
  FGuid local_b8;
  FString local_a8;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e8.Ticks = local_e8.Ticks & 0xffffffff00000000;
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5659785178273283664>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosVDRemoteSessionsManager.cpp"
                       ,0x1b0,"MessageEndpoint");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar13 = FMemory::Malloc(0x38,0);
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    this_00 = (FString *)(puVar13 + 8);
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x37) = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    *(undefined1 *)(puVar13 + 0xc) = 0;
    if (puVar13 != (uint *)0x0) {
      pFVar14 = FApp::GetInstanceId(&local_b8);
      uVar6 = pFVar14->B;
      uVar7 = pFVar14->C;
      uVar8 = pFVar14->D;
      puVar13[0] = pFVar14->A;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      *(FGuid *)(puVar13 + 4) = FApp::SessionId;
      EVar10 = FApp::GetBuildTargetType();
      *(EBuildTargetType *)(puVar13 + 0xc) = EVar10;
      FVar18 = FApp::SessionName.Data.AllocatorInstance;
      if ((((param_1->ControllerInstanceId).C == puVar13[2] &&
           (param_1->ControllerInstanceId).D == puVar13[3]) &&
          (param_1->ControllerInstanceId).B == puVar13[1]) &&
          (param_1->ControllerInstanceId).A == *puVar13) {
        ::FString::operator=(this_00,&LocalEditorSessionName);
      }
      else {
        lVar19 = (longlong)FApp::SessionName.Data.ArrayNum;
        local_118.Data = (FScriptContainerElement *)0x0;
        local_110 = FApp::SessionName.Data.ArrayNum;
        if (FApp::SessionName.Data.ArrayNum == 0) {
          local_10c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,FApp::SessionName.Data.ArrayNum,0,&local_118,
                     FApp::SessionName.Data.ArrayNum,&local_10c);
          memcpy(local_118.Data,FVar18.Data,lVar19 * 2);
        }
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_110 != 0) {
          FVar18.Data = local_118.Data;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"None");
        FVar18.Data = local_118.Data;
        if ((iVar11 == 0) || (lVar19 = (longlong)local_110, local_110 < 2)) {
          FStringFormatArg::FStringFormatArg(&local_98,GInternalProjectName);
          EVar10 = FApp::GetBuildTargetType();
          pwVar15 = ::LexToString(EVar10);
          pFVar16 = ::FString::FString(&local_a8,pwVar15);
          FStringFormatArg::FStringFormatArg(&local_78,pFVar16);
          DVar12 = FWindowsPlatformProcess::GetCurrentProcessId();
          local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e0.Data.ArrayNum = 0;
          local_e0.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_e0,DVar12);
          FStringFormatArg::FStringFormatArg(&local_58,&local_e0);
          local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_108.AllocatorInstance,3,&local_108.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_108.AllocatorInstance.Data,&local_98,3);
          ::FString::FormatImpl(&local_c8,L"{0} {1} {2}",&local_108);
          pFVar16 = &local_c8;
          bVar5 = false;
          bVar4 = true;
          bVar3 = true;
          bVar9 = true;
        }
        else {
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = local_110;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_110,0,(ForAnyElementType *)&local_f8,local_110,
                     &local_f8.Data.ArrayMax);
          memcpy(local_f8.Data.AllocatorInstance.Data,FVar18.Data,lVar19 * 2);
          pFVar16 = &local_f8;
          bVar5 = true;
          bVar4 = false;
          bVar3 = false;
          bVar9 = false;
        }
        if (this_00 != pFVar16) {
          pFVar1 = (this_00->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (this_00->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          puVar13[10] = (pFVar16->Data).ArrayNum;
          puVar13[0xb] = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
        }
        if ((bVar9) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if ((bVar3) &&
           (DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum),
           (FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0)) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        if (bVar4) {
          if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
          }
        }
        if ((bVar5) && (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
      }
      if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = (this->MessageEndpoint).Object;
      local_e8.Ticks = 0x2bca2875f4373fff;
      local_d0.Ticks = 0;
      if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar17 = Z_Construct_UPackage__Script_ChaosSolverEngine();
        Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPong,(UObject *)pUVar17,
                             L"ChaosVDSessionPong");
      }
      FMessageEndpoint::Publish
                (this_01,puVar13,
                 Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton,Network,
                 &local_d0,&local_e8);
    }
  }
  return;
}

// SendStartRecordingCommand @ 14631e890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::SendStartRecordingCommand
          (FChaosVDRemoteSessionsManager *this,FMessageAddress *param_1,
          FChaosVDStartRecordingCommandMessage *param_2)

{
  ForAnyElementType *pFVar1;
  EChaosVDRecordingMode *pEVar2;
  undefined4 uVar3;
  FMessageEndpoint *this_00;
  FScriptContainerElement *pFVar4;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar5;
  UScriptStruct *pUVar6;
  EChaosVDRecordingMode *pEVar7;
  longlong lVar8;
  FDateTime local_res8;
  FTimespan local_res20;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<IMessageAttachment,1> local_48;
  
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    if (1 < (byte)LogChaosVDRemoteSession._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRemoteSession);
      return;
    }
  }
  else {
    local_res20.Ticks = 0;
    local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Array.ArrayNum = 0;
    local_58.Array.ArrayMax = 0;
    local_res8.Ticks = 0x2bca2875f4373fff;
    pTVar5 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_58,param_1);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = (pTVar5->Array).ArrayNum;
    lVar8 = (longlong)local_68.ArrayNum;
    pFVar4 = (pTVar5->Array).AllocatorInstance.Data;
    if (local_68.ArrayNum == 0) {
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                 &local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,pFVar4,lVar8 << 4);
    }
    local_48.Object = (IMessageAttachment *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar6 = FChaosVDStartRecordingCommandMessage::StaticStruct();
    pEVar7 = FMemory::Malloc(0x28,0);
    *pEVar7 = param_2->RecordingMode;
    pEVar7[1] = param_2->TransportMode;
    ::FString::FString((FString *)(pEVar7 + 8),&param_2->Target);
    pFVar1 = (ForAnyElementType *)(pEVar7 + 0x18);
    pFVar1->Data = (FScriptContainerElement *)0x0;
    pEVar2 = pEVar7 + 0x24;
    uVar3 = (param_2->DataChannelsEnabledOverrideList).ArrayNum;
    pFVar4 = (param_2->DataChannelsEnabledOverrideList).AllocatorInstance.Data;
    *(undefined4 *)(pEVar7 + 0x20) = uVar3;
    if (uVar3 == Invalid) {
      pEVar2[0] = Invalid;
      pEVar2[1] = Invalid;
      pEVar2[2] = Invalid;
      pEVar2[3] = Invalid;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,0,pFVar1,uVar3,(int *)pEVar2);
      ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)pFVar4,uVar3);
    }
    FMessageEndpoint::Send
              (this_00,pEVar7,pUVar6,Reliable,&local_48,&local_68,&local_res20,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// SendStopRecordingCommand @ 14631eac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::SendStopRecordingCommand
          (FChaosVDRemoteSessionsManager *this,FMessageAddress *param_1)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  UScriptStruct *pUVar1;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar2;
  UPackage *pUVar3;
  void *pvVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  undefined1 auStackY_1c8 [32];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_188;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_178;
  FDateTime local_168;
  FTimespan local_160;
  TSharedPtr<IMessageAttachment,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = (this->MessageEndpoint).Object;
  if (this_00 == (FMessageEndpoint *)0x0) {
    if ((byte)LogChaosVDRemoteSession._0_1_ < 2) {
      return;
    }
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FChaosVDRemoteSessionsManager::SendStopRecordingCommand",0x37,Yes);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRemoteSession);
    FVar5.Data = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    local_160.Ticks = 0;
    local_168.Ticks = 0x2bca2875f4373fff;
    local_178.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Array.ArrayNum = 0;
    local_178.Array.ArrayMax = 0;
    pTVar2 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_178,param_1);
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = (pTVar2->Array).ArrayNum;
    lVar6 = (longlong)local_188.ArrayNum;
    _Src = (pTVar2->Array).AllocatorInstance.Data;
    if (local_188.ArrayNum == 0) {
      local_188.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_188.ArrayNum,0,&local_188.AllocatorInstance,local_188.ArrayNum,
                 &local_188.ArrayMax);
      memcpy(local_188.AllocatorInstance.Data,_Src,lVar6 << 4);
    }
    local_158.Object = (IMessageAttachment *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDStopRecordingCommandMessage,
                           (UObject *)pUVar3,L"ChaosVDStopRecordingCommandMessage");
    }
    pUVar1 = Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton;
    pvVar4 = FMemory::Malloc(1,0);
    FMessageEndpoint::Send
              (this_00,pvVar4,pUVar1,Reliable,&local_158,&local_188,&local_160,&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    FVar5.Data = local_178.Array.AllocatorInstance.Data;
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
      FVar5.Data = local_178.Array.AllocatorInstance.Data;
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// Shutdown @ 14631f9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosVDRemoteSessionsManager::Shutdown(FChaosVDRemoteSessionsManager *this)

{
  this->bInitialized = false;
  ShutdownMessagingSystem(this);
  return;
}

// ShutdownMessagingSystem @ 14631fa30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::ShutdownMessagingSystem(FChaosVDRemoteSessionsManager *this)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FMessageEndpoint *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  UPackage *pUVar8;
  FTopLevelAssetPath *pFVar9;
  UScriptStruct *this_00;
  longlong local_b8;
  FSharedReferencer<1> FStack_b0;
  FTopLevelAssetPath local_a8;
  FTopLevelAssetPath local_98;
  FTopLevelAssetPath local_88;
  FTopLevelAssetPath local_78;
  FTopLevelAssetPath local_68;
  FTopLevelAssetPath local_58;
  FTopLevelAssetPath local_48;
  FTopLevelAssetPath local_38;
  FTopLevelAssetPath local_28;
  undefined8 local_18 [2];
  
  pFVar4 = (this->MessageEndpoint).Object;
  pTVar1 = &this->MessageEndpoint;
  if (pFVar4 != (FMessageEndpoint *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPong,(UObject *)pUVar8,
                           L"ChaosVDSessionPong");
    }
    pFVar9 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDSessionPong.OuterSingleton,
                        &local_a8);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
    if (pTVar1->Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = pTVar1->Object;
    if (Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDRecordingStatusMessage,
                           (UObject *)pUVar8,L"ChaosVDRecordingStatusMessage");
    }
    pFVar9 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDRecordingStatusMessage.
                        OuterSingleton,&local_98);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
    if (pTVar1->Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = pTVar1->Object;
    if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPing,(UObject *)pUVar8,
                           L"ChaosVDSessionPing");
    }
    pFVar9 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton,
                        &local_88);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
    if (pTVar1->Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = pTVar1->Object;
    this_00 = FChaosVDStartRecordingCommandMessage::StaticStruct();
    pFVar9 = UStruct::GetStructPathName((UStruct *)this_00,&local_78);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
    if (pTVar1->Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = pTVar1->Object;
    if (Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDStopRecordingCommandMessage,
                           (UObject *)pUVar8,L"ChaosVDStopRecordingCommandMessage");
    }
    pFVar9 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDStopRecordingCommandMessage.
                        OuterSingleton,&local_68);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
    if (pTVar1->Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = pTVar1->Object;
    if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeCommandMessage,
                           (UObject *)pUVar8,L"ChaosVDChannelStateChangeCommandMessage");
    }
    pFVar9 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeCommandMessage.
                        OuterSingleton,&local_58);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
    if (pTVar1->Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = pTVar1->Object;
    if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoRequestMessage,
                           (UObject *)pUVar8,L"ChaosVDFullSessionInfoRequestMessage");
    }
    pFVar9 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoRequestMessage.
                        OuterSingleton,&local_48);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
    if (pTVar1->Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = pTVar1->Object;
    if (Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDFullSessionInfoResponseMessage,
                           (UObject *)pUVar8,L"ChaosVDFullSessionInfoResponseMessage");
    }
    pFVar9 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDFullSessionInfoResponseMessage.
                        OuterSingleton,&local_38);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
    if (pTVar1->Object == (FMessageEndpoint *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = pTVar1->Object;
    if (Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_ChaosSolverEngine();
      Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDChannelStateChangeResponseMessage,
                           (UObject *)pUVar8,L"ChaosVDChannelStateChangeResponseMessage");
    }
    pFVar9 = UStruct::GetStructPathName
                       ((UStruct *)
                        Z_Registration_Info_UScriptStruct_FChaosVDChannelStateChangeResponseMessage.
                        OuterSingleton,&local_28);
    FMessageEndpoint::Unsubscribe(pFVar4,pFVar9);
  }
  if (&this->MessageBusPtr != (TWeakPtr<IMessageBus,1> *)local_18) {
    pTVar5 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
    (this->MessageBusPtr).Object = (IMessageBus *)0x0;
    (this->MessageBusPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  local_b8 = 0;
  FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FMessageEndpoint,1> *)&local_b8) {
    pTVar1->Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&FStack_b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b0.ReferenceController);
  return;
}

// StartSessionDiscovery @ 14631feb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::StartSessionDiscovery(FChaosVDRemoteSessionsManager *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FTSTicker *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  TWeakPtr<FTSTicker::FElement,1> *pTVar9;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pTVar2 = &this->TickHandle;
  if (((pTVar2->Object == (FElement *)0x0) ||
      (pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    this_00 = FTSTicker::GetCoreTicker();
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRemoteSessionsManager____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[4] = Tick;
      puVar7[3] = this;
      if (this == (FChaosVDRemoteSessionsManager *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    pTVar9 = FTSTicker::AddTicker
                       (this_00,&local_78,
                        (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,
                        __real_3f800000);
    if (pTVar2 != pTVar9) {
      pTVar2->Object = pTVar9->Object;
      pTVar9->Object = (FElement *)0x0;
      pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      (this->TickHandle).WeakReferenceCount.ReferenceController =
           (pTVar9->WeakReferenceCount).ReferenceController;
      (pTVar9->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  else if (2 < (byte)LogChaosVDRemoteSession._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRemoteSession);
    return;
  }
  return;
}

// StopSessionDiscovery @ 146320380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRemoteSessionsManager::StopSessionDiscovery(FChaosVDRemoteSessionsManager *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->TickHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    RemoveExpiredSessions(this,ForceRemoveAll);
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->TickHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->TickHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
      ;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000146320406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          return;
        }
      }
    }
  }
  return;
}

// Tick @ 146320720

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FChaosVDRemoteSessionsManager::Tick(FChaosVDRemoteSessionsManager *this,float param_1)

{
  return true;
}

// operator() @ 1504e9980

bool __thiscall
`FChaosVDRemoteSessionsManager::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5659785178273283974>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5659785178273283974>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

