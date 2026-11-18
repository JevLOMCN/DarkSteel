// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 17

// FReplicationSystemImpl @ 1442f62b0

FReplicationSystemImpl * __thiscall
UE::Net::Private::FReplicationSystemImpl::FReplicationSystemImpl
          (FReplicationSystemImpl *this,UReplicationSystem *param_1,
          FReplicationSystemParams *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  FName local_res8;
  undefined3 local_28;
  undefined1 uStack_25;
  FReplicationSystemInternalInitParams local_20;
  
  *(undefined8 *)&this->AttachmentSendPolicyFlags = 0;
  *(undefined8 *)&(this->AttachmentSendPolicyFlags).field_0x8 = 0;
  *(undefined8 *)&(this->AttachmentSendPolicyFlags).field_0x20 = 0;
  *(undefined4 *)&(this->AttachmentSendPolicyFlags).field_0x28 = 0;
  *(undefined4 *)&(this->AttachmentSendPolicyFlags).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttachmentSendPolicyFlags).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AttachmentSendPolicyFlags).field_0x34 = 0;
  *(undefined8 *)&(this->AttachmentSendPolicyFlags).field_0x40 = 0;
  *(undefined4 *)&(this->AttachmentSendPolicyFlags).field_0x48 = 0;
  this->ReplicationSystem = param_1;
  this->NetTokenStore = param_2->NetTokenStore;
  local_20.NetChunkedArrayCount = param_2->PreAllocatedMemoryBuffersObjectCount;
  local_20.MaxReplicationWriterObjectCount = param_2->MaxReplicationWriterObjectCount;
  local_20.MaxReplicatedObjectCount = param_2->MaxReplicatedObjectCount;
  local_20.ReplicationSystemId = param_1->Id;
  uVar1 = param_2->bUseRemoteObjectReferences;
  uVar2 = param_2->bAllowParallelTasks;
  uVar3 = param_2->bAllowMinimalUpdateIfNoConnections;
  local_20.bUseRemoteObjectReferences = (bool)uVar1;
  local_20.bAllowParallelTasks = (bool)uVar2;
  local_20.bAllowMinimalUpdateIfNoConnections = (bool)uVar3;
  local_20._19_1_ = uStack_25;
  FReplicationSystemInternal::FReplicationSystemInternal(&this->ReplicationSystemInternal,&local_20)
  ;
  *(undefined8 *)&(this->Delegates).ConnectionAddedDelegate = 0;
  *(undefined8 *)&(this->Delegates).ConnectionAddedDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Delegates).ConnectionAddedDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Delegates).ConnectionAddedDelegate.field_0x18 = 2;
  *(undefined8 *)&(this->Delegates).ConnectionRemovedDelegate = 0;
  *(undefined8 *)&(this->Delegates).ConnectionRemovedDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Delegates).ConnectionRemovedDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Delegates).ConnectionRemovedDelegate.field_0x18 = 2;
  this->IrisDebugHelperDummy = 0;
  (this->NotReplicatedNetObjectGroupHandle).field0_0x0.Value = 0;
  (this->NetGroupOwnerNetObjectGroupHandle).field0_0x0.Value = 0;
  (this->NetGroupReplayNetObjectGroupHandle).field0_0x0.Value = 0;
  (this->ConnectionsPendingPostTickDispatchSend).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConnectionsPendingPostTickDispatchSend).Storage.ArrayNum = 0;
  (this->ConnectionsPendingPostTickDispatchSend).Storage.ArrayMax = 0;
  (this->ConnectionsPendingPostTickDispatchSend).BitCount = 0;
  this->CurrentSendPass = Invalid;
  (this->MetricNameTotalRootObjects).ComparisonIndex = 0;
  *(undefined8 *)&(this->MetricNameTotalRootObjects).Number = 0;
  *(undefined8 *)&(this->MetricNameTotalSubObjects).Number = 0;
  *(undefined8 *)&(this->MetricNameAvgPendingObjectCount).Number = 0;
  *(undefined8 *)&(this->MetricNameMaxPendingObjectCount).Number = 0;
  *(undefined8 *)&(this->MetricNameAvgPendingDependentObjectCount).Number = 0;
  *(undefined8 *)&(this->MetricNameMaxPendingDependentObjectCount).Number = 0;
  *(undefined8 *)&(this->MetricNameAvgHugeObjectSendQueue).Number = 0;
  (this->MetricNameMaxHugeObjectSendQueue).Number = 0;
  this->bHadValidConnectionsLastUpdate = false;
  ::FName::FName(&local_res8,L"TotalSubObjects");
  this->MetricNameTotalRootObjects = local_res8;
  ::FName::FName(&local_res8,L"TotalRootObjects");
  this->MetricNameTotalSubObjects = local_res8;
  ::FName::FName(&local_res8,L"AvgPendingObjectCount");
  this->MetricNameAvgPendingObjectCount = local_res8;
  ::FName::FName(&local_res8,L"MaxPendingObjectCount");
  this->MetricNameMaxPendingObjectCount = local_res8;
  ::FName::FName(&local_res8,L"AvgPendingDependentObjectCount");
  this->MetricNameAvgPendingDependentObjectCount = local_res8;
  ::FName::FName(&local_res8,L"MaxPendingDependentObjectCount");
  this->MetricNameMaxPendingDependentObjectCount = local_res8;
  ::FName::FName(&local_res8,L"AvgHugeObjectSendQueue");
  this->MetricNameAvgHugeObjectSendQueue = local_res8;
  ::FName::FName(&local_res8,L"MaxHugeObjectSendQueue");
  this->MetricNameMaxHugeObjectSendQueue = local_res8;
  return this;
}

// ~FReplicationSystemImpl @ 1442f8df0

void __thiscall
UE::Net::Private::FReplicationSystemImpl::~FReplicationSystemImpl(FReplicationSystemImpl *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ConnectionsPendingPostTickDispatchSend).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->Delegates).ConnectionRemovedDelegate.field_0x8,
             *(int *)&(this->Delegates).ConnectionRemovedDelegate.field_0x10);
  pvVar2 = *(void **)&(this->Delegates).ConnectionRemovedDelegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Delegates).ConnectionRemovedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->Delegates).ConnectionAddedDelegate.field_0x8,
             *(int *)&(this->Delegates).ConnectionAddedDelegate.field_0x10);
  pvVar2 = *(void **)&(this->Delegates).ConnectionAddedDelegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegates);
  FReplicationSystemInternal::~FReplicationSystemInternal(&this->ReplicationSystemInternal);
  *(undefined4 *)&(this->AttachmentSendPolicyFlags).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AttachmentSendPolicyFlags).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,enum_UE::Net::ENetObjectAttachmentSendPolicyFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,enum_UE::Net::ENetObjectAttachmentSendPolicyFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// AddConnection @ 1442faba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationSystemImpl::AddConnection(FReplicationSystemImpl *this,uint param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FReplicationConnection *pFVar5;
  FReplicationWriter *this_00;
  FReplicationWriter *pFVar6;
  FReplicationReader *this_01;
  FReplicationReader *pFVar7;
  uint uVar8;
  FName local_res8;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FReplicationParameters local_68;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_IrisConnection.UniqueName,false,None,Default,true);
  local_res8 = LLMTagDeclaration_IrisConnection.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res8,true);
  if ((param_1 == 0) ||
     ((this->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1)) {
    if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::AddConnection(unsigned_int)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  else {
    pFVar2 = (this->ReplicationSystemInternal).Connections.ValidConnections.Storage.
             AllocatorInstance.Data;
    uVar8 = 1 << (sbyte)(param_1 & 0x1f);
    lVar1 = (ulonglong)(param_1 >> 5) * 4;
    if ((*(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) & uVar8) == 0) {
      if ((this->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((*(uint *)(pFVar2 + lVar1) & uVar8) != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValidConnections.GetBit(ConnectionId) == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationConnections.h"
                           ,0x4b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->ReplicationSystemInternal).Connections.ValidConnections.Storage.
               AllocatorInstance.Data;
      if ((this->ReplicationSystemInternal).Connections.ValidConnections.BitCount <= param_1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(uint *)(pFVar2 + lVar1) = *(uint *)(pFVar2 + lVar1) | 1 << (param_1 & 0x1f);
      pFVar5 = FReplicationConnections::GetConnection
                         (&(this->ReplicationSystemInternal).Connections,param_1);
      local_68.MaxInternalNetRefIndex =
           (this->ReplicationSystemInternal).NetRefHandleManager.CurrentMaxInternalNetRefIndex;
      local_68.ReplicationSystem = this->ReplicationSystem;
      local_68.MaxReplicationWriterObjectCount =
           (this->ReplicationSystemInternal).InternalInitParams.MaxReplicationWriterObjectCount;
      local_68.SmallObjectBitThreshold = 0xa0;
      local_68.MaxFailedSmallObjectCount = 10;
      local_68.NumBitsUsedForBatchSize = 0x10;
      local_68.NumBitsUsedForHugeObjectBatchSize = 0x20;
      local_68.PacketSendWindowSize = 0x100;
      local_68.bAllowReceivingAttachmentsFromRemoteObjectsNotInScope = true;
      local_68.bAllowSendingAttachmentsToObjectsNotInScope =
           (bool)(~(local_68.ReplicationSystem)->bIsServer & 1);
      local_68.bAllowDelayingAttachmentsWithUnresolvedReferences =
           (bool)(~(local_68.ReplicationSystem)->bIsServer & 1);
      local_68.ConnectionId = param_1;
      this_00 = ::operator_new(0x428);
      pFVar6 = (FReplicationWriter *)0x0;
      if (this_00 != (FReplicationWriter *)0x0) {
        memset(this_00,0,0x428);
        pFVar6 = FReplicationWriter::FReplicationWriter(this_00);
      }
      pFVar5->ReplicationWriter = pFVar6;
      this_01 = ::operator_new(0x4e0);
      pFVar7 = (FReplicationReader *)0x0;
      if (this_01 != (FReplicationReader *)0x0) {
        pFVar7 = FReplicationReader::FReplicationReader(this_01);
      }
      pFVar5->ReplicationReader = pFVar7;
      FReplicationWriter::Init(pFVar5->ReplicationWriter,&local_68);
      FReplicationReader::Init(pFVar5->ReplicationReader,&local_68);
      FReplicationConditionals::AddConnection
                (&(this->ReplicationSystemInternal).Conditionals,param_1);
      FReplicationFiltering::AddConnection(&(this->ReplicationSystemInternal).Filtering,param_1);
      FReplicationPrioritization::AddConnection
                (&(this->ReplicationSystemInternal).Prioritization,param_1);
      FDeltaCompressionBaselineManager::AddConnection
                (&(this->ReplicationSystemInternal).DeltaCompressionBaselineManager,param_1);
      local_res8.Number = 0;
      local_res8.ComparisonIndex.Value = param_1;
      TMulticastDelegate<void___cdecl(UE::Net::FConnectionHandle),FDefaultDelegateUserPolicy>::
      Broadcast(&(this->Delegates).ConnectionAddedDelegate,(FConnectionHandle)local_res8);
    }
    else if (1 < (byte)LogIris._0_1_) {
      Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::AddConnection(unsigned_int)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// CollectNetMetrics @ 1442fcf10

void __thiscall
UE::Net::Private::FReplicationSystemImpl::CollectNetMetrics
          (FReplicationSystemImpl *this,FNetMetrics *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  FNetMetric **ppFVar3;
  FNetMetric **ppFVar4;
  uint uVar5;
  double dVar6;
  TPairInitializer<FName_&,UE::Net::FNetMetric_&&> local_res8;
  undefined1 local_58 [12];
  uint uStack_4c;
  FNetMetric **local_48;
  undefined1 *local_40;
  
  uVar1 = (this->ReplicationSystemInternal).NetRefHandleManager.ActiveObjectCount;
  FNetBitArrayView::FNetBitArrayView
            ((FNetBitArrayView *)local_58,
             (uint *)(this->ReplicationSystemInternal).NetRefHandleManager.SubObjectInternalIndices.
                     Storage.AllocatorInstance.Data,
             (this->ReplicationSystemInternal).NetRefHandleManager.SubObjectInternalIndices.BitCount
            );
  uVar5 = FNetBitArrayHelper::CountSetBits((uint *)local_58._0_8_,uStack_4c,0,0xffffffff);
  local_res8.Value = *(FNetMetric **)&this->MetricNameTotalRootObjects;
  local_58._8_4_ = 1;
  local_48 = &local_res8.Value;
  local_58._0_4_ = uVar1 - uVar5;
  local_40 = local_58;
  TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Net::FNetMetric_&&>_>
            ((TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)&local_48);
  local_res8.Value = *(FNetMetric **)&this->MetricNameTotalSubObjects;
  local_58._0_8_ = &local_res8.Value;
  local_40._0_4_ = 1;
  unique0x00008e00 = &local_48;
  local_48 = (FNetMetric **)CONCAT44(local_48._4_4_,uVar5);
  TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Net::FNetMetric_&&>_>
            ((TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)local_58);
  uVar1 = (this->ReplicationSystemInternal).AccumulatedReplicationStats.SampleCount;
  local_48 = (FNetMetric **)0x0;
  if (uVar1 == 0) {
    ppFVar3 = (FNetMetric **)0x0;
    ppFVar4 = (FNetMetric **)0x0;
  }
  else {
    dVar6 = __real_3ff0000000000000 / (double)uVar1;
    local_48 = (FNetMetric **)
               ((double)(this->ReplicationSystemInternal).AccumulatedReplicationStats.
                        PendingObjectCount * dVar6);
    uVar2 = (this->ReplicationSystemInternal).AccumulatedReplicationStats.HugeObjectSendQueue;
    ppFVar3 = (FNetMetric **)
              ((double)(this->ReplicationSystemInternal).AccumulatedReplicationStats.
                       PendingDependentObjectCount * dVar6);
    if ((longlong)uVar2 < 0) {
      ppFVar4 = (FNetMetric **)((double)uVar2 * dVar6);
    }
    else {
      ppFVar4 = (FNetMetric **)((double)(longlong)uVar2 * dVar6);
    }
  }
  local_res8.Value = *(FNetMetric **)&this->MetricNameAvgPendingObjectCount;
  local_58._0_8_ = &local_res8.Value;
  unique0x00008e00 = &local_48;
  local_40._0_4_ = 3;
  TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Net::FNetMetric_&&>_>
            ((TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)local_58);
  local_48 = (FNetMetric **)
             CONCAT44(local_48._4_4_,
                      (this->ReplicationSystemInternal).AccumulatedReplicationStats.
                      MaxPendingObjectCount);
  local_res8.Value = *(FNetMetric **)&this->MetricNameMaxPendingObjectCount;
  local_58._0_8_ = &local_res8.Value;
  local_40._0_4_ = 1;
  unique0x00008e00 = &local_48;
  TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Net::FNetMetric_&&>_>
            ((TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)local_58);
  local_res8.Value = *(FNetMetric **)&this->MetricNameAvgPendingDependentObjectCount;
  local_58._0_8_ = &local_res8.Value;
  unique0x00008e00 = &local_48;
  local_40._0_4_ = 3;
  local_48 = ppFVar3;
  TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Net::FNetMetric_&&>_>
            ((TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)local_58);
  local_48 = (FNetMetric **)
             CONCAT44(local_48._4_4_,
                      (this->ReplicationSystemInternal).AccumulatedReplicationStats.
                      MaxPendingDependentObjectCount);
  local_res8.Value = *(FNetMetric **)&this->MetricNameMaxPendingDependentObjectCount;
  local_58._0_8_ = &local_res8.Value;
  local_40._0_4_ = 1;
  unique0x00008e00 = &local_48;
  TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Net::FNetMetric_&&>_>
            ((TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)local_58);
  local_res8.Value = *(FNetMetric **)&this->MetricNameAvgHugeObjectSendQueue;
  local_58._0_8_ = &local_res8.Value;
  unique0x00008e00 = &local_48;
  local_40._0_4_ = 3;
  local_48 = ppFVar4;
  TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Net::FNetMetric_&&>_>
            ((TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)local_58);
  local_48 = (FNetMetric **)
             CONCAT44(local_48._4_4_,
                      (this->ReplicationSystemInternal).AccumulatedReplicationStats.
                      MaxHugeObjectSendQueue);
  local_res8.Value = *(FNetMetric **)&this->MetricNameMaxHugeObjectSendQueue;
  local_58._0_8_ = &local_res8.Value;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,1);
  unique0x00008e00 = &local_48;
  TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&,UE::Net::FNetMetric_&&>_>
            ((TSet<TTuple<FName,UE::Net::FNetMetric>,TDefaultMapHashableKeyFuncs<FName,UE::Net::FNetMetric,0>,FDefaultSetAllocator>
              *)param_1,&local_res8,(bool *)local_58);
  return;
}

// Init @ 144306590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationSystemImpl::Init
          (FReplicationSystemImpl *this,FReplicationSystemParams *param_1)

{
  FNetRefHandleManager *this_00;
  FDeltaCompressionBaselineInvalidationTracker *this_01;
  FDeltaCompressionBaselineManager *this_02;
  FReplicationConnections *pFVar1;
  FReplicationFiltering *this_03;
  FNetObjectGroups *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TObjectPtr<UReplicationSystem>_u_0 TVar6;
  UObjectReplicationBridge *pUVar7;
  bool bVar8;
  char cVar9;
  ulong64 uVar10;
  FNetTokenDataStore *pFVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UIrisObjectReferencePackageMap *pUVar14;
  FUObjectItem *this_04;
  longlong *plVar15;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  TObjectPtr<UReplicationSystem>_u_0 local_110;
  uint local_108;
  uint local_104;
  TObjectPtr<UReplicationSystem>_u_0 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar10 = IrisDebugHelper::Init();
  this->IrisDebugHelperDummy = uVar10;
  uVar3 = this->ReplicationSystem->Id;
  if ((((param_1->NetTokenStore != (FNetTokenStore *)0x0) ||
       (bVar8 = `UE::Net::Private::FReplicationSystemImpl::Init'::__l2::<lambda_1>::operator()
                          (local_118), bVar8)) &&
      ((pFVar11 = FNetTokenStore::GetDataStore
                            (param_1->NetTokenStore,FStringTokenStore::StringTokenStoreName),
       pFVar11 != (FNetTokenDataStore *)0x0 ||
       (bVar8 = `UE::Net::Private::FReplicationSystemImpl::Init'::__l2::<lambda_2>::operator()
                          (local_118), bVar8)))) &&
     ((pFVar11 = FNetTokenStore::GetDataStore
                           (param_1->NetTokenStore,FNameTokenStore::NameTokenStoreName),
      pFVar11 != (FNetTokenDataStore *)0x0 ||
      (bVar8 = `UE::Net::Private::FReplicationSystemImpl::Init'::__l2::<lambda_3>::operator()
                         (local_118), bVar8)))) {
    this_00 = &(this->ReplicationSystemInternal).NetRefHandleManager;
    local_f0 = (FNetRefHandleManager *)CONCAT44(local_f0._4_4_,param_1->NetObjectListGrowCount);
    local_f8 = (FNetRefHandleManager *)
               CONCAT44(param_1->PreAllocatedMemoryBuffersObjectCount,
                        param_1->InitialNetObjectListCount);
    local_100._4_4_ = param_1->MaxReplicatedObjectCount;
    local_100._0_4_ = uVar3;
    FNetRefHandleManager::Init(this_00,(FInitParams *)&local_100.ObjectPtr);
    TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
    AddRaw<UE::Net::Private::FReplicationSystemImpl>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                *)&(this->ReplicationSystemInternal).NetRefHandleManager.
                   OnMaxInternalNetRefIndexIncreased,(FReplicationSystemImpl *)&local_110.ObjectPtr,
               (pmf_1bd65603)this);
    TMulticastDelegateRegistration<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<UE::Net::Private::FReplicationSystemImpl>
              ((TMulticastDelegateRegistration<void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
                *)&(this->ReplicationSystemInternal).NetRefHandleManager.
                   OnInternalNetRefIndicesFreed,(FReplicationSystemImpl *)&local_110.ObjectPtr,
               (pmf_b6f2ba6a)this);
    uVar4 = this_00->MaxActiveObjectCount;
    uVar5 = (this->ReplicationSystemInternal).NetRefHandleManager.CurrentMaxInternalNetRefIndex;
    if (param_1->bAllowObjectReplication != false) {
      local_110 = (TObjectPtr<UReplicationSystem>_u_0)this_00;
      local_108 = uVar3;
      local_104 = uVar5;
      FDirtyNetObjectTracker::Init
                (&(this->ReplicationSystemInternal).DirtyNetObjectTracker,
                 (FDirtyNetObjectTrackerInitParams *)&local_110.ObjectPtr);
    }
    local_100 = (TObjectPtr<UReplicationSystem>_u_0)this->ReplicationSystem;
    local_e8 = (FReplicationStateStorage *)
               CONCAT44(param_1->MaxDeltaCompressedObjectCount,
                        (this->ReplicationSystemInternal).Connections.ValidConnections.BitCount);
    local_f0 = (FNetRefHandleManager *)CONCAT44(uVar5,uVar4);
    local_f8 = this_00;
    FReplicationStateStorage::Init
              (&(this->ReplicationSystemInternal).ReplicationStateStorage,
               (FReplicationStateStorageInitParams *)&local_100.ObjectPtr);
    local_104 = param_1->MaxNetObjectGroupCount;
    local_110 = (TObjectPtr<UReplicationSystem>_u_0)this_00;
    local_108 = uVar5;
    FNetObjectGroups::Init
              (&(this->ReplicationSystemInternal).Groups,
               (FNetObjectGroupInitParams *)&local_110.ObjectPtr);
    local_110 = (TObjectPtr<UReplicationSystem>_u_0)&this->ReplicationSystemInternal;
    FReplicationStateDescriptorRegistry::Init
              (&(this->ReplicationSystemInternal).ReplicationStateDescriptorRegistry,
               (FReplicationStateDescriptorRegistryInitParams *)&local_110.ObjectPtr);
    TVar6 = (TObjectPtr<UReplicationSystem>_u_0)this->ReplicationSystem;
    local_104 = 0;
    local_108 = uVar5;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (TVar6.DebugPtr != (UReplicationSystem *)0x0)) {
      GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    local_110 = TVar6;
    FWorldLocations::Init
              (&(this->ReplicationSystemInternal).WorldLocations,
               (FWorldLocationsInitParams *)&local_110.ObjectPtr);
    this_01 = &(this->ReplicationSystemInternal).DeltaCompressionBaselineInvalidationTracker;
    this_02 = &(this->ReplicationSystemInternal).DeltaCompressionBaselineManager;
    local_110 = (TObjectPtr<UReplicationSystem>_u_0)this_02;
    local_108 = uVar5;
    FDeltaCompressionBaselineInvalidationTracker::Init
              (this_01,(FDeltaCompressionBaselineInvalidationTrackerInitParams *)
                       &local_110.ObjectPtr);
    local_e8 = &(this->ReplicationSystemInternal).ReplicationStateStorage;
    pFVar1 = &(this->ReplicationSystemInternal).Connections;
    local_d0 = param_1->MaxDeltaCompressedObjectCount;
    local_e0 = this->ReplicationSystem;
    local_100 = (TObjectPtr<UReplicationSystem>_u_0)this_01;
    local_f8 = (FNetRefHandleManager *)pFVar1;
    local_f0 = this_00;
    local_d8 = uVar4;
    local_d4 = uVar5;
    FDeltaCompressionBaselineManager::Init
              (this_02,(FDeltaCompressionBaselineManagerInitParams *)&local_100.ObjectPtr);
    this_03 = &(this->ReplicationSystemInternal).Filtering;
    TVar6 = (TObjectPtr<UReplicationSystem>_u_0)this->ReplicationSystem;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (TVar6.DebugPtr != (UReplicationSystem *)0x0)) {
      GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    pFVar2 = &(this->ReplicationSystemInternal).Groups;
    local_e0 = (UReplicationSystem *)CONCAT44(param_1->MaxNetObjectGroupCount,uVar5);
    local_100 = TVar6;
    local_f8 = this_00;
    local_f0 = (FNetRefHandleManager *)pFVar2;
    local_e8 = (FReplicationStateStorage *)pFVar1;
    FReplicationFiltering::Init(this_03,(FReplicationFilteringInitParams *)&local_100.ObjectPtr);
    InitDefaultFilteringGroups(this);
    local_e0 = (UReplicationSystem *)
               &(this->ReplicationSystemInternal).DeltaCompressionBaselineInvalidationTracker;
    local_d4 = (this->ReplicationSystemInternal).Connections.ValidConnections.BitCount;
    local_100 = (TObjectPtr<UReplicationSystem>_u_0)this_00;
    local_f8 = (FNetRefHandleManager *)this_03;
    local_f0 = (FNetRefHandleManager *)pFVar1;
    local_e8 = (FReplicationStateStorage *)pFVar2;
    local_d8 = uVar5;
    FReplicationConditionals::Init
              (&(this->ReplicationSystemInternal).Conditionals,
               (FReplicationConditionalsInitParams *)&local_100.ObjectPtr);
    TVar6 = (TObjectPtr<UReplicationSystem>_u_0)this->ReplicationSystem;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (TVar6.DebugPtr != (UReplicationSystem *)0x0)) {
      GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    local_e8 = (FReplicationStateStorage *)CONCAT44(local_e8._4_4_,uVar5);
    local_100 = TVar6;
    local_f8 = this_00;
    local_f0 = (FNetRefHandleManager *)pFVar1;
    FReplicationPrioritization::Init
              (&(this->ReplicationSystemInternal).Prioritization,
               (FReplicationPrioritizationInitParams *)&local_100.ObjectPtr);
    pUVar7 = param_1->ReplicationBridge;
    (this->ReplicationSystemInternal).ReplicationBridge = pUVar7;
    (**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,this->ReplicationSystem);
    FObjectReferenceCache::Init
              (&(this->ReplicationSystemInternal).ObjectReferenceCache,this->ReplicationSystem);
    pUVar12 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar13);
    local_c8._8_8_ = pUVar12;
    pUVar14 = (UIrisObjectReferencePackageMap *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar15 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    this_04 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar14->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_04,RootSet);
    local_110 = (TObjectPtr<UReplicationSystem>_u_0)this->ReplicationSystem;
    (this->ReplicationSystemInternal).IrisObjectReferencePackageMap = pUVar14;
    local_108 = CONCAT31(local_108._1_3_,(local_110.DebugPtr)->field_0x50) & 0xffffff01;
    FNetBlobManager::Init
              (&(this->ReplicationSystemInternal).NetBlobManager,
               (FNetBlobManagerInitParams *)&local_110.ObjectPtr);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->ForwardNetRPCCallDelegate,(FReadAccessScope *)&local_100.ObjectPtr);
    if (((*(int *)&(param_1->ForwardNetRPCCallDelegate).field_0x10 == 0) ||
        (plVar15 = *(longlong **)&(param_1->ForwardNetRPCCallDelegate).field_0x8,
        plVar15 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar15 + 0x38))(), cVar9 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_100.ObjectPtr);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_100.ObjectPtr);
      TMulticastDelegateRegistration<void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
      ::Add((TMulticastDelegateRegistration<void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
             *)&(this->ReplicationSystemInternal).ForwardNetRPCCallMulticastDelegate,
            (TDelegate<void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
             *)&local_110.ObjectPtr);
    }
    FNetBitArray::Init(&this->ConnectionsPendingPostTickDispatchSend,
                       (this->ReplicationSystemInternal).Connections.ValidConnections.BitCount);
    local_110 = (TObjectPtr<UReplicationSystem>_u_0)this_00;
    FNetTypeStats::Init(&(this->ReplicationSystemInternal).TypeStats,
                        (FInitParams *)&local_110.ObjectPtr);
    return;
  }
  Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
             ,0x97,L"Cannot initialize ReplicationSystem with invalid NetTokenStore");
  return;
}

// InitDefaultFilteringGroups @ 1443070e0

void __thiscall
UE::Net::Private::FReplicationSystemImpl::InitDefaultFilteringGroups(FReplicationSystemImpl *this)

{
  UReplicationSystem *pUVar1;
  FNetObjectGroupHandle_u_0_s_1 FVar2;
  FReplicationSystemImpl *pFVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  FNetObjectGroupHandle FVar7;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  ulong64 local_38;
  FName local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  pUVar1 = this->ReplicationSystem;
  ::FName::FName(&local_30,L"NotReplicated");
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Iris.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  FNetObjectGroups::CreateGroup
            (&(((pUVar1->Impl).Ptr)->ReplicationSystemInternal).Groups,(FName)&local_38);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  (this->NotReplicatedNetObjectGroupHandle).field0_0x0.Value = local_38;
  if (((uint)local_38 & 0xffffff) != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NotReplicatedNetObjectGroupHandle.IsNotReplicatedNetObjectGroup()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x7e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar1 = this->ReplicationSystem;
  FVar2 = (this->NotReplicatedNetObjectGroupHandle).field0_0x0._s_1;
  bVar6 = UReplicationSystem::IsValidGroup(pUVar1,(FNetObjectGroupHandle)FVar2);
  if (bVar6) {
    pFVar3 = (pUVar1->Impl).Ptr;
    if ((pFVar3->ReplicationSystemInternal).bBlockFilterChanges == false) {
      FReplicationFiltering::AddExclusionFilterGroup
                (&(pFVar3->ReplicationSystemInternal).Filtering,(FNetObjectGroupHandle)FVar2);
    }
    else {
      local_res8[0] = 0;
      `UReplicationSystem::AddExclusionFilterGroup'::__l8::<lambda_1>::operator()(local_res8);
    }
  }
  else {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4132542164125088003>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x6fd,"IsValidGroup(GroupHandle)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar7 = UReplicationSystem::GetOrCreateSubObjectFilter(this->ReplicationSystem,(FName)local_28);
  uVar4 = *(ulong64 *)FVar7.field0_0x0;
  (this->NetGroupOwnerNetObjectGroupHandle).field0_0x0.Value = uVar4;
  if (((uint)uVar4 & 0xffffff) != 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NetGroupOwnerNetObjectGroupHandle.IsNetGroupOwnerNetObjectGroup()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x83,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar7 = UReplicationSystem::GetOrCreateSubObjectFilter(this->ReplicationSystem,(FName)local_20);
  uVar4 = *(ulong64 *)FVar7.field0_0x0;
  (this->NetGroupReplayNetObjectGroupHandle).field0_0x0.Value = uVar4;
  if (((uint)uVar4 & 0xffffff) != 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NetGroupReplayNetObjectGroupHandle.IsNetGroupReplayNetObjectGroup()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
                       ,0x86,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// OnInternalNetRefIndicesFreed @ 144309f00

void __thiscall
UE::Net::Private::FReplicationSystemImpl::OnInternalNetRefIndicesFreed
          (FReplicationSystemImpl *this,TArrayView<unsigned_int_const_,int> *param_1)

{
  FReplicationFiltering::OnInternalNetRefIndicesFreed
            (&(this->ReplicationSystemInternal).Filtering,param_1);
  FReplicationConditionals::OnInternalNetRefIndicesFreed
            (&(this->ReplicationSystemInternal).Conditionals,param_1);
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 144309f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::Private::FReplicationSystemImpl::OnMaxInternalNetRefIndexIncreased
          (FReplicationSystemImpl *this,uint param_1)

{
  FReplicationStateStorage::OnMaxInternalNetRefIndexIncreased
            (&(this->ReplicationSystemInternal).ReplicationStateStorage,param_1);
  FNetObjectGroups::OnMaxInternalNetRefIndexIncreased
            (&(this->ReplicationSystemInternal).Groups,param_1);
  FNetBitArray::SetNumBits
            (&(this->ReplicationSystemInternal).WorldLocations.ValidInfoIndexes,param_1);
  FNetBitArray::SetNumBits
            (&(this->ReplicationSystemInternal).WorldLocations.ObjectsWithDirtyInfo,param_1);
  FNetBitArray::SetNumBits
            (&(this->ReplicationSystemInternal).WorldLocations.
              ObjectsRequiringFrequentWorldLocationUpdate,param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&(this->ReplicationSystemInternal).WorldLocations.StorageIndexes,param_1,Default);
  FDeltaCompressionBaselineInvalidationTracker::OnMaxInternalNetRefIndexIncreased
            (&(this->ReplicationSystemInternal).DeltaCompressionBaselineInvalidationTracker,param_1)
  ;
  FDeltaCompressionBaselineManager::OnMaxInternalNetRefIndexIncreased
            (&(this->ReplicationSystemInternal).DeltaCompressionBaselineManager,param_1);
  FReplicationFiltering::OnMaxInternalNetRefIndexIncreased
            (&(this->ReplicationSystemInternal).Filtering,param_1);
  FReplicationConditionals::OnMaxInternalNetRefIndexIncreased
            (&(this->ReplicationSystemInternal).Conditionals,param_1);
  FReplicationPrioritization::OnMaxInternalNetRefIndexIncreased
            (&(this->ReplicationSystemInternal).Prioritization,param_1);
  return;
}

// ProcessNetObjectAttachmentSendQueue @ 14430c400

void __thiscall
UE::Net::Private::FReplicationSystemImpl::ProcessNetObjectAttachmentSendQueue
          (FReplicationSystemImpl *this,EProcessMode param_1)

{
  uint uVar1;
  
  if (!`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ProcessNetObjectAttachmentSendQueue(UE::Net::Private::FNetBlobManager::EProcessMode)___ptr64'
       ::__l2::__CsvProfilerStat583) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_ProcessNetObjectAttachmentSendQueue",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ProcessNetObjectAttachmentSendQueue(UE::Net::Private::FNetBlobManager::EProcessMode)___ptr64'
    ::__l2::__CsvProfilerStat583 = true;
  }
  uVar1 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_ProcessNetObjectAttachmentSendQueue",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_ProcessNetObjectAttachmentSendQueue");
  if (CpuChannel->Enabled < 0) {
    FNetBlobManager::ProcessNetObjectAttachmentSendQueue
              (&(this->ReplicationSystemInternal).NetBlobManager,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ProcessNetObjectAttachmentSendQueue(UE::Net::Private::FNetBlobManager::EProcessMode)___ptr64'
                ::__l2::__CpuProfilerEventSpecId583,
               "ReplicationSystem_ProcessNetObjectAttachmentSendQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x247);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ProcessNetObjectAttachmentSendQueue(UE::Net::Private::FNetBlobManager::EProcessMode)___ptr64'
               ::__l2::__CpuProfilerEventSpecId583);
    FNetBlobManager::ProcessNetObjectAttachmentSendQueue
              (&(this->ReplicationSystemInternal).NetBlobManager,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_ProcessNetObjectAttachmentSendQueue",uVar1);
  return;
}

// QuantizeDirtyStateData @ 14430cdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(FReplicationSystemImpl *this)

{
  FChangeMaskCache *pFVar1;
  code *pcVar2;
  FNetRefHandleManager *pFVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FNameEntryId FVar8;
  undefined8 *puVar9;
  uint uVar10;
  FNetStatsContext *pFVar11;
  uint uVar12;
  int iVar13;
  FNetStatsContext *pFVar14;
  FNetStatsContext *pFVar15;
  bool bVar16;
  undefined1 auStackY_488 [32];
  uint local_454;
  FLLMScope local_450;
  uint local_44c;
  uint local_448;
  FName local_444;
  uint local_43c;
  FNetRefHandleManager *local_430;
  FReplicationSystemImpl *local_428;
  FMemScope local_420;
  FNetBitArrayView local_418;
  FNetBitStreamWriter local_408;
  FInternalNetSerializationContext local_3e8;
  FNetRefHandle_u_0 local_3a8;
  undefined8 local_3a0;
  undefined8 local_390 [95];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FInternalNetSerializationContext *local_78;
  undefined8 uStack_70;
  FNetStatsContext *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_428 = this;
  if (!`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
       ::__l2::__CsvProfilerStat512) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_QuantizeDirtyStateData",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
    ::__l2::__CsvProfilerStat512 = true;
  }
  uVar12 = _GCsvCategory_Iris.Index;
  local_43c = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_QuantizeDirtyStateData",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_QuantizeDirtyStateData");
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId512,"ReplicationSystem_QuantizeDirtyStateData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x200);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId512);
  }
  FLLMScope::FLLMScope(&local_450,LLMTagDeclaration_IrisState.UniqueName,false,None,Default,true);
  local_444 = LLMTagDeclaration_IrisState.UniqueName;
  FMemScope::FMemScope(&local_420,&local_444,true);
  pFVar1 = &(this->ReplicationSystemInternal).ChangeMaskCache;
  pFVar11 = (FNetStatsContext *)0x0;
  uVar5 = 0;
  iVar13 = (this->ReplicationSystemInternal).ChangeMaskCache.Indices.ArrayMax;
  (this->ReplicationSystemInternal).ChangeMaskCache.Indices.ArrayNum = 0;
  local_430 = &(this->ReplicationSystemInternal).NetRefHandleManager;
  if (iVar13 < 0x800) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_>
              (8,4,0x800,(ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> *)pFVar1,0
               ,&(this->ReplicationSystemInternal).ChangeMaskCache.Indices.ArrayMax);
  }
  iVar13 = (this->ReplicationSystemInternal).ChangeMaskCache.Storage.ArrayMax;
  (this->ReplicationSystemInternal).ChangeMaskCache.Storage.ArrayNum = 0;
  if (iVar13 < 0x4098) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,0x4098,
               &(this->ReplicationSystemInternal).ChangeMaskCache.Storage.AllocatorInstance,0,
               &(this->ReplicationSystemInternal).ChangeMaskCache.Storage.ArrayMax);
  }
  FNetBitStreamWriter::FNetBitStreamWriter(&local_408);
  lVar7 = 0x20;
  local_3a8.Value = 0;
  puVar9 = local_390;
  local_3a0 = 0;
  do {
    *puVar9 = 0;
    puVar9 = puVar9 + 3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_48 = local_48 & 0xfffffffc;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (FInternalNetSerializationContext *)0x0;
  uStack_70 = 0;
  local_68 = (FNetStatsContext *)0x0;
  uStack_60 = 0;
  local_98 = 0;
  local_90 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0xffffffff;
  FInternalNetSerializationContext::FInternalNetSerializationContext
            (&local_3e8,this->ReplicationSystem);
  local_78 = &local_3e8;
  if (((this->ReplicationSystemInternal).TypeStats.bIsInParallelPhase != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsInParallelPhase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Stats\\NetStats.h"
                         ,0xc6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_68 = pFVar11;
  if ((this->ReplicationSystemInternal).TypeStats.bIsEnabled != false) {
    local_68 = (this->ReplicationSystemInternal).TypeStats.ParentStatsContext;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_418,
             (uint *)(this->ReplicationSystemInternal).NetRefHandleManager.DirtyObjectsToQuantize.
                     Storage.AllocatorInstance.Data,
             (this->ReplicationSystemInternal).NetRefHandleManager.DirtyObjectsToQuantize.BitCount);
  local_44c = local_418.WordCount;
  uVar10 = 0xffffffff >> (-(char)local_418.BitCount & 0x1fU);
  FVar8.Value = local_418.WordCount - 1;
  local_444.ComparisonIndex.Value = FVar8.Value;
  local_454 = 0;
  pFVar14 = pFVar11;
  pFVar15 = pFVar11;
  local_448 = uVar10;
  if (local_418.WordCount != 0) {
    do {
      pFVar3 = local_430;
      iVar13 = (int)pFVar11;
      uVar12 = 0xffffffff;
      if ((uint)pFVar15 == FVar8.Value) {
        uVar12 = uVar10;
      }
      uVar12 = uVar12 & *local_418.Storage;
      uVar6 = (uint)pFVar15;
      if (uVar12 != 0) {
        do {
          if ((uVar12 & 1) != 0) {
            uVar5 = FReplicationInstanceOperationsInternal::QuantizeObjectStateData
                              (&local_408,pFVar1,pFVar3,(FNetSerializationContext *)&local_3a8._s_0,
                               (uint)pFVar11);
            pFVar14 = (FNetStatsContext *)(ulonglong)((int)pFVar14 + uVar5);
          }
          pFVar11 = (FNetStatsContext *)(ulonglong)((uint)pFVar11 + 1);
          uVar12 = uVar12 >> 1;
        } while (uVar12 != 0);
        local_418.WordCount = local_44c;
        uVar10 = local_448;
        uVar6 = local_454;
        FVar8.Value = local_444.ComparisonIndex.Value;
      }
      uVar5 = (uint)pFVar14;
      local_454 = uVar6 + 1;
      pFVar11 = (FNetStatsContext *)(ulonglong)(iVar13 + 0x20);
      local_418.Storage = local_418.Storage + 1;
      pFVar15 = (FNetStatsContext *)(ulonglong)local_454;
      uVar12 = local_43c;
    } while (local_454 < local_418.WordCount);
  }
  uVar10 = local_428->ReplicationSystem->Id;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
       ::__l10::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
                           ::__l10::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
     ::__l10::_thread_safe_static_guard_0__ == -1)) {
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
    ::__l10::NetTraceNameId_547 =
         CreatePersistentNetDebugName(L"ReplicationSystem.QuantizedObjectCount",0x26);
    _Init_thread_footer(&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
                         ::__l10::_thread_safe_static_guard_0__);
  }
  uVar6 = FNetTrace::TraceName
                    (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::QuantizeDirtyStateData(void)___ptr64'
                     ::__l10::NetTraceNameId_547);
  FNetTrace::TraceFrameStatsCounter(uVar10,uVar6,uVar5);
  FNetBitStreamWriter::~FNetBitStreamWriter(&local_408);
  FMemScope::~FMemScope(&local_420);
  FLLMScope::~FLLMScope(&local_450);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_QuantizeDirtyStateData",uVar12);
  return;
}

// ResetObjectStateDirtiness @ 14430f0e0

void __thiscall
UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness(FReplicationSystemImpl *this)

{
  FNetRefHandleManager *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  FNetBitArrayView local_58;
  FNetBitArrayView local_48;
  
  if (!`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness(void)___ptr64'
       ::__l2::__CsvProfilerStat552) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_ResetObjectStateDirtiness",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness(void)___ptr64'
    ::__l2::__CsvProfilerStat552 = true;
  }
  uVar3 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_ResetObjectStateDirtiness",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_ResetObjectStateDirtiness");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId552,"ReplicationSystem_ResetObjectStateDirtiness",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x228);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::ResetObjectStateDirtiness(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId552);
  }
  pFVar1 = &(this->ReplicationSystemInternal).NetRefHandleManager;
  FNetBitArrayView::FNetBitArrayView
            (&local_48,
             (uint *)(this->ReplicationSystemInternal).NetRefHandleManager.
                     PolledObjectsInternalIndices.Storage.AllocatorInstance.Data,
             (this->ReplicationSystemInternal).NetRefHandleManager.PolledObjectsInternalIndices.
             BitCount);
  FNetBitArrayView::FNetBitArrayView
            (&local_58,
             (uint *)(this->ReplicationSystemInternal).NetRefHandleManager.DirtyObjectsToQuantize.
                     Storage.AllocatorInstance.Data,
             (this->ReplicationSystemInternal).NetRefHandleManager.DirtyObjectsToQuantize.BitCount);
  uVar8 = local_58.WordCount;
  uVar9 = 0;
  uVar5 = 0;
  if (ReplicationSystemCVars::bOnlyResetDirtinessForQuantizedObjects == false) {
    puVar10 = local_48.Storage;
    if (local_48.WordCount != 0) {
      do {
        uVar8 = 0xffffffff;
        if (uVar5 == local_48.WordCount - 1) {
          uVar8 = 0xffffffff >> (-(char)local_48.BitCount & 0x1fU);
        }
        uVar7 = uVar9;
        for (uVar8 = uVar8 & *puVar10; uVar8 != 0; uVar8 = uVar8 >> 1) {
          if ((uVar8 & 1) != 0) {
            FReplicationInstanceOperationsInternal::ResetObjectStateDirtiness(pFVar1,uVar7);
          }
          uVar7 = uVar7 + 1;
        }
        uVar5 = uVar5 + 1;
        uVar9 = uVar9 + 0x20;
        puVar10 = puVar10 + 1;
      } while (uVar5 < local_48.WordCount);
    }
  }
  else {
    puVar10 = local_58.Storage;
    if (local_58.WordCount != 0) {
      do {
        uVar7 = 0xffffffff;
        if (uVar5 == uVar8 - 1) {
          uVar7 = 0xffffffff >> (-(char)local_58.BitCount & 0x1fU);
        }
        uVar6 = uVar9;
        for (uVar7 = uVar7 & *puVar10; uVar7 != 0; uVar7 = uVar7 >> 1) {
          if ((uVar7 & 1) != 0) {
            FReplicationInstanceOperationsInternal::ResetObjectStateDirtiness(pFVar1,uVar6);
          }
          uVar6 = uVar6 + 1;
        }
        uVar5 = uVar5 + 1;
        uVar9 = uVar9 + 0x20;
        puVar10 = puVar10 + 1;
      } while (uVar5 < uVar8);
    }
  }
  memset(local_58.Storage,0,(ulonglong)local_58.WordCount << 2);
  if (((this->ReplicationSystemInternal).DirtyNetObjectTracker.NetRefHandleManager ==
       (FNetRefHandleManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FDirtyNetObjectTracker::ReconcilePolledList
            (&(this->ReplicationSystemInternal).DirtyNetObjectTracker,&local_48);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_ResetObjectStateDirtiness",uVar3);
  return;
}

// UpdateDataStreams @ 144316fd0

void __thiscall
UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams
          (FReplicationSystemImpl *this,FUpdateParameters *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FReplicationConnection *pFVar4;
  UObject *pUVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (!`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams(UDataStream::FUpdateParameters&___ptr64)___ptr64'
       ::__l2::__CsvProfilerStat741) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_UpdateDataStreams",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams(UDataStream::FUpdateParameters&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat741 = true;
  }
  uVar3 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_UpdateDataStreams",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_UpdateDataStreams");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams(UDataStream::FUpdateParameters&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId741,"ReplicationSystem_UpdateDataStreams",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x2e5);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateDataStreams(UDataStream::FUpdateParameters&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId741);
  }
  uVar1 = (this->ReplicationSystemInternal).Connections.ValidConnections.BitCount;
  pFVar8 = (this->ReplicationSystemInternal).Connections.ValidConnections.Storage.AllocatorInstance.
           Data;
  uVar10 = 0;
  uVar2 = (this->ReplicationSystemInternal).Connections.ValidConnections.Storage.ArrayNum;
  uVar9 = 0;
  if (uVar2 != 0) {
    do {
      uVar7 = 0xffffffff;
      if (uVar9 == uVar2 - 1) {
        uVar7 = 0xffffffff >> (-(char)uVar1 & 0x1fU);
      }
      uVar6 = uVar10;
      for (uVar7 = uVar7 & *(uint *)pFVar8; uVar7 != 0; uVar7 = uVar7 >> 1) {
        if ((uVar7 & 1) != 0) {
          pFVar4 = FReplicationConnections::GetConnection
                             (&(this->ReplicationSystemInternal).Connections,uVar6);
          pUVar5 = FWeakObjectPtr::Get(&(pFVar4->DataStreamManager).WeakPtr);
          if (pUVar5 != (UObject *)0x0) {
            pUVar5 = FWeakObjectPtr::Get(&(pFVar4->DataStreamManager).WeakPtr);
            (**(code **)(*(longlong *)pUVar5 + 0x2c0))(pUVar5,param_1);
          }
        }
        uVar6 = uVar6 + 1;
      }
      uVar9 = uVar9 + 1;
      pFVar8 = pFVar8 + 4;
      uVar10 = uVar10 + 0x20;
    } while (uVar9 < uVar2);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_UpdateDataStreams",uVar3);
  return;
}

// UpdateObjectScopes @ 144317400

void __thiscall
UE::Net::Private::FReplicationSystemImpl::UpdateObjectScopes(FReplicationSystemImpl *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FReplicationConnection *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  bool bVar14;
  FLLMScope local_res10 [2];
  uint local_res18;
  uint local_res20;
  FName local_70;
  FMemScope local_68;
  FNetBitArrayView local_60 [2];
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
  local_70 = LLMTagDeclaration_Iris.UniqueName;
  FMemScope::FMemScope(&local_68,&local_70,true);
  if (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateObjectScopes(void)___ptr64'
      ::__l3::__CsvProfilerStat442 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_UpdateConnectionsScope",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateObjectScopes(void)___ptr64'
    ::__l3::__CsvProfilerStat442 = true;
  }
  uVar4 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_UpdateConnectionsScope",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_UpdateConnectionsScope");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateObjectScopes(void)___ptr64'
                ::__l3::__CpuProfilerEventSpecId442,"ReplicationSystem_UpdateConnectionsScope",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x1ba);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdateObjectScopes(void)___ptr64'
               ::__l3::__CpuProfilerEventSpecId442);
  }
  uVar6 = (this->ReplicationSystemInternal).Connections.ValidConnections.Storage.ArrayNum;
  uVar13 = 0;
  pFVar12 = (this->ReplicationSystemInternal).Connections.ValidConnections.Storage.AllocatorInstance
            .Data;
  uVar8 = 0xffffffff >>
          (-(char)(this->ReplicationSystemInternal).Connections.ValidConnections.BitCount & 0x1fU);
  uVar9 = 0;
  uVar1 = uVar6 - 1;
  local_res18 = uVar6;
  local_res20 = uVar8;
  if (uVar6 != 0) {
    do {
      uVar11 = 0xffffffff;
      if (uVar9 == uVar1) {
        uVar11 = uVar8;
      }
      uVar10 = uVar13;
      for (uVar11 = uVar11 & *(uint *)pFVar12; uVar11 != 0; uVar11 = uVar11 >> 1) {
        if ((uVar11 & 1) != 0) {
          pFVar7 = FReplicationConnections::GetConnection
                             (&(this->ReplicationSystemInternal).Connections,uVar10);
          uVar6 = 0;
          if ((int)uVar10 < (this->ReplicationSystemInternal).Filtering.ConnectionInfos.ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->ReplicationSystemInternal).Filtering.ConnectionInfos.AllocatorInstance.
                   Data;
          FNetBitArrayView::FNetBitArrayView
                    (local_60,*(uint **)(pFVar2 + (longlong)(int)uVar10 * 0x160 + 0x60),
                     *(uint *)(pFVar2 + (longlong)(int)uVar10 * 0x160 + 0x70));
          FReplicationWriter::UpdateScope(pFVar7->ReplicationWriter,local_60);
        }
        uVar10 = uVar10 + 1;
        uVar6 = local_res18;
        uVar8 = local_res20;
      }
      uVar13 = uVar13 + 0x20;
      uVar9 = uVar9 + 1;
      pFVar12 = pFVar12 + 4;
    } while (uVar9 < uVar6);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_UpdateConnectionsScope",uVar4);
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// UpdatePrioritization @ 144317860

void __thiscall
UE::Net::Private::FReplicationSystemImpl::UpdatePrioritization
          (FReplicationSystemImpl *this,FNetBitArrayView *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_78 [12];
  uint local_6c;
  FNetBitArrayView local_68;
  FNetBitArrayView local_58;
  ForAnyElementType local_48;
  int local_40 [6];
  
  if (!`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdatePrioritization(UE::Net::FNetBitArrayView_const&___ptr64)___ptr64'
       ::__l2::__CsvProfilerStat471) {
    FCsvProfilerTrace::OutputInlineStat
              ("ReplicationSystem_UpdatePrioritization",_GCsvCategory_Iris.Index);
    `public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdatePrioritization(UE::Net::FNetBitArrayView_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat471 = true;
  }
  uVar2 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("ReplicationSystem_UpdatePrioritization",_GCsvCategory_Iris.Index,
             "CSV_ReplicationSystem_UpdatePrioritization");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdatePrioritization(UE::Net::FNetBitArrayView_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId471,"ReplicationSystem_UpdatePrioritization",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystem.cpp"
               ,0x1d7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::UpdatePrioritization(UE::Net::FNetBitArrayView_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId471);
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Iris.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  FNetBitArrayView::FNetBitArrayView
            (&local_68,
             (uint *)(this->ReplicationSystemInternal).NetRefHandleManager.
                     RelevantObjectsInternalIndices.Storage.AllocatorInstance.Data,
             (this->ReplicationSystemInternal).NetRefHandleManager.RelevantObjectsInternalIndices.
             BitCount);
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[1] = 0;
  local_40[2] = local_68.BitCount;
  local_40[0] = 0;
  uVar5 = local_68.BitCount + 0x1f >> 5;
  if (local_68.BitCount + 0x1f >> 5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5,&local_48,0,local_40 + 1);
  }
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar5,&local_48,local_40,local_40 + 1);
  local_6c = local_40[2];
  local_78._8_4_ = local_40[2] + 0x1fU >> 5;
  local_78._0_8_ = (FScriptContainerElement *)&local_6c;
  if (local_40[2] != 0) {
    local_78._0_8_ = local_48.Data;
  }
  if (((this->ReplicationSystemInternal).DirtyNetObjectTracker.NetRefHandleManager ==
       (FNetRefHandleManager *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FNetBitArrayView::FNetBitArrayView
            (&local_58,
             (uint *)(this->ReplicationSystemInternal).DirtyNetObjectTracker.
                     AccumulatedDirtyNetObjects.Storage.AllocatorInstance.Data,
             (this->ReplicationSystemInternal).DirtyNetObjectTracker.AccumulatedDirtyNetObjects.
             BitCount);
  if ((((uint *)local_78._0_8_ == local_68.Storage) || (local_6c != local_68.BitCount)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (First).GetData() && (*this).GetNumBits() == (First).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x644,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((((uint *)local_78._0_8_ == local_58.Storage) || (local_6c != local_58.BitCount)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Second).GetData() && (*this).GetNumBits() == (Second).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x645,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_78._8_4_ != 0) {
    uVar6 = (ulonglong)(uint)local_78._8_4_;
    pFVar4 = (FScriptContainerElement *)local_78._0_8_;
    do {
      uVar5 = *local_58.Storage;
      local_58.Storage = (uint *)((longlong)local_58.Storage + 4);
      *(uint *)pFVar4 = *local_68.Storage & uVar5;
      local_68.Storage = (uint *)((longlong)local_68.Storage + 4);
      uVar6 = uVar6 - 1;
      pFVar4 = pFVar4 + 4;
    } while (uVar6 != 0);
  }
  FReplicationPrioritization::Prioritize
            (&(this->ReplicationSystemInternal).Prioritization,param_1,(FNetBitArrayView *)local_78)
  ;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("ReplicationSystem_UpdatePrioritization",uVar2);
  return;
}

// operator() @ 1504b96c0

bool __thiscall
`UE::Net::Private::FReplicationSystemImpl::Init'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125089647>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125089647>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::Init(UReplicationSystem::FReplicationSystemParams_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb140

bool __thiscall
`UE::Net::Private::FReplicationSystemImpl::Init'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125089646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125089646>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::Init(UReplicationSystem::FReplicationSystemParams_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bb850

bool __thiscall
`UE::Net::Private::FReplicationSystemImpl::Init'::__l2::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4132542164125089645>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4132542164125089645>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Net::Private::FReplicationSystemImpl::Init(UReplicationSystem::FReplicationSystemParams_const&___ptr64)___ptr64'::`2'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

