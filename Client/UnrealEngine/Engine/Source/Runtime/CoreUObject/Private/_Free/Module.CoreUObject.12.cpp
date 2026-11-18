// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 261

// `dynamic_initializer_for_'AbandonMultiServerCommitDelegate'' @ 140f28cb0

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__AbandonMultiServerCommitDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__AbandonMultiServerCommitDelegate__);
  return;
}

// `dynamic_initializer_for_'AbortRemoteMultiServerCommitDelegate'' @ 140f28cd0

void __cdecl
UE::RemoteExecutor::_dynamic_initializer_for__AbortRemoteMultiServerCommitDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__AbortRemoteMultiServerCommitDelegate__);
  return;
}

// `dynamic_initializer_for_'BeginMultiServerCommitDelegate'' @ 140f28cf0

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__BeginMultiServerCommitDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__BeginMultiServerCommitDelegate__);
  return;
}

// `dynamic_initializer_for_'CVarAllowParallelReferenceCollection'' @ 140f28d10

void __cdecl _dynamic_initializer_for__CVarAllowParallelReferenceCollection__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowParallelReferenceCollection,L"ref.AllowParallelCollection",
             &GAllowParallelReferenceCollection,L"Used to control parallel reference collection.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarAllowParallelReferenceCollection__);
  return;
}

// `dynamic_initializer_for_'CVarInitRemoteServerIdBeforeUObjectInit'' @ 140f28d60

void __cdecl _dynamic_initializer_for__CVarInitRemoteServerIdBeforeUObjectInit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarInitRemoteServerIdBeforeUObjectInit,L"ro.InitRemoteServerIdBeforeUObjectInit",
             &GInitRemoteServerIdBeforeUObjectInit,
             L"Initializes remote server id before UObject system is initialized",0);
  atexit(_dynamic_atexit_destructor_for__CVarInitRemoteServerIdBeforeUObjectInit__);
  return;
}

// `dynamic_initializer_for_'CVarMaxReferenceChainsToPrint'' @ 140f28db0

void __cdecl _dynamic_initializer_for__CVarMaxReferenceChainsToPrint__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxReferenceChainsToPrint,L"gc.MaxReferenceChainsToPrint",local_res8,
             L"Sets the limit of how many reference chains ReferenceChainSearch utility will print",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxReferenceChainsToPrint__);
  return;
}

// `dynamic_initializer_for_'CVarRemoteExecutorForcedNetPumpIterationCount'' @ 140f28e00

void __cdecl _dynamic_initializer_for__CVarRemoteExecutorForcedNetPumpIterationCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRemoteExecutorForcedNetPumpIterationCount,
             L"remoteexecutor.ForcedNetPumpIterationCount",
             &GRemoteExecutorForcedNetPumpIterationCount,
             L"How many execution pumps can we perform before we force pump the network? 0 = disabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRemoteExecutorForcedNetPumpIterationCount__);
  return;
}

// `dynamic_initializer_for_'CVarRemoteExecutorNewNetPumpBehavior'' @ 140f28e50

void __cdecl _dynamic_initializer_for__CVarRemoteExecutorNewNetPumpBehavior__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRemoteExecutorNewNetPumpBehavior,L"remoteexecutor.NewNetPumpBehavior",
             &GRemoteExecutorNewNetPumpBehavior,L"Enable the \'new\' net pump behavior",0);
  atexit(_dynamic_atexit_destructor_for__CVarRemoteExecutorNewNetPumpBehavior__);
  return;
}

// `dynamic_initializer_for_'CVarRemoteIdToStringVerbosity'' @ 140f28ea0

void __cdecl _dynamic_initializer_for__CVarRemoteIdToStringVerbosity__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRemoteIdToStringVerbosity,L"ro.IdToStringVerbosity",&GRemoteIdToStringVerbosity,
             L"Sets the verbosity FRemoteObjectId::ToString() prints the id to log with (1: id only, 2: id + name, 3: id + pathname, 4: id + fullname, 5: id + fullname + attributes"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarRemoteIdToStringVerbosity__);
  return;
}

// `dynamic_initializer_for_'CVarRemoteObjectsMigrateFullHierarchy'' @ 140f28fe0

void __cdecl _dynamic_initializer_for__CVarRemoteObjectsMigrateFullHierarchy__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRemoteObjectsMigrateFullHierarchy,L"ro.MigrateFullHierarchy",
             &GRemoteObjectsMigrateFullHierarchy,
             L"Whether remote objects that are default subobjects should be always migrated with their parent objects"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRemoteObjectsMigrateFullHierarchy__);
  return;
}

// `dynamic_initializer_for_'CVarRemoveMissingMigratedComponents'' @ 140f29030

void __cdecl
UE::RemoteObject::Transfer::_dynamic_initializer_for__CVarRemoveMissingMigratedComponents__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRemoveMissingMigratedComponents,L"DSTM.RemoveMissingMigratedComponents",local_res8
             ,
             L"When we receive less SubObjects (Components) than we expect, remove the extras that we have locally (assume they were removed on purpose)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRemoveMissingMigratedComponents__);
  return;
}

// `dynamic_initializer_for_'CVarResetBorrowedObjects'' @ 140f29080

void __cdecl _dynamic_initializer_for__CVarResetBorrowedObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResetBorrowedObjects,L"ro.ResetBorrowedObjects",
             &GRemoteObjectsMigrateFullHierarchy,
             L"Whether remote objects that were borrowed should be reset upon returning to their owner server instead of being reconstructed"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResetBorrowedObjects__);
  return;
}

// `dynamic_initializer_for_'CVarUseImmutableArchetypes'' @ 140f290d0

void __cdecl _dynamic_initializer_for__CVarUseImmutableArchetypes__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseImmutableArchetypes,L"ro.UseImmutableArchetypes",&GUseImmutableArchetypes,
             L"Whether to use immutable archetypes when serializing remote object data",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseImmutableArchetypes__);
  return;
}

// `dynamic_initializer_for_'CVar_FixupStandaloneFlags'' @ 140f29120

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__CVar_FixupStandaloneFlags__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_FixupStandaloneFlags,L"save.FixupStandaloneFlags",&GFixupStandaloneFlags,
             L"If non-zero, when the UAsset of a package is missing RF_Standalone, the flag is added. If zero, the flags are not changed and the save fails."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_FixupStandaloneFlags__);
  return;
}

// `dynamic_initializer_for_'CVar_MemoryMappedBulkDataAlignment'' @ 140f29170

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVar_MemoryMappedBulkDataAlignment__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_MemoryMappedBulkDataAlignment,L"cook.MemoryMappedBulkDataAlignment",
             &GMemoryMappedBulkDataAlignment,
             L"0 - Target platform memory mapping alignment is respected, might result in big zero-padding1 - No special alignment required, 1-byte alignment used (no padding, default)Any other non-zero value - overrides the memory mapped data alignment, implies padding"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_MemoryMappedBulkDataAlignment__);
  return;
}

// `dynamic_initializer_for_'CVar_UseSerializeToFindWeakReferencers'' @ 140f291c0

void __cdecl UE::Private::_dynamic_initializer_for__CVar_UseSerializeToFindWeakReferencers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_UseSerializeToFindWeakReferencers,L"UObject.UseSerializeToFindWeakReferencers",
             &GUseSerializeToFindWeakReferencers,
             L"If true use Serialize routines to find objects that are referencing only via weak references - set to false to only use GC schema for reference finding"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_UseSerializeToFindWeakReferencers__);
  return;
}

// `dynamic_initializer_for_'EndMultiServerCommitDelegate'' @ 140f29210

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__EndMultiServerCommitDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__EndMultiServerCommitDelegate__);
  return;
}

// `dynamic_initializer_for_'FetchNextDeferredRPCDelegate'' @ 140f29230

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__FetchNextDeferredRPCDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__FetchNextDeferredRPCDelegate__);
  return;
}

// `dynamic_initializer_for_'GRemoteExecutor'' @ 140f29250

void __cdecl _dynamic_initializer_for__GRemoteExecutor__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRemoteExecutor__);
  return;
}

// `dynamic_initializer_for_'GTransferQueue'' @ 140f29270

void __cdecl UE::RemoteObject::Transfer::_dynamic_initializer_for__GTransferQueue__(void)

{
  atexit(_dynamic_atexit_destructor_for__GTransferQueue__);
  return;
}

// `dynamic_initializer_for_'LogReferenceChain'' @ 140f29290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogReferenceChain__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogReferenceChain,L"LogReferenceChain",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogReferenceChain__);
  return;
}

// `dynamic_initializer_for_'LogRemoteExec'' @ 140f292d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRemoteExec__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRemoteExec,L"LogRemoteExec",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogRemoteExec__);
  return;
}

// `dynamic_initializer_for_'LogRemoteObject'' @ 140f29310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRemoteObject__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRemoteObject,L"LogRemoteObject",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogRemoteObject__);
  return;
}

// `dynamic_initializer_for_'LogRemoteSerialization'' @ 140f29350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRemoteSerialization__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRemoteSerialization,L"LogRemoteSerialization",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRemoteSerialization__);
  return;
}

// `dynamic_initializer_for_'OnObjectDataReceivedDelegate'' @ 140f29390

void __cdecl
UE::RemoteObject::Transfer::_dynamic_initializer_for__OnObjectDataReceivedDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnObjectDataReceivedDelegate__);
  return;
}

// `dynamic_initializer_for_'OnObjectDataSentDelegate'' @ 140f293b0

void __cdecl UE::RemoteObject::Transfer::_dynamic_initializer_for__OnObjectDataSentDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnObjectDataSentDelegate__);
  return;
}

// `dynamic_initializer_for_'OnObjectTouchedDelegate'' @ 140f293d0

void __cdecl UE::RemoteObject::Transfer::_dynamic_initializer_for__OnObjectTouchedDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnObjectTouchedDelegate__);
  return;
}

// `dynamic_initializer_for_'OnObjectsReceivedDelegate'' @ 140f293f0

void __cdecl UE::RemoteObject::Transfer::_dynamic_initializer_for__OnObjectsReceivedDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnObjectsReceivedDelegate__);
  return;
}

// `dynamic_initializer_for_'OnObjectsSentDelegate'' @ 140f29410

void __cdecl UE::RemoteObject::Transfer::_dynamic_initializer_for__OnObjectsSentDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnObjectsSentDelegate__);
  return;
}

// `dynamic_initializer_for_'OnRegionBeginDelegate'' @ 140f29430

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__OnRegionBeginDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnRegionBeginDelegate__);
  return;
}

// `dynamic_initializer_for_'OnRegionEndDelegate'' @ 140f29450

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__OnRegionEndDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnRegionEndDelegate__);
  return;
}

// `dynamic_initializer_for_'OnTransactionAbortedDelegate'' @ 140f29470

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__OnTransactionAbortedDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnTransactionAbortedDelegate__);
  return;
}

// `dynamic_initializer_for_'OnTransactionCompletedDelegate'' @ 140f29490

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__OnTransactionCompletedDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnTransactionCompletedDelegate__);
  return;
}

// `dynamic_initializer_for_'OnTransactionQueuedDelegate'' @ 140f294b0

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__OnTransactionQueuedDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnTransactionQueuedDelegate__);
  return;
}

// `dynamic_initializer_for_'OnTransactionReleasedDelegate'' @ 140f294d0

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__OnTransactionReleasedDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnTransactionReleasedDelegate__);
  return;
}

// `dynamic_initializer_for_'OnTransactionStartingDelegate'' @ 140f294f0

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__OnTransactionStartingDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnTransactionStartingDelegate__);
  return;
}

// `dynamic_initializer_for_'ReadyMultiServerCommitDelegate'' @ 140f29510

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__ReadyMultiServerCommitDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__ReadyMultiServerCommitDelegate__);
  return;
}

// `dynamic_initializer_for_'ReadyRemoteMultiServerCommitDelegate'' @ 140f29530

void __cdecl
UE::RemoteExecutor::_dynamic_initializer_for__ReadyRemoteMultiServerCommitDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__ReadyRemoteMultiServerCommitDelegate__);
  return;
}

// `dynamic_initializer_for_'RemoteObjectDeniedTransferDelegate'' @ 140f29550

void __cdecl
UE::RemoteObject::Transfer::_dynamic_initializer_for__RemoteObjectDeniedTransferDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__RemoteObjectDeniedTransferDelegate__);
  return;
}

// `dynamic_initializer_for_'RemoteObjectTransferDelegate'' @ 140f29570

void __cdecl
UE::RemoteObject::Transfer::_dynamic_initializer_for__RemoteObjectTransferDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__RemoteObjectTransferDelegate__);
  return;
}

// `dynamic_initializer_for_'RequestRemoteObjectDelegate'' @ 140f29590

void __cdecl
UE::RemoteObject::Transfer::_dynamic_initializer_for__RequestRemoteObjectDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__RequestRemoteObjectDelegate__);
  return;
}

// `dynamic_initializer_for_'RestoreRemoteObjectDataDelegate'' @ 140f295b0

void __cdecl
UE::RemoteObject::Transfer::_dynamic_initializer_for__RestoreRemoteObjectDataDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__RestoreRemoteObjectDataDelegate__);
  return;
}

// `dynamic_initializer_for_'StoreRemoteObjectDataDelegate'' @ 140f295d0

void __cdecl
UE::RemoteObject::Transfer::_dynamic_initializer_for__StoreRemoteObjectDataDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__StoreRemoteObjectDataDelegate__);
  return;
}

// `dynamic_initializer_for_'TickNetworkDelegate'' @ 140f295f0

void __cdecl UE::RemoteExecutor::_dynamic_initializer_for__TickNetworkDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__TickNetworkDelegate__);
  return;
}

// `scalar_deleting_destructor' @ 1421995e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14219b1e0

void * __thiscall
UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::_scalar_deleting_destructor_
          (FRemoteObjectTransferQueue *this,uint param_1)

{
  ~FRemoteObjectTransferQueue(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 14219b7a0

void __cdecl
`CollectReferences<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FCollector<1>,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FProcessor>'
::__l5::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,FWorkerContext *param_2)

{
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FCollector<1>_>
  local_res8 [4];
  
  local_res8[0].Processor = param_1;
  UE::GC::
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FCollector<1>_>
  ::ProcessObjectArray(local_res8,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 14219b7c0

void __cdecl
`CollectReferences<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FCollector<0>,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FProcessor>'
::__l5::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,FWorkerContext *param_2)

{
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FCollector<0>_>
  local_res8 [4];
  
  local_res8[0].Processor = param_1;
  UE::GC::
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FCollector<0>_>
  ::ProcessObjectArray(local_res8,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 14219b7e0

void __cdecl
`CollectReferences<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FCollector<0>,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FProcessor>'
::__l5::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,FWorkerContext *param_2)

{
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FCollector<0>_>
  local_res8 [4];
  
  local_res8[0].Processor = param_1;
  UE::GC::
  TFastReferenceCollector<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FProcessor,UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FCollector<0>_>
  ::ProcessObjectArray(local_res8,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 14219b800

void __cdecl
`CollectReferences<UE::GC::TDefaultCollector<FAllReferencesProcessor>,FAllReferencesProcessor>'::
__l5::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,FWorkerContext *param_2)

{
  TFastReferenceCollector<FAllReferencesProcessor,UE::GC::TDefaultCollector<FAllReferencesProcessor>_>
  local_res8 [4];
  
  local_res8[0].Processor = param_1;
  UE::GC::
  TFastReferenceCollector<FAllReferencesProcessor,UE::GC::TDefaultCollector<FAllReferencesProcessor>_>
  ::ProcessObjectArray(local_res8,param_2);
  return;
}

// operator<<<unsigned_short,TSizedDefaultAllocator<32>_> @ 14219b8c0

FArchive * __cdecl
operator<<<unsigned_short,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 2,(longlong)param_2->ArrayMax * 2);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x800001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum * 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FPackedRemoteObjectPathName,TSizedDefaultAllocator<32>_> @ 14219b8d0

FArchive * __cdecl
operator<<<FPackedRemoteObjectPathName,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FPackedRemoteObjectPathName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FPackedRemoteObjectPathName,int>
                ((FPackedRemoteObjectPathName *)(param_2->AllocatorInstance).Data,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              pTVar9 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20);
              TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
                        (param_1,pTVar9 + 1);
              TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
                        (param_1,pTVar9);
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<FPackedRemoteObjectPathName,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar9 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20);
              DefaultConstructItems<FPackedRemoteObjectPathName,int>(pTVar9,1);
              TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
                        (param_1,pTVar9 + 1);
              TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
                        (param_1,pTVar9);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRemoteObjectBytes,TSizedDefaultAllocator<32>_> @ 14219b8e0

FArchive * __cdecl
operator<<<FRemoteObjectBytes,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FRemoteObjectBytes,int>
                ((FRemoteObjectBytes *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRemoteObjectBytes,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar10 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FRemoteObjectBytes,int>(pTVar10,1);
              TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                        (param_1,pTVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FRemoteObjectHeader,TSizedDefaultAllocator<32>_> @ 14219b8f0

FArchive * __cdecl
operator<<<UE::RemoteObject::Serialization::FRemoteObjectHeader_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::RemoteObject::Serialization::FRemoteObjectHeader,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FRemoteObjectHeader *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              UE::RemoteObject::Serialization::operator<<
                        (param_1,(FRemoteObjectHeader *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::RemoteObject::Serialization::FRemoteObjectHeader,TSizedDefaultAllocator<32>_>::
          Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FRemoteObjectHeader *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<UE::RemoteObject::Serialization::FRemoteObjectHeader,int>
                        (pFVar10,1);
              UE::RemoteObject::Serialization::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FRemoteObjectId,TSizedDefaultAllocator<32>_> @ 14219b900

FArchive * __cdecl
operator<<<FRemoteObjectId,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FRemoteObjectId,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *this;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              FRemoteObjectId::Serialize
                        ((FRemoteObjectId *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FRemoteObjectId,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 8;
              DefaultConstructItems<FRemoteObjectId,int>(this,1);
              FRemoteObjectId::Serialize((FRemoteObjectId *)this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FPackageIndex> @ 14219b910

void __cdecl
operator<<<FPackageIndex>
          (FStructuredArchiveSlot param_1,TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  FArchive *pFVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  FSlotBase FVar6;
  bool bVar7;
  int iVar8;
  FArchiveState *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  FVar6.StructuredArchive = local_res8.StructuredArchive;
  pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar13 = local_res10[0];
  if (pFVar9->ArIsLoading != 0) {
    lVar14 = (longlong)(int)local_res10[0];
    iVar12 = *piVar1;
    if (iVar12 < (int)local_res10[0]) {
      iVar12 = local_res10[0] - iVar12;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar12,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      DefaultConstructItems<FPackageIndex,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar8 * 4,iVar12);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar12) {
        uVar11 = iVar12 - local_res10[0];
        if ((int)(uVar11 | local_res10[0]) < 0) {
          bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (uVar11 != 0) {
          pFVar10 = (param_2->AllocatorInstance).Data + lVar14 * 4;
          iVar12 = (*piVar1 - uVar11) - uVar13;
          if (iVar12 != 0) {
            memmove(pFVar10,pFVar10 + (longlong)(int)uVar11 * 4,(longlong)iVar12 << 2);
          }
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar13 = 0;
  if (0 < (int)local_res10[0]) {
    lVar14 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar10 = (param_2->AllocatorInstance).Data + lVar14;
      pFVar2 = (FVar6.StructuredArchive)->Formatter->Inner;
      puVar4 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar4 + 1) {
        if ((pFVar2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,pFVar10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)pFVar10);
        }
      }
      else {
        *(undefined4 *)pFVar10 = *puVar4;
        **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 4;
    } while ((int)uVar13 < (int)local_res10[0]);
  }
  return;
}

// AutoRTFMFunctorInvoker<`FRemoteExecutor::ExecutePendingWork'::__l153::<lambda_2>_> @ 14219c080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FRemoteExecutor::ExecutePendingWork_::__l153::<lambda_2>_>
          (void *param_1)

{
  FRemoteServerId *pFVar1;
  undefined4 uVar2;
  FRemoteServerId FVar3;
  code *pcVar4;
  double dVar5;
  FRemoteServerId FVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  FRemoteServerId FVar13;
  longlong *plVar14;
  uint uVar15;
  FRemoteServerId FVar16;
  uint uVar17;
  ulonglong uVar18;
  FRemoteServerId *pFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FIdentityFunctor FVar22;
  double dVar23;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  FRemoteServerId *pFStack_1f8;
  undefined8 uStack_1f0;
  FRemoteServerId FStack_1e8;
  FRemoteServerId FStack_1e4;
  FRemoteServerId aFStack_1e0 [2];
  FString FStack_1d8;
  FString FStack_1c8;
  FString FStack_1b8;
  FString FStack_1a8;
  FString FStack_198;
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FString FStack_158;
  FString FStack_148;
  LARGE_INTEGER LStack_138;
  LARGE_INTEGER LStack_130;
  FString FStack_128;
  FString FStack_118;
  FString FStack_108;
  FReadAccessScope FStack_f8;
  FReadAccessScope FStack_e0;
  FReadAccessScope FStack_c8;
  FReadAccessScope FStack_b0;
  FReadAccessScope aFStack_98 [3];
  
  lVar12 = *(longlong *)(*(longlong *)param_1 + 0x30);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar12 + 0x20));
  pcVar4 = *(code **)(lVar12 + 0x20);
  plVar14 = (longlong *)(lVar12 + 0x30);
  if (*(longlong **)(lVar12 + 0x48) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar12 + 0x48);
  }
  uVar11 = (**(code **)(*plVar14 + 8))();
  (*pcVar4)(uVar11);
  if (*(char *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 0x68) != '\0') {
    FVar22 = (FIdentityFunctor)(-1 < CpuChannel->Enabled);
    if ((bool)FVar22) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                  ::__l28::__CpuProfilerEventSpecId372,"MultiServerCommit",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                 ,0x174);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                 ::__l28::__CpuProfilerEventSpecId372);
    }
    uVar18 = 0;
    if (6 < (byte)LogRemoteExec._0_1_) {
      FStack_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1d8.Data.ArrayNum = 0;
      FStack_1d8.Data.ArrayMax = 0;
      ::FString::AppendInt(&FStack_1d8,*(int *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 8));
      UE::Logging::Private::BasicLog<7>
                (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                  ::__l29::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
      if (FStack_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1d8.Data.AllocatorInstance.Data);
      }
    }
    if ((*(int *)(*(longlong *)param_1 + 0x74) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!MultiServerCommitRequestId.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                            ,0x17f,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(int *)(*(longlong *)param_1 + 0x80) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MultiServerCommitReadyServers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                            ,0x180,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(char *)(*(longlong *)param_1 + 0x88) != '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("bMultiServerCommitRequiresAbort == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                            ,0x181,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(*(longlong *)param_1 + 0x74) =
         *(undefined4 *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 8);
    *(undefined1 *)(*(longlong *)param_1 + 0x88) = 0;
    lVar12 = *(longlong *)param_1;
    pFStack_1f8 = (FRemoteServerId *)0x0;
    uStack_1f0 = 0;
    uVar21 = uVar18;
    if (0 < *(int *)(lVar12 + 8)) {
      do {
        uVar15 = (uint)uVar18;
        if (6 < (byte)LogRemoteExec._0_1_) {
          FStack_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_1c8.Data.ArrayNum = 0;
          FStack_1c8.Data.ArrayMax = 0;
          ::FString::AppendInt(&FStack_1c8,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
          UE::Logging::Private::BasicLog<7>
                    (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                      ::__l63::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
          if (FStack_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_1c8.Data.AllocatorInstance.Data);
          }
        }
        plVar14 = *(longlong **)param_1;
        uVar17 = 0;
        if ((int)uVar15 < (int)plVar14[1]) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar14 = *(longlong **)(uVar21 + *plVar14);
        (**(code **)(*plVar14 + 0x58))(plVar14,&pFStack_1f8);
        lVar12 = *(longlong *)param_1;
        uVar18 = (ulonglong)(uVar15 + 1);
        uVar21 = uVar21 + 8;
      } while ((int)(uVar15 + 1) < *(int *)(lVar12 + 8));
    }
    if (6 < (byte)LogRemoteExec._0_1_) {
      FStack_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1b8.Data.ArrayNum = 0;
      FStack_1b8.Data.ArrayMax = 0;
      ::FString::AppendInt(&FStack_1b8,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
      UE::Logging::Private::BasicLog<7>
                (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                  ::__l72::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
      if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
      }
    }
    iVar9 = (int)uStack_1f0;
    pFVar1 = pFStack_1f8 + (int)uStack_1f0;
    pFVar19 = pFStack_1f8;
    while( true ) {
      if ((int)uStack_1f0 != iVar9) {
        auStackX_10[0] = 0;
        `TCheckedPointerIterator<FRemoteServerId,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_10);
      }
      if (pFVar19 == pFVar1) break;
      FStack_1e4.Id = pFVar19->Id;
      if (6 < (byte)LogRemoteExec._0_1_) {
        FRemoteServerId::ToString(&FStack_1e4,&FStack_128);
        FStack_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1a8.Data.ArrayNum = 0;
        FStack_1a8.Data.ArrayMax = 0;
        ::FString::AppendInt(&FStack_1a8,*(int *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 8));
        UE::Logging::Private::BasicLog<7>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l85::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (FStack_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1a8.Data.AllocatorInstance.Data);
        }
        if (FStack_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_128.Data.AllocatorInstance.Data);
        }
      }
      pFVar19 = pFVar19 + 1;
    }
    uVar11 = *(undefined8 *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 0x10);
    uVar2 = *(undefined4 *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UE::RemoteExecutor::BeginMultiServerCommitDelegate,&FStack_f8);
    if ((UE::RemoteExecutor::BeginMultiServerCommitDelegate._16_4_ != 0) &&
       (UE::RemoteExecutor::BeginMultiServerCommitDelegate._8_8_ != 0)) {
      (**(code **)(*(longlong *)UE::RemoteExecutor::BeginMultiServerCommitDelegate._8_8_ + 0x68))
                (UE::RemoteExecutor::BeginMultiServerCommitDelegate._8_8_,uVar2,uVar11,&pFStack_1f8)
      ;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_f8);
    lVar12 = *(longlong *)param_1;
    uVar20 = 0;
    uVar18 = uVar20;
    uVar21 = uVar20;
    if (0 < *(int *)(lVar12 + 8)) {
      do {
        uVar15 = (uint)uVar18;
        if (6 < (byte)LogRemoteExec._0_1_) {
          FStack_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_198.Data.ArrayNum = 0;
          FStack_198.Data.ArrayMax = 0;
          ::FString::AppendInt(&FStack_198,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
          UE::Logging::Private::BasicLog<7>
                    (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                      ::__l98::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
          if (FStack_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_198.Data.AllocatorInstance.Data);
          }
        }
        plVar14 = *(longlong **)param_1;
        uVar17 = 0;
        if ((int)uVar15 < (int)plVar14[1]) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(**(longlong **)(uVar21 + *plVar14) + 0x60))();
        lVar12 = *(longlong *)param_1;
        uVar18 = (ulonglong)(uVar15 + 1);
        uVar21 = uVar21 + 8;
      } while ((int)(uVar15 + 1) < *(int *)(lVar12 + 8));
    }
    uVar2 = *(undefined4 *)(*(longlong *)(lVar12 + 0x30) + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UE::RemoteExecutor::ReadyMultiServerCommitDelegate,&FStack_e0);
    if ((UE::RemoteExecutor::ReadyMultiServerCommitDelegate._16_4_ != 0) &&
       (UE::RemoteExecutor::ReadyMultiServerCommitDelegate._8_8_ != 0)) {
      (**(code **)(*(longlong *)UE::RemoteExecutor::ReadyMultiServerCommitDelegate._8_8_ + 0x68))
                (UE::RemoteExecutor::ReadyMultiServerCommitDelegate._8_8_,uVar2,&pFStack_1f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_e0);
    QueryPerformanceCounter(&LStack_138);
    dVar8 = __real_4170000000000000;
    dVar7 = __real_3ff0000000000000;
    dVar5 = (double)LStack_138.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    while( true ) {
      QueryPerformanceCounter(&LStack_130);
      dVar23 = (double)LStack_130.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
      if ((dVar7 < dVar23 - dVar5) && (dVar5 = dVar23, 6 < (byte)LogRemoteExec._0_1_)) {
        FStack_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_188.Data.ArrayNum = 0;
        FStack_188.Data.ArrayMax = 0;
        ::FString::AppendInt(&FStack_188,*(int *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 8));
        UE::Logging::Private::BasicLog<7>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l113::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (FStack_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_188.Data.AllocatorInstance.Data);
        }
      }
      if ((int)uStack_1f0 == *(int *)(*(longlong *)param_1 + 0x80)) break;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::RemoteExecutor::TickNetworkDelegate,&FStack_c8);
      if ((UE::RemoteExecutor::TickNetworkDelegate._16_4_ != 0) &&
         (UE::RemoteExecutor::TickNetworkDelegate._8_8_ != 0)) {
        (**(code **)(*(longlong *)UE::RemoteExecutor::TickNetworkDelegate._8_8_ + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_c8);
    }
    AlgoImpl::
    IntroSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_>
              (pFStack_1f8,(int)uStack_1f0,FVar22,(TLess<void> *)auStackX_18);
    AlgoImpl::
    IntroSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_>
              (*(FRemoteServerId **)(*(longlong *)param_1 + 0x78),
               *(int *)(*(longlong *)param_1 + 0x80),FVar22,(TLess<void> *)auStackX_20);
    uVar18 = uVar20;
    if (0 < (int)uStack_1f0) {
      do {
        uVar17 = (uint)uVar18;
        uVar15 = 0;
        if ((int)uVar17 < (int)uStack_1f0) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar12 = *(longlong *)param_1;
        FVar3.Id = *(uint *)((longlong)&pFStack_1f8->Id + uVar20);
        uVar15 = 0;
        if ((int)uVar17 < *(int *)(lVar12 + 0x80)) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        FStack_1e8.Id = FVar3.Id;
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar16.Id = *(uint *)(uVar20 + *(longlong *)(lVar12 + 0x78));
        aFStack_1e0[0].Id = FVar16.Id;
        FRemoteServerId::VerifyComparableServerIds(FVar3.Id,FVar16.Id);
        FVar6.Id = FVar3.Id;
        if (FVar3.Id == 0x3fd) {
          FVar6 = FRemoteServerId::GlobalServerId;
        }
        FVar13.Id = FVar16.Id;
        if (FVar16.Id == 0x3fd) {
          FVar13 = FRemoteServerId::GlobalServerId;
        }
        if ((FVar6.Id != FVar13.Id) && (6 < (byte)LogRemoteExec._0_1_)) {
          FRemoteServerId::ToString(aFStack_1e0,&FStack_108);
          FRemoteServerId::ToString(&FStack_1e8,&FStack_118);
          FStack_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_178.Data.ArrayNum = 0;
          FStack_178.Data.ArrayMax = 0;
          ::FString::AppendInt(&FStack_178,*(int *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 8))
          ;
          UE::Logging::Private::BasicLog<7>
                    (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                      ::E::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
          if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
          }
          if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
          }
          if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
          }
        }
        FRemoteServerId::VerifyComparableServerIds(FVar3.Id,FVar16.Id);
        if (FVar3.Id == 0x3fd) {
          FVar3 = FRemoteServerId::GlobalServerId;
        }
        if (FVar16.Id == 0x3fd) {
          FVar16 = FRemoteServerId::GlobalServerId;
        }
        if ((FVar3.Id != FVar16.Id) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ServerId == ReadyServerId",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                                ,0x1e2,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar20 = uVar20 + 4;
        uVar18 = (ulonglong)(uVar17 + 1);
      } while ((int)(uVar17 + 1) < (int)uStack_1f0);
    }
    uVar18 = 0;
    lVar12 = *(longlong *)param_1;
    if (*(char *)(lVar12 + 0x88) == '\0') {
      if (6 < (byte)LogRemoteExec._0_1_) {
        FStack_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_158.Data.ArrayNum = 0;
        FStack_158.Data.ArrayMax = 0;
        ::FString::AppendInt(&FStack_158,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
        UE::Logging::Private::BasicLog<7>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l166::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (FStack_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_158.Data.AllocatorInstance.Data);
        }
      }
      plVar14 = *(longlong **)param_1;
      uVar21 = uVar18;
      if (0 < (int)plVar14[1]) {
        do {
          uVar17 = (uint)uVar18;
          uVar15 = 0;
          if ((int)uVar17 < (int)plVar14[1]) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(**(longlong **)(uVar21 + *plVar14) + 0x70))();
          plVar14 = *(longlong **)param_1;
          uVar18 = (ulonglong)(uVar17 + 1);
          uVar21 = uVar21 + 8;
        } while ((int)(uVar17 + 1) < (int)plVar14[1]);
      }
      if (6 < (byte)LogRemoteExec._0_1_) {
        FStack_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_148.Data.ArrayNum = 0;
        FStack_148.Data.ArrayMax = 0;
        ::FString::AppendInt(&FStack_148,*(int *)(plVar14[6] + 8));
        UE::Logging::Private::BasicLog<7>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l179::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
        }
      }
      *(undefined4 *)(*(longlong *)param_1 + 0x74) = 0;
      lVar12 = *(longlong *)param_1;
      *(undefined4 *)(lVar12 + 0x80) = 0;
      if (*(int *)(lVar12 + 0x84) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(lVar12 + 0x78),0,(int *)(lVar12 + 0x84));
      }
      *(undefined1 *)(*(longlong *)param_1 + 0x88) = 0;
      uVar2 = *(undefined4 *)(*(longlong *)(*(longlong *)param_1 + 0x30) + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::RemoteExecutor::EndMultiServerCommitDelegate,aFStack_98);
      if ((UE::RemoteExecutor::EndMultiServerCommitDelegate._16_4_ != 0) &&
         (UE::RemoteExecutor::EndMultiServerCommitDelegate._8_8_ != 0)) {
        (**(code **)(*(longlong *)UE::RemoteExecutor::EndMultiServerCommitDelegate._8_8_ + 0x68))
                  (UE::RemoteExecutor::EndMultiServerCommitDelegate._8_8_,uVar2,&pFStack_1f8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (aFStack_98);
      if (pFStack_1f8 != (FRemoteServerId *)0x0) {
        FMemory::Free(pFStack_1f8);
      }
    }
    else {
      if (5 < (byte)LogRemoteExec._0_1_) {
        FStack_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_168.Data.ArrayNum = 0;
        FStack_168.Data.ArrayMax = 0;
        ::FString::AppendInt(&FStack_168,*(int *)(*(longlong *)(lVar12 + 0x30) + 8));
        UE::Logging::Private::BasicLog<6>
                  (&`public:___cdecl_`public:_void___cdecl_FRemoteExecutor::ExecutePendingWork(void)___ptr64'::`153'::<lambda_2>::operator()(void)const___ptr64'
                    ::__l151::LOG_Static,(FLogCategoryBase *)&LogRemoteExec);
        if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
        }
      }
      plVar14 = *(longlong **)param_1;
      uVar21 = uVar18;
      if (0 < (int)plVar14[1]) {
        do {
          uVar17 = (uint)uVar18;
          uVar15 = 0;
          if ((int)uVar17 < (int)plVar14[1]) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(**(longlong **)(uVar21 + *plVar14) + 0x68))();
          plVar14 = *(longlong **)param_1;
          uVar18 = (ulonglong)(uVar17 + 1);
          uVar21 = uVar21 + 8;
        } while ((int)(uVar17 + 1) < (int)plVar14[1]);
      }
      uVar2 = *(undefined4 *)(plVar14[6] + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::RemoteExecutor::AbandonMultiServerCommitDelegate,&FStack_b0);
      if ((UE::RemoteExecutor::AbandonMultiServerCommitDelegate._16_4_ != 0) &&
         (UE::RemoteExecutor::AbandonMultiServerCommitDelegate._8_8_ != 0)) {
        (**(code **)(*(longlong *)UE::RemoteExecutor::AbandonMultiServerCommitDelegate._8_8_ + 0x68)
        )(UE::RemoteExecutor::AbandonMultiServerCommitDelegate._8_8_,uVar2);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_b0);
      *(undefined4 *)(*(longlong *)param_1 + 0x74) = 0;
      lVar12 = *(longlong *)param_1;
      *(undefined4 *)(lVar12 + 0x80) = 0;
      if (*(int *)(lVar12 + 0x84) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(lVar12 + 0x78),0,(int *)(lVar12 + 0x84));
      }
      *(undefined1 *)(*(longlong *)param_1 + 0x88) = 0;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AutoRTFM::IsClosed()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                          ,0x2a9,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      GRemoteExecutor.AbortReason = RequiresDependencies;
      ::FString::AssignRange
                (&GRemoteExecutor.AbortReasonDescription,L"bMultiServerCommitRequiresAbort",0x1f);
      if (pFStack_1f8 != (FRemoteServerId *)0x0) {
        FMemory::Free(pFStack_1f8);
      }
    }
    if ((bool)FVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// AutoRTFMLookupInstrumentedFunctorInvoker<`FRemoteExecutor::ExecutePendingWork'::__l153::<lambda_2>_> @ 14219c090

_func___cdecl_void_void_ptr * __cdecl
AutoRTFM::
AutoRTFMLookupInstrumentedFunctorInvoker<_FRemoteExecutor::ExecutePendingWork_::__l153::<lambda_2>_>
          (<lambda_2> *param_1)

{
  return (_func___cdecl_void_void_ptr *)0x0;
}

// CastChecked<UClass,UClass> @ 14219cc80

UClass * __cdecl CastChecked<UClass,UClass>(UClass *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (UClass *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<UClass>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ConstructItems<UE::ReferenceChainSearch::FGraphPath,UE::ReferenceChainSearch::FGraphPath,int> @ 14219ccc0

void __cdecl
ConstructItems<UE::ReferenceChainSearch::FGraphPath,UE::ReferenceChainSearch::FGraphPath,int>
          (void *param_1,FGraphPath *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FGraphPath *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->Vertices;
      *(undefined4 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined4 *)((longlong)(pTVar5 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar5->ArrayNum;
      _Src = (pTVar5->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 2);
      }
      pFVar3 = (FGraphPath *)(pTVar5 + 1);
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPackedRemoteObjectPathName,FPackedRemoteObjectPathName,int> @ 14219cd90

void __cdecl
ConstructItems<FPackedRemoteObjectPathName,FPackedRemoteObjectPathName,int>
          (void *param_1,FPackedRemoteObjectPathName *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    piVar4 = &(param_2->RemoteIds).ArrayNum;
    lVar5 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar4 + lVar5) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)piVar4 + lVar5);
      iVar2 = *piVar4;
      _Src = (((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
             AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 2);
      }
      piVar3[1] = 0;
      piVar3[2] = 0;
      iVar2 = piVar4[4];
      _Src_00 = *(void **)(piVar4 + 2);
      piVar3[3] = iVar2;
      if (iVar2 == 0) {
        piVar3[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,(ForAnyElementType *)(piVar3 + 1),iVar2,piVar3 + 4);
        memcpy(((ForAnyElementType *)(piVar3 + 1))->Data,_Src_00,(longlong)iVar2 * 2);
      }
      piVar3 = piVar3 + 8;
      piVar4 = piVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FReferencerInformation,FReferencerInformation,int> @ 14219cec0

void __cdecl
ConstructItems<FReferencerInformation,FReferencerInformation,int>
          (void *param_1,FReferencerInformation *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x1c);
    piVar4 = &param_2->TotalReferences;
    do {
      pFVar1 = (ForAnyElementType *)(piVar3 + -3);
      *(UObject **)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)piVar4) =
           ((FReferencerInformation *)(piVar4 + -2))->Referencer;
      piVar3[-5] = *piVar4;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar4[4];
      _Src = (((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(piVar4 + 2))->
             AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
      piVar4 = piVar4 + 8;
      piVar3 = piVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRemoteObjectBytes,FRemoteObjectBytes,int> @ 14219cfa0

void __cdecl
ConstructItems<FRemoteObjectBytes,FRemoteObjectBytes,int>
          (void *param_1,FRemoteObjectBytes *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::ReferenceChainSearch::FGraphPath,int> @ 14219d050

void __cdecl
DefaultConstructItems<UE::ReferenceChainSearch::FGraphPath,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPackedRemoteObjectPathName,int> @ 14219d080

void __cdecl DefaultConstructItems<FPackedRemoteObjectPathName,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRemoteObjectBytes,int> @ 14219d0b0

void __cdecl DefaultConstructItems<FRemoteObjectBytes,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::RemoteObject::Serialization::FRemoteObjectHeader,int> @ 14219d0e0

void __cdecl
DefaultConstructItems<UE::RemoteObject::Serialization::FRemoteObjectHeader,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRemoteObjectId,int> @ 14219d120

void __cdecl DefaultConstructItems<FRemoteObjectId,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int> @ 14219d140

void __cdecl
DefaultConstructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80;
      *(undefined4 *)(puVar1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1 = puVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int> @ 14219d1b0

void __cdecl
DefaultConstructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80;
      *(undefined4 *)(puVar1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1 = puVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::ReferenceChainSearch::FGraphPath,int> @ 14219d250

void __cdecl
DestructItems<UE::ReferenceChainSearch::FGraphPath,int>(FGraphPath *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Vertices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FGraphPath *)(&param_1->Vertices + 1);
  }
  return;
}

// DestructItems<FHarvestedRealm,int> @ 14219d290

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl DestructItems<FHarvestedRealm,int>(FHarvestedRealm *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FHarvestedRealm::~FHarvestedRealm(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FIllegalReference,int> @ 14219d2d0

void __cdecl DestructItems<FIllegalReference,int>(FIllegalReference *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->FormatStringArg;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPackedRemoteObjectPathName,int> @ 14219d310

void __cdecl
DestructItems<FPackedRemoteObjectPathName,int>(FPackedRemoteObjectPathName *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Names).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->RemoteIds).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPropertySaveOverride,int> @ 14219d360

void __cdecl DestructItems<FPropertySaveOverride,int>(FPropertySaveOverride *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->PropertyPath).Path;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRemoteExecutorWork,int> @ 14219d3a0

void __cdecl DestructItems<FRemoteExecutorWork,int>(FRemoteExecutorWork *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  TArray<void_*,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (param_2 != 0) {
    pTVar3 = &param_1->SubsystemRequests;
    do {
      pFVar1 = (((FString *)(pTVar3 + 2))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar3->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(longlong *)(pTVar3 + -3) != 0) {
        plVar2 = (longlong *)(pTVar3 + -2);
        if (*(longlong **)((longlong)(pTVar3 + -1) + 8) != (longlong *)0x0) {
          plVar2 = *(longlong **)((longlong)(pTVar3 + -1) + 8);
        }
        (**(code **)(*plVar2 + 0x10))();
      }
      pTVar3 = pTVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRemoteObjectBytes,int> @ 14219d410

void __cdecl DestructItems<FRemoteObjectBytes,int>(FRemoteObjectBytes *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Bytes).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FSavePackageOutputFile,int> @ 14219d450

void __cdecl DestructItems<FSavePackageOutputFile,int>(FSavePackageOutputFile *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TUniquePtr<unsigned_char,FLargeMemoryDelete> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->FileMemoryBuffer;
    do {
      pFVar1 = (((TArray<FFileRegion,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance
               ).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (pTVar2->Ptr != (uchar *)0x0) {
        FMemory::Free(pTVar2->Ptr);
      }
      pFVar1 = (((FString *)(pTVar2 + -2))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FSavePackageOutputFile *)(pTVar2 + -4))->TargetPath).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int> @ 14219d4c0

void __cdecl
DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::FThreadData,int>
          (FThreadData *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->CurrentEdgeList).Hash.SecondaryData;
    do {
      if (pFVar1[5] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[5]);
      }
      if (pFVar1[2] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[2]);
      }
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int> @ 14219d540

void __cdecl
DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::FThreadData,int>
          (FThreadData *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->CurrentEdgeList).Hash.SecondaryData;
    do {
      if (pFVar1[5] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[5]);
      }
      if (pFVar1[2] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[2]);
      }
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FThreadData,int> @ 14219d5c0

void __cdecl
DestructItems<UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::FThreadData,int>
          (FThreadData *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->CurrentEdgeList).Hash.SecondaryData;
    do {
      if (pFVar1[5] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[5]);
      }
      if (pFVar1[2] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[2]);
      }
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<enum_ESavePackageResult___cdecl(FExportsValidationContext_const_&)>,int> @ 14219d640

void __cdecl
DestructItems<TFunction<enum_ESavePackageResult___cdecl(FExportsValidationContext_const_&)>,int>
          (TFunction<ESavePackageResult___cdecl(FExportsValidationContext_const_&)> *param_1,
          int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TFunction<enum_ESavePackageResult___cdecl(FImportsValidationContext_const_&)>,int> @ 14219d690

void __cdecl
DestructItems<TFunction<enum_ESavePackageResult___cdecl(FImportsValidationContext_const_&)>,int>
          (TFunction<ESavePackageResult___cdecl(FImportsValidationContext_const_&)> *param_1,
          int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLargeMemoryWriter,int> @ 14219d6e0

void __cdecl DestructItems<FLargeMemoryWriter,int>(FLargeMemoryWriter *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FLargeMemoryWriter::~FLargeMemoryWriter(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::RemoteObject::Transfer::FObjectMigrationRequests,int> @ 14219d720

void __cdecl
DestructItems<UE::RemoteObject::Transfer::FObjectMigrationRequests,int>
          (FObjectMigrationRequests *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->IndividualRequests).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FObjectMigrationRequests *)(&param_1->IndividualRequests + 1);
  }
  return;
}

// DestructItems<FSaveContext,int> @ 14219d760

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl DestructItems<FSaveContext,int>(FSaveContext *param_1,int param_2)

{
  ForElementType<FSetElementId> FVar1;
  ForElementType<FSetElementId> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->PostSaveObjectsToSerialize).Hash.SecondaryData;
    do {
      if ((pFVar2[-0x36].field_0x4 != '\0') && (pFVar2[-0x5b] != (ForElementType<FSetElementId>)0x0)
         ) {
        UE::SavePackageUtilities::CallPostSaveRoot
                  ((UObject *)pFVar2[-0x5b],(FObjectSaveContextData *)(pFVar2 + -0x4f),
                   (bool)pFVar2[-0x36].field_0x5);
      }
      if (pFVar2[-0x51] != (ForElementType<FSetElementId>)0x0) {
        TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
        ::operator=((TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
                     *)pFVar2[-0x51],
                    (TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
                     *)(pFVar2 + -0x46));
      }
      *(undefined4 *)(pFVar2 + 1) = 0;
      if (*pFVar2 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar2 + -8));
      if (pFVar2[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-10]);
      }
      if (pFVar2[-0xc] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0xc]);
      }
      *(undefined4 *)(pFVar2 + -0xd) = 0;
      if (pFVar2[-0xe] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0xe]);
      }
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TUniquePtr<UE::SavePackageUtilities::FObjectStatus,TDefaultDelete<UE::SavePackageUtilities::FObjectStatus>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar2 + -0x16));
      *(undefined4 *)(pFVar2 + -0x17) = 0;
      if (pFVar2[-0x18] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0x18]);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar2 + -0x20));
      DestructItems<FAssetData,int>((FAssetData *)pFVar2[-0x22],*(int *)(pFVar2 + -0x21));
      if (pFVar2[-0x22] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0x22]);
      }
      *(undefined4 *)(pFVar2 + -0x23) = 0;
      if (pFVar2[-0x24] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0x24]);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar2 + -0x2c));
      DestructItems<FIllegalReference,int>
                ((FIllegalReference *)pFVar2[-0x2e],*(int *)(pFVar2 + -0x2d));
      if (pFVar2[-0x2e] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0x2e]);
      }
      DestructItems<FHarvestedRealm,int>((FHarvestedRealm *)pFVar2[-0x30],*(int *)(pFVar2 + -0x2f));
      if (pFVar2[-0x30] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0x30]);
      }
      if (pFVar2[-0x33] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0x33]);
      }
      FObjectSaveContextData::~FObjectSaveContextData((FObjectSaveContextData *)(pFVar2 + -0x4f));
      FVar1 = pFVar2[-0x5e];
      if (pFVar2[-0x5e] == (ForElementType<FSetElementId>)0x0) {
        FVar1 = (ForElementType<FSetElementId>)(pFVar2 + -0x7e);
      }
      DestructItems<FSavePackageOutputFile,int>
                ((FSavePackageOutputFile *)FVar1,*(int *)(pFVar2 + -0x5d));
      if (pFVar2[-0x5e] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0x5e]);
      }
      FVar1 = pFVar2[-0x80];
      if (pFVar2[-0x80] == (ForElementType<FSetElementId>)0x0) {
        FVar1 = (ForElementType<FSetElementId>)(pFVar2 + -0xe0);
      }
      DestructItems<FLargeMemoryWriter,int>((FLargeMemoryWriter *)FVar1,*(int *)(pFVar2 + -0x7f));
      if (pFVar2[-0x80] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar2[-0x80]);
      }
      pFVar2 = pFVar2 + 0xec;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindLastByPredicate<`UE::ReferenceChainSearch::RemoveChainsWithDuplicatedRoots'::__l2::<lambda_1>_> @ 1421a1580

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UE::ReferenceChainSearch::RemoveChainsWithDuplicatedRoots_::__l2::<lambda_1>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)param_2 * 4;
  do {
    if (pFVar5 == pFVar1) {
      return -1;
    }
    pFVar5 = pFVar5 + -4;
  } while (*(int *)pFVar5 == param_1.GCObjectReferencerVertex);
  return (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
}

// FindLastByPredicate<`UE::ReferenceChainSearch::RemoveDuplicateGarbageChains<UE::ReferenceChainSearch::FPolicyGCHistory>'::__l6::<lambda_1>_> @ 1421a1620

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UE::ReferenceChainSearch::RemoveDuplicateGarbageChains<UE::ReferenceChainSearch::FPolicyGCHistory>_::__l6::<lambda_1>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_2 < 0) || (this->ArrayNum < param_2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0 && Count <= this->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x55b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar2 + (longlong)param_2 * 4;
  if (pFVar6 != pFVar2) {
    do {
      pFVar1 = pFVar6 + -4;
      pFVar6 = pFVar6 + -4;
      if ((*(uint *)(*(longlong *)
                      (*(longlong *)&(param_1.Policy)->Snapshot->ObjectToInfoMap + 8 +
                      (longlong)*(int *)pFVar1 * 0x18) + 0x1c) & 0x200000) != 0) {
        return (int)((longlong)pFVar6 - (longlong)pFVar2 >> 2);
      }
    } while (pFVar6 != pFVar2);
  }
  return -1;
}

// FindLastByPredicate<`UE::ReferenceChainSearch::RemoveDuplicateGarbageChains<UE::ReferenceChainSearch::FPolicyUObjectHeap>'::__l6::<lambda_1>_> @ 1421a16e0

int __thiscall
TArray<int,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_UE::ReferenceChainSearch::RemoveDuplicateGarbageChains<UE::ReferenceChainSearch::FPolicyUObjectHeap>_::__l6::<lambda_1>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FUObjectItem *pFVar5;
  FScriptContainerElement *pFVar6;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  pFVar6 = pFVar1 + (longlong)param_2 * 4;
  while( true ) {
    if (pFVar6 == pFVar1) {
      return -1;
    }
    iVar4 = *(int *)(pFVar6 + -4);
    pFVar6 = pFVar6 + -4;
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar3)) break;
    if (iVar4 < GUObjectArray.ObjObjects.NumElements) {
      pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar4);
    }
    else {
      pFVar5 = (FUObjectItem *)0x0;
    }
    if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x35) & 1) != 0) {
      return (int)((longlong)pFVar6 - (longlong)pFVar1 >> 2);
    }
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// GetFullNameForCastLogError<UClass> @ 1421a1ac0

FString * __cdecl
GetFullNameForCastLogError<UClass>(FString *__return_storage_ptr__,UClass *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,`UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>'::__l36::<lambda_3>,TGreater<int>_> @ 1421a1d00

void __cdecl
AlgoImpl::
HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>_::__l36::<lambda_3>,TGreater<int>_>
          (FGraphPath *param_1,int param_2,<lambda_3> param_3,TGreater<int> param_4)

{
  FGraphPath *pFVar1;
  FGraphPath *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FGraphPath *pFVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar16 = iVar13;
  iVar17 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_1421a1e0b:
      if (iVar17 == 0) {
        iVar13 = param_2 + -1;
        lVar18 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar14 = param_1 + lVar18;
          do {
            uVar6 = *(undefined4 *)&pFVar14->field_0x4;
            pFVar4 = (pFVar14->Vertices).AllocatorInstance.Data;
            iVar17 = (param_1->Vertices).ArrayNum;
            iVar15 = (param_1->Vertices).ArrayMax;
            iVar12 = param_1->Target;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
            param_1->Target = pFVar14->Target;
            *(undefined4 *)&param_1->field_0x4 = uVar6;
            (param_1->Vertices).AllocatorInstance.Data = pFVar4;
            iVar16 = (pFVar14->Vertices).ArrayMax;
            (param_1->Vertices).ArrayNum = (pFVar14->Vertices).ArrayNum;
            (param_1->Vertices).ArrayMax = iVar16;
            pFVar14->Target = iVar12;
            *(undefined4 *)&pFVar14->field_0x4 = uVar8;
            (pFVar14->Vertices).AllocatorInstance.Data = pFVar5;
            (pFVar14->Vertices).ArrayNum = iVar17;
            (pFVar14->Vertices).ArrayMax = iVar15;
            iVar16 = 0;
            if (1 < iVar13) {
              do {
                iVar17 = iVar16 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar13) {
                  if (param_1[iVar12].Vertices.ArrayNum <
                      param_1[(longlong)iVar17 + 2].Vertices.ArrayNum) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar1 = param_1 + iVar16;
                if ((pFVar1->Vertices).ArrayNum <= param_1[iVar12].Vertices.ArrayNum) break;
                pFVar2 = param_1 + iVar12;
                uVar6 = *(undefined4 *)&pFVar2->field_0x4;
                pFVar4 = (pFVar2->Vertices).AllocatorInstance.Data;
                iVar15 = (pFVar1->Vertices).ArrayNum;
                iVar7 = (pFVar1->Vertices).ArrayMax;
                iVar17 = pFVar1->Target;
                uVar8 = *(undefined4 *)&pFVar1->field_0x4;
                pFVar5 = (pFVar1->Vertices).AllocatorInstance.Data;
                pFVar1->Target = pFVar2->Target;
                *(undefined4 *)&pFVar1->field_0x4 = uVar6;
                (pFVar1->Vertices).AllocatorInstance.Data = pFVar4;
                iVar16 = param_1[iVar12].Vertices.ArrayMax;
                (pFVar1->Vertices).ArrayNum = param_1[iVar12].Vertices.ArrayNum;
                (pFVar1->Vertices).ArrayMax = iVar16;
                pFVar1 = param_1 + iVar12;
                pFVar1->Target = iVar17;
                *(undefined4 *)&pFVar1->field_0x4 = uVar8;
                (pFVar1->Vertices).AllocatorInstance.Data = pFVar5;
                param_1[iVar12].Vertices.ArrayNum = iVar15;
                param_1[iVar12].Vertices.ArrayMax = iVar7;
                iVar16 = iVar12;
              } while (iVar12 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar18 = lVar18 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar12 = iVar17 + -1;
      iVar13 = iVar16 + -2;
      iVar16 = iVar13;
      iVar17 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar15 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (param_1[iVar15].Vertices.ArrayNum < param_1[(longlong)iVar13 + 2].Vertices.ArrayNum) {
        iVar15 = iVar13;
      }
      iVar15 = iVar15 + 1;
    }
    pFVar14 = param_1 + iVar12;
    if ((pFVar14->Vertices).ArrayNum <= param_1[iVar15].Vertices.ArrayNum) goto LAB_1421a1e0b;
    pFVar1 = param_1 + iVar15;
    uVar6 = *(undefined4 *)&pFVar1->field_0x4;
    pFVar4 = (pFVar1->Vertices).AllocatorInstance.Data;
    iVar13 = iVar15 * 2 + 1;
    iVar9 = (pFVar14->Vertices).ArrayNum;
    iVar10 = (pFVar14->Vertices).ArrayMax;
    iVar7 = pFVar14->Target;
    uVar8 = *(undefined4 *)&pFVar14->field_0x4;
    pFVar5 = (pFVar14->Vertices).AllocatorInstance.Data;
    pFVar14->Target = pFVar1->Target;
    *(undefined4 *)&pFVar14->field_0x4 = uVar6;
    (pFVar14->Vertices).AllocatorInstance.Data = pFVar4;
    iVar12 = param_1[iVar15].Vertices.ArrayMax;
    (pFVar14->Vertices).ArrayNum = param_1[iVar15].Vertices.ArrayNum;
    (pFVar14->Vertices).ArrayMax = iVar12;
    pFVar14 = param_1 + iVar15;
    pFVar14->Target = iVar7;
    *(undefined4 *)&pFVar14->field_0x4 = uVar8;
    (pFVar14->Vertices).AllocatorInstance.Data = pFVar5;
    param_1[iVar15].Vertices.ArrayNum = iVar9;
    param_1[iVar15].Vertices.ArrayMax = iVar10;
    iVar12 = iVar15;
  } while( true );
}

// HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,`UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>'::__l36::<lambda_3>,TGreater<int>_> @ 1421a1f20

void __cdecl
AlgoImpl::
HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>_::__l36::<lambda_3>,TGreater<int>_>
          (FGraphPath *param_1,int param_2,<lambda_3> param_3,TGreater<int> param_4)

{
  FGraphPath *pFVar1;
  FGraphPath *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FGraphPath *pFVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar16 = iVar13;
  iVar17 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_1421a202b:
      if (iVar17 == 0) {
        iVar13 = param_2 + -1;
        lVar18 = (longlong)iVar13;
        if (0 < iVar13) {
          pFVar14 = param_1 + lVar18;
          do {
            uVar6 = *(undefined4 *)&pFVar14->field_0x4;
            pFVar4 = (pFVar14->Vertices).AllocatorInstance.Data;
            iVar17 = (param_1->Vertices).ArrayNum;
            iVar15 = (param_1->Vertices).ArrayMax;
            iVar12 = param_1->Target;
            uVar8 = *(undefined4 *)&param_1->field_0x4;
            pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
            param_1->Target = pFVar14->Target;
            *(undefined4 *)&param_1->field_0x4 = uVar6;
            (param_1->Vertices).AllocatorInstance.Data = pFVar4;
            iVar16 = (pFVar14->Vertices).ArrayMax;
            (param_1->Vertices).ArrayNum = (pFVar14->Vertices).ArrayNum;
            (param_1->Vertices).ArrayMax = iVar16;
            pFVar14->Target = iVar12;
            *(undefined4 *)&pFVar14->field_0x4 = uVar8;
            (pFVar14->Vertices).AllocatorInstance.Data = pFVar5;
            (pFVar14->Vertices).ArrayNum = iVar17;
            (pFVar14->Vertices).ArrayMax = iVar15;
            iVar16 = 0;
            if (1 < iVar13) {
              do {
                iVar17 = iVar16 * 2;
                iVar12 = iVar17 + 1;
                if (iVar17 + 2 < iVar13) {
                  if (param_1[iVar12].Vertices.ArrayNum <
                      param_1[(longlong)iVar17 + 2].Vertices.ArrayNum) {
                    iVar12 = iVar17;
                  }
                  iVar12 = iVar12 + 1;
                }
                pFVar1 = param_1 + iVar16;
                if ((pFVar1->Vertices).ArrayNum <= param_1[iVar12].Vertices.ArrayNum) break;
                pFVar2 = param_1 + iVar12;
                uVar6 = *(undefined4 *)&pFVar2->field_0x4;
                pFVar4 = (pFVar2->Vertices).AllocatorInstance.Data;
                iVar15 = (pFVar1->Vertices).ArrayNum;
                iVar7 = (pFVar1->Vertices).ArrayMax;
                iVar17 = pFVar1->Target;
                uVar8 = *(undefined4 *)&pFVar1->field_0x4;
                pFVar5 = (pFVar1->Vertices).AllocatorInstance.Data;
                pFVar1->Target = pFVar2->Target;
                *(undefined4 *)&pFVar1->field_0x4 = uVar6;
                (pFVar1->Vertices).AllocatorInstance.Data = pFVar4;
                iVar16 = param_1[iVar12].Vertices.ArrayMax;
                (pFVar1->Vertices).ArrayNum = param_1[iVar12].Vertices.ArrayNum;
                (pFVar1->Vertices).ArrayMax = iVar16;
                pFVar1 = param_1 + iVar12;
                pFVar1->Target = iVar17;
                *(undefined4 *)&pFVar1->field_0x4 = uVar8;
                (pFVar1->Vertices).AllocatorInstance.Data = pFVar5;
                param_1[iVar12].Vertices.ArrayNum = iVar15;
                param_1[iVar12].Vertices.ArrayMax = iVar7;
                iVar16 = iVar12;
              } while (iVar12 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar18 = lVar18 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar12 = iVar17 + -1;
      iVar13 = iVar16 + -2;
      iVar16 = iVar13;
      iVar17 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar15 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (param_1[iVar15].Vertices.ArrayNum < param_1[(longlong)iVar13 + 2].Vertices.ArrayNum) {
        iVar15 = iVar13;
      }
      iVar15 = iVar15 + 1;
    }
    pFVar14 = param_1 + iVar12;
    if ((pFVar14->Vertices).ArrayNum <= param_1[iVar15].Vertices.ArrayNum) goto LAB_1421a202b;
    pFVar1 = param_1 + iVar15;
    uVar6 = *(undefined4 *)&pFVar1->field_0x4;
    pFVar4 = (pFVar1->Vertices).AllocatorInstance.Data;
    iVar13 = iVar15 * 2 + 1;
    iVar9 = (pFVar14->Vertices).ArrayNum;
    iVar10 = (pFVar14->Vertices).ArrayMax;
    iVar7 = pFVar14->Target;
    uVar8 = *(undefined4 *)&pFVar14->field_0x4;
    pFVar5 = (pFVar14->Vertices).AllocatorInstance.Data;
    pFVar14->Target = pFVar1->Target;
    *(undefined4 *)&pFVar14->field_0x4 = uVar6;
    (pFVar14->Vertices).AllocatorInstance.Data = pFVar4;
    iVar12 = param_1[iVar15].Vertices.ArrayMax;
    (pFVar14->Vertices).ArrayNum = param_1[iVar15].Vertices.ArrayNum;
    (pFVar14->Vertices).ArrayMax = iVar12;
    pFVar14 = param_1 + iVar15;
    pFVar14->Target = iVar7;
    *(undefined4 *)&pFVar14->field_0x4 = uVar8;
    (pFVar14->Vertices).AllocatorInstance.Data = pFVar5;
    param_1[iVar15].Vertices.ArrayNum = iVar9;
    param_1[iVar15].Vertices.ArrayMax = iVar10;
    iVar12 = iVar15;
  } while( true );
}

// HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,`UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>'::__l38::<lambda_4>,TLess<int>_> @ 1421a2140

void __cdecl
AlgoImpl::
HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>_::__l38::<lambda_4>,TLess<int>_>
          (FGraphPath *param_1,int param_2,<lambda_4> param_3,TLess<int> param_4)

{
  FGraphPath *pFVar1;
  FGraphPath *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FGraphPath *pFVar17;
  longlong lVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar19 = iVar14;
  iVar15 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_1421a224d:
      if (iVar15 == 0) {
        iVar14 = param_2 + -1;
        lVar18 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar17 = param_1 + lVar18;
          do {
            uVar6 = *(undefined4 *)&pFVar17->field_0x4;
            pFVar4 = (pFVar17->Vertices).AllocatorInstance.Data;
            iVar15 = (param_1->Vertices).ArrayNum;
            iVar16 = (param_1->Vertices).ArrayMax;
            iVar13 = param_1->Target;
            uVar9 = *(undefined4 *)&param_1->field_0x4;
            pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
            param_1->Target = pFVar17->Target;
            *(undefined4 *)&param_1->field_0x4 = uVar6;
            (param_1->Vertices).AllocatorInstance.Data = pFVar4;
            iVar19 = (pFVar17->Vertices).ArrayMax;
            (param_1->Vertices).ArrayNum = (pFVar17->Vertices).ArrayNum;
            (param_1->Vertices).ArrayMax = iVar19;
            pFVar17->Target = iVar13;
            *(undefined4 *)&pFVar17->field_0x4 = uVar9;
            (pFVar17->Vertices).AllocatorInstance.Data = pFVar5;
            (pFVar17->Vertices).ArrayNum = iVar15;
            (pFVar17->Vertices).ArrayMax = iVar16;
            iVar19 = 0;
            if (1 < iVar14) {
              do {
                iVar13 = iVar19 * 2;
                iVar15 = iVar13 + 1;
                if (iVar13 + 2 < iVar14) {
                  if (param_1[(longlong)iVar13 + 2].Vertices.ArrayNum <
                      param_1[iVar15].Vertices.ArrayNum) {
                    iVar15 = iVar13;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar1 = param_1 + iVar15;
                if ((pFVar1->Vertices).ArrayNum <= param_1[iVar19].Vertices.ArrayNum) break;
                uVar6 = *(undefined4 *)&pFVar1->field_0x4;
                pFVar4 = (pFVar1->Vertices).AllocatorInstance.Data;
                iVar7 = param_1[iVar19].Vertices.ArrayNum;
                iVar8 = param_1[iVar19].Vertices.ArrayMax;
                pFVar2 = param_1 + iVar19;
                iVar16 = pFVar2->Target;
                uVar9 = *(undefined4 *)&pFVar2->field_0x4;
                pFVar5 = (pFVar2->Vertices).AllocatorInstance.Data;
                pFVar2 = param_1 + iVar19;
                pFVar2->Target = pFVar1->Target;
                *(undefined4 *)&pFVar2->field_0x4 = uVar6;
                (pFVar2->Vertices).AllocatorInstance.Data = pFVar4;
                iVar13 = (pFVar1->Vertices).ArrayMax;
                param_1[iVar19].Vertices.ArrayNum = (pFVar1->Vertices).ArrayNum;
                param_1[iVar19].Vertices.ArrayMax = iVar13;
                pFVar1->Target = iVar16;
                *(undefined4 *)&pFVar1->field_0x4 = uVar9;
                (pFVar1->Vertices).AllocatorInstance.Data = pFVar5;
                (pFVar1->Vertices).ArrayNum = iVar7;
                (pFVar1->Vertices).ArrayMax = iVar8;
                iVar19 = iVar15;
              } while (iVar15 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar18 = lVar18 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar13 = iVar15 + -1;
      iVar14 = iVar19 + -2;
      iVar19 = iVar14;
      iVar15 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar16 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Vertices.ArrayNum < param_1[iVar16].Vertices.ArrayNum) {
        iVar16 = iVar14;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar17 = param_1 + iVar16;
    if ((pFVar17->Vertices).ArrayNum <= param_1[iVar13].Vertices.ArrayNum) goto LAB_1421a224d;
    uVar6 = *(undefined4 *)&pFVar17->field_0x4;
    pFVar4 = (pFVar17->Vertices).AllocatorInstance.Data;
    iVar14 = iVar16 * 2 + 1;
    iVar10 = param_1[iVar13].Vertices.ArrayNum;
    iVar11 = param_1[iVar13].Vertices.ArrayMax;
    pFVar1 = param_1 + iVar13;
    iVar8 = pFVar1->Target;
    uVar9 = *(undefined4 *)&pFVar1->field_0x4;
    pFVar5 = (pFVar1->Vertices).AllocatorInstance.Data;
    pFVar1 = param_1 + iVar13;
    pFVar1->Target = pFVar17->Target;
    *(undefined4 *)&pFVar1->field_0x4 = uVar6;
    (pFVar1->Vertices).AllocatorInstance.Data = pFVar4;
    iVar7 = (pFVar17->Vertices).ArrayMax;
    param_1[iVar13].Vertices.ArrayNum = (pFVar17->Vertices).ArrayNum;
    param_1[iVar13].Vertices.ArrayMax = iVar7;
    pFVar17->Target = iVar8;
    *(undefined4 *)&pFVar17->field_0x4 = uVar9;
    (pFVar17->Vertices).AllocatorInstance.Data = pFVar5;
    (pFVar17->Vertices).ArrayNum = iVar10;
    (pFVar17->Vertices).ArrayMax = iVar11;
    iVar13 = iVar16;
  } while( true );
}

// HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,`UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>'::__l38::<lambda_4>,TLess<int>_> @ 1421a2360

void __cdecl
AlgoImpl::
HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>_::__l38::<lambda_4>,TLess<int>_>
          (FGraphPath *param_1,int param_2,<lambda_4> param_3,TLess<int> param_4)

{
  FGraphPath *pFVar1;
  FGraphPath *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FGraphPath *pFVar17;
  longlong lVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar19 = iVar14;
  iVar15 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_1421a246d:
      if (iVar15 == 0) {
        iVar14 = param_2 + -1;
        lVar18 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar17 = param_1 + lVar18;
          do {
            uVar6 = *(undefined4 *)&pFVar17->field_0x4;
            pFVar4 = (pFVar17->Vertices).AllocatorInstance.Data;
            iVar15 = (param_1->Vertices).ArrayNum;
            iVar16 = (param_1->Vertices).ArrayMax;
            iVar13 = param_1->Target;
            uVar9 = *(undefined4 *)&param_1->field_0x4;
            pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
            param_1->Target = pFVar17->Target;
            *(undefined4 *)&param_1->field_0x4 = uVar6;
            (param_1->Vertices).AllocatorInstance.Data = pFVar4;
            iVar19 = (pFVar17->Vertices).ArrayMax;
            (param_1->Vertices).ArrayNum = (pFVar17->Vertices).ArrayNum;
            (param_1->Vertices).ArrayMax = iVar19;
            pFVar17->Target = iVar13;
            *(undefined4 *)&pFVar17->field_0x4 = uVar9;
            (pFVar17->Vertices).AllocatorInstance.Data = pFVar5;
            (pFVar17->Vertices).ArrayNum = iVar15;
            (pFVar17->Vertices).ArrayMax = iVar16;
            iVar19 = 0;
            if (1 < iVar14) {
              do {
                iVar13 = iVar19 * 2;
                iVar15 = iVar13 + 1;
                if (iVar13 + 2 < iVar14) {
                  if (param_1[(longlong)iVar13 + 2].Vertices.ArrayNum <
                      param_1[iVar15].Vertices.ArrayNum) {
                    iVar15 = iVar13;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar1 = param_1 + iVar15;
                if ((pFVar1->Vertices).ArrayNum <= param_1[iVar19].Vertices.ArrayNum) break;
                uVar6 = *(undefined4 *)&pFVar1->field_0x4;
                pFVar4 = (pFVar1->Vertices).AllocatorInstance.Data;
                iVar7 = param_1[iVar19].Vertices.ArrayNum;
                iVar8 = param_1[iVar19].Vertices.ArrayMax;
                pFVar2 = param_1 + iVar19;
                iVar16 = pFVar2->Target;
                uVar9 = *(undefined4 *)&pFVar2->field_0x4;
                pFVar5 = (pFVar2->Vertices).AllocatorInstance.Data;
                pFVar2 = param_1 + iVar19;
                pFVar2->Target = pFVar1->Target;
                *(undefined4 *)&pFVar2->field_0x4 = uVar6;
                (pFVar2->Vertices).AllocatorInstance.Data = pFVar4;
                iVar13 = (pFVar1->Vertices).ArrayMax;
                param_1[iVar19].Vertices.ArrayNum = (pFVar1->Vertices).ArrayNum;
                param_1[iVar19].Vertices.ArrayMax = iVar13;
                pFVar1->Target = iVar16;
                *(undefined4 *)&pFVar1->field_0x4 = uVar9;
                (pFVar1->Vertices).AllocatorInstance.Data = pFVar5;
                (pFVar1->Vertices).ArrayNum = iVar7;
                (pFVar1->Vertices).ArrayMax = iVar8;
                iVar19 = iVar15;
              } while (iVar15 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar18 = lVar18 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar13 = iVar15 + -1;
      iVar14 = iVar19 + -2;
      iVar19 = iVar14;
      iVar15 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar16 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Vertices.ArrayNum < param_1[iVar16].Vertices.ArrayNum) {
        iVar16 = iVar14;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar17 = param_1 + iVar16;
    if ((pFVar17->Vertices).ArrayNum <= param_1[iVar13].Vertices.ArrayNum) goto LAB_1421a246d;
    uVar6 = *(undefined4 *)&pFVar17->field_0x4;
    pFVar4 = (pFVar17->Vertices).AllocatorInstance.Data;
    iVar14 = iVar16 * 2 + 1;
    iVar10 = param_1[iVar13].Vertices.ArrayNum;
    iVar11 = param_1[iVar13].Vertices.ArrayMax;
    pFVar1 = param_1 + iVar13;
    iVar8 = pFVar1->Target;
    uVar9 = *(undefined4 *)&pFVar1->field_0x4;
    pFVar5 = (pFVar1->Vertices).AllocatorInstance.Data;
    pFVar1 = param_1 + iVar13;
    pFVar1->Target = pFVar17->Target;
    *(undefined4 *)&pFVar1->field_0x4 = uVar6;
    (pFVar1->Vertices).AllocatorInstance.Data = pFVar4;
    iVar7 = (pFVar17->Vertices).ArrayMax;
    param_1[iVar13].Vertices.ArrayNum = (pFVar17->Vertices).ArrayNum;
    param_1[iVar13].Vertices.ArrayMax = iVar7;
    pFVar17->Target = iVar8;
    *(undefined4 *)&pFVar17->field_0x4 = uVar9;
    (pFVar17->Vertices).AllocatorInstance.Data = pFVar5;
    (pFVar17->Vertices).ArrayNum = iVar10;
    (pFVar17->Vertices).ArrayMax = iVar11;
    iVar13 = iVar16;
  } while( true );
}

// HeapSortInternal<FNameEntryId,int,FIdentityFunctor,`anonymous_namespace'::FNameEntryIdSortHelper> @ 1421a2580

void __cdecl
AlgoImpl::
HeapSortInternal<FNameEntryId,int,FIdentityFunctor,_anonymous_namespace_::FNameEntryIdSortHelper>
          (FNameEntryId *param_1,int param_2,FIdentityFunctor param_3,FNameEntryIdSortHelper param_4
          )

{
  FNameEntryId FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FNameEntryId local_res10 [2];
  FNameEntryIdSortHelper local_res20 [8];
  FNameEntryId local_38 [4];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FNameEntryId,int,FIdentityFunctor,TReversePredicate<_anonymous_namespace_::FNameEntryIdSortHelper>_>
            (param_1,param_2,param_3,local_res20);
  iVar6 = param_2 + -1;
  lVar8 = (longlong)iVar6;
  if (0 < iVar6) {
    do {
      uVar4 = param_1->Value;
      iVar9 = 0;
      param_1->Value = param_1[lVar8].Value;
      param_1[lVar8].Value = uVar4;
      if (1 < iVar6) {
        do {
          iVar5 = iVar9 * 2;
          iVar7 = iVar5 + 1;
          if (iVar5 + 2 < iVar6) {
            FVar1.Value = param_1[iVar7].Value;
            local_res10[0].Value = param_1[(longlong)iVar5 + 2].Value;
            if (local_res10[0].Value == FVar1.Value) {
              uVar4 = 0;
            }
            else {
              uVar4 = FNameEntryId::CompareLexical(local_res10,FVar1);
              if (uVar4 == 0) {
                uVar4 = FNameEntryId::CompareLexicalSensitive(local_res10,FVar1);
              }
              uVar4 = uVar4 >> 0x1f;
            }
            if (uVar4 != 0) {
              iVar7 = iVar5;
            }
            iVar7 = iVar7 + 1;
          }
          FVar1.Value = param_1[iVar7].Value;
          local_38[0].Value = param_1[iVar9].Value;
          if (local_38[0].Value == FVar1.Value) break;
          iVar5 = FNameEntryId::CompareLexical(local_38,FVar1);
          if (iVar5 == 0) {
            iVar5 = FNameEntryId::CompareLexicalSensitive(local_38,FVar1);
          }
          if (-1 < iVar5) break;
          uVar4 = param_1[iVar9].Value;
          param_1[iVar9].Value = param_1[iVar7].Value;
          param_1[iVar7].Value = uVar4;
          iVar9 = iVar7;
        } while (iVar7 * 2 + 1 < iVar6);
      }
      iVar6 = iVar6 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}

// HeapSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_> @ 1421a2700

void __cdecl
AlgoImpl::
HeapSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_>
          (FRemoteServerId *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRemoteServerId,TLess<void>_> param_4)

{
  uint uVar1;
  code *pcVar2;
  FRemoteServerId FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FRemoteServerId FVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar11 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_1421a285e:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            uVar1 = param_1->Id;
            param_1->Id = param_1[lVar10].Id;
            param_1[lVar10].Id = uVar1;
            iVar11 = 0;
            if (1 < iVar6) {
              do {
                iVar9 = iVar11 * 2;
                iVar5 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  FVar8.Id = param_1[(longlong)iVar9 + 1].Id;
                  FRemoteServerId::VerifyComparableServerIds
                            (param_1[(longlong)iVar9 + 2].Id,FVar8.Id);
                  FVar3.Id = param_1[(longlong)iVar9 + 2].Id;
                  if (param_1[(longlong)iVar9 + 2].Id == 0x3fd) {
                    FVar3 = FRemoteServerId::GlobalServerId;
                  }
                  if (FVar8.Id == 0x3fd) {
                    FVar8 = FRemoteServerId::GlobalServerId;
                  }
                  if ((int)(FVar3.Id - FVar8.Id) < 0) {
                    iVar5 = iVar9;
                  }
                  iVar5 = iVar5 + 1;
                }
                FVar8.Id = param_1[iVar5].Id;
                FRemoteServerId::VerifyComparableServerIds(param_1[iVar11].Id,FVar8.Id);
                uVar1 = param_1[iVar11].Id;
                FVar3.Id = uVar1;
                if (uVar1 == 0x3fd) {
                  FVar3 = FRemoteServerId::GlobalServerId;
                }
                if (FVar8.Id == 0x3fd) {
                  FVar8 = FRemoteServerId::GlobalServerId;
                }
                if (-1 < (int)(FVar3.Id - FVar8.Id)) break;
                param_1[iVar11].Id = param_1[iVar5].Id;
                param_1[iVar5].Id = uVar1;
                iVar11 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar11 + -2;
      iVar11 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      FVar8.Id = param_1[(longlong)iVar6 + 1].Id;
      FRemoteServerId::VerifyComparableServerIds(param_1[(longlong)iVar6 + 2].Id,FVar8.Id);
      FVar3.Id = param_1[(longlong)iVar6 + 2].Id;
      if (param_1[(longlong)iVar6 + 2].Id == 0x3fd) {
        FVar3 = FRemoteServerId::GlobalServerId;
      }
      if (FVar8.Id == 0x3fd) {
        FVar8 = FRemoteServerId::GlobalServerId;
      }
      if ((int)(FVar3.Id - FVar8.Id) < 0) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    FVar8.Id = param_1[iVar7].Id;
    FRemoteServerId::VerifyComparableServerIds(param_1[iVar5].Id,FVar8.Id);
    uVar1 = param_1[iVar5].Id;
    FVar3.Id = uVar1;
    if (uVar1 == 0x3fd) {
      FVar3 = FRemoteServerId::GlobalServerId;
    }
    if (FVar8.Id == 0x3fd) {
      FVar8 = FRemoteServerId::GlobalServerId;
    }
    if (-1 < (int)(FVar3.Id - FVar8.Id)) goto LAB_1421a285e;
    param_1[iVar5].Id = param_1[iVar7].Id;
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7].Id = uVar1;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<UE::RemoteObject::Transfer::FObjectMigrationRequest,int,FIdentityFunctor,TDereferenceWrapper<UE::RemoteObject::Transfer::FObjectMigrationRequest,`UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration'::__l2::<lambda_1>_>_> @ 1421a2990

void __cdecl
AlgoImpl::
HeapSortInternal<UE::RemoteObject::Transfer::FObjectMigrationRequest,int,FIdentityFunctor,TDereferenceWrapper<UE::RemoteObject::Transfer::FObjectMigrationRequest,_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration_::__l2::<lambda_1>_>_>
          (FObjectMigrationRequest *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::RemoteObject::Transfer::FObjectMigrationRequest,_public:_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId)_::_2_::<lambda_1>_>
          param_4)

{
  FObjectMigrationRequest *pFVar1;
  FObjectMigrationRequest *pFVar2;
  ulong64 uVar3;
  code *pcVar4;
  FRemoteObjectId_u_0 FVar5;
  FRemoteServerId FVar6;
  undefined4 uVar7;
  FRemoteServerId FVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FObjectMigrationRequest *pFVar15;
  longlong lVar16;
  int iVar17;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar17 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_1421a2aa0:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar16 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar15 = param_1 + lVar16;
          do {
            FVar6.Id = (pFVar15->DestinationServerId).Id;
            uVar7 = *(undefined4 *)&pFVar15->field_0xc;
            uVar3 = (param_1->RequestPriority).PackedData;
            FVar5 = (param_1->ObjectId).field0_0x0;
            FVar8.Id = (param_1->DestinationServerId).Id;
            uVar9 = *(undefined4 *)&param_1->field_0xc;
            (param_1->ObjectId).field0_0x0 = (pFVar15->ObjectId).field0_0x0;
            param_1->DestinationServerId = (FRemoteServerId)FVar6.Id;
            *(undefined4 *)&param_1->field_0xc = uVar7;
            (param_1->RequestPriority).PackedData = (pFVar15->RequestPriority).PackedData;
            (pFVar15->ObjectId).field0_0x0 = FVar5;
            pFVar15->DestinationServerId = (FRemoteServerId)FVar8.Id;
            *(undefined4 *)&pFVar15->field_0xc = uVar9;
            (pFVar15->RequestPriority).PackedData = uVar3;
            iVar17 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar17 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (param_1[(longlong)iVar11 + 2].RequestPriority.PackedData <
                      param_1[iVar13].RequestPriority.PackedData) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                pFVar1 = param_1 + iVar13;
                if ((pFVar1->RequestPriority).PackedData <=
                    param_1[iVar17].RequestPriority.PackedData) break;
                FVar6.Id = (pFVar1->DestinationServerId).Id;
                uVar7 = *(undefined4 *)&pFVar1->field_0xc;
                uVar3 = param_1[iVar17].RequestPriority.PackedData;
                pFVar2 = param_1 + iVar17;
                FVar5 = (pFVar2->ObjectId).field0_0x0;
                FVar8.Id = (pFVar2->DestinationServerId).Id;
                uVar9 = *(undefined4 *)&pFVar2->field_0xc;
                pFVar2 = param_1 + iVar17;
                (pFVar2->ObjectId).field0_0x0 = (pFVar1->ObjectId).field0_0x0;
                pFVar2->DestinationServerId = (FRemoteServerId)FVar6.Id;
                *(undefined4 *)&pFVar2->field_0xc = uVar7;
                param_1[iVar17].RequestPriority.PackedData = (pFVar1->RequestPriority).PackedData;
                (pFVar1->ObjectId).field0_0x0 = FVar5;
                pFVar1->DestinationServerId = (FRemoteServerId)FVar8.Id;
                *(undefined4 *)&pFVar1->field_0xc = uVar9;
                (pFVar1->RequestPriority).PackedData = uVar3;
                iVar17 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar17 + -2;
      iVar17 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (param_1[(longlong)iVar12 + 2].RequestPriority.PackedData <
          param_1[iVar14].RequestPriority.PackedData) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar15 = param_1 + iVar14;
    if ((pFVar15->RequestPriority).PackedData <= param_1[iVar11].RequestPriority.PackedData)
    goto LAB_1421a2aa0;
    FVar6.Id = (pFVar15->DestinationServerId).Id;
    uVar7 = *(undefined4 *)&pFVar15->field_0xc;
    iVar12 = iVar14 * 2 + 1;
    uVar3 = param_1[iVar11].RequestPriority.PackedData;
    pFVar1 = param_1 + iVar11;
    FVar5 = (pFVar1->ObjectId).field0_0x0;
    FVar8.Id = (pFVar1->DestinationServerId).Id;
    uVar9 = *(undefined4 *)&pFVar1->field_0xc;
    pFVar1 = param_1 + iVar11;
    (pFVar1->ObjectId).field0_0x0 = (pFVar15->ObjectId).field0_0x0;
    pFVar1->DestinationServerId = (FRemoteServerId)FVar6.Id;
    *(undefined4 *)&pFVar1->field_0xc = uVar7;
    param_1[iVar11].RequestPriority.PackedData = (pFVar15->RequestPriority).PackedData;
    (pFVar15->ObjectId).field0_0x0 = FVar5;
    pFVar15->DestinationServerId = (FRemoteServerId)FVar8.Id;
    *(undefined4 *)&pFVar15->field_0xc = uVar9;
    (pFVar15->RequestPriority).PackedData = uVar3;
    iVar11 = iVar14;
  } while( true );
}

// HeapifyInternal<FNameEntryId,int,FIdentityFunctor,TReversePredicate<`anonymous_namespace'::FNameEntryIdSortHelper>_> @ 1421a2bb0

void __cdecl
AlgoImpl::
HeapifyInternal<FNameEntryId,int,FIdentityFunctor,TReversePredicate<_anonymous_namespace_::FNameEntryIdSortHelper>_>
          (FNameEntryId *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_anonymous_namespace_::FNameEntryIdSortHelper> param_4)

{
  FNameEntryId FVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FNameEntryId local_res10 [2];
  FNameEntryId local_38 [4];
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar7 = iVar5 * 2 + 1;
  iVar3 = iVar7;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_1421a2cdc:
      if (iVar9 == 0) {
        return;
      }
      iVar5 = iVar9 + -1;
      iVar7 = iVar3 + -2;
      iVar3 = iVar7;
      iVar9 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      FVar1.Value = param_1[iVar8].Value;
      local_res10[0].Value = param_1[(longlong)iVar7 + 2].Value;
      if (local_res10[0].Value == FVar1.Value) {
        uVar6 = 0;
      }
      else {
        uVar6 = FNameEntryId::CompareLexical(local_res10,FVar1);
        if (uVar6 == 0) {
          uVar6 = FNameEntryId::CompareLexicalSensitive(local_res10,FVar1);
        }
        uVar6 = uVar6 >> 0x1f;
      }
      if (uVar6 != 0) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    FVar1.Value = param_1[iVar8].Value;
    local_38[0].Value = param_1[iVar5].Value;
    if (local_38[0].Value == FVar1.Value) goto LAB_1421a2cdc;
    iVar7 = FNameEntryId::CompareLexical(local_38,FVar1);
    if (iVar7 == 0) {
      iVar7 = FNameEntryId::CompareLexicalSensitive(local_38,FVar1);
    }
    if (-1 < iVar7) goto LAB_1421a2cdc;
    uVar6 = param_1[iVar5].Value;
    param_1[iVar5].Value = param_1[iVar8].Value;
    iVar7 = iVar8 * 2 + 1;
    param_1[iVar8].Value = uVar6;
    iVar5 = iVar8;
  } while( true );
}

// IntroSortInternal<UE::ReferenceChainSearch::FGraphPath,int,`UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>'::__l36::<lambda_3>,TGreater<int>_> @ 1421a2d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>_::__l36::<lambda_3>,TGreater<int>_>
          (FGraphPath *param_1,int param_2,<lambda_3> param_3,TGreater<int> param_4)

{
  FGraphPath *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FGraphPath *pFVar12;
  FGraphPath *pFVar13;
  FGraphPath *pFVar14;
  FGraphPath *pFVar15;
  FGraphPath *pFVar16;
  FGraphPath *pFVar17;
  FGraphPath **ppFVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  FGraphPath *local_348;
  FGraphPath *local_338;
  FGraphPath *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppFVar18 = &local_338;
    do {
      pFVar12 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
      pFVar16 = pFVar17;
      if ((int)local_348 != 0) {
LAB_1421a2e00:
        if (8 < iVar11) {
          uVar4 = *(undefined4 *)&pFVar16->field_0x4;
          pFVar2 = (pFVar16->Vertices).AllocatorInstance.Data;
          pFVar13 = pFVar12 + 1;
          iVar11 = iVar11 / 2;
          pFVar17 = pFVar16 + iVar11;
          iVar6 = pFVar17->Target;
          uVar7 = *(undefined4 *)&pFVar17->field_0x4;
          pFVar3 = (pFVar17->Vertices).AllocatorInstance.Data;
          iVar8 = pFVar16[iVar11].Vertices.ArrayNum;
          iVar9 = pFVar16[iVar11].Vertices.ArrayMax;
          pFVar17 = pFVar16 + iVar11;
          pFVar17->Target = pFVar16->Target;
          *(undefined4 *)&pFVar17->field_0x4 = uVar4;
          (pFVar17->Vertices).AllocatorInstance.Data = pFVar2;
          iVar5 = (pFVar16->Vertices).ArrayMax;
          pFVar16[iVar11].Vertices.ArrayNum = (pFVar16->Vertices).ArrayNum;
          pFVar16[iVar11].Vertices.ArrayMax = iVar5;
          pFVar16->Target = iVar6;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          (pFVar16->Vertices).AllocatorInstance.Data = pFVar3;
          (pFVar16->Vertices).ArrayNum = iVar8;
          (pFVar16->Vertices).ArrayMax = iVar9;
          pFVar17 = pFVar16;
LAB_1421a2e50:
          pFVar15 = pFVar17;
          pFVar17 = pFVar15 + 1;
          if (pFVar17 <= pFVar12) goto code_r0x0001421a2e59;
          goto LAB_1421a2e63;
        }
        for (; pFVar17 = pFVar16, pFVar1 = pFVar16, pFVar16 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar12) {
            if ((pFVar1->Vertices).ArrayNum < (pFVar17->Vertices).ArrayNum) {
              pFVar17 = pFVar1;
            }
          }
          iVar5 = pFVar17->Target;
          uVar7 = *(undefined4 *)&pFVar17->field_0x4;
          pFVar2 = (pFVar17->Vertices).AllocatorInstance.Data;
          iVar6 = (pFVar17->Vertices).ArrayNum;
          iVar8 = (pFVar17->Vertices).ArrayMax;
          uVar4 = *(undefined4 *)&pFVar12->field_0x4;
          pFVar3 = (pFVar12->Vertices).AllocatorInstance.Data;
          pFVar17->Target = pFVar12->Target;
          *(undefined4 *)&pFVar17->field_0x4 = uVar4;
          (pFVar17->Vertices).AllocatorInstance.Data = pFVar3;
          iVar11 = (pFVar12->Vertices).ArrayMax;
          (pFVar17->Vertices).ArrayNum = (pFVar12->Vertices).ArrayNum;
          (pFVar17->Vertices).ArrayMax = iVar11;
          pFVar12->Target = iVar5;
          *(undefined4 *)&pFVar12->field_0x4 = uVar7;
          (pFVar12->Vertices).AllocatorInstance.Data = pFVar2;
          (pFVar12->Vertices).ArrayNum = iVar6;
          (pFVar12->Vertices).ArrayMax = iVar8;
        }
        goto LAB_1421a2f86;
      }
LAB_1421a2f76:
      local_348 = pFVar1;
      HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>_::__l36::<lambda_3>,TGreater<int>_>
                (pFVar17,iVar11,param_3,param_4);
LAB_1421a2f86:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_338 <= ppFVar18);
  }
  return;
code_r0x0001421a2e59:
  if ((pFVar16->Vertices).ArrayNum <= pFVar15[1].Vertices.ArrayNum) goto LAB_1421a2e50;
LAB_1421a2e63:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar16) break;
  } while (pFVar14[-1].Vertices.ArrayNum <= (pFVar16->Vertices).ArrayNum);
  pFVar2 = pFVar14[-1].Vertices.AllocatorInstance.Data;
  if (pFVar17 <= pFVar13) {
    iVar5 = pFVar17->Target;
    uVar4 = *(undefined4 *)&pFVar17->field_0x4;
    pFVar3 = pFVar15[1].Vertices.AllocatorInstance.Data;
    iVar6 = pFVar15[1].Vertices.ArrayNum;
    iVar8 = pFVar15[1].Vertices.ArrayMax;
    *(undefined8 *)pFVar17 = *(undefined8 *)pFVar13;
    pFVar15[1].Vertices.AllocatorInstance.Data = pFVar2;
    iVar11 = pFVar14[-1].Vertices.ArrayMax;
    pFVar15[1].Vertices.ArrayNum = pFVar14[-1].Vertices.ArrayNum;
    pFVar15[1].Vertices.ArrayMax = iVar11;
    pFVar13->Target = iVar5;
    *(undefined4 *)&pFVar13->field_0x4 = uVar4;
    pFVar14[-1].Vertices.AllocatorInstance.Data = pFVar3;
    pFVar14[-1].Vertices.ArrayNum = iVar6;
    pFVar14[-1].Vertices.ArrayMax = iVar8;
    goto LAB_1421a2e50;
  }
  iVar5 = pFVar16->Target;
  uVar4 = *(undefined4 *)&pFVar16->field_0x4;
  pFVar3 = (pFVar16->Vertices).AllocatorInstance.Data;
  iVar6 = (pFVar16->Vertices).ArrayNum;
  iVar8 = (pFVar16->Vertices).ArrayMax;
  lVar10 = (longlong)pFVar13 + (-0x18 - (longlong)pFVar16);
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar13;
  (pFVar16->Vertices).AllocatorInstance.Data = pFVar2;
  iVar11 = pFVar14[-1].Vertices.ArrayMax;
  (pFVar16->Vertices).ArrayNum = pFVar14[-1].Vertices.ArrayNum;
  (pFVar16->Vertices).ArrayMax = iVar11;
  pFVar13->Target = iVar5;
  *(undefined4 *)&pFVar13->field_0x4 = uVar4;
  pFVar14[-1].Vertices.AllocatorInstance.Data = pFVar3;
  pFVar14[-1].Vertices.ArrayNum = iVar6;
  pFVar14[-1].Vertices.ArrayMax = iVar8;
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar17) / 0x18) {
    if (pFVar17 < pFVar12) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar12;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar13 <= pFVar16 + 1) goto LAB_1421a2f86;
    pFVar12 = pFVar14 + -2;
    pFVar17 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar13) {
      *ppFVar18 = pFVar16;
      ppFVar18[1] = pFVar14 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar12 <= pFVar17) goto LAB_1421a2f86;
  }
  iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
  pFVar16 = pFVar17;
  if ((int)local_348 == 0) goto LAB_1421a2f76;
  goto LAB_1421a2e00;
}

// IntroSortInternal<UE::ReferenceChainSearch::FGraphPath,int,`UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>'::__l36::<lambda_3>,TGreater<int>_> @ 1421a3040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>_::__l36::<lambda_3>,TGreater<int>_>
          (FGraphPath *param_1,int param_2,<lambda_3> param_3,TGreater<int> param_4)

{
  FGraphPath *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FGraphPath *pFVar12;
  FGraphPath *pFVar13;
  FGraphPath *pFVar14;
  FGraphPath *pFVar15;
  FGraphPath *pFVar16;
  FGraphPath *pFVar17;
  FGraphPath **ppFVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  FGraphPath *local_348;
  FGraphPath *local_338;
  FGraphPath *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppFVar18 = &local_338;
    do {
      pFVar12 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
      pFVar16 = pFVar17;
      if ((int)local_348 != 0) {
LAB_1421a3120:
        if (8 < iVar11) {
          uVar4 = *(undefined4 *)&pFVar16->field_0x4;
          pFVar2 = (pFVar16->Vertices).AllocatorInstance.Data;
          pFVar13 = pFVar12 + 1;
          iVar11 = iVar11 / 2;
          pFVar17 = pFVar16 + iVar11;
          iVar6 = pFVar17->Target;
          uVar7 = *(undefined4 *)&pFVar17->field_0x4;
          pFVar3 = (pFVar17->Vertices).AllocatorInstance.Data;
          iVar8 = pFVar16[iVar11].Vertices.ArrayNum;
          iVar9 = pFVar16[iVar11].Vertices.ArrayMax;
          pFVar17 = pFVar16 + iVar11;
          pFVar17->Target = pFVar16->Target;
          *(undefined4 *)&pFVar17->field_0x4 = uVar4;
          (pFVar17->Vertices).AllocatorInstance.Data = pFVar2;
          iVar5 = (pFVar16->Vertices).ArrayMax;
          pFVar16[iVar11].Vertices.ArrayNum = (pFVar16->Vertices).ArrayNum;
          pFVar16[iVar11].Vertices.ArrayMax = iVar5;
          pFVar16->Target = iVar6;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          (pFVar16->Vertices).AllocatorInstance.Data = pFVar3;
          (pFVar16->Vertices).ArrayNum = iVar8;
          (pFVar16->Vertices).ArrayMax = iVar9;
          pFVar17 = pFVar16;
LAB_1421a3170:
          pFVar15 = pFVar17;
          pFVar17 = pFVar15 + 1;
          if (pFVar17 <= pFVar12) goto code_r0x0001421a3179;
          goto LAB_1421a3183;
        }
        for (; pFVar17 = pFVar16, pFVar1 = pFVar16, pFVar16 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar12) {
            if ((pFVar1->Vertices).ArrayNum < (pFVar17->Vertices).ArrayNum) {
              pFVar17 = pFVar1;
            }
          }
          iVar5 = pFVar17->Target;
          uVar7 = *(undefined4 *)&pFVar17->field_0x4;
          pFVar2 = (pFVar17->Vertices).AllocatorInstance.Data;
          iVar6 = (pFVar17->Vertices).ArrayNum;
          iVar8 = (pFVar17->Vertices).ArrayMax;
          uVar4 = *(undefined4 *)&pFVar12->field_0x4;
          pFVar3 = (pFVar12->Vertices).AllocatorInstance.Data;
          pFVar17->Target = pFVar12->Target;
          *(undefined4 *)&pFVar17->field_0x4 = uVar4;
          (pFVar17->Vertices).AllocatorInstance.Data = pFVar3;
          iVar11 = (pFVar12->Vertices).ArrayMax;
          (pFVar17->Vertices).ArrayNum = (pFVar12->Vertices).ArrayNum;
          (pFVar17->Vertices).ArrayMax = iVar11;
          pFVar12->Target = iVar5;
          *(undefined4 *)&pFVar12->field_0x4 = uVar7;
          (pFVar12->Vertices).AllocatorInstance.Data = pFVar2;
          (pFVar12->Vertices).ArrayNum = iVar6;
          (pFVar12->Vertices).ArrayMax = iVar8;
        }
        goto LAB_1421a32a6;
      }
LAB_1421a3296:
      local_348 = pFVar1;
      HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>_::__l36::<lambda_3>,TGreater<int>_>
                (pFVar17,iVar11,param_3,param_4);
LAB_1421a32a6:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_338 <= ppFVar18);
  }
  return;
code_r0x0001421a3179:
  if ((pFVar16->Vertices).ArrayNum <= pFVar15[1].Vertices.ArrayNum) goto LAB_1421a3170;
LAB_1421a3183:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar16) break;
  } while (pFVar14[-1].Vertices.ArrayNum <= (pFVar16->Vertices).ArrayNum);
  pFVar2 = pFVar14[-1].Vertices.AllocatorInstance.Data;
  if (pFVar17 <= pFVar13) {
    iVar5 = pFVar17->Target;
    uVar4 = *(undefined4 *)&pFVar17->field_0x4;
    pFVar3 = pFVar15[1].Vertices.AllocatorInstance.Data;
    iVar6 = pFVar15[1].Vertices.ArrayNum;
    iVar8 = pFVar15[1].Vertices.ArrayMax;
    *(undefined8 *)pFVar17 = *(undefined8 *)pFVar13;
    pFVar15[1].Vertices.AllocatorInstance.Data = pFVar2;
    iVar11 = pFVar14[-1].Vertices.ArrayMax;
    pFVar15[1].Vertices.ArrayNum = pFVar14[-1].Vertices.ArrayNum;
    pFVar15[1].Vertices.ArrayMax = iVar11;
    pFVar13->Target = iVar5;
    *(undefined4 *)&pFVar13->field_0x4 = uVar4;
    pFVar14[-1].Vertices.AllocatorInstance.Data = pFVar3;
    pFVar14[-1].Vertices.ArrayNum = iVar6;
    pFVar14[-1].Vertices.ArrayMax = iVar8;
    goto LAB_1421a3170;
  }
  iVar5 = pFVar16->Target;
  uVar4 = *(undefined4 *)&pFVar16->field_0x4;
  pFVar3 = (pFVar16->Vertices).AllocatorInstance.Data;
  iVar6 = (pFVar16->Vertices).ArrayNum;
  iVar8 = (pFVar16->Vertices).ArrayMax;
  lVar10 = (longlong)pFVar13 + (-0x18 - (longlong)pFVar16);
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar13;
  (pFVar16->Vertices).AllocatorInstance.Data = pFVar2;
  iVar11 = pFVar14[-1].Vertices.ArrayMax;
  (pFVar16->Vertices).ArrayNum = pFVar14[-1].Vertices.ArrayNum;
  (pFVar16->Vertices).ArrayMax = iVar11;
  pFVar13->Target = iVar5;
  *(undefined4 *)&pFVar13->field_0x4 = uVar4;
  pFVar14[-1].Vertices.AllocatorInstance.Data = pFVar3;
  pFVar14[-1].Vertices.ArrayNum = iVar6;
  pFVar14[-1].Vertices.ArrayMax = iVar8;
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar17) / 0x18) {
    if (pFVar17 < pFVar12) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar12;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar13 <= pFVar16 + 1) goto LAB_1421a32a6;
    pFVar12 = pFVar14 + -2;
    pFVar17 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar13) {
      *ppFVar18 = pFVar16;
      ppFVar18[1] = pFVar14 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar12 <= pFVar17) goto LAB_1421a32a6;
  }
  iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
  pFVar16 = pFVar17;
  if ((int)local_348 == 0) goto LAB_1421a3296;
  goto LAB_1421a3120;
}

// IntroSortInternal<UE::ReferenceChainSearch::FGraphPath,int,`UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>'::__l38::<lambda_4>,TLess<int>_> @ 1421a3360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>_::__l38::<lambda_4>,TLess<int>_>
          (FGraphPath *param_1,int param_2,<lambda_4> param_3,TLess<int> param_4)

{
  FGraphPath *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FGraphPath *pFVar12;
  FGraphPath *pFVar13;
  FGraphPath *pFVar14;
  FGraphPath *pFVar15;
  FGraphPath *pFVar16;
  FGraphPath *pFVar17;
  FGraphPath **ppFVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  FGraphPath *local_348;
  FGraphPath *local_338;
  FGraphPath *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppFVar18 = &local_338;
    do {
      pFVar12 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
      pFVar16 = pFVar17;
      if ((int)local_348 != 0) {
LAB_1421a3440:
        if (8 < iVar11) {
          uVar4 = *(undefined4 *)&pFVar16->field_0x4;
          pFVar2 = (pFVar16->Vertices).AllocatorInstance.Data;
          pFVar13 = pFVar12 + 1;
          iVar11 = iVar11 / 2;
          pFVar17 = pFVar16 + iVar11;
          iVar6 = pFVar17->Target;
          uVar7 = *(undefined4 *)&pFVar17->field_0x4;
          pFVar3 = (pFVar17->Vertices).AllocatorInstance.Data;
          iVar8 = pFVar16[iVar11].Vertices.ArrayNum;
          iVar9 = pFVar16[iVar11].Vertices.ArrayMax;
          pFVar17 = pFVar16 + iVar11;
          pFVar17->Target = pFVar16->Target;
          *(undefined4 *)&pFVar17->field_0x4 = uVar4;
          (pFVar17->Vertices).AllocatorInstance.Data = pFVar2;
          iVar5 = (pFVar16->Vertices).ArrayMax;
          pFVar16[iVar11].Vertices.ArrayNum = (pFVar16->Vertices).ArrayNum;
          pFVar16[iVar11].Vertices.ArrayMax = iVar5;
          pFVar16->Target = iVar6;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          (pFVar16->Vertices).AllocatorInstance.Data = pFVar3;
          (pFVar16->Vertices).ArrayNum = iVar8;
          (pFVar16->Vertices).ArrayMax = iVar9;
          pFVar17 = pFVar16;
LAB_1421a3490:
          pFVar15 = pFVar17;
          pFVar17 = pFVar15 + 1;
          if (pFVar17 <= pFVar12) goto code_r0x0001421a3499;
          goto LAB_1421a34a3;
        }
        for (; pFVar17 = pFVar16, pFVar1 = pFVar16, pFVar16 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar12) {
            if ((pFVar17->Vertices).ArrayNum < (pFVar1->Vertices).ArrayNum) {
              pFVar17 = pFVar1;
            }
          }
          iVar5 = pFVar17->Target;
          uVar7 = *(undefined4 *)&pFVar17->field_0x4;
          pFVar2 = (pFVar17->Vertices).AllocatorInstance.Data;
          iVar6 = (pFVar17->Vertices).ArrayNum;
          iVar8 = (pFVar17->Vertices).ArrayMax;
          uVar4 = *(undefined4 *)&pFVar12->field_0x4;
          pFVar3 = (pFVar12->Vertices).AllocatorInstance.Data;
          pFVar17->Target = pFVar12->Target;
          *(undefined4 *)&pFVar17->field_0x4 = uVar4;
          (pFVar17->Vertices).AllocatorInstance.Data = pFVar3;
          iVar11 = (pFVar12->Vertices).ArrayMax;
          (pFVar17->Vertices).ArrayNum = (pFVar12->Vertices).ArrayNum;
          (pFVar17->Vertices).ArrayMax = iVar11;
          pFVar12->Target = iVar5;
          *(undefined4 *)&pFVar12->field_0x4 = uVar7;
          (pFVar12->Vertices).AllocatorInstance.Data = pFVar2;
          (pFVar12->Vertices).ArrayNum = iVar6;
          (pFVar12->Vertices).ArrayMax = iVar8;
        }
        goto LAB_1421a35c6;
      }
LAB_1421a35b6:
      local_348 = pFVar1;
      HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>_::__l38::<lambda_4>,TLess<int>_>
                (pFVar17,iVar11,param_3,param_4);
LAB_1421a35c6:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_338 <= ppFVar18);
  }
  return;
code_r0x0001421a3499:
  if (pFVar15[1].Vertices.ArrayNum <= (pFVar16->Vertices).ArrayNum) goto LAB_1421a3490;
LAB_1421a34a3:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar16) break;
  } while ((pFVar16->Vertices).ArrayNum <= pFVar14[-1].Vertices.ArrayNum);
  pFVar2 = pFVar14[-1].Vertices.AllocatorInstance.Data;
  if (pFVar17 <= pFVar13) {
    iVar5 = pFVar17->Target;
    uVar4 = *(undefined4 *)&pFVar17->field_0x4;
    pFVar3 = pFVar15[1].Vertices.AllocatorInstance.Data;
    iVar6 = pFVar15[1].Vertices.ArrayNum;
    iVar8 = pFVar15[1].Vertices.ArrayMax;
    *(undefined8 *)pFVar17 = *(undefined8 *)pFVar13;
    pFVar15[1].Vertices.AllocatorInstance.Data = pFVar2;
    iVar11 = pFVar14[-1].Vertices.ArrayMax;
    pFVar15[1].Vertices.ArrayNum = pFVar14[-1].Vertices.ArrayNum;
    pFVar15[1].Vertices.ArrayMax = iVar11;
    pFVar13->Target = iVar5;
    *(undefined4 *)&pFVar13->field_0x4 = uVar4;
    pFVar14[-1].Vertices.AllocatorInstance.Data = pFVar3;
    pFVar14[-1].Vertices.ArrayNum = iVar6;
    pFVar14[-1].Vertices.ArrayMax = iVar8;
    goto LAB_1421a3490;
  }
  iVar5 = pFVar16->Target;
  uVar4 = *(undefined4 *)&pFVar16->field_0x4;
  pFVar3 = (pFVar16->Vertices).AllocatorInstance.Data;
  iVar6 = (pFVar16->Vertices).ArrayNum;
  iVar8 = (pFVar16->Vertices).ArrayMax;
  lVar10 = (longlong)pFVar13 + (-0x18 - (longlong)pFVar16);
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar13;
  (pFVar16->Vertices).AllocatorInstance.Data = pFVar2;
  iVar11 = pFVar14[-1].Vertices.ArrayMax;
  (pFVar16->Vertices).ArrayNum = pFVar14[-1].Vertices.ArrayNum;
  (pFVar16->Vertices).ArrayMax = iVar11;
  pFVar13->Target = iVar5;
  *(undefined4 *)&pFVar13->field_0x4 = uVar4;
  pFVar14[-1].Vertices.AllocatorInstance.Data = pFVar3;
  pFVar14[-1].Vertices.ArrayNum = iVar6;
  pFVar14[-1].Vertices.ArrayMax = iVar8;
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar17) / 0x18) {
    if (pFVar17 < pFVar12) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar12;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar13 <= pFVar16 + 1) goto LAB_1421a35c6;
    pFVar12 = pFVar14 + -2;
    pFVar17 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar13) {
      *ppFVar18 = pFVar16;
      ppFVar18[1] = pFVar14 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar12 <= pFVar17) goto LAB_1421a35c6;
  }
  iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
  pFVar16 = pFVar17;
  if ((int)local_348 == 0) goto LAB_1421a35b6;
  goto LAB_1421a3440;
}

// IntroSortInternal<UE::ReferenceChainSearch::FGraphPath,int,`UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>'::__l38::<lambda_4>,TLess<int>_> @ 1421a3680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>_::__l38::<lambda_4>,TLess<int>_>
          (FGraphPath *param_1,int param_2,<lambda_4> param_3,TLess<int> param_4)

{
  FGraphPath *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FGraphPath *pFVar12;
  FGraphPath *pFVar13;
  FGraphPath *pFVar14;
  FGraphPath *pFVar15;
  FGraphPath *pFVar16;
  FGraphPath *pFVar17;
  FGraphPath **ppFVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  FGraphPath *local_348;
  FGraphPath *local_338;
  FGraphPath *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppFVar18 = &local_338;
    do {
      pFVar12 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
      pFVar16 = pFVar17;
      if ((int)local_348 != 0) {
LAB_1421a3760:
        if (8 < iVar11) {
          uVar4 = *(undefined4 *)&pFVar16->field_0x4;
          pFVar2 = (pFVar16->Vertices).AllocatorInstance.Data;
          pFVar13 = pFVar12 + 1;
          iVar11 = iVar11 / 2;
          pFVar17 = pFVar16 + iVar11;
          iVar6 = pFVar17->Target;
          uVar7 = *(undefined4 *)&pFVar17->field_0x4;
          pFVar3 = (pFVar17->Vertices).AllocatorInstance.Data;
          iVar8 = pFVar16[iVar11].Vertices.ArrayNum;
          iVar9 = pFVar16[iVar11].Vertices.ArrayMax;
          pFVar17 = pFVar16 + iVar11;
          pFVar17->Target = pFVar16->Target;
          *(undefined4 *)&pFVar17->field_0x4 = uVar4;
          (pFVar17->Vertices).AllocatorInstance.Data = pFVar2;
          iVar5 = (pFVar16->Vertices).ArrayMax;
          pFVar16[iVar11].Vertices.ArrayNum = (pFVar16->Vertices).ArrayNum;
          pFVar16[iVar11].Vertices.ArrayMax = iVar5;
          pFVar16->Target = iVar6;
          *(undefined4 *)&pFVar16->field_0x4 = uVar7;
          (pFVar16->Vertices).AllocatorInstance.Data = pFVar3;
          (pFVar16->Vertices).ArrayNum = iVar8;
          (pFVar16->Vertices).ArrayMax = iVar9;
          pFVar17 = pFVar16;
LAB_1421a37b0:
          pFVar15 = pFVar17;
          pFVar17 = pFVar15 + 1;
          if (pFVar17 <= pFVar12) goto code_r0x0001421a37b9;
          goto LAB_1421a37c3;
        }
        for (; pFVar17 = pFVar16, pFVar1 = pFVar16, pFVar16 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar12) {
            if ((pFVar17->Vertices).ArrayNum < (pFVar1->Vertices).ArrayNum) {
              pFVar17 = pFVar1;
            }
          }
          iVar5 = pFVar17->Target;
          uVar7 = *(undefined4 *)&pFVar17->field_0x4;
          pFVar2 = (pFVar17->Vertices).AllocatorInstance.Data;
          iVar6 = (pFVar17->Vertices).ArrayNum;
          iVar8 = (pFVar17->Vertices).ArrayMax;
          uVar4 = *(undefined4 *)&pFVar12->field_0x4;
          pFVar3 = (pFVar12->Vertices).AllocatorInstance.Data;
          pFVar17->Target = pFVar12->Target;
          *(undefined4 *)&pFVar17->field_0x4 = uVar4;
          (pFVar17->Vertices).AllocatorInstance.Data = pFVar3;
          iVar11 = (pFVar12->Vertices).ArrayMax;
          (pFVar17->Vertices).ArrayNum = (pFVar12->Vertices).ArrayNum;
          (pFVar17->Vertices).ArrayMax = iVar11;
          pFVar12->Target = iVar5;
          *(undefined4 *)&pFVar12->field_0x4 = uVar7;
          (pFVar12->Vertices).AllocatorInstance.Data = pFVar2;
          (pFVar12->Vertices).ArrayNum = iVar6;
          (pFVar12->Vertices).ArrayMax = iVar8;
        }
        goto LAB_1421a38e6;
      }
LAB_1421a38d6:
      local_348 = pFVar1;
      HeapSortInternal<UE::ReferenceChainSearch::FGraphPath,int,_UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>_::__l38::<lambda_4>,TLess<int>_>
                (pFVar17,iVar11,param_3,param_4);
LAB_1421a38e6:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_338 <= ppFVar18);
  }
  return;
code_r0x0001421a37b9:
  if (pFVar15[1].Vertices.ArrayNum <= (pFVar16->Vertices).ArrayNum) goto LAB_1421a37b0;
LAB_1421a37c3:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar16) break;
  } while ((pFVar16->Vertices).ArrayNum <= pFVar14[-1].Vertices.ArrayNum);
  pFVar2 = pFVar14[-1].Vertices.AllocatorInstance.Data;
  if (pFVar17 <= pFVar13) {
    iVar5 = pFVar17->Target;
    uVar4 = *(undefined4 *)&pFVar17->field_0x4;
    pFVar3 = pFVar15[1].Vertices.AllocatorInstance.Data;
    iVar6 = pFVar15[1].Vertices.ArrayNum;
    iVar8 = pFVar15[1].Vertices.ArrayMax;
    *(undefined8 *)pFVar17 = *(undefined8 *)pFVar13;
    pFVar15[1].Vertices.AllocatorInstance.Data = pFVar2;
    iVar11 = pFVar14[-1].Vertices.ArrayMax;
    pFVar15[1].Vertices.ArrayNum = pFVar14[-1].Vertices.ArrayNum;
    pFVar15[1].Vertices.ArrayMax = iVar11;
    pFVar13->Target = iVar5;
    *(undefined4 *)&pFVar13->field_0x4 = uVar4;
    pFVar14[-1].Vertices.AllocatorInstance.Data = pFVar3;
    pFVar14[-1].Vertices.ArrayNum = iVar6;
    pFVar14[-1].Vertices.ArrayMax = iVar8;
    goto LAB_1421a37b0;
  }
  iVar5 = pFVar16->Target;
  uVar4 = *(undefined4 *)&pFVar16->field_0x4;
  pFVar3 = (pFVar16->Vertices).AllocatorInstance.Data;
  iVar6 = (pFVar16->Vertices).ArrayNum;
  iVar8 = (pFVar16->Vertices).ArrayMax;
  lVar10 = (longlong)pFVar13 + (-0x18 - (longlong)pFVar16);
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar13;
  (pFVar16->Vertices).AllocatorInstance.Data = pFVar2;
  iVar11 = pFVar14[-1].Vertices.ArrayMax;
  (pFVar16->Vertices).ArrayNum = pFVar14[-1].Vertices.ArrayNum;
  (pFVar16->Vertices).ArrayMax = iVar11;
  pFVar13->Target = iVar5;
  *(undefined4 *)&pFVar13->field_0x4 = uVar4;
  pFVar14[-1].Vertices.AllocatorInstance.Data = pFVar3;
  pFVar14[-1].Vertices.ArrayNum = iVar6;
  pFVar14[-1].Vertices.ArrayMax = iVar8;
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar17) / 0x18) {
    if (pFVar17 < pFVar12) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar12;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar13 <= pFVar16 + 1) goto LAB_1421a38e6;
    pFVar12 = pFVar14 + -2;
    pFVar17 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar13) {
      *ppFVar18 = pFVar16;
      ppFVar18[1] = pFVar14 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar12 <= pFVar17) goto LAB_1421a38e6;
  }
  iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
  pFVar16 = pFVar17;
  if ((int)local_348 == 0) goto LAB_1421a38d6;
  goto LAB_1421a3760;
}

// IntroSortInternal<FNameEntryId,int,FIdentityFunctor,`anonymous_namespace'::FNameEntryIdSortHelper> @ 1421a39a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FNameEntryId,int,FIdentityFunctor,_anonymous_namespace_::FNameEntryIdSortHelper>
          (FNameEntryId *param_1,int param_2,FIdentityFunctor param_3,FNameEntryIdSortHelper param_4
          )

{
  uint uVar1;
  FNameEntryId FVar2;
  int iVar3;
  byte bVar4;
  FNameEntryId *pFVar5;
  FNameEntryId *pFVar6;
  FNameEntryId **ppFVar7;
  FNameEntryId *pFVar8;
  FNameEntryId *pFVar9;
  FNameEntryId *pFVar10;
  float fVar11;
  undefined1 auStack_3a8 [32];
  FNameEntryId local_388 [2];
  FNameEntryId local_380 [2];
  FNameEntryId **local_378;
  FNameEntryId *local_360;
  FNameEntryId *local_358;
  FNameEntryId *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar11;
    memset(local_340,0,0x2e8);
    ppFVar7 = &local_358;
    do {
      pFVar8 = ppFVar7[1];
      pFVar6 = *ppFVar7;
      local_360 = ppFVar7[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar6 >> 2) + 1;
      local_380[0].Value = (uint)local_360;
      pFVar5 = pFVar6;
      local_378 = ppFVar7;
      if ((uint)local_360 != 0) {
LAB_1421a3a63:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar9 = pFVar8 + 1;
          uVar1 = pFVar5[iVar3 >> 1].Value;
          pFVar5[iVar3 >> 1].Value = pFVar5->Value;
          pFVar5->Value = uVar1;
          pFVar6 = pFVar5;
LAB_1421a3a90:
          pFVar6 = pFVar6 + 1;
          if (pFVar6 <= pFVar8) goto code_r0x0001421a3a99;
          goto LAB_1421a3ad0;
        }
        for (; pFVar9 = pFVar5, pFVar6 = pFVar5, pFVar5 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar10 = pFVar9, pFVar6 = pFVar6 + 1, pFVar6 <= pFVar8) {
            local_380[0].Value = pFVar10->Value;
            FVar2.Value = pFVar6->Value;
            if (local_380[0].Value == FVar2.Value) {
              bVar4 = 0;
            }
            else {
              iVar3 = FNameEntryId::CompareLexical(local_380,FVar2);
              if (iVar3 == 0) {
                iVar3 = FNameEntryId::CompareLexicalSensitive(local_380,FVar2);
                bVar4 = (byte)((uint)iVar3 >> 0x1f);
              }
              else {
                bVar4 = (byte)((uint)iVar3 >> 0x1f);
              }
            }
            pFVar9 = pFVar6;
            if (bVar4 == 0) {
              pFVar9 = pFVar10;
            }
          }
          uVar1 = pFVar10->Value;
          pFVar10->Value = pFVar8->Value;
          pFVar8->Value = uVar1;
          ppFVar7 = local_378;
        }
        goto LAB_1421a3bcd;
      }
LAB_1421a3bbb:
      HeapSortInternal<FNameEntryId,int,FIdentityFunctor,_anonymous_namespace_::FNameEntryIdSortHelper>
                (pFVar6,iVar3,param_3,param_4);
LAB_1421a3bcd:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_358 <= ppFVar7);
  }
  return;
code_r0x0001421a3a99:
  local_388[0].Value = pFVar5->Value;
  FVar2.Value = pFVar6->Value;
  if (local_388[0].Value == FVar2.Value) goto LAB_1421a3a90;
  iVar3 = FNameEntryId::CompareLexical(local_388,FVar2);
  if (iVar3 == 0) {
    iVar3 = FNameEntryId::CompareLexicalSensitive(local_388,FVar2);
  }
  if (-1 < iVar3) goto LAB_1421a3a90;
LAB_1421a3ad0:
  do {
    do {
      pFVar10 = pFVar9;
      pFVar9 = pFVar10 + -1;
      if (pFVar9 <= pFVar5) goto LAB_1421a3b0a;
      local_388[0].Value = pFVar9->Value;
      FVar2.Value = pFVar5->Value;
    } while (local_388[0].Value == FVar2.Value);
    iVar3 = FNameEntryId::CompareLexical(local_388,FVar2);
    if (iVar3 == 0) {
      iVar3 = FNameEntryId::CompareLexicalSensitive(local_388,FVar2);
    }
  } while (-1 < iVar3);
LAB_1421a3b0a:
  if (pFVar6 <= pFVar9) {
    uVar1 = pFVar6->Value;
    pFVar6->Value = pFVar9->Value;
    pFVar9->Value = uVar1;
    goto LAB_1421a3a90;
  }
  uVar1 = pFVar5->Value;
  pFVar5->Value = pFVar9->Value;
  local_380[0].Value = local_380[0].Value - 1;
  pFVar9->Value = uVar1;
  if ((longlong)((longlong)pFVar9 + (-4 - (longlong)pFVar5) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar6 & 0xfffffffffffffffcU)) {
    if (pFVar6 < pFVar8) {
      *ppFVar7 = pFVar6;
      ppFVar7[1] = pFVar8;
      *(uint *)(ppFVar7 + 2) = local_380[0].Value;
      ppFVar7 = ppFVar7 + 3;
      local_378 = ppFVar7;
    }
    if (pFVar9 <= pFVar5 + 1) goto LAB_1421a3bcd;
    pFVar8 = pFVar10 + -2;
    pFVar6 = pFVar5;
  }
  else {
    if (pFVar5 + 1 < pFVar9) {
      *ppFVar7 = pFVar5;
      ppFVar7[1] = pFVar10 + -2;
      *(uint *)(ppFVar7 + 2) = local_380[0].Value;
      ppFVar7 = ppFVar7 + 3;
      local_378 = ppFVar7;
    }
    if (pFVar8 <= pFVar6) goto LAB_1421a3bcd;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar6 >> 2) + 1;
  pFVar5 = pFVar6;
  if (local_380[0].Value == 0) goto LAB_1421a3bbb;
  goto LAB_1421a3a63;
}

// IntroSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_> @ 1421a3cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_>
          (FRemoteServerId *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FRemoteServerId,TLess<void>_> param_4)

{
  uint uVar1;
  FRemoteServerId FVar2;
  int iVar3;
  FRemoteServerId *pFVar4;
  FRemoteServerId *pFVar5;
  FRemoteServerId FVar6;
  FRemoteServerId **ppFVar7;
  FRemoteServerId *pFVar8;
  FRemoteServerId *pFVar9;
  FRemoteServerId *pFVar10;
  float fVar11;
  undefined1 auStack_398 [32];
  int local_378;
  TLess<void> *local_370;
  FRemoteServerId *local_358;
  FRemoteServerId *local_348;
  FRemoteServerId *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_370 = param_4.Predicate;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppFVar7 = &local_348;
    do {
      pFVar8 = ppFVar7[1];
      pFVar5 = *ppFVar7;
      local_358 = ppFVar7[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 2) + 1;
      local_378 = (int)local_358;
      pFVar4 = pFVar5;
      if ((int)local_358 != 0) {
LAB_1421a3d92:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar9 = pFVar8 + 1;
          uVar1 = pFVar4[iVar3 >> 1].Id;
          pFVar4[iVar3 >> 1].Id = pFVar4->Id;
          pFVar4->Id = uVar1;
          pFVar5 = pFVar4;
LAB_1421a3dc0:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar8) goto code_r0x0001421a3dc9;
          goto LAB_1421a3e00;
        }
        for (; pFVar9 = pFVar4, pFVar5 = pFVar4, pFVar4 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar5 = pFVar5 + 1, pFVar5 <= pFVar8) {
            FVar6.Id = pFVar5->Id;
            FRemoteServerId::VerifyComparableServerIds(pFVar9->Id,FVar6.Id);
            FVar2.Id = pFVar9->Id;
            if (pFVar9->Id == 0x3fd) {
              FVar2 = FRemoteServerId::GlobalServerId;
            }
            if (FVar6.Id == 0x3fd) {
              FVar6 = FRemoteServerId::GlobalServerId;
            }
            if ((int)(FVar2.Id - FVar6.Id) < 0) {
              pFVar9 = pFVar5;
            }
          }
          uVar1 = pFVar9->Id;
          pFVar9->Id = pFVar8->Id;
          pFVar8->Id = uVar1;
          param_4.Predicate = local_370;
        }
        goto LAB_1421a3ef4;
      }
LAB_1421a3ee3:
      HeapSortInternal<FRemoteServerId,int,FIdentityFunctor,TDereferenceWrapper<FRemoteServerId,TLess<void>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_1421a3ef4:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_348 <= ppFVar7);
  }
  return;
code_r0x0001421a3dc9:
  FVar6.Id = pFVar5->Id;
  FRemoteServerId::VerifyComparableServerIds(pFVar4->Id,FVar6.Id);
  FVar2.Id = pFVar4->Id;
  if (pFVar4->Id == 0x3fd) {
    FVar2 = FRemoteServerId::GlobalServerId;
  }
  if (FVar6.Id == 0x3fd) {
    FVar6 = FRemoteServerId::GlobalServerId;
  }
  if (-1 < (int)(FVar2.Id - FVar6.Id)) goto LAB_1421a3dc0;
LAB_1421a3e00:
  do {
    pFVar10 = pFVar9;
    pFVar9 = pFVar10 + -1;
    if (pFVar9 <= pFVar4) break;
    FVar6.Id = pFVar4->Id;
    FRemoteServerId::VerifyComparableServerIds(pFVar9->Id,FVar6.Id);
    FVar2.Id = pFVar9->Id;
    if (pFVar9->Id == 0x3fd) {
      FVar2 = FRemoteServerId::GlobalServerId;
    }
    if (FVar6.Id == 0x3fd) {
      FVar6 = FRemoteServerId::GlobalServerId;
    }
  } while (-1 < (int)(FVar2.Id - FVar6.Id));
  if (pFVar5 <= pFVar9) {
    uVar1 = pFVar5->Id;
    pFVar5->Id = pFVar9->Id;
    pFVar9->Id = uVar1;
    goto LAB_1421a3dc0;
  }
  uVar1 = pFVar4->Id;
  pFVar4->Id = pFVar9->Id;
  local_378 = local_378 + -1;
  pFVar9->Id = uVar1;
  if ((longlong)((longlong)pFVar9 + (-4 - (longlong)pFVar4) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar5 & 0xfffffffffffffffcU)) {
    if (pFVar5 < pFVar8) {
      *ppFVar7 = pFVar5;
      ppFVar7[1] = pFVar8;
      *(int *)(ppFVar7 + 2) = local_378;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar9 <= pFVar4 + 1) goto LAB_1421a3ef4;
    pFVar8 = pFVar10 + -2;
    pFVar5 = pFVar4;
  }
  else {
    if (pFVar4 + 1 < pFVar9) {
      *ppFVar7 = pFVar4;
      ppFVar7[1] = pFVar10 + -2;
      *(int *)(ppFVar7 + 2) = local_378;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar5) goto LAB_1421a3ef4;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 2) + 1;
  pFVar4 = pFVar5;
  if (local_378 == 0) goto LAB_1421a3ee3;
  goto LAB_1421a3d92;
}

// IntroSortInternal<UE::RemoteObject::Transfer::FObjectMigrationRequest,int,FIdentityFunctor,TDereferenceWrapper<UE::RemoteObject::Transfer::FObjectMigrationRequest,`UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration'::__l2::<lambda_1>_>_> @ 1421a3fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::RemoteObject::Transfer::FObjectMigrationRequest,int,FIdentityFunctor,TDereferenceWrapper<UE::RemoteObject::Transfer::FObjectMigrationRequest,_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration_::__l2::<lambda_1>_>_>
          (FObjectMigrationRequest *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::RemoteObject::Transfer::FObjectMigrationRequest,_public:_void___cdecl_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId)_::_2_::<lambda_1>_>
          param_4)

{
  FObjectMigrationRequest *pFVar1;
  ulong64 uVar2;
  FRemoteObjectId_u_0 FVar3;
  undefined8 uVar4;
  FRemoteObjectId_u_0 FVar5;
  FRemoteServerId FVar6;
  undefined4 uVar7;
  FRemoteServerId FVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  FObjectMigrationRequest *pFVar12;
  FObjectMigrationRequest *pFVar13;
  FObjectMigrationRequest *pFVar14;
  FObjectMigrationRequest *pFVar15;
  FObjectMigrationRequest *pFVar16;
  FObjectMigrationRequest *pFVar17;
  FObjectMigrationRequest **ppFVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  FObjectMigrationRequest *local_348;
  FObjectMigrationRequest *local_338;
  FObjectMigrationRequest *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppFVar18 = &local_338;
    do {
      pFVar12 = ppFVar18[1];
      pFVar17 = *ppFVar18;
      pFVar1 = ppFVar18[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
      pFVar16 = pFVar17;
      if ((int)local_348 != 0) {
LAB_1421a40b0:
        if (8 < iVar11) {
          FVar6.Id = (pFVar16->DestinationServerId).Id;
          uVar7 = *(undefined4 *)&pFVar16->field_0xc;
          pFVar14 = pFVar12 + 1;
          iVar11 = iVar11 / 2;
          pFVar17 = pFVar16 + iVar11;
          FVar3 = (pFVar17->ObjectId).field0_0x0;
          FVar8.Id = (pFVar17->DestinationServerId).Id;
          uVar9 = *(undefined4 *)&pFVar17->field_0xc;
          uVar2 = pFVar16[iVar11].RequestPriority.PackedData;
          pFVar17 = pFVar16 + iVar11;
          (pFVar17->ObjectId).field0_0x0 = (pFVar16->ObjectId).field0_0x0;
          pFVar17->DestinationServerId = (FRemoteServerId)FVar6.Id;
          *(undefined4 *)&pFVar17->field_0xc = uVar7;
          pFVar16[iVar11].RequestPriority.PackedData = (pFVar16->RequestPriority).PackedData;
          (pFVar16->ObjectId).field0_0x0 = FVar3;
          pFVar16->DestinationServerId = (FRemoteServerId)FVar8.Id;
          *(undefined4 *)&pFVar16->field_0xc = uVar9;
          (pFVar16->RequestPriority).PackedData = uVar2;
          pFVar17 = pFVar16;
LAB_1421a4100:
          pFVar13 = pFVar17;
          pFVar17 = pFVar13 + 1;
          if (pFVar17 <= pFVar12) goto code_r0x0001421a4109;
          goto LAB_1421a4113;
        }
        for (; pFVar17 = pFVar16, pFVar1 = pFVar16, pFVar16 < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar12) {
            if ((pFVar17->RequestPriority).PackedData < (pFVar1->RequestPriority).PackedData) {
              pFVar17 = pFVar1;
            }
          }
          FVar3 = (pFVar17->ObjectId).field0_0x0;
          FVar8.Id = (pFVar17->DestinationServerId).Id;
          uVar9 = *(undefined4 *)&pFVar17->field_0xc;
          uVar2 = (pFVar17->RequestPriority).PackedData;
          FVar6.Id = (pFVar12->DestinationServerId).Id;
          uVar7 = *(undefined4 *)&pFVar12->field_0xc;
          (pFVar17->ObjectId).field0_0x0 = (pFVar12->ObjectId).field0_0x0;
          pFVar17->DestinationServerId = (FRemoteServerId)FVar6.Id;
          *(undefined4 *)&pFVar17->field_0xc = uVar7;
          (pFVar17->RequestPriority).PackedData = (pFVar12->RequestPriority).PackedData;
          (pFVar12->ObjectId).field0_0x0 = FVar3;
          pFVar12->DestinationServerId = (FRemoteServerId)FVar8.Id;
          *(undefined4 *)&pFVar12->field_0xc = uVar9;
          (pFVar12->RequestPriority).PackedData = uVar2;
        }
        goto LAB_1421a4235;
      }
LAB_1421a4226:
      local_348 = pFVar1;
      HeapSortInternal<UE::RemoteObject::Transfer::FObjectMigrationRequest,int,FIdentityFunctor,TDereferenceWrapper<UE::RemoteObject::Transfer::FObjectMigrationRequest,_UE::RemoteObject::Transfer::FRemoteObjectTransferQueue::RequestObjectMigration_::__l2::<lambda_1>_>_>
                (pFVar17,iVar11,param_3,param_4);
LAB_1421a4235:
      ppFVar18 = ppFVar18 + -3;
    } while (&local_338 <= ppFVar18);
  }
  return;
code_r0x0001421a4109:
  if (pFVar13[1].RequestPriority.PackedData <= (pFVar16->RequestPriority).PackedData)
  goto LAB_1421a4100;
LAB_1421a4113:
  do {
    pFVar15 = pFVar14;
    pFVar14 = pFVar15 + -1;
    if (pFVar14 <= pFVar16) break;
  } while ((pFVar16->RequestPriority).PackedData <= pFVar15[-1].RequestPriority.PackedData);
  FVar3 = (pFVar14->ObjectId).field0_0x0;
  uVar4 = *(undefined8 *)&pFVar15[-1].DestinationServerId;
  if (pFVar17 <= pFVar14) {
    FVar5 = (pFVar17->ObjectId).field0_0x0;
    FVar6.Id = pFVar13[1].DestinationServerId.Id;
    uVar7 = *(undefined4 *)&pFVar13[1].field_0xc;
    uVar2 = pFVar13[1].RequestPriority.PackedData;
    (pFVar17->ObjectId).field0_0x0 = FVar3;
    *(undefined8 *)&pFVar13[1].DestinationServerId = uVar4;
    pFVar13[1].RequestPriority.PackedData = pFVar15[-1].RequestPriority.PackedData;
    (pFVar14->ObjectId).field0_0x0 = FVar5;
    pFVar15[-1].DestinationServerId = (FRemoteServerId)FVar6.Id;
    *(undefined4 *)&pFVar15[-1].field_0xc = uVar7;
    pFVar15[-1].RequestPriority.PackedData = uVar2;
    goto LAB_1421a4100;
  }
  FVar5 = (pFVar16->ObjectId).field0_0x0;
  FVar6.Id = (pFVar16->DestinationServerId).Id;
  uVar7 = *(undefined4 *)&pFVar16->field_0xc;
  uVar2 = (pFVar16->RequestPriority).PackedData;
  lVar10 = (longlong)pFVar14 + (-0x18 - (longlong)pFVar16);
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  (pFVar16->ObjectId).field0_0x0 = FVar3;
  *(undefined8 *)&pFVar16->DestinationServerId = uVar4;
  (pFVar16->RequestPriority).PackedData = pFVar15[-1].RequestPriority.PackedData;
  (pFVar14->ObjectId).field0_0x0 = FVar5;
  pFVar15[-1].DestinationServerId = (FRemoteServerId)FVar6.Id;
  *(undefined4 *)&pFVar15[-1].field_0xc = uVar7;
  pFVar15[-1].RequestPriority.PackedData = uVar2;
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar17) / 0x18) {
    if (pFVar17 < pFVar12) {
      *ppFVar18 = pFVar17;
      ppFVar18[1] = pFVar12;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar14 <= pFVar16 + 1) goto LAB_1421a4235;
    pFVar12 = pFVar15 + -2;
    pFVar17 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar14) {
      *ppFVar18 = pFVar16;
      ppFVar18[1] = pFVar15 + -2;
      *(int *)(ppFVar18 + 2) = (int)local_348;
      ppFVar18 = ppFVar18 + 3;
    }
    if (pFVar12 <= pFVar17) goto LAB_1421a4235;
  }
  iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar17) / 0x18) + 1;
  pFVar16 = pFVar17;
  if ((int)local_348 == 0) goto LAB_1421a4226;
  goto LAB_1421a40b0;
}

// JoinBy<TArray<UObject_*,TSizedDefaultAllocator<32>_>,`UE::RemoteObject::Transfer::MigrateObjectFromObjectData'::__l94::<lambda_1>_> @ 1421a42f0

/* WARNING: Enum "ERemoteIdToStringVerbosity": Some values do not have unique names */

FString * __cdecl
FString::
JoinBy<TArray<UObject_*,TSizedDefaultAllocator<32>_>,_UE::RemoteObject::Transfer::MigrateObjectFromObjectData_::__l94::<lambda_1>_>
          (FString *__return_storage_ptr__,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,<lambda_1> param_3)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  size_t sVar6;
  FScriptContainerElement *pFVar7;
  FRemoteObjectId_u_0 local_res8;
  FScriptContainerElement *local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar7 = (param_1->AllocatorInstance).Data;
  bVar3 = true;
  iVar1 = param_1->ArrayNum;
  local_res10 = pFVar7 + (longlong)iVar1 * 8;
  while( true ) {
    pFVar5 = local_res10;
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar7 == pFVar5) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      sVar6 = wcslen(param_2);
      AppendChars(__return_storage_ptr__,param_2,(int)sVar6);
    }
    pUVar2 = *(UObject **)pFVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_res8.Id = 0;
    FRemoteObjectId::ToString((FRemoteObjectId *)&local_res8._s_0,&local_48,Default);
    if (pUVar2 == (UObject *)0x0) {
      FString(&local_68,L"None");
    }
    else {
      local_res8 = *(FRemoteObjectId_u_0 *)&pUVar2->field_0x18;
      ::FName::ToString((FName *)&local_res8._s_0,&local_68);
    }
    PrintfImpl(&local_58,L"%s (%s)");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    AppendChars(__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 8;
  }
  return __return_storage_ptr__;
}

// RemoveIf<TArrayView<int,int>,`UE::ReferenceChainSearch::FMinimalReferenceSearch::MergeGraph'::__l16::<lambda_1>_> @ 1421aa560

int __cdecl
Algo::
RemoveIf<TArrayView<int,int>,_UE::ReferenceChainSearch::FMinimalReferenceSearch::MergeGraph_::__l16::<lambda_1>_>
          (TArrayView<int,int> *param_1,<lambda_1> param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar4 = (uint *)param_1->DataPtr;
  puVar9 = puVar4 + param_1->ArrayNum;
  puVar8 = puVar4;
LAB_1421aa582:
LAB_1421aa586:
  if (puVar8 != puVar9) {
    iVar1 = *(int *)&((param_2.TargetVertices)->Elements).field_0x8;
    iVar2 = *(int *)&((param_2.TargetVertices)->Elements).field_0x34;
    if (iVar1 != iVar2) {
      FVar5 = ((param_2.TargetVertices)->Hash).SecondaryData;
      FVar7 = (ForElementType<FSetElementId>)&(param_2.TargetVertices)->Hash;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = FVar5;
      }
      iVar6 = *(int *)((longlong)FVar7 +
                      (ulonglong)((param_2.TargetVertices)->HashSize - 1U & *puVar8) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*(longlong *)&(param_2.TargetVertices)->Elements + (longlong)iVar6 * 0xc) ==
              *puVar8) {
            puVar8 = puVar8 + 1;
            goto LAB_1421aa582;
          }
          iVar6 = *(int *)(*(longlong *)&(param_2.TargetVertices)->Elements + 4 +
                          (longlong)iVar6 * 0xc);
        } while (iVar6 != -1);
      }
    }
    while (puVar9 = puVar9 + -1, puVar8 != puVar9) {
      uVar3 = *puVar9;
      if (iVar1 != iVar2) {
        FVar5 = ((param_2.TargetVertices)->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&(param_2.TargetVertices)->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar5;
        }
        iVar6 = *(int *)((longlong)FVar7 +
                        (ulonglong)((param_2.TargetVertices)->HashSize - 1U & uVar3) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*(longlong *)&(param_2.TargetVertices)->Elements + (longlong)iVar6 * 0xc)
                == uVar3) {
              *puVar8 = uVar3;
              puVar8 = puVar8 + 1;
              goto LAB_1421aa586;
            }
            iVar6 = *(int *)(*(longlong *)&(param_2.TargetVertices)->Elements + 4 +
                            (longlong)iVar6 * 0xc);
          } while (iVar6 != -1);
        }
      }
    }
  }
  return (int)((longlong)puVar8 - (longlong)puVar4 >> 2);
}

// ResolveVisitedPath<UClass> @ 1421aa9d0

void * __cdecl
PropertyVisitorHelpers::ResolveVisitedPath<UClass>
          (UClass *param_1,void *param_2,FPropertyVisitorPath *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((param_3->Path).ArrayNum < 1) {
    return (void *)0x0;
  }
  pvVar7 = (void *)(**(code **)(param_1->_padding_ + 0x348))
                             (param_1,param_2,(param_3->Path).AllocatorInstance.Data);
  uVar8 = 1;
  if (pvVar7 != (void *)0x0) {
    lVar9 = 0;
    do {
      iVar1 = (param_3->Path).ArrayNum;
      if (iVar1 <= (int)uVar8) {
        return pvVar7;
      }
      uVar6 = 0;
      if ((int)(uVar8 - 1) < iVar1) {
        uVar6 = -uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar4)();
        return pvVar7;
      }
      pFVar2 = (param_3->Path).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (param_3->Path).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar4)();
        return pvVar7;
      }
      plVar3 = *(longlong **)(pFVar2 + lVar9);
      pvVar7 = (void *)(**(code **)(*plVar3 + 0xa0))
                                 (plVar3,pvVar7,
                                  (param_3->Path).AllocatorInstance.Data +
                                  (longlong)(int)uVar8 * 0x18);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (pvVar7 != (void *)0x0);
  }
  return (void *)0x0;
}

// ResolveVisitedPathInfo<FProperty> @ 1421aab20

void * __cdecl
PropertyVisitorHelpers::Private::ResolveVisitedPathInfo<FProperty>
          (FProperty *param_1,void *param_2,FPropertyVisitorInfo *param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001421aab23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(param_1->_padding_ + 0xa0))();
  return pvVar1;
}

// ResolveVisitedPathInfo<UClass> @ 1421aab30

void * __cdecl
PropertyVisitorHelpers::Private::ResolveVisitedPathInfo<UClass>
          (UClass *param_1,void *param_2,FPropertyVisitorInfo *param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001421aab33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(param_1->_padding_ + 0x348))();
  return pvVar1;
}

// Transform<TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_&,``anonymous_namespace'::ValidateExports'::__l101::<lambda_2>_> @ 1421abae0

void __cdecl
Algo::
Transform<TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_&,__anonymous_namespace_::ValidateExports_::__l101::<lambda_2>_>
          (TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2,
          <lambda_2> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  code *pcVar6;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  UObject *local_a8;
  UObject *local_a0;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1421abb7d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_7c = (int)lVar9 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_1421abb7d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1421abc80;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_1421abc80:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FTaggedExport>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    pUVar5 = *(UObject **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_a0 = pUVar5;
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
              (param_2,&local_a8,(bool *)&local_a0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// WriteToString<128,FName,wchar_t_const_(&)[15]> @ 1421b13d0

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,FName,wchar_t_const_(&)[15]>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,FName *param_1,
          wchar_t (*param_2) [15])

{
  int iVar1;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  iVar1 = 0;
  if (param_2 != (wchar_t (*) [15])0x0) {
    sVar2 = wcslen(*param_2);
    iVar1 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,*param_2,iVar1);
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>,1,1> @ 1421b4c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>,1,1>::
~TFunction_OwnedObject<__anonymous_namespace_::WriteBulkData_::__l2::<lambda_3>,1,1>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`WriteBulkData'::`2'::<lambda_3>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>,1,1> @ 1421b4c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>,1,1>::
~TFunction_OwnedObject<__anonymous_namespace_::WriteBulkData_::__l69::<lambda_4>,1,1>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`WriteBulkData'::`69'::<lambda_4>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>,1,1> @ 1421b4c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>,1,1>::
~TFunction_OwnedObject<__anonymous_namespace_::WriteBulkData_::__l2::<lambda_5>,1,1>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`WriteBulkData'::`2'::<lambda_5>,1,1>::_vftable_;
  return;
}

// operator<< @ 1421b70f0

FArchive * __cdecl operator<<(FArchive *param_1,FRemoteObjectBytes *param_2)

{
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&param_2->Bytes)
  ;
  return param_1;
}

// operator<< @ 1421b7110

FArchive * __cdecl operator<<(FArchive *param_1,FRemoteObjectId *param_2)

{
  FRemoteObjectId::Serialize(param_2,param_1);
  return param_1;
}

// operator<< @ 1421b7140

FArchive * __cdecl operator<<(FArchive *param_1,FRemoteServerId *param_2)

{
  FRemoteServerId::Serialize(param_2,param_1);
  return param_1;
}

// operator<< @ 1421b7170

FArchive * __cdecl operator<<(FArchive *param_1,FRemoteTransactionId *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Id = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&param_2->Id);
  return param_1;
}

// operator<< @ 1421b71e0

FArchive * __cdecl operator<<(FArchive *param_1,FRemoteWorkPriority *param_2)

{
  ulong64 *puVar1;
  
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    param_2->PackedData = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&param_2->PackedData);
  return param_1;
}

// operator== @ 1421b7ad0

bool __cdecl operator==(FRemoteWorkPriority param_1,FRemoteWorkPriority param_2)

{
  return param_1.PackedData == param_2.PackedData;
}

// operator() @ 1421b8920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`GetPathToStaleObjectReferencer'::__l2::<lambda_1>::operator()(void *this,FCallbackParams *param_1)

{
  FOutputDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  FName local_res10;
  FString local_18;
  
  if ((param_1->Object == (FGCObjectInfo *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                         ,0x761,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((((param_1->Object->InternalFlags & Garbage) != Borrowed) ||
      (pUVar5 = FGCObjectInfo::TryResolveObject(param_1->Object),
      pUVar5 == *(UObject **)((longlong)this + 8))) && (**(char **)this == '\0')) {
    **(char **)this = '\x01';
    if ((param_1->Out == (FOutputDevice *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Params.Out",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                           ,0x766,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar1 = param_1->Out;
    if (((param_1->Indent < 0) || (0xff < param_1->Indent)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FOutputDevice::LogfImpl
              (pFVar1,Log,L"%s    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    pFVar1 = param_1->Out;
    local_res10 = *(FName *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    if (((param_1->Indent < 0) || (0xff < param_1->Indent)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FOutputDevice::LogfImpl
              (pFVar1,Log,L"%s    ^ This reference is preventing the old %s from being GC\'d ^");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 1421b8ae0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __thiscall
``anonymous_namespace'::HarvestPackage'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  undefined4 uVar1;
  FSaveContext *pFVar2;
  longlong lVar3;
  bool bVar4;
  FObjectStatus *pFVar5;
  UObject *local_res8;
  UObject *local_res10;
  
  pFVar2 = *(FSaveContext **)((longlong)this + 8);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar5 = FSaveContext::GetCachedObjectStatus(pFVar2,(TObjectPtr<UObject>)&local_res8);
  pFVar2 = *(FSaveContext **)((longlong)this + 8);
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  bVar4 = FSaveContext::IsTransient(pFVar2,(TObjectPtr<UObject>)&local_res10,pFVar5);
  if (!bVar4) {
    FPackageHarvester::TryHarvestExport(*(FPackageHarvester **)this,param_1,pFVar5);
    lVar3 = *(longlong *)((longlong)this + 8);
    if (*(char *)(lVar3 + 0x5a8) != '\0') {
      uVar1 = *(undefined4 *)(lVar3 + 0x5c8);
      *(undefined4 *)(lVar3 + 0x5c8) = 1;
      FPackageHarvester::TryHarvestExport(*(FPackageHarvester **)this,param_1,pFVar5);
      *(undefined4 *)(lVar3 + 0x5c8) = uVar1;
    }
  }
  return;
}

// operator() @ 1421b8bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
`PrintStaleReferenceChainsAndFindReferencingObjects'::__l2::<lambda_1>::operator()
          (void *this,FCallbackParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  FGCObjectInfo *pFVar5;
  
  if ((param_1->Object == (FGCObjectInfo *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                         ,0x744,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar5 = param_1->Object;
  if ((pFVar5->InternalFlags & Garbage) == Borrowed) {
    pUVar4 = FGCObjectInfo::TryResolveObject(pFVar5);
    if (pUVar4 == (UObject *)**(longlong **)this) {
      return true;
    }
    pFVar5 = param_1->Object;
  }
  else {
    if (**(longlong **)((longlong)this + 8) != 0) {
      return true;
    }
    **(longlong **)((longlong)this + 8) = (longlong)pFVar5;
    pFVar5 = param_1->Referencer;
  }
  **(undefined8 **)((longlong)this + 0x10) = pFVar5;
  return true;
}

// operator() @ 1421b8c50

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``anonymous_namespace'::SavePreloadDependencies'::__l2::<lambda_1>::operator()
          (void *this,int param_1,
          TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *param_2,
          TObjectPtr<UObject> param_3,UObject *param_4,bool param_5,bool param_6)

{
  int iVar1;
  longlong lVar2;
  FLinkerSave *this_00;
  FSaveContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FName FVar7;
  FUObjectItem *pFVar8;
  FObjectStatus *pFVar9;
  int local_res20 [2];
  undefined8 local_128;
  FPackageIndex local_120;
  longlong local_11c;
  UObject *local_110;
  UObject *local_108;
  UObject *local_100;
  UObject *local_f8;
  UObject *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [8];
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (*(UObject **)param_3.field0_0x0 == (UObject *)0x0) {
    return;
  }
  pUVar6 = UE::CoreUObject::Private::GetPackage(*(UObject **)param_3.field0_0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UPackage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pFVar8 = (FUObjectItem *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UPackage *)0x0) goto LAB_1421b8e23;
  }
  else if (pUVar6 == (UPackage *)0x0) {
LAB_1421b8e23:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Outermost",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                       ,0x70c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pUVar6 == (UPackage *)0x0) {
      local_128 = 0;
      FVar7 = (FName)&local_128;
      goto LAB_1421b8cdf;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FVar7 = UE::CoreUObject::Private::GetFName((UObject *)local_b8);
LAB_1421b8cdf:
  lVar2 = *(longlong *)FVar7;
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  if (lVar2 != local_11c) {
    local_110 = *(UObject **)param_3.field0_0x0;
    this_00 = *(FLinkerSave **)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_110 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_110);
    }
    FLinkerSave::MapObject(this_00,(TObjectPtr<UObject_const_>)local_res20,SUB81(&local_110,0));
    if ((local_res20[0] != 0) || (!param_6)) {
      if (local_res20[0] != 0) {
        local_108 = *(UObject **)param_3.field0_0x0;
        pFVar3 = *(FSaveContext **)((longlong)this + 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_108);
        }
        bVar5 = FSaveContext::IsTransient(pFVar3,(TObjectPtr<UObject>)&local_108);
        if (bVar5) {
          iVar1 = *(int *)(*(longlong *)param_3.field0_0x0 + 0xc);
          if ((iVar1 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
            pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
          }
          if ((((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) &&
             (2 < (byte)LogSavePackage._0_1_)) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_4,&local_b0,(UObject *)0x0,None);
            UE::CoreUObject::Private::GetFullName
                      (&local_e8,*(UObject **)param_3.field0_0x0,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>
                      (&``SavePreloadDependencies'::`2'::<lambda_1>::operator()'::`22'::LOG_Static,
                       (FLogCategoryBase *)&LogSavePackage);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      if ((local_res20[0] != 0) &&
         (((*(longlong *)param_3.field0_0x0 == 0 ||
           ((*(uint *)(*(longlong *)param_3.field0_0x0 + 8) >> 0x1e & 1) != 0)) &&
          (2 < (byte)LogSavePackage._0_1_)))) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_4,&local_a0,(UObject *)0x0,None)
        ;
        UE::CoreUObject::Private::GetFullName
                  (&local_d8,*(UObject **)param_3.field0_0x0,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>
                  (&``SavePreloadDependencies'::`2'::<lambda_1>::operator()'::`34'::LOG_Static,
                   (FLogCategoryBase *)&LogSavePackage);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      local_100 = *(UObject **)param_3.field0_0x0;
      pFVar3 = *(FSaveContext **)((longlong)this + 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_100 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_100);
      }
      bVar5 = FSaveContext::IsIncluded(pFVar3,(TObjectPtr<UObject>)&local_100);
      if (param_5) {
        if ((!bVar5) && (2 < (byte)LogSavePackage._0_1_)) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_4,&local_90,(UObject *)0x0,None);
          UE::CoreUObject::Private::GetFullName
                    (&local_c8,*(UObject **)param_3.field0_0x0,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<3>
                    (&``SavePreloadDependencies'::`2'::<lambda_1>::operator()'::`46'::LOG_Static,
                     (FLogCategoryBase *)&LogSavePackage);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (!bVar5) {
        return;
      }
      if (local_res20[0] == 0) {
        local_f8 = *(UObject **)param_3.field0_0x0;
        pFVar3 = *(FSaveContext **)((longlong)this + 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_f8);
        }
        pFVar9 = FSaveContext::GetCachedObjectStatus(pFVar3,(TObjectPtr<UObject>)&local_f8);
        local_f0 = *(UObject **)param_3.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_f0);
        }
        bVar5 = FSaveContext::IsUnsaveable(pFVar3,(TObjectPtr<UObject>)&local_f0,pFVar9,true);
        if (!bVar5) {
          if ((5 < (byte)LogSavePackage._0_1_) && (((uint)pUVar6->PackageFlagsPrivate & 0x10) != 0))
          {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_4,&local_70,(UObject *)0x0,None);
            UObjectBaseUtility::GetFullName
                      (*(UObjectBaseUtility **)param_3.field0_0x0,&local_80,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<6>
                      (&``SavePreloadDependencies'::`2'::<lambda_1>::operator()'::`65'::LOG_Static,
                       (FLogCategoryBase *)&LogSavePackage);
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
          }
          if (((uint)pUVar6->PackageFlagsPrivate & 0x10) == 0) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_4,&local_50,(UObject *)0x0,None);
            UObjectBaseUtility::GetFullName
                      (*(UObjectBaseUtility **)param_3.field0_0x0,&local_60,(UObject *)0x0,None);
            UE::Logging::Private::BasicFatalLog
                      (&``SavePreloadDependencies'::`2'::<lambda_1>::operator()'::`76'::LOG_Static,
                       (FLogCategoryBase *)&LogSavePackage);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
        }
        if ((param_5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bMandatory",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                               ,0x731,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
        Emplace<FPackageIndex_const_&>(param_2,&local_120,(bool *)local_res20);
      }
    }
  }
  return;
}

// operator() @ 1421b9260

FString * __thiscall
``anonymous_namespace'::WriteBulkData'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,EPackageExtension param_1,
          FBulkDataCookedIndex param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  FString *pFVar3;
  size_t sVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  iVar6 = 0;
  if (param_2.Value == '\0') {
    if (*(char *)((longlong)this + 8) == '\0') {
      pwVar2 = ::LexToString(param_1);
      pFVar3 = ::FString::FString((FString *)&local_38,pwVar2);
      pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (pFVar3->Data).ArrayNum;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    else {
      pwVar2 = ::LexToString(param_1);
      pFVar3 = ::FString::FString((FString *)&local_28,L".o");
      ::FString::ConcatFC((FString *)&local_48,pFVar3,pwVar2);
      iVar7 = local_48.Size;
      pFVar5 = (FScriptContainerElement *)local_48.DataPtr;
      local_48.DataPtr = (wchar_t *)0x0;
      local_48.Size = 0;
      local_48._12_4_ = 0;
      local_38.DataPtr = local_28.DataPtr;
    }
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
    iVar1 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar1 = iVar6;
    }
    local_48.Size = iVar1;
    local_38.DataPtr = *(wchar_t **)(*(longlong *)this + 0x490);
    local_48.DataPtr = (wchar_t *)pFVar5;
    if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen(local_38.DataPtr);
      iVar6 = (int)sVar4;
    }
    local_38.Size = iVar6;
    FPathViews::ChangeExtension(__return_storage_ptr__,&local_38,&local_48);
  }
  else {
    pwVar2 = ::LexToString(param_1);
    ::FString::PrintfImpl((FString *)&local_38,L".%03hhu");
    ::FString::ConcatFC((FString *)&local_48,(FString *)&local_38,pwVar2);
    if (local_38.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_38.DataPtr);
    }
    local_38.DataPtr = local_48.DataPtr;
    local_38.Size = local_48.Size + -1;
    if (local_48.Size == 0) {
      local_38.Size = 0;
    }
    local_28.DataPtr = *(wchar_t **)(*(longlong *)this + 0x490);
    if (local_28.DataPtr != (wchar_t *)0x0) {
      sVar4 = wcslen(local_28.DataPtr);
      iVar6 = (int)sVar4;
    }
    local_28.Size = iVar6;
    FPathViews::ChangeExtension(__return_storage_ptr__,&local_28,&local_38);
    pFVar5 = (FScriptContainerElement *)local_48.DataPtr;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// operator() @ 1421b9e40

long64 __thiscall
``anonymous_namespace'::WriteBulkData'::__l2::<lambda_2>::operator()
          (void *this,TFileRegionArchive<FLargeMemoryWriter> *param_1,FBulkDataInfo *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  long64 lVar7;
  uchar *puVar8;
  FName local_48;
  FIoBuffer local_40;
  FString local_38;
  
  uVar6 = (**(code **)(param_1->_padding_ + 0x30))(param_1);
  if ((longlong)uVar6 < 1) {
    pFVar3 = (param_2->LooseFilePath).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    return 0;
  }
  if ((*(char *)((longlong)this + 0x10) != '\0') && (param_2->BulkDataType == Mmap)) {
    local_48 = *(FName *)(*(longlong *)(*(longlong *)this + 0x470) + 0x18);
    ::FName::ToString(&local_48,&local_38);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsOptionalRealm == false || Info.BulkDataType != IPackageWriter::FBulkDataInfo::Mmap"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                       ,0xb65,
                       L"Memory mapped bulk data is currently not supported for optional package \'%s\'"
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      lVar7 = (*pcVar4)();
      return lVar7;
    }
  }
  puVar8 = FLargeMemoryData::ReleaseOwnership((FLargeMemoryData *)&param_1->_padding_);
  FIoBuffer::FIoBuffer(&local_40,AssumeOwnership,puVar8,uVar6);
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x28))
            (*(longlong **)((longlong)this + 8),param_2,&local_40,&param_1->FileRegions);
  if (local_40.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_40.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_40.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_40.CorePtr.Reference);
      ::operator_delete((void *)local_40.CorePtr.Reference,0x20);
    }
  }
  pFVar3 = (param_2->LooseFilePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return uVar6;
}

// operator() @ 1421bac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>::operator()
          (void *this,FBulkDataCookedIndex param_1,TFileRegionArchive<FLargeMemoryWriter> *param_2)

{
  void *this_00;
  undefined4 uVar1;
  ushort uVar2;
  long64 lVar3;
  undefined1 auStack_a8 [32];
  FBulkDataInfo local_88;
  FName local_58;
  EType local_50;
  FString local_48;
  uchar local_38 [8];
  ushort local_30;
  FBulkDataCookedIndex FStack_2e;
  uchar uStack_2d;
  ushort local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(void **)((longlong)this + 0x18);
  local_58 = **(FName **)((longlong)this + 8);
  local_50 = BulkSegment;
  __l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x20),&local_48,BulkDataDefault,param_1);
  local_88.MultiOutputIndex = *(ushort *)((longlong)this + 0x28);
  local_88.ChunkId.Id._0_8_ = *(undefined8 *)*(uchar **)((longlong)this + 0x10);
  uVar2 = local_88.MultiOutputIndex >> 8 | local_88.MultiOutputIndex << 8;
  local_88.PackageName = local_58;
  local_88.BulkDataType = local_50;
  local_88.LooseFilePath.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  local_88.LooseFilePath.Data.ArrayNum = local_48.Data.ArrayNum;
  local_88.LooseFilePath.Data.ArrayMax = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStack_2e = (FBulkDataCookedIndex)param_1.Value;
  local_30._0_1_ = (char)uVar2;
  local_30._1_1_ = (char)(uVar2 >> 8);
  uStack_2d = '\x02';
  uVar1 = _local_30;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30._0_1_ = (uchar)uVar2;
  local_30._1_1_ = (uchar)(uVar2 >> 8);
  local_88.ChunkId.Id[8] = (uchar)local_30;
  local_88.ChunkId.Id[9] = local_30._1_1_;
  local_88.ChunkId.Id[10] = param_1.Value;
  local_88.ChunkId.Id[0xb] = '\x02';
  local_38 = (uchar  [8])local_88.ChunkId.Id._0_8_;
  _local_30 = uVar1;
  local_2c = local_88.MultiOutputIndex;
  lVar3 = __l2::<lambda_2>::operator()(this_00,param_2,&local_88);
  *(longlong *)(*(longlong *)this + 0x28) = *(longlong *)(*(longlong *)this + 0x28) + lVar3;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1421bad80

void __thiscall
``anonymous_namespace'::SavePreloadDependencies'::__l7::<lambda_3>::operator()
          (void *this,bool param_1,FPackageIndex param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FObjectExport *pFVar9;
  FObjectImport *pFVar10;
  char *pcVar11;
  uint uVar12;
  ForAnyElementType *pFVar13;
  UObject *pUVar14;
  FPackageIndex local_res18;
  undefined8 local_38;
  UObject *pUStack_30;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined6 uStack_26;
  
  local_res18.Index = param_2.Index;
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x40) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Export.Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                         ,0x808,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res18.Index == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Dep.IsNull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                         ,0x809,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar14 = (UObject *)0x0;
  lVar3 = **(longlong **)this;
  if (local_res18.Index < 1) {
    if ((-1 < local_res18.Index) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x55,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((-1 - local_res18.Index < 0) || (*(int *)(lVar3 + 0x10) <= -1 - local_res18.Index)) {
      if ((-1 < local_res18.Index) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsImport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x55,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = ~*(uint *)(**(longlong **)this + 0x10) - local_res18.Index;
      if ((((int)uVar12 < 0) || (*(int *)(**(longlong **)this + 0x30) <= (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Linker->CellImportMap.IsValidIndex(CellImport)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                             ,0x823,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = **(longlong **)this;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x30)) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((longlong)(int)uVar12 * 0x20 + 0x18 + *(longlong *)(lVar3 + 0x28)) != 0)
      goto LAB_1421bb070;
      iVar8 = 0x824;
      pcVar11 = "Linker->CellImportMap[CellImport].Cell";
    }
    else {
      pFVar10 = FLinkerTables::Imp((FLinkerTables *)(**(longlong **)this + 8),local_res18);
      pUVar14 = pFVar10->XObject;
      if (pUVar14 != (UObject *)0x0) goto LAB_1421bb070;
      iVar8 = 0x81e;
      pcVar11 = "DepObject";
    }
  }
  else if ((local_res18.Index + -1 < 0) || (*(int *)(lVar3 + 0x20) <= local_res18.Index + -1)) {
    uVar12 = (local_res18.Index - *(int *)(lVar3 + 0x20)) - 1;
    if ((((int)uVar12 < 0) || (*(int *)(lVar3 + 0x40) <= (int)uVar12)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Linker->CellExportMap.IsValidIndex(CellExport)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0x815,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = **(longlong **)this;
    uVar7 = 0;
    if ((int)uVar12 < *(int *)(lVar3 + 0x40)) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar14 = (UObject *)0x0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x30 + (longlong)(int)uVar12 * 0x48) != 0)
    goto LAB_1421bb070;
    iVar8 = 0x816;
    pcVar11 = "Linker->CellExportMap[CellExport].Cell";
  }
  else {
    pFVar9 = FLinkerTables::Exp((FLinkerTables *)(lVar3 + 8),local_res18);
    pUVar14 = pFVar9->Object;
    if (pUVar14 != (UObject *)0x0) goto LAB_1421bb070;
    iVar8 = 0x810;
    pcVar11 = "DepObject";
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar11,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                     ,iVar8,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1421bb070:
  lVar3 = **(longlong **)this;
  pFVar13 = (ForAnyElementType *)(lVar3 + 0x368);
  if (((pFVar13->Data <= (FScriptContainerElement *)&local_res18) &&
      ((FScriptContainerElement *)&local_res18 <
       pFVar13->Data + (longlong)*(int *)(lVar3 + 0x374) * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar3 + 0x370);
  if (iVar8 == *(int *)(lVar3 + 0x374)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar13,(int *)(lVar3 + 0x374));
  }
  *(int *)(lVar3 + 0x370) = iVar8 + 1;
  *(int *)(pFVar13->Data + (longlong)iVar8 * 4) = local_res18.Index;
  pFVar13 = *(ForAnyElementType **)((longlong)this + 0x10);
  local_38 = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x40);
  pUStack_30 = pUVar14;
  local_28 = param_1;
  uStack_27 = param_3;
  if (((pFVar13->Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar13->Data + (longlong)*(int *)((longlong)&pFVar13[1].Data + 4) * 0x18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)&pFVar13[1].Data;
  piVar1 = (int *)((longlong)&pFVar13[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,pFVar13,piVar1);
  }
  *(int *)&pFVar13[1].Data = iVar8 + 1;
  pFVar4 = pFVar13->Data;
  pFVar2 = pFVar4 + (longlong)iVar8 * 0x18;
  *(undefined8 *)pFVar2 = local_38;
  *(UObject **)(pFVar2 + 8) = pUStack_30;
  *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) =
       CONCAT62(uStack_26,CONCAT11(uStack_27,local_28));
  return;
}

// operator() @ 1421bb210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>::operator()
          (void *this,FBulkDataCookedIndex param_1,TFileRegionArchive<FLargeMemoryWriter> *param_2)

{
  void *this_00;
  undefined4 uVar1;
  ushort uVar2;
  long64 lVar3;
  undefined1 auStack_a8 [32];
  FBulkDataInfo local_88;
  FName local_58;
  EType local_50;
  FString local_48;
  uchar local_38 [8];
  ushort local_30;
  FBulkDataCookedIndex FStack_2e;
  uchar uStack_2d;
  ushort local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(void **)((longlong)this + 0x18);
  local_58 = **(FName **)((longlong)this + 8);
  local_50 = Optional;
  WriteBulkData'::__l2::<lambda_1>::operator()
            (*(void **)((longlong)this + 0x20),&local_48,BulkDataOptional,param_1);
  local_88.MultiOutputIndex = *(ushort *)((longlong)this + 0x28);
  local_88.ChunkId.Id._0_8_ = *(undefined8 *)*(uchar **)((longlong)this + 0x10);
  uVar2 = local_88.MultiOutputIndex >> 8 | local_88.MultiOutputIndex << 8;
  local_88.PackageName = local_58;
  local_88.BulkDataType = local_50;
  local_88.LooseFilePath.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  local_88.LooseFilePath.Data.ArrayNum = local_48.Data.ArrayNum;
  local_88.LooseFilePath.Data.ArrayMax = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStack_2e = (FBulkDataCookedIndex)param_1.Value;
  local_30._0_1_ = (char)uVar2;
  local_30._1_1_ = (char)(uVar2 >> 8);
  uStack_2d = '\x03';
  uVar1 = _local_30;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30._0_1_ = (uchar)uVar2;
  local_30._1_1_ = (uchar)(uVar2 >> 8);
  local_88.ChunkId.Id[8] = (uchar)local_30;
  local_88.ChunkId.Id[9] = local_30._1_1_;
  local_88.ChunkId.Id[10] = param_1.Value;
  local_88.ChunkId.Id[0xb] = '\x03';
  local_38 = (uchar  [8])local_88.ChunkId.Id._0_8_;
  _local_30 = uVar1;
  local_2c = local_88.MultiOutputIndex;
  lVar3 = WriteBulkData'::__l2::<lambda_2>::operator()(this_00,param_2,&local_88);
  *(longlong *)(*(longlong *)this + 0x28) = *(longlong *)(*(longlong *)this + 0x28) + lVar3;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1421bb330

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

bool __thiscall
``anonymous_namespace'::ValidateImports'::__l2::<lambda_5>::operator()(void *this,UObject *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *pTVar4;
  TMap<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *pTVar10;
  UPackage *pUVar11;
  UPackage *pUVar12;
  TMap<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
  *pTVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_140;
  undefined4 uStack_10c;
  TObjectPtr<UObject_const_>_u_0 local_f0;
  TMap<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TMap<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  pTVar10 = FSaveContext::GetExports(*(FSaveContext **)this);
  iVar19 = 0;
  iVar20 = 0;
  iVar16 = *(int *)&(pTVar10->Elements).field_0x28;
  puVar1 = &(pTVar10->Elements).field_0x10;
  local_140 = 1;
  iVar22 = 0;
  iVar17 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar16 != 0) {
    puVar23 = *(uint **)&(pTVar10->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar8 = *puVar23;
    iVar22 = 0;
    while (uVar8 == 0) {
      lVar15 = (longlong)iVar20;
      iVar22 = iVar22 + 0x20;
      iVar20 = iVar20 + 1;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) {
        iVar17 = *(int *)&(pTVar10->Elements).field_0x28;
        uVar8 = 1;
        iVar9 = iVar16;
        goto LAB_1421bb3f8;
      }
      uVar8 = puVar23[lVar15 + 1];
    }
    iVar17 = *(int *)&(pTVar10->Elements).field_0x28;
    uVar8 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = iVar22 + -1 + (int)lVar15;
    if (iVar17 < iVar9) {
      iVar9 = iVar16;
    }
  }
LAB_1421bb3f8:
  uVar25 = *(uint *)&(pTVar10->Elements).field_0x28;
  uVar24 = uVar25 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar8,iVar20);
  TStack_b0.CurrentBitIndex = iVar9;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar25 >> 5;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = iVar22;
  uStack_90 = CONCAT44(uStack_10c,
                       *(int *)&(pTVar10->Elements).field_0x8 -
                       *(int *)&(pTVar10->Elements).field_0x34);
  local_b8 = pTVar10;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar25 < 0) || (iVar17 < (int)uVar25)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(pTVar10->Elements).field_0x28;
  if (uVar25 != uVar8) {
    puVar21 = *(undefined1 **)&(pTVar10->Elements).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
    while (uVar25 == 0) {
      lVar15 = (longlong)iVar16;
      uVar24 = uVar24 + 0x20;
      iVar16 = iVar16 + 1;
      uVar25 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1421bb520;
      uVar25 = *(uint *)(puVar21 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar25 = (int)lVar15 + -1 + uVar24;
    if ((int)uVar8 < (int)uVar25) {
      uVar25 = uVar8;
    }
  }
LAB_1421bb520:
  while( true ) {
    pTVar4 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FTaggedExport>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b0.CurrentBitIndex == uVar25) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == pTVar10))
    break;
    pUVar11 = UObjectBaseUtility::GetPackage
                        (*(UObjectBaseUtility **)
                          (*(longlong *)
                            (*(longlong *)&pTVar4->Elements +
                            (longlong)TStack_b0.CurrentBitIndex * 0x18) + 0x20));
    pUVar12 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    if (pUVar11 == pUVar12) {
      return true;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  if ((*(uint *)&param_1->field_0x8 & 1) == 0) {
    return false;
  }
  pTVar13 = FSaveContext::GetObjectDependencies(*(FSaveContext **)this);
  iVar16 = *(int *)&pTVar13->field_0x28;
  local_c8 = 0;
  puVar1 = &pTVar13->field_0x10;
  iStack_cc = 0;
  if (iVar16 != 0) {
    puVar23 = *(uint **)&pTVar13->field_0x20;
    if (*(uint **)&pTVar13->field_0x20 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar8 = *puVar23;
    local_c8 = 0;
    while (uVar8 == 0) {
      lVar15 = (longlong)iVar19;
      local_c8 = local_c8 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_cc = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1421bb634;
      uVar8 = puVar23[lVar15 + 1];
    }
    local_140 = -uVar8 & uVar8;
    uVar2 = (ulonglong)local_140 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_cc = local_c8 + -1 + (int)lVar15;
    if (iVar16 < iStack_cc) {
      iStack_cc = iVar16;
    }
  }
LAB_1421bb634:
  uVar8 = *(uint *)&pTVar13->field_0x28;
  uStack_dc = local_140;
  iStack_c0 = *(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34;
  uStack_d0 = 0xffffffff;
  uVar25 = uVar8 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(local_140,iVar19);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar8 >> 5;
  TStack_80._28_4_ = iVar9;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = pTVar13;
  iStack_e0 = iVar19;
  local_d8 = puVar1;
  iStack_c4 = iVar9;
  local_88 = pTVar13;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || (iVar16 < (int)uVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  uVar24 = *(uint *)&pTVar13->field_0x28;
  if (uVar8 != uVar24) {
    puVar21 = *(undefined1 **)&pTVar13->field_0x20;
    if (*(undefined1 **)&pTVar13->field_0x20 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
    while (uVar8 == 0) {
      lVar15 = (longlong)iVar17;
      uVar25 = uVar25 + 0x20;
      iVar17 = iVar17 + 1;
      uVar8 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1421bb730;
      uVar8 = *(uint *)(puVar21 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar8 = (int)lVar15 + -1 + uVar25;
    if ((int)uVar24 < (int)uVar8) {
      uVar8 = uVar24;
    }
  }
LAB_1421bb730:
  while( true ) {
    pTVar5 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_80.CurrentBitIndex == uVar8) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == pTVar13))
    break;
    plVar18 = (longlong *)(*(longlong *)pTVar5 + (longlong)TStack_80.CurrentBitIndex * 0x60);
    pUVar14 = UObjectRedirector::GetPrivateStaticClass();
    if (*(UClass **)(*plVar18 + 0x10) != pUVar14) {
      local_f0.DebugPtr = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(param_1), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(param_1);
      }
      uVar25 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
      iVar16 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                         ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                           *)(plVar18 + 1),uVar25 >> 0x10 ^ uVar25,
                          (TObjectPtr<UObject_const_> *)&local_f0.ObjectPtr);
      if (iVar16 != -1) {
        return false;
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return true;
}

// operator() @ 1421bb830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>::operator()
          (void *this,FBulkDataCookedIndex param_1,TFileRegionArchive<FLargeMemoryWriter> *param_2)

{
  void *this_00;
  undefined4 uVar1;
  ushort uVar2;
  long64 lVar3;
  undefined1 auStack_a8 [32];
  FBulkDataInfo local_88;
  FName local_58;
  EType local_50;
  FString local_48;
  uchar local_38 [8];
  ushort local_30;
  FBulkDataCookedIndex FStack_2e;
  uchar uStack_2d;
  ushort local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = *(void **)((longlong)this + 0x18);
  local_58 = **(FName **)((longlong)this + 8);
  local_50 = Mmap;
  __l2::<lambda_1>::operator()
            (*(void **)((longlong)this + 0x20),&local_48,BulkDataMemoryMapped,
             FBulkDataCookedIndex::Default);
  local_88.MultiOutputIndex = *(ushort *)((longlong)this + 0x28);
  local_88.ChunkId.Id._0_8_ = *(undefined8 *)*(uchar **)((longlong)this + 0x10);
  uVar2 = local_88.MultiOutputIndex >> 8 | local_88.MultiOutputIndex << 8;
  local_88.PackageName = local_58;
  local_88.BulkDataType = local_50;
  local_88.LooseFilePath.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  local_88.LooseFilePath.Data.ArrayNum = local_48.Data.ArrayNum;
  local_88.LooseFilePath.Data.ArrayMax = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStack_2e = (FBulkDataCookedIndex)param_1.Value;
  local_30._0_1_ = (char)uVar2;
  local_30._1_1_ = (char)(uVar2 >> 8);
  uStack_2d = '\x04';
  uVar1 = _local_30;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30._0_1_ = (uchar)uVar2;
  local_30._1_1_ = (uchar)(uVar2 >> 8);
  local_88.ChunkId.Id[8] = (uchar)local_30;
  local_88.ChunkId.Id[9] = local_30._1_1_;
  local_88.ChunkId.Id[10] = param_1.Value;
  local_88.ChunkId.Id[0xb] = '\x04';
  local_38 = (uchar  [8])local_88.ChunkId.Id._0_8_;
  _local_30 = uVar1;
  local_2c = local_88.MultiOutputIndex;
  lVar3 = __l2::<lambda_2>::operator()(this_00,param_2,&local_88);
  *(longlong *)(*(longlong *)this + 0x28) = *(longlong *)(*(longlong *)this + 0x28) + lVar3;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// `vector_deleting_destructor' @ 1421bb950

void * __thiscall
TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::_vector_deleting_destructor_
          (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar2;
  longlong lVar3;
  
  if ((param_1 & 2) != 0) {
    lVar3 = *(longlong *)&this[-1].HashSize;
    pTVar2 = this + lVar3;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      pTVar2[-1].HashSize = 0;
      FVar1 = pTVar2[-1].Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&pTVar2[-1].Elements);
      pTVar2 = pTVar2 + -1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].HashSize,*(longlong *)&this[-1].HashSize * 0x50 + 8);
    }
    return &this[-1].HashSize;
  }
  this->HashSize = 0;
  FVar1 = (this->Hash).SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Elements);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{144}' @ 1421bba30

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Private::FReferencerFinderArchive::`vector
   deleting destructor'`adjustor{144}' (unsigned int) __ptr64 */

void * __thiscall
UE::Private::FReferencerFinderArchive::_vector_deleting_destructor__adjustor_144__
          (FReferencerFinderArchive *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FReferencerFinderArchive *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1421bba50

void * __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::
FCollector<1>::_scalar_deleting_destructor_(FCollector<1> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bba90

void * __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FCollector<0>::_scalar_deleting_destructor_(FCollector<0> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbad0

void * __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FCollector<0>::_scalar_deleting_destructor_(FCollector<0> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbb10

void * __thiscall
IBaseDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbb40

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbb70

void * __thiscall
IBaseDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbba0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId,FRemoteServerId),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId,FRemoteServerId),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbbd0

void * __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryReader>::
_scalar_deleting_destructor_(TArchiveRemoteObjectBase<FMemoryReader> *this,uint param_1)

{
  ~TArchiveRemoteObjectBase<FMemoryReader>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbc10

void * __thiscall
UE::RemoteObject::Serialization::TArchiveRemoteObjectBase<FMemoryWriter>::
_scalar_deleting_destructor_(TArchiveRemoteObjectBase<FMemoryWriter> *this,uint param_1)

{
  ~TArchiveRemoteObjectBase<FMemoryWriter>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbc50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId,FRemoteServerId),FDefaultDelegateUserPolicy,`UE::RemoteObject::Private::InitRemoteObjects'::__l17::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbc80

void * __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbcb0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbce0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbd10

void * __thiscall
TCommonDelegateInstanceState<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbd40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbd70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbda0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId,FRemoteServerId),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FRemoteWorkPriority,FRemoteObjectId,FRemoteServerId,FRemoteServerId),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbdd0

void * __thiscall
UE::GC::TDefaultCollector<FAllReferencesProcessor>::_scalar_deleting_destructor_
          (TDefaultCollector<FAllReferencesProcessor> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbe10

void * __thiscall
TFObjectPropertyBase<FWeakObjectPtr>::_scalar_deleting_destructor_
          (TFObjectPropertyBase<FWeakObjectPtr> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbe70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`WriteBulkData'::`2'::<lambda_3>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbeb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`WriteBulkData'::`69'::<lambda_4>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`WriteBulkData'::`2'::<lambda_5>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbf30

void * __thiscall
TProperty<FWeakObjectPtr,FObjectPropertyBase>::_scalar_deleting_destructor_
          (TProperty<FWeakObjectPtr,FObjectPropertyBase> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbf90

void * __thiscall
UE::RemoteObject::Serialization::FArchetypeDeltaWriter::_scalar_deleting_destructor_
          (FArchetypeDeltaWriter *this,uint param_1)

{
  FArchiveRemoteObjectWriter::~FArchiveRemoteObjectWriter((FArchiveRemoteObjectWriter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bbfd0

void * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectReader::_scalar_deleting_destructor_
          (FArchiveRemoteObjectReader *this,uint param_1)

{
  TArchiveRemoteObjectBase<FMemoryReader>::~TArchiveRemoteObjectBase<FMemoryReader>
            ((TArchiveRemoteObjectBase<FMemoryReader> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc010

void * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteObjectWriter::_scalar_deleting_destructor_
          (FArchiveRemoteObjectWriter *this,uint param_1)

{
  ~FArchiveRemoteObjectWriter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc050

void * __thiscall
UE::RemoteObject::Serialization::FArchiveRemoteReferencePatcher::_scalar_deleting_destructor_
          (FArchiveRemoteReferencePatcher *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->IdToObjectMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IdToObjectMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IdToObjectMap);
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc0c0

void * __thiscall
UE::RemoteObject::Serialization::FArchiveSubObjectGatherer::_scalar_deleting_destructor_
          (FArchiveSubObjectGatherer *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc100

void * __thiscall
``anonymous_namespace'::WriteCookedExports'::__l2::FExportProxyArchive::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  FArchiveProxy::~FArchiveProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc140

void * __thiscall
_anon_EC3630D0::FPostSaveArchive::_scalar_deleting_destructor_(FPostSaveArchive *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc180

void * __thiscall
UE::Private::FReferencerFinderArchive::_scalar_deleting_destructor_
          (FReferencerFinderArchive *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)&this->_padding_);
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc1d0

void * __thiscall
UE::RemoteObject::Private::FRemoteObjectMaps::_scalar_deleting_destructor_
          (FRemoteObjectMaps *this,uint param_1)

{
  ~FRemoteObjectMaps(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc210

void * __thiscall
UE::RemoteObject::Private::FRemoteObjectStubMap::_scalar_deleting_destructor_
          (FRemoteObjectStubMap *this,uint param_1)

{
  ~FRemoteObjectStubMap(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421bc250

void * __thiscall
FWeakObjectProperty::_scalar_deleting_destructor_(FWeakObjectProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// AppendObjectToPathName @ 1421bd250

void __cdecl AppendObjectToPathName(UObject *param_1,FRemoteObjectPathName *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  while( true ) {
    if (param_1 == (UObject *)0x0) {
      return;
    }
    local_28 = *(undefined8 *)&param_1->field_0x18;
    if (((*(undefined8 **)param_2 <= &local_28) &&
        (&local_28 < *(undefined8 **)param_2 + *(int *)&param_2->field_0xc)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) break;
    iVar3 = *(int *)&param_2->field_0x8;
    if (iVar3 == *(int *)&param_2->field_0xc) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)param_2,(int *)&param_2->field_0xc);
    }
    *(int *)&param_2->field_0x8 = iVar3 + 1;
    local_20 = 0;
    *(undefined8 *)(*(longlong *)param_2 + (longlong)iVar3 * 8) = local_28;
    if (((*(undefined8 **)&param_2->field_0x10 <= &local_20) &&
        (&local_20 < *(undefined8 **)&param_2->field_0x10 + *(int *)&param_2->field_0x1c)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = *(int *)&param_2->field_0x18;
    if (iVar3 == *(int *)&param_2->field_0x1c) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_2->field_0x10,(int *)&param_2->field_0x1c
                        );
    }
    *(int *)&param_2->field_0x18 = iVar3 + 1;
    *(undefined8 *)(*(longlong *)&param_2->field_0x10 + (longlong)iVar3 * 8) = local_20;
    param_1 = *(UObject **)&param_1->field_0x20;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// AssignGlobalServerIdDebuggingState @ 1421bd6d0

void __cdecl AssignGlobalServerIdDebuggingState(void)

{
  FGuid local_18;
  
  local_18.A = 0xcf8b6d3d;
  local_18.B = 0x3185453c;
  local_18.C = 0xaf1288eb;
  local_18.D = 0x19245359;
  UE::Core::FVisualizerDebuggingState::Assign(&local_18,&FRemoteServerId::GlobalServerId);
  return;
}

// BuildAndWriteTrailer @ 1421be4b0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::BuildAndWriteTrailer
          (IPackageWriter *param_1,FStructuredArchiveRecord *param_2,FSaveContext *param_3,
          long64 *param_4)

{
  int *piVar1;
  TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_> *this;
  longlong lVar2;
  FPackageTrailerBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ESavePackageResult EVar7;
  FLinkerSave *pFVar8;
  FLinkerSave *pFVar9;
  uchar *puVar10;
  FIoBuffer *pFVar11;
  FName local_148;
  FName local_140;
  FName local_138;
  FIoBuffer local_130;
  longlong local_128;
  undefined2 local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FLargeMemoryWriter local_e8;
  
  pFVar8 = FSaveContext::GetLinker(param_3);
  pFVar8->_padding_ = -1;
  pFVar8 = FSaveContext::GetLinker(param_3);
  if ((pFVar8->PackageTrailerBuilder).Ptr == (FPackageTrailerBuilder *)0x0) {
    return Success;
  }
  if (((param_3->SaveArgs).SaveFlags & 0x2000) == 0) {
    pFVar8 = FSaveContext::GetLinker(param_3);
    iVar6 = UE::FPackageTrailerBuilder::GetNumReferencedPayloads
                      ((pFVar8->PackageTrailerBuilder).Ptr);
    if (iVar6 != 0) {
      local_148 = (FName)param_3->Package->_padding_;
      ::FName::ToString(&local_148,&local_118);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SaveContext.GetSaveArgs().SaveFlags & SAVE_BulkDataByReference) != 0 || SaveContext.GetLinker()->PackageTrailerBuilder->GetNumReferencedPayloads() == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                         ,0xbaa,
                         L"Attempting to build a package trailer with referenced payloads but the SAVE_BulkDataByReference flag is not set. \'%s\'"
                        );
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
    }
    if (((param_3->SaveArgs).SaveFlags & 0x2000) == 0) goto LAB_1421be636;
  }
  pFVar8 = FSaveContext::GetLinker(param_3);
  iVar6 = UE::FPackageTrailerBuilder::GetNumLocalPayloads((pFVar8->PackageTrailerBuilder).Ptr);
  if (iVar6 != 0) {
    local_140 = (FName)param_3->Package->_padding_;
    ::FName::ToString(&local_140,&local_108);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(SaveContext.GetSaveArgs().SaveFlags & SAVE_BulkDataByReference) == 0 || SaveContext.GetLinker()->PackageTrailerBuilder->GetNumLocalPayloads() == 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                       ,0xbad,
                       L"Attempting to build a package trailer with local payloads but the SAVE_BulkDataByReference flag is set. \'%s\'"
                      );
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
  }
LAB_1421be636:
  if (param_3->bTextFormat != false) {
    local_138 = (FName)param_3->Package->_padding_;
    ::FName::ToString(&local_138,&local_f8);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SaveContext.IsTextFormat() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                       ,0xbaf,
                       L"Attempting to build a package trailer for text based asset \'%s\', this is not supported!"
                      );
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
  }
  lVar2 = *param_4;
  pFVar8 = FSaveContext::GetLinker(param_3);
  pFVar8->_padding_ = lVar2;
  if (param_1 == (IPackageWriter *)0x0) {
    pFVar8 = FSaveContext::GetLinker(param_3);
    pFVar3 = (pFVar8->PackageTrailerBuilder).Ptr;
    pFVar8 = FSaveContext::GetLinker(param_3);
    pFVar9 = FSaveContext::GetLinker(param_3);
    bVar5 = UE::FPackageTrailerBuilder::BuildAndAppendTrailer
                      (pFVar3,pFVar9,(FArchive *)&pFVar8->_padding_,param_4);
    if (!bVar5) {
      return Error;
    }
  }
  else {
    FLargeMemoryWriter::FLargeMemoryWriter(&local_e8,0,true,(wchar_t *)0x0);
    pFVar8 = FSaveContext::GetLinker(param_3);
    pFVar3 = (pFVar8->PackageTrailerBuilder).Ptr;
    pFVar8 = FSaveContext::GetLinker(param_3);
    bVar5 = UE::FPackageTrailerBuilder::BuildAndAppendTrailer
                      (pFVar3,pFVar8,(FArchive *)&local_e8,param_4);
    if (!bVar5) {
      FLargeMemoryWriter::~FLargeMemoryWriter(&local_e8);
      return Error;
    }
    local_120 = 0;
    local_128 = param_3->Package->_padding_;
    pcVar4 = *(code **)((longlong)*param_1 + 0x48);
    puVar10 = FLargeMemoryData::ReleaseOwnership(&local_e8.Data);
    pFVar11 = FIoBuffer::FIoBuffer(&local_130,AssumeOwnership,puVar10,local_e8.Data.NumBytes);
    (*pcVar4)(param_1,&local_128,pFVar11);
    if (local_130.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_130.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_130.CorePtr.Reference + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_130.CorePtr.Reference);
        ::operator_delete((void *)local_130.CorePtr.Reference,0x20);
      }
    }
    FLargeMemoryWriter::~FLargeMemoryWriter(&local_e8);
  }
  pFVar8 = FSaveContext::GetLinker(param_3);
  this = &pFVar8->PackageTrailerBuilder;
  pFVar3 = this->Ptr;
  if (pFVar3 != (FPackageTrailerBuilder *)0x0) {
    this->Ptr = (FPackageTrailerBuilder *)0x0;
    TDefaultDelete<UE::FPackageTrailerBuilder>::operator()
              ((TDefaultDelete<UE::FPackageTrailerBuilder> *)this,pFVar3);
  }
  return Success;
}

// BuildLinker @ 1421be830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001421bf8cc) */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl `anonymous_namespace'::BuildLinker(FSaveContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator> *pTVar4;
  TSet<FNameEntryId,DefaultKeyFuncs<FNameEntryId,0>,FDefaultSetAllocator> *pTVar5;
  ESaveRealm EVar6;
  UPackage *pUVar7;
  ForElementType<FSetElementId> FVar8;
  FNameEntryId *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint *puVar12;
  undefined1 *puVar13;
  UObjectBaseUtility *this;
  code *pcVar14;
  FLinkerSave *pFVar15;
  FSaveContext *pFVar16;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *pTVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  uint uVar21;
  ESavePackageResult EVar22;
  int iVar23;
  uint uVar24;
  FPackageIndex FVar25;
  FNameEntryId FVar26;
  FLinkerSave *pFVar27;
  FCustomVersionContainer *pFVar28;
  FHarvestedRealm *pFVar29;
  FHarvestedRealm *pFVar30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar31;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar32;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar33;
  UClass *pUVar34;
  FObjectImport *pFVar35;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *pTVar36;
  longlong lVar37;
  FObjectExport *pFVar38;
  TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
  *pTVar39;
  TTuple<TObjectPtr<UObject>,FPackageIndex> *pTVar40;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar41;
  TSet<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  UClass *pUVar42;
  undefined4 extraout_var;
  UObject *pUVar43;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  byte bVar44;
  ulonglong uVar45;
  undefined8 uVar46;
  ForElementType<FSetElementId> FVar47;
  uint uVar48;
  uint uVar49;
  FObjectPtr_u_0 FVar50;
  longlong lVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  int iVar54;
  undefined1 *puVar55;
  int iVar56;
  uint *puVar57;
  longlong *plVar58;
  longlong lVar59;
  TBitArray<FDefaultBitArrayAllocator> *pTVar60;
  ForAnyElementType *pFVar61;
  undefined1 auStackY_988 [32];
  FLinkerSave *local_938;
  char local_930;
  FIdentityFunctor local_92f;
  undefined1 local_92e;
  undefined1 local_92d;
  undefined1 local_92c [4];
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_928;
  undefined8 uStack_920;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  int local_900;
  undefined4 uStack_8fc;
  uint local_8f8;
  int local_8f4;
  undefined4 local_8f0;
  uint local_8ec;
  uint local_8e8;
  uint local_8e4;
  uint local_8e0 [2];
  FSaveContext *local_8d8;
  ForAnyElementType local_8d0;
  undefined8 local_8c8;
  FObjectPtr_u_0 local_8c0;
  uint local_8b8;
  int local_8b4;
  int local_8b0;
  uint local_8ac;
  int local_8a8 [2];
  undefined8 local_8a0;
  undefined8 local_898;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_890;
  longlong local_888;
  uint local_880;
  undefined4 uStack_87c;
  FEngineVersion local_878;
  FEngineVersion local_858;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_838;
  FString local_818;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_808;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_788;
  undefined1 local_768 [4];
  undefined4 local_764;
  undefined1 local_760 [4];
  undefined1 local_75c [4];
  FGenerationInfo local_758;
  FObjectPtr_u_0 local_750;
  UObject *local_748;
  UObject *local_740;
  longlong local_738;
  longlong local_730;
  UObject *local_728;
  UObject *local_720;
  UObject *local_718;
  UObject *local_710;
  uint *local_708;
  UClass *local_700;
  FName local_6f8;
  UObject *local_6f0;
  UObject *local_6e8;
  FName local_6e0;
  FName local_6d8;
  UPackage *local_6d0;
  longlong local_6c8;
  UObject *local_6c0;
  longlong *local_6b8;
  undefined1 local_6b0 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  undefined1 local_658 [8];
  undefined1 local_650 [8];
  int local_648;
  int local_644;
  undefined1 local_640 [4];
  undefined1 local_63c [4];
  undefined1 local_638 [8];
  undefined1 local_630 [12];
  uint uStack_624;
  TBitArray<FDefaultBitArrayAllocator> *local_620;
  undefined8 uStack_618;
  longlong local_610;
  undefined8 uStack_608;
  undefined1 local_600 [12];
  uint uStack_5f4;
  TBitArray<FDefaultBitArrayAllocator> *local_5f0;
  undefined8 uStack_5e8;
  longlong local_5e0;
  undefined8 uStack_5d8;
  undefined1 local_5d0 [12];
  uint uStack_5c4;
  TBitArray<FDefaultBitArrayAllocator> *local_5c0;
  undefined8 uStack_5b8;
  longlong local_5b0;
  undefined8 uStack_5a8;
  undefined1 local_5a0 [12];
  uint uStack_594;
  TBitArray<FDefaultBitArrayAllocator> *local_590;
  undefined8 uStack_588;
  longlong local_580;
  undefined8 uStack_578;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_570;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_568;
  undefined8 uStack_548;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_540;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_538;
  undefined8 uStack_518;
  longlong local_510;
  uint *local_508;
  longlong local_500;
  uint *local_4f8;
  UObject **local_4f0;
  uint *local_4e8;
  UObject **local_4e0;
  int *local_4d8;
  longlong *local_4d0;
  int *local_4c8;
  longlong *local_4c0;
  uint *local_4b8;
  FLinkerSave **local_4b0;
  undefined8 *local_4a8;
  FString local_4a0;
  FString local_490;
  TArray<FName,TSizedDefaultAllocator<32>_> local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_418;
  TRangedForConstIterator local_408;
  TRangedForIterator local_3d8;
  TRangedForConstIterator local_3a8;
  TRangedForIterator local_378;
  FCustomVersionContainer local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  undefined4 local_2bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2b8;
  FObjectImport local_298;
  FObjectExport local_260;
  undefined1 local_1f8 [104];
  void *local_190;
  undefined4 local_188;
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_180;
  ForElementType<FSetElementId> local_140;
  int local_138;
  TSparseArray<TSparseSetElement<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_130;
  ForElementType<FSetElementId> local_f0;
  int local_e8;
  TSparseArray<TSparseSetElement<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e0;
  ForElementType<FSetElementId> local_a0;
  int local_98;
  TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_90;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_988;
  local_8d8 = param_1;
  local_938 = FSaveContext::GetLinker(param_1);
  FPackageFileSummary::SetCustomVersionContainer
            ((FPackageFileSummary *)&local_938->_padding_,&param_1->CustomVersions);
  pFVar27 = local_938;
  uVar21 = UE::SavePackageUtilities::Private::GetSavePackagePortFlags();
  *(uint *)((longlong)&pFVar27->_padding_ + 4) = uVar21;
  if ((param_1->bIsSaveAutoOptional == false) || (param_1->CurrentHarvestingRealm != Optional)) {
    (**(code **)(local_938->_padding_ + 0x80))
              (&local_938->_padding_,(uint)param_1->Package->PackageFlagsPrivate >> 0x1f);
  }
  else {
    (**(code **)(local_938->_padding_ + 0x80))(&local_938->_padding_,0);
  }
  pFVar27 = local_938;
  if (&param_1->ArchiveSavePackageData == (FArchiveSavePackageData *)0x0) {
    if ((local_938->_padding_ != 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(InSavePackageData == nullptr && SavePackageData)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                            ,0x28e,L"Can\'t turn off cooking once you turn it on!"), bVar18)) {
      pcVar14 = (code *)swi(3);
      EVar22 = (*pcVar14)();
      return EVar22;
    }
  }
  else {
    if ((((local_938->_padding_ & 1) != 0) || ((local_938->_padding_ & 4) == 0)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsLoading() && !IsTransacting() && IsSaving()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\Archive.h"
                            ,0x292,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      EVar22 = (*pcVar14)();
      return EVar22;
    }
    pFVar27->_padding_ = (longlong)&param_1->ArchiveSavePackageData;
  }
  if ((((param_1->SaveArgs).SaveFlags & 0x4000) == 0) ||
     (param_1->bCanUseUnversionedPropertySerialization == false)) {
    uVar46 = 0;
  }
  else {
    uVar46 = 1;
  }
  (**(code **)(local_938->_padding_ + 0xf8))(&local_938->_padding_,uVar46);
  if ((param_1->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) {
    local_938->bSaveBulkDataByReference = (bool)((byte)((param_1->SaveArgs).SaveFlags >> 0xd) & 1);
  }
  pFVar27 = FSaveContext::GetLinker(param_1);
  if ((pFVar27 == (FLinkerSave *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Linker",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.h"
                          ,0x4b2,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    EVar22 = (*pcVar14)();
    return EVar22;
  }
  UPackage::SetLinkerPackageVersion(param_1->Package,(FPackageFileVersion)pFVar27->_padding_);
  UPackage::SetLinkerLicenseeVersion(param_1->Package,(int)pFVar27->_padding_);
  pUVar7 = param_1->Package;
  pFVar28 = (FCustomVersionContainer *)(**(code **)(pFVar27->_padding_ + 0x60))(&pFVar27->_padding_)
  ;
  pFVar28 = FCustomVersionContainer::FCustomVersionContainer(&local_348,pFVar28);
  UPackage::SetLinkerCustomVersions(pUVar7,pFVar28);
  FGenerationInfo::FGenerationInfo(&local_758,0,0);
  local_8c8 = CONCAT44(local_8c8._4_4_,1);
  local_8d0.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_8d0,1,(int *)((longlong)&local_8c8 + 4));
  pFVar27 = local_938;
  *(FGenerationInfo *)local_8d0.Data = local_758;
  plVar58 = &local_938->_padding_;
  if ((ForAnyElementType *)plVar58 != &local_8d0) {
    if ((void *)*plVar58 != (void *)0x0) {
      FMemory::Free((void *)*plVar58);
    }
    *plVar58 = (longlong)local_8d0.Data;
    local_8d0.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar27->_padding_ = (undefined4)local_8c8;
    *(undefined4 *)((longlong)&pFVar27->_padding_ + 4) = local_8c8._4_4_;
    local_8c8 = 0;
  }
  if ((FGenerationInfo *)local_8d0.Data != (FGenerationInfo *)0x0) {
    FMemory::Free(local_8d0.Data);
  }
  if ((param_1->ObjectSaveContext).bProceduralSave != false) {
    local_878._4_8_ = 0;
    local_878._padding_._4_4_ = 0;
    local_878._padding_._0_4_ = 0;
    local_878.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_878.Branch.Data.ArrayNum = 0;
    local_878.Branch.Data.ArrayMax = 0;
    FEngineVersion::operator=((FEngineVersion *)&local_938->_padding_,&local_878);
    if (local_878.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Branch.Data.AllocatorInstance.Data);
    }
    local_858._4_8_ = 0;
    local_858._padding_._4_4_ = 0;
    local_858._padding_._0_4_ = 0;
    local_858.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.Branch.Data.ArrayNum = 0;
    local_858.Branch.Data.ArrayMax = 0;
    FEngineVersion::operator=((FEngineVersion *)&local_938->_padding_,&local_858);
    if (local_858.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Branch.Data.AllocatorInstance.Data);
    }
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'::`15'::__CpuProfilerEventSpecId1299,"UPackage_Save_BuildNameMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x513);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'::`15'::__CpuProfilerEventSpecId1299);
  }
  pFVar29 = FSaveContext::GetHarvestedRealm(param_1,None);
  pTVar4 = &pFVar29->NamesReferencedFromExportData;
  pFVar30 = FSaveContext::GetHarvestedRealm(param_1,None);
  pTVar5 = &pFVar30->NamesReferencedFromPackageHeader;
  uVar21 = ((*(int *)&(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x8 -
            *(int *)&(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x34) -
           *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x34) +
           *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x8;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  piVar1 = (int *)((longlong)&local_938->_padding_ + 4);
  if (*piVar1 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar21,(ForAnyElementType *)&local_938->_padding_,(int)local_938->_padding_,
               piVar1);
  }
  local_808._padding_._0_4_ = 0;
  puVar2 = &(pFVar29->NamesReferencedFromExportData).Elements.field_0x10;
  local_808._padding_._4_4_ = 1;
  local_808.UnvisitedBitMask = 0xffffffff;
  local_808.CurrentBitIndex = 0;
  local_808.BaseBitIndex = 0;
  local_808.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_808);
  }
  uStack_920 = CONCAT44(local_808._padding_._4_4_,(undefined4)local_808._padding_);
  uStack_910 = CONCAT44(local_808.CurrentBitIndex,local_808.UnvisitedBitMask);
  uStack_908 = CONCAT44(local_808._28_4_,local_808.BaseBitIndex);
  local_900 = *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x8 -
              *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x34;
  pTStack_918 = local_808.Array;
  uStack_608._4_4_ = uStack_8fc;
  uStack_608._0_4_ = local_900;
  local_620 = local_808.Array;
  local_928 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)pTVar4;
  local_630._0_8_ = pTVar4;
  unique0x10004c54 = uStack_920;
  uStack_618 = uStack_910;
  local_610 = uStack_908;
  pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_2b8,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x28);
  uStack_920 = pTVar31->_padding_;
  pTStack_918 = pTVar31->Array;
  uStack_910._0_4_ = pTVar31->UnvisitedBitMask;
  uStack_910._4_4_ = pTVar31->CurrentBitIndex;
  uStack_908 = *(longlong *)&pTVar31->BaseBitIndex;
  local_900 = *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x8 -
              *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x34;
  local_408._44_4_ = uStack_8fc;
  local_408.InitialNum = local_900;
  local_928 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)pTVar4;
  local_408._padding_ = (longlong)pTVar4;
  local_408._padding_ = uStack_920;
  local_408._padding_ = (longlong)pTStack_918;
  local_408._padding_ = uStack_910;
  local_408._padding_ = uStack_908;
  bVar19 = TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_630,&local_408);
  if (bVar19) {
    do {
      pFVar27 = local_938;
      plVar58 = &local_938->_padding_;
      local_8f0 = *(undefined4 *)
                   (*(longlong *)
                     (TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_630._0_8_ + (longlong)uStack_618._4_4_ * 0xc);
      if ((((undefined4 *)*plVar58 <= &local_8f0) &&
          (&local_8f0 < (undefined4 *)*plVar58 + *(int *)((longlong)&local_938->_padding_ + 4))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      iVar23 = (int)pFVar27->_padding_;
      piVar1 = (int *)((longlong)&pFVar27->_padding_ + 4);
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)plVar58,piVar1);
      }
      *(int *)&pFVar27->_padding_ = iVar23 + 1;
      *(undefined4 *)(*plVar58 + (longlong)iVar23 * 4) = local_8f0;
      uStack_618 = CONCAT44(uStack_618._4_4_,(uint)uStack_618 & ~uStack_624);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_630 + 8));
      bVar19 = TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_630,&local_408);
    } while (bVar19);
  }
  local_7e8._padding_._4_4_ = 1;
  puVar2 = &(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x10;
  local_7e8._padding_._0_4_ = 0;
  local_7e8.UnvisitedBitMask = 0xffffffff;
  local_7e8.CurrentBitIndex = 0;
  local_7e8.BaseBitIndex = 0;
  local_7e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7e8);
  }
  uStack_920 = CONCAT44(local_7e8._padding_._4_4_,(undefined4)local_7e8._padding_);
  uStack_910 = CONCAT44(local_7e8.CurrentBitIndex,local_7e8.UnvisitedBitMask);
  uStack_908 = CONCAT44(local_7e8._28_4_,local_7e8.BaseBitIndex);
  local_900 = *(int *)&(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x8 -
              *(int *)&(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x34;
  pTStack_918 = local_7e8.Array;
  uStack_5d8._4_4_ = uStack_8fc;
  uStack_5d8._0_4_ = local_900;
  local_5f0 = local_7e8.Array;
  local_928 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)pTVar5;
  local_600._0_8_ = pTVar5;
  unique0x10004c74 = uStack_920;
  uStack_5e8 = uStack_910;
  local_5e0 = uStack_908;
  pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_338,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x28);
  uStack_920 = pTVar31->_padding_;
  pTStack_918 = pTVar31->Array;
  uStack_910._0_4_ = pTVar31->UnvisitedBitMask;
  uStack_910._4_4_ = pTVar31->CurrentBitIndex;
  uStack_908 = *(longlong *)&pTVar31->BaseBitIndex;
  local_900 = *(int *)&(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x8 -
              *(int *)&(pFVar30->NamesReferencedFromPackageHeader).Elements.field_0x34;
  local_3d8._44_4_ = uStack_8fc;
  local_3d8.InitialNum = local_900;
  local_928 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)pTVar5;
  local_3d8._padding_ = (longlong)pTVar5;
  local_3d8._padding_ = uStack_920;
  local_3d8._padding_ = (longlong)pTStack_918;
  local_3d8._padding_ = uStack_910;
  local_3d8._padding_ = uStack_908;
  bVar19 = TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_600,&local_3d8);
  if (bVar19) {
    do {
      local_8f8 = *(uint *)(*(longlong *)
                             (TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_600._0_8_ + (longlong)uStack_5e8._4_4_ * 0xc);
      uVar21 = ::GetTypeHash((FNameEntryId)local_8f8);
      pFVar27 = local_938;
      if (*(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x8 !=
          *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x34) {
        FVar8 = (pFVar29->NamesReferencedFromExportData).Hash.SecondaryData;
        FVar47 = (ForElementType<FSetElementId>)&(pFVar29->NamesReferencedFromExportData).Hash;
        if (FVar8 != (ForElementType<FSetElementId>)0x0) {
          FVar47 = FVar8;
        }
        iVar23 = *(int *)((longlong)FVar47 +
                         (ulonglong)
                         ((pFVar29->NamesReferencedFromExportData).HashSize - 1U & uVar21) * 4);
        if (iVar23 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pTVar4->Elements + (longlong)iVar23 * 0xc) == local_8f8)
            goto LAB_1421bf03d;
            iVar23 = *(int *)(*(longlong *)&pTVar4->Elements + 4 + (longlong)iVar23 * 0xc);
          } while (iVar23 != -1);
        }
      }
      plVar58 = &local_938->_padding_;
      if ((((uint *)*plVar58 <= &local_8f8) &&
          (&local_8f8 < (uint *)*plVar58 + *(int *)((longlong)&local_938->_padding_ + 4))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      iVar23 = (int)pFVar27->_padding_;
      piVar1 = (int *)((longlong)&pFVar27->_padding_ + 4);
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)plVar58,piVar1);
      }
      *(int *)&pFVar27->_padding_ = iVar23 + 1;
      *(uint *)(*plVar58 + (longlong)iVar23 * 4) = local_8f8;
LAB_1421bf03d:
      uStack_5e8 = CONCAT44(uStack_5e8._4_4_,(uint)uStack_5e8 & ~uStack_5f4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_600 + 8));
      bVar19 = TSparseArray<TSparseSetElement<FNameEntryId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_600,&local_3d8);
    } while (bVar19);
  }
  *(undefined4 *)((longlong)&local_938->_padding_ + 4) = 0;
  *(int *)&local_938->_padding_ = (int)local_938->_padding_;
  iVar23 = *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x8 -
           *(int *)&(pFVar29->NamesReferencedFromExportData).Elements.field_0x34;
  *(int *)&local_938->_padding_ = iVar23;
  pFVar9 = (FNameEntryId *)local_938->_padding_;
  if ((iVar23 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    EVar22 = (*pcVar14)();
    return EVar22;
  }
  AlgoImpl::
  IntroSortInternal<FNameEntryId,int,FIdentityFunctor,_anonymous_namespace_::FNameEntryIdSortHelper>
            (pFVar9,iVar23,local_92f,(FNameEntryIdSortHelper)local_92f);
  iVar23 = (int)local_938->_padding_;
  iVar54 = (int)local_938->_padding_ - iVar23;
  lVar59 = local_938->_padding_;
  if ((iVar54 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    EVar22 = (*pcVar14)();
    return EVar22;
  }
  AlgoImpl::
  IntroSortInternal<FNameEntryId,int,FIdentityFunctor,_anonymous_namespace_::FNameEntryIdSortHelper>
            ((FNameEntryId *)(lVar59 + (longlong)iVar23 * 4),iVar54,local_92f,
             (FNameEntryIdSortHelper)local_92f);
  if ((param_1->bTextFormat == false) && (local_8e8 = 0, 0 < (int)local_938->_padding_)) {
    do {
      uVar21 = local_8e8;
      pFVar27 = local_938;
      uVar48 = 0;
      if ((int)local_8e8 < (int)local_938->_padding_) {
        uVar48 = ~local_8e8 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      local_510 = pFVar27->_padding_ + (longlong)(int)uVar21 * 4;
      local_508 = &local_8e8;
      TSet<TTuple<FNameEntryId,int>,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FNameEntryId_const_&,int_const_&>_>
                ((TSet<TTuple<FNameEntryId,int>,TDefaultMapHashableKeyFuncs<FNameEntryId,int,0>,FDefaultSetAllocator>
                  *)&pFVar27->NameIndices,
                 (TPairInitializer<FNameEntryId_const_&,int_const_&> *)local_6b0,(bool *)&local_510)
      ;
      local_8e8 = local_8e8 + 1;
    } while ((int)local_8e8 < (int)local_938->_padding_);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'::`32'::__CpuProfilerEventSpecId1334,
               "UPackage_Save_BuildSoftObjectPathList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x536);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'::`32'::__CpuProfilerEventSpecId1334);
  }
  *(undefined4 *)((longlong)&local_938->_padding_ + 4) = 0;
  *(undefined4 *)&local_938->_padding_ = 0;
  if ((param_1->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) {
    pFVar29 = FSaveContext::GetHarvestedRealm(param_1,None);
    pTVar32 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::Array
                        (&pFVar29->SoftObjectPathList,&local_6a8);
    pFVar27 = local_938;
    plVar58 = &local_938->_padding_;
    if ((TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)plVar58 != pTVar32) {
      DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)*plVar58,(int)local_938->_padding_);
      if ((void *)*plVar58 != (void *)0x0) {
        FMemory::Free((void *)*plVar58);
      }
      *plVar58 = (longlong)(pTVar32->AllocatorInstance).Data;
      (pTVar32->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)&pFVar27->_padding_ = pTVar32->ArrayNum;
      *(int *)((longlong)&pFVar27->_padding_ + 4) = pTVar32->ArrayMax;
      pTVar32->ArrayNum = 0;
      pTVar32->ArrayMax = 0;
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_6a8.AllocatorInstance.Data,local_6a8.ArrayNum);
    if ((FSoftObjectPath *)local_6a8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_6a8.AllocatorInstance.Data);
    }
  }
  if ((param_1->bTextFormat == false) && (local_8e4 = 0, 0 < (int)local_938->_padding_)) {
    do {
      uVar21 = local_8e4;
      pFVar27 = local_938;
      uVar48 = 0;
      if ((int)local_8e4 < (int)local_938->_padding_) {
        uVar48 = ~local_8e4 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      local_500 = (longlong)(int)uVar21 * 0x20 + pFVar27->_padding_;
      local_4f8 = &local_8e4;
      TSet<TTuple<FSoftObjectPath,int>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FSoftObjectPath_const_&,int_const_&>_>
                ((TSet<TTuple<FSoftObjectPath,int>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,int,0>,FDefaultSetAllocator>
                  *)&pFVar27->SoftObjectPathIndices,
                 (TPairInitializer<FSoftObjectPath_const_&,int_const_&> *)(local_6b0 + 4),
                 (bool *)&local_500);
      local_8e4 = local_8e4 + 1;
    } while ((int)local_8e4 < (int)local_938->_padding_);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(undefined4 *)((longlong)&local_938->_padding_ + 4) = 0;
  *(undefined4 *)&local_938->_padding_ = 0;
  if (-1 < (int)param_1->Package->PackageFlagsPrivate) {
    if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`BuildLinker'::`44'::__CpuProfilerEventSpecId1360,
                 "UPackage_Save_BuildGatherableTextData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                 ,0x550);
      FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'::`44'::__CpuProfilerEventSpecId1360);
    }
    param_1->GatherableTextResultFlags = Empty;
    FPropertyLocalizationDataGatherer::FPropertyLocalizationDataGatherer
              ((FPropertyLocalizationDataGatherer *)local_1f8,
               (TArray<FGatherableTextData,TSizedDefaultAllocator<32>_> *)&local_938->_padding_,
               param_1->Package,&param_1->GatherableTextResultFlags);
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_90);
    local_98 = 0;
    if (local_a0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a0);
    }
    TSparseArray<TSparseSetElement<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e0);
    local_e8 = 0;
    if (local_f0 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f0);
    }
    TSparseArray<TSparseSetElement<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPropertyLocalizationDataGatherer::FObjectAndGatherFlags>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_130);
    local_138 = 0;
    if (local_140 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_140);
    }
    TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_180);
    local_188 = 0;
    if (local_190 != (void *)0x0) {
      FMemory::Free(local_190);
    }
    TSparseArray<TSparseSetElement<TTuple<UStruct_const_*,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UStruct_const_*,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UStruct_const_*,TUniquePtr<FPropertyLocalizationDataGatherer::FGatherableFieldsForType,TDefaultDelete<FPropertyLocalizationDataGatherer::FGatherableFieldsForType>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_1f8 + 0x28));
    if ((FScriptContainerElement *)local_1f8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1f8._16_8_);
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'::`45'::__CpuProfilerEventSpecId1416,"UPackage_Save_BuildImportMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x588);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'::`45'::__CpuProfilerEventSpecId1416);
  }
  pTVar33 = FSaveContext::GetImports(param_1);
  local_7c8._padding_._0_4_ = 0;
  local_7c8._padding_._4_4_ = 1;
  local_7c8.UnvisitedBitMask = 0xffffffff;
  puVar2 = &(pTVar33->Elements).field_0x10;
  local_7c8.CurrentBitIndex = 0;
  local_7c8.BaseBitIndex = 0;
  local_7c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(pTVar33->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7c8);
  }
  uStack_920 = CONCAT44(local_7c8._padding_._4_4_,(undefined4)local_7c8._padding_);
  uStack_910 = CONCAT44(local_7c8.CurrentBitIndex,local_7c8.UnvisitedBitMask);
  uStack_908 = CONCAT44(local_7c8._28_4_,local_7c8.BaseBitIndex);
  local_900 = *(int *)&(pTVar33->Elements).field_0x8 - *(int *)&(pTVar33->Elements).field_0x34;
  pTStack_918 = local_7c8.Array;
  uStack_5a8._4_4_ = uStack_8fc;
  uStack_5a8._0_4_ = local_900;
  local_5c0 = local_7c8.Array;
  local_928 = pTVar33;
  local_5d0._0_8_ = pTVar33;
  unique0x10004c94 = uStack_920;
  uStack_5b8 = uStack_910;
  local_5b0 = uStack_908;
  pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_318,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(pTVar33->Elements).field_0x28);
  uStack_920 = pTVar31->_padding_;
  pTStack_918 = pTVar31->Array;
  uStack_910._0_4_ = pTVar31->UnvisitedBitMask;
  uStack_910._4_4_ = pTVar31->CurrentBitIndex;
  uStack_908 = *(longlong *)&pTVar31->BaseBitIndex;
  local_900 = *(int *)&(pTVar33->Elements).field_0x8 - *(int *)&(pTVar33->Elements).field_0x34;
  local_3a8._44_4_ = uStack_8fc;
  local_3a8.InitialNum = local_900;
  local_928 = pTVar33;
  local_3a8._padding_ = (longlong)pTVar33;
  local_3a8._padding_ = uStack_920;
  local_3a8._padding_ = (longlong)pTStack_918;
  local_3a8._padding_ = uStack_910;
  local_3a8._padding_ = uStack_908;
  bVar19 = TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_5d0,&local_3a8);
  if (bVar19) {
    local_8a0 = 0;
    do {
      pUVar34 = (UClass *)0x0;
      local_8c0 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)
                  (*(longlong *)
                    (TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_5d0._0_8_ + (longlong)uStack_5b8._4_4_ * 0x10))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1421bf706:
        if (local_8c0.Handle != (UObject *)0x0) {
          pUVar34 = UE::CoreUObject::Private::GetClass(local_8c0.Handle);
        }
      }
      else if (local_8c0.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_8c0.Handle);
        goto LAB_1421bf706;
      }
      pFVar27 = local_938;
      pFVar35 = FObjectImport::FObjectImport(&local_298,local_8c0.Handle,pUVar34);
      if ((((FObjectImport *)pFVar27->_padding_ <= pFVar35) &&
          (pFVar35 < (FObjectImport *)pFVar27->_padding_ +
                     *(int *)((longlong)&pFVar27->_padding_ + 4))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      iVar23 = (int)pFVar27->_padding_;
      piVar1 = (int *)((longlong)&pFVar27->_padding_ + 4);
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)&pFVar27->_padding_,piVar1);
      }
      *(int *)&pFVar27->_padding_ = iVar23 + 1;
      lVar59 = *(longlong *)&pFVar35->_padding_;
      plVar58 = (longlong *)((longlong)iVar23 * 0x38 + pFVar27->_padding_);
      *plVar58 = pFVar35->_padding_;
      plVar58[1] = lVar59;
      lVar59 = *(longlong *)&(pFVar35->ClassName).Number;
      plVar58[2] = *(longlong *)&(pFVar35->ClassPackage).Number;
      plVar58[3] = lVar59;
      pUVar43 = pFVar35->XObject;
      plVar58[4] = *(longlong *)&pFVar35->bImportOptional;
      plVar58[5] = (longlong)pUVar43;
      plVar58[6] = (longlong)pFVar35->SourceLinker;
      if ((pUVar34->ClassFlags >> 4 & 1) != 0) {
        *(undefined1 *)(plVar58 + 4) = 1;
      }
      if (local_8c0.Handle == (UObject *)0x0) {
LAB_1421bf820:
        FVar50.Handle = (UObject *)0x0;
      }
      else {
        pUVar34 = Z_Construct_UClass_UPackage_NoRegister();
        bVar19 = FObjectPtr::IsA((FObjectPtr *)&local_8c0,pUVar34);
        FVar50 = local_8c0;
        if (!bVar19) goto LAB_1421bf820;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar50.Handle != (UObject *)0x0))
      {
        UE::GC::MarkAsReachable(FVar50.Handle);
      }
      local_750 = FVar50;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (FVar50.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(FVar50.Handle);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar50.Handle != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(FVar50.Handle);
        }
      }
      uVar21 = ((uint)((ulonglong)FVar50.Handle >> 0x14) & 0xffff ^
               (uint)((ulonglong)FVar50.Handle >> 4)) * -0x7a143595;
      uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
      iVar23 = TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TObjectPtr<UPackage_const_>_>
                         (&param_1->PrestreamPackages,uVar21 >> 0x10 ^ uVar21,
                          (TObjectPtr<UPackage_const_> *)&local_750);
      if (iVar23 != -1) {
        *(FName *)((longlong)plVar58 + 0x14) = UE::SavePackageUtilities::NAME_PrestreamPackage;
      }
      local_898 = 0;
      uStack_5b8 = CONCAT44(uStack_5b8._4_4_,(uint)uStack_5b8 & ~uStack_5c4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5d0 + 8));
      bVar19 = TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_5d0,&local_3a8);
    } while (bVar19);
  }
  lVar59 = 0;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    FObjectImportSortHelper::SortImports(local_938);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'::`59'::__CpuProfilerEventSpecId1448,"UPackage_Save_SortImports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x5a8);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'::`59'::__CpuProfilerEventSpecId1448);
    FObjectImportSortHelper::SortImports(local_938);
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(int *)((longlong)&local_938->_padding_ + 4) = (int)local_938->_padding_;
  *(int *)((longlong)&local_938->_padding_ + 4) = (int)local_938->_padding_;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'::`60'::__CpuProfilerEventSpecId1467,"UPackage_Save_BuildExportMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x5bb);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'::`60'::__CpuProfilerEventSpecId1467);
  }
  pTVar36 = FSaveContext::GetExports(param_1);
  local_7a8._padding_._0_4_ = 0;
  local_7a8._padding_._4_4_ = 1;
  puVar2 = &(pTVar36->Elements).field_0x10;
  local_7a8.UnvisitedBitMask = 0xffffffff;
  local_7a8.CurrentBitIndex = 0;
  local_7a8.BaseBitIndex = 0;
  local_7a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(pTVar36->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7a8);
  }
  uStack_920 = CONCAT44(local_7a8._padding_._4_4_,(undefined4)local_7a8._padding_);
  uStack_910 = CONCAT44(local_7a8.CurrentBitIndex,local_7a8.UnvisitedBitMask);
  uStack_908 = CONCAT44(local_7a8._28_4_,local_7a8.BaseBitIndex);
  local_900 = *(int *)&(pTVar36->Elements).field_0x8 - *(int *)&(pTVar36->Elements).field_0x34;
  pTStack_918 = local_7a8.Array;
  uStack_578._4_4_ = uStack_8fc;
  uStack_578._0_4_ = local_900;
  local_590 = local_7a8.Array;
  local_928 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)pTVar36;
  local_5a0._0_8_ = pTVar36;
  unique0x10004cb4 = uStack_920;
  uStack_588 = uStack_910;
  local_580 = uStack_908;
  pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_2f8,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(pTVar36->Elements).field_0x28);
  uStack_920 = pTVar31->_padding_;
  pTStack_918 = pTVar31->Array;
  uStack_910._0_4_ = pTVar31->UnvisitedBitMask;
  uStack_910._4_4_ = pTVar31->CurrentBitIndex;
  uStack_908 = *(longlong *)&pTVar31->BaseBitIndex;
  local_900 = *(int *)&(pTVar36->Elements).field_0x8 - *(int *)&(pTVar36->Elements).field_0x34;
  local_378._44_4_ = uStack_8fc;
  local_378.InitialNum = local_900;
  local_928 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)pTVar36;
  local_378._padding_ = (longlong)pTVar36;
  local_378._padding_ = uStack_920;
  local_378._padding_ = (longlong)pTStack_918;
  local_378._padding_ = uStack_910;
  local_378._padding_ = uStack_908;
  bVar19 = TSparseArray<TSparseSetElement<FTaggedExport>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_5a0,&local_378);
  if (bVar19) {
    do {
      pFVar27 = local_938;
      lVar37 = (longlong)uStack_588._4_4_;
      lVar51 = *(longlong *)
                (TSparseArray<TSparseSetElement<FTaggedExport>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_5a0._0_8_;
      pFVar38 = FObjectExport::FObjectExport
                          (&local_260,*(UObject **)(lVar51 + lVar37 * 0x18),
                           (bool)(*(byte *)(lVar51 + 8 + lVar37 * 0x18) & 1));
      if ((((FObjectExport *)pFVar27->_padding_ <= pFVar38) &&
          (pFVar38 < (FObjectExport *)pFVar27->_padding_ +
                     *(int *)((longlong)&pFVar27->_padding_ + 4))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      iVar23 = (int)pFVar27->_padding_;
      piVar1 = (int *)((longlong)&pFVar27->_padding_ + 4);
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x868,(ForAnyElementType *)&pFVar27->_padding_,piVar1);
      }
      *(int *)&pFVar27->_padding_ = iVar23 + 1;
      lVar10 = *(longlong *)&pFVar38->_padding_;
      plVar58 = (longlong *)(pFVar27->_padding_ + (longlong)iVar23 * 0x68);
      *plVar58 = pFVar38->_padding_;
      plVar58[1] = lVar10;
      lVar10 = *(longlong *)&pFVar38->TemplateIndex;
      plVar58[2] = *(longlong *)&pFVar38->ThisIndex;
      plVar58[3] = lVar10;
      lVar10 = pFVar38->SerialOffset;
      plVar58[4] = pFVar38->SerialSize;
      plVar58[5] = lVar10;
      lVar10 = pFVar38->ScriptSerializationEndOffset;
      plVar58[6] = pFVar38->ScriptSerializationStartOffset;
      plVar58[7] = lVar10;
      lVar10 = *(longlong *)&pFVar38->HashNext;
      plVar58[8] = (longlong)pFVar38->Object;
      plVar58[9] = lVar10;
      lVar10 = *(longlong *)&pFVar38->SerializationBeforeSerializationDependencies;
      plVar58[10] = *(longlong *)&pFVar38->PackageFlags;
      plVar58[0xb] = lVar10;
      plVar58[0xc] = *(longlong *)&pFVar38->SerializationBeforeCreateDependencies;
      lVar10 = plVar58[8];
      *(byte *)((longlong)plVar58 + 0x4c) =
           *(byte *)((longlong)plVar58 + 0x4c) ^
           ((char)(*(uint *)(lVar51 + lVar37 * 0x18 + 8) >> 1) << 6 ^
           *(byte *)((longlong)plVar58 + 0x4c)) & 0x40;
      if (lVar10 != 0) {
        pUVar34 = Z_Construct_UClass_UPackage_NoRegister();
        iVar23 = (int)pUVar34->_padding_;
        if ((iVar23 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar23 * 8) ==
            &pUVar34->_padding_)) {
          *(undefined4 *)(plVar58 + 10) = *(undefined4 *)(lVar10 + 0x2c);
        }
      }
      uStack_588 = CONCAT44(uStack_588._4_4_,(uint)uStack_588 & ~uStack_594);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5a0 + 8));
      bVar19 = TSparseArray<TSparseSetElement<FTaggedExport>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_5a0,&local_378);
    } while (bVar19);
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    FObjectExportSortHelper::SortExports(local_938);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'::`68'::__CpuProfilerEventSpecId1486,"UPackage_Save_SortExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x5ce);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'::`68'::__CpuProfilerEventSpecId1486);
    FObjectExportSortHelper::SortExports(local_938);
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(int *)((longlong)&local_938->_padding_ + 4) = (int)local_938->_padding_;
  *(int *)((longlong)&local_938->_padding_ + 4) = (int)local_938->_padding_;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar21 = 0;
  lVar51 = lVar59;
  if (0 < (int)local_938->_padding_) {
    do {
      pFVar27 = local_938;
      uVar48 = 0;
      if ((int)uVar21 < (int)local_938->_padding_) {
        uVar48 = ~uVar21 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      pUVar43 = *(UObject **)(pFVar27->_padding_ + 0x40 + lVar51);
      if ((pUVar43 == (UObject *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                              ,0x5eb,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      pFVar27 = local_938;
      if (((int)uVar21 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ExportIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x6d,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      uVar21 = uVar21 + 1;
      local_8b8 = uVar21;
      local_748 = pUVar43;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar43);
      }
      local_4f0 = &local_748;
      local_4e8 = &local_8b8;
      TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TObjectPtr<UObject>_&&,FPackageIndex_&&>_>
                ((TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
                  *)&pFVar27->ObjectIndicesMap,
                 (TPairInitializer<TObjectPtr<UObject>_&&,FPackageIndex_&&> *)local_658,
                 (bool *)&local_4f0);
      lVar51 = lVar51 + 0x68;
    } while ((int)uVar21 < (int)local_938->_padding_);
  }
  uVar21 = 0;
  if (0 < (int)local_938->_padding_) {
    iVar23 = -1;
    do {
      pFVar27 = local_938;
      uVar48 = 0;
      if ((int)uVar21 < (int)local_938->_padding_) {
        uVar48 = ~uVar21 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      pUVar43 = *(UObject **)(lVar59 + 0x28 + pFVar27->_padding_);
      if ((pUVar43 == (UObject *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                              ,0x5f1,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      pFVar27 = local_938;
      if (((int)uVar21 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImportIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x67,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      local_8b4 = iVar23;
      local_740 = pUVar43;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar43);
      }
      local_4e0 = &local_740;
      local_4d8 = &local_8b4;
      TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TObjectPtr<UObject>_&&,FPackageIndex_&&>_>
                ((TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
                  *)&pFVar27->ObjectIndicesMap,
                 (TPairInitializer<TObjectPtr<UObject>_&&,FPackageIndex_&&> *)(local_658 + 4),
                 (bool *)&local_4e0);
      uVar21 = uVar21 + 1;
      iVar23 = iVar23 + -1;
      lVar59 = lVar59 + 0x38;
    } while ((int)uVar21 < (int)local_938->_padding_);
  }
  uVar21 = 0;
  lVar59 = local_938->_padding_;
  if (0 < (int)local_938->_padding_) {
    lVar51 = 0;
    do {
      pFVar27 = local_938;
      uVar48 = 0;
      if ((int)uVar21 < (int)local_938->_padding_) {
        uVar48 = ~uVar21 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      local_738 = *(longlong *)(pFVar27->_padding_ + 0x30 + lVar51);
      if ((local_738 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Cell",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                              ,0x5f9,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      pFVar27 = local_938;
      iVar23 = uVar21 + (int)lVar59;
      if ((iVar23 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ExportIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x6d,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      local_8b0 = iVar23 + 1;
      local_4d0 = &local_738;
      local_4c8 = &local_8b0;
      TSet<TTuple<Verse::VCell_*,FPackageIndex>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,FPackageIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<Verse::VCell_*_const_&,FPackageIndex_&&>_>
                ((TSet<TTuple<Verse::VCell_*,FPackageIndex>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,FPackageIndex,0>,FDefaultSetAllocator>
                  *)&pFVar27->CellIndicesMap,
                 (TPairInitializer<Verse::VCell_*_const_&,FPackageIndex_&&> *)local_650,
                 (bool *)&local_4d0);
      uVar21 = uVar21 + 1;
      lVar51 = lVar51 + 0x48;
    } while ((int)uVar21 < (int)local_938->_padding_);
  }
  uVar48 = 0;
  uVar21 = (uint)local_938->_padding_;
  if (0 < (int)local_938->_padding_) {
    lVar59 = 0;
    uVar49 = ~uVar21;
    do {
      pFVar27 = local_938;
      uVar24 = 0;
      if ((int)uVar48 < (int)local_938->_padding_) {
        uVar24 = ~uVar48 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      local_730 = *(longlong *)(lVar59 + 0x18 + pFVar27->_padding_);
      if ((local_730 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Cell",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                              ,0x600,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      pFVar27 = local_938;
      if (((int)(uVar48 + uVar21) < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ImportIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x67,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      local_4c0 = &local_730;
      local_4b8 = &local_8ac;
      local_8ac = uVar49;
      TSet<TTuple<Verse::VCell_*,FPackageIndex>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,FPackageIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<Verse::VCell_*_const_&,FPackageIndex_&&>_>
                ((TSet<TTuple<Verse::VCell_*,FPackageIndex>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,FPackageIndex,0>,FDefaultSetAllocator>
                  *)&pFVar27->CellIndicesMap,
                 (TPairInitializer<Verse::VCell_*_const_&,FPackageIndex_&&> *)(local_650 + 4),
                 (bool *)&local_4c0);
      uVar48 = uVar48 + 1;
      uVar49 = uVar49 - 1;
      lVar59 = lVar59 + 0x20;
    } while ((int)uVar48 < (int)local_938->_padding_);
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    cVar20 = '\0';
    local_930 = '\0';
  }
  else {
    cVar20 = '\x01';
    local_930 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'::`106'::__CpuProfilerEventSpecId1543,
               "UPackage_Save_BuildExportDependsMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x607);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'::`106'::__CpuProfilerEventSpecId1543);
  }
  iVar23 = (int)local_938->_padding_;
  plVar58 = &local_938->_padding_;
  iVar54 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar23,(ForAnyElementType *)plVar58,(int *)&local_938->_padding_,
                      (int *)((longlong)&local_938->_padding_ + 4));
  memset((void *)(*plVar58 + (longlong)iVar54 * 0x10),0,(longlong)iVar23 << 4);
  local_8ec = 0;
  if (0 < (int)local_938->_padding_) {
    local_888 = 0;
LAB_1421c0290:
    lVar59 = local_888;
    uVar21 = local_8ec;
    plVar58 = &local_938->_padding_;
    uVar49 = ~local_8ec;
    uVar48 = 0;
    if ((int)local_8ec < (int)local_938->_padding_) {
      uVar48 = uVar49 >> 0x1f;
    }
    if ((uVar48 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar14 = (code *)swi(3);
      EVar22 = (*pcVar14)();
      return EVar22;
    }
    pFVar27 = local_938;
    pUVar43 = *(UObject **)(lVar59 * 0x68 + 0x40 + *plVar58);
    uVar48 = 0;
    if ((int)uVar21 < (int)local_938->_padding_) {
      uVar48 = uVar49 >> 0x1f;
    }
    local_718 = pUVar43;
    if ((uVar48 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar14 = (code *)swi(3);
      EVar22 = (*pcVar14)();
      return EVar22;
    }
    pFVar16 = local_8d8;
    pFVar61 = (ForAnyElementType *)(lVar59 * 0x10 + pFVar27->_padding_);
    EVar6 = local_8d8->CurrentHarvestingRealm;
    uVar21 = 0;
    if ((int)EVar6 < (local_8d8->HarvestedRealms).ArrayNum) {
      uVar21 = ~EVar6 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar14 = (code *)swi(3);
      EVar22 = (*pcVar14)();
      return EVar22;
    }
    pFVar11 = (pFVar16->HarvestedRealms).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar43 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar43);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar43);
      }
    }
    local_728 = pUVar43;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar43);
    }
    pTVar39 = TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)(pFVar11 + (longlong)(int)EVar6 * 0x5f0 + 0x460),
                     (TObjectPtr<UObject_const_>)&local_728);
    if (pTVar39 ==
        (TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
         *)0x0) {
      local_890 = (TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *)0x0;
    }
    else {
      pTVar36 = (TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *)
                &pTVar39->field_0x8;
      local_890 = pTVar36;
      if (pTVar36 !=
          (TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *)0x0)
      goto LAB_1421c0490;
    }
    pTVar36 = local_890;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar43,&local_418,(UObject *)0x0,None);
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("SrcDepends",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                        ,0x60f,L"Couldn\'t find dependency map for %s");
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      EVar22 = (*pcVar14)();
      return EVar22;
    }
LAB_1421c0490:
    uVar21 = *(int *)&(pTVar36->Elements).field_0x8 - *(int *)&(pTVar36->Elements).field_0x34;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if (*(int *)((longlong)&pFVar61[1].Data + 4) < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar21,pFVar61,*(int *)&pFVar61[1].Data,(int *)((longlong)&pFVar61[1].Data + 4)
                );
    }
    iVar23 = *(int *)&(pTVar36->Elements).field_0x28;
    pTStack_918 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar36->Elements).field_0x10;
    iVar54 = 0;
    iVar56 = 0;
    uVar21 = 1;
    TStack_568.CurrentBitIndex = 0;
    if (iVar23 != 0) {
      puVar12 = *(uint **)&(pTVar36->Elements).field_0x20;
      puVar57 = (uint *)pTStack_918;
      if (puVar12 != (uint *)0x0) {
        puVar57 = puVar12;
      }
      uVar48 = *puVar57;
      while (uVar48 == 0) {
        iVar54 = iVar54 + 1;
        iVar56 = iVar56 + 0x20;
        TStack_568.CurrentBitIndex = iVar23;
        if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar54) goto LAB_1421c0552;
        uVar48 = puVar57[iVar54];
      }
      uVar21 = ~(uVar48 - 1) & uVar48;
      uVar45 = (ulonglong)uVar21 * 2 + 1;
      lVar59 = 0x3f;
      if (uVar45 != 0) {
        for (; uVar45 >> lVar59 == 0; lVar59 = lVar59 + -1) {
        }
      }
      local_648 = (int)lVar59;
      TStack_568.CurrentBitIndex = iVar56 + -1 + local_648;
      if (iVar23 < TStack_568.CurrentBitIndex) {
        TStack_568.CurrentBitIndex = iVar23;
      }
    }
LAB_1421c0552:
    uVar48 = *(uint *)&(pTVar36->Elements).field_0x28;
    puVar2 = &(pTVar36->Elements).field_0x10;
    local_900 = *(int *)&(pTVar36->Elements).field_0x8 - *(int *)&(pTVar36->Elements).field_0x34;
    uVar49 = uVar48 & 0xffffffe0;
    uStack_920 = CONCAT44(uVar21,iVar54);
    uStack_910 = CONCAT44(TStack_568.CurrentBitIndex,0xffffffff);
    uStack_908 = CONCAT44(local_2bc,iVar56);
    TStack_568._padding_ = uStack_920;
    iVar23 = (int)uVar48 >> 5;
    uStack_548 = CONCAT44(uStack_8fc,local_900);
    TStack_568.UnvisitedBitMask = 0xffffffff;
    TStack_568._24_8_ = uStack_908;
    local_928 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)pTVar36;
    local_570 = pTVar36;
    TStack_568.Array = pTStack_918;
    if ((((int)uVar48 < 0) || (*(int *)&(pTVar36->Elements).field_0x28 < (int)uVar48)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      EVar22 = (*pcVar14)();
      return EVar22;
    }
    pTVar17 = local_890;
    uVar21 = *(uint *)&(pTVar36->Elements).field_0x28;
    if (uVar48 != uVar21) {
      puVar13 = *(undefined1 **)&(pTVar36->Elements).field_0x20;
      puVar55 = puVar2;
      if (puVar13 != (undefined1 *)0x0) {
        puVar55 = puVar13;
      }
      uVar48 = -1 << ((byte)uVar48 & 0x1f) & *(uint *)(puVar55 + (longlong)iVar23 * 4);
      while (uVar48 == 0) {
        iVar23 = iVar23 + 1;
        uVar49 = uVar49 + 0x20;
        uVar48 = uVar21;
        if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar23)
        goto LAB_1421c0680;
        uVar48 = *(uint *)(puVar55 + (longlong)iVar23 * 4);
      }
      uVar45 = (ulonglong)(~(uVar48 - 1) & uVar48) * 2 + 1;
      lVar59 = 0x3f;
      if (uVar45 != 0) {
        for (; uVar45 >> lVar59 == 0; lVar59 = lVar59 + -1) {
        }
      }
      local_644 = (int)lVar59;
      uVar48 = (uVar49 - 1) + local_644;
      if ((int)uVar21 < (int)uVar48) {
        uVar48 = uVar21;
      }
    }
LAB_1421c0680:
    do {
      pTVar36 = local_570;
      if (*(int *)&(local_570->Elements).field_0x8 - *(int *)&(local_570->Elements).field_0x34 !=
          (int)uStack_548) {
        local_92e = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_92e);
      }
      if (((TStack_568.CurrentBitIndex == uVar48) &&
          (TStack_568.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar36 == pTVar17)) goto LAB_1421c08c3;
      pUVar43 = *(UObject **)
                 (*(longlong *)&pTVar36->Elements + (longlong)TStack_568.CurrentBitIndex * 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar43);
      }
      pFVar27 = local_938;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar43 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar43);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar43);
        }
      }
      local_720 = pUVar43;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar43);
      }
      pTVar40 = TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
                        *)&pFVar27->ObjectIndicesMap,(TObjectPtr<UObject_const_>)&local_720);
      if (pTVar40 == (TTuple<TObjectPtr<UObject>,FPackageIndex> *)0x0) {
        local_8f4 = 0;
LAB_1421c0767:
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_718,&local_490,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pUVar43,&local_4a0,(UObject *)0x0,None);
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!DependencyIndex.IsNull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                            ,0x617,L"Failed to find dependency index for %s (%s)");
        if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
        }
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
        if (bVar18) {
          pcVar14 = (code *)swi(3);
          EVar22 = (*pcVar14)();
          return EVar22;
        }
      }
      else {
        local_8f4 = *(int *)&pTVar40->field_0x8;
        if (local_8f4 == 0) goto LAB_1421c0767;
      }
      if (((pFVar61->Data <= (FScriptContainerElement *)&local_8f4) &&
          ((FScriptContainerElement *)&local_8f4 <
           pFVar61->Data + (longlong)*(int *)((longlong)&pFVar61[1].Data + 4) * 4)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      iVar23 = *(int *)&pFVar61[1].Data;
      if (iVar23 == *(int *)((longlong)&pFVar61[1].Data + 4)) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar61,(int *)((longlong)&pFVar61[1].Data + 4));
      }
      *(int *)&pFVar61[1].Data = iVar23 + 1;
      *(int *)(pFVar61->Data + (longlong)iVar23 * 4) = local_8f4;
      TStack_568.UnvisitedBitMask = TStack_568.UnvisitedBitMask & ~TStack_568._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_568);
    } while( true );
  }
LAB_1421c08f7:
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'[::D]::__CpuProfilerEventSpecId1569,
               "UPackage_Save_BuildSoftPackagesAndSearchableNames",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x621);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'[::D]::__CpuProfilerEventSpecId1569);
  }
  EVar6 = param_1->CurrentHarvestingRealm;
  uVar21 = 0;
  if ((int)EVar6 < (param_1->HarvestedRealms).ArrayNum) {
    uVar21 = ~EVar6 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    EVar22 = (*pcVar14)();
    return EVar22;
  }
  pTVar41 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                      ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                       ((param_1->HarvestedRealms).AllocatorInstance.Data +
                       (longlong)(int)EVar6 * 0x5f0 + 0x370),&local_480);
  pFVar27 = local_938;
  plVar58 = &local_938->_padding_;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)plVar58 != pTVar41) {
    if ((void *)*plVar58 != (void *)0x0) {
      FMemory::Free((void *)*plVar58);
    }
    *plVar58 = (longlong)(pTVar41->AllocatorInstance).Data;
    (pTVar41->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar27->_padding_ = pTVar41->ArrayNum;
    *(int *)((longlong)&pFVar27->_padding_ + 4) = pTVar41->ArrayMax;
    pTVar41->ArrayNum = 0;
    pTVar41->ArrayMax = 0;
  }
  if (local_480.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.AllocatorInstance.Data);
  }
  if (-1 < (int)param_1->Package->PackageFlagsPrivate) {
    pTVar36 = (TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *)
              FSaveContext::GetSearchableNamesObjectMap(param_1);
    local_788._padding_._4_4_ = 1;
    local_788.UnvisitedBitMask = 0xffffffff;
    pTVar60 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar36->Elements).field_0x10;
    local_788._padding_._0_4_ = 0;
    local_788.CurrentBitIndex = 0;
    local_788.BaseBitIndex = 0;
    local_788.Array = pTVar60;
    if (*(int *)&(pTVar36->Elements).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_788);
    }
    uVar21 = *(uint *)&(pTVar36->Elements).field_0x28;
    uStack_920 = CONCAT44(local_788._padding_._4_4_,(undefined4)local_788._padding_);
    bVar44 = (byte)uVar21 & 0x1f;
    local_900 = *(int *)&(pTVar36->Elements).field_0x8 - *(int *)&(pTVar36->Elements).field_0x34;
    uStack_910 = CONCAT44(local_788.CurrentBitIndex,local_788.UnvisitedBitMask);
    uStack_908 = CONCAT44(local_788._28_4_,local_788.BaseBitIndex);
    local_838._padding_._0_4_ = (int)uVar21 >> 5;
    local_838._padding_._4_4_ = 1 << bVar44;
    pTStack_918 = local_788.Array;
    local_838.BaseBitIndex = uVar21 & 0xffffffe0;
    local_838.UnvisitedBitMask = -1 << bVar44;
    uStack_518 = CONCAT44(uStack_8fc,local_900);
    TStack_538.Array = local_788.Array;
    local_928 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)pTVar36;
    local_838.Array = pTVar60;
    local_838.CurrentBitIndex = uVar21;
    local_540 = pTVar36;
    TStack_538._padding_ = uStack_920;
    TStack_538._16_8_ = uStack_910;
    TStack_538._24_8_ = uStack_908;
    if (((int)uVar21 < 0) ||
       (uVar48 = *(uint *)&(pTVar36->Elements).field_0x28, (int)uVar48 < (int)uVar21)) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar19) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      uVar48 = *(uint *)&(pTVar36->Elements).field_0x28;
    }
    if (uVar21 != uVar48) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_838);
      pTVar60 = local_838.Array;
      uVar21 = local_838.CurrentBitIndex;
    }
    while( true ) {
      pTVar17 = local_540;
      if (*(int *)&(local_540->Elements).field_0x8 - *(int *)&(local_540->Elements).field_0x34 !=
          (int)uStack_518) {
        local_92d = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_92d);
      }
      if (((TStack_538.CurrentBitIndex == uVar21) && (TStack_538.Array == pTVar60)) &&
         (param_1 = local_8d8, pTVar17 == pTVar36)) break;
      puVar52 = (undefined8 *)
                ((longlong)TStack_538.CurrentBitIndex * 0x20 + *(longlong *)&pTVar17->Elements);
      local_710 = (UObject *)*puVar52;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_710 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_710);
      }
      FLinkerSave::MapObject(local_938,(TObjectPtr<UObject_const_>)local_8e0,SUB81(&local_710,0));
      if (local_8e0[0] == 0) {
        local_4b0 = &local_938;
        local_4a8 = puVar52;
        bVar19 = ``anonymous_namespace'::BuildLinker'[::L]::<lambda_1>::operator()(&local_4b0);
        if (bVar19) goto LAB_1421c0bf6;
      }
      else {
LAB_1421c0bf6:
        pFVar27 = local_938;
        puVar53 = puVar52 + 1;
        if ((int)local_938->_padding_ != *(int *)((longlong)&local_938->_padding_ + 4)) {
          plVar58 = &local_938->_padding_;
          if ((longlong *)local_938->_padding_ != (longlong *)0x0) {
            plVar58 = (longlong *)local_938->_padding_;
          }
          iVar23 = *(int *)((longlong)plVar58 +
                           (ulonglong)((int)local_938->_padding_ - 1U & local_8e0[0]) * 4);
          if (iVar23 != -1) {
            lVar59 = local_938->_padding_;
            do {
              if (*(uint *)((longlong)iVar23 * 0x20 + lVar59) == local_8e0[0]) {
                if ((iVar23 != -1) && (lVar59 = (longlong)iVar23 * 0x20 + lVar59, lVar59 != 0))
                goto LAB_1421c0c8f;
                break;
              }
              iVar23 = *(int *)((longlong)iVar23 * 0x20 + 0x18 + lVar59);
            } while (iVar23 != -1);
          }
        }
        local_708 = local_8e0;
        TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FPackageIndex_const_&>_>
                  ((TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&local_938->_padding_,(uint)local_8a8,
                   (TKeyInitializer<FPackageIndex_const_&> *)(ulonglong)local_8e0[0],
                   (bool *)&local_708);
        lVar59 = (longlong)local_8a8[0] * 0x20 + pFVar27->_padding_;
LAB_1421c0c8f:
        puVar3 = (undefined8 *)(lVar59 + 8);
        if (puVar3 != puVar53) {
          if ((void *)*puVar3 != (void *)0x0) {
            FMemory::Free((void *)*puVar3);
          }
          *puVar3 = *puVar53;
          *puVar53 = 0;
          *(undefined4 *)(lVar59 + 0x10) = *(undefined4 *)(puVar52 + 2);
          *(undefined4 *)(lVar59 + 0x14) = *(undefined4 *)((longlong)puVar52 + 0x14);
          puVar52[2] = 0;
        }
      }
      TStack_538.UnvisitedBitMask = TStack_538.UnvisitedBitMask & ~TStack_538._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_538);
    }
  }
  this_00 = (TSet<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)FSaveContext::GetSearchableNamesObjectMap(param_1);
  bVar19 = 1 < this_00->HashSize;
  if (!bVar19) {
    TSet<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this_00->Elements).field_0x8);
  *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
  if (*(int *)&(this_00->Elements).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)&(this_00->Elements).field_0xc);
  }
  *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
  iVar23 = *(int *)&(this_00->Elements).field_0x2c;
  *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
  if ((iVar23 < 0) || (0x80 < iVar23)) {
    *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10,0);
  }
  if (bVar19) {
    this_00->HashSize = 1;
    TSet<TTuple<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    local_930 = '\0';
  }
  else {
    local_930 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`BuildLinker'[::O]::__CpuProfilerEventSpecId1590,"UPackage_Save_MapExportIndices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x636);
    FCpuProfilerTrace::OutputBeginEvent(`BuildLinker'[::O]::__CpuProfilerEventSpecId1590);
  }
  pFVar27 = local_938;
  local_8ec = (uint)local_938->_padding_;
  uVar45 = (ulonglong)(int)local_8ec;
  lVar59 = local_938->_padding_;
  lVar51 = uVar45 * 0x68 + lVar59;
  while( true ) {
    if ((int)pFVar27->_padding_ != (int)uVar45) {
      local_92c[0] = 0;
      `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_92c);
    }
    cVar20 = local_930;
    pFVar15 = local_938;
    if (lVar59 == lVar51) break;
    pUVar34 = *(UClass **)(*(longlong *)(lVar59 + 0x40) + 0x10);
    pUVar42 = Z_Construct_UClass_UClass_NoRegister();
    if (pUVar34 == pUVar42) {
      *(undefined4 *)(lVar59 + 0xc) = 0;
    }
    else {
      local_700 = pUVar34;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar34 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar34);
      }
      FVar25 = FLinkerSave::MapObject(local_938,(TObjectPtr<UObject_const_>)local_640,false);
      iVar23 = *(int *)CONCAT44(extraout_var,FVar25.Index);
      *(int *)(lVar59 + 0xc) = iVar23;
      if (iVar23 == 0) {
        local_6f8 = *(FName *)(local_938->_padding_ + 0x18);
        ::FName::ToString(&local_6f8,&local_698);
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)(lVar59 + 0x40),&local_470,(UObject *)0x0,None);
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Export.ClassIndex.IsNull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                            ,0x640,L"Export %s class is not mapped when saving %s");
        if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data.AllocatorInstance.Data);
        }
        if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_698.Data.AllocatorInstance.Data);
        }
        if (bVar18) {
          pcVar14 = (code *)swi(3);
          EVar22 = (*pcVar14)();
          return EVar22;
        }
      }
    }
    if ((param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
      pUVar43 = UObject::GetArchetype(*(UObject **)(lVar59 + 0x40));
      if ((pUVar43 == (UObject *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Archetype",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                              ,0x64a,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      if ((*(uint *)(*(longlong *)(lVar59 + 0x40) + 8) >> 4 & 1) != 0) {
        pUVar34 = (UClass *)pUVar34->_padding_;
      }
      iVar23 = (int)pUVar34->_padding_;
      if (((*(int *)(*(longlong *)&pUVar43->field_0x10 + 0x38) < iVar23) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar43->field_0x10 + 0x30) + (longlong)iVar23 * 8) !=
           &pUVar34->_padding_)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Archetype->IsA(Export.Object->HasAnyFlags(RF_ClassDefaultObject) ? ObjClass->GetSuperClass() : ObjClass)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                              ,0x64b,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
      local_6f0 = pUVar43;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar43);
      }
      FVar25 = FLinkerSave::MapObject
                         (local_938,(TObjectPtr<UObject_const_>)local_63c,SUB81(&local_6f0,0));
      iVar23 = *(int *)CONCAT44(extraout_var_00,FVar25.Index);
      *(int *)(lVar59 + 0x18) = iVar23;
      if (iVar23 == 0) {
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)(lVar59 + 0x40),&local_450,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pUVar43,&local_460,(UObject *)0x0,None);
        UE::Logging::Private::BasicFatalLog
                  (&`BuildLinker'::`178'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
        if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_460.Data.AllocatorInstance.Data);
        }
        if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_450.Data.AllocatorInstance.Data);
        }
      }
      if ((*(int *)(lVar59 + 0x18) == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Export.TemplateIndex.IsNull()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                              ,0x64e,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        EVar22 = (*pcVar14)();
        return EVar22;
      }
    }
    this = *(UObjectBaseUtility **)(lVar59 + 0x40);
    if (this == (UObjectBaseUtility *)0x0) {
LAB_1421c131c:
      *(undefined4 *)(lVar59 + 0x14) = 0;
    }
    else {
      pUVar34 = Z_Construct_UClass_UStruct_NoRegister();
      iVar23 = (int)pUVar34->_padding_;
      if (((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar23) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar23 * 8) !=
           &pUVar34->_padding_)) ||
         (pUVar43 = *(UObject **)&this[1].field_0x18, pUVar43 == (UObject *)0x0))
      goto LAB_1421c131c;
      local_6e8 = pUVar43;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar43);
      }
      FVar25 = FLinkerSave::MapObject
                         (local_938,(TObjectPtr<UObject_const_>)local_638,SUB81(&local_6e8,0));
      iVar23 = *(int *)CONCAT44(extraout_var_01,FVar25.Index);
      *(int *)(lVar59 + 0x14) = iVar23;
      if (iVar23 == 0) {
        local_6e0 = *(FName *)(*(longlong *)(*(longlong *)&this[1].field_0x18 + 0x10) + 0x18);
        ::FName::ToString(&local_6e0,&local_668);
        if (*(UObjectBaseUtility **)&this[1].field_0x18 == (UObjectBaseUtility *)0x0) {
          ::FString::FString(&local_818,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)&this[1].field_0x18,&local_818,(UObject *)0x0);
        }
        local_6d8 = *(FName *)(*(longlong *)&this->field_0x10 + 0x18);
        ::FName::ToString(&local_6d8,&local_678);
        UObjectBaseUtility::GetPathName(this,&local_688,(UObject *)0x0);
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Export.SuperIndex.IsNull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                            ,0x65c,
                            L"Export Struct (%s) of type (%s) inheriting from (%s) of type (%s) has not mapped super struct."
                           );
        if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_688.Data.AllocatorInstance.Data);
        }
        if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_678.Data.AllocatorInstance.Data);
        }
        if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_818.Data.AllocatorInstance.Data);
        }
        if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_668.Data.AllocatorInstance.Data);
        }
        param_1 = local_8d8;
        if (bVar18) {
          pcVar14 = (code *)swi(3);
          EVar22 = (*pcVar14)();
          return EVar22;
        }
      }
    }
    pUVar7 = *(UPackage **)(*(longlong *)(lVar59 + 0x40) + 0x20);
    if (pUVar7 == param_1->Package) {
      local_764 = 0;
      *(undefined4 *)(lVar59 + 8) = 0;
LAB_1421c1330:
      lVar37 = *(longlong *)(lVar59 + 0x40);
      pUVar34 = Z_Construct_UClass_UPackage_NoRegister();
      lVar37 = *(longlong *)(lVar37 + 0x10);
      iVar23 = (int)pUVar34->_padding_;
      if (((*(int *)(lVar37 + 0x38) < iVar23) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar37 + 0x30) + (longlong)iVar23 * 8) !=
           &pUVar34->_padding_)) &&
         (*(UPackage **)(*(longlong *)(lVar59 + 0x40) + 0x20) != param_1->Package)) {
        local_6c8 = lVar59;
        ``anonymous_namespace'::BuildLinker'::__l146::<lambda_2>::operator()(&local_6c8);
      }
    }
    else {
      local_6d0 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPackage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FVar25 = FLinkerSave::MapObject
                         (local_938,(TObjectPtr<UObject_const_>)local_768,SUB81(&local_6d0,0));
      iVar23 = *(int *)CONCAT44(extraout_var_02,FVar25.Index);
      *(int *)(lVar59 + 8) = iVar23;
      if (iVar23 == 0) goto LAB_1421c1330;
    }
    uVar45 = (ulonglong)local_8ec;
    lVar59 = lVar59 + 0x68;
  }
  lVar59 = local_938->_padding_;
  iVar23 = (int)local_938->_padding_;
  plVar58 = (longlong *)(lVar59 + 0x28);
  do {
    while( true ) {
      if ((int)pFVar15->_padding_ != iVar23) {
        local_92f = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_92f);
      }
      if ((FName *)(plVar58 + -5) == (FName *)((longlong)iVar23 * 0x38 + lVar59)) {
        if (cVar20 != '\0') {
          FCpuProfilerTrace::OutputEndEvent();
        }
        cVar20 = (**(code **)(GWarn->_padding_ + 0x60))();
        return -(uint)(cVar20 != '\0') & Canceled;
      }
      if (*plVar58 == 0) break;
      pUVar43 = *(UObject **)(*plVar58 + 0x20);
      if (pUVar43 == (UObject *)0x0) goto LAB_1421c151d;
      local_6c0 = pUVar43;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar43);
      }
      FVar25 = FLinkerSave::MapObject
                         (local_938,(TObjectPtr<UObject_const_>)local_760,SUB81(&local_6c0,0));
      *(undefined4 *)(plVar58 + -4) = *(undefined4 *)CONCAT44(extraout_var_03,FVar25.Index);
      UObjectBase::GetExternalPackage((UObjectBase *)*plVar58);
      if (((local_8d8->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) ||
         ((int)plVar58[-4] != 0)) goto LAB_1421c151d;
      uVar45 = *(ulonglong *)((longlong)plVar58 + -0x14);
      FVar26 = FNameEntryId::FromValidEName((EName)local_75c);
      uStack_87c = 0;
      local_880 = *(uint *)CONCAT44(extraout_var_04,FVar26.Value);
      if (uVar45 == local_880) goto LAB_1421c151d;
      local_6b8 = plVar58 + -5;
      ``anonymous_namespace'::BuildLinker'::__l236::<lambda_3>::operator()(&local_6b8);
      plVar58 = plVar58 + 7;
    }
    ::FName::ToString((FName *)((longlong)plVar58 + -0x14),&local_430);
    ::FName::ToString((FName *)(plVar58 + -5),&local_440);
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                        ,0x683,L"NULL XObject for import - Object: %s Class: %s");
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_430.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      EVar22 = (*pcVar14)();
      return EVar22;
    }
LAB_1421c151d:
    plVar58 = plVar58 + 7;
  } while( true );
LAB_1421c08c3:
  local_8ec = local_8ec + 1;
  local_888 = local_888 + 1;
  param_1 = local_8d8;
  cVar20 = local_930;
  if ((int)local_938->_padding_ <= (int)local_8ec) goto LAB_1421c08f7;
  goto LAB_1421c0290;
}

// ConvertStackFramesToCallstack @ 1421c2f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ConvertStackFramesToCallstack
          (ulong64 *param_1,int param_2,int param_3,FOutputDevice *param_4,
          TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
          *param_5,Type param_6)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  FString *pFVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong *puVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined1 auStackY_5b8 [32];
  TStringView<wchar_t> local_578;
  TStringView<wchar_t> local_568;
  int local_558;
  int local_554;
  FOutputDevice *local_550;
  undefined8 local_548;
  int iStack_540;
  undefined4 uStack_53c;
  undefined8 local_538;
  int iStack_530;
  undefined4 uStack_52c;
  wchar_t *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  FScriptContainerElement *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  wchar_t *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  FScriptContainerElement *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  wchar_t *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  FScriptContainerElement *local_4d8;
  int iStack_4d0;
  undefined4 uStack_4cc;
  wchar_t *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  FScriptContainerElement *local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  wchar_t *local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  FScriptContainerElement *local_498;
  int iStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  int iStack_480;
  undefined4 uStack_47c;
  longlong local_478;
  int iStack_470;
  FString local_468;
  char local_458 [1024];
  ulonglong local_58;
  
  if (0 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
    iVar11 = 0;
    local_558 = param_3;
    local_554 = param_2;
    local_550 = param_4;
    do {
      uVar2 = *param_1;
      if (*(int *)&param_5->field_0x8 != *(int *)&param_5->field_0x34) {
        puVar7 = &param_5->field_0x38;
        if (*(undefined1 **)&param_5->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&param_5->field_0x40;
        }
        iVar8 = *(int *)(puVar7 + ((ulonglong)(*(int *)&param_5->field_0x48 - 1) &
                                  (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
        if (iVar8 != -1) {
          do {
            puVar5 = (ulonglong *)((longlong)iVar8 * 0x20 + *(longlong *)param_5);
            if (*puVar5 == uVar2) {
              puVar9 = puVar5 + 1;
              if (puVar5 == (ulonglong *)0x0) {
                puVar9 = (ulonglong *)0x0;
              }
              if (puVar9 != (ulonglong *)0x0) {
                iVar8 = (int)puVar9[1] + -1;
                if ((int)puVar9[1] == 0) {
                  iVar8 = 0;
                  pwVar10 = L"";
                }
                else {
                  pwVar10 = (wchar_t *)*puVar9;
                }
                local_548._0_4_ = SUB84(pwVar10,0);
                local_488 = (undefined4)local_548;
                local_548._4_4_ = (undefined4)((ulonglong)pwVar10 >> 0x20);
                uStack_484 = local_548._4_4_;
                uStack_47c = uStack_53c;
                local_548 = (FScriptContainerElement *)pwVar10;
                iStack_540 = iVar8;
                iStack_480 = iVar8;
                goto LAB_1421c306f;
              }
              break;
            }
            iVar8 = (int)puVar5[3];
          } while (iVar8 != -1);
        }
      }
      local_458[0] = '\0';
      FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                (iVar11,uVar2,local_458,0x400,(FGenericCrashContext *)0x0);
      pFVar6 = FString::FString(&local_468,local_458);
      pFVar6 = TMapBase<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
               ::FindOrAddImpl<unsigned___int64_const_&,FString>
                         ((TMapBase<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
                           *)param_5,(int)(*param_1 >> 0x20) * 0x17 + (int)*param_1,param_1,pFVar6);
      iVar8 = (pFVar6->Data).ArrayNum;
      pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      puVar5 = (ulonglong *)(ulonglong)(iVar8 - 1);
      if (iVar8 == 0) {
        puVar5 = (ulonglong *)0x0;
      }
      iVar8 = (int)puVar5;
      local_538._0_4_ = SUB84(pwVar10,0);
      local_538._4_4_ = (undefined4)((ulonglong)pwVar10 >> 0x20);
      local_488 = (undefined4)local_538;
      uStack_484 = local_538._4_4_;
      uStack_47c = uStack_52c;
      local_538 = (FScriptContainerElement *)pwVar10;
      iStack_530 = iVar8;
      iStack_480 = iVar8;
      if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data.AllocatorInstance.Data);
      }
LAB_1421c306f:
      local_528 = L"TFastReferenceCollector";
      uStack_520 = 0x17;
      local_578._12_4_ = uStack_51c;
      local_578.Size = 0x17;
      iVar4 = 0;
      if (0 < iVar8) {
        iVar4 = iVar8;
      }
      local_578.DataPtr = L"TFastReferenceCollector";
      pFVar1 = (FScriptContainerElement *)
               ((longlong)pwVar10 + ((longlong)iVar8 - (longlong)iVar4) * 2);
      local_568._12_4_ = uStack_50c;
      local_568.Size = iVar4;
      local_568.DataPtr = (wchar_t *)pFVar1;
      local_518 = pFVar1;
      iStack_510 = iVar4;
      iVar3 = UE::String::FindFirst(&local_568,&local_578,CaseSensitive);
      if (iVar3 != -1) {
        return;
      }
      uStack_500 = 0x19;
      local_508 = L"FWindowsPlatformStackWalk";
      local_568._12_4_ = uStack_4fc;
      local_568.Size = 0x19;
      local_578._12_4_ = uStack_4ec;
      local_578.Size = iVar4;
      local_568.DataPtr = L"FWindowsPlatformStackWalk";
      local_578.DataPtr = (wchar_t *)pFVar1;
      local_4f8 = pFVar1;
      iStack_4f0 = iVar4;
      iVar3 = UE::String::FindFirst(&local_578,&local_568,CaseSensitive);
      if (iVar3 == -1) {
        uStack_4e0 = 0x19;
        local_4e8 = L"FDirectReferenceProcessor";
        local_568._12_4_ = uStack_4dc;
        local_568.Size = 0x19;
        local_578._12_4_ = uStack_4cc;
        local_568.DataPtr = L"FDirectReferenceProcessor";
        local_578.DataPtr = (wchar_t *)pFVar1;
        local_4d8 = pFVar1;
        iStack_4d0 = iVar4;
        iVar3 = UE::String::FindFirst(&local_578,&local_568,CaseSensitive);
        if (iVar3 == -1) {
          uStack_4c0 = 0x17;
          local_4c8 = L"FReferenceInfoProcessor";
          local_568._12_4_ = uStack_4bc;
          local_568.Size = 0x17;
          local_578._12_4_ = uStack_4ac;
          local_568.DataPtr = L"FReferenceInfoProcessor";
          local_578.DataPtr = (wchar_t *)pFVar1;
          local_4b8 = pFVar1;
          iStack_4b0 = iVar4;
          iVar3 = UE::String::FindFirst(&local_578,&local_568,CaseSensitive);
          if (iVar3 == -1) {
            uStack_4a0 = 1;
            local_4a8 = L"!";
            local_568._12_4_ = uStack_49c;
            local_568.Size = 1;
            local_578._12_4_ = uStack_48c;
            local_568.DataPtr = L"!";
            local_578.DataPtr = (wchar_t *)pFVar1;
            local_498 = pFVar1;
            iStack_490 = iVar4;
            iVar4 = UE::String::FindFirst(&local_578,&local_568,CaseSensitive);
            if (iVar4 != -1) {
              iVar3 = (iVar8 - iVar4) + -1;
              iVar4 = iVar8;
              if (iVar3 < iVar8) {
                iVar4 = iVar3;
              }
              iStack_470 = 0;
              if (0 < iVar4) {
                iStack_470 = iVar4;
              }
              local_478 = CONCAT44(uStack_484,local_488) +
                          ((longlong)iVar8 - (longlong)iStack_470) * 2;
            }
            FOutputDevice::LogfImpl(local_550,param_6,L"%*s   ^ %.*s");
          }
        }
      }
      iVar11 = iVar11 + 1;
      param_1 = param_1 + 1;
    } while (iVar11 < local_554);
  }
  return;
}

// CreateLinker @ 1421c3ae0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl `anonymous_namespace'::CreateLinker(FSaveContext *param_1)

{
  FArchive **ppFVar1;
  ESaveRealm EVar2;
  IPackageWriter *pIVar3;
  FOutputDevice *this;
  FPackageTrailer *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FArchive *pFVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  ESavePackageResult EVar11;
  uint uVar12;
  int iVar13;
  FPackageTrailerBuilder *pFVar14;
  FBinaryArchiveFormatter *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FLargeMemoryWriter *this_01;
  FPackageTrailerBuilder *pFVar18;
  FLinkerLoad *pFVar19;
  TUniquePtr<UE::FPackageTrailerBuilder,TDefaultDelete<UE::FPackageTrailerBuilder>_> TVar20;
  FString *pFVar21;
  FPackageTrailerBuilder *pFVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
  *this_02;
  FPackageTrailerBuilder *pFVar25;
  uint uVar26;
  wchar_t *pwVar27;
  uint uVar28;
  bool local_res10;
  FName local_res20;
  FString local_1c8;
  FArchive *local_1b8;
  FPackageTrailerBuilder *local_1b0;
  FPackageTrailerBuilder *local_1a8;
  TOptional<FString>_u_0 local_1a0;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_190
  ;
  UPackage *local_178;
  undefined1 local_170 [24];
  FPackageTrailerBuilder *local_158;
  FString local_150;
  FText local_140;
  FString local_130;
  FString local_120;
  FScriptContainerElement *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  FFormatArgumentValue local_e8;
  FScriptContainerElement local_c8 [8];
  FScriptContainerElement local_c0 [8];
  TStringView<wchar_t> local_b8;
  FText local_a8;
  FText local_98;
  FString local_88;
  FString local_78;
  FTextFormat local_68;
  FString local_58;
  
  pFVar25 = (FPackageTrailerBuilder *)0x0;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`CreateLinker'::`2'::__CpuProfilerEventSpecId1093,"UPackage_Save_CreateLinkerSave",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x445);
    FCpuProfilerTrace::OutputBeginEvent(`CreateLinker'::`2'::__CpuProfilerEventSpecId1093);
  }
  ::FString::FString(&local_120,param_1->Filename);
  FPaths::GetBaseFilename(&local_130,&local_120,true);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  bVar9 = (param_1->SaveArgs).bForceByteSwapping;
  EVar2 = param_1->CurrentHarvestingRealm;
  pIVar3 = param_1->PackageWriter;
  local_res10 = (bool)((byte)((param_1->SaveArgs).SaveFlags >> 5) & 1);
  local_178 = param_1->Package;
  local_res20 = (FName)local_178->_padding_;
  pFVar14 = ::operator_new(0x6a0);
  if (pFVar14 == (FPackageTrailerBuilder *)0x0) {
    local_1a8 = (FPackageTrailerBuilder *)0x0;
    pFVar14 = pFVar25;
  }
  else {
    (pFVar14->DebugContext).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)UE::Core::Private::PimplPtr::DeleterFunc<FLinkerSave>;
    *(FArchive **)&(pFVar14->DebugContext).Data.ArrayNum = (FArchive *)0x0;
    local_1a8 = pFVar14;
    FLinkerSave::FLinkerSave((FLinkerSave *)&pFVar14->LocalEntries,local_178);
  }
  this_02 = &pFVar14->LocalEntries;
  if (((param_1->SaveArgs).SaveFlags & 1) == 0) {
    *(FOutputDevice **)&pFVar14[5].LocalEntries.field_0x18 = (param_1->SaveArgs).Error;
  }
  *(FSaveContext **)&pFVar14[5].LocalEntries.field_0x10 = param_1;
  *(TMap<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
    **)&pFVar14[6].LocalEntries.field_0x10 = &param_1->TransientPropertyOverrides;
  *(bool *)((longlong)&pFVar14[4].Callbacks.AllocatorInstance.Data + 1) =
       (param_1->ObjectSaveContext).bUpdatingLoadedPath;
  *(bool *)&pFVar14[4].Callbacks.AllocatorInstance.Data =
       (param_1->ObjectSaveContext).bProceduralSave;
  *(byte *)((longlong)&pFVar14[4].Callbacks.AllocatorInstance.Data + 2) =
       (byte)((param_1->SaveArgs).SaveFlags >> 0x11) & 1;
  uVar28 = 0;
  if (pIVar3 == (IPackageWriter *)0x0) {
    pwVar27 = L"";
    if (((param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SaveContext.IsCooking()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0x466,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar11 = (*pcVar5)();
      return EVar11;
    }
    if ((EVar2 == Optional) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsOptionalRealm",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0x467,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar11 = (*pcVar5)();
      return EVar11;
    }
    if ((((param_1->SaveArgs).SaveFlags & 0x10) == 0) &&
       (param_1->PackageWriter == (IPackageWriter *)0x0)) {
      if (param_1->bTextFormat == false) {
        uVar12 = local_130.Data.ArrayNum - 1;
        if (local_130.Data.ArrayNum == 0) {
          uVar12 = uVar28;
        }
        if (0x20 < (int)uVar12) {
          uVar12 = 0x20;
        }
        uVar26 = 0;
        if (0 < (int)uVar12) {
          uVar26 = uVar12;
        }
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar23.Data = local_130.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_150,(wchar_t *)FVar23.Data,uVar26);
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_150.Data.ArrayNum != 0) {
          FVar23.Data = local_150.Data.AllocatorInstance.Data;
        }
        pFVar21 = FPaths::ProjectSavedDir();
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar27 = L"";
        }
        else {
          pwVar27 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        FPaths::CreateTempFilename(&local_1c8,pwVar27,(wchar_t *)FVar23.Data,L".tmp");
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        iVar13 = local_1c8.Data.ArrayNum;
        FVar23.Data = local_1c8.Data.AllocatorInstance.Data;
        local_1a0.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        if (local_1c8.Data.ArrayNum == 0) {
          local_1a0.TypedValue.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1c8.Data.ArrayNum,0,(ForAnyElementType *)&local_1a0.TypedValue,
                     local_1c8.Data.ArrayNum,&local_1a0.TypedValue.Data.ArrayMax);
          memcpy((void *)local_1a0.TypedValue.Data.AllocatorInstance.Data,FVar23.Data,
                 (longlong)iVar13 * 2);
        }
        if ((local_1a0.TypedValue.Data.ArrayMax == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar11 = (*pcVar5)();
          return EVar11;
        }
        FSaveContext::SetTempFilename(param_1,(TOptional<FString> *)&local_1a0.TypedValue);
        local_108 = local_1c8.Data.AllocatorInstance.Data;
        uStack_100 = local_1c8.Data.ArrayNum - 1;
        if (local_1c8.Data.ArrayNum == 0) {
          uStack_100 = uVar28;
        }
        local_b8._12_4_ = uStack_fc;
        local_b8.Size = uStack_100;
        local_b8.DataPtr = (wchar_t *)local_1c8.Data.AllocatorInstance.Data;
        bVar9 = FLinkerSave::TryAssignFileSaver((FLinkerSave *)this_02,&local_b8,bVar9,local_res10);
        if (bVar9) {
          pFVar15 = ::operator_new(0x10);
          local_170._16_8_ = pFVar25;
          if (pFVar15 != (FBinaryArchiveFormatter *)0x0) {
            local_170._16_8_ =
                 FBinaryArchiveFormatter::FBinaryArchiveFormatter
                           (pFVar15,(FArchive *)&pFVar14[2].VirtualizedEntries);
          }
          FSaveContext::SetFormatter(param_1,(FBinaryArchiveFormatter *)(local_170 + 0x10));
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          goto LAB_1421c4254;
        }
        local_190.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_1c8.Data.ArrayNum != 0) {
          FVar23.Data = local_1c8.Data.AllocatorInstance.Data;
        }
        local_190.Pairs.ArrayNum = 0;
        local_190.Pairs.ArrayMax = 0;
        pFVar16 = FText::FromString(&local_a8,(wchar_t *)FVar23.Data);
        local_e8.Type = Text;
        FText::FText((FText *)&local_e8.TextValue,pFVar16);
        if ((local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          EVar11 = (*pcVar5)();
          return EVar11;
        }
        ::FString::FString(&local_f8,L"Name");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_190,&local_f8,&local_e8);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_98,L"SavePackage",L"CouldNotCreateSaveFile",
                             L"Could not create temporary save filename {Name}.");
        pFVar17 = FTextFormat::FTextFormat(&local_68,pFVar16,Default);
        FText::Format(&local_140,pFVar17,&local_190);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (1 < (byte)LogSavePackage._0_1_) {
          FText::ToString(&local_140);
          UE::Logging::Private::BasicLog<2>
                    (&`CreateLinker'::`49'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
        }
        if (((param_1->SaveArgs).SaveFlags & 1) == 0) {
          this = (param_1->SaveArgs).Error;
          FText::ToString(&local_140);
          FOutputDevice::LogfImpl(this,Error,L"%s");
        }
        if (local_140.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_190.Pairs.AllocatorInstance.Data,
                   local_190.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_190.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_190.Pairs.AllocatorInstance.Data);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          EVar11 = Error;
          (*(code *)(local_1a8->DebugContext).Data.AllocatorInstance.Data)();
          goto LAB_1421c4524;
        }
      }
      else if (1 < (byte)LogSavePackage._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`CreateLinker'::`72'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
      }
      EVar11 = Error;
      (*(code *)(local_1a8->DebugContext).Data.AllocatorInstance.Data)();
      goto LAB_1421c4524;
    }
    if ((param_1->bTextFormat != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SaveContext.IsTextFormat()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0x46b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar11 = (*pcVar5)();
      return EVar11;
    }
    this_01 = ::operator_new(0xc0);
    pFVar22 = pFVar25;
    pFVar18 = pFVar25;
    if (this_01 != (FLargeMemoryWriter *)0x0) {
      pFVar21 = ::FName::ToString(&local_res20,&local_88);
      if ((pFVar21->Data).ArrayNum != 0) {
        pwVar27 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
      }
      pFVar18 = (FPackageTrailerBuilder *)
                FLargeMemoryWriter::FLargeMemoryWriter(this_01,0,false,pwVar27);
      pFVar22 = (FPackageTrailerBuilder *)&DAT_00000001;
    }
    if ((pFVar22 != (FPackageTrailerBuilder *)0x0) &&
       (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    FLinkerSave::AssignSaver((FLinkerSave *)this_02,(FArchive *)pFVar18,bVar9,local_res10);
    pFVar15 = ::operator_new(0x10);
    local_158 = pFVar25;
    if (pFVar15 != (FBinaryArchiveFormatter *)0x0) {
      local_158 = (FPackageTrailerBuilder *)
                  FBinaryArchiveFormatter::FBinaryArchiveFormatter
                            (pFVar15,(FArchive *)&pFVar14[2].VirtualizedEntries);
    }
    FSaveContext::SetFormatter(param_1,(FBinaryArchiveFormatter *)&local_158);
  }
  else {
    if ((param_1->bTextFormat != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SaveContext.IsTextFormat()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0x45c,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar11 = (*pcVar5)();
      return EVar11;
    }
    (**(code **)((longlong)*pIVar3 + 0x50))
              (pIVar3,&local_1b8,local_res20,param_1->Asset,EVar2 == Optional);
    pFVar7 = local_1b8;
    local_1b8 = (FArchive *)0x0;
    FLinkerSave::AssignSaver((FLinkerSave *)this_02,pFVar7,bVar9,local_res10);
    pFVar15 = ::operator_new(0x10);
    local_170._8_8_ = pFVar25;
    if (pFVar15 != (FBinaryArchiveFormatter *)0x0) {
      local_170._8_8_ =
           FBinaryArchiveFormatter::FBinaryArchiveFormatter
                     (pFVar15,(FArchive *)&pFVar14[2].VirtualizedEntries);
    }
    FSaveContext::SetFormatter(param_1,(FBinaryArchiveFormatter *)(local_170 + 8));
    if (local_1b8 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_1b8)();
    }
  }
LAB_1421c4254:
  if (((param_1->SaveArgs).SaveFlags & 0x2000) == 0) {
    if (((param_1->ObjectSaveContext).bProceduralSave == false) && (param_1->bTextFormat == false))
    {
      pFVar21 = ::FName::ToString(&local_res20,&local_78);
      pFVar22 = ::operator_new(0x110);
      local_1b0 = pFVar25;
      if (pFVar22 != (FPackageTrailerBuilder *)0x0) {
        local_1b0 = UE::FPackageTrailerBuilder::FPackageTrailerBuilder(pFVar22,pFVar21);
      }
      ppFVar1 = (FArchive **)&pFVar14[5].DebugContext.Data.ArrayNum;
      pFVar14 = local_1b0;
      if ((FPackageTrailerBuilder **)ppFVar1 != &local_1b0) {
        pFVar14 = (FPackageTrailerBuilder *)*ppFVar1;
        *ppFVar1 = (FArchive *)local_1b0;
        local_1b0 = (FPackageTrailerBuilder *)0x0;
        TDefaultDelete<UE::FPackageTrailerBuilder>::operator()
                  ((TDefaultDelete<UE::FPackageTrailerBuilder> *)ppFVar1,pFVar14);
        pFVar14 = pFVar25;
      }
      TDefaultDelete<UE::FPackageTrailerBuilder>::operator()
                ((TDefaultDelete<UE::FPackageTrailerBuilder> *)&local_1b0,pFVar14);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar19 = FLinkerLoad::FindExistingLinkerForPackage(local_178);
    if (((pFVar19 != (FLinkerLoad *)0x0) &&
        (this_00 = (pFVar19->PackageTrailer).Ptr, this_00 != (FPackageTrailer *)0x0)) &&
       (iVar13 = UE::FPackageTrailer::GetNumPayloads(this_00,Any), 0 < iVar13)) {
      ::FName::ToString(&local_res20,&local_58);
      TVar20 = UE::FPackageTrailerBuilder::CreateReferenceToTrailer
                         ((FPackageTrailer *)local_170,(FString *)this_00);
      ppFVar1 = (FArchive **)&pFVar14[5].DebugContext.Data.ArrayNum;
      if ((FPackageTrailerBuilder *)ppFVar1 != TVar20.Ptr) {
        pFVar14 = (FPackageTrailerBuilder *)*ppFVar1;
        *ppFVar1 = (FArchive *)((TVar20.Ptr)->DebugContext).Data.AllocatorInstance.Data;
        ((TVar20.Ptr)->DebugContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TDefaultDelete<UE::FPackageTrailerBuilder>::operator()
                  ((TDefaultDelete<UE::FPackageTrailerBuilder> *)ppFVar1,pFVar14);
      }
      TDefaultDelete<UE::FPackageTrailerBuilder>::operator()
                ((TDefaultDelete<UE::FPackageTrailerBuilder> *)local_170,
                 (FPackageTrailerBuilder *)local_170._0_8_);
    }
  }
  EVar2 = param_1->CurrentHarvestingRealm;
  uVar12 = uVar28;
  if ((int)EVar2 < (param_1->HarvestedRealms).ArrayNum) {
    uVar12 = ~EVar2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    EVar11 = (*pcVar5)();
    return EVar11;
  }
  pFVar24 = (param_1->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar2 * 0x5f0;
  if (local_c8 == pFVar24) {
    pFVar14 = local_1a8;
    if (this_02 !=
        (TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
         *)0x0) goto LAB_1421c43ff;
  }
  else {
    lVar4 = *(longlong *)pFVar24;
    *(TMap<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::FPackageTrailerBuilder::LocalEntry,0>_>
      **)pFVar24 = this_02;
    if (lVar4 != 0) {
      pFVar14 = (FPackageTrailerBuilder *)(lVar4 + -0x10);
LAB_1421c43ff:
      (*(code *)(pFVar14->DebugContext).Data.AllocatorInstance.Data)();
    }
  }
  EVar2 = param_1->CurrentHarvestingRealm;
  uVar12 = uVar28;
  if ((int)EVar2 < (param_1->HarvestedRealms).ArrayNum) {
    uVar12 = ~EVar2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    EVar11 = (*pcVar5)();
    return EVar11;
  }
  pFVar24 = *(FScriptContainerElement **)
             ((param_1->HarvestedRealms).AllocatorInstance.Data +
             (longlong)(int)EVar2 * 0x5f0 + 0x10);
  pFVar14 = ::operator_new(8);
  if (pFVar14 != (FPackageTrailerBuilder *)0x0) {
    (pFVar14->DebugContext).Data.AllocatorInstance.Data = pFVar24;
    pFVar25 = pFVar14;
  }
  EVar2 = param_1->CurrentHarvestingRealm;
  if ((int)EVar2 < (param_1->HarvestedRealms).ArrayNum) {
    uVar28 = ~EVar2 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    EVar11 = (*pcVar5)();
    return EVar11;
  }
  pFVar24 = (param_1->HarvestedRealms).AllocatorInstance.Data + (longlong)(int)EVar2 * 0x5f0 + 0x18;
  if (pFVar24 != local_c0) {
    pFVar14 = *(FPackageTrailerBuilder **)pFVar24;
    *(FPackageTrailerBuilder **)pFVar24 = pFVar25;
    pFVar25 = pFVar14;
  }
  if (pFVar25 != (FPackageTrailerBuilder *)0x0) {
    ::operator_delete(pFVar25,8);
  }
  cVar10 = (**(code **)(GWarn->_padding_ + 0x60))();
  EVar11 = -(uint)(cVar10 != '\0') & Canceled;
LAB_1421c4524:
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar11;
}

// ExecuteTransactionalInternal @ 1421c9160

void __cdecl
ExecuteTransactionalInternal
          (FName param_1,FRemoteWorkPriority param_2,TFunctionRef<void___cdecl(void)> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001421c9167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
  return;
}

// FinalizeFile @ 1421c9180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::FinalizeFile(FStructuredArchiveRecord *param_1,FSaveContext *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TArray<FSavePackageOutputFile,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  ESaveRealm EVar4;
  FSavePackageContext *pFVar5;
  FOutputDevice *pFVar6;
  FArchive *pFVar7;
  code *pcVar8;
  bool bVar9;
  ForAnyElementType _Src;
  bool bVar10;
  ESavePackageResult EVar11;
  int iVar12;
  FLinkerSave *pFVar13;
  FString *pFVar14;
  size_t sVar15;
  TOptional<FString> *pTVar16;
  IPackageWriter *pIVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  IFileManager *pIVar21;
  FScriptContainerElement *pFVar22;
  wchar_t *pwVar23;
  ForAnyElementType *pFVar24;
  ForElementType<FSavePackageOutputFile> FVar25;
  FNameEntryId FVar26;
  IPackageWriter *pIVar27;
  ForElementType<FSavePackageOutputFile> FVar28;
  undefined1 auStackY_298 [32];
  undefined1 local_258 [8];
  TOptional<FString>_u_0 local_250;
  FName local_240;
  FLinkerSave *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  uint local_220;
  undefined8 local_21c;
  undefined8 uStack_214;
  FName local_208;
  undefined4 local_200;
  FString local_1f8;
  FString local_1e8;
  undefined1 local_1d8 [16];
  TOptional<FString>_u_0 local_1c8;
  FString local_1b8;
  TOptional<FString>_u_0 local_1a8;
  FString local_198;
  TOptional<FString>_u_0 local_188;
  FString local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  TStringView<wchar_t> local_138;
  FString local_128;
  FText local_118;
  FText local_108;
  FString local_f8;
  FText local_e8;
  FText local_d8;
  FString local_c8;
  FString local_b8;
  FText local_a8;
  FTextFormat local_98;
  FText local_88;
  FTextFormat local_78;
  longlong local_68;
  FString local_60;
  longlong local_50;
  FName local_48;
  undefined4 local_40;
  ushort local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`FinalizeFile'::`2'::__CpuProfilerEventSpecId3310,"UPackage_Save_FinalizeFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xcee);
    FCpuProfilerTrace::OutputBeginEvent(`FinalizeFile'::`2'::__CpuProfilerEventSpecId3310);
  }
  local_220 = 0;
  pFVar5 = (param_2->SaveArgs).SavePackageContext;
  local_230 = 0;
  uStack_228 = 0;
  pIVar27 = (IPackageWriter *)0x0;
  if (pFVar5 != (FSavePackageContext *)0x0) {
    pIVar27 = pFVar5->PackageWriter;
  }
  EVar4 = param_2->CurrentHarvestingRealm;
  pFVar13 = FSaveContext::GetLinker(param_2);
  FVar26.Value = FIoHash::Zero.Hash._16_4_;
  local_238 = pFVar13;
  if (pIVar27 == (IPackageWriter *)0x0) {
    if (((param_2->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!SaveContext.IsCooking()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                            ,0xd16,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      EVar11 = (*pcVar8)();
      return EVar11;
    }
    if ((EVar4 == Optional) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsOptionalRealm",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                            ,0xd17,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      EVar11 = (*pcVar8)();
      return EVar11;
    }
    if ((((param_2->SaveArgs).SaveFlags & 0x10) == 0) &&
       (param_2->PackageWriter == (IPackageWriter *)0x0)) {
      if (param_2->bTextFormat == false) {
        pTVar16 = FSaveContext::GetTempFilename(param_2);
        if ((*(int *)((longlong)&pTVar16->field0_0x0 + 0xc) == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SaveContext.GetTempFilename().IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                ,0xd32,
                                L"The package should\'ve been saved to a tmp file first! (%s)"),
           bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        pIVar17 = (IPackageWriter *)FSaveContext::GetTempFilename(param_2);
        pIVar27 = (IPackageWriter *)0x0;
        if (*(int *)&pIVar17[1].field_0x4 != -1) {
          pIVar27 = pIVar17;
        }
        bVar10 = FSaveContext::CloseLinkerArchives(param_2);
        FVar26.Value = FIoHash::Zero.Hash._16_4_;
        if (!bVar10) {
          if (1 < (byte)LogSavePackage._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`FinalizeFile'::`56'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
            EVar11 = Error;
            goto LAB_1421c9f08;
          }
LAB_1421c98b8:
          EVar11 = Error;
          goto LAB_1421c9f08;
        }
        local_250.TypedValue.Data.AllocatorInstance.Data = (ForAnyElementType)param_2->Filename;
        pTVar3 = &param_2->AdditionalPackageFiles;
        local_21c = CONCAT44(FIoHash::Zero.Hash._4_4_,FIoHash::Zero.Hash._0_4_);
        uStack_214 = CONCAT44(FIoHash::Zero.Hash._12_4_,FIoHash::Zero.Hash._8_4_);
        piVar1 = &(param_2->AdditionalPackageFiles).ArrayMax;
        iVar12 = (param_2->AdditionalPackageFiles).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSavePackageOutputFile>_>
                             (0x840,&pTVar3->AllocatorInstance,piVar1);
        }
        (param_2->AdditionalPackageFiles).ArrayNum = iVar12 + 1;
        FVar25 = (param_2->AdditionalPackageFiles).AllocatorInstance.SecondaryData;
        if (FVar25 == (ForElementType<FSavePackageOutputFile>)0x0) {
          FVar25 = (ForElementType<FSavePackageOutputFile>)pTVar3;
        }
        pFVar24 = (ForAnyElementType *)((longlong)iVar12 * 0x40 + (longlong)FVar25);
        ::FString::FString((FString *)local_1d8,
                           (wchar_t *)local_250.TypedValue.Data.AllocatorInstance.Data);
        pFVar24->Data = (FScriptContainerElement *)0x0;
        local_240.ComparisonIndex.Value = local_1d8._0_4_;
        local_240.Number = local_1d8._4_4_;
        piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
        iVar12 = (int)local_1d8._8_8_;
        *(int *)&pFVar24[1].Data = iVar12;
        local_250.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(ForAnyElementType)local_1d8._8_8_;
        if (iVar12 == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar12,0,pFVar24,iVar12,piVar1);
          memcpy(pFVar24->Data,(void *)local_240,(longlong)(int)local_250._0_4_ * 2);
        }
        ::FString::FString((FString *)(pFVar24 + 2),(FString *)pIVar27);
        pFVar24[4].Data = (FScriptContainerElement *)0x0;
        pFVar24[5].Data = (FScriptContainerElement *)0x0;
        pFVar24[6].Data = (FScriptContainerElement *)0x0;
        pFVar24[7].Data = (FScriptContainerElement *)0x0;
        if ((FName)local_1d8._0_8_ != (FName)0x0) {
          FMemory::Free((void *)local_1d8._0_8_);
        }
        EVar11 = UE::SavePackageUtilities::FinalizeTempOutputFiles
                           (&param_2->TargetPackagePath,pTVar3,&(param_2->SaveArgs).FinalTimeStamp);
        local_1c8.TypedValue.Data.ArrayMax = -1;
        local_1c8.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_1c8.TypedValue.Data.ArrayNum = 0;
        FSaveContext::SetTempFilename(param_2,(TOptional<FString> *)&local_1c8.TypedValue);
        if (EVar11 != Success) {
          if (((param_2->SaveArgs).SaveFlags & 1) == 0) {
            if (1 < (byte)LogSavePackage._0_1_) {
              ::FString::PrintfImpl(&local_1b8,L"Error saving \'%s\'");
              UE::Logging::Private::BasicLog<2>
                        (&`FinalizeFile'::`83'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
            }
            pFVar6 = (param_2->SaveArgs).Error;
            pFVar14 = ::FString::FString(&local_f8,param_2->Filename);
            pFVar18 = FText::FromString(&local_a8,pFVar14);
            pFVar19 = FText::AsLocalizable_Advanced_LocText
                                (&local_108,L"Core",L"SaveWarning",L"Error saving \'{0}\'");
            pFVar20 = FTextFormat::FTextFormat(&local_98,pFVar19,Default);
            pFVar18 = FText::Format<FText>(&local_118,pFVar20,pFVar18);
            FText::ToString(pFVar18);
            FOutputDevice::LogfImpl(pFVar6,Warning,L"%s");
            if (local_118.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
            }
            if (local_108.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
          }
          else if (2 < (byte)LogSavePackage._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`FinalizeFile'::`103'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
          }
          goto LAB_1421c9f08;
        }
      }
      else {
        bVar10 = FSaveContext::CloseLinkerArchives(param_2);
        if (!bVar10) {
          if (1 < (byte)LogSavePackage._0_1_) {
            pTVar16 = FSaveContext::GetTempFilename(param_2);
            if (((*(int *)((longlong)&pTVar16->field0_0x0 + 0xc) != -1) &&
                (pTVar16 = FSaveContext::GetTempFilename(param_2),
                *(int *)((longlong)&pTVar16->field0_0x0 + 0xc) == -1)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
            UE::Logging::Private::BasicLog<2>
                      (&`FinalizeFile'::`126'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
          }
          goto LAB_1421c98b8;
        }
        local_230 = *(undefined8 *)(param_2->PackageSavedHash).Hash;
        uStack_228 = *(undefined8 *)((param_2->PackageSavedHash).Hash + 8);
        FVar26.Value = *(uint *)((param_2->PackageSavedHash).Hash + 0x10);
        local_220 = FVar26.Value;
        local_21c = local_230;
        uStack_214 = uStack_228;
        pTVar16 = FSaveContext::GetTempFilename(param_2);
        if ((*(int *)((longlong)&pTVar16->field0_0x0 + 0xc) == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SaveContext.GetTempFilename().IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                ,0xd6e,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        pTVar16 = FSaveContext::GetTextFormatTempFilename(param_2);
        if ((*(int *)((longlong)&pTVar16->field0_0x0 + 0xc) == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("SaveContext.GetTextFormatTempFilename().IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                ,0xd6f,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        pIVar21 = IFileManager::Get();
        pcVar8 = *(code **)((longlong)*pIVar21 + 0x38);
        pTVar16 = FSaveContext::GetTempFilename(param_2);
        if ((*(int *)((longlong)&pTVar16->field0_0x0 + 0xc) == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        if (*(int *)((longlong)&pTVar16->field0_0x0 + 8) == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = (wchar_t *)(pTVar16->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        }
        (*pcVar8)(pIVar21,pwVar23,0);
        pFVar14 = (FString *)FSaveContext::GetTextFormatTempFilename(param_2);
        local_250.TypedValue.Data.ArrayMax = -1;
        local_250.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_250.TypedValue.Data.ArrayNum = 0;
        if ((pFVar14->Data).ArrayMax != -1) {
          ::FString::FString(&local_250.TypedValue,pFVar14);
        }
        FSaveContext::SetTempFilename(param_2,(TOptional<FString> *)&local_250.TypedValue);
        local_1a8.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_1a8.TypedValue.Data.ArrayNum = 0;
        local_1a8.TypedValue.Data.ArrayMax = -1;
        FSaveContext::SetTextFormatTempFilename(param_2,(TOptional<FString> *)&local_1a8.TypedValue)
        ;
        pTVar3 = &param_2->AdditionalPackageFiles;
        local_238 = (FLinkerSave *)FSaveContext::GetTempFilename(param_2);
        if ((*(int *)((longlong)&local_238->_padding_ + 4) == -1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar11 = (*pcVar8)();
          return EVar11;
        }
        iVar12 = (param_2->AdditionalPackageFiles).ArrayNum;
        piVar1 = &(param_2->AdditionalPackageFiles).ArrayMax;
        pwVar23 = param_2->Filename;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSavePackageOutputFile>_>
                             (0x840,&pTVar3->AllocatorInstance,piVar1);
        }
        (param_2->AdditionalPackageFiles).ArrayNum = iVar12 + 1;
        FVar25 = (param_2->AdditionalPackageFiles).AllocatorInstance.SecondaryData;
        if (FVar25 == (ForElementType<FSavePackageOutputFile>)0x0) {
          FVar25 = (ForElementType<FSavePackageOutputFile>)pTVar3;
        }
        pFVar24 = (ForAnyElementType *)((longlong)iVar12 * 0x40 + (longlong)FVar25);
        ::FString::FString(&local_198,pwVar23);
        pFVar24->Data = (FScriptContainerElement *)0x0;
        local_250.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(ForAnyElementType)local_198.Data.AllocatorInstance.Data;
        piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
        *(int *)&pFVar24[1].Data = local_198.Data.ArrayNum;
        if (local_198.Data.ArrayNum == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_198.Data.ArrayNum,0,pFVar24,local_198.Data.ArrayNum,piVar1);
          memcpy(pFVar24->Data,(void *)local_250.TypedValue.Data.AllocatorInstance.Data,
                 (longlong)local_198.Data.ArrayNum * 2);
        }
        ::FString::FString((FString *)(pFVar24 + 2),(FString *)local_238);
        pFVar24[4].Data = (FScriptContainerElement *)0x0;
        pFVar24[5].Data = (FScriptContainerElement *)0x0;
        pFVar24[6].Data = (FScriptContainerElement *)0x0;
        pFVar24[7].Data = (FScriptContainerElement *)0x0;
        if ((FArchive *)local_198.Data.AllocatorInstance.Data != (FArchive *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        EVar11 = UE::SavePackageUtilities::FinalizeTempOutputFiles
                           (&param_2->TargetPackagePath,pTVar3,&(param_2->SaveArgs).FinalTimeStamp);
        local_188.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_188.TypedValue.Data.ArrayNum = 0;
        local_188.TypedValue.Data.ArrayMax = -1;
        FSaveContext::SetTempFilename(param_2,(TOptional<FString> *)&local_188.TypedValue);
        if (EVar11 != Success) {
          if (((param_2->SaveArgs).SaveFlags & 1) == 0) {
            if (1 < (byte)LogSavePackage._0_1_) {
              ::FString::PrintfImpl(&local_178,L"Error saving \'%s\'");
              UE::Logging::Private::BasicLog<2>
                        (&`FinalizeFile'::`164'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
            }
            pFVar6 = (param_2->SaveArgs).Error;
            pFVar14 = ::FString::FString(&local_c8,param_2->Filename);
            pFVar18 = FText::FromString(&local_88,pFVar14);
            pFVar19 = FText::AsLocalizable_Advanced_LocText
                                (&local_d8,L"Core",L"SaveWarning",L"Error saving \'{0}\'");
            pFVar20 = FTextFormat::FTextFormat(&local_78,pFVar19,Default);
            pFVar18 = FText::Format<FText>(&local_e8,pFVar20,pFVar18);
            FText::ToString(pFVar18);
            FOutputDevice::LogfImpl(pFVar6,Warning,L"%s");
            if (local_e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
            }
            if (local_d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
          else if (2 < (byte)LogSavePackage._0_1_) {
            ::FString::PrintfImpl(&local_168,L"Error saving \'%s\'");
            UE::Logging::Private::BasicLog<3>
                      (&`FinalizeFile'::`184'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_1421c9f08;
        }
      }
    }
    else {
      pFVar7 = pFVar13->Saver;
      local_240.ComparisonIndex.Value._0_1_ = FIoHash::Zero.Hash[0x10];
      local_240.ComparisonIndex.Value._1_1_ = FIoHash::Zero.Hash[0x11];
      local_240.ComparisonIndex.Value._2_1_ = FIoHash::Zero.Hash[0x12];
      local_240.ComparisonIndex.Value._3_1_ = FIoHash::Zero.Hash[0x13];
      local_21c = CONCAT44(FIoHash::Zero.Hash._4_4_,FIoHash::Zero.Hash._0_4_);
      uStack_214 = CONCAT44(FIoHash::Zero.Hash._12_4_,FIoHash::Zero.Hash._8_4_);
      local_250.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(**(code **)(*(longlong *)pFVar7 + 0x30))(pFVar7);
      pTVar3 = &param_2->AdditionalPackageFiles;
      pFVar22 = (FScriptContainerElement *)
                FLargeMemoryData::ReleaseOwnership((FLargeMemoryData *)&pFVar7[1].field_0x8);
      pwVar23 = param_2->Filename;
      piVar1 = &(param_2->AdditionalPackageFiles).ArrayMax;
      iVar12 = (param_2->AdditionalPackageFiles).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSavePackageOutputFile>_>
                           (0x840,&pTVar3->AllocatorInstance,piVar1);
      }
      (param_2->AdditionalPackageFiles).ArrayNum = iVar12 + 1;
      FVar25 = (param_2->AdditionalPackageFiles).AllocatorInstance.SecondaryData;
      if (FVar25 == (ForElementType<FSavePackageOutputFile>)0x0) {
        FVar25 = (ForElementType<FSavePackageOutputFile>)pTVar3;
      }
      pFVar24 = (ForAnyElementType *)((longlong)iVar12 * 0x40 + (longlong)FVar25);
      ::FString::FString(&local_1f8,pwVar23);
      _Src.Data = local_1f8.Data.AllocatorInstance.Data;
      piVar1 = (int *)((longlong)&pFVar24[1].Data + 4);
      pFVar24->Data = (FScriptContainerElement *)0x0;
      *(int *)&pFVar24[1].Data = local_1f8.Data.ArrayNum;
      if (local_1f8.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f8.Data.ArrayNum,0,pFVar24,local_1f8.Data.ArrayNum,piVar1);
        memcpy(pFVar24->Data,_Src.Data,(longlong)local_1f8.Data.ArrayNum * 2);
      }
      pFVar24[4].Data = pFVar22;
      pFVar2 = pFVar24 + 5;
      pFVar24[2].Data = (FScriptContainerElement *)0x0;
      pFVar24[3].Data = (FScriptContainerElement *)0x0;
      pFVar2->Data = (FScriptContainerElement *)0x0;
      iVar12 = (local_238->FileRegions).ArrayNum;
      local_238 = (FLinkerSave *)(local_238->FileRegions).AllocatorInstance.Data;
      piVar1 = (int *)((longlong)&pFVar24[6].Data + 4);
      *(int *)&pFVar24[6].Data = iVar12;
      if (iVar12 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar12,0,pFVar2,iVar12,piVar1);
        memcpy(pFVar2->Data,local_238,(longlong)iVar12 * 0x18);
      }
      pFVar24[7].Data = (FScriptContainerElement *)local_250.TypedValue.Data.AllocatorInstance.Data;
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      FVar25 = (param_2->AdditionalPackageFiles).AllocatorInstance.SecondaryData;
      iVar12 = (param_2->AdditionalPackageFiles).ArrayNum;
      if (FVar25 == (ForElementType<FSavePackageOutputFile>)0x0) {
        FVar25 = (ForElementType<FSavePackageOutputFile>)pTVar3;
      }
      FVar28 = (ForElementType<FSavePackageOutputFile>)((longlong)iVar12 * 0x40 + (longlong)FVar25);
      while( true ) {
        if ((param_2->AdditionalPackageFiles).ArrayNum != iVar12) {
          `TCheckedPointerIterator<FSavePackageOutputFile,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_258);
        }
        if (FVar25 == FVar28) break;
        UE::SavePackageUtilities::AsyncWriteFile(None,(FSavePackageOutputFile *)FVar25);
        FVar25 = (ForElementType<FSavePackageOutputFile>)((longlong)FVar25 + 0x40);
      }
      FSaveContext::CloseLinkerArchives(param_2);
      FVar26.Value = local_240.ComparisonIndex.Value;
    }
  }
  else {
    local_250.TypedValue.Data.AllocatorInstance.Data = (ForAnyElementType)pFVar13->Saver;
    local_40._0_1_ = FIoChunkId::InvalidChunkId.Id[8];
    local_40._1_1_ = FIoChunkId::InvalidChunkId.Id[9];
    local_40._2_1_ = FIoChunkId::InvalidChunkId.Id[10];
    local_40._3_1_ = FIoChunkId::InvalidChunkId.Id[0xb];
    local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Data.ArrayNum = 0;
    local_60.Data.ArrayMax = 0;
    local_50 = 0;
    local_3c = 0;
    local_21c = CONCAT44(FIoHash::Zero.Hash._4_4_,FIoHash::Zero.Hash._0_4_);
    uStack_214 = CONCAT44(FIoHash::Zero.Hash._12_4_,FIoHash::Zero.Hash._8_4_);
    local_48 = (FName)FIoChunkId::InvalidChunkId.Id._0_8_;
    local_68 = param_2->Package->_padding_;
    if (EVar4 == Optional) {
      ::FString::FString(&local_148,param_2->Filename);
      pFVar14 = FPaths::GetExtension(&local_128,&local_148,false);
      ::FString::ConcatCF(&local_1e8,L"o.",pFVar14);
      local_138.DataPtr = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
      local_158.Size = 0;
      local_138.Size = local_1e8.Data.ArrayNum + -1;
      if (local_1e8.Data.ArrayNum == 0) {
        local_138.Size = local_158.Size;
      }
      local_158.DataPtr = param_2->Filename;
      if (local_158.DataPtr != (wchar_t *)0x0) {
        sVar15 = wcslen(local_158.DataPtr);
        local_158.Size = (int)sVar15;
      }
      pFVar14 = FPathViews::ChangeExtension(&local_b8,&local_158,&local_138);
      if (&local_60 != pFVar14) {
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        local_60.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.Data.ArrayNum = (pFVar14->Data).ArrayNum;
        local_60.Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      local_3c = 1;
    }
    else {
      ::FString::operator=(&local_60,param_2->Filename);
    }
    local_50 = (longlong)*(int *)((longlong)&pFVar13->_padding_ + 4);
    FPackageId::FromName(&local_240);
    local_208 = local_240;
    local_200 = CONCAT22(0x100,local_3c >> 8 | local_3c << 8);
    local_40 = local_200;
    local_48 = local_240;
    (**(code **)((longlong)*pIVar27 + 0x20))
              (pIVar27,&local_68,local_250.TypedValue.Data.AllocatorInstance.Data,
               &pFVar13->FileRegions);
    FSaveContext::CloseLinkerArchives(param_2);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (param_2->CurrentHarvestingRealm != Optional) {
    *(undefined8 *)(param_2->PackageSavedHash).Hash = local_21c;
    *(undefined8 *)((param_2->PackageSavedHash).Hash + 8) = uStack_214;
    *(uint *)((param_2->PackageSavedHash).Hash + 0x10) = FVar26.Value;
  }
  EVar11 = Success;
LAB_1421c9f08:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar11;
}

// HarvestPackage @ 1421d1e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001421d2426) */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ESavePackageResult __cdecl `anonymous_namespace'::HarvestPackage(FSaveContext *param_1)

{
  int *piVar1;
  TArray<FIllegalReference,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *pTVar3;
  TMap<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
  *this;
  longlong lVar4;
  ulonglong uVar5;
  EObjectFlags EVar6;
  ESaveRealm EVar7;
  int iVar8;
  uint uVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  FArchiveCookData *pFVar12;
  FAdditionalInfo *pFVar13;
  FWorldTileInfo *this_00;
  void *pvVar14;
  ForElementType<ESaveRealm> FVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ForElementType<FSetElementId> FVar25;
  bool bVar26;
  TNode *pTVar27;
  FSaveContext *pFVar28;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *pTVar29;
  bool bVar30;
  bool bVar31;
  char cVar32;
  ESavePackageResult EVar33;
  int iVar34;
  FObjectStatus *pFVar35;
  FHarvestedRealm *pFVar36;
  FCustomVersionContainer *pFVar37;
  FCustomVersionContainer *pFVar38;
  TMap<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar39;
  uint uVar40;
  ITargetPlatform *pIVar41;
  FScriptContainerElement *pFVar42;
  longlong lVar43;
  undefined1 *puVar44;
  uint *puVar45;
  uint uVar46;
  undefined1 auStackY_528 [32];
  undefined1 local_4d6 [6];
  FHarvestedRealm *local_4d0;
  UObject *local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  FScriptContainerElement local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  FPackageHarvester *local_498;
  FSaveContext *local_490;
  int local_488;
  uint uStack_484;
  undefined1 *puStack_480;
  undefined4 local_478;
  int iStack_474;
  int iStack_470;
  undefined4 uStack_46c;
  undefined1 local_468 [12];
  uint local_45c;
  longlong local_458;
  uint local_450;
  int local_44c;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_440;
  undefined1 local_438 [8];
  int local_430;
  int local_42c;
  TObjectPtr<UPackage> local_428;
  UObject *local_420;
  UObject *local_418;
  UObject *local_410;
  UObject *local_408;
  UPackage *local_400;
  UObject *local_3f8;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *local_3f0
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e8;
  undefined8 uStack_3c8;
  FPackageHarvester **local_3c0;
  EObjectFlags local_3b8;
  code *local_3b0;
  FPackageHarvester ***local_3a8;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *local_3a0
  ;
  longlong lStack_398;
  undefined1 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  int local_378;
  undefined4 uStack_374;
  FCustomVersionContainer local_370;
  undefined1 local_358 [504];
  void *local_160;
  undefined4 local_158;
  ForElementType<ESaveRealm> local_148;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> local_138;
  FExportWithContext local_e8;
  FHarvestScope local_c0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_528;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar26 = false;
  }
  else {
    bVar26 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`HarvestPackage'::`2'::__CpuProfilerEventSpecId362,"UPackage_Save_HarvestPackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x16a);
    FCpuProfilerTrace::OutputBeginEvent(`HarvestPackage'::`2'::__CpuProfilerEventSpecId362);
  }
  FPackageHarvester::FPackageHarvester((FPackageHarvester *)local_358,param_1);
  EVar6 = (param_1->SaveArgs).TopLevelFlags;
  local_498 = (FPackageHarvester *)local_358;
  local_490 = param_1;
  if (EVar6 == RF_NoFlags) {
    pUVar10 = param_1->Asset;
    local_420 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    pFVar35 = FSaveContext::GetCachedObjectStatus(param_1,(TObjectPtr<UObject>)&local_420);
    pFVar28 = local_490;
    local_418 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    bVar30 = FSaveContext::IsTransient(pFVar28,(TObjectPtr<UObject>)&local_418,pFVar35);
    if ((!bVar30) &&
       (FPackageHarvester::TryHarvestExport(local_498,pUVar10,pFVar35), pFVar28 = local_490,
       local_490->bIsSaveAutoOptional != false)) {
      EVar7 = local_490->CurrentHarvestingRealm;
      local_490->CurrentHarvestingRealm = Optional;
      FPackageHarvester::TryHarvestExport(local_498,pUVar10,pFVar35);
      pFVar28->CurrentHarvestingRealm = EVar7;
    }
  }
  else {
    local_3c0 = &local_498;
    local_3a8 = &local_3c0;
    local_3b0 = UE::Core::Private::Function::
                TFunctionRefCaller<``anonymous_namespace'::HarvestPackage'::__l7::<lambda_2>,bool,UObject_*>
                ::Call;
    local_3b8 = EVar6;
    ForEachObjectWithPackage
              (param_1->Package,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_3b0,true,
               RF_Transient,Borrowed);
  }
  while ((FPackageHarvester::PopExportToProcess((FPackageHarvester *)local_358,&local_e8),
         local_e8.Export != (UObject *)0x0 || (local_e8.CellExport != (VCell *)0x0))) {
    FPackageHarvester::ProcessExport((FPackageHarvester *)local_358,&local_e8);
    if (local_e8.HarvestedFromRealms.AllocatorInstance.SecondaryData !=
        (ForElementType<ESaveRealm>)0x0) {
      FMemory::Free((void *)local_e8.HarvestedFromRealms.AllocatorInstance.SecondaryData);
    }
  }
  if (local_e8.HarvestedFromRealms.AllocatorInstance.SecondaryData !=
      (ForElementType<ESaveRealm>)0x0) {
    FMemory::Free((void *)local_e8.HarvestedFromRealms.AllocatorInstance.SecondaryData);
  }
  if (((param_1->bIsSaveAutoOptional == false) && (((param_1->SaveArgs).SaveFlags & 0x8000) != 0))
     && ((param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0)) {
    if (((param_1->HarvestedRealms).ArrayNum < 2) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar16 = (code *)swi(3);
      EVar33 = (*pcVar16)();
      return EVar33;
    }
    pFVar11 = (param_1->HarvestedRealms).AllocatorInstance.Data;
    if (*(int *)(pFVar11 + 0x6d8) != *(int *)(pFVar11 + 0x704)) {
      pFVar36 = FSaveContext::GetHarvestedRealm(param_1,Game);
      if (*(int *)&(pFVar36->Exports).Elements.field_0x8 !=
          *(int *)&(pFVar36->Exports).Elements.field_0x34) {
        bVar30 = false;
        pFVar36 = FSaveContext::GetHarvestedRealm(param_1,Optional);
        local_4d0 = pFVar36;
        TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator>::TIterator::
        TIterator((TIterator *)local_468,&pFVar36->Exports);
        if (local_44c < *(int *)(local_458 + 0x18)) {
          do {
            iVar8 = local_44c;
            uVar17 = local_468._0_8_;
            local_410 = *(UObject **)(*(longlong *)local_468._0_8_ + (longlong)local_44c * 0x18);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_410 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_410);
            }
            bVar31 = FPackageHarvester::ShouldObjectBeHarvestedInOptionalRealm
                               ((TObjectPtr<UObject>)&local_410,param_1);
            if (!bVar31) {
              if (((param_1->HarvestedRealms).ArrayNum < 1) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar16 = (code *)swi(3);
                EVar33 = (*pcVar16)();
                return EVar33;
              }
              pFVar11 = (param_1->HarvestedRealms).AllocatorInstance.Data;
              pUVar10 = *(UObject **)(*(longlong *)uVar17 + (longlong)iVar8 * 0x18);
              lVar43 = (longlong)iVar8 * 0x18;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (pUVar10 != (UObject *)0x0) {
                  UE::GC::MarkAsReachable(pUVar10);
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar10 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar10);
                }
              }
              uVar40 = ((uint)((ulonglong)pUVar10 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pUVar10 >> 4)) * -0x7a143595;
              uVar40 = (uVar40 >> 0xd ^ uVar40) * -0x3d4d51cb;
              if (*(int *)(pFVar11 + 0xe8) != *(int *)(pFVar11 + 0x114)) {
                pFVar42 = pFVar11 + 0x118;
                if (*(FScriptContainerElement **)(pFVar11 + 0x120) != (FScriptContainerElement *)0x0
                   ) {
                  pFVar42 = *(FScriptContainerElement **)(pFVar11 + 0x120);
                }
                iVar34 = *(int *)(pFVar42 +
                                 (ulonglong)
                                 (*(int *)(pFVar11 + 0x128) - 1U & (uVar40 >> 0x10 ^ uVar40)) * 4);
                if (iVar34 != -1) {
                  do {
                    lVar4 = *(longlong *)(pFVar11 + 0xe0) + (longlong)iVar34 * 0x18;
                    if (*(UObject **)(*(longlong *)(pFVar11 + 0xe0) + (longlong)iVar34 * 0x18) ==
                        pUVar10) {
                      if (lVar4 != 0) {
                        local_408 = *(UObject **)(*(longlong *)uVar17 + lVar43);
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (local_408 != (UObject *)0x0)) {
                          UE::GC::MarkAsReachable(local_408);
                        }
                        pFVar36 = local_4d0;
                        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                        ::Emplace<TObjectPtr<UObject>_const_&>
                                  (&local_4d0->Imports,(TObjectPtr<UObject> *)local_438,
                                   (bool *)&local_408);
                        bVar30 = true;
                        TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator>::
                        RemoveByIndex(local_440,iVar8);
                        goto LAB_1421d2441;
                      }
                      break;
                    }
                    iVar34 = *(int *)(lVar4 + 0x10);
                  } while (iVar34 != -1);
                }
              }
              if ((*(byte *)(*(longlong *)uVar17 + 8 + lVar43) & 4) != 0) {
                pFVar12 = (param_1->SaveArgs).ArchiveCookData;
                pIVar41 = (ITargetPlatform *)0x0;
                if (pFVar12 != (FArchiveCookData *)0x0) {
                  pIVar41 = pFVar12->TargetPlatform;
                }
                cVar32 = (**(code **)(*(longlong *)&pIVar41->field_0x8 + 0xb0))(&pIVar41->field_0x8)
                ;
                pFVar36 = local_4d0;
                if (cVar32 != '\0') goto LAB_1421d2441;
                pTVar2 = &param_1->HarvestedIllegalReferences;
                pFVar11 = (pTVar2->AllocatorInstance).Data;
                local_4c0 = 0;
                local_4b0 = (FScriptContainerElement)0x2;
                local_4b8 = *(undefined8 *)(*(longlong *)uVar17 + lVar43);
                local_4a8 = 0;
                local_4a0 = 0;
                if (((pFVar11 <= (FScriptContainerElement *)&local_4c0) &&
                    ((FScriptContainerElement *)&local_4c0 <
                     pFVar11 + (longlong)(param_1->HarvestedIllegalReferences).ArrayMax * 0x28)) &&
                   (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar31)) {
                  pcVar16 = (code *)swi(3);
                  EVar33 = (*pcVar16)();
                  return EVar33;
                }
                iVar34 = (param_1->HarvestedIllegalReferences).ArrayNum;
                piVar1 = &(param_1->HarvestedIllegalReferences).ArrayMax;
                if (iVar34 == *piVar1) {
                  iVar34 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x828,&pTVar2->AllocatorInstance,piVar1);
                }
                (param_1->HarvestedIllegalReferences).ArrayNum = iVar34 + 1;
                pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar34 * 0x28;
                *(undefined8 *)pFVar11 = local_4c0;
                *(undefined8 *)(pFVar11 + 8) = local_4b8;
                pFVar11[0x10] = local_4b0;
                *(undefined8 *)(pFVar11 + 0x18) = 0;
                *(undefined8 *)(pFVar11 + 0x18) = local_4a8;
                local_4a8 = 0;
                *(undefined4 *)(pFVar11 + 0x20) = (undefined4)local_4a0;
                *(undefined4 *)(pFVar11 + 0x24) = local_4a0._4_4_;
                local_4a0 = 0;
              }
              TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator>::
              RemoveByIndex(local_440,iVar8);
              pFVar36 = local_4d0;
            }
LAB_1421d2441:
            local_450 = local_450 & ~local_45c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_468 + 8));
          } while (local_44c < *(int *)(local_458 + 0x18));
          if (bVar30) {
            local_400 = param_1->Package;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_400 != (UPackage *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_400);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_const_&>
                      (&pFVar36->Imports,(TObjectPtr<UObject> *)(local_438 + 4),(bool *)&local_400);
          }
        }
      }
    }
  }
  FPackageHarvester::EnterRootReferencesScope((FPackageHarvester *)local_358,&local_c0);
  pTVar3 = &param_1->PrestreamPackages;
  local_138.Elements._0_8_ = 0;
  puStack_480 = &(param_1->PrestreamPackages).Elements.field_0x10;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_8_ = 0x8000000000;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138._72_8_ = (ulonglong)(uint)local_138._76_4_ << 0x20;
  local_138.Elements._48_8_ = 0xffffffff;
  iVar8 = *(int *)&(param_1->PrestreamPackages).Elements.field_0x28;
  local_488 = 0;
  uStack_484 = 1;
  iStack_474 = 0;
  iStack_470 = 0;
  if (iVar8 != 0) {
    puVar45 = *(uint **)&(param_1->PrestreamPackages).Elements.field_0x20;
    if (puVar45 == (uint *)0x0) {
      puVar45 = (uint *)puStack_480;
    }
    uVar40 = *puVar45;
    iStack_470 = 0;
    local_488 = 0;
    while (uVar40 == 0) {
      iStack_470 = iStack_470 + 0x20;
      lVar43 = (longlong)local_488;
      local_488 = local_488 + 1;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_488) goto LAB_1421d2597;
      uVar40 = puVar45[lVar43 + 1];
    }
    uStack_484 = -uVar40 & uVar40;
    uVar5 = (ulonglong)uStack_484 * 2 + 1;
    lVar43 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar43 == 0; lVar43 = lVar43 + -1) {
      }
    }
    local_430 = (int)lVar43;
    iStack_474 = iStack_470 + -1 + local_430;
    if (iVar8 < iStack_474) {
LAB_1421d2597:
      iStack_474 = iVar8;
    }
  }
  local_478 = 0xffffffff;
  uVar40 = *(uint *)&(param_1->PrestreamPackages).Elements.field_0x28;
  TStack_3e8._padding_ = CONCAT44(uStack_484,local_488);
  local_378 = *(int *)&(param_1->PrestreamPackages).Elements.field_0x8 -
              *(int *)&(param_1->PrestreamPackages).Elements.field_0x34;
  TStack_3e8.CurrentBitIndex = iStack_474;
  TStack_3e8.UnvisitedBitMask = 0xffffffff;
  TStack_3e8._28_4_ = uStack_46c;
  TStack_3e8.BaseBitIndex = iStack_470;
  uVar46 = uVar40 & 0xffffffe0;
  iVar34 = (int)uVar40 >> 5;
  uStack_3c8 = CONCAT44(uStack_374,local_378);
  local_3f0 = pTVar3;
  TStack_3e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_480;
  local_3a0 = pTVar3;
  lStack_398 = TStack_3e8._padding_;
  puStack_390 = puStack_480;
  uStack_388 = TStack_3e8._16_8_;
  uStack_380 = TStack_3e8._24_8_;
  if ((((int)uVar40 < 0) || (iVar8 < (int)uVar40)) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar30)) {
    pcVar16 = (code *)swi(3);
    EVar33 = (*pcVar16)();
    return EVar33;
  }
  uVar9 = *(uint *)&(param_1->PrestreamPackages).Elements.field_0x28;
  if (uVar40 != uVar9) {
    puVar44 = *(undefined1 **)&(param_1->PrestreamPackages).Elements.field_0x20;
    if (puVar44 == (undefined1 *)0x0) {
      puVar44 = &(param_1->PrestreamPackages).Elements.field_0x10;
    }
    uVar40 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)(puVar44 + (longlong)iVar34 * 4);
    while (uVar40 == 0) {
      lVar43 = (longlong)iVar34;
      uVar46 = uVar46 + 0x20;
      iVar34 = iVar34 + 1;
      uVar40 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34) goto LAB_1421d26af;
      uVar40 = *(uint *)(puVar44 + lVar43 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
    lVar43 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar43 == 0; lVar43 = lVar43 + -1) {
      }
    }
    local_42c = (int)lVar43;
    uVar40 = (uVar46 - 1) + local_42c;
    if ((int)uVar9 < (int)uVar40) {
      uVar40 = uVar9;
    }
  }
LAB_1421d26af:
  while( true ) {
    pTVar29 = local_3f0;
    if (*(int *)&(local_3f0->Elements).field_0x8 - *(int *)&(local_3f0->Elements).field_0x34 !=
        (int)uStack_3c8) {
      local_4d6[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4d6);
    }
    if (((TStack_3e8.CurrentBitIndex == uVar40) &&
        (TStack_3e8.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->PrestreamPackages).Elements.field_0x10))
       && (pTVar29 == pTVar3)) {
      uVar17 = *(undefined8 *)&pTVar3->Elements;
      uVar18 = *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x8;
      uVar19 = *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x10;
      uVar20 = *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x18;
      uVar21 = *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x20;
      uVar22 = *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x28;
      uVar23 = *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x30;
      uVar24._0_1_ = (param_1->PrestreamPackages).Hash.InlineData[0];
      uVar24._1_1_ = (param_1->PrestreamPackages).Hash.InlineData[1];
      uVar24._2_1_ = (param_1->PrestreamPackages).Hash.InlineData[2];
      uVar24._3_1_ = (param_1->PrestreamPackages).Hash.InlineData[3];
      uVar24._4_4_ = (param_1->PrestreamPackages).Hash._padding_;
      FVar25 = (param_1->PrestreamPackages).Hash.SecondaryData;
      uVar5 = *(ulonglong *)&(param_1->PrestreamPackages).HashSize;
      *(undefined8 *)&pTVar3->Elements = local_138.Elements._0_8_;
      *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x8 = local_138.Elements._8_8_;
      *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x10 = local_138.Elements._16_8_;
      *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x18 = local_138.Elements._24_8_;
      *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x20 = local_138.Elements._32_8_;
      *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x28 = local_138.Elements._40_8_;
      *(undefined8 *)&(param_1->PrestreamPackages).Elements.field_0x30 = local_138.Elements._48_8_;
      (param_1->PrestreamPackages).Hash.InlineData[0] = local_138.Hash.InlineData[0];
      (param_1->PrestreamPackages).Hash.InlineData[1] = local_138.Hash.InlineData[1];
      (param_1->PrestreamPackages).Hash.InlineData[2] = local_138.Hash.InlineData[2];
      (param_1->PrestreamPackages).Hash.InlineData[3] = local_138.Hash.InlineData[3];
      (param_1->PrestreamPackages).Hash._padding_ = local_138.Hash._padding_;
      (param_1->PrestreamPackages).Hash.SecondaryData = local_138.Hash.SecondaryData;
      (param_1->PrestreamPackages).HashSize = local_138.HashSize;
      *(undefined4 *)&(param_1->PrestreamPackages).field_0x4c = local_138._76_4_;
      local_138.Elements._0_8_ = uVar17;
      local_138.Elements._8_8_ = uVar18;
      local_138.Elements._16_8_ = uVar19;
      local_138.Elements._24_8_ = uVar20;
      local_138.Elements._32_8_ = uVar21;
      local_138.Elements._40_8_ = uVar22;
      local_138.Elements._48_8_ = uVar23;
      local_138.Hash._0_8_ = uVar24;
      local_138.Hash.SecondaryData = FVar25;
      local_138._72_8_ = uVar5;
      if (0 < *(int *)&(param_1->PrestreamPackages).Elements.field_0x8 -
              *(int *)&(param_1->PrestreamPackages).Elements.field_0x34) {
        FPackageHarvester::HarvestPackageHeaderName
                  ((FPackageHarvester *)local_358,UE::SavePackageUtilities::NAME_PrestreamPackage);
      }
      pFVar13 = (param_1->Package->AdditionalInfo).Ptr;
      if ((pFVar13 != (FAdditionalInfo *)0x0) &&
         (this_00 = (pFVar13->WorldTileInfo).Ptr, this_00 != (FWorldTileInfo *)0x0)) {
        FWorldTileInfo::StreamArchive(this_00,(FArchive *)local_358);
      }
      local_138._72_8_ = local_138._72_8_ & 0xffffffff00000000;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      FPackageHarvester::FHarvestScope::~FHarvestScope(&local_c0);
      if (-1 < (int)param_1->Package->PackageFlagsPrivate) {
        FArchive::UsingCustomVersion((FArchive *)local_358,&FEditorObjectVersion::GUID);
      }
      pFVar37 = (FCustomVersionContainer *)(**(code **)(local_358._0_8_ + 0x60))(local_358);
      pFVar38 = FCustomVersionContainer::FCustomVersionContainer(&local_370,pFVar37);
      pFVar37 = &param_1->CustomVersions;
      if (pFVar37 != pFVar38) {
        pFVar11 = (pFVar37->Versions).AllocatorInstance.Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        (pFVar37->Versions).AllocatorInstance.Data = (pFVar38->Versions).AllocatorInstance.Data;
        (pFVar38->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_1->CustomVersions).Versions.ArrayNum = (pFVar38->Versions).ArrayNum;
        (param_1->CustomVersions).Versions.ArrayMax = (pFVar38->Versions).ArrayMax;
        (pFVar38->Versions).ArrayNum = 0;
        (pFVar38->Versions).ArrayMax = 0;
      }
      pFVar11 = (pFVar38->Versions).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pTVar39 = FPackageHarvester::ReleaseTransientPropertyOverrides
                          ((FPackageHarvester *)local_358,
                           (TMap<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>,0>_>
                            *)local_98);
      this = &param_1->TransientPropertyOverrides;
      if (this != pTVar39) {
        TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this,0,*(int *)&(param_1->TransientPropertyOverrides).field_0x8);
        if (*(void **)this != (void *)0x0) {
          FMemory::Free(*(void **)this);
        }
        *(undefined8 *)this = *(undefined8 *)pTVar39;
        puVar44 = &(param_1->TransientPropertyOverrides).field_0x10;
        *(undefined8 *)pTVar39 = 0;
        *(undefined4 *)&(param_1->TransientPropertyOverrides).field_0x8 =
             *(undefined4 *)&pTVar39->field_0x8;
        *(undefined4 *)&(param_1->TransientPropertyOverrides).field_0xc =
             *(undefined4 *)&pTVar39->field_0xc;
        *(undefined8 *)&pTVar39->field_0x8 = 0;
        if (puVar44 != &pTVar39->field_0x10) {
          if (*(longlong *)&pTVar39->field_0x20 == 0) {
            memmove(puVar44,&pTVar39->field_0x10,0x10);
          }
          pvVar14 = *(void **)&(param_1->TransientPropertyOverrides).field_0x20;
          if (pvVar14 != (void *)0x0) {
            FMemory::Free(pvVar14);
          }
          *(undefined8 *)&(param_1->TransientPropertyOverrides).field_0x20 =
               *(undefined8 *)&pTVar39->field_0x20;
          *(undefined8 *)&pTVar39->field_0x20 = 0;
          *(undefined4 *)&(param_1->TransientPropertyOverrides).field_0x28 =
               *(undefined4 *)&pTVar39->field_0x28;
          *(undefined4 *)&(param_1->TransientPropertyOverrides).field_0x2c =
               *(undefined4 *)&pTVar39->field_0x2c;
          *(undefined8 *)&pTVar39->field_0x28 = 0;
        }
        *(undefined4 *)&(param_1->TransientPropertyOverrides).field_0x30 =
             *(undefined4 *)&pTVar39->field_0x30;
        *(undefined4 *)&(param_1->TransientPropertyOverrides).field_0x34 =
             *(undefined4 *)&pTVar39->field_0x34;
        *(undefined4 *)&pTVar39->field_0x30 = 0xffffffff;
        *(undefined4 *)&pTVar39->field_0x34 = 0;
        if (*(longlong *)&pTVar39->field_0x40 == 0) {
          *(undefined4 *)&(param_1->TransientPropertyOverrides).field_0x38 =
               *(undefined4 *)&pTVar39->field_0x38;
        }
        pvVar14 = *(void **)&(param_1->TransientPropertyOverrides).field_0x40;
        if (pvVar14 != (void *)0x0) {
          FMemory::Free(pvVar14);
        }
        *(undefined8 *)&(param_1->TransientPropertyOverrides).field_0x40 =
             *(undefined8 *)&pTVar39->field_0x40;
        *(undefined8 *)&pTVar39->field_0x40 = 0;
        *(undefined4 *)&(param_1->TransientPropertyOverrides).field_0x48 =
             *(undefined4 *)&pTVar39->field_0x48;
        *(undefined4 *)&pTVar39->field_0x48 = 0;
      }
      local_50 = 0;
      if ((void *)local_98._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if ((param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
        FSaveContext::AddExportedClassesToDependencies(param_1);
      }
      FSaveContext::UpdateEditorRealmPackageBuildDependencies(param_1);
      cVar32 = (**(code **)(GWarn->_padding_ + 0x60))();
      if (local_148 != (ForElementType<ESaveRealm>)0x0) {
        FMemory::Free((void *)local_148);
      }
      local_158 = 0;
      if (local_160 != (void *)0x0) {
        FMemory::Free(local_160);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_358 + 0x1b8));
      local_358._424_4_ = 0;
      if ((ForElementType<FSetElementId>)local_358._416_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_358._416_8_);
      }
      TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_358 + 0x160));
      local_358._344_4_ = 0;
      if ((ForElementType<FSetElementId>)local_358._336_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_358._336_8_);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_358 + 0x110));
      local_358._264_4_ = 0;
      if ((ForElementType<FSetElementId>)local_358._256_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_358._256_8_);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_358 + 0xc0));
      while (pTVar27 = (TNode *)local_358._168_8_, pTVar27 != (TNode *)0x0) {
        local_358._168_8_ = pTVar27->NextNode;
        if (pTVar27 != (TNode *)0x0) {
          FVar15 = (pTVar27->Item).HarvestedFromRealms.AllocatorInstance.SecondaryData;
          if (FVar15 != (ForElementType<ESaveRealm>)0x0) {
            FMemory::Free((void *)FVar15);
          }
          ::operator_delete(pTVar27,0x30);
        }
      }
      local_358._168_8_ = pTVar27;
      FArchive::~FArchive((FArchive *)local_358);
      if (bVar26) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return -(uint)(cVar32 != '\0') & Canceled;
    }
    local_4c8 = *(UObject **)
                 (*(longlong *)&pTVar29->Elements + (longlong)TStack_3e8.CurrentBitIndex * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4c8);
    }
    pUVar10 = local_4c8;
    EVar7 = param_1->CurrentHarvestingRealm;
    uVar46 = 0;
    if ((int)EVar7 < (param_1->HarvestedRealms).ArrayNum) {
      uVar46 = ~EVar7 >> 0x1f;
    }
    if ((uVar46 == 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) break;
    pFVar11 = (param_1->HarvestedRealms).AllocatorInstance.Data;
    local_3f8 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    bVar30 = FHarvestedRealm::IsImport
                       ((FHarvestedRealm *)(pFVar11 + (longlong)(int)EVar7 * 0x5f0),
                        (TObjectPtr<UObject>)&local_3f8);
    if (!bVar30) {
      TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UPackage>_const_&>(&local_138,&local_428,(bool *)&local_4c8);
      (**(code **)(local_358._0_8_ + 0x150))(local_358,&local_4c8);
    }
    TStack_3e8.UnvisitedBitMask = TStack_3e8.UnvisitedBitMask & ~TStack_3e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e8);
  }
  pcVar16 = (code *)swi(3);
  EVar33 = (*pcVar16)();
  return EVar33;
}

// InnerSave @ 1421d30f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESavePackageResult __cdecl `anonymous_namespace'::InnerSave(FSaveContext *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  float fVar3;
  FFeedbackContext *pFVar4;
  ESavePackageResult EVar5;
  FText *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<ESaveRealm,TSizedDefaultAllocator<32>_> local_a8;
  FScopedSavingFlag local_98;
  FSlowTask local_88;
  
  pFVar4 = GWarn;
  bVar2 = (param_1->SaveArgs).bSlowTask;
  pFVar6 = FText::FText((FText *)&local_a8);
  fVar3 = __real_40400000;
  FSlowTask::FSlowTask(&local_88,__real_40400000,pFVar6,bVar2,pFVar4);
  FSlowTask::Initialize(&local_88);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (**(code **)(*(undefined8 *)local_a8.AllocatorInstance.Data + 0x10))();
  }
  FSlowTask::MakeDialogDelayed
            (&local_88,fVar3,(bool)((byte)((param_1->SaveArgs).SaveFlags >> 1) & 1),false);
  pFVar6 = FText::FText((FText *)&local_a8);
  fVar3 = __real_3f800000;
  FSlowTask::EnterProgressFrame(&local_88,__real_3f800000,pFVar6);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (**(code **)(*(undefined8 *)local_a8.AllocatorInstance.Data + 0x10))();
  }
  (param_1->ObjectSaveContext).ObjectSaveContextPhase = Harvest;
  EVar5 = HarvestPackage(param_1);
  param_1->Result = EVar5;
  if (EVar5 == Success) {
    pFVar6 = FText::FText((FText *)&local_a8);
    FSlowTask::EnterProgressFrame(&local_88,fVar3,pFVar6);
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      (**(code **)(*(undefined8 *)local_a8.AllocatorInstance.Data + 0x10))();
    }
    EVar5 = ValidateRealms(param_1);
    param_1->Result = EVar5;
    if (EVar5 == Success) {
      FScopedSavingFlag::FScopedSavingFlag
                (&local_98,(bool)((byte)((param_1->SaveArgs).SaveFlags >> 8) & 1),param_1->Package);
      pFVar6 = FText::FText((FText *)&local_a8);
      FSlowTask::EnterProgressFrame(&local_88,fVar3,pFVar6);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        (**(code **)(*(undefined8 *)local_a8.AllocatorInstance.Data + 0x10))();
      }
      (param_1->ObjectSaveContext).ObjectSaveContextPhase = Write;
      FSaveContext::GetHarvestedRealmsToSave(param_1,&local_a8);
      iVar7 = local_a8.ArrayNum;
      pFVar1 = local_a8.AllocatorInstance.Data + (longlong)iVar7 * 4;
      FVar8.Data = local_a8.AllocatorInstance.Data;
      while( true ) {
        if (local_a8.ArrayNum != iVar7) {
          `TCheckedPointerIterator<enum_ESaveRealm,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar8.Data == pFVar1) {
          if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.AllocatorInstance.Data);
          }
          UObjectBase::AtomicallySetFlags
                    ((UObjectBase *)param_1->Package,RF_LoadCompleted|RF_WasLoaded);
          EVar5 = param_1->Result;
          goto LAB_1421d32d5;
        }
        EVar5 = SaveHarvestedRealms(param_1,*(ESaveRealm *)FVar8.Data);
        param_1->Result = EVar5;
        if (EVar5 != Success) break;
        FVar8.Data = FVar8.Data + 4;
      }
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
LAB_1421d32d5:
      FScopedSavingFlag::~FScopedSavingFlag(&local_98);
    }
  }
  FSlowTask::Destroy(&local_88);
  if (local_88.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_88.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.DefaultMessage.TextData.Reference + 0x10))();
  }
  return EVar5;
}

// IsEqualPriority @ 1421d33d0

bool __cdecl IsEqualPriority(FRemoteWorkPriority param_1,FRemoteWorkPriority param_2)

{
  if ((param_2.PackedData <= param_1.PackedData) && (param_1.PackedData <= param_2.PackedData)) {
    return true;
  }
  return false;
}

// IsHigherOrEqualPriority @ 1421d3510

bool __cdecl IsHigherOrEqualPriority(FRemoteWorkPriority param_1,FRemoteWorkPriority param_2)

{
  if (param_2.PackedData < param_1.PackedData) {
    return false;
  }
  return true;
}

// IsHigherPriority @ 1421d3530

bool __cdecl IsHigherPriority(FRemoteWorkPriority param_1,FRemoteWorkPriority param_2)

{
  return param_1.PackedData < param_2.PackedData;
}

// ParallelFor @ 1421d6890

void __cdecl
ParallelFor(int param_1,TFunctionRef<void___cdecl(int)> *param_2,EParallelForFlags param_3)

{
  <lambda_1> local_res10;
  TArrayView<std::nullptr_t,int> local_28;
  TFunctionRef<void___cdecl(int)> local_18;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1,1,&local_18,local_res10,param_3,&local_28);
  return;
}

// PathAppendString @ 1421d68f0

void __cdecl
PropertyVisitorHelpers::PathAppendString
          (TArrayView<FPropertyVisitorInfo_const_,int> *param_1,TStringBuilderBase<wchar_t> *param_2
          ,wchar_t *param_3)

{
  FPropertyVisitorInfo *pFVar1;
  EPropertyVisitorInfoType EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FString *pFVar7;
  size_t sVar8;
  int iVar9;
  FPropertyVisitorInfo *pFVar10;
  FString local_38;
  FString local_28;
  
  pFVar10 = param_1->DataPtr;
  bVar5 = true;
  pFVar1 = pFVar10 + param_1->ArrayNum;
  do {
    if (pFVar10 == pFVar1) {
      return;
    }
    bVar6 = false;
    ::FString::FString(&local_38,L"");
    EVar2 = pFVar10->PropertyInfo;
    if (EVar2 == None) {
LAB_1421d69bd:
      if (bVar5) {
        bVar5 = false;
      }
      else {
        iVar9 = 0;
        if (param_3 != (wchar_t *)0x0) {
          sVar8 = wcslen(param_3);
          iVar9 = (int)sVar8;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,param_3,iVar9);
      }
      pFVar7 = FField::GetAuthoredName((FField *)pFVar10->Property,&local_28);
      iVar3 = (pFVar7->Data).ArrayNum;
      iVar9 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar9 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (param_2,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar9);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
LAB_1421d6a1e:
        if ((pFVar10->Index == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Entry.Index != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyVisitor.cpp"
                               ,0xce,L"Expecting the index to be valid"), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(param_2,L"[%d]");
      }
    }
    else {
      if (EVar2 == StaticArrayIndex) {
        bVar6 = true;
        goto LAB_1421d69bd;
      }
      if (EVar2 == ContainerIndex) goto LAB_1421d6a1e;
      if (EVar2 == MapKey) {
        ::FString::operator=(&local_38,L"Key");
        goto LAB_1421d6a1e;
      }
      if (EVar2 == MapValue) {
        ::FString::operator=(&local_38,L"Value");
        goto LAB_1421d6a1e;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyVisitor.cpp"
                         ,0xbd,L"Unsupported enum value");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar9 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      iVar9 = 0;
      if (param_3 != (wchar_t *)0x0) {
        sVar8 = wcslen(param_3);
        iVar9 = (int)sVar8;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,param_3,iVar9);
      iVar9 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (param_2,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar9);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// PathIsContainedWithin @ 1421d6af0

bool __cdecl
PropertyVisitorHelpers::PathIsContainedWithin
          (TArrayView<FPropertyVisitorInfo_const_,int> *param_1,
          TArrayView<FPropertyVisitorInfo_const_,int> *param_2,bool *param_3)

{
  FPropertyVisitorInfo *pFVar1;
  FPropertyVisitorInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      if (param_2->ArrayNum <= (int)uVar7) break;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = param_1->DataPtr;
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = param_2->DataPtr;
      if (*(longlong *)((longlong)&pFVar1->Property + lVar9) !=
          *(longlong *)((longlong)&pFVar2->Property + lVar9)) break;
      if ((&pFVar1->PropertyInfo)[lVar9] == (&pFVar2->PropertyInfo)[lVar9]) {
        bVar4 = *(int *)((longlong)&pFVar1->Index + lVar9) ==
                *(int *)((longlong)&pFVar2->Index + lVar9);
      }
      else {
        bVar4 = (&pFVar1->PropertyInfo)[lVar9] == None;
      }
      if (!bVar4) break;
      iVar8 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x18;
    } while ((int)uVar7 < iVar8);
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = uVar7 == param_2->ArrayNum;
  }
  return uVar7 == param_1->ArrayNum;
}

// PathToSerializedPropertyChain @ 1421d6c50

FArchiveSerializedPropertyChain * __cdecl
PropertyVisitorHelpers::PathToSerializedPropertyChain
          (FArchiveSerializedPropertyChain *__return_storage_ptr__,
          TArrayView<FPropertyVisitorInfo_const_,int> *param_1)

{
  FPropertyVisitorInfo *pFVar1;
  ForElementType<FProperty_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchiveSerializedPropertyChain *pFVar8;
  ForElementType<FProperty_*> FVar9;
  FPropertyVisitorInfo *pFVar10;
  FProperty *local_18 [2];
  uint uVar7;
  
  pFVar10 = param_1->DataPtr;
  (__return_storage_ptr__->SerializedPropertyChain).AllocatorInstance.SecondaryData =
       (ForElementType<FProperty_*>)0x0;
  (__return_storage_ptr__->SerializedPropertyChain).ArrayNum = 0;
  iVar5 = param_1->ArrayNum;
  *(undefined8 *)&(__return_storage_ptr__->SerializedPropertyChain).ArrayMax = 8;
  pFVar1 = pFVar10 + iVar5;
  while( true ) {
    if (pFVar10 == pFVar1) {
      return __return_storage_ptr__;
    }
    local_18[0] = pFVar10->Property;
    if ((local_18[0] == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ArchiveSerializedPropertyChain.h"
                           ,0x1c,L""), bVar4)) break;
    FVar2 = (__return_storage_ptr__->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<FProperty_*>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<FProperty_*>)0x0) {
      FVar9 = FVar2;
    }
    if ((ulonglong)FVar9 <= local_18) {
      FVar9 = (ForElementType<FProperty_*>)__return_storage_ptr__;
      if (FVar2 != (ForElementType<FProperty_*>)0x0) {
        FVar9 = FVar2;
      }
      if ((local_18 <
           (FProperty **)
           ((longlong)FVar9 +
           (longlong)(__return_storage_ptr__->SerializedPropertyChain).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FArchiveSerializedPropertyChain *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar5 = (__return_storage_ptr__->SerializedPropertyChain).ArrayNum;
    if (iVar5 == (__return_storage_ptr__->SerializedPropertyChain).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
                        (0x808,(ForElementType<FProperty_*> *)__return_storage_ptr__,
                         &(__return_storage_ptr__->SerializedPropertyChain).ArrayMax);
    }
    (__return_storage_ptr__->SerializedPropertyChain).ArrayNum = iVar5 + 1;
    FVar2 = (__return_storage_ptr__->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<FProperty_*>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<FProperty_*>)0x0) {
      FVar9 = FVar2;
    }
    *(FProperty **)((longlong)FVar9 + (longlong)iVar5 * 8) = local_18[0];
    uVar7 = __return_storage_ptr__->SerializedPropertyChainUpdateCount;
    do {
      uVar6 = uVar7 + 1;
      uVar7 = 0;
    } while (uVar6 == 0);
    pFVar10 = pFVar10 + 1;
    __return_storage_ptr__->SerializedPropertyChainUpdateCount = uVar6;
  }
  pcVar3 = (code *)swi(3);
  pFVar8 = (FArchiveSerializedPropertyChain *)(*pcVar3)();
  return pFVar8;
}

// PathToString @ 1421d6dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
PropertyVisitorHelpers::PathToString
          (FString *__return_storage_ptr__,TArrayView<FPropertyVisitorInfo_const_,int> *param_1,
          wchar_t *param_2)

{
  undefined1 auStack_888 [32];
  TArrayView<FPropertyVisitorInfo_const_,int> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_868.DataPtr = param_1->DataPtr;
  local_868.ArrayNum = param_1->ArrayNum;
  local_868._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  PathAppendString(&local_868,&local_858,param_2);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_858.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return __return_storage_ptr__;
}

// PathToString @ 1421d6e90

void __cdecl
PropertyVisitorHelpers::PathToString
          (TArrayView<FPropertyVisitorInfo_const_,int> *param_1,TStringBuilderBase<wchar_t> *param_2
          ,wchar_t *param_3)

{
  TArrayView<FPropertyVisitorInfo_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  param_2->CurPos = param_2->Base;
  PathAppendString(&local_18,param_2,param_3);
  return;
}

// PostSavePackage @ 1421d88f0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl `anonymous_namespace'::PostSavePackage(FSaveContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  UPackage *pUVar8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar13;
  FLinkerSave *pFVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  undefined1 *puVar22;
  uint *puVar23;
  byte bVar24;
  uint uVar25;
  longlong *plVar26;
  bool bVar27;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  longlong *plVar28;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  UPackage *local_1b0;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  FObjectSaveContextData *local_170;
  FObjectSaveContextData *local_168;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  FString local_130;
  FString local_120;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  undefined **local_d8 [5];
  byte local_ae;
  
  local_1b0 = param_1->Package;
  if ((atomic<unsigned_int>)param_1->InitialPackageFlags != local_1b0->PackageFlagsPrivate) {
    local_1b0->PackageFlagsPrivate = (atomic<unsigned_int>)param_1->InitialPackageFlags;
  }
  bVar27 = (param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0;
  if ((((param_1->SaveArgs).SaveFlags & 0x4000) == 0) ||
     (param_1->bCanUseUnversionedPropertySerialization == false)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  plVar28 = (longlong *)(ulonglong)bVar27;
  UE::SavePackageUtilities::Private::FArchiveSavePackageCollector::FArchiveSavePackageCollector
            ((FArchiveSavePackageCollector *)local_d8,&param_1->ArchiveSavePackageData,
             (bool)(SUB41(param_1->Package->PackageFlagsPrivate,3) >> 7),bVar10,bVar27);
  local_ae = local_ae | 0xc;
  local_d8[0] = &FPostSaveArchive::_vftable_;
  pTVar13 = FSaveContext::GetPostSaveObjectsToSerialize(param_1);
  iVar16 = *(int *)&(pTVar13->Elements).field_0x28;
  iStack_1a0 = 0;
  local_188 = 0;
  uStack_19c = 1;
  puVar1 = &(pTVar13->Elements).field_0x10;
  iStack_18c = 0;
  if (iVar16 != 0) {
    puVar23 = *(uint **)&(pTVar13->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar17 = *puVar23;
    while (uVar17 == 0) {
      lVar15 = (longlong)iStack_1a0;
      local_188 = local_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0) goto LAB_1421d8a11;
      uVar17 = puVar23[lVar15 + 1];
    }
    uStack_19c = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_19c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    iStack_18c = local_188 + -1 + local_res20;
    if (iVar16 < iStack_18c) {
      iStack_18c = iVar16;
    }
  }
LAB_1421d8a11:
  uVar17 = *(uint *)&(pTVar13->Elements).field_0x28;
  uVar25 = uVar17 & 0xffffffe0;
  iStack_180 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
  uStack_190 = 0xffffffff;
  TStack_158._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  TStack_158.CurrentBitIndex = iStack_18c;
  TStack_158.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar17 >> 5;
  TStack_158._28_4_ = iStack_18c;
  TStack_158.BaseBitIndex = local_188;
  uStack_138 = CONCAT44(uStack_17c,iStack_180);
  local_1a8 = pTVar13;
  local_198 = puVar1;
  iStack_184 = iStack_18c;
  local_160 = pTVar13;
  TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar16 < (int)uVar17)) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar27)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(pTVar13->Elements).field_0x28;
  if (uVar17 != uVar4) {
    puVar22 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar19;
      uVar25 = uVar25 + 0x20;
      iVar19 = iVar19 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1421d8b11;
      uVar17 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_178 = (int)lVar15;
    uVar17 = local_178 + -1 + uVar25;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_1421d8b11:
  while( true ) {
    pTVar9 = local_160;
    if (*(int *)&(local_160->Elements).field_0x8 - *(int *)&(local_160->Elements).field_0x34 !=
        (int)uStack_138) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_158.CurrentBitIndex == uVar17) &&
        (TStack_158.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar13)
       ) break;
    (**(code **)(**(longlong **)
                   (*(longlong *)&pTVar9->Elements + (longlong)TStack_158.CurrentBitIndex * 0x10) +
                200))();
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
  }
  FArchive::~FArchive((FArchive *)local_d8);
  if (param_1->Result == Success) {
    if (((param_1->SaveArgs).SaveFlags & 4) == 0) {
      UPackage::SetDirtyFlag(param_1->Package,false);
    }
    if (((((param_1->SaveArgs).SaveFlags & 2) == 0) &&
        ((param_1->ObjectSaveContext).bProceduralSave == false)) &&
       ((atomic<unsigned_int>)((uint)local_1b0->PackageFlagsPrivate & 0xfffffffe) !=
        local_1b0->PackageFlagsPrivate)) {
      LOCK();
      local_1b0->PackageFlagsPrivate =
           (atomic<unsigned_int>)((uint)local_1b0->PackageFlagsPrivate & 0xfffffffe);
      UNLOCK();
    }
    pFVar14 = FSaveContext::GetLinker(param_1);
    iVar16 = (param_1->HarvestedRealms).ArrayNum;
    bVar24 = 1;
    pFVar20 = (param_1->HarvestedRealms).AllocatorInstance.Data;
    uVar17 = (uint)pFVar14->_padding_;
    iVar19 = 0;
    pFVar18 = pFVar20 + (longlong)iVar16 * 0x5f0;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0 = 0;
    while( true ) {
      if ((param_1->HarvestedRealms).ArrayNum != iVar16) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FHarvestedRealm_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        iVar19 = (int)local_1c0;
      }
      if (pFVar20 == pFVar18) break;
      lVar15 = *(longlong *)pFVar20;
      if (lVar15 != 0) {
        iVar12 = iVar19;
        local_1b8 = lVar15;
        if ((local_1c8.Data <= (FScriptContainerElement *)&local_1b8) &&
           ((FScriptContainerElement *)&local_1b8 < local_1c8.Data + (longlong)local_1c0._4_4_ * 8))
        {
          plVar28 = &local_1b8;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar27) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (int)local_1c0;
        }
        if (iVar12 == local_1c0._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_1c8,(int *)((longlong)&local_1c0 + 4));
        }
        iVar19 = iVar12 + 1;
        local_1c0 = CONCAT44(local_1c0._4_4_,iVar19);
        *(longlong *)(local_1c8.Data + (longlong)iVar12 * 8) = local_1b8;
      }
      pFVar20 = pFVar20 + 0x5f0;
    }
    pFVar20 = local_1c8.Data + (longlong)iVar19 * 8;
    FVar21.Data = local_1c8.Data;
    iVar16 = iVar19;
    while( true ) {
      if (iVar16 != iVar19) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FLinkerSave_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar21.Data == pFVar20) break;
      pFVar14 = *(FLinkerSave **)FVar21.Data;
      if ((pFVar14 == (FLinkerSave *)0x0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Linker",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                              ,0xdf9,L""), bVar27)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar24 = bVar24 & (byte)((uint)pFVar14->_padding_ >> 10);
      (param_1->ObjectSaveContext).Object = (UObject *)0x0;
      local_170 = &param_1->ObjectSaveContext;
      piVar2 = &(param_1->ObjectSaveContext).NumRefPasses;
      *piVar2 = *piVar2 + 1;
      FLinkerSave::OnPostSave
                (pFVar14,&param_1->TargetPackagePath,(FObjectSaveContextData *)&local_170);
      FVar21.Data = FVar21.Data + 8;
      iVar16 = (int)local_1c0;
    }
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    uVar25 = uVar17 | 0x400;
    if (bVar24 == 0) {
      uVar25 = uVar17 & 0xfffffbff;
    }
    bVar27 = (param_1->ObjectSaveContext).bUpdatingLoadedPath;
    param_1->SerializedPackageFlags = uVar25;
    if (bVar27 != false) {
      UPackage::SetFileSize(param_1->Package,param_1->PackageHeaderAndExportSize);
    }
    ::FString::FString(&local_130,param_1->Filename);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UPackage::PackageSavedEvent,(FWriteAccessScope *)&local_110);
    pUVar8 = local_1b0;
    bVar27 = false;
    UPackage::PackageSavedEvent._28_4_ = UPackage::PackageSavedEvent._28_4_ + 1;
    uVar17 = UPackage::PackageSavedEvent._16_4_ - 1;
    if (-1 < (int)uVar17) {
      plVar26 = (longlong *)(longlong)(int)uVar17;
      lVar15 = (longlong)plVar26 << 4;
      bVar27 = false;
      do {
        uVar25 = 0;
        if ((int)uVar17 < (int)UPackage::PackageSavedEvent._16_4_) {
          uVar25 = ~uVar17 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (plVar28 = plVar26,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((*(int *)(lVar15 + 8 + UPackage::PackageSavedEvent._8_8_) == 0) ||
            (plVar5 = *(longlong **)(lVar15 + UPackage::PackageSavedEvent._8_8_),
            plVar5 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar5 + 0x68))(plVar5,&local_130,pUVar8), cVar11 == '\0')) {
          bVar27 = true;
        }
        plVar26 = (longlong *)((longlong)plVar26 + -1);
        lVar15 = lVar15 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    UPackage::PackageSavedEvent._28_4_ = UPackage::PackageSavedEvent._28_4_ + -1;
    if (bVar27) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&UPackage::PackageSavedEvent,
                 false);
    }
    if (local_110.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    (param_1->ObjectSaveContext).Object = (UObject *)0x0;
    piVar2 = &(param_1->ObjectSaveContext).NumRefPasses;
    *piVar2 = *piVar2 + 1;
    ::FString::FString(&local_120,param_1->Filename);
    piVar2 = &(param_1->ObjectSaveContext).NumRefPasses;
    *piVar2 = *piVar2 + 1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UPackage::PackageSavedWithContextEvent,(FWriteAccessScope *)&local_f8);
    bVar27 = false;
    UPackage::PackageSavedWithContextEvent._28_4_ =
         UPackage::PackageSavedWithContextEvent._28_4_ + 1;
    uVar17 = UPackage::PackageSavedWithContextEvent._16_4_ - 1;
    if (-1 < (int)uVar17) {
      plVar26 = (longlong *)(longlong)(int)uVar17;
      lVar15 = (longlong)plVar26 << 4;
      bVar27 = false;
      do {
        uVar25 = 0;
        if ((int)uVar17 < (int)UPackage::PackageSavedWithContextEvent._16_4_) {
          uVar25 = ~uVar17 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (plVar28 = plVar26,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)(lVar15 + 8 + UPackage::PackageSavedWithContextEvent._8_8_) == 0) ||
           (plVar5 = *(longlong **)(lVar15 + UPackage::PackageSavedWithContextEvent._8_8_),
           plVar5 == (longlong *)0x0)) {
LAB_1421d8fe0:
          bVar27 = true;
        }
        else {
          lVar6 = *plVar5;
          piVar2 = &(param_1->ObjectSaveContext).NumRefPasses;
          *piVar2 = *piVar2 + 1;
          local_168 = &param_1->ObjectSaveContext;
          cVar11 = (**(code **)(lVar6 + 0x68))(plVar5,&local_120,pUVar8,&local_168,plVar28);
          if (cVar11 == '\0') goto LAB_1421d8fe0;
        }
        plVar26 = (longlong *)((longlong)plVar26 + -1);
        lVar15 = lVar15 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    UPackage::PackageSavedWithContextEvent._28_4_ =
         UPackage::PackageSavedWithContextEvent._28_4_ + -1;
    if (bVar27) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UPackage::PackageSavedWithContextEvent,false);
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SaveHarvestedRealms @ 1421e26c0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::SaveHarvestedRealms(FSaveContext *param_1,ESaveRealm param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ESaveRealm EVar3;
  int iVar4;
  IPackageWriter *pIVar5;
  FSavePackageContext *pFVar6;
  uint *puVar7;
  code *pcVar8;
  float fVar9;
  FFeedbackContext *pFVar10;
  bool bVar11;
  ESavePackageResult EVar12;
  uint uVar13;
  undefined4 uVar14;
  FText *pFVar15;
  FLinkerSave *pFVar16;
  FLinkerSave *pFVar17;
  longlong lVar18;
  undefined8 uVar19;
  uchar *puVar20;
  FArchive *this;
  ForElementType<FSavePackageOutputFile> FVar21;
  byte bVar22;
  longlong lVar23;
  ESaveRealm EVar24;
  ESaveRealm *pEVar25;
  ForElementType<FSavePackageOutputFile> FVar26;
  undefined1 local_res8 [8];
  FArchiveStackTraceDisabledScope local_res10 [8];
  undefined1 local_res18 [8];
  byte local_res20;
  longlong local_1b8;
  FSlotBase local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  uint local_1a4;
  ESaveRealm local_1a0;
  FLargeMemoryWriter *local_198;
  ESaveRealm *local_190;
  FSlowTask local_188;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68 [2];
  
  pEVar25 = &param_1->CurrentHarvestingRealm;
  EVar24 = *pEVar25;
  bVar11 = (param_1->SaveArgs).bSlowTask;
  *pEVar25 = param_2;
  pFVar10 = GWarn;
  local_1a0 = EVar24;
  local_190 = pEVar25;
  pFVar15 = FText::FText(&local_128);
  FSlowTask::FSlowTask(&local_188,__real_41400000,pFVar15,bVar11,pFVar10);
  FSlowTask::Initialize(&local_188);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  pFVar15 = FText::FText(&local_118);
  fVar9 = __real_3f800000;
  FSlowTask::EnterProgressFrame(&local_188,__real_3f800000,pFVar15);
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  EVar12 = ValidateExports(param_1);
  param_1->Result = EVar12;
  if (EVar12 == Success) {
    pFVar15 = FText::FText(&local_108);
    FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    EVar12 = ValidateImports(param_1);
    param_1->Result = EVar12;
    if (EVar12 == Success) {
      pFVar15 = FText::FText(&local_f8);
      FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      EVar12 = CreateLinker(param_1);
      param_1->Result = EVar12;
      if (EVar12 == Success) {
        pFVar15 = FText::FText(&local_e8);
        FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
        EVar12 = BuildLinker(param_1);
        param_1->Result = EVar12;
        if (EVar12 == Success) {
          EVar3 = *pEVar25;
          lVar18 = 0;
          uVar13 = 0;
          if ((int)EVar3 < (param_1->HarvestedRealms).ArrayNum) {
            uVar13 = ~EVar3 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            EVar12 = (*pcVar8)();
            return EVar12;
          }
          local_1b0.StructuredArchive =
               *(FStructuredArchive **)
                ((param_1->HarvestedRealms).AllocatorInstance.Data +
                (longlong)(int)EVar3 * 0x5f0 + 0x18);
          pFVar15 = FText::FText(&local_d8);
          FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
          }
          if (param_1->bTextFormat == false) {
            EVar12 = WritePackageHeader((FStructuredArchiveRecord *)&local_1b0,param_1);
          }
          else {
            EVar12 = WritePackageTextHeader((FStructuredArchiveRecord *)&local_1b0,param_1);
          }
          param_1->Result = EVar12;
          if (EVar12 == Success) {
            pFVar15 = FText::FText(&local_c8);
            FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
            if (local_c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
            }
            pFVar16 = FSaveContext::GetLinker(param_1);
            plVar1 = &pFVar16->_padding_;
            bVar22 = *(byte *)((longlong)&pFVar16->_padding_ + 3) >> 5 & 1;
            local_res20 = bVar22;
            (**(code **)(*plVar1 + 0x88))(plVar1,param_2 == Optional);
            if ((pFVar16->_padding_ == 0) || (*(longlong *)(pFVar16->_padding_ + 0x10) == 0)) {
              EVar12 = WriteExports((FStructuredArchiveRecord *)&local_1b0,param_1);
              param_1->Result = EVar12;
            }
            else {
              (**(code **)((longlong)*param_1->PackageWriter + 0x58))
                        (param_1->PackageWriter,&local_198,param_1->Package->_padding_,
                         param_1->Asset,*local_190 == Optional);
              EVar12 = WriteCookedExports((FArchive *)local_198,param_1);
              param_1->Result = EVar12;
              if (EVar12 == Success) {
                pFVar17 = FSaveContext::GetLinker(param_1);
                if ((pFVar17 == (FLinkerSave *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("SaveContext.GetLinker()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                        ,0x901,L""), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  EVar12 = (*pcVar8)();
                  return EVar12;
                }
                pFVar17 = FSaveContext::GetLinker(param_1);
                plVar2 = &pFVar17->_padding_;
                if (((pFVar17->_padding_ == 0) || (*(longlong *)(pFVar17->_padding_ + 0x10) == 0))
                   || ((int)pFVar16->_padding_ == 0)) {
                  *(undefined4 *)&pFVar17->_padding_ = 0xffffffff;
                }
                else {
                  uVar14 = (**(code **)(*plVar2 + 0x28))(plVar2);
                  *(undefined4 *)&pFVar17->_padding_ = uVar14;
                  FObjectDataResource::Serialize
                            ((FStructuredArchiveSlot)local_1b0.StructuredArchive,
                             (TArray<FObjectDataResource,TSizedDefaultAllocator<32>_> *)
                             &pFVar16->_padding_);
                  lVar23 = pFVar17->_padding_;
                  lVar18 = (**(code **)(*plVar2 + 0x28))(plVar2);
                  lVar18 = lVar18 - (int)lVar23;
                  if ((lVar18 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("DataResourceSize >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                          ,0xe79,L""), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    EVar12 = (*pcVar8)();
                    return EVar12;
                  }
                }
                EVar12 = SetSummaryTotalHeaderSize
                                   (param_1,*(int *)((longlong)&pFVar16->_padding_ + 4) + lVar18);
                param_1->Result = EVar12;
                if (EVar12 != Success) {
                  pEVar25 = local_190;
                  EVar24 = local_1a0;
                  if (local_198 != (FLargeMemoryWriter *)0x0) {
                    (**(code **)local_198->_padding_)(local_198,1);
                    pEVar25 = local_190;
                    EVar24 = local_1a0;
                  }
                  goto LAB_1421e3003;
                }
                FArchiveStackTraceDisabledScope::FArchiveStackTraceDisabledScope(local_res10);
                pcVar8 = *(code **)(*plVar1 + 0x188);
                uVar19 = (**(code **)(local_198->_padding_ + 0x30))();
                puVar20 = FLargeMemoryWriter::GetData(local_198);
                (*pcVar8)(plVar1,puVar20,uVar19);
                FArchiveStackTraceDisabledScope::~FArchiveStackTraceDisabledScope(local_res10);
                iVar4 = (int)pFVar16->_padding_;
                lVar18 = pFVar16->_padding_;
                lVar23 = (longlong)iVar4 * 0x68 + lVar18;
                while( true ) {
                  if ((int)pFVar16->_padding_ != iVar4) {
                    local_res8[0] = 0;
                    `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_res8);
                  }
                  if (lVar18 == lVar23) break;
                  if (*(longlong *)(lVar18 + 0x40) != 0) {
                    *(longlong *)(lVar18 + 0x28) =
                         *(longlong *)(lVar18 + 0x28) +
                         (longlong)*(int *)((longlong)&pFVar16->_padding_ + 4);
                  }
                  lVar18 = lVar18 + 0x68;
                }
                iVar4 = (int)pFVar16->_padding_;
                lVar23 = pFVar16->_padding_;
                lVar18 = lVar23 + (longlong)iVar4 * 0x48;
                while( true ) {
                  if ((int)pFVar16->_padding_ != iVar4) {
                    local_res18[0] = 0;
                    `TCheckedPointerIterator<FCellExport,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_res18);
                  }
                  if (lVar23 == lVar18) break;
                  if (*(longlong *)(lVar23 + 0x30) != 0) {
                    *(longlong *)(lVar23 + 0x18) =
                         *(longlong *)(lVar23 + 0x18) +
                         (longlong)*(int *)((longlong)&pFVar16->_padding_ + 4);
                  }
                  lVar23 = lVar23 + 0x48;
                }
                EVar12 = param_1->Result;
                bVar22 = local_res20;
              }
              if (local_198 != (FLargeMemoryWriter *)0x0) {
                (**(code **)local_198->_padding_)(local_198,1);
                EVar12 = param_1->Result;
              }
            }
            pEVar25 = local_190;
            EVar24 = local_1a0;
            if (EVar12 == Success) {
              (**(code **)(*plVar1 + 0x88))(plVar1,bVar22);
              pFVar16 = FSaveContext::GetLinker(param_1);
              lVar18 = (**(code **)(pFVar16->_padding_ + 0x28))();
              local_1b8 = lVar18;
              pFVar15 = FText::FText(&local_b8);
              FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
              if (local_b8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
              }
              EVar12 = WriteBulkData(param_1,&local_1b8);
              param_1->Result = EVar12;
              pEVar25 = local_190;
              EVar24 = local_1a0;
              if (EVar12 == Success) {
                pFVar16 = FSaveContext::GetLinker(param_1);
                FLinkerSave::OnPostSaveBulkData(pFVar16);
                pIVar5 = param_1->PackageWriter;
                pFVar15 = FText::FText(&local_a8);
                FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
                if (local_a8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
                }
                pFVar6 = (param_1->SaveArgs).SavePackageContext;
                pFVar16 = FSaveContext::GetLinker(param_1);
                EVar12 = UE::SavePackageUtilities::AppendAdditionalData(pFVar16,&local_1b8,pFVar6);
                if (EVar12 == Success) {
                  pFVar6 = (param_1->SaveArgs).SavePackageContext;
                  if ((((param_1->SaveArgs).SaveFlags & 0x10) != 0) ||
                     (bVar11 = false, param_1->PackageWriter != (IPackageWriter *)0x0)) {
                    bVar11 = true;
                  }
                  pFVar16 = FSaveContext::GetLinker(param_1);
                  EVar12 = UE::SavePackageUtilities::CreatePayloadSidecarFile
                                     (pFVar16,&param_1->TargetPackagePath,bVar11,
                                      &param_1->AdditionalPackageFiles,pFVar6);
                  if (EVar12 == Success) {
                    pFVar15 = FText::FText(&local_98);
                    FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
                    if (local_98.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
                    }
                    EVar12 = WriteAdditionalExportFiles(param_1);
                    if (EVar12 == Success) {
                      param_1->Result = Success;
                      if (pIVar5 == (IPackageWriter *)0x0) {
                        if (param_1->bTextFormat == false) {
                          local_1a4 = 0x9e2a83c1;
                          this = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                                           (&local_1b0);
                          puVar7 = (uint *)**(undefined8 **)&this->field_0x8;
                          if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar7 + 1) {
                            if ((this->field_0x2a & 1) == 0) {
                              (**(code **)(*(longlong *)this + 0x188))(this,&local_1a4,4);
                            }
                            else {
                              FArchive::SerializeByteOrderSwapped(this,&local_1a4);
                            }
                          }
                          else {
                            local_1a4 = *puVar7;
                            **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
                          }
                          local_1b8 = local_1b8 + 4;
                        }
                      }
                      else {
                        lVar23 = (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
                        local_1b8 = local_1b8 + lVar23;
                      }
                      pFVar15 = FText::FText(&local_88);
                      FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
                      if (local_88.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
                      }
                      EVar12 = BuildAndWriteTrailer
                                         (pIVar5,(FStructuredArchiveRecord *)&local_1b0,param_1,
                                          &local_1b8);
                      param_1->Result = EVar12;
                      pEVar25 = local_190;
                      EVar24 = local_1a0;
                      if (EVar12 == Success) {
                        if (pIVar5 != (IPackageWriter *)0x0) {
                          pFVar16 = FSaveContext::GetLinker(param_1);
                          lVar23 = (**(code **)(pFVar16->_padding_ + 0x28))();
                          if ((lVar23 != lVar18) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("SaveContext.GetLinker()->Tell() == EndOfExportsOffset"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                                  ,0xedc,
                                                  L"The writing of additional files is not allowed to append to the LinkerSave when using a PackageWriter."
                                                 ), bVar11)) {
                            pcVar8 = (code *)swi(3);
                            EVar12 = (*pcVar8)();
                            return EVar12;
                          }
                        }
                        if (*local_190 != Optional) {
                          param_1->PackageHeaderAndExportSize = local_1b8;
                        }
                        param_1->TotalPackageSizeUncompressed =
                             param_1->TotalPackageSizeUncompressed + local_1b8;
                        FVar21 = (param_1->AdditionalPackageFiles).AllocatorInstance.SecondaryData;
                        iVar4 = (param_1->AdditionalPackageFiles).ArrayNum;
                        if (FVar21 == (ForElementType<FSavePackageOutputFile>)0x0) {
                          FVar21 = (ForElementType<FSavePackageOutputFile>)
                                   &param_1->AdditionalPackageFiles;
                        }
                        FVar26 = (ForElementType<FSavePackageOutputFile>)
                                 ((longlong)iVar4 * 0x40 + (longlong)FVar21);
                        while( true ) {
                          if ((param_1->AdditionalPackageFiles).ArrayNum != iVar4) {
                            `TCheckedPointerIterator<FSavePackageOutputFile,int,0>::operator!='::
                            __l2::<lambda_1>::operator()(&local_1a8);
                          }
                          if (FVar21 == FVar26) break;
                          param_1->TotalPackageSizeUncompressed =
                               param_1->TotalPackageSizeUncompressed +
                               *(longlong *)((longlong)FVar21 + 0x38);
                          FVar21 = (ForElementType<FSavePackageOutputFile>)((longlong)FVar21 + 0x40)
                          ;
                        }
                        pFVar15 = FText::FText(&local_78);
                        FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
                        if (local_78.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
                        }
                        EVar12 = UpdatePackageHeader((FStructuredArchiveRecord *)&local_1b0,param_1)
                        ;
                        param_1->Result = EVar12;
                        pEVar25 = local_190;
                        EVar24 = local_1a0;
                        if (EVar12 == Success) {
                          pFVar15 = FText::FText(local_68);
                          FSlowTask::EnterProgressFrame(&local_188,fVar9,pFVar15);
                          if (local_68[0].TextData.Reference != (ITextData *)0x0) {
                            (**(code **)((longlong)*local_68[0].TextData.Reference + 0x10))();
                          }
                          EVar12 = FinalizeFile((FStructuredArchiveRecord *)&local_1b0,param_1);
                          param_1->Result = EVar12;
                          pEVar25 = local_190;
                          EVar24 = local_1a0;
                          if (EVar12 == Success) {
                            if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
                              bVar11 = false;
                            }
                            else {
                              bVar11 = true;
                              FCpuProfilerTrace::GetOrCreateSpecId
                                        (&`SaveHarvestedRealms'::`98'::__CpuProfilerEventSpecId3836,
                                         "UPackage_Save_MarkExportLoaded",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                         ,0xefc);
                              FCpuProfilerTrace::OutputBeginEvent
                                        (`SaveHarvestedRealms'::`98'::__CpuProfilerEventSpecId3836);
                            }
                            pFVar16 = FSaveContext::GetLinker(param_1);
                            iVar4 = (int)pFVar16->_padding_;
                            lVar18 = pFVar16->_padding_;
                            lVar23 = (longlong)iVar4 * 0x68 + lVar18;
                            while( true ) {
                              if ((int)pFVar16->_padding_ != iVar4) {
                                `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::
                                <lambda_1>::operator()(local_1a7);
                              }
                              if (lVar18 == lVar23) break;
                              if (*(UObjectBase **)(lVar18 + 0x40) != (UObjectBase *)0x0) {
                                UObjectBase::AtomicallySetFlags
                                          (*(UObjectBase **)(lVar18 + 0x40),
                                           RF_LoadCompleted|RF_WasLoaded);
                              }
                              lVar18 = lVar18 + 0x68;
                            }
                            if (bVar11) {
                              FCpuProfilerTrace::OutputEndEvent();
                            }
                            EVar12 = param_1->Result;
                            pEVar25 = local_190;
                            EVar24 = local_1a0;
                          }
                        }
                      }
                      goto LAB_1421e3003;
                    }
                  }
                }
                param_1->Result = EVar12;
                pEVar25 = local_190;
                EVar24 = local_1a0;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (EVar12 == EmptyRealm) {
      EVar12 = Success;
    }
    param_1->Result = EVar12;
  }
LAB_1421e3003:
  FSlowTask::Destroy(&local_188);
  if (local_188.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_188.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.DefaultMessage.TextData.Reference + 0x10))();
  }
  *pEVar25 = EVar24;
  return EVar12;
}

// SavePreloadDependencies @ 1421e3360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`anonymous_namespace'::SavePreloadDependencies
          (FStructuredArchiveRecord *param_1,FSaveContext *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  FPackageIndex FVar3;
  longlong lVar4;
  UObject *pUVar5;
  FArchive *pFVar6;
  code *pcVar7;
  FLinkerSave *pFVar8;
  undefined8 uVar9;
  FSaveContext *pFVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  int *piVar12;
  longlong *plVar13;
  bool bVar14;
  undefined4 uVar15;
  FHarvestedRealm *pFVar16;
  FObjectExport *pFVar17;
  UPackage *pUVar18;
  UObjectBase *pUVar19;
  UObject *pUVar20;
  UClass *pUVar21;
  UClass *pUVar22;
  UObject *pUVar23;
  FObjectImport *pFVar24;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *pTVar27;
  TTuple<Verse::VCell_*,FPackageIndex> *pTVar28;
  TTuple<TObjectPtr<UObject>,FPackageIndex> *pTVar29;
  FString *pFVar30;
  byte bVar31;
  uint uVar32;
  ulonglong uVar33;
  ForElementType<FSetElementId> FVar34;
  FLinkerSave *pFVar35;
  wchar_t *pwVar36;
  undefined8 *puVar37;
  FStructuredArchiveRecord FVar38;
  wchar_t *pwVar39;
  int iVar40;
  ForElementType<FSetElementId> FVar41;
  uint *puVar42;
  int iVar43;
  int *piVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint uVar47;
  longlong lVar48;
  uint uVar49;
  ForAnyElementType FVar50;
  undefined1 auStackY_8e8 [32];
  FLinkerSave *local_8a8;
  undefined1 local_8a0;
  undefined1 local_89f;
  undefined1 local_89e;
  undefined1 local_89d;
  undefined1 local_89c;
  undefined1 local_89b;
  undefined1 local_89a;
  undefined1 local_899;
  longlong *local_898;
  undefined8 uStack_890;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  int local_870;
  undefined4 uStack_86c;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_868;
  FPackageIndex local_858;
  FPackageIndex local_854;
  FPackageIndex local_850;
  FPackageIndex local_84c;
  longlong local_848;
  uint local_840;
  uint local_83c;
  FLinkerSave *local_838;
  ForAnyElementType local_830;
  undefined8 local_828;
  undefined1 local_820 [12];
  uint uStack_814;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_810;
  undefined8 uStack_808;
  longlong lStack_800;
  int local_7f8;
  undefined4 uStack_7f4;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_7f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_7e8;
  undefined8 local_7c8;
  undefined4 local_7c0 [2];
  int local_7b8 [2];
  undefined4 local_7b0 [2];
  FSaveContext *local_7a8;
  FStructuredArchiveRecord local_7a0;
  longlong local_798;
  int local_790 [2];
  int local_788;
  uint local_784;
  FLinkerSave *local_780;
  FSaveContext *local_778;
  int local_770 [2];
  int local_768 [2];
  int local_760 [2];
  UObject *local_758;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_750;
  FLinkerSave **local_730;
  longlong local_728;
  TArray<UE::SavePackageUtilities::FPreloadDependency,TSizedDefaultAllocator<32>_> *local_720;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_718;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_698;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_678;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_658;
  UObject *local_638;
  UObject *local_630;
  UObject *local_628;
  UObject *local_620;
  UObject *local_618;
  UObject *local_610;
  UObject *local_608;
  longlong local_600;
  int *local_5f8;
  UObject *local_5f0;
  UObject *local_5e8;
  UObject *local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  TArray<UE::SavePackageUtilities::FPreloadDependency,TSizedDefaultAllocator<32>_> *local_5c8;
  UObject *local_5c0;
  longlong local_5b8;
  FPackageIndex local_5b0;
  FPackageIndex local_5ac;
  FPackageIndex local_5a8;
  FPackageIndex local_5a4;
  FPackageIndex local_5a0;
  int local_59c;
  int local_598;
  int local_594;
  int local_590;
  int local_58c;
  int local_588;
  FPackageIndex local_584;
  FPackageIndex local_580;
  longlong local_57c;
  UObjectBase *local_570;
  undefined1 local_568 [12];
  uint uStack_55c;
  TBitArray<FDefaultBitArrayAllocator> *local_558;
  undefined8 uStack_550;
  longlong local_548;
  int iStack_540;
  undefined4 uStack_53c;
  undefined1 local_538 [12];
  uint uStack_52c;
  TBitArray<FDefaultBitArrayAllocator> *local_528;
  undefined8 uStack_520;
  longlong local_518;
  int iStack_510;
  undefined4 uStack_50c;
  undefined1 local_508 [12];
  uint uStack_4fc;
  TBitArray<FDefaultBitArrayAllocator> *local_4f8;
  undefined8 uStack_4f0;
  longlong local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  longlong *local_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4d0;
  undefined8 uStack_4b0;
  longlong *local_4a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4a0;
  undefined8 uStack_480;
  longlong *local_478;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_470;
  undefined8 uStack_450;
  undefined1 local_448 [12];
  uint uStack_43c;
  TBitArray<FDefaultBitArrayAllocator> *local_438;
  undefined8 uStack_430;
  longlong local_428;
  int iStack_420;
  undefined4 uStack_41c;
  undefined1 local_418 [12];
  uint uStack_40c;
  TBitArray<FDefaultBitArrayAllocator> *local_408;
  undefined8 uStack_400;
  longlong local_3f8;
  undefined8 uStack_3f0;
  TRangedForConstIterator local_3e8;
  TRangedForConstIterator local_3b8;
  TRangedForConstIterator local_388;
  TRangedForConstIterator local_358;
  TRangedForIterator local_328;
  TRangedForIterator local_2f8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_278;
  undefined4 local_23c;
  undefined4 local_21c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b8;
  undefined4 local_17c;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [32];
  undefined8 local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined1 local_f0 [8];
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  local_7a8 = param_2;
  local_8a8 = FSaveContext::GetLinker(param_2);
  pFVar16 = FSaveContext::GetHarvestedRealm(param_2,None);
  pFVar35 = local_8a8;
  local_5c8 = &pFVar16->PreloadDependencies;
  local_838 = local_8a8;
  local_780 = local_8a8;
  local_778 = param_2;
  uVar15 = (**(code **)(local_8a8->_padding_ + 0x28))();
  *(undefined4 *)((longlong)&local_8a8->_padding_ + 4) = uVar15;
  *(undefined4 *)&local_8a8->_padding_ = 0xffffffff;
  if ((param_2->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
    local_868.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&local_8a8->_padding_ = 0;
    FVar38 = *param_1;
    local_868.ArrayNum = 0;
    local_868.ArrayMax = 0;
    local_830.Data = (FScriptContainerElement *)0x0;
    local_828 = 0;
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    local_b8 = (uint *)0x0;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = (ForElementType<FSetElementId>)0x0;
    local_90 = 0;
    local_128._0_8_ = (FScriptContainerElement *)0x0;
    local_128._8_8_ = 0;
    local_108 = 0;
    local_100 = 0;
    local_fc = 0x80;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = (ForElementType<FSetElementId>)0x0;
    local_e0 = 0;
    local_178._0_8_ = (FScriptContainerElement *)0x0;
    local_178._8_8_ = 0;
    local_158 = (uint *)0x0;
    local_150 = 0;
    local_14c = 0x80;
    local_148 = 0xffffffff;
    local_144 = 0;
    local_138 = (ForElementType<FSetElementId>)0x0;
    local_130 = 0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_840 = 0;
    local_7a0 = FVar38;
    if (0 < (int)local_8a8->_padding_) {
      local_798 = 0;
      do {
        lVar48 = local_798;
        pFVar8 = local_8a8;
        local_83c = ~local_840 >> 0x1f;
        uVar32 = 0;
        if ((int)local_840 < (int)local_8a8->_padding_) {
          uVar32 = local_83c;
        }
        if ((uVar32 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar48 = lVar48 * 0x68 + pFVar8->_padding_;
        local_848 = lVar48;
        if ((*(longlong *)(lVar48 + 0x40) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Export.Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                ,0x75c,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_d8._8_4_ != local_a4) {
          TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                     local_d8);
          uVar9 = local_d8._8_8_;
          uVar15 = local_d8._12_4_;
          local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
          if (((longlong)uVar9 < 0) && (uVar15 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
          }
          local_a8 = 0xffffffff;
          local_a4 = 0;
          local_b0 = 0;
        }
        local_770[0] = *(int *)(lVar48 + 0xc);
        if (local_770[0] != 0) {
          if (local_770[0] < 1) {
            pFVar24 = FLinkerTables::Imp((FLinkerTables *)&pFVar35->_padding_,
                                         (FPackageIndex)local_770[0]);
            pUVar20 = pFVar24->XObject;
          }
          else {
            pFVar17 = FLinkerTables::Exp((FLinkerTables *)&pFVar35->_padding_,
                                         (FPackageIndex)local_770[0]);
            pUVar20 = pFVar17->Object;
          }
          if (((pUVar20 != (UObject *)0x0) &&
              (pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar20),
              pUVar18 != (UPackage *)0x0)) &&
             (lVar4 = pUVar18->_padding_, FLazyName::Resolve(&GLongCoreUObjectPackageName),
             lVar4 != local_57c)) {
            TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
            Emplace<FPackageIndex_const_&>
                      ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                       local_d8,&local_5b0,(bool *)local_770);
          }
        }
        pUVar19 = (UObjectBase *)UObject::GetArchetype(*(UObject **)(lVar48 + 0x40));
        pUVar20 = *(UObject **)(lVar48 + 0x40);
        local_570 = pUVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObjectBase *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar19);
        }
        ``anonymous_namespace'::SavePreloadDependencies'::__l2::<lambda_1>::operator()
                  (&local_780,1,
                   (TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                   local_d8,(TObjectPtr<UObject>)&local_570,pUVar20,true,false);
        uVar9 = local_868._8_8_;
        iVar40 = local_868.ArrayMax;
        local_868._8_8_ = (ulonglong)(uint)local_868.ArrayMax << 0x20;
        if (((longlong)uVar9 < 0) && (iVar40 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_868.AllocatorInstance,0,&local_868.ArrayMax);
        }
        GetObjectsWithOuter(pUVar19,&local_868,true,RF_NoFlags,Borrowed);
        pFVar10 = local_7a8;
        lVar48 = local_848;
        iVar40 = local_868.ArrayNum;
        uVar33 = (ulonglong)local_868.ArrayNum;
        pFVar2 = local_868.AllocatorInstance.Data + uVar33 * 8;
        FVar50.Data = local_868.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar33 != iVar40) {
            local_8a0 = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_8a0);
          }
          pFVar35 = local_838;
          if (FVar50.Data == pFVar2) break;
          pUVar20 = *(UObject **)FVar50.Data;
          if ((*(uint *)&(*(UObject **)FVar50.Data)->field_0x8 & 0x40020) != 0) {
            do {
              pUVar23 = pUVar20;
              local_638 = pUVar23;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar23 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar23);
              }
              bVar14 = FSaveContext::IsTransient(pFVar10,(TObjectPtr<UObject>)&local_638);
            } while ((bVar14) &&
                    (pUVar20 = UObject::GetArchetype(pUVar23),
                    (*(uint *)(*(longlong *)&pUVar20->field_0x10 + 0xd4) & 0x10000080) == 0));
            if ((pUVar23 != (UObject *)0x0) && ((*(uint *)&pUVar23->field_0x8 >> 0x1e & 1) == 0)) {
              pUVar20 = *(UObject **)(lVar48 + 0x40);
              local_630 = pUVar23;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar23);
              }
              ``anonymous_namespace'::SavePreloadDependencies'::__l2::<lambda_1>::operator()
                        (&local_780,2,
                         (TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>
                          *)local_d8,(TObjectPtr<UObject>)&local_630,pUVar20,false,false);
            }
          }
          uVar33 = local_868._8_8_ & 0xffffffff;
          FVar50.Data = FVar50.Data + 8;
        }
        if (local_128._8_4_ != local_f4) {
          TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                     local_128);
          uVar9 = local_128._8_8_;
          uVar15 = local_128._12_4_;
          local_128._8_8_ = (ulonglong)(uint)local_128._12_4_ << 0x20;
          if (((longlong)uVar9 < 0) && (uVar15 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
          }
          local_f8 = 0xffffffff;
          local_f4 = 0;
          local_100 = 0;
        }
        uVar33 = local_828;
        uVar32 = local_828._4_4_;
        local_828 = (ulonglong)local_828._4_4_ << 0x20;
        if (((longlong)uVar33 < 0) && (uVar32 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_830,0,(int *)((longlong)&local_828 + 4));
        }
        (**(code **)(**(longlong **)(lVar48 + 0x40) + 0x140))
                  (*(longlong **)(lVar48 + 0x40),&local_830);
        iVar40 = (int)local_828;
        uVar33 = (ulonglong)(int)local_828;
        pFVar2 = local_830.Data + uVar33 * 8;
        FVar50.Data = local_830.Data;
        while( true ) {
          if ((int)uVar33 != iVar40) {
            local_89f = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_89f);
          }
          if (FVar50.Data == pFVar2) break;
          local_628 = *(UObject **)FVar50.Data;
          pUVar20 = *(UObject **)(lVar48 + 0x40);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_628 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_628);
          }
          ``anonymous_namespace'::SavePreloadDependencies'::__l2::<lambda_1>::operator()
                    (&local_780,3,
                     (TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                     local_128,(TObjectPtr<UObject>)&local_628,pUVar20,false,true);
          uVar33 = local_828 & 0xffffffff;
          FVar50.Data = FVar50.Data + 8;
        }
        if ((*(uint *)(*(longlong *)(lVar48 + 0x40) + 8) & 0x30) != 0) {
          pUVar20 = *(UObject **)(*(longlong *)(lVar48 + 0x40) + 0x20);
          pUVar21 = Z_Construct_UClass_UPackage_NoRegister();
          iVar40 = (int)pUVar21->_padding_;
          if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar40) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar40 * 8) !=
              &pUVar21->_padding_)) {
            pUVar23 = *(UObject **)(lVar48 + 0x40);
            local_620 = pUVar20;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar20);
            }
            ``anonymous_namespace'::SavePreloadDependencies'::__l2::<lambda_1>::operator()
                      (&local_780,4,
                       (TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                       local_128,(TObjectPtr<UObject>)&local_620,pUVar23,true,false);
          }
        }
        lVar4 = *(longlong *)(lVar48 + 0x40);
        pUVar21 = Z_Construct_UClass_UClass_NoRegister();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        iVar40 = (int)pUVar21->_padding_;
        lVar45 = lVar48;
        if ((iVar40 <= *(int *)(lVar4 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar40 * 8) ==
            &pUVar21->_padding_)) {
          pUVar21 = *(UClass **)(lVar48 + 0x40);
          if (pUVar21 == (UClass *)0x0) {
            pFVar30 = GetTypeName<UClass>(&local_2a8);
            if ((pFVar30->Data).ArrayNum == 0) {
              pwVar36 = L"";
            }
            else {
              pwVar36 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar36);
          }
          pUVar22 = Z_Construct_UClass_UClass_NoRegister();
          iVar40 = (int)pUVar22->_padding_;
          if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar40) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar40 * 8) !=
              &pUVar22->_padding_)) {
            pFVar30 = GetTypeName<UClass>(&local_2c8);
            pwVar36 = L"";
            if ((pFVar30->Data).ArrayNum == 0) {
              pwVar39 = L"";
            }
            else {
              pwVar39 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
            }
            pFVar30 = GetFullNameForCastLogError<UObject>(&local_2b8,(UObject *)pUVar21);
            if ((pFVar30->Data).ArrayNum != 0) {
              pwVar36 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar36,pwVar39);
          }
          if ((pUVar21->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar21);
          }
          uVar9 = local_868._8_8_;
          iVar40 = local_868.ArrayMax;
          pUVar19 = (UObjectBase *)(pUVar21->ClassDefaultObject).field0_0x0.DebugPtr;
          local_868._8_8_ = (ulonglong)(uint)local_868.ArrayMax << 0x20;
          if (((longlong)uVar9 < 0) && (iVar40 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_868.AllocatorInstance,0,&local_868.ArrayMax);
          }
          GetObjectsWithOuter(pUVar19,&local_868,true,RF_NoFlags,Borrowed);
          pFVar10 = local_7a8;
          iVar40 = local_868.ArrayNum;
          uVar33 = (ulonglong)local_868.ArrayNum;
          pFVar2 = local_868.AllocatorInstance.Data + uVar33 * 8;
          FVar50.Data = local_868.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar33 != iVar40) {
              local_89e = 0;
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_89e);
            }
            pFVar35 = local_838;
            lVar45 = local_848;
            if (FVar50.Data == pFVar2) break;
            pUVar20 = *(UObject **)FVar50.Data;
            if ((*(uint *)&pUVar20->field_0x8 & 0x40020) == 0) {
LAB_1421e3d4a:
              uVar33 = local_868._8_8_ & 0xffffffff;
              FVar50.Data = FVar50.Data + 8;
            }
            else {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar20 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar20);
              }
              pFVar16 = FSaveContext::GetHarvestedRealm(pFVar10,None);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar20 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar20);
              }
              local_618 = pUVar20;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar20 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar20);
              }
              bVar14 = FHarvestedRealm::IsImport(pFVar16,(TObjectPtr<UObject>)&local_618);
              if (bVar14) {
LAB_1421e3ca1:
                pUVar20 = UObject::GetArchetype(pUVar20);
                do {
                  pUVar23 = pUVar20;
                  local_610 = pUVar23;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar23 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar23);
                  }
                  bVar14 = FSaveContext::IsTransient(pFVar10,(TObjectPtr<UObject>)&local_610);
                } while ((bVar14) &&
                        (pUVar20 = UObject::GetArchetype(pUVar23),
                        (*(uint *)(*(longlong *)&pUVar20->field_0x10 + 0xd4) & 0x10000080) == 0));
                if ((pUVar23 != (UObject *)0x0) && ((*(uint *)&pUVar23->field_0x8 >> 0x1e & 1) == 0)
                   ) {
                  pUVar20 = *(UObject **)(lVar48 + 0x40);
                  local_608 = pUVar23;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar23);
                  }
                  ``anonymous_namespace'::SavePreloadDependencies'::__l2::<lambda_1>::operator()
                            (&local_780,5,
                             (TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>
                              *)local_128,(TObjectPtr<UObject>)&local_608,pUVar20,false,false);
                }
                goto LAB_1421e3d4a;
              }
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (pUVar20 != (UObject *)0x0) {
                  UE::GC::MarkAsReachable(pUVar20);
                }
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  if (pUVar20 != (UObject *)0x0) {
                    UE::GC::MarkAsReachable(pUVar20);
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar20 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar20);
                  }
                }
              }
              uVar32 = ((uint)((ulonglong)pUVar20 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pUVar20 >> 4)) * -0x7a143595;
              uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb;
              if (*(int *)&(pFVar16->Exports).Elements.field_0x8 ==
                  *(int *)&(pFVar16->Exports).Elements.field_0x34) goto LAB_1421e3d4a;
              FVar41 = (pFVar16->Exports).Hash.SecondaryData;
              FVar34 = (ForElementType<FSetElementId>)&(pFVar16->Exports).Hash;
              if (FVar41 != (ForElementType<FSetElementId>)0x0) {
                FVar34 = FVar41;
              }
              iVar43 = *(int *)((longlong)FVar34 +
                               (ulonglong)
                               ((pFVar16->Exports).HashSize - 1U & (uVar32 >> 0x10 ^ uVar32)) * 4);
              if (iVar43 == -1) goto LAB_1421e3d4a;
              lVar4 = *(longlong *)&(pFVar16->Exports).Elements;
              do {
                if (*(UObject **)(lVar4 + (longlong)iVar43 * 0x18) == pUVar20) goto LAB_1421e3ca1;
                iVar43 = *(int *)(lVar4 + 0x10 + (longlong)iVar43 * 0x18);
              } while (iVar43 != -1);
              uVar33 = local_868._8_8_ & 0xffffffff;
              FVar50.Data = FVar50.Data + 8;
            }
          }
        }
        if (local_178._8_4_ != local_144) {
          TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                     local_178);
          uVar9 = local_178._8_8_;
          uVar15 = local_178._12_4_;
          local_178._8_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
          if (((longlong)uVar9 < 0) && (uVar15 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
          }
          local_148 = 0xffffffff;
          local_144 = 0;
          local_150 = 0;
        }
        pUVar23 = (UObject *)0x0;
        pUVar21 = *(UClass **)(lVar45 + 0x40);
        pUVar20 = pUVar23;
        if (pUVar21 != (UClass *)0x0) {
          pUVar22 = Z_Construct_UClass_UClass_NoRegister();
          iVar40 = (int)pUVar22->_padding_;
          if ((iVar40 <= *(int *)(pUVar21->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar40 * 8) ==
              &pUVar22->_padding_)) {
            if ((pUVar21->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(pUVar21);
            }
            pUVar20 = (pUVar21->ClassDefaultObject).field0_0x0.DebugPtr;
          }
        }
        pFVar8 = local_8a8;
        if ((int)local_840 < (int)local_8a8->_padding_) {
          pUVar23 = (UObject *)(ulonglong)local_83c;
        }
        local_758 = pUVar20;
        if (((int)pUVar23 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar37 = (undefined8 *)(local_798 * 0x10 + pFVar8->_padding_);
        local_83c = *(uint *)(puVar37 + 1);
        uVar33 = (ulonglong)(int)local_83c;
        piVar44 = (int *)*puVar37;
        local_5f8 = piVar44 + uVar33;
        while( true ) {
          piVar12 = local_5f8;
          if (*(int *)(puVar37 + 1) != (int)uVar33) {
            local_89d = 0;
            `TCheckedPointerIterator<FPackageIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_89d);
          }
          pFVar10 = local_7a8;
          pFVar8 = local_8a8;
          if (piVar44 == piVar12) break;
          FVar3.Index = *piVar44;
          if (FVar3.Index < 1) {
            if (((-1 < FVar3.Index) || (-1 - FVar3.Index < 0)) ||
               ((int)local_8a8->_padding_ <= -1 - FVar3.Index)) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                  ,0x8c,L"");
              if (bVar14) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((-1 < FVar3.Index) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsImport()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                      ,0x55,L""), bVar14)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            uVar47 = -FVar3.Index - 1;
            uVar32 = 0;
            if ((int)uVar47 < (int)pFVar8->_padding_) {
              uVar32 = ~uVar47 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar23 = *(UObject **)((longlong)(int)uVar47 * 0x38 + 0x28 + pFVar8->_padding_);
          }
          else {
            uVar32 = FVar3.Index - 1;
            if ((((int)uVar32 < 0) || ((int)local_8a8->_padding_ <= (int)uVar32)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                    ,0xaa,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar47 = 0;
            if ((int)uVar32 < (int)pFVar8->_padding_) {
              uVar47 = ~uVar32 >> 0x1f;
            }
            if ((uVar47 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar23 = *(UObject **)((longlong)(int)uVar32 * 0x68 + 0x40 + pFVar8->_padding_);
          }
          pUVar20 = local_758;
          if ((pUVar23 != local_758) && (local_768[0] = FVar3.Index, FVar3.Index != 0)) {
            if (FVar3.Index < 1) {
              pFVar24 = FLinkerTables::Imp((FLinkerTables *)&pFVar35->_padding_,FVar3);
              pUVar23 = pFVar24->XObject;
            }
            else {
              pFVar17 = FLinkerTables::Exp((FLinkerTables *)&pFVar35->_padding_,FVar3);
              pUVar23 = pFVar17->Object;
            }
            if (((pUVar23 != (UObject *)0x0) &&
                (pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar23),
                pUVar18 != (UPackage *)0x0)) &&
               (lVar48 = pUVar18->_padding_, FLazyName::Resolve(&GLongCoreUObjectPackageName),
               lVar48 != local_600)) {
              TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
              Emplace<FPackageIndex_const_&>
                        ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>
                          *)local_178,&local_5ac,(bool *)local_768);
            }
          }
          uVar33 = (ulonglong)local_83c;
          piVar44 = piVar44 + 1;
        }
        pFVar16 = FSaveContext::GetHarvestedRealm(local_7a8,None);
        FVar38 = local_7a0;
        lVar48 = local_848;
        pUVar23 = *(UObject **)(local_848 + 0x40);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar23);
        }
        local_5f0 = pUVar23;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar23);
        }
        pTVar25 = TMapBase<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
                  ::FindChecked((TMapBase<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
                                 *)&pFVar16->ExportNativeObjectDependencies,
                                (TObjectPtr<UObject_const_>)&local_5f0);
        local_718._padding_._4_4_ = 1;
        local_718.UnvisitedBitMask = 0xffffffff;
        puVar1 = &(pTVar25->Elements).field_0x10;
        local_718._padding_._0_4_ = 0;
        local_718.CurrentBitIndex = 0;
        local_718.BaseBitIndex = 0;
        local_718.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (*(int *)&(pTVar25->Elements).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_718);
        }
        TStack_7e8._padding_ = CONCAT44(local_718._padding_._4_4_,(undefined4)local_718._padding_);
        TStack_7e8._16_8_ = CONCAT44(local_718.CurrentBitIndex,local_718.UnvisitedBitMask);
        TStack_7e8._24_8_ = CONCAT44(local_718._28_4_,local_718.BaseBitIndex);
        iStack_510 = *(int *)&(pTVar25->Elements).field_0x8 -
                     *(int *)&(pTVar25->Elements).field_0x34;
        TStack_7e8.Array = local_718.Array;
        local_7c8._0_4_ = iStack_510;
        local_528 = local_718.Array;
        uStack_50c = local_7c8._4_4_;
        local_7f0 = pTVar25;
        local_538._0_8_ = pTVar25;
        unique0x1000469a = TStack_7e8._padding_;
        uStack_520 = TStack_7e8._16_8_;
        local_518 = TStack_7e8._24_8_;
        pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_298,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                             *(int *)&(pTVar25->Elements).field_0x28);
        TStack_7e8._padding_ = pTVar26->_padding_;
        TStack_7e8.Array = pTVar26->Array;
        TStack_7e8.UnvisitedBitMask = pTVar26->UnvisitedBitMask;
        TStack_7e8.CurrentBitIndex = pTVar26->CurrentBitIndex;
        TStack_7e8._24_8_ = *(undefined8 *)&pTVar26->BaseBitIndex;
        local_3e8.InitialNum =
             *(int *)&(pTVar25->Elements).field_0x8 - *(int *)&(pTVar25->Elements).field_0x34;
        local_7c8._0_4_ = local_3e8.InitialNum;
        local_3e8._44_4_ = local_7c8._4_4_;
        local_7f0 = pTVar25;
        local_3e8._padding_ = (longlong)pTVar25;
        local_3e8._padding_ = TStack_7e8._padding_;
        local_3e8._padding_ = (longlong)TStack_7e8.Array;
        local_3e8._padding_ = TStack_7e8._16_8_;
        local_3e8._padding_ = TStack_7e8._24_8_;
        bVar14 = TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_538,&local_3e8);
        if (bVar14) {
          do {
            pUVar23 = *(UObject **)
                       (*(longlong *)
                         (TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_538._0_8_ + (longlong)uStack_520._4_4_ * 0x10);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar23 != (UObject *)0x0) goto LAB_1421e424f;
LAB_1421e446f:
              bVar14 = pUVar20 == (UObject *)0x0;
            }
            else {
              if (pUVar23 == (UObject *)0x0) goto LAB_1421e446f;
              UE::GC::MarkAsReachable(pUVar23);
LAB_1421e424f:
              bVar14 = pUVar23 == pUVar20;
            }
            if (!bVar14) {
              pUVar5 = *(UObject **)(lVar48 + 0x40);
              local_5e8 = pUVar23;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar23 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar23);
              }
              ``anonymous_namespace'::SavePreloadDependencies'::__l2::<lambda_1>::operator()
                        (&local_780,6,
                         (TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>
                          *)local_178,(TObjectPtr<UObject>)&local_5e8,pUVar5,false,true);
            }
            uStack_520 = CONCAT44(uStack_520._4_4_,(uint)uStack_520 & ~uStack_52c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_538 + 8));
            bVar14 = TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_538,&local_3e8);
          } while (bVar14);
        }
        pFVar16 = FSaveContext::GetHarvestedRealm(pFVar10,None);
        pUVar20 = *(UObject **)(lVar48 + 0x40);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar20);
        }
        local_5e0 = pUVar20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar20);
        }
        pTVar27 = TMapBase<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
                  ::FindChecked((TMapBase<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
                                 *)&pFVar16->ExportCellDependencies,
                                (TObjectPtr<UObject_const_>)&local_5e0);
        local_6f8._padding_._4_4_ = 1;
        local_6f8._padding_._0_4_ = 0;
        local_6f8.UnvisitedBitMask = 0xffffffff;
        puVar1 = &(pTVar27->Elements).field_0x10;
        local_6f8.CurrentBitIndex = 0;
        local_6f8.BaseBitIndex = 0;
        local_6f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (*(int *)&(pTVar27->Elements).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6f8);
        }
        TStack_7e8._padding_ = CONCAT44(local_6f8._padding_._4_4_,(undefined4)local_6f8._padding_);
        TStack_7e8._16_8_ = CONCAT44(local_6f8.CurrentBitIndex,local_6f8.UnvisitedBitMask);
        TStack_7e8._24_8_ = CONCAT44(local_6f8._28_4_,local_6f8.BaseBitIndex);
        iStack_4e0 = *(int *)&(pTVar27->Elements).field_0x8 -
                     *(int *)&(pTVar27->Elements).field_0x34;
        TStack_7e8.Array = local_6f8.Array;
        local_7c8._0_4_ = iStack_4e0;
        local_4f8 = local_6f8.Array;
        uStack_4dc = local_7c8._4_4_;
        local_7f0 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                     *)pTVar27;
        local_508._0_8_ = pTVar27;
        unique0x100046ba = TStack_7e8._padding_;
        uStack_4f0 = TStack_7e8._16_8_;
        local_4e8 = TStack_7e8._24_8_;
        pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_278,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                             *(int *)&(pTVar27->Elements).field_0x28);
        TStack_7e8._padding_ = pTVar26->_padding_;
        TStack_7e8.Array = pTVar26->Array;
        TStack_7e8.UnvisitedBitMask = pTVar26->UnvisitedBitMask;
        TStack_7e8.CurrentBitIndex = pTVar26->CurrentBitIndex;
        TStack_7e8._24_8_ = *(undefined8 *)&pTVar26->BaseBitIndex;
        local_3b8.InitialNum =
             *(int *)&(pTVar27->Elements).field_0x8 - *(int *)&(pTVar27->Elements).field_0x34;
        local_7c8._0_4_ = local_3b8.InitialNum;
        local_3b8._44_4_ = local_7c8._4_4_;
        local_7f0 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                     *)pTVar27;
        local_3b8._padding_ = (longlong)pTVar27;
        local_3b8._padding_ = TStack_7e8._padding_;
        local_3b8._padding_ = (longlong)TStack_7e8.Array;
        local_3b8._padding_ = TStack_7e8._16_8_;
        local_3b8._padding_ = TStack_7e8._24_8_;
        bVar14 = TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_508,&local_3b8);
        if (bVar14) {
          do {
            pTVar28 = TSet<TTuple<Verse::VCell_*,FPackageIndex>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,FPackageIndex,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<Verse::VCell_*,FPackageIndex>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,FPackageIndex,0>,FDefaultSetAllocator>
                              *)&local_8a8->CellIndicesMap,
                             *(VCell **)
                              (*(longlong *)
                                (TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_508._0_8_ + (longlong)uStack_4f0._4_4_ * 0x10));
            if (pTVar28 == (TTuple<Verse::VCell_*,FPackageIndex> *)0x0) {
              local_7c0[0] = 0;
            }
            else {
              local_7c0[0] = *(undefined4 *)&pTVar28->field_0x8;
            }
            TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
            Emplace<FPackageIndex_const_&>
                      ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                       local_178,&local_5a8,(bool *)local_7c0);
            uStack_4f0 = CONCAT44(uStack_4f0._4_4_,(uint)uStack_4f0 & ~uStack_4fc);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_508 + 8));
            bVar14 = TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_508,&local_3b8);
          } while (bVar14);
        }
        if (local_88._8_4_ != local_54) {
          TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                     local_88);
          uVar9 = local_88._8_8_;
          uVar15 = local_88._12_4_;
          local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
          if (((longlong)uVar9 < 0) && (uVar15 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
          }
          local_58 = 0xffffffff;
          local_54 = 0;
          local_60 = 0;
        }
        local_760[0] = *(int *)(lVar48 + 8);
        if (local_760[0] != 0) {
          if (local_760[0] < 1) {
            pFVar24 = FLinkerTables::Imp((FLinkerTables *)&pFVar35->_padding_,
                                         (FPackageIndex)local_760[0]);
            pUVar20 = pFVar24->XObject;
          }
          else {
            pFVar17 = FLinkerTables::Exp((FLinkerTables *)&pFVar35->_padding_,
                                         (FPackageIndex)local_760[0]);
            pUVar20 = pFVar17->Object;
          }
          if (((pUVar20 != (UObject *)0x0) &&
              (pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar20),
              pUVar18 != (UPackage *)0x0)) &&
             (lVar4 = pUVar18->_padding_, FLazyName::Resolve(&GLongCoreUObjectPackageName),
             lVar4 != local_5d8)) {
            TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
            Emplace<FPackageIndex_const_&>
                      ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                       local_88,&local_5a4,(bool *)local_760);
          }
        }
        local_790[0] = *(int *)(lVar48 + 0x14);
        if (local_790[0] != 0) {
          if (local_790[0] < 1) {
            pFVar24 = FLinkerTables::Imp((FLinkerTables *)&pFVar35->_padding_,
                                         (FPackageIndex)local_790[0]);
            pUVar20 = pFVar24->XObject;
          }
          else {
            pFVar17 = FLinkerTables::Exp((FLinkerTables *)&pFVar35->_padding_,
                                         (FPackageIndex)local_790[0]);
            pUVar20 = pFVar17->Object;
          }
          if (((pUVar20 != (UObject *)0x0) &&
              (pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar20),
              pUVar18 != (UPackage *)0x0)) &&
             (lVar4 = pUVar18->_padding_, FLazyName::Resolve(&GLongCoreUObjectPackageName),
             lVar4 != local_5d0)) {
            TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
            Emplace<FPackageIndex_const_&>
                      ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                       local_88,&local_5a0,(bool *)local_790);
          }
        }
        local_730 = &local_8a8;
        local_720 = local_5c8;
        local_6d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
        local_728 = lVar48;
        local_6d8._padding_._0_4_ = 0;
        local_6d8._padding_._4_4_ = 1;
        local_6d8.UnvisitedBitMask = 0xffffffff;
        local_6d8.CurrentBitIndex = 0;
        local_6d8.BaseBitIndex = 0;
        if (local_100 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6d8);
        }
        uVar32 = local_100;
        uStack_890 = CONCAT44(local_6d8._padding_._4_4_,(undefined4)local_6d8._padding_);
        local_898 = (longlong *)local_128;
        uStack_880._4_4_ = local_6d8.CurrentBitIndex;
        uStack_880._0_4_ = local_6d8.UnvisitedBitMask;
        uStack_878._4_4_ = local_6d8._28_4_;
        uStack_878._0_4_ = local_6d8.BaseBitIndex;
        local_750.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
        local_870 = local_128._8_4_ - local_f4;
        bVar31 = (byte)local_100 & 0x1f;
        local_750._padding_._0_4_ = (int)local_100 >> 5;
        local_750._padding_._4_4_ = 1 << bVar31;
        local_750.UnvisitedBitMask = -1 << bVar31;
        pTStack_888 = local_6d8.Array;
        local_750.BaseBitIndex = local_100 & 0xffffffe0;
        local_750.CurrentBitIndex = local_100;
        local_7c8 = CONCAT44(uStack_86c,local_870);
        TStack_7e8.Array = local_6d8.Array;
        local_7f0 = (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                     *)local_898;
        TStack_7e8._padding_ = uStack_890;
        TStack_7e8._16_8_ = uStack_880;
        TStack_7e8._24_8_ = uStack_878;
        if (((int)local_100 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar32 != local_100) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_750);
        }
        iVar40 = local_750.CurrentBitIndex;
        pTVar11 = local_750.Array;
        uStack_890 = CONCAT44(local_750._padding_._4_4_,(int)local_750._padding_);
        uStack_880 = CONCAT44(local_750.CurrentBitIndex,local_750.UnvisitedBitMask);
        uStack_878 = CONCAT44(local_750._28_4_,local_750.BaseBitIndex);
        pTStack_888 = local_750.Array;
        while( true ) {
          pTVar25 = local_7f0;
          if ((int)*(longlong *)((longlong)local_7f0 + 8) - *(int *)((longlong)local_7f0 + 0x34) !=
              (int)local_7c8) {
            local_89c = 0;
            `TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_89c);
          }
          uVar32 = local_150;
          if (((TStack_7e8.CurrentBitIndex == iVar40) && (TStack_7e8.Array == pTVar11)) &&
             (pTVar25 ==
              (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               *)local_128)) break;
          local_858.Index =
               *(uint *)(*(longlong *)pTVar25 + (longlong)TStack_7e8.CurrentBitIndex * 0xc);
          if (local_d8._8_4_ != local_a4) {
            FVar41 = (ForElementType<FSetElementId>)local_a0;
            if (local_98 != (ForElementType<FSetElementId>)0x0) {
              FVar41 = local_98;
            }
            for (iVar43 = *(int *)((longlong)FVar41 +
                                  (ulonglong)(local_90 - 1U & local_858.Index) * 4); iVar43 != -1;
                iVar43 = *(int *)(local_d8._0_8_ + (longlong)iVar43 * 0xc + 4)) {
              if (*(uint *)(local_d8._0_8_ + (longlong)iVar43 * 0xc) == local_858.Index)
              goto LAB_1421e4900;
            }
          }
          if ((*(int *)(lVar48 + 0x54) == -1) &&
             (((((*(int *)(lVar48 + 0x54) = (int)local_8a8->_padding_, *(int *)(lVar48 + 0x58) != 0
                 || (*(int *)(lVar48 + 0x5c) != 0)) || (*(int *)(lVar48 + 0x60) != 0)) ||
               (*(int *)(lVar48 + 100) != 0)) &&
              (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Export.SerializationBeforeSerializationDependencies == 0 && Export.CreateBeforeSerializationDependencies == 0 && Export.SerializationBeforeCreateDependencies == 0 && Export.CreateBeforeCreateDependencies == 0"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                   ,0x83a,L""), bVar14)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)&local_8a8->_padding_ = (int)local_8a8->_padding_ + 1;
          *(int *)(lVar48 + 0x58) = *(int *)(lVar48 + 0x58) + 1;
          pFVar6 = *(FArchive **)(*(longlong *)FVar38 + 8);
          piVar44 = (int *)**(undefined8 **)&pFVar6->field_0x8;
          if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar44 + 1) {
            if ((pFVar6->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_858,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&local_858);
            }
          }
          else {
            local_858.Index = *piVar44;
            **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
          }
          ``anonymous_namespace'::SavePreloadDependencies'::__l7::<lambda_3>::operator()
                    (&local_730,true,local_858,true);
LAB_1421e4900:
          TStack_7e8.UnvisitedBitMask = TStack_7e8.UnvisitedBitMask & ~TStack_7e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_7e8);
        }
        iVar40 = 0;
        uStack_878._0_4_ = 0;
        uVar47 = 1;
        uStack_880._4_4_ = 0;
        if (local_150 != 0) {
          puVar42 = (uint *)(local_178 + 0x10);
          if (local_158 != (uint *)0x0) {
            puVar42 = local_158;
          }
          uVar49 = *puVar42;
          while (uVar49 == 0) {
            iVar40 = iVar40 + 1;
            uStack_878._0_4_ = (int)uStack_878 + 0x20;
            uStack_880._4_4_ = local_150;
            if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar40)
            goto LAB_1421e49a2;
            uVar49 = puVar42[iVar40];
          }
          uVar47 = -uVar49 & uVar49;
          uVar33 = (ulonglong)uVar47 * 2 + 1;
          lVar48 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar48 == 0; lVar48 = lVar48 + -1) {
            }
          }
          local_59c = (int)lVar48;
          uStack_880._4_4_ = local_59c + -1 + (int)uStack_878;
          if ((int)local_150 < (int)uStack_880._4_4_) {
            uStack_880._4_4_ = local_150;
          }
        }
LAB_1421e49a2:
        local_898 = (longlong *)local_178;
        pTStack_888 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
        uVar49 = local_150 & 0xffffffe0;
        local_870 = local_178._8_4_ - local_144;
        uStack_890 = CONCAT44(uVar47,iVar40);
        uStack_880._0_4_ = 0xffffffff;
        uStack_878._4_4_ = local_23c;
        TStack_4d0._padding_ = uStack_890;
        iVar40 = (int)local_150 >> 5;
        uStack_4b0 = CONCAT44(uStack_86c,local_870);
        bVar31 = (byte)local_150;
        TStack_4d0.UnvisitedBitMask = 0xffffffff;
        TStack_4d0.CurrentBitIndex = uStack_880._4_4_;
        TStack_4d0.BaseBitIndex = (int)uStack_878;
        TStack_4d0._28_4_ = local_23c;
        local_4d8 = local_898;
        TStack_4d0.Array = pTStack_888;
        if (((int)local_150 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar48 = local_848;
        if (uVar32 != local_150) {
          puVar42 = (uint *)(local_178 + 0x10);
          if (local_158 != (uint *)0x0) {
            puVar42 = local_158;
          }
          uVar32 = -1 << (bVar31 & 0x1f) & puVar42[iVar40];
          while (uVar32 == 0) {
            iVar40 = iVar40 + 1;
            uVar49 = uVar49 + 0x20;
            uVar32 = local_150;
            if ((int)(((int)(local_150 - 1) >> 0x1f & 0x1fU) + (local_150 - 1)) >> 5 < iVar40)
            goto LAB_1421e4ae0;
            uVar32 = puVar42[iVar40];
          }
          uVar33 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_598 = (int)lVar4;
          uVar32 = local_598 + -1 + uVar49;
          if ((int)local_150 < (int)uVar32) {
            uVar32 = local_150;
          }
        }
LAB_1421e4ae0:
        while( true ) {
          plVar13 = local_4d8;
          if ((int)local_4d8[1] - *(int *)((longlong)local_4d8 + 0x34) != (int)uStack_4b0) {
            local_89b = 0;
            `TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_89b);
          }
          uVar47 = local_b0;
          if (((TStack_4d0.CurrentBitIndex == uVar32) &&
              (TStack_4d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
             (plVar13 == (longlong *)local_178)) break;
          local_854.Index = *(uint *)(*plVar13 + (longlong)TStack_4d0.CurrentBitIndex * 0xc);
          if (local_d8._8_4_ != local_a4) {
            FVar41 = (ForElementType<FSetElementId>)local_a0;
            if (local_98 != (ForElementType<FSetElementId>)0x0) {
              FVar41 = local_98;
            }
            for (iVar40 = *(int *)((longlong)FVar41 +
                                  (ulonglong)(local_90 - 1U & local_854.Index) * 4); iVar40 != -1;
                iVar40 = *(int *)(local_d8._0_8_ + (longlong)iVar40 * 0xc + 4)) {
              if (*(uint *)(local_d8._0_8_ + (longlong)iVar40 * 0xc) == local_854.Index)
              goto LAB_1421e4d2b;
            }
          }
          if (local_128._8_4_ != local_f4) {
            FVar41 = (ForElementType<FSetElementId>)local_f0;
            if (local_e8 != (ForElementType<FSetElementId>)0x0) {
              FVar41 = local_e8;
            }
            for (iVar40 = *(int *)((longlong)FVar41 +
                                  (ulonglong)(local_e0 - 1U & local_854.Index) * 4); iVar40 != -1;
                iVar40 = *(int *)(local_128._0_8_ + (longlong)iVar40 * 0xc + 4)) {
              if (*(uint *)(local_128._0_8_ + (longlong)iVar40 * 0xc) == local_854.Index)
              goto LAB_1421e4d2b;
            }
          }
          if (local_88._8_4_ != local_54) {
            FVar41 = (ForElementType<FSetElementId>)local_50;
            if (local_48 != (ForElementType<FSetElementId>)0x0) {
              FVar41 = local_48;
            }
            for (iVar40 = *(int *)((longlong)FVar41 +
                                  (ulonglong)(local_40 - 1U & local_854.Index) * 4); iVar40 != -1;
                iVar40 = *(int *)(local_88._0_8_ + (longlong)iVar40 * 0xc + 4)) {
              if (*(uint *)(local_88._0_8_ + (longlong)iVar40 * 0xc) == local_854.Index)
              goto LAB_1421e4d2b;
            }
          }
          if ((*(int *)(lVar48 + 0x54) == -1) &&
             ((((*(int *)(lVar48 + 0x54) = (int)local_8a8->_padding_, *(int *)(lVar48 + 0x58) != 0
                || (*(int *)(lVar48 + 0x5c) != 0)) ||
               ((*(int *)(lVar48 + 0x60) != 0 || (*(int *)(lVar48 + 100) != 0)))) &&
              (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Export.SerializationBeforeSerializationDependencies == 0 && Export.CreateBeforeSerializationDependencies == 0 && Export.SerializationBeforeCreateDependencies == 0 && Export.CreateBeforeCreateDependencies == 0"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                   ,0x852,L""), bVar14)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)&local_8a8->_padding_ = (int)local_8a8->_padding_ + 1;
          *(int *)(lVar48 + 0x5c) = *(int *)(lVar48 + 0x5c) + 1;
          pFVar6 = *(FArchive **)(*(longlong *)FVar38 + 8);
          piVar44 = (int *)**(undefined8 **)&pFVar6->field_0x8;
          if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar44 + 1) {
            if ((pFVar6->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_854,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&local_854);
            }
          }
          else {
            local_854.Index = *piVar44;
            **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
          }
          ``anonymous_namespace'::SavePreloadDependencies'::__l7::<lambda_3>::operator()
                    (&local_730,true,local_854,false);
LAB_1421e4d2b:
          TStack_4d0.UnvisitedBitMask = TStack_4d0.UnvisitedBitMask & ~TStack_4d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4d0);
        }
        iVar40 = 0;
        uStack_878._0_4_ = 0;
        uVar32 = 1;
        uStack_880._4_4_ = 0;
        if (local_b0 != 0) {
          puVar42 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar42 = local_b8;
          }
          uVar49 = *puVar42;
          while (uVar49 == 0) {
            iVar40 = iVar40 + 1;
            uStack_878._0_4_ = (int)uStack_878 + 0x20;
            uStack_880._4_4_ = local_b0;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar40)
            goto LAB_1421e4dd2;
            uVar49 = puVar42[iVar40];
          }
          uVar32 = -uVar49 & uVar49;
          uVar33 = (ulonglong)uVar32 * 2 + 1;
          lVar4 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_594 = (int)lVar4;
          uStack_880._4_4_ = local_594 + -1 + (int)uStack_878;
          if ((int)local_b0 < (int)uStack_880._4_4_) {
            uStack_880._4_4_ = local_b0;
          }
        }
LAB_1421e4dd2:
        local_898 = (longlong *)local_d8;
        pTStack_888 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        uVar49 = local_b0 & 0xffffffe0;
        local_870 = local_d8._8_4_ - local_a4;
        uStack_890 = CONCAT44(uVar32,iVar40);
        uStack_880._0_4_ = 0xffffffff;
        uStack_878._4_4_ = local_17c;
        TStack_4a0._padding_ = uStack_890;
        iVar40 = (int)local_b0 >> 5;
        uStack_480 = CONCAT44(uStack_86c,local_870);
        bVar31 = (byte)local_b0;
        TStack_4a0.UnvisitedBitMask = 0xffffffff;
        TStack_4a0.CurrentBitIndex = uStack_880._4_4_;
        TStack_4a0.BaseBitIndex = (int)uStack_878;
        TStack_4a0._28_4_ = local_17c;
        local_4a8 = local_898;
        TStack_4a0.Array = pTStack_888;
        if (((int)local_b0 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar47 != local_b0) {
          puVar42 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar42 = local_b8;
          }
          uVar32 = -1 << (bVar31 & 0x1f) & puVar42[iVar40];
          while (uVar32 == 0) {
            iVar40 = iVar40 + 1;
            uVar49 = uVar49 + 0x20;
            uVar47 = local_b0;
            if ((int)(((int)(local_b0 - 1) >> 0x1f & 0x1fU) + (local_b0 - 1)) >> 5 < iVar40)
            goto LAB_1421e4f10;
            uVar32 = puVar42[iVar40];
          }
          uVar33 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_590 = (int)lVar4;
          uVar47 = local_590 + -1 + uVar49;
          if ((int)local_b0 < (int)uVar47) {
            uVar47 = local_b0;
          }
        }
LAB_1421e4f10:
        while( true ) {
          plVar13 = local_4a8;
          if ((int)local_4a8[1] - *(int *)((longlong)local_4a8 + 0x34) != (int)uStack_480) {
            local_89a = 0;
            `TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_89a);
          }
          uVar32 = local_60;
          if (((TStack_4a0.CurrentBitIndex == uVar47) &&
              (TStack_4a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
             (plVar13 == (longlong *)local_d8)) break;
          local_850.Index = *(int *)(*plVar13 + (longlong)TStack_4a0.CurrentBitIndex * 0xc);
          if ((*(int *)(lVar48 + 0x54) == -1) &&
             ((((*(int *)(lVar48 + 0x54) = (int)local_8a8->_padding_, *(int *)(lVar48 + 0x58) != 0
                || (*(int *)(lVar48 + 0x5c) != 0)) ||
               ((*(int *)(lVar48 + 0x60) != 0 || (*(int *)(lVar48 + 100) != 0)))) &&
              (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Export.SerializationBeforeSerializationDependencies == 0 && Export.CreateBeforeSerializationDependencies == 0 && Export.SerializationBeforeCreateDependencies == 0 && Export.CreateBeforeCreateDependencies == 0"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                   ,0x85e,L""), bVar14)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)&local_8a8->_padding_ = (int)local_8a8->_padding_ + 1;
          *(int *)(lVar48 + 0x60) = *(int *)(lVar48 + 0x60) + 1;
          pFVar6 = *(FArchive **)(*(longlong *)FVar38 + 8);
          piVar44 = (int *)**(undefined8 **)&pFVar6->field_0x8;
          if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar44 + 1) {
            if ((pFVar6->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_850,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&local_850);
            }
          }
          else {
            local_850.Index = *piVar44;
            **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
          }
          ``anonymous_namespace'::SavePreloadDependencies'::__l7::<lambda_3>::operator()
                    (&local_730,false,local_850,true);
          TStack_4a0.UnvisitedBitMask = TStack_4a0.UnvisitedBitMask & ~TStack_4a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4a0);
        }
        iVar40 = 0;
        iVar43 = 0;
        uVar47 = 1;
        TStack_470.CurrentBitIndex = 0;
        if (local_60 != 0) {
          puVar42 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar42 = local_68;
          }
          uVar49 = *puVar42;
          while (uVar49 == 0) {
            iVar40 = iVar40 + 1;
            iVar43 = iVar43 + 0x20;
            TStack_470.CurrentBitIndex = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar40)
            goto LAB_1421e50e2;
            uVar49 = puVar42[iVar40];
          }
          uVar47 = -uVar49 & uVar49;
          uVar33 = (ulonglong)uVar47 * 2 + 1;
          lVar4 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_58c = (int)lVar4;
          TStack_470.CurrentBitIndex = local_58c + -1 + iVar43;
          if ((int)local_60 < TStack_470.CurrentBitIndex) {
            TStack_470.CurrentBitIndex = local_60;
          }
        }
LAB_1421e50e2:
        local_898 = (longlong *)local_88;
        pTStack_888 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        uVar49 = local_60 & 0xffffffe0;
        local_870 = local_88._8_4_ - local_54;
        uStack_890 = CONCAT44(uVar47,iVar40);
        uStack_880 = CONCAT44(TStack_470.CurrentBitIndex,0xffffffff);
        uStack_878 = CONCAT44(local_21c,iVar43);
        TStack_470._padding_ = uStack_890;
        iVar40 = (int)local_60 >> 5;
        uStack_450 = CONCAT44(uStack_86c,local_870);
        bVar31 = (byte)local_60;
        TStack_470.UnvisitedBitMask = 0xffffffff;
        TStack_470._24_8_ = uStack_878;
        local_478 = local_898;
        TStack_470.Array = pTStack_888;
        if (((int)local_60 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar32 != local_60) {
          puVar42 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar42 = local_68;
          }
          uVar32 = -1 << (bVar31 & 0x1f) & puVar42[iVar40];
          while (uVar32 == 0) {
            iVar40 = iVar40 + 1;
            uVar49 = uVar49 + 0x20;
            uVar32 = local_60;
            if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar40)
            goto LAB_1421e5220;
            uVar32 = puVar42[iVar40];
          }
          uVar33 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_588 = (int)lVar4;
          uVar32 = local_588 + -1 + uVar49;
          if ((int)local_60 < (int)uVar32) {
            uVar32 = local_60;
          }
        }
LAB_1421e5220:
        while( true ) {
          plVar13 = local_478;
          if ((int)local_478[1] - *(int *)((longlong)local_478 + 0x34) != (int)uStack_450) {
            local_899 = 0;
            `TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_899);
          }
          if (((TStack_470.CurrentBitIndex == uVar32) &&
              (TStack_470.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
             (plVar13 == (longlong *)local_88)) break;
          local_84c.Index = *(int *)(*plVar13 + (longlong)TStack_470.CurrentBitIndex * 0xc);
          if ((*(int *)(lVar48 + 0x54) == -1) &&
             (((((*(int *)(lVar48 + 0x54) = (int)local_8a8->_padding_, *(int *)(lVar48 + 0x58) != 0
                 || (*(int *)(lVar48 + 0x5c) != 0)) || (*(int *)(lVar48 + 0x60) != 0)) ||
               (*(int *)(lVar48 + 100) != 0)) &&
              (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Export.SerializationBeforeSerializationDependencies == 0 && Export.CreateBeforeSerializationDependencies == 0 && Export.SerializationBeforeCreateDependencies == 0 && Export.CreateBeforeCreateDependencies == 0"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                   ,0x86a,L""), bVar14)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)&local_8a8->_padding_ = (int)local_8a8->_padding_ + 1;
          *(int *)(lVar48 + 100) = *(int *)(lVar48 + 100) + 1;
          pFVar6 = *(FArchive **)(*(longlong *)FVar38 + 8);
          piVar44 = (int *)**(undefined8 **)&pFVar6->field_0x8;
          if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar44 + 1) {
            if ((pFVar6->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,&local_84c,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)&local_84c);
            }
          }
          else {
            local_84c.Index = *piVar44;
            **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
          }
          ``anonymous_namespace'::SavePreloadDependencies'::__l7::<lambda_3>::operator()
                    (&local_730,false,local_84c,false);
          TStack_470.UnvisitedBitMask = TStack_470.UnvisitedBitMask & ~TStack_470._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_470);
        }
        local_840 = local_840 + 1;
        local_798 = local_798 + 1;
        pFVar35 = local_838;
      } while ((int)local_840 < (int)local_8a8->_padding_);
    }
    uVar33 = 0;
    if (6 < (byte)LogSavePackage._0_1_) {
      UE::Logging::Private::BasicLog<7>
                (&`SavePreloadDependencies'::`154'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
    }
    uVar46 = uVar33;
    if (0 < (int)local_8a8->_padding_) {
      do {
        pFVar8 = local_8a8;
        uVar47 = (uint)uVar33;
        uVar32 = 0;
        if ((int)uVar47 < (int)local_8a8->_padding_) {
          uVar32 = ~uVar47 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar48 = pFVar8->_padding_ + uVar46;
        if ((*(longlong *)(lVar48 + 0x30) == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Export.Cell",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                ,0x877,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_178._8_4_ != local_144) {
          TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                     local_178);
          uVar9 = local_178._8_8_;
          uVar15 = local_178._12_4_;
          local_178._8_8_ = (ulonglong)(uint)local_178._12_4_ << 0x20;
          if (((longlong)uVar9 < 0) && (uVar15 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
          }
          local_148 = 0xffffffff;
          local_144 = 0;
          local_150 = 0;
        }
        pFVar16 = FSaveContext::GetHarvestedRealm(local_7a8,None);
        pTVar25 = TMapBase<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
                  ::FindChecked((TMapBase<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>,0>_>
                                 *)&pFVar16->CellExportObjectDependencies,*(VCell **)(lVar48 + 0x30)
                               );
        local_6b8._padding_._4_4_ = 1;
        local_6b8.UnvisitedBitMask = 0xffffffff;
        puVar1 = &(pTVar25->Elements).field_0x10;
        local_6b8._padding_._0_4_ = 0;
        local_6b8.CurrentBitIndex = 0;
        local_6b8.BaseBitIndex = 0;
        local_6b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (*(int *)&(pTVar25->Elements).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6b8);
        }
        unique0x1000299c = CONCAT44(local_6b8._padding_._4_4_,(undefined4)local_6b8._padding_);
        uStack_808 = CONCAT44(local_6b8.CurrentBitIndex,local_6b8.UnvisitedBitMask);
        lStack_800 = CONCAT44(local_6b8._28_4_,local_6b8.BaseBitIndex);
        iStack_540 = *(int *)&(pTVar25->Elements).field_0x8 -
                     *(int *)&(pTVar25->Elements).field_0x34;
        pTStack_810 = local_6b8.Array;
        local_7f8 = iStack_540;
        local_558 = local_6b8.Array;
        uStack_53c = uStack_7f4;
        local_820._0_8_ = pTVar25;
        local_568._0_8_ = pTVar25;
        unique0x1000467a = unique0x1000299c;
        uStack_550 = uStack_808;
        local_548 = lStack_800;
        pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_218,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                             *(int *)&(pTVar25->Elements).field_0x28);
        unique0x10002484 = pTVar26->_padding_;
        pTStack_810 = pTVar26->Array;
        uStack_808._0_4_ = pTVar26->UnvisitedBitMask;
        uStack_808._4_4_ = pTVar26->CurrentBitIndex;
        lStack_800 = *(longlong *)&pTVar26->BaseBitIndex;
        local_388.InitialNum =
             *(int *)&(pTVar25->Elements).field_0x8 - *(int *)&(pTVar25->Elements).field_0x34;
        local_7f8 = local_388.InitialNum;
        local_388._44_4_ = uStack_7f4;
        local_820._0_8_ = pTVar25;
        local_388._padding_ = (longlong)pTVar25;
        local_388._padding_ = unique0x10002484;
        local_388._padding_ = (longlong)pTStack_810;
        local_388._padding_ = uStack_808;
        local_388._padding_ = lStack_800;
        bVar14 = TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_568,&local_388);
        if (bVar14) {
          do {
            pUVar20 = *(UObject **)
                       (*(longlong *)
                         (TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_568._0_8_ + (longlong)uStack_550._4_4_ * 0x10);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar20);
            }
            pFVar8 = local_8a8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar20 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar20);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar20 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar20);
              }
            }
            local_5c0 = pUVar20;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar20);
            }
            pTVar29 = TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<TObjectPtr<UObject>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FPackageIndex,0>,FDefaultSetAllocator>
                              *)&pFVar8->ObjectIndicesMap,(TObjectPtr<UObject_const_>)&local_5c0);
            if (pTVar29 == (TTuple<TObjectPtr<UObject>,FPackageIndex> *)0x0) {
              local_7b8[0] = 0;
            }
            else {
              local_7b8[0] = *(int *)&pTVar29->field_0x8;
              if (local_7b8[0] != 0) {
                if (local_7b8[0] < 1) {
                  pFVar24 = FLinkerTables::Imp((FLinkerTables *)&pFVar35->_padding_,
                                               (FPackageIndex)local_7b8[0]);
                  pUVar20 = pFVar24->XObject;
                }
                else {
                  pFVar17 = FLinkerTables::Exp((FLinkerTables *)&pFVar35->_padding_,
                                               (FPackageIndex)local_7b8[0]);
                  pUVar20 = pFVar17->Object;
                }
                if (((pUVar20 != (UObject *)0x0) &&
                    (pUVar18 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar20),
                    pUVar18 != (UPackage *)0x0)) &&
                   (lVar4 = pUVar18->_padding_, FLazyName::Resolve(&GLongCoreUObjectPackageName),
                   lVar4 != local_5b8)) {
                  TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
                  Emplace<FPackageIndex_const_&>
                            ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>
                              *)local_178,&local_584,(bool *)local_7b8);
                }
              }
            }
            uStack_550 = CONCAT44(uStack_550._4_4_,(uint)uStack_550 & ~uStack_55c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_568 + 8));
            bVar14 = TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_568,&local_388);
          } while (bVar14);
        }
        pFVar16 = FSaveContext::GetHarvestedRealm(local_7a8,None);
        pTVar27 = TMapBase<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
                  ::FindChecked((TMapBase<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Verse::VCell_*,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>,0>_>
                                 *)&pFVar16->CellExportCellDependencies,*(VCell **)(lVar48 + 0x30));
        local_658._padding_._4_4_ = 1;
        local_658.UnvisitedBitMask = 0xffffffff;
        puVar1 = &(pTVar27->Elements).field_0x10;
        local_658._padding_._0_4_ = 0;
        local_658.CurrentBitIndex = 0;
        local_658.BaseBitIndex = 0;
        local_658.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (*(int *)&(pTVar27->Elements).field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_658);
        }
        unique0x100029fc = CONCAT44(local_658._padding_._4_4_,(undefined4)local_658._padding_);
        uStack_808 = CONCAT44(local_658.CurrentBitIndex,local_658.UnvisitedBitMask);
        lStack_800 = CONCAT44(local_658._28_4_,local_658.BaseBitIndex);
        iStack_420 = *(int *)&(pTVar27->Elements).field_0x8 -
                     *(int *)&(pTVar27->Elements).field_0x34;
        pTStack_810 = local_658.Array;
        local_7f8 = iStack_420;
        local_438 = local_658.Array;
        uStack_41c = uStack_7f4;
        local_820._0_8_ = pTVar27;
        local_448._0_8_ = pTVar27;
        unique0x1000473a = unique0x100029fc;
        uStack_430 = uStack_808;
        local_428 = lStack_800;
        pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_1f8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                             *(int *)&(pTVar27->Elements).field_0x28);
        unique0x100025c4 = pTVar26->_padding_;
        pTStack_810 = pTVar26->Array;
        uStack_808._0_4_ = pTVar26->UnvisitedBitMask;
        uStack_808._4_4_ = pTVar26->CurrentBitIndex;
        lStack_800 = *(longlong *)&pTVar26->BaseBitIndex;
        local_358.InitialNum =
             *(int *)&(pTVar27->Elements).field_0x8 - *(int *)&(pTVar27->Elements).field_0x34;
        local_7f8 = local_358.InitialNum;
        local_358._44_4_ = uStack_7f4;
        local_820._0_8_ = pTVar27;
        local_358._padding_ = (longlong)pTVar27;
        local_358._padding_ = unique0x100025c4;
        local_358._padding_ = (longlong)pTStack_810;
        local_358._padding_ = uStack_808;
        local_358._padding_ = lStack_800;
        bVar14 = TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_448,&local_358);
        if (bVar14) {
          do {
            pTVar28 = TSet<TTuple<Verse::VCell_*,FPackageIndex>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,FPackageIndex,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<Verse::VCell_*,FPackageIndex>,TDefaultMapHashableKeyFuncs<Verse::VCell_*,FPackageIndex,0>,FDefaultSetAllocator>
                              *)&local_8a8->CellIndicesMap,
                             *(VCell **)
                              (*(longlong *)
                                (TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_448._0_8_ + (longlong)uStack_430._4_4_ * 0x10));
            if (pTVar28 == (TTuple<Verse::VCell_*,FPackageIndex> *)0x0) {
              local_7b0[0] = 0;
            }
            else {
              local_7b0[0] = *(undefined4 *)&pTVar28->field_0x8;
            }
            TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator>::
            Emplace<FPackageIndex_const_&>
                      ((TSet<FPackageIndex,DefaultKeyFuncs<FPackageIndex,0>,FDefaultSetAllocator> *)
                       local_178,&local_580,(bool *)local_7b0);
            uStack_430 = CONCAT44(uStack_430._4_4_,(uint)uStack_430 & ~uStack_43c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_448 + 8));
            bVar14 = TSparseArray<TSparseSetElement<Verse::VCell_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_448,&local_358);
          } while (bVar14);
        }
        local_698.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
        local_698._padding_._4_4_ = 1;
        local_698._padding_._0_4_ = 0;
        local_698.UnvisitedBitMask = 0xffffffff;
        local_698.CurrentBitIndex = 0;
        local_698.BaseBitIndex = 0;
        if (local_100 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_698);
        }
        uStack_890 = CONCAT44(local_698._padding_._4_4_,(undefined4)local_698._padding_);
        local_898 = (longlong *)local_128;
        uStack_880 = CONCAT44(local_698.CurrentBitIndex,local_698.UnvisitedBitMask);
        uStack_878 = CONCAT44(local_698._28_4_,local_698.BaseBitIndex);
        local_870 = local_128._8_4_ - local_f4;
        pTStack_888 = local_698.Array;
        uStack_7f4 = uStack_86c;
        local_7f8 = local_870;
        pTStack_810 = local_698.Array;
        local_820._0_8_ = local_898;
        unique0x1000448a = uStack_890;
        uStack_808 = uStack_880;
        lStack_800 = uStack_878;
        pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_1d8,(TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),
                             local_100);
        local_898 = (longlong *)local_128;
        uStack_890 = pTVar26->_padding_;
        pTStack_888 = pTVar26->Array;
        uStack_880._0_4_ = pTVar26->UnvisitedBitMask;
        uStack_880._4_4_ = pTVar26->CurrentBitIndex;
        uStack_878 = *(longlong *)&pTVar26->BaseBitIndex;
        local_870 = local_128._8_4_ - local_f4;
        local_328._44_4_ = uStack_86c;
        local_328.InitialNum = local_870;
        local_328._padding_ = (longlong)local_898;
        local_328._padding_ = uStack_890;
        local_328._padding_ = (longlong)pTStack_888;
        local_328._padding_ = uStack_880;
        local_328._padding_ = uStack_878;
        bVar14 = TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_820,&local_328);
        if (bVar14) {
          do {
            local_788 = *(int *)(*(longlong *)local_820._0_8_ + (longlong)uStack_808._4_4_ * 0xc);
            if (((*(int *)(lVar48 + 0x38) == -1) &&
                ((*(int *)(lVar48 + 0x38) = (int)local_8a8->_padding_, *(int *)(lVar48 + 0x3c) != 0
                 || (*(int *)(lVar48 + 0x40) != 0)))) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Export.SerializationBeforeSerializationDependencies == 0 && Export.CreateBeforeSerializationDependencies == 0"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                    ,0x8cb,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(int *)&local_8a8->_padding_ = (int)local_8a8->_padding_ + 1;
            *(int *)(lVar48 + 0x3c) = *(int *)(lVar48 + 0x3c) + 1;
            FBinaryArchiveFormatter::Serialize(*(FBinaryArchiveFormatter **)FVar38,&local_788);
            uStack_808 = CONCAT44(uStack_808._4_4_,(uint)uStack_808 & ~uStack_814);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_820 + 8));
            bVar14 = TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_820,&local_328);
            pFVar35 = local_838;
          } while (bVar14);
        }
        local_678.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
        local_678._padding_._0_4_ = 0;
        local_678._padding_._4_4_ = 1;
        local_678.UnvisitedBitMask = 0xffffffff;
        local_678.CurrentBitIndex = 0;
        local_678.BaseBitIndex = 0;
        if (local_150 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_678);
        }
        uStack_890 = CONCAT44(local_678._padding_._4_4_,(undefined4)local_678._padding_);
        local_898 = (longlong *)local_178;
        uStack_880 = CONCAT44(local_678.CurrentBitIndex,local_678.UnvisitedBitMask);
        uStack_878 = CONCAT44(local_678._28_4_,local_678.BaseBitIndex);
        local_870 = local_178._8_4_ - local_144;
        pTStack_888 = local_678.Array;
        uStack_3f0._4_4_ = uStack_86c;
        uStack_3f0._0_4_ = local_870;
        local_408 = local_678.Array;
        local_418._0_8_ = local_898;
        unique0x1000475a = uStack_890;
        uStack_400 = uStack_880;
        local_3f8 = uStack_878;
        pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_1b8,(TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),
                             local_150);
        local_898 = (longlong *)local_178;
        uStack_890 = pTVar26->_padding_;
        pTStack_888 = pTVar26->Array;
        uStack_880._0_4_ = pTVar26->UnvisitedBitMask;
        uStack_880._4_4_ = pTVar26->CurrentBitIndex;
        uStack_878 = *(longlong *)&pTVar26->BaseBitIndex;
        local_870 = local_178._8_4_ - local_144;
        local_2f8._44_4_ = uStack_86c;
        local_2f8.InitialNum = local_870;
        local_2f8._padding_ = (longlong)local_898;
        local_2f8._padding_ = uStack_890;
        local_2f8._padding_ = (longlong)pTStack_888;
        local_2f8._padding_ = uStack_880;
        local_2f8._padding_ = uStack_878;
        bVar14 = TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_418,&local_2f8);
        if (bVar14) {
          do {
            local_784 = *(uint *)(*(longlong *)local_418._0_8_ + (longlong)uStack_400._4_4_ * 0xc);
            if (local_128._8_4_ != local_f4) {
              FVar41 = (ForElementType<FSetElementId>)local_f0;
              if (local_e8 != (ForElementType<FSetElementId>)0x0) {
                FVar41 = local_e8;
              }
              for (iVar40 = *(int *)((longlong)FVar41 + (ulonglong)(local_e0 - 1U & local_784) * 4);
                  iVar40 != -1; iVar40 = *(int *)(local_128._0_8_ + (longlong)iVar40 * 0xc + 4)) {
                if (*(uint *)(local_128._0_8_ + (longlong)iVar40 * 0xc) == local_784)
                goto LAB_1421e5c96;
              }
            }
            if (((*(int *)(lVar48 + 0x38) == -1) &&
                ((*(int *)(lVar48 + 0x38) = (int)local_8a8->_padding_, *(int *)(lVar48 + 0x3c) != 0
                 || (*(int *)(lVar48 + 0x40) != 0)))) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Export.SerializationBeforeSerializationDependencies == 0 && Export.CreateBeforeSerializationDependencies == 0"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                    ,0x8da,L""), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(int *)&local_8a8->_padding_ = (int)local_8a8->_padding_ + 1;
            *(int *)(lVar48 + 0x40) = *(int *)(lVar48 + 0x40) + 1;
            FBinaryArchiveFormatter::Serialize
                      (*(FBinaryArchiveFormatter **)FVar38,(int *)&local_784);
LAB_1421e5c96:
            uStack_400 = CONCAT44(uStack_400._4_4_,(uint)uStack_400 & ~uStack_40c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_418 + 8));
            bVar14 = TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_418,&local_2f8);
            pFVar35 = local_838;
          } while (bVar14);
        }
        uVar33 = (ulonglong)(uVar47 + 1);
        uVar46 = uVar46 + 0x48;
      } while ((int)(uVar47 + 1) < (int)local_8a8->_padding_);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    local_130 = 0;
    if (local_138 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138);
    }
    TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_178);
    local_e0 = 0;
    if (local_e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8);
    }
    TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_128);
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPackageIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
    if (local_830.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_830.Data);
    }
    if (local_868.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.AllocatorInstance.Data);
    }
  }
  return;
}

// SetSummaryTotalHeaderSize @ 1421e8790

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::SetSummaryTotalHeaderSize(FSaveContext *param_1,long64 param_2)

{
  FLinkerSave *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  pFVar1 = FSaveContext::GetLinker(param_1);
  if (param_2 < 0x80000000) {
    *(int *)((longlong)&pFVar1->_padding_ + 4) = (int)param_2;
    return Success;
  }
  if (1 < (byte)LogSavePackage._0_1_) {
    local_res10[0] = (FName)param_1->Package->_padding_;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`SetSummaryTotalHeaderSize'::`8'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return Error;
}

// UpdatePackageHeader @ 1421ec4e0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::UpdatePackageHeader(FStructuredArchiveRecord *param_1,FSaveContext *param_2)

{
  FCellExport *pFVar1;
  FCustomVersion *pFVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  FStructuredArchiveSlot FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  ESavePackageResult EVar11;
  FLinkerSave *pFVar12;
  longlong lVar13;
  FString *pFVar14;
  longlong *plVar15;
  FCustomVersion *pFVar16;
  FName this;
  uint uVar17;
  FObjectImport *pFVar18;
  FObjectExport *pFVar19;
  FCellImport *pFVar20;
  FCellExport *pFVar21;
  wchar_t *pwVar22;
  FCustomVersion *this_00;
  uint uVar23;
  ulonglong uVar24;
  byte bVar25;
  FObjectImport *pFVar26;
  FObjectExport *pFVar27;
  FCellImport *pFVar28;
  longlong lVar29;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  FName local_c4;
  undefined8 local_b8;
  FString local_b0;
  FString local_a0;
  FString local_88;
  FString local_78;
  FGuid local_68;
  FString local_58;
  
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`UpdatePackageHeader'::`2'::__CpuProfilerEventSpecId3053,
               "UPackage_Save_UpdatePackageHeader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xbed);
    FCpuProfilerTrace::OutputBeginEvent(`UpdatePackageHeader'::`2'::__CpuProfilerEventSpecId3053);
  }
  pFVar12 = FSaveContext::GetLinker(param_2);
  local_b8 = (**(code **)(pFVar12->_padding_ + 0x28))(&pFVar12->_padding_);
  if (param_2->bTextFormat == false) {
    (**(code **)(pFVar12->_padding_ + 0x1b8))(&pFVar12->_padding_,(longlong)(int)pFVar12->_padding_)
    ;
    FVar6 = *(FStructuredArchiveSlot *)param_1;
    iVar4 = (int)pFVar12->_padding_;
    pFVar18 = (FObjectImport *)pFVar12->_padding_;
    pFVar26 = pFVar18 + iVar4;
    while( true ) {
      if ((int)pFVar12->_padding_ != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar18 == pFVar26) break;
      ::operator<<(FVar6,pFVar18);
      pFVar18 = pFVar18 + 1;
    }
    if (param_2->bTextFormat == false) {
      iVar4 = param_2->OffsetAfterImportMap;
      lVar13 = (**(code **)(pFVar12->_padding_ + 0x28))(&pFVar12->_padding_);
      if ((lVar13 != iVar4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Linker->Tell() == SaveContext.OffsetAfterImportMap",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                             ,0xc02,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      (**(code **)(pFVar12->_padding_ + 0x1b8))
                (&pFVar12->_padding_,(longlong)(int)pFVar12->_padding_);
      FVar6 = *(FStructuredArchiveSlot *)param_1;
      iVar4 = (int)pFVar12->_padding_;
      pFVar19 = (FObjectExport *)pFVar12->_padding_;
      pFVar27 = pFVar19 + iVar4;
      while( true ) {
        if ((int)pFVar12->_padding_ != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar19 == pFVar27) break;
        ::operator<<(FVar6,pFVar19);
        pFVar19 = pFVar19 + 1;
      }
      iVar4 = param_2->OffsetAfterExportMap;
      lVar13 = (**(code **)(pFVar12->_padding_ + 0x28))(&pFVar12->_padding_);
      if ((lVar13 != iVar4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Linker->Tell() == SaveContext.OffsetAfterExportMap",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                             ,0xc0a,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (param_2->bTextFormat == false) {
        (**(code **)(pFVar12->_padding_ + 0x1b8))
                  (&pFVar12->_padding_,(longlong)(int)pFVar12->_padding_);
        iVar4 = (int)pFVar12->_padding_;
        pFVar20 = (FCellImport *)pFVar12->_padding_;
        pFVar28 = pFVar20 + iVar4;
        FVar6 = *(FStructuredArchiveSlot *)param_1;
        while( true ) {
          if ((int)pFVar12->_padding_ != iVar4) {
            local_c8 = 0;
            `TCheckedPointerIterator<FCellImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_c8);
          }
          if (pFVar20 == pFVar28) break;
          ::operator<<(FVar6,pFVar20);
          pFVar20 = pFVar20 + 1;
        }
        if (param_2->bTextFormat == false) {
          (**(code **)(pFVar12->_padding_ + 0x1b8))
                    (&pFVar12->_padding_,(longlong)(int)pFVar12->_padding_);
          iVar4 = (int)pFVar12->_padding_;
          pFVar21 = (FCellExport *)pFVar12->_padding_;
          FVar6 = *(FStructuredArchiveSlot *)param_1;
          pFVar1 = pFVar21 + iVar4;
          while( true ) {
            if ((int)pFVar12->_padding_ != iVar4) {
              local_c7 = 0;
              `TCheckedPointerIterator<FCellExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_c7);
            }
            if (pFVar21 == pFVar1) break;
            ::operator<<(FVar6,pFVar21);
            pFVar21 = pFVar21 + 1;
          }
        }
      }
    }
  }
  iVar4 = (int)pFVar12->_padding_;
  bVar25 = 0;
  lVar13 = pFVar12->_padding_;
  lVar29 = (longlong)iVar4 * 0x68 + lVar13;
  while( true ) {
    if ((int)pFVar12->_padding_ != iVar4) {
      local_c6 = 0;
      `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_c6);
    }
    if (lVar13 == lVar29) break;
    bVar25 = bVar25 | *(byte *)(lVar13 + 0x4c) >> 4 & 1;
    lVar13 = lVar13 + 0x68;
  }
  iVar4 = (int)pFVar12->_padding_;
  uVar5 = *(undefined4 *)((longlong)&pFVar12->_padding_ + 4);
  uVar17 = iVar4 - 1;
  uVar23 = 0;
  if ((int)uVar17 < iVar4) {
    uVar23 = ~uVar17 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  *(undefined4 *)(pFVar12->_padding_ + -8 + (longlong)(int)pFVar12->_padding_ * 8) = uVar5;
  iVar4 = (int)pFVar12->_padding_;
  lVar13 = pFVar12->_padding_;
  uVar17 = iVar4 - 1;
  uVar23 = 0;
  if ((int)uVar17 < iVar4) {
    uVar23 = ~uVar17 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  *(int *)(pFVar12->_padding_ + -4 + (longlong)(int)pFVar12->_padding_ * 8) = (int)lVar13;
  ::FString::FString(&local_a0,param_2->Filename);
  pFVar14 = FPaths::GetBaseFilename(&local_78,&local_a0,true);
  pFVar14 = ::FString::ToUpper(pFVar14,&local_88);
  if ((pFVar14->Data).ArrayNum == 0) {
    pwVar22 = L"";
  }
  else {
    pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0x67,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  uVar24 = 0xffffffff;
  uVar23 = 0xffffffff;
  uVar3 = *pwVar22;
  while (uVar3 != 0) {
    pwVar22 = (wchar_t *)((longlong)pwVar22 + 2);
    uVar23 = (int)uVar24 << 8 ^ FCrc::CRCTable_DEPRECATED[uVar24 >> 0x18 ^ (ulonglong)uVar3 & 0xff];
    uVar23 = uVar23 << 8 ^
             FCrc::CRCTable_DEPRECATED[(ulonglong)(uVar23 >> 0x18) ^ (ulonglong)(uVar3 >> 8)];
    uVar24 = (ulonglong)uVar23;
    uVar3 = *pwVar22;
  }
  *(uint *)((longlong)&pFVar12->_padding_ + 4) = ~uVar23;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  lVar13 = pFVar12->_padding_;
  uVar23 = *(uint *)(lVar13 + 0x2c);
  if (*(char *)((longlong)&pFVar12->_padding_ + 1) < '\0') {
    if ((uVar23 | 0x40000) != uVar23) {
      LOCK();
      *(uint *)(lVar13 + 0x2c) = *(uint *)(lVar13 + 0x2c) | 0x40000;
      UNLOCK();
    }
  }
  else if ((uVar23 & 0xfffbffff) != uVar23) {
    LOCK();
    *(uint *)(lVar13 + 0x2c) = *(uint *)(lVar13 + 0x2c) & 0xfffbffff;
    UNLOCK();
  }
  uVar23 = *(uint *)(pFVar12->_padding_ + 0x2c);
  if (((param_2->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) || (bVar25 != 0)) {
    uVar23 = uVar23 & 0xfffffbff;
  }
  else {
    uVar23 = uVar23 | 0x400;
  }
  uVar17 = uVar23 | 0x80000000;
  if ((pFVar12->_padding_ & 0x10000000) == 0) {
    uVar17 = uVar23 & 0x7fffffff;
  }
  FPackageFileSummary::SetPackageFlags((FPackageFileSummary *)&pFVar12->_padding_,uVar17);
  bVar9 = false;
  plVar15 = (longlong *)(**(code **)(pFVar12->_padding_ + 0x60))(&pFVar12->_padding_);
  lVar13 = plVar15[1];
  this_00 = (FCustomVersion *)*plVar15;
  pFVar2 = this_00 + (int)lVar13;
  while( true ) {
    if ((int)plVar15[1] != (int)lVar13) {
      local_c5 = 0;
      `TCheckedPointerIterator<FCustomVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c5);
    }
    if (this_00 == pFVar2) break;
    local_68.A = (this_00->Key).A;
    local_68.B = (this_00->Key).B;
    local_68.C = (this_00->Key).C;
    local_68.D = (this_00->Key).D;
    pFVar16 = FCustomVersionContainer::GetVersion
                        ((FCustomVersionContainer *)&pFVar12->_padding_,&local_68);
    if (pFVar16 == (FCustomVersion *)0x0) {
      if (1 < (byte)LogSavePackage._0_1_) {
        local_c4 = *(FName *)(pFVar12->_padding_ + 0x18);
        ::FName::ToString(&local_c4,&local_b0);
        this = FCustomVersion::GetFriendlyName(this_00);
        ::FName::ToString((FName *)this,&local_58);
        UE::Logging::Private::BasicLog<2>
                  (&`UpdatePackageHeader'::`68'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      bVar9 = true;
    }
    this_00 = this_00 + 1;
  }
  if (bVar9) {
    EVar11 = Error;
  }
  else {
    if (param_2->bTextFormat == false) {
      (**(code **)(pFVar12->_padding_ + 0x1b8))(&pFVar12->_padding_,0);
    }
    ::operator<<(*(FStructuredArchiveSlot *)param_1,(FPackageFileSummary *)&pFVar12->_padding_);
    if (param_2->bTextFormat == false) {
      iVar4 = param_2->OffsetAfterPackageFileSummary;
      lVar13 = (**(code **)(pFVar12->_padding_ + 0x28))(&pFVar12->_padding_);
      if ((lVar13 != iVar4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Linker->Tell() == SaveContext.OffsetAfterPackageFileSummary",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                             ,0xc81,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        EVar11 = (*pcVar7)();
        return EVar11;
      }
      if (param_2->bTextFormat == false) {
        (**(code **)(pFVar12->_padding_ + 0x1b8))(&pFVar12->_padding_,local_b8);
      }
    }
    cVar10 = (**(code **)(GWarn->_padding_ + 0x60))();
    EVar11 = -(uint)(cVar10 != '\0') & Canceled;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar11;
}

// ValidateExports @ 1421ecc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ESavePackageResult __cdecl `anonymous_namespace'::ValidateExports(FSaveContext *param_1)

{
  ulonglong uVar1;
  ESaveRealm EVar2;
  EObjectFlags EVar3;
  UObject *pUVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  longlong lVar6;
  FOutputDevice *this;
  FSavePackageContext *pFVar7;
  code *pcVar8;
  bool bVar9;
  FSaveContext *pFVar10;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *pTVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *pTVar17;
  UClass *pUVar18;
  FText *pFVar19;
  FText *pFVar20;
  FTextFormat *pFVar21;
  undefined8 uVar22;
  byte bVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  ForElementType<FSetElementId> FVar26;
  int iVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  uint *puVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  uint uVar33;
  ESavePackageResult EVar34;
  FScriptContainerElement *pFVar35;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  <lambda_2> local_208 [4];
  uint local_204;
  undefined1 local_200 [8];
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_1f0;
  FString local_1e8;
  int local_1d8;
  int local_1d4;
  FName local_1d0;
  FName local_1c8;
  FSaveContext *local_1c0;
  FSaveContext *local_1b8;
  FName local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_178;
  uint uStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator> *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  UPackage *local_118;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_110;
  TMap<UObject_*,FObjectSaveOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FObjectSaveOverride,0>_>
  *local_108;
  uint local_100;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0 [2];
  undefined4 local_94;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_1c0 = param_1;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`ValidateExports'::`2'::__CpuProfilerEventSpecId625,"UPackage_Save_ValidateExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x271);
    FCpuProfilerTrace::OutputBeginEvent(`ValidateExports'::`2'::__CpuProfilerEventSpecId625);
  }
  if (param_1->CurrentHarvestingRealm == Optional) {
    pTVar17 = FSaveContext::GetExports(param_1);
    if (*(int *)&(pTVar17->Elements).field_0x8 == *(int *)&(pTVar17->Elements).field_0x34) {
      EVar34 = EmptyRealm;
    }
    else {
      cVar12 = (**(code **)(GWarn->_padding_ + 0x60))();
      EVar34 = -(uint)(cVar12 != '\0') & Canceled;
    }
  }
  else {
    pTVar17 = FSaveContext::GetExports(param_1);
    uVar29 = 0;
    if (*(int *)&(pTVar17->Elements).field_0x8 == *(int *)&(pTVar17->Elements).field_0x34) {
      EVar2 = param_1->CurrentHarvestingRealm;
      iVar16 = (param_1->HarvestedRealms).ArrayNum;
      uVar15 = uVar29;
      if ((int)EVar2 < iVar16) {
        uVar15 = ~EVar2 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_218 = (longlong)(int)EVar2, local_210 = (longlong)iVar16,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        EVar34 = (*pcVar8)();
        return EVar34;
      }
      pFVar28 = (param_1->HarvestedRealms).AllocatorInstance.Data;
      lVar24 = (longlong)(int)EVar2 * 0x5f0;
      if (*(int *)(pFVar28 + lVar24 + 0x1e8) == *(int *)(pFVar28 + lVar24 + 0x214)) {
        if ((5 < (byte)LogSavePackage._0_1_) && ((~(byte)(param_1->SaveArgs).SaveFlags & 1) != 0)) {
          UE::Logging::Private::BasicLog<6>
                    (&`ValidateExports'::`12'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
        }
        EVar34 = Error;
        if ((param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) {
          EVar34 = ContainsEditorOnlyData;
        }
        goto LAB_1421ed5bb;
      }
    }
    EVar34 = Error;
    pUVar4 = param_1->Asset;
    if (pUVar4 != (UObject *)0x0) {
      pTVar17 = FSaveContext::GetExports(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar4), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      uVar15 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
               -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      if (*(int *)&(pTVar17->Elements).field_0x8 != *(int *)&(pTVar17->Elements).field_0x34) {
        FVar26 = (pTVar17->Hash).SecondaryData;
        if (FVar26 == (ForElementType<FSetElementId>)0x0) {
          FVar26 = (ForElementType<FSetElementId>)&pTVar17->Hash;
        }
        iVar16 = *(int *)((longlong)FVar26 +
                         (ulonglong)(pTVar17->HashSize - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
        if (iVar16 != -1) {
          do {
            if (*(UObject **)(*(longlong *)&pTVar17->Elements + (longlong)iVar16 * 0x18) == pUVar4)
            goto LAB_1421ecfff;
            iVar16 = *(int *)(*(longlong *)&pTVar17->Elements + 0x10 + (longlong)iVar16 * 0x18);
          } while (iVar16 != -1);
        }
      }
      EVar3 = (param_1->SaveArgs).TopLevelFlags;
      if ((EVar3 != RF_NoFlags) && ((EVar3 & *(EObjectFlags *)&pUVar4->field_0x8) == RF_NoFlags)) {
        local_1d0 = (FName)param_1->Package->_padding_;
        ::FName::ToString(&local_1d0,&local_198);
        local_1c8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_1c8.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_1c8,&local_1a8);
        ::FString::PrintfImpl
                  (&local_1e8,
                   L"The asset to save %s in package %s does not contain any of the provided object flags."
                  );
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if ((~(byte)(param_1->SaveArgs).SaveFlags & 1) == 0) {
          if (1 < (byte)LogSavePackage._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`ValidateExports'::`45'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
          }
        }
        else {
          FOutputDevice::LogfImpl((param_1->SaveArgs).Error,Warning,L"%s");
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        goto LAB_1421ed5bb;
      }
    }
LAB_1421ecfff:
    if (((uint)param_1->Package->PackageFlagsPrivate >> 0x11 & 1) != 0) {
      bVar13 = false;
      local_1f0 = FSaveContext::GetExports(param_1);
      iVar16 = *(int *)&(local_1f0->Elements).field_0x28;
      local_158 = 0;
      local_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_1f0->Elements).field_0x10;
      uStack_16c = 1;
      iStack_15c = 0;
      if (iVar16 != 0) {
        puVar31 = *(uint **)&(local_1f0->Elements).field_0x20;
        if (puVar31 == (uint *)0x0) {
          puVar31 = (uint *)local_1f8;
        }
        uVar15 = *puVar31;
        uVar29 = 0;
        while (uVar15 == 0) {
          uVar29 = uVar29 + 1;
          local_158 = local_158 + 0x20;
          iStack_15c = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
          goto LAB_1421ed0b5;
          uVar15 = puVar31[(int)uVar29];
        }
        uStack_16c = ~(uVar15 - 1) & uVar15;
        uVar1 = (ulonglong)uStack_16c * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_1d8 = (int)lVar24;
        iStack_15c = local_1d8 + -1 + local_158;
        if (iVar16 < iStack_15c) {
          iStack_15c = iVar16;
        }
      }
LAB_1421ed0b5:
      uStack_154 = local_94;
      iStack_150 = *(int *)&(local_1f0->Elements).field_0x8 -
                   *(int *)&(local_1f0->Elements).field_0x34;
      local_204 = *(uint *)&(local_1f0->Elements).field_0x28;
      uStack_160 = 0xffffffff;
      TStack_140.CurrentBitIndex = iStack_15c;
      TStack_140.UnvisitedBitMask = 0xffffffff;
      TStack_140._padding_ = CONCAT44(uStack_16c,uVar29);
      uVar15 = local_204 & 0xffffffe0;
      iVar27 = (int)local_204 >> 5;
      bVar23 = (byte)local_204;
      TStack_140._28_4_ = local_94;
      TStack_140.BaseBitIndex = local_158;
      uStack_120 = CONCAT44(uStack_14c,iStack_150);
      local_178 = local_1f0;
      uStack_170 = uVar29;
      local_168 = (undefined1 *)local_1f8;
      local_148 = local_1f0;
      TStack_140.Array = local_1f8;
      if ((((int)local_204 < 0) || (iVar16 < (int)local_204)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        EVar34 = (*pcVar8)();
        return EVar34;
      }
      pTVar17 = local_1f0;
      pTVar32 = local_1f8;
      uVar29 = local_1f8->NumBits;
      uVar33 = local_204;
      if (local_204 != uVar29) {
        pTVar5 = *(TBitArray<FDefaultBitArrayAllocator> **)
                  &(local_1f8->AllocatorInstance).SecondaryData.field_0x0;
        pTVar30 = local_1f8;
        if (pTVar5 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar30 = pTVar5;
        }
        uVar33 = -1 << (bVar23 & 0x1f) &
                 *(uint *)((longlong)(pTVar30->AllocatorInstance).InlineData + (longlong)iVar27 * 4)
        ;
        while (uVar33 == 0) {
          iVar27 = iVar27 + 1;
          uVar15 = uVar15 + 0x20;
          local_204 = uVar29;
          uVar33 = uVar29;
          if ((int)(((int)(uVar29 - 1) >> 0x1f & 0x1fU) + (uVar29 - 1)) >> 5 < iVar27)
          goto LAB_1421ed1e0;
          uVar33 = *(uint *)((longlong)(pTVar30->AllocatorInstance).InlineData +
                            (longlong)iVar27 * 4);
        }
        uVar1 = (ulonglong)(~(uVar33 - 1) & uVar33) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_1d4 = (int)lVar24;
        local_204 = local_1d4 + -1 + uVar15;
        uVar33 = local_204;
        if ((int)uVar29 < (int)local_204) {
          local_204 = uVar29;
          uVar33 = uVar29;
        }
      }
LAB_1421ed1e0:
      while( true ) {
        pTVar11 = local_148;
        if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
            (int)uStack_120) {
          local_208[0] = (<lambda_2>)0x0;
          `TSparseArray<TSparseSetElement<FTaggedExport>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_208);
        }
        pFVar10 = local_1c0;
        if (((TStack_140.CurrentBitIndex == uVar33) && (TStack_140.Array == pTVar32)) &&
           (pTVar11 == pTVar17)) break;
        for (lVar24 = *(longlong *)
                       (*(longlong *)&pTVar11->Elements +
                       (longlong)TStack_140.CurrentBitIndex * 0x18); lVar24 != 0;
            lVar24 = *(longlong *)(lVar24 + 0x28)) {
          pUVar18 = UObjectRedirector::GetPrivateStaticClass();
          lVar6 = *(longlong *)(lVar24 + 0x10);
          iVar16 = (int)pUVar18->_padding_;
          if ((*(int *)(lVar6 + 0x38) < iVar16) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar16 * 8) !=
              &pUVar18->_padding_)) {
            if ((*(FName *)(lVar6 + 0x18) == UE::SavePackageUtilities::NAME_World) ||
               (*(FName *)(lVar6 + 0x18) == UE::SavePackageUtilities::NAME_Level)) {
              bVar23 = 1;
            }
            else {
              bVar23 = 0;
            }
            bVar13 = (bool)(bVar23 | bVar13);
            break;
          }
        }
        TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      }
      EVar34 = Error;
      param_1 = local_1c0;
      if (!bVar13) {
        local_1b8 = local_1c0;
        ``anonymous_namespace'::ValidateExports'::__l77::<lambda_1>::operator()(&local_1b8);
        if (1 < (byte)LogSavePackage._0_1_) {
          local_1b0 = (FName)pFVar10->Package->_padding_;
          ::FName::ToString(&local_1b0,&local_188);
          UE::Logging::Private::BasicLog<2>
                    (&`ValidateExports'::`78'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
        }
        if ((~(byte)(pFVar10->SaveArgs).SaveFlags & 1) != 0) {
          this = (pFVar10->SaveArgs).Error;
          pFVar19 = FText::FromString(&local_d0,pFVar10->Filename);
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_e0,L"Core",L"SavePackageNoMap",
                               L"Attempting to save a map asset \'{0}\' that does not contain a map object"
                              );
          pFVar21 = FTextFormat::FTextFormat(local_c0,pFVar20,Default);
          pFVar19 = FText::Format<FText>(&local_f0,pFVar21,pFVar19);
          FText::ToString(pFVar19);
          FOutputDevice::LogfImpl(this,Warning,L"%s");
          if (local_f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
          }
          if (local_e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
          }
        }
        goto LAB_1421ed5bb;
      }
    }
    pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    pFVar7 = (param_1->SaveArgs).SavePackageContext;
    if ((pFVar7 == (FSavePackageContext *)0x0) ||
       ((pFVar7->SavePackageSettings).ExternalExportValidations.ArrayNum < 1)) {
LAB_1421ed595:
      cVar12 = (**(code **)(GWarn->_padding_ + 0x60))();
      EVar34 = -(uint)(cVar12 != '\0') & Canceled;
    }
    else {
      local_88.Elements._0_8_ = 0;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._48_4_ = 0xffffffff;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      pTVar17 = FSaveContext::GetExports(param_1);
      Algo::
      Transform<TSet<FTaggedExport,DefaultKeyFuncs<FTaggedExport,0>,FDefaultSetAllocator>,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_&,__anonymous_namespace_::ValidateExports_::__l101::<lambda_2>_>
                (pTVar17,&local_88,local_208[0]);
      local_204 = (uint)((param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0);
      if ((~(byte)(param_1->SaveArgs).SaveFlags & 1) != 0) {
        pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)(param_1->SaveArgs).Error;
      }
      local_1f8 = pTVar32;
      if (((param_1->SaveArgs).SavePackageContext == (FSavePackageContext *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("SaveArgs.SavePackageContext",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage\\SaveContext.h"
                              ,0x51e,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        EVar34 = (*pcVar8)();
        return EVar34;
      }
      pFVar7 = (param_1->SaveArgs).SavePackageContext;
      iVar16 = (pFVar7->SavePackageSettings).ExternalExportValidations.ArrayNum;
      pFVar28 = (pFVar7->SavePackageSettings).ExternalExportValidations.AllocatorInstance.Data;
      pFVar35 = pFVar28 + (longlong)iVar16 * 0x30;
      while( true ) {
        if ((pFVar7->SavePackageSettings).ExternalExportValidations.ArrayNum != iVar16) {
          `TCheckedPointerIterator<TFunction<enum_ESavePackageResult___cdecl(FExportsValidationContext_const_&)>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_200);
        }
        if (pFVar28 == pFVar35) {
          local_88.HashSize = 0;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_88.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_88.Elements);
          goto LAB_1421ed595;
        }
        local_118 = param_1->Package;
        local_110 = &local_88;
        local_108 = &(param_1->ObjectSaveContext).SaveOverrides;
        local_100 = local_204;
        local_f8 = pTVar32;
        UE::Core::Private::Function::CheckCallable(*(void **)pFVar28);
        pFVar25 = *(FScriptContainerElement **)(pFVar28 + 0x28);
        pcVar8 = *(code **)pFVar28;
        if (pFVar25 == (FScriptContainerElement *)0x0) {
          pFVar25 = pFVar28 + 0x10;
        }
        uVar22 = (**(code **)(*(longlong *)pFVar25 + 8))();
        EVar34 = (*pcVar8)(uVar22,&local_118);
        param_1->Result = EVar34;
        if (EVar34 != Success) break;
        pFVar28 = pFVar28 + 0x30;
        pTVar32 = local_1f8;
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
    }
  }
LAB_1421ed5bb:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar34;
}

// ValidateIllegalReferences @ 1421ed610

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::ValidateIllegalReferences
          (FSaveContext *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_4,ESaveRealm param_5)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  FProperty *pFVar3;
  bool bVar4;
  char cVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  ESavePackageResult EVar9;
  UObjectBaseUtility *this;
  UObjectBaseUtility *pUVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  bool local_res20 [8];
  FString local_e0;
  FString local_d0;
  int local_c0;
  UObjectBaseUtility *local_b8;
  FString local_b0;
  UObject *local_a0;
  FProperty *local_98;
  UObject *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FName local_58;
  FString local_50;
  
  this = (UObjectBaseUtility *)0x0;
  local_res20[0] = false;
  local_res20[1] = false;
  local_res20[2] = false;
  local_res20[3] = false;
  pUVar10 = this;
  if (param_4->ArrayNum < 1) {
    if (0 < param_2->ArrayNum) {
      ::FString::PrintfImpl(&local_d0,L"Can\'t save \'%s\': Illegal reference to private object: ");
      pwVar7 = L".";
      local_c0 = local_d0.Data.ArrayNum;
      param_4 = param_2;
      goto LAB_1421ed6e3;
    }
    FVar8.Data = (FScriptContainerElement *)this;
    if (0 < param_3->ArrayNum) {
      ::FString::PrintfImpl
                (&local_d0,
                 L"Can\'t save package: PKG_NotExternallyReferenceable: Package \'%s\' imports object: "
                );
      pwVar7 = 
      L", which is in a different mount point and its package is marked as PKG_NotExternallyReferenceable."
      ;
      local_c0 = local_d0.Data.ArrayNum;
      param_4 = param_3;
      goto LAB_1421ed6e3;
    }
  }
  else {
    ::FString::PrintfImpl(&local_d0,L"Can\'t save \'%s\': Illegal reference to private object: ");
    pwVar7 = L" (private object belongs to an external map).";
    local_c0 = local_d0.Data.ArrayNum;
LAB_1421ed6e3:
    FVar8.Data = local_d0.Data.AllocatorInstance.Data;
    local_b8 = (UObjectBaseUtility *)local_d0.Data.AllocatorInstance.Data;
    pFVar6 = ::FString::FString(&local_d0,pwVar7);
    if (&local_50 != pFVar6) {
      pUVar10 = (UObjectBaseUtility *)(pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if ((UObjectBaseUtility *)local_d0.Data.AllocatorInstance.Data != (UObjectBaseUtility *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (param_4 != (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
      local_90 = (UObject *)0x0;
      local_a0 = (UObject *)0x0;
      local_98 = (FProperty *)0x0;
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = 0;
      local_b0.Data.ArrayMax = 0;
      UE::SavePackageUtilities::FindMostLikelyCulprit
                (param_4,param_1,param_5,&local_90,&local_a0,&local_98,local_res20,&local_b0);
      if (local_a0 == (UObject *)0x0) {
        pFVar6 = ::FString::FString(&local_68,L"Unknown referencer");
        FVar11.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          this = (UObjectBaseUtility *)0x0;
        }
      }
      else {
        this = *(UObjectBaseUtility **)&local_a0->field_0x20;
        local_58.ComparisonIndex.Value = *(uint *)&local_a0->field_0x18;
        local_58.Number = *(uint *)&local_a0->field_0x1c;
        ::FName::ToString(&local_58,&local_e0);
        FVar11.Data = local_e0.Data.AllocatorInstance.Data;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
      }
      pFVar3 = local_98;
      bVar12 = false;
      if (local_98 == (FProperty *)0x0) {
        FVar8.Data = (FScriptContainerElement *)L"Unknown property";
      }
      else {
        bVar12 = true;
        bVar4 = IsThisNotNull(local_98,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)&pFVar3->_padding_,&local_e0);
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar8.Data = local_e0.Data.AllocatorInstance.Data;
          }
        }
        else {
          ::FString::FString(&local_e0,L"None");
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar8.Data = local_e0.Data.AllocatorInstance.Data;
          }
        }
      }
      ::FString::FString(&local_d0,(wchar_t *)FVar8.Data);
      if ((bVar12) && (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      bVar12 = false;
      if (local_90 == (UObject *)0x0) {
        pwVar7 = L"Unknown";
      }
      else {
        bVar12 = true;
        pFVar6 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)local_90,&local_68,(UObject *)0x0,None);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
      }
      ::FString::FString(&local_78,pwVar7);
      if ((bVar12) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      bVar12 = this == (UObjectBaseUtility *)0x0;
      if (bVar12) {
        pFVar6 = ::FString::FString(&local_68,L"Unknown owner");
      }
      else {
        pFVar6 = UObjectBaseUtility::GetPathName(this,&local_e0,(UObject *)0x0);
      }
      pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
      if ((bVar12) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((!bVar12) && (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_res20[0] == false) {
        ::FString::PrintfImpl
                  (&local_e0,L"\'%s\' referenced by \'%s\' (at \'%s\') in its \'%s\' property");
      }
      else {
        ::FString::PrintfImpl(&local_e0,L"\'%s\' referenced because it is an archetype object");
      }
      FVar8.Data = (FScriptContainerElement *)local_b8;
      FVar2.Data = local_e0.Data.AllocatorInstance.Data;
      ::FString::PrintfImpl(&local_88,L"%s%s%s");
      if (2 < (byte)LogSavePackage._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`ValidateIllegalReferences'::`22'::LOG_Static,
                   (FLogCategoryBase *)&LogSavePackage);
      }
      if (((param_1->SaveArgs).SaveFlags & 1) == 0) {
        FOutputDevice::LogfImpl((param_1->SaveArgs).Error,Warning,L"%s");
      }
      else if (1 < (byte)LogSavePackage._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`ValidateIllegalReferences'::`45'::LOG_Static,
                   (FLogCategoryBase *)&LogSavePackage);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((UObjectBaseUtility *)local_d0.Data.AllocatorInstance.Data != (UObjectBaseUtility *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      EVar9 = Error;
      goto LAB_1421edaf2;
    }
  }
  cVar5 = (**(code **)(GWarn->_padding_ + 0x60))();
  EVar9 = -(uint)(cVar5 != '\0') & Canceled;
LAB_1421edaf2:
  if (pUVar10 != (UObjectBaseUtility *)0x0) {
    FMemory::Free(pUVar10);
  }
  if ((UObjectBaseUtility *)FVar8.Data != (UObjectBaseUtility *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)0x0,0);
  return EVar9;
}

// ValidateImports @ 1421edb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl `anonymous_namespace'::ValidateImports(FSaveContext *param_1)

{
  ESaveRealm EVar1;
  UObjectBaseUtility *this;
  TObjectPtr<UObject_const_>_u_0 TVar2;
  FSavePackageContext *pFVar3;
  ISavePackageValidator *pIVar4;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *this_00;
  bool bVar7;
  char cVar8;
  ESavePackageResult EVar9;
  uint uVar10;
  int iVar11;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar12;
  FHarvestedRealm *pFVar13;
  UPackage *pUVar14;
  FName FVar15;
  UClass *pUVar16;
  UClass *pUVar17;
  FString *pFVar18;
  FUObjectItem *pFVar19;
  UObject *pUVar20;
  UObject *pUVar21;
  longlong lVar22;
  undefined8 uVar23;
  byte bVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  FNameEntryId FVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  longlong *plVar31;
  undefined1 auStackY_b88 [32];
  undefined1 local_b37;
  undefined1 local_b36;
  undefined1 local_b35;
  undefined1 local_b34;
  undefined1 local_b33 [3];
  uint local_b30;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_b28;
  UPackage *local_b18;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_b10;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_b00;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_af0;
  FSaveContext *local_ae0;
  longlong local_ad8;
  longlong local_ad0;
  longlong local_ac8;
  longlong local_ac0;
  ESaveRealm local_ab8;
  FString local_ab0;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a88;
  int iStack_a68;
  undefined4 uStack_a64;
  int local_a60;
  undefined4 uStack_a5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a58;
  FName local_a38;
  undefined1 local_a30 [16];
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_a20;
  UPackage *local_a18;
  FName local_a10;
  undefined1 local_a08 [8];
  TObjectPtr<UPackage_const_>_u_0 local_a00;
  UObject *local_9f8;
  UObject *local_9f0;
  FSaveContext *local_9e8;
  TObjectPtr<UObject_const_>_u_0 local_9e0;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_9d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_9d0;
  undefined8 uStack_9b0;
  longlong *local_9a8;
  FString *local_9a0;
  UPackage **local_998;
  FString *local_990;
  longlong *local_988;
  FString *local_980;
  longlong *local_978;
  FString *local_970;
  wchar_t *local_968;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  longlong *local_958;
  UPackage **local_950;
  FString *local_948;
  UPackage *local_940;
  FScriptContainerElement *local_938;
  FOutputDevice *local_930;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_928;
  longlong lStack_920;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_918;
  uint uStack_910;
  int iStack_90c;
  ulonglong uStack_908;
  int local_900;
  undefined4 uStack_8fc;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  wchar_t *local_8c8;
  undefined8 uStack_8c0;
  undefined1 local_8b8 [16];
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_8a8;
  longlong lStack_8a0;
  TBitArray<FDefaultBitArrayAllocator> *local_898;
  uint uStack_890;
  int iStack_88c;
  ulonglong local_888;
  undefined8 uStack_880;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b88;
  local_b30 = 0;
  local_ae0 = param_1;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`ValidateImports'::`2'::__CpuProfilerEventSpecId872,"UPackage_Save_ValidateImports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x368);
    FCpuProfilerTrace::OutputBeginEvent(`ValidateImports'::`2'::__CpuProfilerEventSpecId872);
  }
  pUVar14 = param_1->Package;
  local_af0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_af0.ArrayNum = 0;
  local_af0.ArrayMax = 0;
  local_a18 = pUVar14;
  GetObjectsWithPackage(pUVar14,&local_af0,false,RF_NoFlags,Borrowed);
  local_a10 = (FName)pUVar14->_padding_;
  local_9e8 = param_1;
  ::FName::ToString(&local_a10,&local_ab0);
  local_b00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b00.ArrayNum = 0;
  local_b00.ArrayMax = 0;
  local_b28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b28.ArrayNum = 0;
  local_b28.ArrayMax = 0;
  local_b10.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b10.ArrayNum = 0;
  local_b10.ArrayMax = 0;
  pTVar12 = FSaveContext::GetImports(param_1);
  local_ab8 = param_1->CurrentHarvestingRealm;
  local_a20 = pTVar12;
  pFVar13 = FSaveContext::GetHarvestedRealm(param_1,None);
  local_aa0 = &pFVar13->DirectImports;
  local_a58._padding_._0_4_ = 0;
  local_a88.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar12->Elements).field_0x10;
  local_a58.Array = local_a88.Array;
  local_a58._padding_._4_4_ = 1;
  local_a58.UnvisitedBitMask = 0xffffffff;
  local_a58.CurrentBitIndex = 0;
  local_a58.BaseBitIndex = 0;
  if (*(int *)&(pTVar12->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a58);
  }
  iVar11 = *(int *)&(pTVar12->Elements).field_0x28;
  bVar24 = (byte)iVar11 & 0x1f;
  local_a60 = *(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34;
  iStack_a68 = local_a58.BaseBitIndex;
  uStack_a64 = local_a58._28_4_;
  local_a88._padding_ = CONCAT44(1 << bVar24,iVar11 >> 5);
  local_a88.CurrentBitIndex = iVar11;
  local_a88.UnvisitedBitMask = -1 << bVar24;
  local_a88._24_8_ = CONCAT44(local_a58.CurrentBitIndex,iVar11) & 0xffffffffffffffe0;
  local_9d8 = pTVar12;
  TStack_9d0._padding_ = CONCAT44(local_a58._padding_._4_4_,(undefined4)local_a58._padding_);
  TStack_9d0.Array = local_a58.Array;
  TStack_9d0.UnvisitedBitMask = local_a58.UnvisitedBitMask;
  TStack_9d0.CurrentBitIndex = local_a58.CurrentBitIndex;
  TStack_9d0.BaseBitIndex = local_a58.BaseBitIndex;
  TStack_9d0._28_4_ = local_a58._28_4_;
  uStack_9b0 = CONCAT44(uStack_a5c,local_a60);
  if ((iVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  if (iVar11 != *(int *)&(pTVar12->Elements).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a88);
  }
  this_00 = local_aa0;
  local_900 = *(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34;
  lStack_920 = local_a88._padding_;
  pTStack_918 = local_a88.Array;
  local_928 = pTVar12;
  uStack_910 = local_a88.UnvisitedBitMask;
  iStack_90c = local_a88.CurrentBitIndex;
  uStack_908 = local_a88._24_8_;
  local_8a8 = pTVar12;
  lStack_8a0 = local_a88._padding_;
  local_898 = local_a88.Array;
  uStack_890 = local_a88.UnvisitedBitMask;
  iStack_88c = local_a88.CurrentBitIndex;
  local_888 = local_a88._24_8_;
  uStack_880 = CONCAT44(uStack_8fc,local_900);
  while( true ) {
    pTVar12 = local_9d8;
    if (*(int *)&(local_9d8->Elements).field_0x8 - *(int *)&(local_9d8->Elements).field_0x34 !=
        (int)uStack_9b0) {
      local_b37 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_b37);
    }
    if (((TStack_9d0.CurrentBitIndex == iStack_88c) && (TStack_9d0.Array == local_898)) &&
       (pTVar12 == local_8a8)) break;
    plVar31 = (longlong *)
              ((longlong)TStack_9d0.CurrentBitIndex * 0x10 + *(longlong *)&pTVar12->Elements);
    if ((UObject *)*plVar31 == (UObject *)0x0) {
      pUVar14 = (UPackage *)0x0;
    }
    else {
      pUVar14 = UE::CoreUObject::Private::GetPackage((UObject *)*plVar31);
    }
    pUVar17 = (UClass *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UPackage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    local_b18 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UPackage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    if (*plVar31 == 0) {
      local_a98 = 0;
      FVar15 = (FName)&local_a98;
    }
    else {
      FVar15 = UE::CoreUObject::Private::GetFName((UObject *)(local_8b8 + 8));
    }
    EVar1 = param_1->CurrentHarvestingRealm;
    uVar23 = *(undefined8 *)FVar15;
    uVar10 = 0;
    if ((int)EVar1 < (param_1->HarvestedRealms).ArrayNum) {
      uVar10 = ~EVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    FVar28.Value = (uint)uVar23;
    pFVar30 = (param_1->HarvestedRealms).AllocatorInstance.Data;
    uVar10 = ::GetTypeHash(FVar28);
    if (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x288) !=
        *(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2b4)) {
      pFVar26 = pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2b8;
      if (*(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c0) !=
          (FScriptContainerElement *)0x0) {
        pFVar26 = *(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c0);
      }
      iVar11 = *(int *)(pFVar26 +
                       (ulonglong)
                       (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c8) - 1U & uVar10) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar22 = *(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x280) +
                   (longlong)iVar11 * 0xc;
          if (*(uint *)(*(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x280) +
                       (longlong)iVar11 * 0xc) == FVar28.Value) {
            if (lVar22 != 0) goto LAB_1421edfec;
            break;
          }
          iVar11 = *(int *)(lVar22 + 4);
        } while (iVar11 != -1);
      }
    }
    uVar10 = ::GetTypeHash(FVar28);
    if (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d8) !=
        *(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x304)) {
      pFVar26 = pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x308;
      if (*(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x310) !=
          (FScriptContainerElement *)0x0) {
        pFVar26 = *(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x310);
      }
      iVar11 = *(int *)(pFVar26 +
                       (ulonglong)
                       (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x318) - 1U & uVar10) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar22 = *(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d0) +
                   (longlong)iVar11 * 0xc;
          if (*(uint *)(*(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d0) +
                       (longlong)iVar11 * 0xc) == FVar28.Value) {
            if (lVar22 != 0) goto LAB_1421edfec;
            break;
          }
          iVar11 = *(int *)(lVar22 + 4);
        } while (iVar11 != -1);
      }
    }
    local_9a0 = &local_ab0;
    local_9a8 = plVar31;
    ``anonymous_namespace'::ValidateImports'::__l6::<lambda_6>::operator()(&local_9a8);
LAB_1421edfec:
    if (local_b18 == (UPackage *)0x0) {
      local_a90 = 0;
      FVar15 = (FName)&local_a90;
    }
    else {
      FVar15 = UE::CoreUObject::Private::GetFName((UObject *)local_8b8);
    }
    EVar1 = param_1->CurrentHarvestingRealm;
    uVar23 = *(undefined8 *)FVar15;
    uVar10 = 0;
    if ((int)EVar1 < (param_1->HarvestedRealms).ArrayNum) {
      uVar10 = ~EVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    FVar28.Value = (uint)uVar23;
    pFVar30 = (param_1->HarvestedRealms).AllocatorInstance.Data;
    uVar10 = ::GetTypeHash(FVar28);
    if (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x288) !=
        *(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2b4)) {
      pFVar26 = pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2b8;
      if (*(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c0) !=
          (FScriptContainerElement *)0x0) {
        pFVar26 = *(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c0);
      }
      iVar11 = *(int *)(pFVar26 +
                       (ulonglong)
                       (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c8) - 1U & uVar10) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar22 = *(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x280) +
                   (longlong)iVar11 * 0xc;
          if (*(uint *)(*(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x280) +
                       (longlong)iVar11 * 0xc) == FVar28.Value) {
            if (lVar22 != 0) goto LAB_1421ee171;
            break;
          }
          iVar11 = *(int *)(lVar22 + 4);
        } while (iVar11 != -1);
      }
    }
    uVar10 = ::GetTypeHash(FVar28);
    if (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d8) !=
        *(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x304)) {
      pFVar26 = pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x308;
      if (*(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x310) !=
          (FScriptContainerElement *)0x0) {
        pFVar26 = *(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x310);
      }
      iVar11 = *(int *)(pFVar26 +
                       (ulonglong)
                       (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x318) - 1U & uVar10) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar22 = *(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d0) +
                   (longlong)iVar11 * 0xc;
          if (*(uint *)(*(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d0) +
                       (longlong)iVar11 * 0xc) == FVar28.Value) {
            if (lVar22 != 0) goto LAB_1421ee171;
            break;
          }
          iVar11 = *(int *)(lVar22 + 4);
        } while (iVar11 != -1);
      }
    }
    local_998 = &local_b18;
    local_990 = &local_ab0;
    ``anonymous_namespace'::ValidateImports'::__l6::<lambda_7>::operator()(&local_998);
LAB_1421ee171:
    pUVar16 = pUVar17;
    if ((UObject *)*plVar31 != (UObject *)0x0) {
      pUVar16 = UE::CoreUObject::Private::GetClass((UObject *)*plVar31);
    }
    EVar1 = param_1->CurrentHarvestingRealm;
    lVar22 = pUVar16->_padding_;
    uVar10 = 0;
    if ((int)EVar1 < (param_1->HarvestedRealms).ArrayNum) {
      uVar10 = ~EVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    FVar28.Value = (uint)lVar22;
    pFVar30 = (param_1->HarvestedRealms).AllocatorInstance.Data;
    uVar10 = ::GetTypeHash(FVar28);
    if (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x288) !=
        *(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2b4)) {
      pFVar26 = pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2b8;
      if (*(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c0) !=
          (FScriptContainerElement *)0x0) {
        pFVar26 = *(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c0);
      }
      iVar11 = *(int *)(pFVar26 +
                       (ulonglong)
                       (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c8) - 1U & uVar10) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar22 = *(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x280) +
                   (longlong)iVar11 * 0xc;
          if (*(uint *)(*(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x280) +
                       (longlong)iVar11 * 0xc) == FVar28.Value) {
            if (lVar22 != 0) goto LAB_1421ee2dc;
            break;
          }
          iVar11 = *(int *)(lVar22 + 4);
        } while (iVar11 != -1);
      }
    }
    uVar10 = ::GetTypeHash(FVar28);
    if (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d8) !=
        *(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x304)) {
      pFVar26 = pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x308;
      if (*(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x310) !=
          (FScriptContainerElement *)0x0) {
        pFVar26 = *(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x310);
      }
      iVar11 = *(int *)(pFVar26 +
                       (ulonglong)
                       (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x318) - 1U & uVar10) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar22 = *(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d0) +
                   (longlong)iVar11 * 0xc;
          if (*(uint *)(*(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d0) +
                       (longlong)iVar11 * 0xc) == FVar28.Value) {
            if (lVar22 != 0) goto LAB_1421ee2dc;
            break;
          }
          iVar11 = *(int *)(lVar22 + 4);
        } while (iVar11 != -1);
      }
    }
    local_980 = &local_ab0;
    local_988 = plVar31;
    ``anonymous_namespace'::ValidateImports'::__l6::<lambda_8>::operator()(&local_988);
LAB_1421ee2dc:
    if ((UObject *)*plVar31 != (UObject *)0x0) {
      pUVar17 = UE::CoreUObject::Private::GetClass((UObject *)*plVar31);
    }
    EVar1 = param_1->CurrentHarvestingRealm;
    uVar23 = *(undefined8 *)(pUVar17->_padding_ + 0x18);
    uVar10 = 0;
    if ((int)EVar1 < (param_1->HarvestedRealms).ArrayNum) {
      uVar10 = ~EVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    FVar28.Value = (uint)uVar23;
    pFVar30 = (param_1->HarvestedRealms).AllocatorInstance.Data;
    uVar10 = ::GetTypeHash(FVar28);
    if (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x288) !=
        *(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2b4)) {
      pFVar26 = pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2b8;
      if (*(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c0) !=
          (FScriptContainerElement *)0x0) {
        pFVar26 = *(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c0);
      }
      iVar11 = *(int *)(pFVar26 +
                       (ulonglong)
                       (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2c8) - 1U & uVar10) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar22 = *(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x280) +
                   (longlong)iVar11 * 0xc;
          if (*(uint *)(*(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x280) +
                       (longlong)iVar11 * 0xc) == FVar28.Value) {
            if (lVar22 != 0) goto LAB_1421ee44c;
            break;
          }
          iVar11 = *(int *)(lVar22 + 4);
        } while (iVar11 != -1);
      }
    }
    uVar10 = ::GetTypeHash(FVar28);
    if (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d8) !=
        *(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x304)) {
      pFVar26 = pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x308;
      if (*(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x310) !=
          (FScriptContainerElement *)0x0) {
        pFVar26 = *(FScriptContainerElement **)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x310);
      }
      iVar11 = *(int *)(pFVar26 +
                       (ulonglong)
                       (*(int *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x318) - 1U & uVar10) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar22 = *(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d0) +
                   (longlong)iVar11 * 0xc;
          if (*(uint *)(*(longlong *)(pFVar30 + (longlong)(int)EVar1 * 0x5f0 + 0x2d0) +
                       (longlong)iVar11 * 0xc) == FVar28.Value) {
            if (lVar22 != 0) goto LAB_1421ee44c;
            break;
          }
          iVar11 = *(int *)(lVar22 + 4);
        } while (iVar11 != -1);
      }
    }
    local_970 = &local_ab0;
    local_978 = plVar31;
    ``anonymous_namespace'::ValidateImports'::__l6::<lambda_9>::operator()(&local_978);
LAB_1421ee44c:
    pUVar14 = local_b18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b18 != (UPackage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b18);
    }
    local_a00.DebugPtr = pUVar14;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar14 != (UPackage *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UPackage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
    }
    uVar10 = ((uint)((ulonglong)pUVar14 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar14 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    iVar11 = TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TObjectPtr<UPackage_const_>_>
                       (&param_1->PrestreamPackages,uVar10 ^ uVar10 >> 0x10,
                        (TObjectPtr<UPackage_const_> *)&local_a00.ObjectPtr);
    if (iVar11 == -1) {
      if ((((*(UObjectBaseUtility **)(*plVar31 + 0x20) != (UObjectBaseUtility *)0x0) &&
           (bVar7 = UObjectBaseUtility::IsInPackage
                              (*(UObjectBaseUtility **)(*plVar31 + 0x20),param_1->Package), bVar7))
          && (pUVar14 = UObjectBase::GetExternalPackage((UObjectBase *)*plVar31),
             pUVar14 == (UPackage *)0x0)) && (param_1->CurrentHarvestingRealm != Optional)) {
        local_9f8 = (UObject *)*plVar31;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_9f8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_9f8);
        }
        bVar7 = FSaveContext::IsTransient(param_1,(TObjectPtr<UObject>)&local_9f8);
        if ((bVar7) &&
           (pFVar19 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*plVar31 + 0xc)),
           ((uint)((ulonglong)(pFVar19->field0_0x0).FlagsAndRefCount >> 0x39) & 1) != 0)) {
          local_a30._8_8_ = *(undefined8 *)(*plVar31 + 0x20);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)local_a30._8_8_ != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_a30._8_8_);
          }
          bVar7 = FSaveContext::IsTransient(param_1,(TObjectPtr<UObject>)((longlong)local_a30 + 8));
          if (((!bVar7) ||
              (pFVar19 = FUObjectArray::IndexToObject
                                   (&GUObjectArray,*(int *)(*(longlong *)(*plVar31 + 0x20) + 0xc)),
              ((uint)((ulonglong)(pFVar19->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("SaveContext.IsTransient(Import->GetOuter()) && Import->GetOuter()->IsNative()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                 ,0x3f2,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
        }
        else if (2 < (byte)LogSavePackage._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)*plVar31,&local_8d8,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<3>
                    (&`ValidateImports'::`34'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
          if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
          }
        }
        local_9f0 = (UObject *)*plVar31;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_9f0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_9f0);
        }
        bVar7 = FSaveContext::IsTransient(param_1,(TObjectPtr<UObject>)&local_9f0);
        if (((!bVar7) &&
            (pFVar19 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*plVar31 + 0xc)),
            ((uint)((ulonglong)(pFVar19->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bWrongImport || SaveContext.IsTransient(Import) || Import->IsNative()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                               ,0x3f5,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
      }
      if (((param_1->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) ||
         (param_1->CurrentHarvestingRealm == Optional)) {
        iVar11 = local_af0.ArrayNum;
        this = (UObjectBaseUtility *)*plVar31;
        pFVar30 = local_af0.AllocatorInstance.Data + (longlong)local_af0.ArrayNum * 8;
        FVar29.Data = local_af0.AllocatorInstance.Data;
        while( true ) {
          if (local_af0.ArrayNum != iVar11) {
            local_b36 = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_b36);
          }
          if (FVar29.Data == pFVar30) {
            iVar11 = local_af0.ArrayNum;
            pUVar20 = (UObject *)*plVar31;
            pFVar30 = local_af0.AllocatorInstance.Data + (longlong)local_af0.ArrayNum * 8;
            FVar29.Data = local_af0.AllocatorInstance.Data;
            goto LAB_1421ee842;
          }
          bVar7 = UObjectBaseUtility::IsInOuter(this,*(UObject **)FVar29.Data);
          if (bVar7) break;
          FVar29.Data = FVar29.Data + 8;
        }
      }
      else {
LAB_1421ee8c2:
        if ((((uint)local_b18->PackageFlagsPrivate >> 0x11 & 1) != 0) &&
           (bVar7 = ``anonymous_namespace'::ValidateImports'::__l2::<lambda_5>::operator()
                              (&local_9e8,(UObject *)*plVar31), !bVar7)) {
          local_ad8 = *plVar31;
          if ((local_b10.AllocatorInstance.Data <= (FScriptContainerElement *)&local_ad8) &&
             (((FScriptContainerElement *)&local_ad8 <
               local_b10.AllocatorInstance.Data + (longlong)local_b10.ArrayMax * 8 &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
          iVar11 = local_b10.ArrayNum;
          if (local_b10.ArrayNum == local_b10.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b10.AllocatorInstance,&local_b10.ArrayMax);
          }
          local_b10.ArrayNum = iVar11 + 1;
          *(longlong *)(local_b10.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_ad8;
        }
        if (((*(uint *)(*plVar31 + 8) & 1) == 0) &&
           (((param_1->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0 ||
            (((uint)local_b18->PackageFlagsPrivate & 0x10) == 0)))) {
          local_ad0 = *plVar31;
          if ((local_b00.AllocatorInstance.Data <= (FScriptContainerElement *)&local_ad0) &&
             (((FScriptContainerElement *)&local_ad0 <
               local_b00.AllocatorInstance.Data + (longlong)local_b00.ArrayMax * 8 &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
          iVar11 = local_b00.ArrayNum;
          if (local_b00.ArrayNum == local_b00.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b00.AllocatorInstance,&local_b00.ArrayMax);
          }
          local_b00.ArrayNum = iVar11 + 1;
          *(longlong *)(local_b00.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_ad0;
        }
        if (((uint)local_b18->PackageFlagsPrivate >> 0xb & 1) != 0) {
          TVar2.DebugPtr = (UObject *)*plVar31;
          local_9e0.DebugPtr = TVar2.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (TVar2.DebugPtr != (UObject *)0x0) {
              UE::GC::MarkAsReachable(TVar2.DebugPtr);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar2.DebugPtr != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(TVar2.DebugPtr);
            }
          }
          uVar10 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
                   (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          iVar11 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                             (this_00,uVar10 >> 0x10 ^ uVar10,
                              (TObjectPtr<UObject_const_> *)&local_9e0.ObjectPtr);
          if (iVar11 != -1) {
            FPackageName::GetPackageMountPoint((FString *)local_a30,SUB81(&local_ab0,0));
            local_a38 = (FName)local_b18->_padding_;
            local_878.Base = local_858;
            local_878.CurPos = local_858;
            local_878.End = local_42;
            local_878.bIsDynamic = false;
            local_878.bIsExternal = false;
            ::FName::AppendString(&local_a38,&local_878);
            local_968 = local_878.Base;
            uStack_960 = (undefined4)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
            uStack_8c0 = CONCAT44(uStack_95c,uStack_960);
            local_8c8 = local_878.Base;
            FPackageName::GetPackageMountPoint
                      ((TStringView<wchar_t> *)local_a08,SUB81(&local_8c8,0));
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
            if (((FScriptContainerElement *)local_a30._0_8_ == (FScriptContainerElement *)0x0) ||
               (local_a08 == (undefined1  [8])0x0)) {
              local_ac0 = *plVar31;
              if ((local_b28.AllocatorInstance.Data <= (FScriptContainerElement *)&local_ac0) &&
                 (((FScriptContainerElement *)&local_ac0 <
                   local_b28.AllocatorInstance.Data + (longlong)local_b28.ArrayMax * 8 &&
                  (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)))) {
                pcVar5 = (code *)swi(3);
                EVar9 = (*pcVar5)();
                return EVar9;
              }
              iVar11 = local_b28.ArrayNum;
              if (local_b28.ArrayNum == local_b28.ArrayMax) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_b28.AllocatorInstance,&local_b28.ArrayMax);
              }
              local_b28.ArrayNum = iVar11 + 1;
              lVar22 = local_ac0;
            }
            else {
              if ((undefined1  [8])local_a30._0_8_ == local_a08) goto LAB_1421eed2e;
              local_ac8 = *plVar31;
              if (((local_b28.AllocatorInstance.Data <= (FScriptContainerElement *)&local_ac8) &&
                  ((FScriptContainerElement *)&local_ac8 <
                   local_b28.AllocatorInstance.Data + (longlong)local_b28.ArrayMax * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                EVar9 = (*pcVar5)();
                return EVar9;
              }
              iVar11 = local_b28.ArrayNum;
              if (local_b28.ArrayNum == local_b28.ArrayMax) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_b28.AllocatorInstance,&local_b28.ArrayMax);
              }
              local_b28.ArrayNum = iVar11 + 1;
              lVar22 = local_ac8;
            }
            *(longlong *)(local_b28.AllocatorInstance.Data + (longlong)iVar11 * 8) = lVar22;
          }
        }
      }
    }
    else {
      if ((UPackage *)*plVar31 != local_b18) {
        local_950 = &local_b18;
        local_948 = &local_ab0;
        local_958 = plVar31;
        ``anonymous_namespace'::ValidateImports'::__l9::<lambda_10>::operator()(&local_958);
      }
      if (3 < (byte)LogSavePackage._0_1_) {
        if (local_b18 == (UPackage *)0x0) {
          uVar10 = local_b30 | 2;
          local_b30 = uVar10;
          pFVar18 = ::FString::FString(&local_8f8,L"None");
        }
        else {
          uVar10 = local_b30 | 1;
          local_b30 = uVar10;
          pFVar18 = UE::CoreUObject::Private::GetPathName
                              (&local_8e8,(UObject *)local_b18,(UObject *)0x0);
        }
        pFVar30 = (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar18->Data).ArrayNum = 0;
        (pFVar18->Data).ArrayMax = 0;
        if (((uVar10 & 2) != 0) &&
           (uVar10 = uVar10 & 0xfffffffd, local_b30 = uVar10,
           local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
        }
        if (((uVar10 & 1) != 0) &&
           (local_b30 = uVar10 & 0xfffffffe,
           local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<4>
                  (&`ValidateImports'::`10'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
        if (pFVar30 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar30);
        }
      }
    }
LAB_1421eed2e:
    TStack_9d0.UnvisitedBitMask = TStack_9d0.UnvisitedBitMask & ~TStack_9d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_9d0);
  }
  if (((local_b00.ArrayNum < 1) && (local_b28.ArrayNum < 1)) && (local_b10.ArrayNum < 1)) {
    pFVar3 = (param_1->SaveArgs).SavePackageContext;
    if ((pFVar3 == (FSavePackageContext *)0x0) ||
       ((pFVar3->SavePackageSettings).ExternalImportValidations.ArrayNum < 1)) {
LAB_1421eeea8:
      pFVar3 = (param_1->SaveArgs).SavePackageContext;
      if (((pFVar3 == (FSavePackageContext *)0x0) ||
          (pIVar4 = (pFVar3->Validator).Ptr, pIVar4 == (ISavePackageValidator *)0x0)) ||
         (EVar9 = (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_a18,local_a20), EVar9 == Success
         )) {
        cVar8 = (**(code **)(GWarn->_padding_ + 0x60))();
        EVar9 = -(uint)(cVar8 != '\0') & Canceled;
      }
    }
    else {
      iVar11 = (pFVar3->SavePackageSettings).ExternalImportValidations.ArrayNum;
      pFVar30 = (pFVar3->SavePackageSettings).ExternalImportValidations.AllocatorInstance.Data;
      pFVar26 = pFVar30 + (longlong)iVar11 * 0x30;
      while( true ) {
        if ((pFVar3->SavePackageSettings).ExternalImportValidations.ArrayNum != iVar11) {
          local_b33[0] = 0;
          `TCheckedPointerIterator<TFunction<enum_ESavePackageResult___cdecl(FImportsValidationContext_const_&)>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_b33);
        }
        param_1 = local_ae0;
        if (pFVar30 == pFVar26) goto LAB_1421eeea8;
        EVar1 = local_ae0->CurrentHarvestingRealm;
        pUVar14 = local_ae0->Package;
        uVar10 = 0;
        if ((int)EVar1 < (local_ae0->HarvestedRealms).ArrayNum) {
          uVar10 = ~EVar1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_938 = (local_ae0->HarvestedRealms).AllocatorInstance.Data +
                    (longlong)(int)EVar1 * 0x5f0 + 0x130;
        if (((local_ae0->SaveArgs).SaveFlags & 1) == 0) {
          local_930 = (local_ae0->SaveArgs).Error;
        }
        else {
          local_930 = (FOutputDevice *)0x0;
        }
        local_940 = pUVar14;
        UE::Core::Private::Function::CheckCallable(*(void **)pFVar30);
        pFVar25 = *(FScriptContainerElement **)(pFVar30 + 0x28);
        pcVar5 = *(code **)pFVar30;
        if (pFVar25 == (FScriptContainerElement *)0x0) {
          pFVar25 = pFVar30 + 0x10;
        }
        uVar23 = (**(code **)(*(longlong *)pFVar25 + 8))();
        EVar9 = (*pcVar5)(uVar23,&local_940);
        local_ae0->Result = EVar9;
        if (EVar9 != Success) break;
        pFVar30 = pFVar30 + 0x30;
      }
    }
  }
  else {
    EVar9 = ValidateIllegalReferences(param_1,&local_b00,&local_b28,&local_b10,local_ab8);
  }
  if (local_b10.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b10.AllocatorInstance.Data);
  }
  if (local_b28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b28.AllocatorInstance.Data);
  }
  if (local_b00.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b00.AllocatorInstance.Data);
  }
  if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
  }
  if (local_af0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af0.AllocatorInstance.Data);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar9;
LAB_1421ee842:
  if (local_af0.ArrayNum != iVar11) {
    local_b35 = 0;
    `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_b35)
    ;
  }
  if (FVar29.Data == pFVar30) {
    pUVar20 = UObjectBaseUtility::GetOutermostObject((UObjectBaseUtility *)*plVar31);
    iVar11 = local_af0.ArrayNum;
    uVar27 = (ulonglong)local_af0.ArrayNum;
    pFVar30 = local_af0.AllocatorInstance.Data + uVar27 * 8;
    FVar29.Data = local_af0.AllocatorInstance.Data;
    goto LAB_1421ee890;
  }
  bVar7 = UObjectBaseUtility::IsInOuter(*(UObjectBaseUtility **)FVar29.Data,pUVar20);
  if (bVar7) goto LAB_1421eed2e;
  FVar29.Data = FVar29.Data + 8;
  goto LAB_1421ee842;
LAB_1421ee890:
  if ((int)uVar27 != iVar11) {
    local_b34 = 0;
    `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_b34)
    ;
  }
  if (FVar29.Data == pFVar30) goto LAB_1421ee8c2;
  pUVar21 = UObjectBaseUtility::GetOutermostObject(*(UObjectBaseUtility **)FVar29.Data);
  if (pUVar21 == pUVar20) goto LAB_1421eed2e;
  uVar27 = local_af0._8_8_ & 0xffffffff;
  FVar29.Data = FVar29.Data + 8;
  goto LAB_1421ee890;
}

// ValidateRealms @ 1421eef90

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl `anonymous_namespace'::ValidateRealms(FSaveContext *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  UObjectBaseUtility *this;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  ForAnyElementType FVar15;
  byte bVar16;
  ESavePackageResult EVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res10 [8];
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar16 = 0;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar10 = false;
    bVar11 = false;
  }
  else {
    bVar10 = true;
    bVar11 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`ValidateRealms'::`2'::__CpuProfilerEventSpecId549,"UPackage_Save_ValidateRealms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x225);
    FCpuProfilerTrace::OutputBeginEvent(`ValidateRealms'::`2'::__CpuProfilerEventSpecId549);
  }
  iVar3 = (param_1->HarvestedIllegalReferences).ArrayNum;
  if (iVar3 == 0) {
    cVar12 = (**(code **)(GWarn->_padding_ + 0x60))();
    EVar17 = -(uint)(cVar12 != '\0') & Canceled;
  }
  else {
    pFVar19 = (param_1->HarvestedIllegalReferences).AllocatorInstance.Data;
    pFVar1 = pFVar19 + (longlong)iVar3 * 0x28;
    while( true ) {
      if ((param_1->HarvestedIllegalReferences).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FIllegalReference_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar19 == pFVar1) break;
      FVar2 = pFVar19[0x10];
      if (FVar2 == (FScriptContainerElement)0x1) {
        if (*(UObjectBaseUtility **)(pFVar19 + 8) != (UObjectBaseUtility *)0x0) {
          bVar16 = bVar16 | 1;
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)(pFVar19 + 8),&local_48,(UObject *)0x0);
        }
        if (*(UObjectBaseUtility **)pFVar19 != (UObjectBaseUtility *)0x0) {
          bVar16 = bVar16 | 2;
          UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)pFVar19,&local_58,(UObject *)0x0);
        }
        ::FString::PrintfImpl
                  (&local_128,
                   L"Can\'t save %s: Non-optional object (%s) has a reference to optional object (%s). Only optional objects can refer to other optional objects."
                  );
        FVar18.Data = local_128.Data.AllocatorInstance.Data;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        if (((bVar16 & 2) != 0) &&
           (bVar16 = bVar16 & 0xfd,
           local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if ((bVar16 & 1) != 0) {
          bVar16 = bVar16 & 0xfe;
          FVar15.Data = local_48.Data.AllocatorInstance.Data;
          goto LAB_1421ef6a7;
        }
      }
      else if (FVar2 == (FScriptContainerElement)0x2) {
        if (*(UObjectBaseUtility **)(pFVar19 + 8) != (UObjectBaseUtility *)0x0) {
          bVar16 = bVar16 | 4;
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)(pFVar19 + 8),&local_68,(UObject *)0x0);
        }
        if (*(UObjectBaseUtility **)pFVar19 != (UObjectBaseUtility *)0x0) {
          bVar16 = bVar16 | 8;
          UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)pFVar19,&local_78,(UObject *)0x0);
        }
        ::FString::PrintfImpl
                  (&local_138,
                   L"Can\'t save %s: Optional object (%s) has a reference to cooked object (%s) which is missing. Non optional objects referenced by optional objects needs to be present in cooked data."
                  );
        FVar18.Data = local_138.Data.AllocatorInstance.Data;
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        if (((bVar16 & 8) != 0) &&
           (bVar16 = bVar16 & 0xf7,
           local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((bVar16 & 4) != 0) {
          bVar16 = bVar16 & 0xfb;
          FVar15.Data = local_68.Data.AllocatorInstance.Data;
          goto LAB_1421ef6a7;
        }
      }
      else if (FVar2 == (FScriptContainerElement)0x3) {
        if (*(UObjectBaseUtility **)(pFVar19 + 8) != (UObjectBaseUtility *)0x0) {
          bVar16 = bVar16 | 0x10;
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)(pFVar19 + 8),&local_88,(UObject *)0x0);
        }
        if (*(UObjectBaseUtility **)pFVar19 != (UObjectBaseUtility *)0x0) {
          bVar16 = bVar16 | 0x20;
          UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)pFVar19,&local_98,(UObject *)0x0);
        }
        ::FString::PrintfImpl
                  (&local_148,
                   L"Can\'t save %s: Object (%s) is an export but is an instance of class (%s) which is unsaveable: %s"
                  );
        FVar18.Data = local_148.Data.AllocatorInstance.Data;
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        if (((bVar16 & 0x20) != 0) &&
           (bVar16 = bVar16 & 0xdf,
           local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if ((bVar16 & 0x10) != 0) {
          bVar16 = bVar16 & 0xef;
          FVar15.Data = local_88.Data.AllocatorInstance.Data;
          goto LAB_1421ef6a7;
        }
      }
      else if (FVar2 == (FScriptContainerElement)0x4) {
        if (*(UObjectBaseUtility **)(pFVar19 + 8) != (UObjectBaseUtility *)0x0) {
          bVar16 = bVar16 | 0x40;
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)(pFVar19 + 8),&local_a8,(UObject *)0x0);
        }
        if (*(UObjectBaseUtility **)pFVar19 != (UObjectBaseUtility *)0x0) {
          bVar16 = bVar16 | 0x80;
          UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)pFVar19,&local_b8,(UObject *)0x0);
        }
        ::FString::PrintfImpl
                  (&local_158,
                   L"Can\'t save %s: Object (%s) is an export but is a subobject of (%s) which is unsaveable: %s"
                  );
        FVar18.Data = local_158.Data.AllocatorInstance.Data;
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        if (((char)bVar16 < '\0') &&
           (bVar16 = bVar16 & 0x7f,
           local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((bVar16 & 0x40) != 0) {
          bVar16 = bVar16 & 0xbf;
          FVar15.Data = local_a8.Data.AllocatorInstance.Data;
          goto LAB_1421ef6a7;
        }
      }
      else if (FVar2 == (FScriptContainerElement)0x5) {
        if ((*(longlong *)pFVar19 != 0) &&
           (this = *(UObjectBaseUtility **)(pFVar19 + 8), this != (UObjectBaseUtility *)0x0)) {
          pUVar13 = UObjectBaseUtility::GetOutermostObject(*(UObjectBaseUtility **)pFVar19);
          pUVar14 = UObjectBaseUtility::GetOutermostObject(this);
          if ((pUVar13 == pUVar14) &&
             ((param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0)) {
            if (*(UObjectBaseUtility **)(pFVar19 + 8) != (UObjectBaseUtility *)0x0) {
              bVar7 = true;
              UObjectBaseUtility::GetPathName
                        (*(UObjectBaseUtility **)(pFVar19 + 8),&local_e8,(UObject *)0x0);
            }
            if (*(UObjectBaseUtility **)pFVar19 != (UObjectBaseUtility *)0x0) {
              bVar6 = true;
              UObjectBaseUtility::GetPathName
                        (*(UObjectBaseUtility **)pFVar19,&local_f8,(UObject *)0x0);
            }
            ::FString::PrintfImpl
                      (&local_178,
                       L"Can\'t save %s: export (%s) has a reference to export (%s) which still has its external package set to (%s)."
                      );
            FVar18.Data = local_178.Data.AllocatorInstance.Data;
            local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.Data.ArrayNum = 0;
            local_178.Data.ArrayMax = 0;
            if ((bVar6) &&
               (bVar6 = false,
               local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              bVar7 = false;
              FVar15.Data = local_e8.Data.AllocatorInstance.Data;
              goto LAB_1421ef6a7;
            }
            goto LAB_1421ef6b1;
          }
        }
        if (*(UObjectBaseUtility **)(pFVar19 + 8) != (UObjectBaseUtility *)0x0) {
          bVar9 = true;
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)(pFVar19 + 8),&local_c8,(UObject *)0x0);
        }
        if (*(UObjectBaseUtility **)pFVar19 != (UObjectBaseUtility *)0x0) {
          bVar8 = true;
          UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)pFVar19,&local_d8,(UObject *)0x0);
        }
        ::FString::PrintfImpl
                  (&local_168,
                   L"Can\'t save %s: export (%s) has a reference to import (%s), but the import is in ExternalPackage (%s) which was marked unsaveable."
                  );
        FVar18.Data = local_168.Data.AllocatorInstance.Data;
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Data.ArrayNum = 0;
        local_168.Data.ArrayMax = 0;
        if ((bVar8) &&
           (bVar8 = false, local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          bVar9 = false;
          FVar15.Data = local_c8.Data.AllocatorInstance.Data;
          goto LAB_1421ef6a7;
        }
      }
      else {
        if (*(UObjectBaseUtility **)(pFVar19 + 8) != (UObjectBaseUtility *)0x0) {
          bVar5 = true;
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)(pFVar19 + 8),&local_108,(UObject *)0x0);
        }
        if (*(UObjectBaseUtility **)pFVar19 != (UObjectBaseUtility *)0x0) {
          bVar4 = true;
          UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)pFVar19,&local_118,(UObject *)0x0)
          ;
        }
        ::FString::PrintfImpl
                  (&local_188,
                   L"Can\'t save %s: Unknown Illegal reference from object (%s) to object (%s)");
        FVar18.Data = local_188.Data.AllocatorInstance.Data;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        if ((bVar4) &&
           (bVar4 = false, local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          bVar5 = false;
          FVar15.Data = local_108.Data.AllocatorInstance.Data;
LAB_1421ef6a7:
          if (FVar15.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar15.Data);
          }
        }
      }
LAB_1421ef6b1:
      if (((param_1->SaveArgs).SaveFlags & 1) == 0) {
        FOutputDevice::LogfImpl((param_1->SaveArgs).Error,Warning,L"%s");
      }
      else if (1 < (byte)LogSavePackage._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`ValidateRealms'::`22'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
      }
      if (FVar18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar18.Data);
      }
      pFVar19 = pFVar19 + 0x28;
    }
    EVar17 = Error;
    bVar10 = bVar11;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar17;
}

// VisitProperty @ 1421ef8c0

EPropertyVisitorControlFlow __cdecl
PropertyVisitorHelpers::VisitProperty
          (UStruct *param_1,FProperty *param_2,FPropertyVisitorContext *param_3,
          TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
          *param_4)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  EPropertyVisitorControlFlow EVar4;
  int iVar5;
  FPropertyVisitorScope local_res10;
  FPropertyVisitorScope local_c8;
  FPropertyVisitorInfo local_c0;
  FPropertyVisitorInfo local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FPropertyVisitorPath *local_70;
  longlong local_68;
  void *local_60;
  EScope local_58;
  FPropertyVisitorPath *local_50;
  longlong local_48;
  void *local_40;
  EScope local_38;
  
  if (param_2->ArrayDim == 1) {
    local_c8.Path = param_3->Path;
    local_c0.Index = -1;
    local_c0.PropertyInfo = None;
    local_c0.bContainsInnerProperties = false;
    local_c0.Property = param_2;
    local_c0.ParentStructType = param_1;
    FPropertyVisitorPath::Push(local_c8.Path,&local_c0);
    pvVar1 = (param_3->Data).PropertyData;
    if ((param_2->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    if ((pvVar1 == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    local_70 = param_3->Path;
    local_68 = (longlong)param_2->Offset_Internal + (longlong)pvVar1;
    local_58 = param_3->Scope;
    local_90 = *(undefined8 *)param_4;
    local_88 = *(undefined8 *)&param_4->field_0x8;
    local_60 = pvVar1;
    EVar4 = (**(code **)(param_2->_padding_ + 0x98))(param_2,&local_70,&local_90);
    FPropertyVisitorScope::~FPropertyVisitorScope(&local_c8);
  }
  else {
    iVar5 = 0;
    if (param_2->ArrayDim < 1) {
      EVar4 = StepOver;
    }
    else {
      do {
        local_res10.Path = param_3->Path;
        local_a8.PropertyInfo = StaticArrayIndex;
        local_a8.bContainsInnerProperties = false;
        local_a8.Property = param_2;
        local_a8.ParentStructType = param_1;
        local_a8.Index = iVar5;
        FPropertyVisitorPath::Push(local_res10.Path,&local_a8);
        pvVar1 = (param_3->Data).PropertyData;
        if (((iVar5 < 0) || (param_2->ArrayDim <= iVar5)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        if ((pvVar1 == (void *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        local_50 = param_3->Path;
        local_48 = (longlong)pvVar1 +
                   (longlong)param_2->Offset_Internal +
                   (longlong)iVar5 * (longlong)param_2->ElementSize;
        local_38 = param_3->Scope;
        local_80 = *(undefined8 *)param_4;
        local_78 = *(undefined8 *)&param_4->field_0x8;
        local_40 = pvVar1;
        EVar4 = (**(code **)(param_2->_padding_ + 0x98))(param_2,&local_50,&local_80);
        if ((EVar4 & ~StepOut) == Stop) {
          FPropertyVisitorScope::~FPropertyVisitorScope(&local_res10);
          return EVar4;
        }
        FPropertyVisitorScope::~FPropertyVisitorScope(&local_res10);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_2->ArrayDim);
    }
  }
  return EVar4;
}

// VisitProperty @ 1421efb10

EPropertyVisitorControlFlow __cdecl
PropertyVisitorHelpers::VisitProperty
          (UStruct *param_1,FProperty *param_2,FPropertyVisitorPath *param_3,
          FPropertyVisitorData *param_4,
          TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
          *param_5)

{
  EPropertyVisitorControlFlow EVar1;
  code *local_38;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
  **local_30;
  FPropertyVisitorContext local_28;
  
  local_28.Data.PropertyData = param_4->PropertyData;
  local_28.Data.ParentStructData = param_4->ParentStructData;
  local_30 = &param_5;
  local_28.Scope = All;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`PropertyVisitorHelpers::VisitProperty'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
             ::Call;
  local_28.Path = param_3;
  EVar1 = VisitProperty(param_1,param_2,&local_28,
                        (TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
                         *)&local_38);
  return EVar1;
}

// WriteAdditionalExportFiles @ 1421efb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl `anonymous_namespace'::WriteAdditionalExportFiles(FSaveContext *param_1)

{
  TArray<FLargeMemoryWriter,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FSavePackageContext *pFVar5;
  code *pcVar6;
  FIoBuffer this;
  bool bVar7;
  char cVar8;
  ESavePackageResult EVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  uchar *puVar12;
  IPackageWriter *pIVar13;
  wchar_t *pwVar14;
  ForElementType<FLargeMemoryWriter> FVar15;
  ForElementType<FLargeMemoryWriter> FVar16;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [4];
  FName local_a4;
  FIoBuffer local_98;
  FString local_90;
  void *local_80 [2];
  FString local_70;
  FName local_60;
  FString local_58;
  uchar local_48 [8];
  uchar local_40 [4];
  undefined2 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar5 = (param_1->SaveArgs).SavePackageContext;
  if (((param_1->SaveArgs).ArchiveCookData != (FArchiveCookData *)0x0) &&
     (0 < (param_1->AdditionalFilesFromExports).ArrayNum)) {
    if (param_1->CurrentHarvestingRealm == Optional) {
      local_a4 = (FName)param_1->Package->_padding_;
      ::FName::ToString(&local_a4,&local_90);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SaveContext.GetCurrentHarvestingRealm() != ESaveRealm::Optional",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                         ,0xbd2,
                         L"Addtional export files is currently unsupported with optional package multi output, Package %s"
                        );
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
    }
    pIVar13 = (IPackageWriter *)0x0;
    if (((pFVar5 == (FSavePackageContext *)0x0) ||
        (pIVar13 = pFVar5->PackageWriter, pIVar13 == (IPackageWriter *)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PackageWriter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0xbd4,L"Cooking requires a PackageWriter"), bVar7)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    FVar15 = (param_1->AdditionalFilesFromExports).AllocatorInstance.SecondaryData;
    pTVar1 = &param_1->AdditionalFilesFromExports;
    iVar4 = (param_1->AdditionalFilesFromExports).ArrayNum;
    if (FVar15 == (ForElementType<FLargeMemoryWriter>)0x0) {
      FVar15 = (ForElementType<FLargeMemoryWriter>)pTVar1;
    }
    FVar16 = (ForElementType<FLargeMemoryWriter>)((longlong)iVar4 * 0xc0 + (longlong)FVar15);
    while( true ) {
      if ((param_1->AdditionalFilesFromExports).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FLargeMemoryWriter,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_a8);
      }
      if (FVar15 == FVar16) break;
      uVar10 = (**(code **)(*(longlong *)FVar15 + 0x30))(FVar15);
      param_1->TotalPackageSizeUncompressed = param_1->TotalPackageSizeUncompressed + uVar10;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_3c = 0;
      local_40[0] = FIoChunkId::InvalidChunkId.Id[8];
      local_40[1] = FIoChunkId::InvalidChunkId.Id[9];
      local_40[2] = FIoChunkId::InvalidChunkId.Id[10];
      local_40[3] = FIoChunkId::InvalidChunkId.Id[0xb];
      local_48[0] = FIoChunkId::InvalidChunkId.Id[0];
      local_48[1] = FIoChunkId::InvalidChunkId.Id[1];
      local_48[2] = FIoChunkId::InvalidChunkId.Id[2];
      local_48[3] = FIoChunkId::InvalidChunkId.Id[3];
      local_48[4] = FIoChunkId::InvalidChunkId.Id[4];
      local_48[5] = FIoChunkId::InvalidChunkId.Id[5];
      local_48[6] = FIoChunkId::InvalidChunkId.Id[6];
      local_48[7] = FIoChunkId::InvalidChunkId.Id[7];
      local_60 = (FName)param_1->Package->_padding_;
      puVar11 = (undefined8 *)(**(code **)(*(longlong *)FVar15 + 0x18))(FVar15,local_80);
      if (*(int *)(puVar11 + 1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar11;
      }
      ::FString::operator=(&local_58,pwVar14);
      if (local_80[0] != (void *)0x0) {
        FMemory::Free(local_80[0]);
      }
      if (5 < (byte)LogSavePackage._0_1_) {
        ::FName::ToString(&local_60,&local_70);
        UE::Logging::Private::BasicLog<6>
                  (&`WriteAdditionalExportFiles'::`28'::LOG_Static,
                   (FLogCategoryBase *)&LogSavePackage);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      puVar12 = FLargeMemoryData::ReleaseOwnership((FLargeMemoryData *)((longlong)FVar15 + 0x98));
      FIoBuffer::FIoBuffer(&local_98,AssumeOwnership,puVar12,uVar10);
      (**(code **)((longlong)*pIVar13 + 0x30))(pIVar13,&local_60);
      this.CorePtr.Reference = local_98.CorePtr.Reference;
      if (local_98.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_98.CorePtr.Reference);
        LOCK();
        piVar2 = (int *)((longlong)this.CorePtr.Reference + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this.CorePtr.Reference);
          ::operator_delete((void *)this.CorePtr.Reference,0x20);
        }
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FVar15 = (ForElementType<FLargeMemoryWriter>)((longlong)FVar15 + 0xc0);
    }
    FVar15 = (param_1->AdditionalFilesFromExports).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<FLargeMemoryWriter>)0x0) {
      FVar15 = (ForElementType<FLargeMemoryWriter>)pTVar1;
    }
    DestructItems<FLargeMemoryWriter,int>
              ((FLargeMemoryWriter *)FVar15,(param_1->AdditionalFilesFromExports).ArrayNum);
    piVar2 = &(param_1->AdditionalFilesFromExports).ArrayMax;
    (param_1->AdditionalFilesFromExports).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLargeMemoryWriter>_>
                (0xc0,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  cVar8 = (**(code **)(GWarn->_padding_ + 0x60))();
  return -(uint)(cVar8 != '\0') & Canceled;
}

// WriteBulkData @ 1421efeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::WriteBulkData(FSaveContext *param_1,long64 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ESaveRealm EVar4;
  IPackageWriter *pIVar5;
  code *pcVar6;
  FFeedbackContext *pFVar7;
  bool bVar8;
  ESavePackageResult EVar9;
  FLinkerSave *this;
  longlong lVar10;
  TFileRegionArchive<FLargeMemoryWriter> *pTVar11;
  ulong64 uVar12;
  uchar *puVar13;
  FText *pFVar14;
  code **ppcVar15;
  ushort uVar16;
  undefined1 auStackY_278 [32];
  longlong local_248;
  FName local_240;
  FIoBuffer local_238;
  FSaveContext *local_230;
  undefined1 local_228;
  FSaveContext *local_218;
  IPackageWriter *local_210;
  undefined1 local_208;
  FSaveContext *local_200;
  code *pcStack_1f8;
  FName *local_1f0;
  FSaveContext **ppFStack_1e8;
  FSaveContext **local_1e0;
  ushort uStack_1d8;
  undefined6 uStack_1d6;
  FSaveContext *local_1d0;
  code *pcStack_1c8;
  FName *local_1c0;
  FSaveContext **ppFStack_1b8;
  FSaveContext **local_1b0;
  ushort uStack_1a8;
  undefined6 uStack_1a6;
  FSaveContext *local_1a0;
  code *pcStack_198;
  FName *local_190;
  FSaveContext **ppFStack_188;
  FSaveContext **local_180;
  ushort uStack_178;
  undefined6 uStack_176;
  FText local_170;
  FText local_160;
  FText local_150;
  FText local_140;
  FSlowTask local_128;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this = FSaveContext::GetLinker(param_1);
  plVar2 = &this->_padding_;
  lVar10 = (**(code **)(*plVar2 + 0x28))(plVar2);
  this->_padding_ = lVar10;
  if ((this->_padding_ == 0) || (*(longlong *)(this->_padding_ + 0x10) == 0)) {
    bVar8 = FLinkerSave::HasCookedIndexBulkData(this);
    if ((bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Linker.HasCookedIndexBulkData()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0xb23,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    pTVar11 = FLinkerSave::GetBulkDataArchive(this,FBulkDataCookedIndex::Default);
    lVar10 = (**(code **)(pTVar11->_padding_ + 0x30))(pTVar11);
    *param_2 = *param_2 + lVar10;
  }
  EVar4 = param_1->CurrentHarvestingRealm;
  pIVar5 = param_1->PackageWriter;
  if (pIVar5 == (IPackageWriter *)0x0) {
    bVar8 = FLinkerSave::HasCookedIndexBulkData(this);
    if ((bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Linker.HasCookedIndexBulkData()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0xb2f,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    if (((this->_padding_ != 0) && (*(longlong *)(this->_padding_ + 0x10) != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Linker.IsCooking() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0xb30,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    if ((EVar4 == Optional) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsOptionalRealm == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0xb31,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    pTVar11 = FLinkerSave::GetBulkDataArchive(this,FBulkDataCookedIndex::Default);
    uVar12 = (**(code **)(pTVar11->_padding_ + 0x30))(pTVar11);
    if (0 < (longlong)uVar12) {
      puVar13 = FLargeMemoryData::ReleaseOwnership((FLargeMemoryData *)&pTVar11->_padding_);
      FIoBuffer::FIoBuffer(&local_238,AssumeOwnership,puVar13,uVar12);
      (**(code **)(*plVar2 + 0x188))
                (plVar2,*(undefined8 *)local_238.CorePtr.Reference,
                 (ulonglong)
                 CONCAT14(*(uchar *)((longlong)local_238.CorePtr.Reference + 0x18),
                          *(uint *)((longlong)local_238.CorePtr.Reference + 8)));
      param_1->TotalPackageSizeUncompressed = param_1->TotalPackageSizeUncompressed + uVar12;
      if (local_238.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_238.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)local_238.CorePtr.Reference + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_238.CorePtr.Reference);
          ::operator_delete((void *)local_238.CorePtr.Reference,0x20);
        }
      }
    }
  }
  else {
    if ((((this->_padding_ == 0) || (*(longlong *)(this->_padding_ + 0x10) == 0)) &&
        (((param_1->SaveArgs).SaveFlags & 0x2000) != 0)) && (this->bUpdatingLoadedPath != false)) {
      if (1 < (byte)LogSavePackage._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`WriteBulkData'::`49'::LOG_Static,(FLogCategoryBase *)&LogSavePackage);
      }
      return Error;
    }
    local_248 = param_1->Package->_padding_;
    FPackageId::FromName(&local_240);
    pFVar7 = GWarn;
    local_230 = param_1;
    local_228 = EVar4 == Optional;
    local_218 = param_1;
    local_210 = pIVar5;
    local_208 = EVar4 == Optional;
    pFVar14 = FText::FText(&local_170);
    FSlowTask::FSlowTask(&local_128,__real_40400000,pFVar14,true,pFVar7);
    FSlowTask::Initialize(&local_128);
    if (local_170.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
    }
    pcStack_1f8 = (code *)&local_248;
    local_1f0 = &local_240;
    uVar16 = (ushort)(EVar4 == Optional);
    ppFStack_1e8 = &local_218;
    local_c8[0] = (code *)0x0;
    local_1e0 = &local_230;
    local_200 = param_1;
    uStack_1d8 = uVar16;
    local_a0 = FMemory::Malloc(0x38,8);
    *local_a0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`WriteBulkData'::`2'::<lambda_3>,1,1>::_vftable_;
    local_a0[1] = (code *)local_200;
    local_a0[2] = pcStack_1f8;
    local_a0[3] = (code *)local_1f0;
    local_a0[4] = (code *)ppFStack_1e8;
    local_a0[5] = (code *)local_1e0;
    local_a0[6] = (code *)CONCAT62(uStack_1d6,uStack_1d8);
    if (local_a0 + 1 != (code **)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>,void,FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&>
                    ::Call;
    }
    FLinkerSave::ForEachBulkDataCookedIndex
              (this,(TUniqueFunction<void___cdecl(FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&)>
                     *)local_c8,BulkSegment);
    if (local_c8[0] != (code *)0x0) {
      ppcVar15 = local_c8 + 2;
      if (local_a0 != (code **)0x0) {
        ppcVar15 = local_a0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    pFVar14 = FText::FText(&local_160);
    FSlowTask::EnterProgressFrame(&local_128,__real_3f800000,pFVar14);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    if (EVar4 != Optional) {
      pcStack_1c8 = (code *)&local_248;
      local_1c0 = &local_240;
      ppFStack_1b8 = &local_218;
      local_98[0] = (code *)0x0;
      local_1b0 = &local_230;
      local_1d0 = param_1;
      uStack_1a8 = uVar16;
      local_70 = FMemory::Malloc(0x38,8);
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`WriteBulkData'::`69'::<lambda_4>,1,1>::_vftable_;
      local_70[1] = (code *)local_1d0;
      local_70[2] = pcStack_1c8;
      local_70[3] = (code *)local_1c0;
      local_70[4] = (code *)ppFStack_1b8;
      local_70[5] = (code *)local_1b0;
      local_70[6] = (code *)CONCAT62(uStack_1a6,uStack_1a8);
      if (local_70 + 1 != (code **)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>,void,FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&>
                      ::Call;
      }
      FLinkerSave::ForEachBulkDataCookedIndex
                (this,(TUniqueFunction<void___cdecl(FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&)>
                       *)local_98,Optional);
      if (local_98[0] != (code *)0x0) {
        ppcVar15 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar15 = local_70;
        }
        (**(code **)(*ppcVar15 + 0x10))();
      }
    }
    pFVar14 = FText::FText(&local_150);
    FSlowTask::EnterProgressFrame(&local_128,__real_3f800000,pFVar14);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
    pcStack_198 = (code *)&local_248;
    local_190 = &local_240;
    ppFStack_188 = &local_218;
    local_68[0] = (code *)0x0;
    local_180 = &local_230;
    local_1a0 = param_1;
    uStack_178 = uVar16;
    local_40 = FMemory::Malloc(0x38,8);
    *local_40 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`WriteBulkData'::`2'::<lambda_5>,1,1>::_vftable_;
    local_40[1] = (code *)local_1a0;
    local_40[2] = pcStack_198;
    local_40[3] = (code *)local_190;
    local_40[4] = (code *)ppFStack_188;
    local_40[5] = (code *)local_180;
    local_40[6] = (code *)CONCAT62(uStack_176,uStack_178);
    if (local_40 + 1 != (code **)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>,void,FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&>
                    ::Call;
    }
    FLinkerSave::ForEachBulkDataCookedIndex
              (this,(TUniqueFunction<void___cdecl(FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&)>
                     *)local_68,MemoryMapped);
    if (local_68[0] != (code *)0x0) {
      ppcVar15 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar15 = local_40;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    pFVar14 = FText::FText(&local_140);
    FSlowTask::EnterProgressFrame(&local_128,__real_3f800000,pFVar14);
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
    FSlowTask::Destroy(&local_128);
    if (local_128.FrameMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.FrameMessage.TextData.Reference + 0x10))();
    }
    if (local_128.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DefaultMessage.TextData.Reference + 0x10))();
    }
  }
  return Success;
}

// WriteCookedExports @ 1421f0500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::WriteCookedExports(FArchive *param_1,FSaveContext *param_2)

{
  longlong lVar1;
  UObject *pUVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  FChannel *pFVar10;
  FFeedbackContext *pFVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  ESavePackageResult EVar15;
  uint uVar16;
  FLinkerSave *pFVar17;
  FText *pFVar18;
  uint *puVar19;
  FName this;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStackY_308 [32];
  uint local_2d8;
  undefined1 local_2d4 [4];
  FArchive *local_2d0;
  FArchive *local_2c8;
  FScopedObjectSerializeContext local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  undefined1 local_2a8 [8];
  FText local_2a0;
  FText local_290;
  FSlowTask local_278;
  FArchiveProxy local_218;
  undefined8 local_180;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2d0 = param_1;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WriteCookedExports'::`2'::__CpuProfilerEventSpecId2639,"UPackage_Save_SaveExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xa4f);
    FCpuProfilerTrace::OutputBeginEvent(`WriteCookedExports'::`2'::__CpuProfilerEventSpecId2639);
  }
  pFVar17 = FSaveContext::GetLinker(param_2);
  if (pFVar17 != (FLinkerSave *)0x0) {
    pFVar17 = FSaveContext::GetLinker(param_2);
    if ((pFVar17->_padding_ != 0) && (*(longlong *)(pFVar17->_padding_ + 0x10) != 0))
    goto LAB_1421f05e4;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("SaveContext.GetLinker() && SaveContext.GetLinker()->IsCooking()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                      ,0xa51,L"");
  if (bVar12) {
    pcVar6 = (code *)swi(3);
    EVar15 = (*pcVar6)();
    return EVar15;
  }
LAB_1421f05e4:
  pFVar17 = FSaveContext::GetLinker(param_2);
  pFVar11 = GWarn;
  bVar12 = (param_2->SaveArgs).bSlowTask;
  pFVar18 = FText::FText(&local_2a0);
  FSlowTask::FSlowTask(&local_278,(float)(int)pFVar17->_padding_,pFVar18,bVar12,pFVar11);
  FSlowTask::Initialize(&local_278);
  if (local_2a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
  }
  puVar19 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_2b0 = local_2d4;
  local_2b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar19);
  fVar9 = __real_3f800000;
  local_2d8 = 0;
  if (0 < (int)pFVar17->_padding_) {
    lVar22 = 0;
    do {
      cVar13 = (**(code **)(GWarn->_padding_ + 0x60))();
      if (cVar13 != '\0') {
        EVar15 = Canceled;
        goto LAB_1421f0ad0;
      }
      pFVar18 = FText::FText(&local_290);
      FSlowTask::EnterProgressFrame(&local_278,fVar9,pFVar18);
      if (local_290.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
      }
      uVar16 = 0;
      if ((int)local_2d8 < (int)pFVar17->_padding_) {
        uVar16 = ~local_2d8 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        EVar15 = (*pcVar6)();
        return EVar15;
      }
      lVar1 = pFVar17->_padding_;
      if (*(longlong *)(lVar22 + 0x40 + lVar1) != 0) {
        if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`WriteCookedExports'::`11'::__CpuProfilerEventSpecId2661,
                     "UPackage_Save_SaveExport",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                     ,0xa65);
          FCpuProfilerTrace::OutputBeginEvent
                    (`WriteCookedExports'::`11'::__CpuProfilerEventSpecId2661);
        }
        pFVar10 = SaveTimeChannel;
        this = GetClassTraceScope((UObjectBaseUtility *)local_2a8);
        local_178.Base = local_158;
        local_178.bIsDynamic = false;
        local_178.bIsExternal = false;
        local_178.CurPos = local_158;
        local_178.End = (wchar_t *)local_58;
        ::FName::AppendString((FName *)this,&local_178);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_178,L"_SaveSerialize",0xe);
        if (local_178.End < local_178.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_178,1);
        }
        *local_178.CurPos = L'\0';
        if ((CpuChannel->Enabled < 0) || (pFVar10->Enabled < 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
          FCpuProfilerTrace::OutputBeginDynamicEvent
                    (local_178.Base,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                     ,0xa66);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
        UE::FScopedObjectSerializeContext::FScopedObjectSerializeContext
                  (&local_2c0,*(UObject **)(lVar22 + 0x40 + lVar1),(FArchive *)&pFVar17->_padding_);
        uVar20 = (**(code **)(*(longlong *)local_2d0 + 0x28))();
        *(undefined8 *)(lVar22 + 0x28 + lVar1) = uVar20;
        if (((int)local_2d8 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExportIndex >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                ,0x6d,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          EVar15 = (*pcVar6)();
          return EVar15;
        }
        (pFVar17->CurrentlySavingExport).Index = local_2d8 + 1;
        pFVar17->CurrentlySavingExportObject = *(UObject **)(lVar22 + 0x40 + lVar1);
        FArchiveProxy::FArchiveProxy(&local_218,local_2d0);
        local_218._padding_ = (longlong)&`WriteCookedExports'::`2'::FExportProxyArchive::_vftable_;
        local_180 = (**(code **)(*(longlong *)local_2d0 + 0x28))();
        local_2c8 = pFVar17->Saver;
        pFVar17->Saver = (FArchive *)&local_218;
        pUVar2 = *(UObject **)(lVar22 + 0x40 + lVar1);
        if ((*(uint *)(*(longlong *)(lVar22 + 0x40 + lVar1) + 8) & 0x10) == 0) {
          (**(code **)(*(longlong *)pUVar2 + 200))(pUVar2,&pFVar17->_padding_);
        }
        else {
          UClass::SerializeDefaultObject
                    (*(UClass **)&pUVar2->field_0x10,pUVar2,(FArchive *)&pFVar17->_padding_);
        }
        (pFVar17->CurrentlySavingExport).Index = 0;
        pFVar17->CurrentlySavingExportObject = (UObject *)0x0;
        lVar3 = *(longlong *)(lVar22 + 0x28 + lVar1);
        lVar21 = (**(code **)(*(longlong *)local_2d0 + 0x28))();
        lVar4 = *(longlong *)(lVar22 + 0x38 + lVar1);
        lVar5 = *(longlong *)(lVar22 + 0x30 + lVar1);
        *(longlong *)(lVar22 + 0x20 + lVar1) = lVar21 - lVar3;
        if (lVar4 == lVar5 || lVar4 - lVar5 < 0) {
          if ((lVar4 != 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ScriptSerializationEndOffset == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                  ,0xa8e,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            EVar15 = (*pcVar6)();
            return EVar15;
          }
          if ((*(longlong *)(lVar22 + 0x30 + lVar1) != 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ScriptSerializationStartOffset == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                  ,0xa8f,L""), bVar14)) goto code_r0x0001421f0a4c;
        }
        else {
          if ((lVar5 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ScriptSerializationStartOffset >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                  ,0xa89,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            EVar15 = (*pcVar6)();
            return EVar15;
          }
          if ((*(longlong *)(lVar22 + 0x20 + lVar1) < *(longlong *)(lVar22 + 0x38 + lVar1)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ScriptSerializationEndOffset <= Export.SerialSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                  ,0xa8a,L""), bVar14)) {
code_r0x0001421f0a4c:
            pcVar6 = (code *)swi(3);
            EVar15 = (*pcVar6)();
            return EVar15;
          }
        }
        pFVar17->Saver = local_2c8;
        FArchiveProxy::~FArchiveProxy(&local_218);
        UE::FScopedObjectSerializeContext::~FScopedObjectSerializeContext(&local_2c0);
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar12) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      lVar22 = lVar22 + 0x68;
      local_2d8 = local_2d8 + 1;
    } while ((int)local_2d8 < (int)pFVar17->_padding_);
  }
  if ((pFVar17->_padding_ & 0x200) == 0) {
    cVar13 = (**(code **)(GWarn->_padding_ + 0x60))();
    EVar15 = -(uint)(cVar13 != '\0') & Canceled;
  }
  else {
    EVar15 = Error;
  }
LAB_1421f0ad0:
  FSlowTask::Destroy(&local_278);
  if (local_278.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_278.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_278.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_278.DefaultMessage.TextData.Reference + 0x10))();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar15;
}

// WriteExports @ 1421f0b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::WriteExports(FStructuredArchiveRecord *param_1,FSaveContext *param_2)

{
  longlong lVar1;
  UObject *pUVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  float fVar9;
  FChannel *pFVar10;
  FFeedbackContext *pFVar11;
  FSlotBase FVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  ESavePackageResult EVar18;
  FLinkerSave *pFVar19;
  FText *pFVar20;
  FArchive *pFVar21;
  undefined8 uVar22;
  FName this;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 auStackY_268 [32];
  FSlotBase local_230;
  FSaveContext *local_228;
  FSlotBase local_220;
  FSlotBase local_218;
  FScopedObjectSerializeContext local_210;
  undefined1 local_208 [8];
  FText local_200;
  FText local_1f0;
  FString local_1e0;
  FSlowTask local_1c8;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_228 = param_2;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WriteExports'::`2'::__CpuProfilerEventSpecId2742,"UPackage_Save_SaveExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xab6);
    FCpuProfilerTrace::OutputBeginEvent(`WriteExports'::`2'::__CpuProfilerEventSpecId2742);
  }
  pFVar19 = FSaveContext::GetLinker(param_2);
  pFVar11 = GWarn;
  bVar14 = (param_2->SaveArgs).bSlowTask;
  pFVar20 = FText::FText(&local_200);
  FSlowTask::FSlowTask(&local_1c8,(float)(int)pFVar19->_padding_,pFVar20,bVar14,pFVar11);
  FSlowTask::Initialize(&local_1c8);
  if (local_200.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
  }
  fVar9 = __real_3f800000;
  local_230.StructuredArchive = *(FStructuredArchive **)param_1;
  uVar25 = 0;
  if (0 < (int)pFVar19->_padding_) {
    lVar24 = 0;
    do {
      cVar13 = (**(code **)(GWarn->_padding_ + 0x60))();
      if (cVar13 != '\0') {
        EVar18 = Canceled;
        goto LAB_1421f10a0;
      }
      pFVar20 = FText::FText(&local_1f0);
      FSlowTask::EnterProgressFrame(&local_1c8,fVar9,pFVar20);
      if (local_1f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
      }
      uVar17 = 0;
      if ((int)uVar25 < (int)pFVar19->_padding_) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        EVar18 = (*pcVar7)();
        return EVar18;
      }
      lVar1 = pFVar19->_padding_;
      if (*(longlong *)(lVar24 + 0x40 + lVar1) != 0) {
        if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`WriteExports'::`10'::__CpuProfilerEventSpecId2761,"UPackage_Save_SaveExport",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                     ,0xac9);
          FCpuProfilerTrace::OutputBeginEvent(`WriteExports'::`10'::__CpuProfilerEventSpecId2761);
        }
        pFVar21 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_230);
        UE::FScopedObjectSerializeContext::FScopedObjectSerializeContext
                  (&local_210,*(UObject **)(lVar24 + 0x40 + lVar1),pFVar21);
        uVar22 = (**(code **)(pFVar19->_padding_ + 0x28))();
        *(undefined8 *)(lVar24 + 0x28 + lVar1) = uVar22;
        if (((int)uVar25 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExportIndex >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                ,0x6d,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          EVar18 = (*pcVar7)();
          return EVar18;
        }
        (pFVar19->CurrentlySavingExport).Index = uVar25 + 1;
        pFVar19->CurrentlySavingExportObject = *(UObject **)(lVar24 + 0x40 + lVar1);
        UObjectBaseUtility::GetPathName
                  (*(UObjectBaseUtility **)(lVar24 + 0x40 + lVar1),&local_1e0,
                   (UObject *)local_228->Package);
        FVar12.StructuredArchive = local_230.StructuredArchive;
        pFVar10 = SaveTimeChannel;
        this = GetClassTraceScope((UObjectBaseUtility *)local_208);
        local_168.Base = local_148;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        local_168.CurPos = local_148;
        local_168.End = (wchar_t *)local_48;
        ::FName::AppendString((FName *)this,&local_168);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,L"_SaveSerialize",0xe);
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        *local_168.CurPos = L'\0';
        if ((CpuChannel->Enabled < 0) || (pFVar10->Enabled < 0)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
          FCpuProfilerTrace::OutputBeginDynamicEvent
                    (local_168.Base,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                     ,0xadb);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
        if ((*(uint *)(*(longlong *)(lVar24 + 0x40 + lVar1) + 8) & 0x10) == 0) {
          local_218.StructuredArchive = FVar12.StructuredArchive;
          pFVar21 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_218);
          plVar3 = *(longlong **)(lVar24 + 0x40 + lVar1);
          (**(code **)(*plVar3 + 200))(plVar3,pFVar21);
        }
        else {
          local_220.StructuredArchive = FVar12.StructuredArchive;
          pFVar21 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_220);
          pUVar2 = *(UObject **)(lVar24 + 0x40 + lVar1);
          UClass::SerializeDefaultObject(*(UClass **)&pUVar2->field_0x10,pUVar2,pFVar21);
        }
        (pFVar19->CurrentlySavingExport).Index = 0;
        pFVar19->CurrentlySavingExportObject = (UObject *)0x0;
        lVar4 = *(longlong *)(lVar24 + 0x28 + lVar1);
        lVar23 = (**(code **)(pFVar19->_padding_ + 0x28))();
        lVar5 = *(longlong *)(lVar24 + 0x38 + lVar1);
        lVar6 = *(longlong *)(lVar24 + 0x30 + lVar1);
        *(longlong *)(lVar24 + 0x20 + lVar1) = lVar23 - lVar4;
        if (lVar5 == lVar6 || lVar5 - lVar6 < 0) {
          if ((lVar5 != 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ScriptSerializationEndOffset == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                  ,0xb10,L""), bVar16)) {
            pcVar7 = (code *)swi(3);
            EVar18 = (*pcVar7)();
            return EVar18;
          }
          if ((*(longlong *)(lVar24 + 0x30 + lVar1) != 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ScriptSerializationStartOffset == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                  ,0xb11,L""), bVar16)) goto code_r0x0001421f102e;
        }
        else {
          *(longlong *)(lVar24 + 0x30 + lVar1) = lVar6 - lVar4;
          *(longlong *)(lVar24 + 0x38 + lVar1) = lVar5 - lVar4;
          if ((lVar6 - lVar4 < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ScriptSerializationStartOffset >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                  ,0xb0b,L""), bVar16)) {
            pcVar7 = (code *)swi(3);
            EVar18 = (*pcVar7)();
            return EVar18;
          }
          if ((*(longlong *)(lVar24 + 0x20 + lVar1) < *(longlong *)(lVar24 + 0x38 + lVar1)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ScriptSerializationEndOffset <= Export.SerialSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                                  ,0xb0c,L""), bVar16)) {
code_r0x0001421f102e:
            pcVar7 = (code *)swi(3);
            EVar18 = (*pcVar7)();
            return EVar18;
          }
        }
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        UE::FScopedObjectSerializeContext::~FScopedObjectSerializeContext(&local_210);
        if (bVar14) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      uVar25 = uVar25 + 1;
      lVar24 = lVar24 + 0x68;
    } while ((int)uVar25 < (int)pFVar19->_padding_);
  }
  if ((pFVar19->_padding_ & 0x200) == 0) {
    cVar13 = (**(code **)(GWarn->_padding_ + 0x60))();
    EVar18 = -(uint)(cVar13 != '\0') & Canceled;
  }
  else {
    EVar18 = Error;
  }
LAB_1421f10a0:
  FSlowTask::Destroy(&local_1c8);
  if (local_1c8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c8.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_1c8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c8.DefaultMessage.TextData.Reference + 0x10))();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar18;
}

// WriteGatherableText @ 1421f1130

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl
`anonymous_namespace'::WriteGatherableText(FStructuredArchiveRecord *param_1,FSaveContext *param_2)

{
  int iVar1;
  FStructuredArchiveSlot FVar2;
  undefined4 uVar3;
  FLinkerSave *pFVar4;
  FGatherableTextData *pFVar5;
  FGatherableTextData *this;
  undefined1 local_res8 [8];
  
  FVar2 = *(FStructuredArchiveSlot *)param_1;
  if ((((param_2->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) &&
      (-1 < (int)param_2->Package->PackageFlagsPrivate)) &&
     ((param_2->GatherableTextResultFlags &
      (HasTextInitializedFromString|HasTextWithInvalidPackageLocalizationID|HasScript)) == Empty)) {
    pFVar4 = FSaveContext::GetLinker(param_2);
    (**(code **)(pFVar4->_padding_ + 0x230))(&pFVar4->_padding_,&FEditorObjectVersion::GUID);
    uVar3 = (**(code **)(pFVar4->_padding_ + 0x28))(&pFVar4->_padding_);
    iVar1 = (int)pFVar4->_padding_;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = uVar3;
    *(int *)&pFVar4->_padding_ = iVar1;
    this = (FGatherableTextData *)pFVar4->_padding_;
    pFVar5 = this + iVar1;
    while( true ) {
      if ((int)pFVar4->_padding_ != iVar1) {
        `TCheckedPointerIterator<FGatherableTextData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this == pFVar5) break;
      FGatherableTextData::StreamStructuredArchive(this,FVar2);
      this = this + 1;
    }
  }
  return;
}

// WritePackageHeader @ 1421f1650

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::WritePackageHeader(FStructuredArchiveRecord *param_1,FSaveContext *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  FCellExport *pFVar3;
  bool bVar4;
  FStructuredArchiveRecord FVar5;
  FStructuredArchiveSlot FVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ESavePackageResult EVar11;
  undefined4 uVar12;
  FLinkerSave *pFVar13;
  FArchive *pFVar14;
  FNameEntry *this;
  long64 lVar15;
  FCellImport *pFVar16;
  FCellExport *pFVar17;
  uint *puVar18;
  longlong lVar19;
  FObjectImport *pFVar20;
  FObjectExport *pFVar21;
  FCellImport *pFVar22;
  TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *pTVar23;
  int iVar24;
  TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *pTVar25;
  longlong lVar26;
  FObjectImport *pFVar27;
  FObjectExport *pFVar28;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2 [2];
  TArray<FPackageIndex,TSizedDefaultAllocator<32>_> local_c0;
  FName local_b0;
  FString local_a8;
  FWritePackageDataArgs local_98;
  
  pFVar13 = FSaveContext::GetLinker(param_2);
  pFVar14 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)param_1);
  ::operator<<(pFVar14,(FPackageFileSummary *)&pFVar13->_padding_);
  plVar1 = &pFVar13->_padding_;
  iVar10 = (**(code **)(*plVar1 + 0x28))(plVar1);
  param_2->OffsetAfterPackageFileSummary = iVar10;
  *(int *)((longlong)&pFVar13->_padding_ + 4) = iVar10;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`4'::__CpuProfilerEventSpecId2364,"UPackage_Save_BuildNameMap"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x93c);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`4'::__CpuProfilerEventSpecId2364);
  }
  if ((int)pFVar13->_padding_ != (int)pFVar13->_padding_) {
    local_b0 = *(FName *)(pFVar13->_padding_ + 0x18);
    ::FName::ToString(&local_b0,&local_a8);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Linker->Summary.NameCount == Linker->NameMap.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                       ,0x93d,
                       L"Summary NameCount didn\'t match linker name map count when saving package header for \'%s\'"
                      );
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return EVar11;
    }
  }
  puVar18 = (uint *)pFVar13->_padding_;
  iVar10 = (int)pFVar13->_padding_;
  puVar2 = puVar18 + iVar10;
  while( true ) {
    if ((int)pFVar13->_padding_ != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FNameEntryId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (puVar18 == puVar2) break;
    this = ::FName::GetEntry((FNameEntryId)*puVar18);
    FNameEntry::Write(this,(FArchive *)plVar1);
    puVar18 = puVar18 + 1;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar4 = pFVar13->bIsWritingHeaderSoftObjectPaths;
  pFVar13->bIsWritingHeaderSoftObjectPaths = true;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`18'::__CpuProfilerEventSpecId2376,
               "UPackage_Save_SaveSoftObjectPaths",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x948);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`18'::__CpuProfilerEventSpecId2376);
  }
  uVar12 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar10 = (int)pFVar13->_padding_;
  *(undefined4 *)((longlong)&pFVar13->_padding_ + 4) = uVar12;
  *(int *)&pFVar13->_padding_ = iVar10;
  lVar19 = pFVar13->_padding_;
  FVar5 = *param_1;
  lVar26 = (longlong)iVar10 * 0x20 + lVar19;
  while( true ) {
    if ((int)pFVar13->_padding_ != iVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (lVar19 == lVar26) break;
    (**(code **)(**(longlong **)(*(longlong *)FVar5 + 8) + 0x140))
              (*(longlong **)(*(longlong *)FVar5 + 8),lVar19);
    lVar19 = lVar19 + 0x20;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar13->bIsWritingHeaderSoftObjectPaths = bVar4;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    WriteGatherableText(param_1,param_2);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`23'::__CpuProfilerEventSpecId2390,
               "UPackage_Save_WriteGatherableTextData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x956);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`23'::__CpuProfilerEventSpecId2390);
    WriteGatherableText(param_1,param_2);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`24'::__CpuProfilerEventSpecId2405,
               "UPackage_Save_WriteDummyImportMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x965);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`24'::__CpuProfilerEventSpecId2405);
  }
  uVar12 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined4 *)&pFVar13->_padding_ = uVar12;
  iVar10 = (int)pFVar13->_padding_;
  pFVar20 = (FObjectImport *)pFVar13->_padding_;
  pFVar27 = pFVar20 + iVar10;
  while( true ) {
    if ((int)pFVar13->_padding_ != iVar10) {
      local_c7 = 0;
      `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_c7);
    }
    if (pFVar20 == pFVar27) break;
    pFVar14 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)param_1);
    ::operator<<(pFVar14,pFVar20);
    pFVar20 = pFVar20 + 1;
  }
  plVar1 = &pFVar13->_padding_;
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  iVar10 = (**(code **)(*plVar1 + 0x28))(plVar1);
  param_2->OffsetAfterImportMap = iVar10;
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`29'::__CpuProfilerEventSpecId2416,
               "UPackage_Save_WriteDummyExportMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x970);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`29'::__CpuProfilerEventSpecId2416);
  }
  uVar12 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined4 *)&pFVar13->_padding_ = uVar12;
  iVar10 = (int)pFVar13->_padding_;
  pFVar21 = (FObjectExport *)pFVar13->_padding_;
  pFVar28 = pFVar21 + iVar10;
  while( true ) {
    if ((int)pFVar13->_padding_ != iVar10) {
      local_c6 = 0;
      `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_c6);
    }
    if (pFVar21 == pFVar28) break;
    ::operator<<((FArchive *)plVar1,pFVar21);
    pFVar21 = pFVar21 + 1;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  iVar10 = (**(code **)(*plVar1 + 0x28))(plVar1);
  param_2->OffsetAfterExportMap = iVar10;
  uVar12 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined4 *)&pFVar13->_padding_ = uVar12;
  iVar10 = (int)pFVar13->_padding_;
  pFVar16 = (FCellImport *)pFVar13->_padding_;
  pFVar22 = pFVar16 + iVar10;
  while( true ) {
    if ((int)pFVar13->_padding_ != iVar10) {
      local_c5 = 0;
      `TCheckedPointerIterator<FCellImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_c5);
    }
    if (pFVar16 == pFVar22) break;
    ::operator<<((FArchive *)plVar1,pFVar16);
    pFVar16 = pFVar16 + 1;
  }
  uVar12 = (**(code **)(*plVar1 + 0x28))();
  *(undefined4 *)&pFVar13->_padding_ = uVar12;
  iVar10 = (int)pFVar13->_padding_;
  pFVar17 = (FCellExport *)pFVar13->_padding_;
  pFVar3 = pFVar17 + iVar10;
  while( true ) {
    if ((int)pFVar13->_padding_ != iVar10) {
      local_c4 = 0;
      `TCheckedPointerIterator<FCellExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_c4);
    }
    if (pFVar17 == pFVar3) break;
    ::operator<<((FArchive *)plVar1,pFVar17);
    pFVar17 = pFVar17 + 1;
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`44'::__CpuProfilerEventSpecId2445,
               "UPackage_Save_WriteDependsMap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x98d);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`44'::__CpuProfilerEventSpecId2445);
  }
  FVar6 = *(FStructuredArchiveSlot *)param_1;
  uVar12 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined4 *)((longlong)&pFVar13->_padding_ + 4) = uVar12;
  iVar24 = 0;
  iVar10 = (int)pFVar13->_padding_;
  if ((param_2->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) {
    if (((int)pFVar13->_padding_ != iVar10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Linker->DependsMap.Num() == Linker->ExportMap.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                           ,0x99d,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar11 = (*pcVar7)();
      return EVar11;
    }
    iVar10 = (int)pFVar13->_padding_;
    pTVar23 = (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)pFVar13->_padding_;
    pTVar25 = pTVar23 + iVar10;
    while( true ) {
      if ((int)pFVar13->_padding_ != iVar10) {
        local_c3 = 0;
        `TCheckedPointerIterator<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_c3);
      }
      if (pTVar23 == pTVar25) break;
      operator<<<FPackageIndex>(FVar6,pTVar23);
      pTVar23 = pTVar23 + 1;
    }
  }
  else {
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (0 < iVar10) {
      do {
        operator<<<FPackageIndex>(FVar6,&local_c0);
        iVar24 = iVar24 + 1;
      } while (iVar24 < (int)pFVar13->_padding_);
    }
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((param_2->SaveArgs).ArchiveCookData == (FArchiveCookData *)0x0) ||
     (((param_2->SaveArgs).SaveFlags & 0x40000) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((-1 < (int)param_2->Package->PackageFlagsPrivate) || (bVar4)) {
    if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`WritePackageHeader'::`65'::__CpuProfilerEventSpecId2473,
                 "UPackage_Save_SaveSoftPackagesAndSearchableNames",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
                 ,0x9a9);
      FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`65'::__CpuProfilerEventSpecId2473);
    }
    uVar12 = (**(code **)(*plVar1 + 0x28))(plVar1);
    iVar10 = (int)pFVar13->_padding_;
    *(undefined4 *)((longlong)&pFVar13->_padding_ + 4) = uVar12;
    *(int *)&pFVar13->_padding_ = iVar10;
    lVar26 = pFVar13->_padding_;
    FVar5 = *param_1;
    lVar19 = lVar26 + (longlong)iVar10 * 8;
    while( true ) {
      if ((int)pFVar13->_padding_ != iVar10) {
        local_c2[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c2);
      }
      if (lVar26 == lVar19) break;
      (**(code **)(**(longlong **)(*(longlong *)FVar5 + 8) + 0x178))
                (*(longlong **)(*(longlong *)FVar5 + 8),lVar26);
      lVar26 = lVar26 + 8;
    }
    if ((int)param_2->Package->PackageFlagsPrivate < 0) {
      *(undefined4 *)&pFVar13->_padding_ = 0;
    }
    else {
      uVar12 = (**(code **)(*plVar1 + 0x28))(plVar1);
      *(undefined4 *)&pFVar13->_padding_ = uVar12;
      FLinkerTables::SerializeSearchableNamesMap
                ((FLinkerTables *)&pFVar13->_padding_,*(FStructuredArchiveSlot *)param_1);
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    pFVar13->_padding_ = 0;
    *(undefined4 *)&pFVar13->_padding_ = 0;
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`78'::__CpuProfilerEventSpecId2527,
               "UPackage_Save_SaveThumbnails",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x9df);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`78'::__CpuProfilerEventSpecId2527);
  }
  UE::SavePackageUtilities::SaveThumbnails
            (param_2->Package,pFVar13,*(FStructuredArchiveSlot *)param_1);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`79'::__CpuProfilerEventSpecId2532,
               "UPackage_Save_SaveAssetRegistryData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x9e4);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`79'::__CpuProfilerEventSpecId2532);
  }
  local_98.Package = param_2->Package;
  local_98.ParentRecord = param_1;
  local_98.Linker = pFVar13;
  if (((param_2->HarvestedRealms).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  local_98.ImportsUsedInGame =
       (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *)
       ((param_2->HarvestedRealms).AllocatorInstance.Data + 0x130);
  if (((param_2->HarvestedRealms).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar11 = (*pcVar7)();
    return EVar11;
  }
  local_98.SoftPackagesUsedInGame =
       (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
       ((param_2->HarvestedRealms).AllocatorInstance.Data + 0x370);
  lVar19 = 0x6f0;
  if (param_2->CurrentHarvestingRealm != Editor) {
    lVar19 = 0x700;
  }
  local_98.PackageBuildDependencies =
       (TArray<FName,TSizedDefaultAllocator<32>_> *)((param_2->PackageSavedHash).Hash + lVar19 + -8)
  ;
  local_98.bProceduralSave = (param_2->ObjectSaveContext).bProceduralSave;
  local_98.CookContext = (param_2->ArchiveSavePackageData).CookContext;
  local_98.OutAssetDatas = &param_2->SavedAssets;
  UE::AssetRegistry::WritePackageData(&local_98);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`80'::__CpuProfilerEventSpecId2548,
               "UPackage_Save_WorldLevelData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x9f4);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`80'::__CpuProfilerEventSpecId2548);
  }
  UE::SavePackageUtilities::SaveWorldLevelInfo(param_2->Package,pFVar13,*param_1);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    SavePreloadDependencies(param_1,param_2);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageHeader'::`81'::__CpuProfilerEventSpecId2554,
               "UPackage_Save_PreloadDependencies",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0x9fa);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageHeader'::`81'::__CpuProfilerEventSpecId2554);
    SavePreloadDependencies(param_1,param_2);
    FCpuProfilerTrace::OutputEndEvent();
  }
  lVar15 = (**(code **)(*plVar1 + 0x28))(plVar1);
  EVar11 = SetSummaryTotalHeaderSize(param_2,lVar15);
  if (EVar11 == Success) {
    cVar9 = (**(code **)(GWarn->_padding_ + 0x60))();
    EVar11 = -(uint)(cVar9 != '\0') & Canceled;
  }
  return EVar11;
}

// WritePackageTextHeader @ 1421f2070

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

ESavePackageResult __cdecl
`anonymous_namespace'::WritePackageTextHeader
          (FStructuredArchiveRecord *param_1,FSaveContext *param_2)

{
  int iVar1;
  FStructuredArchiveSlot FVar2;
  bool bVar3;
  char cVar4;
  FLinkerSave *pFVar5;
  FObjectImport *pFVar6;
  FObjectExport *pFVar7;
  FObjectImport *pFVar8;
  FObjectExport *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar5 = FSaveContext::GetLinker(param_2);
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    WriteGatherableText(param_1,param_2);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageTextHeader'::`3'::__CpuProfilerEventSpecId2575,
               "UPackage_Save_WriteGatherableTextData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xa0f);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageTextHeader'::`3'::__CpuProfilerEventSpecId2575)
    ;
    WriteGatherableText(param_1,param_2);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageTextHeader'::`4'::__CpuProfilerEventSpecId2581,
               "UPackage_Save_WriteImportTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xa15);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageTextHeader'::`4'::__CpuProfilerEventSpecId2581)
    ;
  }
  iVar1 = (int)pFVar5->_padding_;
  pFVar8 = (FObjectImport *)pFVar5->_padding_;
  FVar2 = *(FStructuredArchiveSlot *)param_1;
  pFVar6 = pFVar8 + iVar1;
  while( true ) {
    if ((int)pFVar5->_padding_ != iVar1) {
      `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar6) break;
    ::operator<<(FVar2,pFVar8);
    pFVar8 = pFVar8 + 1;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageTextHeader'::`9'::__CpuProfilerEventSpecId2591,
               "UPackage_Save_WriteExportTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xa1f);
    FCpuProfilerTrace::OutputBeginEvent(`WritePackageTextHeader'::`9'::__CpuProfilerEventSpecId2591)
    ;
  }
  iVar1 = (int)pFVar5->_padding_;
  pFVar9 = (FObjectExport *)pFVar5->_padding_;
  FVar2 = *(FStructuredArchiveSlot *)param_1;
  pFVar7 = pFVar9 + iVar1;
  while( true ) {
    if ((int)pFVar5->_padding_ != iVar1) {
      `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar7) break;
    ::operator<<(FVar2,pFVar9);
    pFVar9 = pFVar9 + 1;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageTextHeader'::`14'::__CpuProfilerEventSpecId2601,
               "UPackage_Save_SaveThumbnails",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xa29);
    FCpuProfilerTrace::OutputBeginEvent
              (`WritePackageTextHeader'::`14'::__CpuProfilerEventSpecId2601);
  }
  UE::SavePackageUtilities::SaveThumbnails
            (param_2->Package,pFVar5,*(FStructuredArchiveSlot *)param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((CpuChannel->Enabled < 0) || (SaveTimeChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`WritePackageTextHeader'::`15'::__CpuProfilerEventSpecId2607,
               "UPackage_Save_WorldLevelData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SavePackage2.cpp"
               ,0xa2f);
    FCpuProfilerTrace::OutputBeginEvent
              (`WritePackageTextHeader'::`15'::__CpuProfilerEventSpecId2607);
  }
  UE::SavePackageUtilities::SaveWorldLevelInfo(param_2->Package,pFVar5,*param_1);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  cVar4 = (**(code **)(GWarn->_padding_ + 0x60))();
  return -(uint)(cVar4 != '\0') & Canceled;
}

// `dynamic_atexit_destructor_for_'AbandonMultiServerCommitDelegate'' @ 150351c50

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__AbandonMultiServerCommitDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &AbandonMultiServerCommitDelegate,(FWriteAccessScope *)&local_28);
  if ((AbandonMultiServerCommitDelegate._16_4_ != 0) &&
     (AbandonMultiServerCommitDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)AbandonMultiServerCommitDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&AbandonMultiServerCommitDelegate.field_0x8,0,0,0x10);
    AbandonMultiServerCommitDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (AbandonMultiServerCommitDelegate._8_8_ != 0) {
    FMemory::Free((void *)AbandonMultiServerCommitDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&AbandonMultiServerCommitDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'AbortRemoteMultiServerCommitDelegate'' @ 150351cf0

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__AbortRemoteMultiServerCommitDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &AbortRemoteMultiServerCommitDelegate,(FWriteAccessScope *)&local_28);
  if ((AbortRemoteMultiServerCommitDelegate._16_4_ != 0) &&
     (AbortRemoteMultiServerCommitDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)AbortRemoteMultiServerCommitDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&AbortRemoteMultiServerCommitDelegate.field_0x8,0,0,0x10);
    AbortRemoteMultiServerCommitDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (AbortRemoteMultiServerCommitDelegate._8_8_ != 0) {
    FMemory::Free((void *)AbortRemoteMultiServerCommitDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&AbortRemoteMultiServerCommitDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'BeginMultiServerCommitDelegate'' @ 150351d90

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__BeginMultiServerCommitDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &BeginMultiServerCommitDelegate,(FWriteAccessScope *)&local_28);
  if ((BeginMultiServerCommitDelegate._16_4_ != 0) && (BeginMultiServerCommitDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)BeginMultiServerCommitDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&BeginMultiServerCommitDelegate.field_0x8,0,0,0x10);
    BeginMultiServerCommitDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (BeginMultiServerCommitDelegate._8_8_ != 0) {
    FMemory::Free((void *)BeginMultiServerCommitDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&BeginMultiServerCommitDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowParallelReferenceCollection'' @ 150351e30

void __cdecl _dynamic_atexit_destructor_for__CVarAllowParallelReferenceCollection__(void)

{
  CVarAllowParallelReferenceCollection._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowParallelReferenceCollection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarInitRemoteServerIdBeforeUObjectInit'' @ 150351e50

void __cdecl _dynamic_atexit_destructor_for__CVarInitRemoteServerIdBeforeUObjectInit__(void)

{
  CVarInitRemoteServerIdBeforeUObjectInit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarInitRemoteServerIdBeforeUObjectInit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxReferenceChainsToPrint'' @ 150351e70

void __cdecl _dynamic_atexit_destructor_for__CVarMaxReferenceChainsToPrint__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxReferenceChainsToPrint);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRemoteExecutorForcedNetPumpIterationCount'' @ 150351e90

void __cdecl _dynamic_atexit_destructor_for__CVarRemoteExecutorForcedNetPumpIterationCount__(void)

{
  CVarRemoteExecutorForcedNetPumpIterationCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRemoteExecutorForcedNetPumpIterationCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRemoteExecutorNewNetPumpBehavior'' @ 150351eb0

void __cdecl _dynamic_atexit_destructor_for__CVarRemoteExecutorNewNetPumpBehavior__(void)

{
  CVarRemoteExecutorNewNetPumpBehavior._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRemoteExecutorNewNetPumpBehavior);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRemoteIdToStringVerbosity'' @ 150351ed0

void __cdecl _dynamic_atexit_destructor_for__CVarRemoteIdToStringVerbosity__(void)

{
  CVarRemoteIdToStringVerbosity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRemoteIdToStringVerbosity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRemoteObjectsMigrateFullHierarchy'' @ 150351ef0

void __cdecl _dynamic_atexit_destructor_for__CVarRemoteObjectsMigrateFullHierarchy__(void)

{
  CVarRemoteObjectsMigrateFullHierarchy._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRemoteObjectsMigrateFullHierarchy);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRemoveMissingMigratedComponents'' @ 150351f10

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__CVarRemoveMissingMigratedComponents__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRemoveMissingMigratedComponents);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResetBorrowedObjects'' @ 150351f30

void __cdecl _dynamic_atexit_destructor_for__CVarResetBorrowedObjects__(void)

{
  CVarResetBorrowedObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResetBorrowedObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseImmutableArchetypes'' @ 150351f50

void __cdecl _dynamic_atexit_destructor_for__CVarUseImmutableArchetypes__(void)

{
  CVarUseImmutableArchetypes._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseImmutableArchetypes);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_FixupStandaloneFlags'' @ 150351f70

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVar_FixupStandaloneFlags__(void)

{
  CVar_FixupStandaloneFlags._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_FixupStandaloneFlags);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_MemoryMappedBulkDataAlignment'' @ 150351f90

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVar_MemoryMappedBulkDataAlignment__(void)

{
  CVar_MemoryMappedBulkDataAlignment._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_MemoryMappedBulkDataAlignment)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVar_UseSerializeToFindWeakReferencers'' @ 150351fb0

void __cdecl
UE::Private::_dynamic_atexit_destructor_for__CVar_UseSerializeToFindWeakReferencers__(void)

{
  CVar_UseSerializeToFindWeakReferencers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_UseSerializeToFindWeakReferencers);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyPath'' @ 150351fd0

void __cdecl
`FPropertyVisitorPath::InvalidIterator'::__l2::_dynamic_atexit_destructor_for__EmptyPath__(void)

{
  longlong *plVar1;
  
  if (EmptyPath.OnPopFunc._0_8_ != 0) {
    plVar1 = (longlong *)&EmptyPath.OnPopFunc.field_0x10;
    if (EmptyPath.OnPopFunc._40_8_ != 0) {
      plVar1 = (longlong *)EmptyPath.OnPopFunc._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (EmptyPath.OnPushFunc._0_8_ != 0) {
    plVar1 = (longlong *)&EmptyPath.OnPushFunc.field_0x10;
    if (EmptyPath.OnPushFunc._40_8_ != 0) {
      plVar1 = (longlong *)EmptyPath.OnPushFunc._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (EmptyPath.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyPath.Path.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EndMultiServerCommitDelegate'' @ 150352040

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__EndMultiServerCommitDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&EndMultiServerCommitDelegate
             ,(FWriteAccessScope *)&local_28);
  if ((EndMultiServerCommitDelegate._16_4_ != 0) && (EndMultiServerCommitDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)EndMultiServerCommitDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&EndMultiServerCommitDelegate.field_0x8,0,0,0x10);
    EndMultiServerCommitDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (EndMultiServerCommitDelegate._8_8_ != 0) {
    FMemory::Free((void *)EndMultiServerCommitDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&EndMultiServerCommitDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'FetchNextDeferredRPCDelegate'' @ 1503520e0

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__FetchNextDeferredRPCDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FetchNextDeferredRPCDelegate
             ,(FWriteAccessScope *)&local_28);
  if ((FetchNextDeferredRPCDelegate._16_4_ != 0) && (FetchNextDeferredRPCDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FetchNextDeferredRPCDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FetchNextDeferredRPCDelegate.field_0x8,0,0,0x10);
    FetchNextDeferredRPCDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FetchNextDeferredRPCDelegate._8_8_ != 0) {
    FMemory::Free((void *)FetchNextDeferredRPCDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FetchNextDeferredRPCDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'GRemoteExecutor'' @ 150352180

void __cdecl _dynamic_atexit_destructor_for__GRemoteExecutor__(void)

{
  if (GRemoteExecutor.MultiServerCommitReadyServers.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GRemoteExecutor.MultiServerCommitReadyServers.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)
             GRemoteExecutor.ActiveRemoteMultiServerCommitDeferredActions.AllocatorInstance.Data,
             GRemoteExecutor.ActiveRemoteMultiServerCommitDeferredActions.ArrayNum);
  if (GRemoteExecutor.ActiveRemoteMultiServerCommitDeferredActions.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GRemoteExecutor.ActiveRemoteMultiServerCommitDeferredActions.AllocatorInstance.
                  Data);
  }
  if (GRemoteExecutor.AbortReasonDescription.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(GRemoteExecutor.AbortReasonDescription.Data.AllocatorInstance.Data);
  }
  DestructItems<FRemoteExecutorWork,int>
            ((FRemoteExecutorWork *)GRemoteExecutor.PendingWorks.AllocatorInstance.Data,
             GRemoteExecutor.PendingWorks.ArrayNum);
  if (GRemoteExecutor.PendingWorks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GRemoteExecutor.PendingWorks.AllocatorInstance.Data);
  }
  if (GRemoteExecutor.Subsystems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GRemoteExecutor.Subsystems.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GTransferQueue'' @ 150352210

void __cdecl UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__GTransferQueue__(void)

{
  FRemoteObjectTransferQueue::~FRemoteObjectTransferQueue(&GTransferQueue);
  return;
}

// `dynamic_atexit_destructor_for_'LogReferenceChain'' @ 150352230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogReferenceChain__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogReferenceChain);
  return;
}

// `dynamic_atexit_destructor_for_'LogRemoteExec'' @ 150352250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRemoteExec__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRemoteExec);
  return;
}

// `dynamic_atexit_destructor_for_'LogRemoteObject'' @ 150352270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRemoteObject__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRemoteObject);
  return;
}

// `dynamic_atexit_destructor_for_'LogRemoteSerialization'' @ 150352290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRemoteSerialization__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRemoteSerialization);
  return;
}

// `dynamic_atexit_destructor_for_'OnObjectDataReceivedDelegate'' @ 1503522b0

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__OnObjectDataReceivedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             OnObjectDataReceivedDelegate._8_8_,OnObjectDataReceivedDelegate._16_4_);
  if (OnObjectDataReceivedDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnObjectDataReceivedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnObjectDataReceivedDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnObjectDataSentDelegate'' @ 1503522f0

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__OnObjectDataSentDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnObjectDataSentDelegate._8_8_,
             OnObjectDataSentDelegate._16_4_);
  if (OnObjectDataSentDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnObjectDataSentDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnObjectDataSentDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnObjectTouchedDelegate'' @ 150352330

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__OnObjectTouchedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnObjectTouchedDelegate._8_8_,
             OnObjectTouchedDelegate._16_4_);
  if (OnObjectTouchedDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnObjectTouchedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnObjectTouchedDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnObjectsReceivedDelegate'' @ 150352370

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__OnObjectsReceivedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnObjectsReceivedDelegate._8_8_,
             OnObjectsReceivedDelegate._16_4_);
  if (OnObjectsReceivedDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnObjectsReceivedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnObjectsReceivedDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnObjectsSentDelegate'' @ 1503523b0

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__OnObjectsSentDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnObjectsSentDelegate._8_8_,
             OnObjectsSentDelegate._16_4_);
  if (OnObjectsSentDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnObjectsSentDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnObjectsSentDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnRegionBeginDelegate'' @ 1503523f0

void __cdecl UE::RemoteExecutor::_dynamic_atexit_destructor_for__OnRegionBeginDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRegionBeginDelegate,
             (FWriteAccessScope *)&local_28);
  if ((OnRegionBeginDelegate._16_4_ != 0) && (OnRegionBeginDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)OnRegionBeginDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&OnRegionBeginDelegate.field_0x8,0,0,0x10);
    OnRegionBeginDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (OnRegionBeginDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnRegionBeginDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnRegionBeginDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnRegionEndDelegate'' @ 150352490

void __cdecl UE::RemoteExecutor::_dynamic_atexit_destructor_for__OnRegionEndDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRegionEndDelegate,
             (FWriteAccessScope *)&local_28);
  if ((OnRegionEndDelegate._16_4_ != 0) && (OnRegionEndDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)OnRegionEndDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&OnRegionEndDelegate.field_0x8,0,0,0x10);
    OnRegionEndDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (OnRegionEndDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnRegionEndDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnRegionEndDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnTransactionAbortedDelegate'' @ 150352530

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__OnTransactionAbortedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             OnTransactionAbortedDelegate._8_8_,OnTransactionAbortedDelegate._16_4_);
  if (OnTransactionAbortedDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnTransactionAbortedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTransactionAbortedDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnTransactionCompletedDelegate'' @ 150352570

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__OnTransactionCompletedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             OnTransactionCompletedDelegate._8_8_,OnTransactionCompletedDelegate._16_4_);
  if (OnTransactionCompletedDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnTransactionCompletedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTransactionCompletedDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnTransactionQueuedDelegate'' @ 1503525b0

void __cdecl UE::RemoteExecutor::_dynamic_atexit_destructor_for__OnTransactionQueuedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             OnTransactionQueuedDelegate._8_8_,OnTransactionQueuedDelegate._16_4_);
  if (OnTransactionQueuedDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnTransactionQueuedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTransactionQueuedDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnTransactionReleasedDelegate'' @ 1503525f0

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__OnTransactionReleasedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             OnTransactionReleasedDelegate._8_8_,OnTransactionReleasedDelegate._16_4_);
  if (OnTransactionReleasedDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnTransactionReleasedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTransactionReleasedDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'OnTransactionStartingDelegate'' @ 150352630

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__OnTransactionStartingDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             OnTransactionStartingDelegate._8_8_,OnTransactionStartingDelegate._16_4_);
  if (OnTransactionStartingDelegate._8_8_ != 0) {
    FMemory::Free((void *)OnTransactionStartingDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTransactionStartingDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'ReadyMultiServerCommitDelegate'' @ 150352670

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__ReadyMultiServerCommitDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &ReadyMultiServerCommitDelegate,(FWriteAccessScope *)&local_28);
  if ((ReadyMultiServerCommitDelegate._16_4_ != 0) && (ReadyMultiServerCommitDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)ReadyMultiServerCommitDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&ReadyMultiServerCommitDelegate.field_0x8,0,0,0x10);
    ReadyMultiServerCommitDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (ReadyMultiServerCommitDelegate._8_8_ != 0) {
    FMemory::Free((void *)ReadyMultiServerCommitDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&ReadyMultiServerCommitDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'ReadyRemoteMultiServerCommitDelegate'' @ 150352710

void __cdecl
UE::RemoteExecutor::_dynamic_atexit_destructor_for__ReadyRemoteMultiServerCommitDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &ReadyRemoteMultiServerCommitDelegate,(FWriteAccessScope *)&local_28);
  if ((ReadyRemoteMultiServerCommitDelegate._16_4_ != 0) &&
     (ReadyRemoteMultiServerCommitDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)ReadyRemoteMultiServerCommitDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&ReadyRemoteMultiServerCommitDelegate.field_0x8,0,0,0x10);
    ReadyRemoteMultiServerCommitDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (ReadyRemoteMultiServerCommitDelegate._8_8_ != 0) {
    FMemory::Free((void *)ReadyRemoteMultiServerCommitDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&ReadyRemoteMultiServerCommitDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'RemoteObjectDeniedTransferDelegate'' @ 1503527b0

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__RemoteObjectDeniedTransferDelegate__
          (void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &RemoteObjectDeniedTransferDelegate,(FWriteAccessScope *)&local_28);
  if ((RemoteObjectDeniedTransferDelegate._16_4_ != 0) &&
     (RemoteObjectDeniedTransferDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)RemoteObjectDeniedTransferDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&RemoteObjectDeniedTransferDelegate.field_0x8,0,0,0x10);
    RemoteObjectDeniedTransferDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (RemoteObjectDeniedTransferDelegate._8_8_ != 0) {
    FMemory::Free((void *)RemoteObjectDeniedTransferDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&RemoteObjectDeniedTransferDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'RemoteObjectTransferDelegate'' @ 150352850

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__RemoteObjectTransferDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&RemoteObjectTransferDelegate
             ,(FWriteAccessScope *)&local_28);
  if ((RemoteObjectTransferDelegate._16_4_ != 0) && (RemoteObjectTransferDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)RemoteObjectTransferDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&RemoteObjectTransferDelegate.field_0x8,0,0,0x10);
    RemoteObjectTransferDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (RemoteObjectTransferDelegate._8_8_ != 0) {
    FMemory::Free((void *)RemoteObjectTransferDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&RemoteObjectTransferDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'RequestRemoteObjectDelegate'' @ 1503528f0

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__RequestRemoteObjectDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&RequestRemoteObjectDelegate,
             (FWriteAccessScope *)&local_28);
  if ((RequestRemoteObjectDelegate._16_4_ != 0) && (RequestRemoteObjectDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)RequestRemoteObjectDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&RequestRemoteObjectDelegate.field_0x8,0,0,0x10);
    RequestRemoteObjectDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (RequestRemoteObjectDelegate._8_8_ != 0) {
    FMemory::Free((void *)RequestRemoteObjectDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&RequestRemoteObjectDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'RestoreRemoteObjectDataDelegate'' @ 150352990

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__RestoreRemoteObjectDataDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &RestoreRemoteObjectDataDelegate,(FWriteAccessScope *)&local_28);
  if ((RestoreRemoteObjectDataDelegate._16_4_ != 0) && (RestoreRemoteObjectDataDelegate._8_8_ != 0))
  {
    (*(code *)**(undefined8 **)RestoreRemoteObjectDataDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&RestoreRemoteObjectDataDelegate.field_0x8,0,0,0x10);
    RestoreRemoteObjectDataDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (RestoreRemoteObjectDataDelegate._8_8_ != 0) {
    FMemory::Free((void *)RestoreRemoteObjectDataDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&RestoreRemoteObjectDataDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150352a30

void __cdecl
`UE::RemoteObject::Serialization::FRemoteObjectConstructionOverridesStack::Get'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (::Singleton.Stack.ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stack.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObjectSerialization.cpp"
                       ,0xa8,L"RemoteObjectConstructionOverridesStack still contains overrides");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (::Singleton.Stack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.Stack.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150352a90

void __cdecl
`FWeakObjectProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StoreRemoteObjectDataDelegate'' @ 150352ab0

void __cdecl
UE::RemoteObject::Transfer::_dynamic_atexit_destructor_for__StoreRemoteObjectDataDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &StoreRemoteObjectDataDelegate,(FWriteAccessScope *)&local_28);
  if ((StoreRemoteObjectDataDelegate._16_4_ != 0) && (StoreRemoteObjectDataDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)StoreRemoteObjectDataDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&StoreRemoteObjectDataDelegate.field_0x8,0,0,0x10);
    StoreRemoteObjectDataDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (StoreRemoteObjectDataDelegate._8_8_ != 0) {
    FMemory::Free((void *)StoreRemoteObjectDataDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&StoreRemoteObjectDataDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'TickNetworkDelegate'' @ 150352b50

void __cdecl UE::RemoteExecutor::_dynamic_atexit_destructor_for__TickNetworkDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&TickNetworkDelegate,
             (FWriteAccessScope *)&local_28);
  if ((TickNetworkDelegate._16_4_ != 0) && (TickNetworkDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)TickNetworkDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&TickNetworkDelegate.field_0x8,0,0,0x10);
    TickNetworkDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (TickNetworkDelegate._8_8_ != 0) {
    FMemory::Free((void *)TickNetworkDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&TickNetworkDelegate);
  return;
}

// operator() @ 150486c00

bool __thiscall ``anonymous_namespace'::ValidateImports'::__l9::<lambda_10>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong local_res10;
  undefined8 local_res18;
  FName local_res20;
  FName local_68;
  undefined1 local_60 [16];
  FString local_50;
  FString local_40;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = local_res10 & 0xffffffff00000000;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4214940927015255078>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      local_res10 = 0;
      local_res20 = (FName)&local_res10;
    }
    else {
      local_res20 = UE::CoreUObject::Private::GetFName((UObject *)local_60);
    }
    local_res20 = *(FName *)local_res20;
    ::FName::ToString(&local_res20,&local_40);
    if (**(longlong **)this == 0) {
      local_res18 = 0;
      local_68 = (FName)&local_res18;
    }
    else {
      local_68 = UE::CoreUObject::Private::GetFName((UObject *)(local_60 + 8));
    }
    local_68 = *(FName *)local_68;
    ::FName::ToString(&local_68,&local_50);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015255078>,
                       &``ValidateImports'::`9'::<lambda_10>::operator()'::`2'::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150486d41;
    }
  }
  bVar4 = false;
LAB_150486d41:
  if ((bVar2) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150487f80

bool __thiscall ``anonymous_namespace'::ValidateExports'::__l77::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4214940927015255376>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x470) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015255376>,
                       &``ValidateExports'::`77'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150487ffc;
    }
  }
  bVar2 = false;
LAB_150487ffc:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150488130

bool __thiscall ``anonymous_namespace'::BuildLinker'[::L]::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4214940927015254485>);
  if (bVar4) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_18,(UObject *)0x0,
               None);
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(**(longlong **)this + 0xc0),&local_28,(UObject *)0x0,None);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015254485>,
                       &``BuildLinker'[::L]::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504881e6;
    }
  }
  bVar4 = false;
LAB_1504881e6:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150488340

bool __thiscall ``anonymous_namespace'::BuildLinker'::__l146::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4214940927015254424>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(*(longlong *)this + 0x40),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015254424>,
                       &``BuildLinker'::`146'::<lambda_2>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504883ae;
    }
  }
  bVar2 = false;
LAB_1504883ae:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504883e0

bool __thiscall ``anonymous_namespace'::BuildLinker'::__l236::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4214940927015254403>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(*(longlong *)this + 0x28),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015254403>,
                       &``BuildLinker'::`236'::<lambda_3>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048844e;
    }
  }
  bVar2 = false;
LAB_15048844e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150488480

bool __thiscall ``anonymous_namespace'::ValidateImports'::__l6::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4214940927015255089>);
  if (bVar2) {
    local_res10 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015255089>,
                       &``ValidateImports'::`6'::<lambda_6>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150488522;
    }
  }
  bVar2 = false;
LAB_150488522:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150488560

bool __thiscall ``anonymous_namespace'::ValidateImports'::__l6::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4214940927015255087>);
  if (bVar2) {
    local_res10 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015255087>,
                       &``ValidateImports'::`6'::<lambda_7>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150488602;
    }
  }
  bVar2 = false;
LAB_150488602:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150488640

bool __thiscall ``anonymous_namespace'::ValidateImports'::__l6::<lambda_8>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4214940927015255085>);
  if (bVar2) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)this + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015255085>,
                       &``ValidateImports'::`6'::<lambda_8>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504886e6;
    }
  }
  bVar2 = false;
LAB_1504886e6:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150488720

bool __thiscall ``anonymous_namespace'::ValidateImports'::__l6::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  FName local_res10;
  FString local_18;
  
  pUVar4 = (UClass *)0x0;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4214940927015255083>);
  if (bVar2) {
    if ((UObject *)**(undefined8 **)this != (UObject *)0x0) {
      pUVar4 = UE::CoreUObject::Private::GetClass((UObject *)**(undefined8 **)this);
    }
    local_res10 = *(FName *)(pUVar4->_padding_ + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    pUVar4 = (UClass *)&DAT_00000001;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214940927015255083>,
                       &``ValidateImports'::`6'::<lambda_9>::operator()'::`2'::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504887dd;
    }
  }
  bVar2 = false;
LAB_1504887dd:
  if ((pUVar4 != (UClass *)0x0) &&
     (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

