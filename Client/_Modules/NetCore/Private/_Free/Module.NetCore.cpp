// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 194

// CVarMaxNumberOfAllowedChangesPerUpdate'' @ 140f80330

void __cdecl
`dynamic_initializer_for_'FFastArraySerializer::CVarMaxNumberOfAllowedChangesPerUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FFastArraySerializer::CVarMaxNumberOfAllowedChangesPerUpdate,
             L"net.MaxNumberOfAllowedTArrayChangesPerUpdate",
             &FFastArraySerializer::MaxNumberOfAllowedChangesPerUpdate,L"",0);
  atexit(`dynamic_atexit_destructor_for_'FFastArraySerializer::
         CVarMaxNumberOfAllowedChangesPerUpdate__);
  return;
}

// CVarMaxNumberOfAllowedDeletionsPerUpdate'' @ 140f80380

void __cdecl
`dynamic_initializer_for_'FFastArraySerializer::CVarMaxNumberOfAllowedDeletionsPerUpdate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&FFastArraySerializer::CVarMaxNumberOfAllowedDeletionsPerUpdate,
             L"net.MaxNumberOfAllowedTArrayDeletionsPerUpdate",
             &FFastArraySerializer::MaxNumberOfAllowedDeletionsPerUpdate,L"",0);
  atexit(`dynamic_atexit_destructor_for_'FFastArraySerializer::
         CVarMaxNumberOfAllowedDeletionsPerUpdate__);
  return;
}

// EmptyDirtyObjects'' @ 140f803d0

void __cdecl
`dynamic_initializer_for_'UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjects__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::
         EmptyDirtyObjects__);
  return;
}

// EmptyDirtyObjectsAndProperties'' @ 140f803f0

void __cdecl
`dynamic_initializer_for_'UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::
EmptyDirtyObjectsAndProperties__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::
         EmptyDirtyObjectsAndProperties__);
  return;
}

// OnNetTraceStarted'' @ 140f80410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FNetTrace::OnNetTraceStarted__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&FNetTrace::OnNetTraceStarted,4000);
  FNetTrace::OnNetTraceStarted._48_8_ = ___xmm_00000000000000020000000000000000;
  FNetTrace::OnNetTraceStarted._56_8_ = _UNK_150631d48;
  FNetTrace::OnNetTraceStarted._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FNetTrace::OnNetTraceStarted__);
  return;
}

// OnPropertyCustomConditionChangedDelegate'' @ 140f80460

void __cdecl
`dynamic_initializer_for_'UE::Net::Private::FPropertyConditionDelegates::
OnPropertyCustomConditionChangedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::Private::FPropertyConditionDelegates::
         OnPropertyCustomConditionChangedDelegate__);
  return;
}

// OnPropertyDynamicConditionChangedDelegate'' @ 140f80480

void __cdecl
`dynamic_initializer_for_'UE::Net::Private::FPropertyConditionDelegates::
OnPropertyDynamicConditionChangedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Net::Private::FPropertyConditionDelegates::
         OnPropertyDynamicConditionChangedDelegate__);
  return;
}

// OnResetPersistentNetDebugNames'' @ 140f804a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FNetTrace::OnResetPersistentNetDebugNames__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&FNetTrace::OnResetPersistentNetDebugNames,4000);
  FNetTrace::OnResetPersistentNetDebugNames._48_8_ = ___xmm_00000000000000020000000000000000;
  FNetTrace::OnResetPersistentNetDebugNames._56_8_ = _UNK_150631d48;
  FNetTrace::OnResetPersistentNetDebugNames._40_8_ = 0;
  atexit(`dynamic_atexit_destructor_for_'FNetTrace::OnResetPersistentNetDebugNames__);
  return;
}

// `dynamic_initializer_for_'CVarAutoRegisterReplicatedProperties'' @ 140f804f0

void __cdecl UE::Net::_dynamic_initializer_for__CVarAutoRegisterReplicatedProperties__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutoRegisterReplicatedProperties,L"Net.AutoRegisterReplicatedProperties",
             &bAutoRegisterReplicatedProperties,
             L"Automatically register replicated variables if they are not registered by the class in GetLifetimeReplicatedProps."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAutoRegisterReplicatedProperties__);
  return;
}

// `dynamic_initializer_for_'CVarEnsureForMissingProperties'' @ 140f80540

void __cdecl UE::Net::_dynamic_initializer_for__CVarEnsureForMissingProperties__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnsureForMissingProperties,L"Net.EnsureOnMissingReplicatedPropertiesRegister",
             &bEnsureForMissingProperties,
             L"Ensure when we detect a missing replicated property in GetLifetimeReplicatedProps of the class."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnsureForMissingProperties__);
  return;
}

// `dynamic_initializer_for_'CVarForceConnectionViewerPriority'' @ 140f80590

void __cdecl UE::Net::_dynamic_initializer_for__CVarForceConnectionViewerPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceConnectionViewerPriority,L"Net.ForceConnectionViewerPriority",
             &CVar_ForceConnectionViewerPriority,
             L"Force the connection\'s player controller and viewing pawn as topmost priority.",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceConnectionViewerPriority__);
  return;
}

// `dynamic_initializer_for_'CVarNetEnableDetailedScopeCounters'' @ 140f805e0

void __cdecl _dynamic_initializer_for__CVarNetEnableDetailedScopeCounters__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetEnableDetailedScopeCounters,L"net.EnableDetailedScopeCounters",
             &GUseDetailedScopeCounters,
             L"Enables detailed networking scope cycle counters. There are often lots of these which can negatively impact performance."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetEnableDetailedScopeCounters__);
  return;
}

// `dynamic_initializer_for_'CVarNetRemapStableSubobjects'' @ 140f80630

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarNetRemapStableSubobjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetRemapStableSubobjects,L"net.RemapStableSubobjects",&bRemapStableSubobjects,
             L"If enabled, attempts to remap stable subobjects when net.OptimizedRemapping is also enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetRemapStableSubobjects__);
  return;
}

// `dynamic_initializer_for_'CVarRepGraphForceConnectionViewerPriority'' @ 140f80680

void __cdecl UE::Net::_dynamic_initializer_for__CVarRepGraphForceConnectionViewerPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRepGraphForceConnectionViewerPriority,
             L"Net.RepGraph.ForceConnectionViewerPriority",&CVar_ForceConnectionViewerPriority,
             L"Force the connection\'s player controller and viewing pawn as topmost priority. Same as Net.ForceConnectionViewerPriority."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRepGraphForceConnectionViewerPriority__);
  return;
}

// `dynamic_initializer_for_'CVarReplicateCustomDeltaPropertiesInRepIndexOrder'' @ 140f806d0

void __cdecl
UE::Net::_dynamic_initializer_for__CVarReplicateCustomDeltaPropertiesInRepIndexOrder__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReplicateCustomDeltaPropertiesInRepIndexOrder,
             L"net.ReplicateCustomDeltaPropertiesInRepIndexOrder",
             &bReplicateCustomDeltaPropertiesInRepIndexOrder,
             L"If false (default) custom delta properties will replicate in the same order as they\'re added to the lifetime property array during the call to GetLifetimeReplicatedProps. If true custom delta properties will be replicated in the property RepIndex order, which is typically in increasing property offset order. Note that custom delta properties are always serialized after regular properties."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReplicateCustomDeltaPropertiesInRepIndexOrder__);
  return;
}

// `dynamic_initializer_for_'CVarUsePerPropertyDirtyTracking'' @ 140f80720

void __cdecl
UE::Net::Private::CVars::_dynamic_initializer_for__CVarUsePerPropertyDirtyTracking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUsePerPropertyDirtyTracking,L"net.Iris.UsePerPropertyDirtyTracking",
             &bUsePerPropertyDirtyTracking,L"When true we use per property dirty tracking.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUsePerPropertyDirtyTracking__);
  return;
}

// `dynamic_initializer_for_'FBinnedMovingValueTestAutomationTestInstance'' @ 140f80770

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBinnedMovingValueTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBinnedMovingValueTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBinnedMovingValueTestAutomationTestInstance,&local_18,false);
  FBinnedMovingValueTestAutomationTestInstance._0_8_ = &___7FBinnedMovingValueTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBinnedMovingValueTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FNetCloseResultEnumTestAutomationTestInstance'' @ 140f807d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FNetCloseResultEnumTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FNetCloseResultEnumTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FNetCloseResultEnumTestAutomationTestInstance,&local_18,false);
  FNetCloseResultEnumTestAutomationTestInstance._0_8_ = &___7FNetCloseResultEnumTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FNetCloseResultEnumTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FResizableCircularQueueTestAutomationTestInstance'' @ 140f80830

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FResizableCircularQueueTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FResizableCircularQueueTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FResizableCircularQueueTestAutomationTestInstance,&local_18,
             false);
  FResizableCircularQueueTestAutomationTestInstance._0_8_ = &___7FResizableCircularQueueTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FResizableCircularQueueTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'GNetFaultRecoveryLogQuotaChecksCVar'' @ 140f80890

void __cdecl _dynamic_initializer_for__GNetFaultRecoveryLogQuotaChecksCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GNetFaultRecoveryLogQuotaChecksCVar,L"net.NetFaultRecoveryLogQuotaChecks",
             &GNetFaultRecoveryLogQuotaChecks,
             L"Whether or not to enable debug logging for quota checks (useful for debugging new net faults used with \'RegisterCounterCategory\')"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GNetFaultRecoveryLogQuotaChecksCVar__);
  return;
}

// `dynamic_initializer_for_'GPendingSendPacket'' @ 140f808e0

void __cdecl _dynamic_initializer_for__GPendingSendPacket__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPendingSendPacket__);
  return;
}

// `dynamic_initializer_for_'GReceivePacketAudits'' @ 140f80900

void __cdecl _dynamic_initializer_for__GReceivePacketAudits__(void)

{
  atexit(_dynamic_atexit_destructor_for__GReceivePacketAudits__);
  return;
}

// `dynamic_initializer_for_'GSendPacketAudits'' @ 140f80920

void __cdecl _dynamic_initializer_for__GSendPacketAudits__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSendPacketAudits__);
  return;
}

// `dynamic_initializer_for_'GameInstances'' @ 140f80940

void __cdecl _dynamic_initializer_for__GameInstances__(void)

{
  atexit(_dynamic_atexit_destructor_for__GameInstances__);
  return;
}

// `dynamic_initializer_for_'LogNetCore'' @ 140f80960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetCore__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNetCore,L"LogNetCore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNetCore__);
  return;
}

// `dynamic_initializer_for_'LogNetFastTArray'' @ 140f809a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetFastTArray__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetFastTArray,L"LogNetFastTArray",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogNetFastTArray__);
  return;
}

// `dynamic_initializer_for_'LogNetToken'' @ 140f809e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetToken__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNetToken,L"LogNetToken",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNetToken__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNetCore'' @ 140f80a20

void __cdecl _dynamic_initializer_for__ModuleRegistrantNetCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NetCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NetCore",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNetCoreModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NeTraceSetVerbosityCmd'' @ 140f80a70

void __cdecl _dynamic_initializer_for__NeTraceSetVerbosityCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = <lambda_5>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&NeTraceSetVerbosityCmd,L"NetTrace.SetTraceVerbosity",
             L"Start NetTrace with given verbositylevel.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__NeTraceSetVerbosityCmd__);
  return;
}

// `dynamic_initializer_for_'NetChannelReg'' @ 140f80bb0

void __cdecl _dynamic_initializer_for__NetChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&NetChannelObject,"NetChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'NetGroupOwner'' @ 140f80be0

void __cdecl UE::Net::_dynamic_initializer_for__NetGroupOwner__(void)

{
  ::FName::FName(&NetGroupOwner,L"NetGroupOwner");
  return;
}

// `dynamic_initializer_for_'NetGroupReplay'' @ 140f80c00

void __cdecl UE::Net::_dynamic_initializer_for__NetGroupReplay__(void)

{
  ::FName::FName(&NetGroupReplay,L"NetGroupReplay");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetSerializeFastArray'' @ 140f80c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetSerializeFastArray__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetSerializeFastArray ==
      (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetSerializeFastArray");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSerializeFastArray,*pFVar1,
               L"NetSerializeFast Array","STATGROUP_ServerCPU","STATCAT_Advanced",L"Server CPU",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetSerializeFastArray_BuildMap'' @ 140f80cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetSerializeFastArray_BuildMap__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetSerializeFastArray_BuildMap ==
      (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_BuildMap>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetSerializeFastArray_BuildMap");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSerializeFastArray_BuildMap,*pFVar1,
               L"NetSerializeFast Array BuildMap","STATGROUP_ServerCPU","STATCAT_Advanced",
               L"Server CPU",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetSerializeFastArray_DeltaStruct'' @ 140f80d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetSerializeFastArray_DeltaStruct__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetSerializeFastArray_DeltaStruct ==
      (FThreadSafeStaticStat<FStat_STAT_NetSerializeFastArray_DeltaStruct>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetSerializeFastArray_DeltaStruct");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSerializeFastArray_DeltaStruct,*pFVar1,
               L"NetSerializeFast Array Delta Struct","STATGROUP_ServerCPU","STATCAT_Advanced",
               L"Server CPU",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PropertyConditions_PostGarbageCollect'' @ 140f80dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PropertyConditions_PostGarbageCollect__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PropertyConditions_PostGarbageCollect ==
      (FThreadSafeStaticStat<FStat_STAT_PropertyConditions_PostGarbageCollect>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PropertyConditions_PostGarbageCollect");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PropertyConditions_PostGarbageCollect,
               *pFVar1,L"PropertyConditions PostGarbageCollect","STATGROUP_Net","STATCAT_Advanced",
               L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'ThreadBuffer'' @ 140f80e60

void __cdecl _dynamic_initializer_for__ThreadBuffer__(void)

{
  __tlregdtor(_dynamic_atexit_destructor_for__ThreadBuffer__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h__Script_NetCore_3734920840'' @ 140f80e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h__Script_NetCore_3734920840__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NetCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h__Script_NetCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Core_Analytics_NetAnalyticsAggregatorConfig_h__Script_NetCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h__Script_NetCore_2677269590'' @ 140f80ed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h__Script_NetCore_2677269590__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NetCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h__Script_NetCore_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Classes_Net_Serialization_FastArraySerializer_h__Script_NetCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h__Script_NetCore_2694121594'' @ 140f80f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h__Script_NetCore_2694121594__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NetCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h__Script_NetCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_EscalationStates_h__Script_NetCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h__Script_NetCore_2525878675'' @ 140f80f70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h__Script_NetCore_2525878675__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NetCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetCloseResult_h__Script_NetCore_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h__Script_NetCore_3423183386'' @ 140f80fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h__Script_NetCore_3423183386__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NetCore",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h__Script_NetCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h__Script_NetCore_267444752'' @ 140f81000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h__Script_NetCore_267444752__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NetCore",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h__Script_NetCore_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h__Script_NetCore_3434324856'' @ 140f81050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h__Script_NetCore_3434324856__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NetCore",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h__Script_NetCore_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h__Script_NetCore_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NetCore'' @ 140f810a0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NetCore__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x8be9e0fb;
  local_res8[0].DeclarationsHash = 0x933384d1;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NetCore,L"/Script/NetCore",
             &Z_Registration_Info_UPackage__Script_NetCore,local_res8);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Networking'' @ 140f810e0

void __cdecl _dynamic_initializer_for___GCsvCategory_Networking__(void)

{
  FString::operator=(&_GCsvCategory_Networking.Name,L"Networking");
  _GCsvCategory_Networking.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Networking.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Networking__);
  return;
}

// Z_Construct_UClass_UEscalationManagerConfig @ 1441c3fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEscalationManagerConfig(void)

{
  if (Z_Registration_Info_UClass_UEscalationManagerConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEscalationManagerConfig.OuterSingleton,
               &Z_Construct_UClass_UEscalationManagerConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEscalationManagerConfig.OuterSingleton;
}

// Z_Construct_UClass_UStatePerObjectConfig @ 1441c3ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStatePerObjectConfig(void)

{
  if (Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton,
               &Z_Construct_UClass_UStatePerObjectConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStatePerObjectConfig.OuterSingleton;
}

// Z_Construct_UScriptStruct_FEscalationState @ 1441c4030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEscalationState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEscalationState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEscalationState.InnerSingleton,
               &Z_Construct_UScriptStruct_FEscalationState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEscalationState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEscalationState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FStateStruct @ 1441c40b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStateStruct.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStateStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStateStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStateStruct.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStateStruct.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bLogEscalate_SetBit @ 1441c4130

void __cdecl
Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bLogEscalate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bDormant_SetBit @ 1441c4140

void __cdecl
Z_Construct_UScriptStruct_FEscalationState_Statics::NewProp_bDormant_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewStructOps @ 1441c4150

void * __cdecl Z_Construct_UScriptStruct_FEscalationState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEscalationState,&UE::CoreUObject::Private::Construct<FEscalationState>,&UE::CoreUObject::Private::ConstructForTests<FEscalationState>,&UE::CoreUObject::Private::Destruct<FEscalationState>,&UE::CoreUObject::Private::Copy<FEscalationState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1441c4380

void * __cdecl Z_Construct_UScriptStruct_FStateStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStateStruct,&UE::CoreUObject::Private::Construct<FStateStruct>,&UE::CoreUObject::Private::ConstructForTests<FStateStruct>,&UE::CoreUObject::Private::Destruct<FStateStruct>,&UE::CoreUObject::Private::Copy<FStateStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnabled_SetBit @ 1441c43c0

void __cdecl
Z_Construct_UClass_UStatePerObjectConfig_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UClass_UNetAnalyticsAggregatorConfig @ 1441c43d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetAnalyticsAggregatorConfig(void)

{
  if (Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton,
               &Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetAnalyticsDataConfig @ 1441c4410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetAnalyticsDataConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetAnalyticsDataConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetAnalyticsDataConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetAnalyticsDataConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetAnalyticsDataConfig.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bEnabled_SetBit @ 1441c4490

void __cdecl
Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 1441c44a0

void * __cdecl Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetAnalyticsDataConfig,&UE::CoreUObject::Private::Construct<FNetAnalyticsDataConfig>,&UE::CoreUObject::Private::ConstructForTests<FNetAnalyticsDataConfig>,&UE::CoreUObject::Private::Destruct<FNetAnalyticsDataConfig>,&UE::CoreUObject::Private::Copy<FNetAnalyticsDataConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ENetCloseResult_StaticEnum @ 1441c44e0

UEnum * __cdecl ENetCloseResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetCloseResult,(UObject *)pUVar1,
                       L"ENetCloseResult");
  }
  return Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1441c5e30

void * __thiscall
FResizableCircularQueueTest::_scalar_deleting_destructor_
          (FResizableCircularQueueTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441c6580

void * __thiscall
FBinnedMovingValueTest::_scalar_deleting_destructor_(FBinnedMovingValueTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441c6f20

void * __thiscall
FNetCloseResultEnumTest::_scalar_deleting_destructor_(FNetCloseResultEnumTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UPackage__Script_NetCore @ 1441c6f60

UPackage * __cdecl Z_Construct_UPackage__Script_NetCore(void)

{
  if (Z_Registration_Info_UPackage__Script_NetCore.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NetCore.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NetCore.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1441c7010

void * __thiscall FStateStruct::_scalar_deleting_destructor_(FStateStruct *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStateStruct__6B_;
  pFVar1 = (this->StateName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags @ 1441c7110

UEnum * __cdecl Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags(void)

{
  if (Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.InnerSingleton,
               &Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.InnerSingleton;
}

// NewStructOps @ 1441c7150

void * __cdecl Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFastArraySerializerItem,&UE::CoreUObject::Private::Construct<FFastArraySerializerItem>,&UE::CoreUObject::Private::ConstructForTests<FFastArraySerializerItem>,&UE::CoreUObject::Private::Destruct<FFastArraySerializerItem>,&UE::CoreUObject::Private::Copy<FFastArraySerializerItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ENetworkFailure_StaticEnum @ 1441c7190

UEnum * __cdecl ENetworkFailure_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure,(UObject *)pUVar1,
                       L"ENetworkFailure");
  }
  return Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton;
}

// EReplicationSystem_StaticEnum @ 1441c71d0

UEnum * __cdecl EReplicationSystem_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EReplicationSystem.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_EReplicationSystem.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_EReplicationSystem,(UObject *)pUVar1,
                       L"EReplicationSystem");
  }
  return Z_Registration_Info_UEnum_EReplicationSystem.OuterSingleton;
}

// EFastArraySerializerDeltaFlags_StaticEnum @ 1441c7210

UEnum * __cdecl EFastArraySerializerDeltaFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags,(UObject *)pUVar1,
                       L"EFastArraySerializerDeltaFlags");
  }
  return Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton;
}

// NewStructOps @ 1441c7250

void * __cdecl Z_Construct_UScriptStruct_FFastArraySerializer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFastArraySerializer,&UE::CoreUObject::Private::Construct<FFastArraySerializer>,&UE::CoreUObject::Private::ConstructForTests<FFastArraySerializer>,&UE::CoreUObject::Private::Destruct<FFastArraySerializer>,&UE::CoreUObject::Private::Copy<FFastArraySerializer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1441c7320

void * __thiscall
FEscalationState::_scalar_deleting_destructor_(FEscalationState *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllTimePeriods).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FStateStruct__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441c7ab0

void * __thiscall FNetFaultState::_scalar_deleting_destructor_(FNetFaultState *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FStateStruct__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewProp_bCloseConnection_SetBit @ 1441c7d30

void __cdecl
Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 1441c7d40

void * __cdecl Z_Construct_UScriptStruct_FNetFaultState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetFaultState,&UE::CoreUObject::Private::Construct<FNetFaultState>,&UE::CoreUObject::Private::ConstructForTests<FNetFaultState>,&UE::CoreUObject::Private::Destruct<FNetFaultState>,&UE::CoreUObject::Private::Copy<FNetFaultState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1441c7fb0

void * __thiscall FNetCoreModule::_scalar_deleting_destructor_(FNetCoreModule *this,uint param_1)

{
  *this = (FNetCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 1441c81b0

void __cdecl
<lambda_5>::<lambda_invoker_cdecl>(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FThreadBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDelegateHandle FVar6;
  wchar_t *_Str;
  TDefaultDelete<FNetTraceInternal::FThreadBuffer> *this;
  uint uVar7;
  <lambda_1> local_res10 [8];
  undefined1 local_res18 [16];
  FString local_18;
  
  uVar7 = GNetTraceRuntimeVerbosity;
  if (param_1->ArrayNum != 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    uVar5 = _wtoi(_Str);
    uVar7 = 3;
    if (uVar5 < 3) {
      uVar7 = uVar5;
    }
    if (GNetTraceRuntimeVerbosity == 0) {
      if (uVar7 != 0) {
        UE::Trace::ToggleChannel(L"NetChannel",true);
        UE::Trace::ToggleChannel(L"FrameChannel",true);
        bVar4 = UE::Trace::IsTracing();
        if (bVar4) {
          FNetTrace::OnTraceConnected();
        }
        FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
                AddLambda<_FNetTrace::SetTraceVerbosity_::__l5::<lambda_1>_>
                          ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                            *)&FTraceAuxiliary::OnConnection,local_res10);
                    /* WARNING: Load size is inaccurate */
        OnTraceConnectedHandle.ID = *FVar6.ID;
        FVar6 = TMulticastDelegateRegistration<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
                ::AddStatic<>(&FTraceAuxiliary::OnTraceStopped,
                              (_func___cdecl_void_EConnectionType_FString_ptr *)local_res18);
                    /* WARNING: Load size is inaccurate */
        OnTraceStoppedHandle.ID = *FVar6.ID;
        GNetTraceRuntimeVerbosity = uVar7;
        return;
      }
    }
    else if (uVar7 == 0) {
      UE::Trace::ToggleChannel(L"NetChannel",false);
      bVar4 = UE::Trace::IsTracing();
      if (bVar4) {
        ::FString::FString(&local_18,L"");
        this = (TDefaultDelete<FNetTraceInternal::FThreadBuffer> *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xe60);
        pFVar2 = *(FThreadBuffer **)this;
        if (pFVar2 != (FThreadBuffer *)0x0) {
          *(undefined8 *)this = 0;
          TDefaultDelete<FNetTraceInternal::FThreadBuffer>::operator()(this,pFVar2);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      if (OnTraceConnectedHandle.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &FTraceAuxiliary::OnConnection,OnTraceConnectedHandle);
      }
      if (OnTraceStoppedHandle.ID != 0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &FTraceAuxiliary::OnTraceStopped,OnTraceStoppedHandle);
      }
    }
  }
  GNetTraceRuntimeVerbosity = uVar7;
  return;
}

// operator<<<unsigned_int,FPacketAuditData> @ 1441c8360

FArchive * __cdecl
operator<<<unsigned_int,FPacketAuditData>
          (FArchive *param_1,TTuple<unsigned_int,FPacketAuditData> *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x8);
    }
  }
  else {
    *(undefined4 *)&param_2->field_0x8 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TSetPrivateFriend::
  Serialize<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
                      *)&param_2->field_0x10);
  return param_1;
}

// operator<<<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator> @ 1441c8420

FArchive * __cdecl
operator<<<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned_int,FPacketAuditData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPacketAuditData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1441cffce;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1441cffce:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1441d00ab;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1441d00ab:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x68 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[0x19] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[0x18] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator> @ 1441c8430

FArchive * __cdecl
operator<<<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,FPacketStageData>,TDefaultMapHashableKeyFuncs<FString,FPacketStageData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1441d026c;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_1441d026c:
  uVar13 = (ulonglong)uVar12;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar9 & (longlong)(int)uVar12 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_74 = 1;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar7;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        iVar5 = (int)uVar7;
        uStack_78 = iVar5 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1441d0347;
        uVar12 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_1441d0347:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar7 * 0x20);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar10 = L"";
          iVar5 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar11;
          iVar5 = *(int *)(puVar11 + 1) + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
        uVar8 = *piVar1 - 1U & uVar8;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar6 + uVar9 * 4);
        *(int *)((longlong)FVar6 + uVar9 * 4) = (int)uVar7;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1441c8440

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<unsigned_int,FPacketAuditData> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<unsigned_int,FPacketAuditData> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x68,(longlong)*(int *)&param_2->field_0xc * 0x68);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1441c876c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_1441c876c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<unsigned_int,FPacketAuditData>
                  (param_1,(TTuple<unsigned_int,FPacketAuditData> *)
                           ((longlong)local_50.CurrentBitIndex * 0x68 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<unsigned_int,FPacketAuditData> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x68,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x68 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x68 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<unsigned_int,FPacketAuditData> *)0x0;
        if (local_78.Pointer != (TTuple<unsigned_int,FPacketAuditData> *)0x0) {
          *(undefined4 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x48) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x50) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x58) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x3c) = 0x80;
          *(undefined4 *)((longlong)local_78.Pointer + 0x40) = 0xffffffff;
          *(undefined4 *)((longlong)local_78.Pointer + 0x60) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<unsigned_int,FPacketAuditData>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<unsigned_int,FPacketAuditData> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1441c87e0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<FString,FPacketStageData> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<FString,FPacketStageData> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1441c8aec;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_1441c8aec:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<FString,FPacketStageData>
                  (param_1,(TTuple<FString,FPacketStageData> *)
                           ((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FString,FPacketStageData> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<FString,FPacketStageData> *)0x0;
        if (local_78.Pointer != (TTuple<FString,FPacketStageData> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<FString,FPacketStageData>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FString,FPacketStageData> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FString,FPacketStageData> @ 1441c8b60

FArchive * __cdecl
operator<<<FString,FPacketStageData>(FArchive *param_1,TTuple<FString,FPacketStageData> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  operator<<(param_1,(FString *)param_2);
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x10);
    }
  }
  else {
    *(undefined4 *)&param_2->field_0x10 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x14;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// AddLambda<`FNetTrace::SetTraceVerbosity'::__l5::<lambda_1>_> @ 1441c90a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_FNetTrace::SetTraceVerbosity_::__l5::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  FDelegateAllocation local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  InitializeCriticalSectionAndSpinCount(&local_60,4000);
  uVar8 = 0;
  local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_38.DelegateSize = 0;
  EnterCriticalSection(&local_60);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FNetTrace::SetTraceVerbosity'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  LeaveCriticalSection(&local_60);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_60);
  if (((local_38.DelegateSize != 0) &&
      (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_38.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_60);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_60);
    if ((local_38.DelegateSize != 0) &&
       (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_38.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_60);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_60);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_38.DelegateAllocator;
    local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_38.DelegateSize;
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_60);
  if ((local_38.DelegateSize != 0) &&
     (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_38,0,0,0x10);
    local_38.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_60);
  if (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_38.DelegateAllocator);
  }
  DeleteCriticalSection(&local_60);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<UEscalationManagerConfig,UStatePerObjectConfig_const_> @ 1441c9990

UEscalationManagerConfig * __cdecl
CastChecked<UEscalationManagerConfig,UStatePerObjectConfig_const_>(UStatePerObjectConfig *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStatePerObjectConfig *)0x0) {
    pFVar3 = GetTypeName<UEscalationManagerConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UEscalationManagerConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UEscalationManagerConfig *)param_1;
  }
  pFVar3 = GetTypeName<UEscalationManagerConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStatePerObjectConfig_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int> @ 1441c9a50

void __cdecl
ConstructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
          (void *param_1,FStructWithDestructorForResizableCiruclarQueuePopTest *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(int *)(lVar1 + (longlong)param_2) = param_2->Count;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int> @ 1441c9a80

void __cdecl
ConstructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,
          TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
          *param_2,int param_3)

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
                  (4,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FDDoSPacketCounters,int> @ 1441c9bd0

void __cdecl DefaultConstructItems<FDDoSPacketCounters,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x1c);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FDDoSStateConfig,int> @ 1441c9c00

void __cdecl DefaultConstructItems<FDDoSStateConfig,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined1 *)(lVar1 + -8) = 1;
      *(undefined8 *)(lVar1 + -4) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 4) = 0xffffffff;
      *(undefined2 *)(lVar1 + 8) = 0xffff;
      *(undefined8 *)(lVar1 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x14) = 0xffffffffffffffff;
      FString::FString((FString *)(lVar1 + 0x20),L"");
      lVar1 = lVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::FEscalationCounter,int> @ 1441c9c80

void __cdecl DefaultConstructItems<UE::Net::FEscalationCounter,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,int> @ 1441c9cb0

void __cdecl
DefaultConstructItems<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,int>
          (void *param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    for (uVar1 = (ulonglong)(uint)param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_1 = 10;
      param_1 = (undefined4 *)((longlong)param_1 + 4);
    }
  }
  return;
}

// DefaultConstructItems<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,int> @ 1441c9ce0

void __cdecl
DefaultConstructItems<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,int>
          (void *param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 0x18);
    do {
      *pbVar1 = *pbVar1 & 0xfe;
      *pbVar1 = *pbVar1 | 2;
      pbVar1[-0x18] = 0;
      pbVar1[-0x17] = 0;
      pbVar1[-0x16] = 0;
      pbVar1[-0x15] = 0;
      pbVar1[-0x14] = 0;
      pbVar1[-0x13] = 0;
      pbVar1[-0x12] = 0;
      pbVar1[-0x11] = 0;
      pbVar1[-0x10] = 0;
      pbVar1[-0xf] = 0;
      pbVar1[-0xe] = 0;
      pbVar1[-0xd] = 0;
      pbVar1[-0xc] = 0;
      pbVar1[-0xb] = 0;
      pbVar1[-10] = 0;
      pbVar1[-9] = 0;
      pbVar1[-8] = 0;
      pbVar1[-7] = 0;
      pbVar1[-6] = 0;
      pbVar1[-5] = 0;
      pbVar1 = pbVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TStructOnScope<FStateStruct>,int> @ 1441c9d20

void __cdecl DefaultConstructItems<TStructOnScope<FStateStruct>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FStructOnScope::FStructOnScope(param_1);
    ((FStructOnScope *)param_1)->_padding_ = (longlong)&___7__TStructOnScope_UFStateStruct____6B_;
    param_1 = (void *)((longlong)param_1 + 0x28);
  }
  return;
}

// DestructItems<FDDoSStateConfig,int> @ 1441c9de0

void __cdecl DestructItems<FDDoSStateConfig,int>(FDDoSStateConfig *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SeverityCategory;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,int> @ 1441c9e20

void __cdecl
DestructItems<UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::FPollerStatus,int>
          (FPollerStatus *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int> @ 1441c9e60

void __cdecl
DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,int>
          (FStructWithDestructorForResizableCiruclarQueuePopTest *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    param_1->Count = param_1->Count + -1;
    if ((param_1->Count != 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\ResizableCircularQueueTests.cpp"
                           ,0x96,L""), bVar2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned_int> @ 1441c9ec0

void __cdecl
DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned_int>
          (FStructWithDestructorForResizableCiruclarQueuePopTest *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    param_1->Count = param_1->Count + -1;
    if ((param_1->Count != 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\ResizableCircularQueueTests.cpp"
                           ,0x96,L""), bVar2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<`FResizableCircularQueueTest::RunTest'::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64> @ 1441c9f20

void __cdecl
DestructItems<_FResizableCircularQueueTest::RunTest_::__l21::FStructWithDestructorForResizableCiruclarQueuePopTest,unsigned___int64>
          (FStructWithDestructorForResizableCiruclarQueuePopTest *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    param_1->Count = param_1->Count + -1;
    if ((param_1->Count != 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\ResizableCircularQueueTests.cpp"
                           ,0x96,L""), bVar2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int> @ 1441c9f80

void __cdecl
DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int>
          (TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
           *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,unsigned_int> @ 1441c9fc0

void __cdecl
DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,unsigned_int>
          (TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
           *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,unsigned___int64> @ 1441ca000

void __cdecl
DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,unsigned___int64>
          (TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
           *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TStructOnScope<FEscalationState>,int> @ 1441ca040

void __cdecl
DestructItems<TStructOnScope<FEscalationState>,int>
          (TStructOnScope<FEscalationState> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FStructOnScope::~FStructOnScope((FStructOnScope *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TStructOnScope<FStateStruct>,int> @ 1441ca080

void __cdecl
DestructItems<TStructOnScope<FStateStruct>,int>(TStructOnScope<FStateStruct> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FStructOnScope::~FStructOnScope((FStructOnScope *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// GetFullNameForCastLogError<UStatePerObjectConfig_const_> @ 1441cd640

FString * __cdecl
GetFullNameForCastLogError<UStatePerObjectConfig_const_>
          (FString *__return_storage_ptr__,UStatePerObjectConfig *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UEscalationManagerConfig> @ 1441cd670

FString * __cdecl GetTypeName<UEscalationManagerConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UEscalationManagerConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IntCastChecked<signed_char,int> @ 1441cd7b0

schar __cdecl IntCastChecked<signed_char,int>(int param_1)

{
  code *pcVar1;
  bool bVar2;
  schar sVar3;
  
  if (param_1 != (char)param_1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
  }
  return (char)param_1;
}

// InternalConstructor<UEscalationManagerConfig> @ 1441cd800

void __cdecl InternalConstructor<UEscalationManagerConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined ***)this = &___7UEscalationManagerConfig__6B_;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UNetAnalyticsAggregatorConfig> @ 1441cd870

void __cdecl InternalConstructor<UNetAnalyticsAggregatorConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNetAnalyticsAggregatorConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UStatePerObjectConfig> @ 1441cd8b0

void __cdecl InternalConstructor<UStatePerObjectConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UStatePerObjectConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UEscalationManagerConfig> @ 1441cd910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEscalationManagerConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEscalationManagerConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UEscalationManagerConfig__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetAnalyticsAggregatorConfig> @ 1441cda00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetAnalyticsAggregatorConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetAnalyticsAggregatorConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetAnalyticsAggregatorConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStatePerObjectConfig> @ 1441cdac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStatePerObjectConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStatePerObjectConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStatePerObjectConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UNetAnalyticsAggregatorConfig> @ 1441cdc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetAnalyticsAggregatorConfig * __cdecl
NewObject<UNetAnalyticsAggregatorConfig>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UNetAnalyticsAggregatorConfig *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UNetAnalyticsAggregatorConfig::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UNetAnalyticsAggregatorConfig *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UStatePerObjectConfig> @ 1441cdd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStatePerObjectConfig * __cdecl
NewObject<UStatePerObjectConfig>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UStatePerObjectConfig *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UStatePerObjectConfig::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UStatePerObjectConfig *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EFastArraySerializerDeltaFlags> @ 1441d0440

UEnum * __cdecl StaticEnum<enum_EFastArraySerializerDeltaFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_EFastArraySerializerDeltaFlags,(UObject *)pUVar1,
                       L"EFastArraySerializerDeltaFlags");
  }
  return Z_Registration_Info_UEnum_EFastArraySerializerDeltaFlags.OuterSingleton;
}

// StaticEnum<enum_ENetCloseResult> @ 1441d0480

UEnum * __cdecl StaticEnum<enum_ENetCloseResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetCloseResult,(UObject *)pUVar1,
                       L"ENetCloseResult");
  }
  return Z_Registration_Info_UEnum_ENetCloseResult.OuterSingleton;
}

// StaticEnum<enum_EReplicationSystem> @ 1441d04c0

UEnum * __cdecl StaticEnum<enum_EReplicationSystem>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EReplicationSystem.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_EReplicationSystem.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_EReplicationSystem,(UObject *)pUVar1,
                       L"EReplicationSystem");
  }
  return Z_Registration_Info_UEnum_EReplicationSystem.OuterSingleton;
}

// StaticEnum<enum_ENetworkFailure::Type> @ 1441d0500

UEnum * __cdecl StaticEnum<enum_ENetworkFailure::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure,(UObject *)pUVar1,
                       L"ENetworkFailure");
  }
  return Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton;
}

// __builtin_array_init_helper<UE::Net::FBinnedMovingValueBase::FBin> @ 1441d0cc0

void __cdecl
__builtin_array_init_helper<UE::Net::FBinnedMovingValueBase::FBin>(FBin *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    param_1->Sum = 0.0;
    param_1->Count = 0;
    param_1 = param_1 + 1;
  }
  return;
}

// __builtin_array_init_helper<TArrayView<UE::Net::FEscalationCounter,int>_> @ 1441d0cf0

void __cdecl
__builtin_array_init_helper<TArrayView<UE::Net::FEscalationCounter,int>_>
          (TArrayView<UE::Net::FEscalationCounter,int> *param_1,ulong64 param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    param_1->DataPtr = (FEscalationCounter *)0x0;
    param_1->ArrayNum = 0;
    param_1 = param_1 + 1;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<``FNetTrace::SetTraceVerbosity'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 1441d2cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FNetTrace::SetTraceVerbosity'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<__FNetTrace::SetTraceVerbosity_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<``FNetTrace::SetTraceVerbosity'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TResizableCircularQueue<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 1441d2e10

void __thiscall
TResizableCircularQueue<TArray<`FResizableCircularQueueTest::RunTest'::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::
~TResizableCircularQueue<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (void *this)

{
  TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(int *)this - *(int *)((longlong)this + 4);
  uVar4 = *(uint *)((longlong)this + 8) & *(uint *)((longlong)this + 4);
  uVar6 = *(uint *)((longlong)this + 8) & *(uint *)this;
  pTVar1 = *(TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
             **)((longlong)this + 0x10);
  pTVar5 = pTVar1 + uVar4;
  if (uVar7 == 0 || uVar4 < uVar6) {
    DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,unsigned___int64>
              (pTVar5,(ulonglong)uVar7);
  }
  else {
    DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,unsigned___int64>
              (pTVar5,(ulonglong)(*(int *)((longlong)this + 0x18) - uVar4));
    DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,unsigned_int>
              (pTVar1,uVar6);
  }
  if (0xffffffff < (ulonglong)*(uint *)((longlong)this + 4) + (ulonglong)uVar7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)((longlong)this + 4) = *(int *)((longlong)this + 4) + uVar7;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  DestructItems<TArray<_FResizableCircularQueueTest::RunTest_::__l37::FNonTrivialStruct,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<_protected:_virtual_bool___cdecl_FResizableCircularQueueTest::RunTest(FString_const_&)_::_37_::FNonTrivialStruct,TSizedDefaultAllocator<32>_>
               **)((longlong)this + 0x10),0);
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  return;
}

// operator<< @ 1441d50c0

TStringBuilderBase<char> * __cdecl operator<<(TStringBuilderBase<char> *param_1,FNetHandle *param_2)

{
  TStringBuilderBase<char> *pTVar1;
  
  pTVar1 = TStringBuilderBase<char>::AppendfImpl(param_1,"NetHandle (Id=%u)");
  return pTVar1;
}

// operator<< @ 1441d50e0

TStringBuilderBase<char8_t> * __cdecl
operator<<(TStringBuilderBase<char8_t> *param_1,FNetHandle *param_2)

{
  TStringBuilderBase<char8_t> *pTVar1;
  
  pTVar1 = TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"NetHandle (Id=%u)");
  return pTVar1;
}

// operator<< @ 1441d5100

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,FNetHandle *param_2)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  
  pTVar1 = TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"NetHandle (Id=%u)");
  return pTVar1;
}

// `scalar_deleting_destructor' @ 1441d5430

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`FNetTrace::SetTraceVerbosity'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5460

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FNetPropertyConditionManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FNetPropertyConditionManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FNetTrace::SetTraceVerbosity'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<``FNetTrace::SetTraceVerbosity'::`5'::<lambda_1>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d54d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRepChangedPropertyTracker,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRepChangedPropertyTracker,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5510

void * __thiscall
TStructOnScope<FStateStruct>::_scalar_deleting_destructor_
          (TStructOnScope<FStateStruct> *this,uint param_1)

{
  FStructOnScope::~FStructOnScope((FStructOnScope *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5550

void * __thiscall
UE::Net::FEscalationManager::TStructOnScopeLite<FEscalationState,UScriptStruct_*>::
_scalar_deleting_destructor_
          (TStructOnScopeLite<FEscalationState,UScriptStruct_*> *this,uint param_1)

{
  FStructOnScope::~FStructOnScope((FStructOnScope *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5590

void * __thiscall
FNetAnalyticsData::_scalar_deleting_destructor_(FNetAnalyticsData *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FNetAnalyticsData__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FVirtualDestructor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5600

void * __thiscall
FSharedMemoryReader::_scalar_deleting_destructor_(FSharedMemoryReader *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5640

void * __thiscall
FSharedMemoryWriter::_scalar_deleting_destructor_(FSharedMemoryWriter *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5680

void * __thiscall
UEscalationManagerConfig::_scalar_deleting_destructor_(UEscalationManagerConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEscalationManagerConfig__6B_;
  DestructItems<TStructOnScope<FEscalationState>,int>
            ((TStructOnScope<FEscalationState> *)
             (this->EscalationSeverityState).AllocatorInstance.Data,
             (this->EscalationSeverityState).ArrayNum);
  pFVar1 = (this->EscalationSeverityState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EscalationSeverity).AllocatorInstance.Data,
             (this->EscalationSeverity).ArrayNum);
  pFVar1 = (this->EscalationSeverity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UStatePerObjectConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d5760

void * __thiscall
UNetAnalyticsAggregatorConfig::_scalar_deleting_destructor_
          (UNetAnalyticsAggregatorConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetAnalyticsAggregatorConfig__6B_;
  pFVar1 = (this->NetAnalyticsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1441d57d0

void * __thiscall
UStatePerObjectConfig::_scalar_deleting_destructor_(UStatePerObjectConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UStatePerObjectConfig__6B_;
  pFVar1 = (this->PerObjectConfigSection).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RegisteredStateConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfigParms).ConfigContext.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeEscalationStates @ 1441daa40

void __cdecl EmptyLinkFunctionForGeneratedCodeEscalationStates(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFastArraySerializer @ 1441daa50

void __cdecl EmptyLinkFunctionForGeneratedCodeFastArraySerializer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetAnalyticsAggregatorConfig @ 1441daa60

void __cdecl EmptyLinkFunctionForGeneratedCodeNetAnalyticsAggregatorConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetCloseResult @ 1441daa70

void __cdecl EmptyLinkFunctionForGeneratedCodeNetCloseResult(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetConnectionFaultRecoveryBase @ 1441daa80

void __cdecl EmptyLinkFunctionForGeneratedCodeNetConnectionFaultRecoveryBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetCore_init @ 1441daa90

void __cdecl EmptyLinkFunctionForGeneratedCodeNetCore_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetEnums @ 1441daaa0

void __cdecl EmptyLinkFunctionForGeneratedCodeNetEnums(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePushModel @ 1441daab0

void __cdecl EmptyLinkFunctionForGeneratedCodePushModel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateStruct @ 1441daac0

void __cdecl EmptyLinkFunctionForGeneratedCodeStateStruct(void)

{
  return;
}

// FromNetworkFailure @ 1441db820

ENetCloseResult __cdecl FromNetworkFailure(Type param_1)

{
  UPackage *pUVar1;
  long64 lVar2;
  Type TVar3;
  
  if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure,(UObject *)pUVar1,
                       L"ENetworkFailure");
    if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
      return Unknown;
    }
  }
  lVar2 = UEnum::GetMaxEnumValue(Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton);
  TVar3 = PendingConnectionFailure|OutdatedClient;
  if (param_1 < (Type)lVar2) {
    TVar3 = param_1;
  }
  return TVar3;
}

// FromSecurityEvent @ 1441db890

ENetCloseResult __cdecl FromSecurityEvent(Type param_1)

{
  ENetCloseResult EVar1;
  UPackage *pUVar2;
  long64 lVar3;
  ENetCloseResult EVar4;
  
  if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure,(UObject *)pUVar2,
                       L"ENetworkFailure");
    if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
      return Unknown;
    }
  }
  lVar3 = UEnum::GetMaxEnumValue(Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton);
  EVar4 = (int)lVar3 + param_1;
  EVar1 = Unknown;
  if (EVar4 < Unknown) {
    EVar1 = EVar4;
  }
  return EVar1;
}

// GetOrCreateDebugNameIdInLocalMap @ 1441dca50

uint * __cdecl GetOrCreateDebugNameIdInLocalMap(FNetDebugName *param_1,FThreadBuffer *param_2)

{
  TMap<UE::Net::FNetDebugName_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetDebugName_const_*,unsigned_int,0>_>
  *this;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  FNetDebugName *local_res8;
  uint local_res10 [2];
  int local_res18;
  FNetDebugName **local_18;
  uint *local_10;
  
  this = &param_2->DebugNameToNameIdMap;
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(param_2->DebugNameToNameIdMap).field_0x8 !=
      *(int *)&(param_2->DebugNameToNameIdMap).field_0x34) {
    puVar7 = *(undefined1 **)&(param_2->DebugNameToNameIdMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(param_2->DebugNameToNameIdMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(param_2->DebugNameToNameIdMap).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->field_0x0 + (longlong)iVar4 * 0x18;
        if (*(FNetDebugName **)(*(longlong *)&this->field_0x0 + (longlong)iVar4 * 0x18) == param_1)
        {
          puVar5 = (uint *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (uint *)0x0;
          }
          if (puVar5 != (uint *)0x0) {
            return puVar5;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res8 = param_1;
  local_res10[0] = FNetTrace::TraceName(param_1->Name);
  local_18 = &local_res8;
  local_10 = local_res10;
  TSet<TTuple<UE::Net::FNetDebugName_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetDebugName_const_*,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Net::FNetDebugName_const_*_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<UE::Net::FNetDebugName_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::Net::FNetDebugName_const_*,unsigned_int,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<UE::Net::FNetDebugName_const_*_const_&,unsigned_int_&&> *)
                     &local_res18,(bool *)&local_18);
  puVar5 = (uint *)(*(longlong *)&this->field_0x0 + ((longlong)local_res18 * 3 + 1) * 8);
  if ((puVar5 == (uint *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("NameIdPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Trace\\NetTraceInternal.cpp"
                         ,0x1ff,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uint *)(*pcVar2)();
    return puVar5;
  }
  return puVar5;
}

// LexToString @ 1441e10a0

wchar_t * __cdecl LexToString(ENetCloseResult param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"::Invalid";
  switch(param_1) {
  case NetDriverAlreadyExists:
    pwVar1 = L"ENetCloseResult::NetDriverAlreadyExists";
    break;
  case NetDriverCreateFailure:
    pwVar1 = L"ENetCloseResult::NetDriverCreateFailure";
    break;
  case NetDriverListenFailure:
    pwVar1 = L"ENetCloseResult::NetDriverListenFailure";
    break;
  case ConnectionLost:
    pwVar1 = L"ENetCloseResult::ConnectionLost";
    break;
  case ConnectionTimeout:
    pwVar1 = L"ENetCloseResult::ConnectionTimeout";
    break;
  case FailureReceived:
    pwVar1 = L"ENetCloseResult::FailureReceived";
    break;
  case OutdatedClient:
    pwVar1 = L"ENetCloseResult::OutdatedClient";
    break;
  case OutdatedServer:
    pwVar1 = L"ENetCloseResult::OutdatedServer";
    break;
  case PendingConnectionFailure:
    pwVar1 = L"ENetCloseResult::PendingConnectionFailure";
    break;
  case NetGuidMismatch:
    pwVar1 = L"ENetCloseResult::NetGuidMismatch";
    break;
  case NetChecksumMismatch:
    pwVar1 = L"ENetCloseResult::NetChecksumMismatch";
    break;
  case SecurityMalformedPacket:
    pwVar1 = L"ENetCloseResult::SecurityMalformedPacket";
    break;
  case SecurityInvalidData:
    pwVar1 = L"ENetCloseResult::SecurityInvalidData";
    break;
  case SecurityClosed:
    pwVar1 = L"ENetCloseResult::SecurityClosed";
    break;
  case Unknown:
    pwVar1 = L"ENetCloseResult::Unknown";
    break;
  case Success:
    pwVar1 = L"ENetCloseResult::Success";
    break;
  case Extended:
    pwVar1 = L"ENetCloseResult::Extended";
    break;
  case HostClosedConnection:
    pwVar1 = L"ENetCloseResult::HostClosedConnection";
    break;
  case Disconnect:
    pwVar1 = L"ENetCloseResult::Disconnect";
    break;
  case Upgrade:
    pwVar1 = L"ENetCloseResult::Upgrade";
    break;
  case PreLoginFailure:
    pwVar1 = L"ENetCloseResult::PreLoginFailure";
    break;
  case JoinFailure:
    pwVar1 = L"ENetCloseResult::JoinFailure";
    break;
  case JoinSplitFailure:
    pwVar1 = L"ENetCloseResult::JoinSplitFailure";
    break;
  case AddressResolutionFailed:
    pwVar1 = L"ENetCloseResult::AddressResolutionFailed";
    break;
  case RPCDoS:
    pwVar1 = L"ENetCloseResult::RPCDoS";
    break;
  case Cleanup:
    pwVar1 = L"ENetCloseResult::Cleanup";
    break;
  case MissingLevelPackage:
    pwVar1 = L"ENetCloseResult::MissingLevelPackage";
    break;
  case PacketHandlerIncomingError:
    pwVar1 = L"ENetCloseResult::PacketHandlerIncomingError";
    break;
  case ZeroLastByte:
    pwVar1 = L"ENetCloseResult::ZeroLastByte";
    break;
  case ZeroSize:
    pwVar1 = L"ENetCloseResult::ZeroSize";
    break;
  case ReadHeaderFail:
    pwVar1 = L"ENetCloseResult::ReadHeaderFail";
    break;
  case ReadHeaderExtraFail:
    pwVar1 = L"ENetCloseResult::ReadHeaderExtraFail";
    break;
  case AckSequenceMismatch:
    pwVar1 = L"ENetCloseResult::AckSequenceMismatch";
    break;
  case BunchBadChannelIndex:
    pwVar1 = L"ENetCloseResult::BunchBadChannelIndex";
    break;
  case BunchChannelNameFail:
    pwVar1 = L"ENetCloseResult::BunchChannelNameFail";
    break;
  case BunchWrongChannelType:
    pwVar1 = L"ENetCloseResult::BunchWrongChannelType";
    break;
  case BunchHeaderOverflow:
    pwVar1 = L"ENetCloseResult::BunchHeaderOverflow";
    break;
  case BunchDataOverflow:
    pwVar1 = L"ENetCloseResult::BunchDataOverflow";
    break;
  case BunchServerPackageMapExports:
    pwVar1 = L"ENetCloseResult::BunchServerPackageMapExports";
    break;
  case BunchPrematureControlChannel:
    pwVar1 = L"ENetCloseResult::BunchPrematureControlChannel";
    break;
  case BunchPrematureChannel:
    pwVar1 = L"ENetCloseResult::BunchPrematureChannel";
    break;
  case BunchPrematureControlClose:
    pwVar1 = L"ENetCloseResult::BunchPrematureControlClose";
    break;
  case UnknownChannelType:
    pwVar1 = L"ENetCloseResult::UnknownChannelType";
    break;
  case PrematureSend:
    pwVar1 = L"ENetCloseResult::PrematureSend";
    break;
  case CorruptData:
    pwVar1 = L"ENetCloseResult::CorruptData";
    break;
  case SocketSendFailure:
    pwVar1 = L"ENetCloseResult::SocketSendFailure";
    break;
  case BadChildConnectionIndex:
    pwVar1 = L"ENetCloseResult::BadChildConnectionIndex";
    break;
  case LogLimitInstant:
    pwVar1 = L"ENetCloseResult::LogLimitInstant";
    break;
  case LogLimitSustained:
    pwVar1 = L"ENetCloseResult::LogLimitSustained";
    break;
  case EncryptionFailure:
    pwVar1 = L"ENetCloseResult::EncryptionFailure";
    break;
  case EncryptionTokenMissing:
    pwVar1 = L"ENetCloseResult::EncryptionTokenMissing";
    break;
  case ReceivedNetGUIDBunchFail:
    pwVar1 = L"ENetCloseResult::ReceivedNetGUIDBunchFail";
    break;
  case ReceivedNetExtBunchFail:
    pwVar1 = L"ENetCloseResult::ReceivedNetExtBunchFail";
    break;
  case MaxReliableExceeded:
    pwVar1 = L"ENetCloseResult::MaxReliableExceeded";
    break;
  case ReceivedNextBunchFail:
    pwVar1 = L"ENetCloseResult::ReceivedNextBunchFail";
    break;
  case ReceivedNextBunchQueueFail:
    pwVar1 = L"ENetCloseResult::ReceivedNextBunchQueueFail";
    break;
  case PartialInitialReliableDestroy:
    pwVar1 = L"ENetCloseResult::PartialInitialReliableDestroy";
    break;
  case PartialMergeReliableDestroy:
    pwVar1 = L"ENetCloseResult::PartialMergeReliableDestroy";
    break;
  case PartialInitialNonByteAligned:
    pwVar1 = L"ENetCloseResult::PartialInitialNonByteAligned";
    break;
  case PartialNonByteAligned:
    pwVar1 = L"ENetCloseResult::PartialNonByteAligned";
    break;
  case PartialFinalPackageMapExports:
    pwVar1 = L"ENetCloseResult::PartialFinalPackageMapExports";
    break;
  case PartialTooLarge:
    pwVar1 = L"ENetCloseResult::PartialTooLarge";
    break;
  case AlreadyOpen:
    pwVar1 = L"ENetCloseResult::AlreadyOpen";
    break;
  case ReliableBeforeOpen:
    pwVar1 = L"ENetCloseResult::ReliableBeforeOpen";
    break;
  case ReliableBufferOverflow:
    pwVar1 = L"ENetCloseResult::ReliableBufferOverflow";
    break;
  case RPCReliableBufferOverflow:
    pwVar1 = L"ENetCloseResult::RPCReliableBufferOverflow";
    break;
  case ControlChannelClose:
    pwVar1 = L"ENetCloseResult::ControlChannelClose";
    break;
  case ControlChannelEndianCheck:
    pwVar1 = L"ENetCloseResult::ControlChannelEndianCheck";
    break;
  case ControlChannelPlayerChannelFail:
    pwVar1 = L"ENetCloseResult::ControlChannelPlayerChannelFail";
    break;
  case ControlChannelMessageUnknown:
    pwVar1 = L"ENetCloseResult::ControlChannelMessageUnknown";
    break;
  case ControlChannelMessageFail:
    pwVar1 = L"ENetCloseResult::ControlChannelMessageFail";
    break;
  case ControlChannelMessagePayloadFail:
    pwVar1 = L"ENetCloseResult::ControlChannelMessagePayloadFail";
    break;
  case ControlChannelBunchOverflowed:
    pwVar1 = L"ENetCloseResult::ControlChannelBunchOverflowed";
    break;
  case ControlChannelQueueBunchOverflowed:
    pwVar1 = L"ENetCloseResult::ControlChannelQueueBunchOverflowed";
    break;
  case ClientHasMustBeMappedGUIDs:
    pwVar1 = L"ENetCloseResult::ClientHasMustBeMappedGUIDs";
    break;
  case ClientSentDestructionInfo:
    pwVar1 = L"ENetCloseResult::ClientSentDestructionInfo";
    break;
  case UnregisteredMustBeMappedGUID:
    pwVar1 = L"ENetCloseResult::UnregisteredMustBeMappedGUID";
    break;
  case ObjectReplicatorReceivedBunchFail:
    pwVar1 = L"ENetCloseResult::ObjectReplicatorReceivedBunchFail";
    break;
  case ContentBlockFail:
    pwVar1 = L"ENetCloseResult::ContentBlockFail";
    break;
  case ContentBlockHeaderRepLayoutFail:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderRepLayoutFail";
    break;
  case ContentBlockHeaderIsActorFail:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderIsActorFail";
    break;
  case ContentBlockHeaderObjFail:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderObjFail";
    break;
  case ContentBlockHeaderPrematureEnd:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderPrematureEnd";
    break;
  case ContentBlockHeaderSubObjectActor:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderSubObjectActor";
    break;
  case ContentBlockHeaderBadParent:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderBadParent";
    break;
  case ContentBlockHeaderInvalidCreate:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderInvalidCreate";
    break;
  case ContentBlockHeaderStablyNamedFail:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderStablyNamedFail";
    break;
  case ContentBlockHeaderNoSubObjectClass:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderNoSubObjectClass";
    break;
  case ContentBlockHeaderUObjectSubObject:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderUObjectSubObject";
    break;
  case ContentBlockHeaderAActorSubObject:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderAActorSubObject";
    break;
  case ContentBlockHeaderFail:
    pwVar1 = L"ENetCloseResult::ContentBlockHeaderFail";
    break;
  case ContentBlockPayloadBitsFail:
    pwVar1 = L"ENetCloseResult::ContentBlockPayloadBitsFail";
    break;
  case FieldHeaderRepIndex:
    pwVar1 = L"ENetCloseResult::FieldHeaderRepIndex";
    break;
  case FieldHeaderBadRepIndex:
    pwVar1 = L"ENetCloseResult::FieldHeaderBadRepIndex";
    break;
  case FieldHeaderPayloadBitsFail:
    pwVar1 = L"ENetCloseResult::FieldHeaderPayloadBitsFail";
    break;
  case FieldPayloadFail:
    pwVar1 = L"ENetCloseResult::FieldPayloadFail";
    break;
  case ReplicationChannelCountMaxedOut:
    pwVar1 = L"ENetCloseResult::ReplicationChannelCountMaxedOut";
    break;
  case BeaconControlFlowError:
    pwVar1 = L"ENetCloseResult::BeaconControlFlowError";
    break;
  case BeaconUnableToParsePacket:
    pwVar1 = L"ENetCloseResult::BeaconUnableToParsePacket";
    break;
  case BeaconAuthenticationFailure:
    pwVar1 = L"ENetCloseResult::BeaconAuthenticationFailure";
    break;
  case BeaconLoginInvalidIdError:
    pwVar1 = L"ENetCloseResult::BeaconLoginInvalidIdError";
    break;
  case BeaconLoginInvalidAuthHandlerError:
    pwVar1 = L"ENetCloseResult::BeaconLoginInvalidAuthHandlerError";
    break;
  case BeaconAuthError:
    pwVar1 = L"ENetCloseResult::BeaconAuthError";
    break;
  case BeaconSpawnClientWorldPackageNameError:
    pwVar1 = L"ENetCloseResult::BeaconSpawnClientWorldPackageNameError";
    break;
  case BeaconSpawnExistingActorError:
    pwVar1 = L"ENetCloseResult::BeaconSpawnExistingActorError";
    break;
  case BeaconSpawnFailureError:
    pwVar1 = L"ENetCloseResult::BeaconSpawnFailureError";
    break;
  case BeaconSpawnNetGUIDAckNoActor:
    pwVar1 = L"ENetCloseResult::BeaconSpawnNetGUIDAckNoActor";
    break;
  case BeaconSpawnNetGUIDAckNoHost:
    pwVar1 = L"ENetCloseResult::BeaconSpawnNetGUIDAckNoHost";
    break;
  case BeaconSpawnUnexpectedError:
    pwVar1 = L"ENetCloseResult::BeaconSpawnUnexpectedError";
    break;
  case IrisProtocolMismatch:
    pwVar1 = L"ENetCloseResult::IrisProtocolMismatch";
    break;
  case IrisNetRefHandleError:
    pwVar1 = L"ENetCloseResult::IrisNetRefHandleError";
    break;
  case FaultDisconnect:
    pwVar1 = L"ENetCloseResult::FaultDisconnect";
    break;
  case NotRecoverable:
    pwVar1 = L"ENetCloseResult::NotRecoverable";
    break;
  default:
    goto switchD_1441e10c4_default;
  }
  do {
    pwVar1 = pwVar1 + 1;
  } while (*pwVar1 != L':');
switchD_1441e10c4_default:
  return pwVar1 + 2;
}

// ToNetworkFailure @ 1441eca60

Type __cdecl ToNetworkFailure(ENetCloseResult param_1)

{
  UPackage *pUVar1;
  long64 lVar2;
  Type TVar3;
  
  if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure,(UObject *)pUVar1,
                       L"ENetworkFailure");
    if (Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton == (UEnum *)0x0) {
      return ConnectionLost;
    }
  }
  lVar2 = UEnum::GetMaxEnumValue(Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton);
  TVar3 = ConnectionLost;
  if (param_1 < (ENetCloseResult)lVar2) {
    TVar3 = param_1;
  }
  return TVar3;
}

// TraceExistingObject @ 1441ed760

void __cdecl
TraceExistingObject(uint param_1,
                   TMap<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
                   *param_2,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                            *param_3,ulong64 param_4)

{
  uint uVar1;
  ulong64 uVar2;
  int iVar3;
  uint uVar4;
  FNetObject *pFVar5;
  FThreadBuffer *pFVar6;
  uint *puVar7;
  ForElementType<FSetElementId> FVar8;
  ulong64 local_res18;
  ulong64 local_res20;
  
  if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
    FVar8 = (param_3->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&param_3->Hash;
    }
    iVar3 = *(int *)((longlong)FVar8 +
                    ((param_4 >> 0x20) * 0x17 + param_4 & (ulonglong)(param_3->HashSize - 1)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&param_3->Elements + (longlong)iVar3 * 0x10) == param_4) {
          return;
        }
        iVar3 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res20 = param_4;
  pFVar5 = TMapBase<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
           ::Find((TMapBase<unsigned___int64,FNetTraceInternal::FNetObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNetTraceInternal::FNetObject,0>_>
                   *)param_2,param_4);
  if (pFVar5 != (FNetObject *)0x0) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(param_3,&local_res18,(bool *)&local_res20);
    if (pFVar5->DebugName == (FNetDebugName *)0x0) {
      uVar1 = pFVar5->OwnerId;
      uVar2 = pFVar5->TypeIdentifier;
      uVar4 = FNetTrace::TraceName(pFVar5->Name);
      FNetTraceReporter::ReportObjectExists(param_1,param_4,uVar4,uVar2,uVar1);
    }
    else {
      pFVar6 = FNetTraceInternal::GetThreadBuffer();
      puVar7 = GetOrCreateDebugNameIdInLocalMap(pFVar5->DebugName,pFVar6);
      FNetTraceReporter::ReportObjectExists
                (param_1,param_4,*puVar7,pFVar5->TypeIdentifier,pFVar5->OwnerId);
    }
    if (pFVar5->ParentNetObjectId != 0xffffffffffffffff) {
      TraceExistingObject(param_1,param_2,param_3,pFVar5->ParentNetObjectId);
      FNetTraceReporter::ReportSubObject(param_1,pFVar5->ParentNetObjectId,param_4);
    }
  }
  return;
}

// Z_Construct_UClass_UEscalationManagerConfig_NoRegister @ 1441f1bd0

UClass * __cdecl Z_Construct_UClass_UEscalationManagerConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"EscalationManagerConfig",
               &Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton,
               UEscalationManagerConfig::StaticRegisterNativesUEscalationManagerConfig,0x98,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UEscalationManagerConfig>,
               InternalVTableHelperCtorCaller<UEscalationManagerConfig>,local_res8,
               UStatePerObjectConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton;
}

// Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister @ 1441f1c90

UClass * __cdecl Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"NetAnalyticsAggregatorConfig",
               &Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton,
               UNetAnalyticsAggregatorConfig::StaticRegisterNativesUNetAnalyticsAggregatorConfig,
               0x38,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetAnalyticsAggregatorConfig>,
               InternalVTableHelperCtorCaller<UNetAnalyticsAggregatorConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetAnalyticsAggregatorConfig.InnerSingleton;
}

// Z_Construct_UClass_UStatePerObjectConfig_NoRegister @ 1441f1d40

UClass * __cdecl Z_Construct_UClass_UStatePerObjectConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"StatePerObjectConfig",
               &Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton,
               UStatePerObjectConfig::StaticRegisterNativesUStatePerObjectConfig,0x78,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UStatePerObjectConfig>,
               InternalVTableHelperCtorCaller<UStatePerObjectConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton;
}

// Z_Construct_UEnum_NetCore_ENetCloseResult @ 1441f1df0

UEnum * __cdecl Z_Construct_UEnum_NetCore_ENetCloseResult(void)

{
  if (Z_Registration_Info_UEnum_ENetCloseResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENetCloseResult.InnerSingleton,
               &Z_Construct_UEnum_NetCore_ENetCloseResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENetCloseResult.InnerSingleton;
}

// Z_Construct_UEnum_NetCore_ENetworkFailure @ 1441f1e30

UEnum * __cdecl Z_Construct_UEnum_NetCore_ENetworkFailure(void)

{
  if (Z_Registration_Info_UEnum_ENetworkFailure.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENetworkFailure.InnerSingleton,
               &Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENetworkFailure.InnerSingleton;
}

// Z_Construct_UEnum_NetCore_EReplicationSystem @ 1441f1e70

UEnum * __cdecl Z_Construct_UEnum_NetCore_EReplicationSystem(void)

{
  if (Z_Registration_Info_UEnum_EReplicationSystem.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EReplicationSystem.InnerSingleton,
               &Z_Construct_UEnum_NetCore_EReplicationSystem_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EReplicationSystem.InnerSingleton;
}

// Z_Construct_UScriptStruct_FFastArraySerializer @ 1441f1eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFastArraySerializer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFastArraySerializer.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFastArraySerializer.InnerSingleton,
               &Z_Construct_UScriptStruct_FFastArraySerializer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFastArraySerializer.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FFastArraySerializer.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FFastArraySerializerItem @ 1441f1f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFastArraySerializerItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFastArraySerializerItem.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFastArraySerializerItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFastArraySerializerItem.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFastArraySerializerItem.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNetFaultState @ 1441f1fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetFaultState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetFaultState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetFaultState.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetFaultState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetFaultState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetFaultState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_NetCore @ 1441f2030

void __cdecl IMPLEMENT_MODULE_NetCore(void)

{
  return;
}

// CVarMaxNumberOfAllowedChangesPerUpdate'' @ 1503694c0

void __cdecl
`dynamic_atexit_destructor_for_'FFastArraySerializer::CVarMaxNumberOfAllowedChangesPerUpdate__(void)

{
  FFastArraySerializer::CVarMaxNumberOfAllowedChangesPerUpdate._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FFastArraySerializer::CVarMaxNumberOfAllowedChangesPerUpdate);
  return;
}

// CVarMaxNumberOfAllowedDeletionsPerUpdate'' @ 1503694e0

void __cdecl
`dynamic_atexit_destructor_for_'FFastArraySerializer::CVarMaxNumberOfAllowedDeletionsPerUpdate__
          (void)

{
  FFastArraySerializer::CVarMaxNumberOfAllowedDeletionsPerUpdate._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FFastArraySerializer::CVarMaxNumberOfAllowedDeletionsPerUpdate);
  return;
}

// EmptyDirtyObjects'' @ 150369500

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjects__
          (void)

{
  UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjects.HashSize = 0;
  if (UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjects.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjects.Hash.
                          SecondaryData);
  }
  TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::FNetHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjects.Elements);
  return;
}

// EmptyDirtyObjectsAndProperties'' @ 150369540

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::
EmptyDirtyObjectsAndProperties__(void)

{
  UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjectsAndProperties._72_4_ = 0;
  if (UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjectsAndProperties._64_8_ != 0) {
    FMemory::Free((void *)UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::
                          EmptyDirtyObjectsAndProperties._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetHandle,TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UE::Net::FGlobalDirtyNetObjectTracker::FPimpl::EmptyDirtyObjectsAndProperties);
  return;
}

// OnNetTraceStarted'' @ 150369580

void __cdecl `dynamic_atexit_destructor_for_'FNetTrace::OnNetTraceStarted__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FNetTrace::OnNetTraceStarted._40_8_,FNetTrace::OnNetTraceStarted._48_4_);
  if (FNetTrace::OnNetTraceStarted._40_8_ != 0) {
    FMemory::Free((void *)FNetTrace::OnNetTraceStarted._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x0001503695b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FNetTrace::OnNetTraceStarted);
  return;
}

// OnPropertyCustomConditionChangedDelegate'' @ 1503695c0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::Private::FPropertyConditionDelegates::
OnPropertyCustomConditionChangedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UE::Net::Private::FPropertyConditionDelegates::OnPropertyCustomConditionChangedDelegate
             ._8_8_,UE::Net::Private::FPropertyConditionDelegates::
                    OnPropertyCustomConditionChangedDelegate._16_4_);
  if (UE::Net::Private::FPropertyConditionDelegates::OnPropertyCustomConditionChangedDelegate._8_8_
      != 0) {
    FMemory::Free((void *)UE::Net::Private::FPropertyConditionDelegates::
                          OnPropertyCustomConditionChangedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &UE::Net::Private::FPropertyConditionDelegates::
              OnPropertyCustomConditionChangedDelegate);
  return;
}

// OnPropertyDynamicConditionChangedDelegate'' @ 150369600

void __cdecl
`dynamic_atexit_destructor_for_'UE::Net::Private::FPropertyConditionDelegates::
OnPropertyDynamicConditionChangedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UE::Net::Private::FPropertyConditionDelegates::
             OnPropertyDynamicConditionChangedDelegate._8_8_,
             UE::Net::Private::FPropertyConditionDelegates::
             OnPropertyDynamicConditionChangedDelegate._16_4_);
  if (UE::Net::Private::FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate._8_8_
      != 0) {
    FMemory::Free((void *)UE::Net::Private::FPropertyConditionDelegates::
                          OnPropertyDynamicConditionChangedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &UE::Net::Private::FPropertyConditionDelegates::
              OnPropertyDynamicConditionChangedDelegate);
  return;
}

// OnResetPersistentNetDebugNames'' @ 150369640

void __cdecl `dynamic_atexit_destructor_for_'FNetTrace::OnResetPersistentNetDebugNames__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FNetTrace::OnResetPersistentNetDebugNames._40_8_,
             FNetTrace::OnResetPersistentNetDebugNames._48_4_);
  if (FNetTrace::OnResetPersistentNetDebugNames._40_8_ != 0) {
    FMemory::Free((void *)FNetTrace::OnResetPersistentNetDebugNames._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x000150369672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&FNetTrace::OnResetPersistentNetDebugNames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutoRegisterReplicatedProperties'' @ 150369680

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarAutoRegisterReplicatedProperties__(void)

{
  CVarAutoRegisterReplicatedProperties._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAutoRegisterReplicatedProperties);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnsureForMissingProperties'' @ 1503696a0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarEnsureForMissingProperties__(void)

{
  CVarEnsureForMissingProperties._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnsureForMissingProperties);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceConnectionViewerPriority'' @ 1503696c0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarForceConnectionViewerPriority__(void)

{
  CVarForceConnectionViewerPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceConnectionViewerPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetEnableDetailedScopeCounters'' @ 1503696e0

void __cdecl _dynamic_atexit_destructor_for__CVarNetEnableDetailedScopeCounters__(void)

{
  CVarNetEnableDetailedScopeCounters._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetEnableDetailedScopeCounters)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetRemapStableSubobjects'' @ 150369700

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetRemapStableSubobjects__(void)

{
  CVarNetRemapStableSubobjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetRemapStableSubobjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRepGraphForceConnectionViewerPriority'' @ 150369720

void __cdecl
UE::Net::_dynamic_atexit_destructor_for__CVarRepGraphForceConnectionViewerPriority__(void)

{
  CVarRepGraphForceConnectionViewerPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRepGraphForceConnectionViewerPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplicateCustomDeltaPropertiesInRepIndexOrder'' @ 150369740

void __cdecl
UE::Net::_dynamic_atexit_destructor_for__CVarReplicateCustomDeltaPropertiesInRepIndexOrder__(void)

{
  CVarReplicateCustomDeltaPropertiesInRepIndexOrder._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarReplicateCustomDeltaPropertiesInRepIndexOrder);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUsePerPropertyDirtyTracking'' @ 150369760

void __cdecl
UE::Net::Private::CVars::_dynamic_atexit_destructor_for__CVarUsePerPropertyDirtyTracking__(void)

{
  CVarUsePerPropertyDirtyTracking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUsePerPropertyDirtyTracking);
  return;
}

// `dynamic_atexit_destructor_for_'FBinnedMovingValueTestAutomationTestInstance'' @ 150369780

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBinnedMovingValueTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBinnedMovingValueTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FNetCloseResultEnumTestAutomationTestInstance'' @ 1503697a0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FNetCloseResultEnumTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FNetCloseResultEnumTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FResizableCircularQueueTestAutomationTestInstance'' @ 1503697c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FResizableCircularQueueTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FResizableCircularQueueTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GNetFaultRecoveryLogQuotaChecksCVar'' @ 1503697e0

void __cdecl _dynamic_atexit_destructor_for__GNetFaultRecoveryLogQuotaChecksCVar__(void)

{
  GNetFaultRecoveryLogQuotaChecksCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GNetFaultRecoveryLogQuotaChecksCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GPendingSendPacket'' @ 150369800

void __cdecl _dynamic_atexit_destructor_for__GPendingSendPacket__(void)

{
  GPendingSendPacket.StageMap._72_4_ = 0;
  if (GPendingSendPacket.StageMap._64_8_ != 0) {
    FMemory::Free((void *)GPendingSendPacket.StageMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPacketStageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPendingSendPacket.StageMap);
  return;
}

// `dynamic_atexit_destructor_for_'GReceivePacketAudits'' @ 150369840

void __cdecl _dynamic_atexit_destructor_for__GReceivePacketAudits__(void)

{
  GReceivePacketAudits._72_4_ = 0;
  if (GReceivePacketAudits._64_8_ != 0) {
    FMemory::Free((void *)GReceivePacketAudits._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GReceivePacketAudits);
  return;
}

// `dynamic_atexit_destructor_for_'GSendPacketAudits'' @ 150369880

void __cdecl _dynamic_atexit_destructor_for__GSendPacketAudits__(void)

{
  GSendPacketAudits._72_4_ = 0;
  if (GSendPacketAudits._64_8_ != 0) {
    FMemory::Free((void *)GSendPacketAudits._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPacketAuditData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GSendPacketAudits);
  return;
}

// `dynamic_atexit_destructor_for_'GameInstances'' @ 1503698c0

void __cdecl _dynamic_atexit_destructor_for__GameInstances__(void)

{
  GameInstances._72_4_ = 0;
  if (GameInstances._64_8_ != 0) {
    FMemory::Free((void *)GameInstances._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FNetTraceInternal::FGameInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GameInstances);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetCore'' @ 150369900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetCore);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetFastTArray'' @ 150369920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetFastTArray__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetFastTArray);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetToken'' @ 150369940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetToken__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetToken);
  return;
}

// `dynamic_atexit_destructor_for_'NeTraceSetVerbosityCmd'' @ 150369960

void __cdecl _dynamic_atexit_destructor_for__NeTraceSetVerbosityCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NeTraceSetVerbosityCmd);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150369980

void __cdecl
`UE::Net::Private::FNetPropertyConditionManager::Get'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  UE::Net::Private::FNetPropertyConditionManager::~FNetPropertyConditionManager(&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503699a0

void __cdecl
`UE::Net::FPersistentNetDebugNames::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if ((!GIsCriticalError) && (::Singleton.Allocator.NumMarks != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&::Singleton.Allocator,(FTaggedMemory *)0x0);
  ::Singleton.PersistentNames._72_4_ = 0;
  if (::Singleton.PersistentNames._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.PersistentNames._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::Net::FNetDebugName_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Singleton.PersistentNames);
                    /* WARNING: Could not recover jumptable at 0x000150369a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'ThreadBuffer'' @ 150369a30

void __cdecl _dynamic_atexit_destructor_for__ThreadBuffer__(void)

{
  TDefaultDelete<FNetTraceInternal::FThreadBuffer> *this;
  
  this = (TDefaultDelete<FNetTraceInternal::FThreadBuffer> *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe60);
  TDefaultDelete<FNetTraceInternal::FThreadBuffer>::operator()(this,*(FThreadBuffer **)this);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Networking'' @ 150369a60

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Networking__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Networking.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Networking.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Networking.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

