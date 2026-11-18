// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 453

// GameplayTokenStoreName'' @ 141110720

void __cdecl
`dynamic_initializer_for_'UE::Net::FGameplayTagTokenStore::GameplayTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FGameplayTagTokenStore::GameplayTokenStoreName,L"GameplayTagTokenStore");
  return;
}

// NameTokenStoreName'' @ 141110740

void __cdecl `dynamic_initializer_for_'UE::Net::FNameTokenStore::NameTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FNameTokenStore::NameTokenStoreName,L"NameTokenStore");
  return;
}

// OnNetworkCheatDetected'' @ 141110760

void __cdecl `dynamic_initializer_for_'FNetDelegates::OnNetworkCheatDetected__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetDelegates::OnNetworkCheatDetected__);
  return;
}

// OnPendingNetGameConnectionCreated'' @ 141110780

void __cdecl `dynamic_initializer_for_'FNetDelegates::OnPendingNetGameConnectionCreated__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetDelegates::OnPendingNetGameConnectionCreated__);
  return;
}

// OnReceivedNetworkEncryptionAck'' @ 1411107a0

void __cdecl `dynamic_initializer_for_'FNetDelegates::OnReceivedNetworkEncryptionAck__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetDelegates::OnReceivedNetworkEncryptionAck__);
  return;
}

// OnReceivedNetworkEncryptionFailure'' @ 1411107c0

void __cdecl `dynamic_initializer_for_'FNetDelegates::OnReceivedNetworkEncryptionFailure__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetDelegates::OnReceivedNetworkEncryptionFailure__);
  return;
}

// OnReceivedNetworkEncryptionToken'' @ 1411107e0

void __cdecl `dynamic_initializer_for_'FNetDelegates::OnReceivedNetworkEncryptionToken__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetDelegates::OnReceivedNetworkEncryptionToken__);
  return;
}

// OnSyncLoadDetected'' @ 141110800

void __cdecl `dynamic_initializer_for_'FNetDelegates::OnSyncLoadDetected__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNetDelegates::OnSyncLoadDetected__);
  return;
}

// StringTokenStoreName'' @ 141110820

void __cdecl `dynamic_initializer_for_'UE::Net::FStringTokenStore::StringTokenStoreName__(void)

{
  ::FName::FName(&UE::Net::FStringTokenStore::StringTokenStoreName,L"StringTokenStore");
  return;
}

// `dynamic_initializer_for_'CVarActorChannelPool'' @ 141110840

void __cdecl _dynamic_initializer_for__CVarActorChannelPool__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarActorChannelPool,L"net.ActorChannelPool",local_res8,
             L"If nonzero, actor channels will be pooled to save memory and object creation cost.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarActorChannelPool__);
  return;
}

// `dynamic_initializer_for_'CVarAddNetDriverInfoToNetAnalytics'' @ 141110890

void __cdecl _dynamic_initializer_for__CVarAddNetDriverInfoToNetAnalytics__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAddNetDriverInfoToNetAnalytics,L"net.AddNetDriverInfoToNetAnalytics",local_res8,
             L"Automatically add NetDriver information to the NetAnalytics cache",0);
  atexit(_dynamic_atexit_destructor_for__CVarAddNetDriverInfoToNetAnalytics__);
  return;
}

// `dynamic_initializer_for_'CVarAllowReliableMulticastToNonRelevantChannels'' @ 1411108e0

void __cdecl _dynamic_initializer_for__CVarAllowReliableMulticastToNonRelevantChannels__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowReliableMulticastToNonRelevantChannels,
             L"net.AllowReliableMulticastToNonRelevantChannels",local_res8,
             L"Allow Reliable Server Multicasts to be sent to non-Relevant Actors, as long as their is an existing ActorChannel."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowReliableMulticastToNonRelevantChannels__);
  return;
}

// `dynamic_initializer_for_'CVarAlwaysCreateLevelFilteringGroupsForPersistentLevels'' @ 141110930

void __cdecl
UE::Net::Private::
_dynamic_initializer_for__CVarAlwaysCreateLevelFilteringGroupsForPersistentLevels__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAlwaysCreateLevelFilteringGroupsForPersistentLevels,
             L"net.Iris.AlwaysCreateLevelFilteringGroupsForPersistentLevels",
             &bAlwaysCreateLevelFilteringGroupsForPersistentLevels,
             L"When true a world\'s persistent level will have a filter group created such that replication of objects therein can be enabled and disabled at any point in time. This is required for seamless travel but otherwise an unnecessary overhead."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysCreateLevelFilteringGroupsForPersistentLevels__);
  return;
}

// `dynamic_initializer_for_'CVarClientIncomingBunchFrameTimeLimitMS'' @ 141110980

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarClientIncomingBunchFrameTimeLimitMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarClientIncomingBunchFrameTimeLimitMS,L"net.ClientIncomingBunchFrameTimeLimitMS",
             &ClientIncomingBunchFrameTimeLimitMS,
             L"Time in milliseconds to limit client incoming bunch processing to. If 0, no limit. As long as we\'re below the limit, will start processing another bunch. A single bunch that takes a while to process can overshoot the limit. After the limit is hit, remaining bunches in a packet are queued, and the IpNetDriver will not process any more packets in the current frame."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarClientIncomingBunchFrameTimeLimitMS__);
  return;
}

// `dynamic_initializer_for_'CVarEnableActorCountInStats'' @ 1411109d0

void __cdecl _dynamic_initializer_for__CVarEnableActorCountInStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableActorCountInStats,L"net.EnableActorCountInStats",&GbEnableActorCountInStats,
             L"Enable the tracking of pawns and player controller counts in the network metrics database."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableActorCountInStats__);
  return;
}

// `dynamic_initializer_for_'CVarEnableActorLevelChanges'' @ 141110a20

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarEnableActorLevelChanges__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableActorLevelChanges,L"net.Iris.EnableActorLevelChanges",
             &bEnableActorLevelChanges,
             L"When true the ActorReplicationBridge will process actors that change levels by updating the actor\'s level groups."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableActorLevelChanges__);
  return;
}

// `dynamic_initializer_for_'CVarEnableDynamicNetUpdateFrequency'' @ 141110a70

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarEnableDynamicNetUpdateFrequency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableDynamicNetUpdateFrequency,L"net.Iris.EnableDynamicNetUpdateFrequency",
             &bEnableDynamicNetUpdateFrequency,
             L"When true changes to AActor::NetUpdateFrequency will be updated in Iris after being registered for replication."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableDynamicNetUpdateFrequency__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNetStats'' @ 141110ac0

void __cdecl _dynamic_initializer_for__CVarEnableNetStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNetStats,L"net.EnableNetStats",&GbEnableNetStats,
             L"Enable the calculation of network stats and storing them in the network metrics database."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNetStats__);
  return;
}

// `dynamic_initializer_for_'CVarEnableSupportForNoPawnConnection'' @ 141110b10

void __cdecl _dynamic_initializer_for__CVarEnableSupportForNoPawnConnection__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableSupportForNoPawnConnection,L"net.EnableSupportForNoPawnConnection",
             &GbEnableSupportForNoPawnConnection,
             L"Enable server support for NMT_JoinNoPawn and NMT_JoinNoPawnSplit control messages.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarEnableSupportForNoPawnConnection__);
  return;
}

// `dynamic_initializer_for_'CVarFilterGuidRemapping'' @ 141110b60

void __cdecl UE::Net::_dynamic_initializer_for__CVarFilterGuidRemapping__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFilterGuidRemapping,L"net.FilterGuidRemapping",&FilterGuidRemapping,
             L"Remove destroyed and parent guids from unmapped list",0);
  atexit(_dynamic_atexit_destructor_for__CVarFilterGuidRemapping__);
  return;
}

// `dynamic_initializer_for_'CVarIrisPacketSequenceSafetyMargin'' @ 141110bb0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarIrisPacketSequenceSafetyMargin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIrisPacketSequenceSafetyMargin,L"net.Iris.PacketSequenceSafetyMargin",
             &IrisPacketSequenceSafetyMargin,
             L"How many packets to spare before considering packet sequence full. This allows a few non-DataStreamChannel packets to be sent without messing up packet acking."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIrisPacketSequenceSafetyMargin__);
  return;
}

// `dynamic_initializer_for_'CVarLogPendingGuidsOnShutdown'' @ 141110c00

void __cdecl _dynamic_initializer_for__CVarLogPendingGuidsOnShutdown__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLogPendingGuidsOnShutdown,L"Net.LogPendingGuidsOnShutdown",
             &bCVarLogPendingGuidsOnShutdown,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogPendingGuidsOnShutdown__);
  return;
}

// `dynamic_initializer_for_'CVarMaxClientGuidRemaps'' @ 141110c50

void __cdecl _dynamic_initializer_for__CVarMaxClientGuidRemaps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxClientGuidRemaps,L"net.MaxClientGuidRemaps",local_res8,
             L"Max client resolves of unmapped network guids per tick",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxClientGuidRemaps__);
  return;
}

// `dynamic_initializer_for_'CVarMinimumNumberOfPacketsForBurstTracking'' @ 141110ca0

void __cdecl
NetAnalyticsCVars::_dynamic_initializer_for__CVarMinimumNumberOfPacketsForBurstTracking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinimumNumberOfPacketsForBurstTracking,
             L"NetAnalytics.MinimumNumberOfPacketsForBurstTracking",
             &MinimumNumberOfPacketsForBurstTracking,
             L"The minimum number of packets that must have been notified (in our out) in order to consider a frame for packet loss by percentage.See NetAnalytics.PercentOfDroppedPacketsToConsiderBurst"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinimumNumberOfPacketsForBurstTracking__);
  return;
}

// `dynamic_initializer_for_'CVarNetAllowEncryption'' @ 141110cf0

void __cdecl _dynamic_initializer_for__CVarNetAllowEncryption__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetAllowEncryption,L"net.AllowEncryption",local_res8,
             L"If true, the engine will attempt to load an encryption PacketHandler component and fill in the EncryptionToken parameter of the NMT_Hello message based on the ?EncryptionToken= URL option and call callbacks if it\'s non-empty. Additionally, a value of \'2\' will make the EncryptionToken required - which is enforced serverside. (0 = Disabled, 1 = Allowed (default), 2 = Required)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetAllowEncryption__);
  return;
}

// `dynamic_initializer_for_'CVarNetCleanUpRenamedDynamicActors'' @ 141110d40

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarNetCleanUpRenamedDynamicActors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetCleanUpRenamedDynamicActors,L"net.CleanUpRenamedDynamicActors",
             &CleanUpRenamedDynamicActors,
             L"When enabled, dynamic actors that change outers via Rename() on the server will close their channel or send a destruction info to clients without the actor\'s new level loaded."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetCleanUpRenamedDynamicActors__);
  return;
}

// `dynamic_initializer_for_'CVarNetControlChannelDestructionInfo'' @ 141110d90

void __cdecl _dynamic_initializer_for__CVarNetControlChannelDestructionInfo__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetControlChannelDestructionInfo,L"net.ControlChannelDestructionInfo",
             &GNetControlChannelDestructionInfo,
             L"If enabled, send destruction info updates via the control channel instead of creating a new actor channel.0: Old behavior, use an actor channel. 1: New behavior, use the control channel"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetControlChannelDestructionInfo__);
  return;
}

// `dynamic_initializer_for_'CVarNetDebugDraw'' @ 141110de0

void __cdecl _dynamic_initializer_for__CVarNetDebugDraw__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetDebugDraw,L"net.DebugDraw",local_res8,
             L"Draws debug information for network dormancy and relevancy\n1 Enables network debug drawing. 0 disables."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDebugDraw__);
  return;
}

// `dynamic_initializer_for_'CVarNetDebugDrawCullDistance'' @ 141110e30

void __cdecl _dynamic_initializer_for__CVarNetDebugDrawCullDistance__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarNetDebugDrawCullDistance,L"net.DebugDrawCullDistance",local_res8,
             L"Cull distance for net.DebugDraw. World UnitsMax world units an actor can be away from the local view to draw its dormancy status. Zero disables culling"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDebugDrawCullDistance__);
  return;
}

// `dynamic_initializer_for_'CVarNetDisableRandomNetUpdateDelay'' @ 141110e80

void __cdecl _dynamic_initializer_for__CVarNetDisableRandomNetUpdateDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetDisableRandomNetUpdateDelay,L"net.DisableRandomNetUpdateDelay",
             &GNetDisableRandomNetUpdateDelay,
             L"If 1, the server will not add a random delay to an actors\' NextUpdateTime.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDisableRandomNetUpdateDelay__);
  return;
}

// `dynamic_initializer_for_'CVarNetDiscardTornOffActorRPCs'' @ 141110ed0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetDiscardTornOffActorRPCs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetDiscardTornOffActorRPCs,L"net.DiscardTornOffActorRPCs",
             &bDiscardTornOffActorRPCs,L"If enabled, discard RPCs if the actor has been torn off.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarNetDiscardTornOffActorRPCs__);
  return;
}

// `dynamic_initializer_for_'CVarNetDormancyValidate'' @ 141110f20

void __cdecl _dynamic_initializer_for__CVarNetDormancyValidate__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetDormancyValidate,L"net.DormancyValidate",&GNetDormancyValidate,
             L"Validates that dormant actors do not change state while in a dormant state (on server only)0: Dont validate. 1: Validate on wake up. 2: Validate on each net update"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDormancyValidate__);
  return;
}

// `dynamic_initializer_for_'CVarNetDriverReportTickFlushTime'' @ 141110f70

void __cdecl _dynamic_initializer_for__CVarNetDriverReportTickFlushTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetDriverReportTickFlushTime,L"net.ReportGameTickFlushTime",
             &CVar_NetDriver_ReportGameTickFlushTime,
             L"Record and report to the perf tracking system the processing time of the GameNetDriver\'s TickFlush."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDriverReportTickFlushTime__);
  return;
}

// `dynamic_initializer_for_'CVarNetRequiredEncryptionNetDriverDefNames'' @ 141110fc0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetRequiredEncryptionNetDriverDefNames__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ParseRequiredEncryptionCVars;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetRequiredEncryptionNetDriverDefNames,L"net.RequiredEncryptionNetDriverDefNames",
             &GRequiredEncryptionNetDriverDefNames_Internal,
             L"Comma-delimited list of NetDriverDefinition\'s where \'IsEncryptionRequired\' will return true, when \'net.AllowEncryption\' is 2. (specifying \'all\' will enable this for all NetDriverDefinition\'s)"
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
  atexit(_dynamic_atexit_destructor_for__CVarNetRequiredEncryptionNetDriverDefNames__);
  return;
}

// `dynamic_initializer_for_'CVarNetResetAckStatePostSeamlessTravel'' @ 141111100

void __cdecl _dynamic_initializer_for__CVarNetResetAckStatePostSeamlessTravel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetResetAckStatePostSeamlessTravel,L"net.ResetAckStatePostSeamlessTravel",
             &GNetResetAckStatePostSeamlessTravel,
             L"If 1, the server will reset the ack state of the package map after seamless travel. Increases bandwidth usage, but may resolve some issues with GUIDs not being available on clients after seamlessly traveling."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetResetAckStatePostSeamlessTravel__);
  return;
}

// `dynamic_initializer_for_'CVarNetReuseReplicatorsForDormantObjects'' @ 141111150

void __cdecl _dynamic_initializer_for__CVarNetReuseReplicatorsForDormantObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetReuseReplicatorsForDormantObjects,L"Net.ReuseReplicatorsForDormantObjects",
             &GbNetReuseReplicatorsForDormantObjects,
             L"When true, Server\'s will persist and attempt to reuse replicators for Dormant Actors and Objects. This can cut down on bandwidth by preventing redundant information from being sent when waking objects from Dormancy."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetReuseReplicatorsForDormantObjects__);
  return;
}

// `dynamic_initializer_for_'CVarNetSendDormantDestructionOnRemoval'' @ 1411111a0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarNetSendDormantDestructionOnRemoval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetSendDormantDestructionOnRemoval,L"net.SendDormantDestructionOnRemoval",
             &SendDormantDestructionOnRemoval,
             L"If true and net.SerializeNewActorOverrideLevel = 0, servers will send destruction info for dormant destroyed actors in invisible levels, regardless of how they were removed. This ensures they destroy on the client, in-case the they (or the levels they are in) were removed unexpectedly."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetSendDormantDestructionOnRemoval__);
  return;
}

// `dynamic_initializer_for_'CVarNetSerializeNewActorOverrideLevel'' @ 1411111f0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarNetSerializeNewActorOverrideLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetSerializeNewActorOverrideLevel,L"net.SerializeNewActorOverrideLevel",
             &SerializeNewActorOverrideLevel,
             L"If true, servers will serialize a spawned, replicated actor\'s level so the client attempts to spawn it into that level too. If false, clients will spawn all these actors into the persistent level."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetSerializeNewActorOverrideLevel__);
  return;
}

// `dynamic_initializer_for_'CVarNetTrackDormantObjectsByLevel'' @ 141111240

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarNetTrackDormantObjectsByLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetTrackDormantObjectsByLevel,L"net.TrackDormantObjectsByLevel",
             &bTrackDormantObjectsByLevel,
             L"When true, network object list will maintain a set of dormant actors per connnection per level."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetTrackDormantObjectsByLevel__);
  return;
}

// `dynamic_initializer_for_'CVarNetUpdateReplicationSystemWithNoConnections'' @ 141111290

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarNetUpdateReplicationSystemWithNoConnections__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetUpdateReplicationSystemWithNoConnections,
             L"net.iris.UpdateReplicationSystemWithNoConnections",
             &bUpdateReplicationSystemWithNoConnections,
             L"If true ReplicationSystem::NetUpdate will be called even if we have no connections to ensure that we do not accumulate pending work."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetUpdateReplicationSystemWithNoConnections__);
  return;
}

// `dynamic_initializer_for_'CVarNumberOfDroppedPacketsToConsiderBurst'' @ 1411112e0

void __cdecl
NetAnalyticsCVars::_dynamic_initializer_for__CVarNumberOfDroppedPacketsToConsiderBurst__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNumberOfDroppedPacketsToConsiderBurst,
             L"NetAnalytics.NumberOfConsecutiveDroppedPacketsToConsiderBurst",
             &NumberOfConsecutiveDroppedPacketsToConsiderBurst,
             L"The number of packets lost in a row (in or out) for us to consider the frame as having bursts of packet loss.Not affected by NetAnalytics.MinimumNumberOfPacketsForBurstTracking."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNumberOfDroppedPacketsToConsiderBurst__);
  return;
}

// `dynamic_initializer_for_'CVarOptimizedRemapping'' @ 141111330

void __cdecl _dynamic_initializer_for__CVarOptimizedRemapping__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarOptimizedRemapping,L"net.OptimizedRemapping",local_res8,
             L"Uses optimized path to remap unmapped network guids",0);
  atexit(_dynamic_atexit_destructor_for__CVarOptimizedRemapping__);
  return;
}

// `dynamic_initializer_for_'CVarPercentOfDroppedPacketsToConsiderBurst'' @ 141111380

void __cdecl
NetAnalyticsCVars::_dynamic_initializer_for__CVarPercentOfDroppedPacketsToConsiderBurst__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPercentOfDroppedPacketsToConsiderBurst,
             L"NetAnalytics.PercentOfDroppedPacketsToConsiderBurst",
             &PercentOfDroppedPacketsToConsiderBurst,
             L"The percentage of packets lost in a frame (in or out) for us to consider the frame as having bursts of packet loss.\nSee NetAnalytics.MinimumNumberOfPacketsForBurstTracking."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPercentOfDroppedPacketsToConsiderBurst__);
  return;
}

// `dynamic_initializer_for_'CVarProfilerUseComparisonTracking'' @ 1411113d0

void __cdecl _dynamic_initializer_for__CVarProfilerUseComparisonTracking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarProfilerUseComparisonTracking,L"Net.ProfilerUseComparisonTracking",
             &FNetworkProfiler::bIsComparisonTrackingEnabled,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarProfilerUseComparisonTracking__);
  return;
}

// `dynamic_initializer_for_'CVarRelinkMappedReferences'' @ 141111420

void __cdecl _dynamic_initializer_for__CVarRelinkMappedReferences__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRelinkMappedReferences,L"net.RelinkMappedReferences",local_res8,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarRelinkMappedReferences__);
  return;
}

// `dynamic_initializer_for_'CVarRepManagerEnable'' @ 141111470

void __cdecl _dynamic_initializer_for__CVarRepManagerEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRepManagerEnable,L"Net.RepDriver.Enable",&CVar_RepDriver_Enable,
             L"Enables Replication Driver. 0 will fallback to legacy NetDriver implementation.",0);
  atexit(_dynamic_atexit_destructor_for__CVarRepManagerEnable__);
  return;
}

// `dynamic_initializer_for_'CVarReplicationWriterMaxAllowedPacketsIfNotHugeObject'' @ 1411114c0

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarReplicationWriterMaxAllowedPacketsIfNotHugeObject__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarReplicationWriterMaxAllowedPacketsIfNotHugeObject,
             L"net.Iris.ReplicationWriterMaxAllowedPacketsIfNotHugeObject",
             &GReplicationWriterMaxAllowedPacketsIfNotHugeObject,
             L"Allow ReplicationWriter to overcommit data if we have more data to write.",0);
  atexit(_dynamic_atexit_destructor_for__CVarReplicationWriterMaxAllowedPacketsIfNotHugeObject__);
  return;
}

// `dynamic_initializer_for_'CVarSerializeNewActorMaxBunchSize'' @ 141111510

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarSerializeNewActorMaxBunchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSerializeNewActorMaxBunchSize,L"net.Iris.SerializeNewActorMaxBunchSize",
             &SerializeNewActorMaxBunchSize,
             L"Max allowed bits that can be added to the creation header via OnSerializeNewActor.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarSerializeNewActorMaxBunchSize__);
  return;
}

// `dynamic_initializer_for_'CVarSetNetDormancyEnabled'' @ 141111560

void __cdecl _dynamic_initializer_for__CVarSetNetDormancyEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSetNetDormancyEnabled,L"net.DormancyEnable",&GSetNetDormancyEnabled,
             L"Enables Network Dormancy System for reducing CPU and bandwidth overhead of infrequently updated actors\n1 Enables network dormancy. 0 disables network dormancy."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSetNetDormancyEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarUseAdaptiveNetUpdateFrequency'' @ 1411115b0

void __cdecl _dynamic_initializer_for__CVarUseAdaptiveNetUpdateFrequency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUseAdaptiveNetUpdateFrequency,L"net.UseAdaptiveNetUpdateFrequency",local_res8,
             L"If 1, NetUpdateFrequency will be calculated based on how often actors actually send something when replicating"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseAdaptiveNetUpdateFrequency__);
  return;
}

// `dynamic_initializer_for_'CVarWarnWhenOuterIsReplaced'' @ 141111600

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarWarnWhenOuterIsReplaced__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWarnWhenOuterIsReplaced,L"net.Iris.WarnWhenOuterIsReplaced",
             &bWarnWhenOuterIsReplaced,
             L"Log a warning when a subobject\'s original outer is not found on the client and replaced with the RootObject."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarWarnWhenOuterIsReplaced__);
  return;
}

// `dynamic_initializer_for_'CreateBandwidthGenerator'' @ 141111650

void __cdecl _dynamic_initializer_for__CreateBandwidthGenerator__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_28>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"Net.CreateBandwidthGenerator",L"",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CreateBandwidthGenerator,pIVar5);
  CreateBandwidthGenerator._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CreateBandwidthGenerator__);
  return;
}

// `dynamic_initializer_for_'DumpActiveNetActorsCommand'' @ 1411117e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Net::Private::_dynamic_initializer_for__DumpActiveNetActorsCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DumpActiveNetActors;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"net.DumpActiveNetActors",
                      L"Dumps all of the active net actors in the replication system.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&DumpActiveNetActorsCommand,pIVar5);
  DumpActiveNetActorsCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__DumpActiveNetActorsCommand__);
  return;
}

// `dynamic_initializer_for_'DumpRelevantActorsCommand'' @ 141111980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__DumpRelevantActorsCommand__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DumpRelevantActors;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"net.DumpRelevantActors",
                      L"Dumps information on relevant actors during next network update",&local_58,0
                     );
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&DumpRelevantActorsCommand,pIVar5);
  DumpRelevantActorsCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__DumpRelevantActorsCommand__);
  return;
}

// `dynamic_initializer_for_'GNetworkProfiler'' @ 141111b20

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GNetworkProfiler__(void)

{
  FNetworkProfiler::FNetworkProfiler(&GNetworkProfiler);
  atexit(_dynamic_atexit_destructor_for__GNetworkProfiler__);
  return;
}

// `dynamic_initializer_for_'GRPCCSVTracker'' @ 141111b50

void __cdecl _dynamic_initializer_for__GRPCCSVTracker__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRPCCSVTracker__);
  return;
}

// `dynamic_initializer_for_'GRequiredEncryptionNetDriverDefNames'' @ 141111b70

void __cdecl UE::Net::_dynamic_initializer_for__GRequiredEncryptionNetDriverDefNames__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRequiredEncryptionNetDriverDefNames__);
  return;
}

// `dynamic_initializer_for_'GRequiredEncryptionNetDriverDefNames_Internal'' @ 141111b90

void __cdecl
UE::Net::_dynamic_initializer_for__GRequiredEncryptionNetDriverDefNames_Internal__(void)

{
  ::FString::FString(&GRequiredEncryptionNetDriverDefNames_Internal,L"all");
  atexit(_dynamic_atexit_destructor_for__GRequiredEncryptionNetDriverDefNames_Internal__);
  return;
}

// `dynamic_initializer_for_'GenerateBandwidth'' @ 141111bc0

void __cdecl _dynamic_initializer_for__GenerateBandwidth__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"Net.GenerateConstantBandwidth",
                      L"Deliver a constant throughput every tick to generate the specified Kilobytes per sec.\nUsage:\nNet.GenerateBandwidth KilobytesPerSecond"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GenerateBandwidth,pIVar5);
  GenerateBandwidth._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GenerateBandwidth__);
  return;
}

// `dynamic_initializer_for_'GenerateBandwidthSpike'' @ 141111d50

void __cdecl _dynamic_initializer_for__GenerateBandwidthSpike__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_27>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"Net.GeneratePeriodicBandwidthSpike",
                      L"Generates a spike of bandwidth every X milliseconds.\nUsage:\nNet.GeneratePeriodicBandwidthSpike SpikeInKb PeriodInMS"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GenerateBandwidthSpike,pIVar5);
  GenerateBandwidthSpike._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GenerateBandwidthSpike__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_NetDriver'' @ 141111ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_NetDriver__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_NetDriverLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  
  FVar4 = StatPtr_STAT_NetworkingSummaryLLM;
  if (StatPtr_STAT_NetworkingSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_NetworkingSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetworkingSummaryLLM,*pFVar3,
                       L"Networking","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
                       ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_NetDriverLLM;
  if (StatPtr_STAT_NetDriverLLM == (FThreadSafeStaticStat<FStat_STAT_NetDriverLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_NetDriverLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_NetDriverLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetDriverLLM,*pFVar3,L"NetDriver",
                       "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  pFVar3 = FName::FName(&local_res20,L"Networking");
  local_res18 = 0;
  FVar1.Number = local_res8.Number;
  FVar1.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar2.Number = local_res10.Number;
  FVar2.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_NetDriver,L"NetDriver",(FName)0x0,*pFVar3,FVar2,FVar1,None);
  return;
}

// `dynamic_initializer_for_'LogNetSyncLoads'' @ 141112050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetSyncLoads__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetSyncLoads,L"LogNetSyncLoads",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNetSyncLoads__);
  return;
}

// `dynamic_initializer_for_'MaxConnectionsToTickPerServerFrame'' @ 141112090

void __cdecl NetCmds::_dynamic_initializer_for__MaxConnectionsToTickPerServerFrame__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&MaxConnectionsToTickPerServerFrame,L"net.MaxConnectionsToTickPerServerFrame",0,
             L"When non-zero, the maximum number of channels that will have changed replicated to them per server update"
             ,0);
  atexit(_dynamic_atexit_destructor_for__MaxConnectionsToTickPerServerFrame__);
  return;
}

// `dynamic_initializer_for_'NetActorFactoryName'' @ 1411120d0

void __cdecl UE::Net::Private::_dynamic_initializer_for__NetActorFactoryName__(void)

{
  ::FName::FName(&NetActorFactoryName,L"NetActorFactory");
  return;
}

// `dynamic_initializer_for_'NetDriverExecRegistration'' @ 1411120f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__NetDriverExecRegistration__(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec(&NetDriverExecRegistration,NetDriverExec);
  atexit(_dynamic_atexit_destructor_for__NetDriverExecRegistration__);
  return;
}

// `dynamic_initializer_for_'NetEmulationDropAnyUnreliableFunction'' @ 141112120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_initializer_for__NetEmulationDropAnyUnreliableFunction__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_32>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"NetEmulation.DropAnyUnreliable",
                      L"Drop any sent unreliable RPCs. (optional)<0-100> to set the drop percentage (default is 20)."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropAnyUnreliableFunction,pIVar5);
  NetEmulationDropAnyUnreliableFunction._0_8_ =
       &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationDropAnyUnreliableFunction__);
  return;
}

// `dynamic_initializer_for_'NetEmulationDropNothingFunction'' @ 1411122c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationDropNothingFunction__
          (void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_31>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"NetEmulation.DropNothing",
                      L"Disables any RPC drop settings previously set.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropNothingFunction,pIVar5);
  NetEmulationDropNothingFunction._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationDropNothingFunction__);
  return;
}

// `dynamic_initializer_for_'NetEmulationDropUnreliableOfActorClassFunction'' @ 141112460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_initializer_for__NetEmulationDropUnreliableOfActorClassFunction__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_33>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"NetEmulation.DropUnreliableOfActorClass",
                      L"Drop random unreliable RPCs sent on actors of the given class type. <ActorClassName> Class name to match with (can be a substring). (optional)<0-100> to set the drop percentage (default is 20)."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropUnreliableOfActorClassFunction,pIVar5);
  NetEmulationDropUnreliableOfActorClassFunction._0_8_ =
       &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationDropUnreliableOfActorClassFunction__);
  return;
}

// `dynamic_initializer_for_'NetEmulationDropUnreliableOfSubObjectClassFunction'' @ 141112600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_initializer_for__NetEmulationDropUnreliableOfSubObjectClassFunction__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_35>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"NetEmulation.DropUnreliableOfSubObjectClass",
                      L"Drop randomly the unreliable RPCs of a subobject of the given class. <SubObjectClassName> The name of the RPC (can be a substring). (optional)<0-100> to set the drop percentage (default is 20)."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropUnreliableOfSubObjectClassFunction,pIVar5);
  NetEmulationDropUnreliableOfSubObjectClassFunction._0_8_ =
       &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationDropUnreliableOfSubObjectClassFunction__);
  return;
}

// `dynamic_initializer_for_'NetEmulationDropUnreliableRPCFunction'' @ 1411127a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_initializer_for__NetEmulationDropUnreliableRPCFunction__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_34>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"NetEmulation.DropUnreliableRPC",
                      L"Drop randomly the unreliable RPCs of the given name. <RPCName> The name of the RPC (can be a substring). (optional)<0-100> to set the drop percentage (default is 20)."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropUnreliableRPCFunction,pIVar5);
  NetEmulationDropUnreliableRPCFunction._0_8_ =
       &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationDropUnreliableRPCFunction__);
  return;
}

// `dynamic_initializer_for_'NetEmulationOff'' @ 141112940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationOff__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_30>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"NetEmulation.Off",L"Turn off network emulation",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationOff,pIVar5);
  NetEmulationOff._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationOff__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktBufferBloatInMS'' @ 141112ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktBufferBloatInMS__
          (void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_47>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktBufferBloatInMS",
                      L"Simulates outgoing buffer bloat",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationPktBufferBloatInMS,pIVar5);
  NetEmulationPktBufferBloatInMS._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktBufferBloatInMS__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktDup'' @ 141112c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktDup__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_38>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktDup",
                      L"Simulates sending/receiving duplicate network packets",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktDup,pIVar5);
  NetEmulationPktDup._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktDup__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktEmulationProfile'' @ 141112e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktEmulationProfile__
          (void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_29>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,L"NetEmulation.PktEmulationProfile",
                      L"Apply a preconfigured emulation profile.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationPktEmulationProfile,pIVar5);
  NetEmulationPktEmulationProfile._0_8_ = &___7FAutoConsoleCommandWithWorldArgsAndOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktEmulationProfile__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktIncomingBufferBloatInMS'' @ 141112fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_initializer_for__NetEmulationPktIncomingBufferBloatInMS__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_48>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktIncomingBufferBloatInMS",
                      L"Simulates incoming buffer bloat",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationPktIncomingBufferBloatInMS,pIVar5);
  NetEmulationPktIncomingBufferBloatInMS._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktIncomingBufferBloatInMS__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktIncomingLagMax'' @ 141113160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktIncomingLagMax__
          (void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_44>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktIncomingLagMax",
                      L"Sets maximum incoming packet latency",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationPktIncomingLagMax,pIVar5);
  NetEmulationPktIncomingLagMax._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktIncomingLagMax__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktIncomingLagMin'' @ 141113300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktIncomingLagMin__
          (void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_43>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktIncomingLagMin",
                      L"Sets minimum incoming packet latency",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationPktIncomingLagMin,pIVar5);
  NetEmulationPktIncomingLagMin._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktIncomingLagMin__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktIncomingLoss'' @ 1411134a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktIncomingLoss__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_45>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktIncomingLoss",
                      L"Simulates incoming packet loss",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktIncomingLoss,pIVar5);
  NetEmulationPktIncomingLoss._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktIncomingLoss__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktJitter'' @ 141113640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktJitter__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_46>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktJitter",
                      L"Simulates outgoing packet jitter",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktJitter,pIVar5);
  NetEmulationPktJitter._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktJitter__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktLag'' @ 1411137e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktLag__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_39>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktLag",
                      L"Simulates network packet lag",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLag,pIVar5);
  NetEmulationPktLag._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktLag__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktLagMax'' @ 141113980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktLagMax__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_42>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktLagMax",
                      L"Sets maximum outgoing packet latency)",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLagMax,pIVar5);
  NetEmulationPktLagMax._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktLagMax__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktLagMin'' @ 141113b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktLagMin__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_41>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktLagMin",
                      L"Sets minimum outgoing packet latency",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLagMin,pIVar5);
  NetEmulationPktLagMin._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktLagMin__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktLagVariance'' @ 141113cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktLagVariance__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_40>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktLagVariance",
                      L"Simulates variable network packet lag",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLagVariance,pIVar5);
  NetEmulationPktLagVariance._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktLagVariance__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktLoss'' @ 141113e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktLoss__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_36>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktLoss",
                      L"Simulates network packet loss",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLoss,pIVar5);
  NetEmulationPktLoss._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktLoss__);
  return;
}

// `dynamic_initializer_for_'NetEmulationPktOrder'' @ 141114000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_initializer_for__NetEmulationPktOrder__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_37>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NetEmulation.PktOrder",
                      L"Simulates network packets received out of order",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktOrder,pIVar5);
  NetEmulationPktOrder._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__NetEmulationPktOrder__);
  return;
}

// `dynamic_initializer_for_'NetworkConsoleVariableFName'' @ 1411141a0

void __cdecl _dynamic_initializer_for__NetworkConsoleVariableFName__(void)

{
  FName::FName(&NetworkConsoleVariableFName,L"ConsoleVariable");
  return;
}

// `dynamic_initializer_for_'PrintNetConnectionInfoCommand'' @ 1411141c0

void __cdecl UE::Net::Private::_dynamic_initializer_for__PrintNetConnectionInfoCommand__(void)

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
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::Private::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&PrintNetConnectionInfoCommand,L"net.PrintNetConnections",
             L"Prints information on all net connections of a NetDriver.  Defaults to the GameNetDriver. Choose a different driver via NetDriverName= or NetDriverDefinition="
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  atexit(_dynamic_atexit_destructor_for__PrintNetConnectionInfoCommand__);
  return;
}

// `dynamic_initializer_for_'StatNameRawPing'' @ 1411142f0

void __cdecl UE::Net::Private::_dynamic_initializer_for__StatNameRawPing__(void)

{
  ::FName::FName(&StatNameRawPing,L"RawPing");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Channels'' @ 141114310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Channels__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Channels == (FThreadSafeStaticStat<FStat_STAT_Channels>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Channels");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Channels,*pFVar1,L"Channels",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ImportedNetGuids'' @ 1411143a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ImportedNetGuids__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ImportedNetGuids == (FThreadSafeStaticStat<FStat_STAT_ImportedNetGuids>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ImportedNetGuids");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImportedNetGuids,*pFVar1,
               L"Imported NetGuids","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InBunches'' @ 141114430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InBunches__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InBunches == (FThreadSafeStaticStat<FStat_STAT_InBunches>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InBunches");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InBunches,*pFVar1,L"In Bunches",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InLoss'' @ 1411144c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InLoss__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InLoss == (FThreadSafeStaticStat<FStat_STAT_InLoss>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InLoss");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InLoss,*pFVar1,L"In Loss","STATGROUP_Net",
               "STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InPackets'' @ 141114550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InPackets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InPackets == (FThreadSafeStaticStat<FStat_STAT_InPackets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InPackets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InPackets,*pFVar1,L"In Packets",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InPacketsClientAvg'' @ 1411145e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InPacketsClientAvg__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InPacketsClientAvg == (FThreadSafeStaticStat<FStat_STAT_InPacketsClientAvg>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_InPacketsClientAvg");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InPacketsClientAvg,*pFVar1,
               L"In Packets - avg among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InPacketsClientMax'' @ 141114670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InPacketsClientMax__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InPacketsClientMax == (FThreadSafeStaticStat<FStat_STAT_InPacketsClientMax>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_InPacketsClientMax");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InPacketsClientMax,*pFVar1,
               L"In Packets - max among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InPacketsClientMin'' @ 141114700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InPacketsClientMin__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InPacketsClientMin == (FThreadSafeStaticStat<FStat_STAT_InPacketsClientMin>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_InPacketsClientMin");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InPacketsClientMin,*pFVar1,
               L"In Packets - min among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InRate'' @ 141114790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InRate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InRate == (FThreadSafeStaticStat<FStat_STAT_InRate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InRate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InRate,*pFVar1,L"In Rate (bytes)",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InRateClientAvg'' @ 141114820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InRateClientAvg__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InRateClientAvg == (FThreadSafeStaticStat<FStat_STAT_InRateClientAvg>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InRateClientAvg");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InRateClientAvg,*pFVar1,
               L"In Rate (bytes) - avg among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true
               ,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InRateClientMax'' @ 1411148b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InRateClientMax__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InRateClientMax == (FThreadSafeStaticStat<FStat_STAT_InRateClientMax>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InRateClientMax");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InRateClientMax,*pFVar1,
               L"In Rate (bytes) - max among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true
               ,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InRateClientMin'' @ 141114940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InRateClientMin__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InRateClientMin == (FThreadSafeStaticStat<FStat_STAT_InRateClientMin>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InRateClientMin");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InRateClientMin,*pFVar1,
               L"In Rate (bytes) - min among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true
               ,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IncomingReliableMessageQueueMaxSize'' @ 1411149d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IncomingReliableMessageQueueMaxSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IncomingReliableMessageQueueMaxSize ==
      (FThreadSafeStaticStat<FStat_STAT_IncomingReliableMessageQueueMaxSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IncomingReliableMessageQueueMaxSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IncomingReliableMessageQueueMaxSize,
               *pFVar1,L"Largest Reliable Incoming Queue Size","STATGROUP_Net","STATCAT_Advanced",
               L"Net",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MaxPacket'' @ 141114a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MaxPacket__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MaxPacket == (FThreadSafeStaticStat<FStat_STAT_MaxPacket>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MaxPacket");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaxPacket,*pFVar1,L"Max Packet (bits)",
               "STATGROUP_Packet","STATCAT_Advanced",L"Packet",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MaxPacketMinusReserved'' @ 141114af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MaxPacketMinusReserved__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MaxPacketMinusReserved ==
      (FThreadSafeStaticStat<FStat_STAT_MaxPacketMinusReserved>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MaxPacketMinusReserved");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaxPacketMinusReserved,*pFVar1,
               L"Max Packet Minus Reserved (bits)","STATGROUP_Packet","STATCAT_Advanced",L"Packet",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_MaxPacketOverhead'' @ 141114b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_MaxPacketOverhead__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_MaxPacketOverhead == (FThreadSafeStaticStat<FStat_STAT_MaxPacketOverhead>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_MaxPacketOverhead");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaxPacketOverhead,*pFVar1,
               L"Packet Overhead - max among connections","STATGROUP_Net","STATCAT_Advanced",L"Net",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetDriverLLM'' @ 141114c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetDriverLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetDriverLLM == (FThreadSafeStaticStat<FStat_STAT_NetDriverLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetDriverLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetDriverLLM,*pFVar1,L"NetDriver",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetGUIDInRate'' @ 141114ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetGUIDInRate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetGUIDInRate == (FThreadSafeStaticStat<FStat_STAT_NetGUIDInRate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetGUIDInRate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetGUIDInRate,*pFVar1,
               L"NetGUID In Rate (bytes)","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetGUIDOutRate'' @ 141114d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetGUIDOutRate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetGUIDOutRate == (FThreadSafeStaticStat<FStat_STAT_NetGUIDOutRate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetGUIDOutRate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetGUIDOutRate,*pFVar1,
               L"NetGUID Out Rate (bytes)","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetInBunchTimeOvershootPercent'' @ 141114dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetInBunchTimeOvershootPercent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetInBunchTimeOvershootPercent ==
      (FThreadSafeStaticStat<FStat_STAT_NetInBunchTimeOvershootPercent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetInBunchTimeOvershootPercent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetInBunchTimeOvershootPercent,*pFVar1,
               L"Net bunch time % overshoot frames","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetNumClients'' @ 141114e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetNumClients__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetNumClients == (FThreadSafeStaticStat<FStat_STAT_NetNumClients>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetNumClients");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetNumClients,*pFVar1,L"Num Clients",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetProcessPrioritizedActorsTime'' @ 141114ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetProcessPrioritizedActorsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetProcessPrioritizedActorsTime ==
      (FThreadSafeStaticStat<FStat_STAT_NetProcessPrioritizedActorsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetProcessPrioritizedActorsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetProcessPrioritizedActorsTime,*pFVar1,
               L"Process Prioritized Actors Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetProcessRemoteFunc'' @ 141114f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetProcessRemoteFunc__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetProcessRemoteFunc ==
      (FThreadSafeStaticStat<FStat_STAT_NetProcessRemoteFunc>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetProcessRemoteFunc");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetProcessRemoteFunc,*pFVar1,
               L"NetDriver ProcessRemoteFunction","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetReceiveRPC_ProcessRemoteFunction'' @ 141115000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetReceiveRPC_ProcessRemoteFunction__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetReceiveRPC_ProcessRemoteFunction ==
      (FThreadSafeStaticStat<FStat_STAT_NetReceiveRPC_ProcessRemoteFunction>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetReceiveRPC_ProcessRemoteFunction");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetReceiveRPC_ProcessRemoteFunction,
               *pFVar1,L"ReceiveRPC_ProcessRemoteFunction","STATGROUP_Game","STATCAT_Advanced",
               L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetSaturated'' @ 141115090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetSaturated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetSaturated == (FThreadSafeStaticStat<FStat_STAT_NetSaturated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetSaturated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSaturated,*pFVar1,L"Saturated",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetTickFlush'' @ 141115120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetTickFlush__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetTickFlush == (FThreadSafeStaticStat<FStat_STAT_NetTickFlush>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetTickFlush");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetTickFlush,*pFVar1,
               L"NetDriver TickFlush","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetTickFlushGatherStats'' @ 1411151b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetTickFlushGatherStats__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetTickFlushGatherStats ==
      (FThreadSafeStaticStat<FStat_STAT_NetTickFlushGatherStats>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetTickFlushGatherStats");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetTickFlushGatherStats,*pFVar1,
               L"NetDriver TickFlush GatherStats","STATGROUP_Game","STATCAT_Advanced",L"Game",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NetTickFlushGatherStatsPerfCounters'' @ 141115240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NetTickFlushGatherStatsPerfCounters__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NetTickFlushGatherStatsPerfCounters ==
      (FThreadSafeStaticStat<FStat_STAT_NetTickFlushGatherStatsPerfCounters>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NetTickFlushGatherStatsPerfCounters");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetTickFlushGatherStatsPerfCounters,
               *pFVar1,L"NetDriver TickFlush GatherStatsPerfCounters","STATGROUP_Game",
               "STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumActorChannels'' @ 1411152d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumActorChannels__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumActorChannels == (FThreadSafeStaticStat<FStat_STAT_NumActorChannels>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumActorChannels");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumActorChannels,*pFVar1,
               L"Num Actor Channels","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumActors'' @ 141115360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumActors == (FThreadSafeStaticStat<FStat_STAT_NumActors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumActors,*pFVar1,L"Num Actors",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumConsideredActors'' @ 1411153f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumConsideredActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumConsideredActors == (FThreadSafeStaticStat<FStat_STAT_NumConsideredActors>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NumConsideredActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumConsideredActors,*pFVar1,
               L"Num Considered Actors","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumDormantActors'' @ 141115480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumDormantActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumDormantActors == (FThreadSafeStaticStat<FStat_STAT_NumDormantActors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumDormantActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumDormantActors,*pFVar1,
               L"Num Dormant Actors","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumInitiallyDormantActors'' @ 141115510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumInitiallyDormantActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumInitiallyDormantActors ==
      (FThreadSafeStaticStat<FStat_STAT_NumInitiallyDormantActors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumInitiallyDormantActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumInitiallyDormantActors,*pFVar1,
               L"Num Initially Dormant Actors","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumNetActors'' @ 1411155a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumNetActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumNetActors == (FThreadSafeStaticStat<FStat_STAT_NumNetActors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumNetActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumNetActors,*pFVar1,L"Num Network Actors"
               ,"STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumNetGUIDsAckd'' @ 141115630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumNetGUIDsAckd__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumNetGUIDsAckd == (FThreadSafeStaticStat<FStat_STAT_NumNetGUIDsAckd>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumNetGUIDsAckd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumNetGUIDsAckd,*pFVar1,
               L"Num ACKd NetGUIDs","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumNetGUIDsPending'' @ 1411156c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumNetGUIDsPending__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumNetGUIDsPending == (FThreadSafeStaticStat<FStat_STAT_NumNetGUIDsPending>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NumNetGUIDsPending");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumNetGUIDsPending,*pFVar1,
               L"Num Pending NetGUIDs","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumNetGUIDsUnAckd'' @ 141115750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumNetGUIDsUnAckd__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumNetGUIDsUnAckd == (FThreadSafeStaticStat<FStat_STAT_NumNetGUIDsUnAckd>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumNetGUIDsUnAckd");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumNetGUIDsUnAckd,*pFVar1,
               L"Num UnACKd NetGUIDs","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumRelevantDeletedActors'' @ 1411157e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumRelevantDeletedActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumRelevantDeletedActors ==
      (FThreadSafeStaticStat<FStat_STAT_NumRelevantDeletedActors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumRelevantDeletedActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumRelevantDeletedActors,*pFVar1,
               L"Num Relevant Deleted Actors","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumReplicatedActorBytes'' @ 141115870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumReplicatedActorBytes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumReplicatedActorBytes ==
      (FThreadSafeStaticStat<FStat_STAT_NumReplicatedActorBytes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumReplicatedActorBytes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumReplicatedActorBytes,*pFVar1,
               L"Num Replicated Actor Bytes Sent","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumReplicatedActors'' @ 141115900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumReplicatedActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumReplicatedActors == (FThreadSafeStaticStat<FStat_STAT_NumReplicatedActors>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NumReplicatedActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumReplicatedActors,*pFVar1,
               L"Num Replicated Actors Sent","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumSaturatedConnections'' @ 141115990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumSaturatedConnections__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumSaturatedConnections ==
      (FThreadSafeStaticStat<FStat_STAT_NumSaturatedConnections>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumSaturatedConnections");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumSaturatedConnections,*pFVar1,
               L"Num Saturated Connections","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumSkippedObjectEmptyUpdates'' @ 141115a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumSkippedObjectEmptyUpdates__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumSkippedObjectEmptyUpdates ==
      (FThreadSafeStaticStat<FStat_STAT_NumSkippedObjectEmptyUpdates>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumSkippedObjectEmptyUpdates");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumSkippedObjectEmptyUpdates,*pFVar1,
               L"Empty Object Replicate Properties Skipped","STATGROUP_Net","STATCAT_Advanced",
               L"Net",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ObjPathBytes'' @ 141115ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ObjPathBytes__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ObjPathBytes == (FThreadSafeStaticStat<FStat_STAT_ObjPathBytes>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ObjPathBytes");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ObjPathBytes,*pFVar1,
               L"Object path (bytes)","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutBunches'' @ 141115b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutBunches__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutBunches == (FThreadSafeStaticStat<FStat_STAT_OutBunches>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OutBunches");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutBunches,*pFVar1,L"Out Bunches",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutLoss'' @ 141115bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutLoss__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutLoss == (FThreadSafeStaticStat<FStat_STAT_OutLoss>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OutLoss");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutLoss,*pFVar1,L"Out Loss",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutPackets'' @ 141115c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutPackets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutPackets == (FThreadSafeStaticStat<FStat_STAT_OutPackets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OutPackets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutPackets,*pFVar1,L"Out Packets",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutPacketsClientAvg'' @ 141115cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutPacketsClientAvg__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutPacketsClientAvg == (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientAvg>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_OutPacketsClientAvg");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutPacketsClientAvg,*pFVar1,
               L"Out Packets - avg among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutPacketsClientMax'' @ 141115d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutPacketsClientMax__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutPacketsClientMax == (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientMax>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_OutPacketsClientMax");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutPacketsClientMax,*pFVar1,
               L"Out Packets - max among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutPacketsClientMin'' @ 141115e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutPacketsClientMin__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutPacketsClientMin == (FThreadSafeStaticStat<FStat_STAT_OutPacketsClientMin>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_OutPacketsClientMin");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutPacketsClientMin,*pFVar1,
               L"Out Packets - min among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutRate'' @ 141115ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutRate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutRate == (FThreadSafeStaticStat<FStat_STAT_OutRate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OutRate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutRate,*pFVar1,L"Out Rate (bytes)",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutRateClientAvg'' @ 141115f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutRateClientAvg__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutRateClientAvg == (FThreadSafeStaticStat<FStat_STAT_OutRateClientAvg>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OutRateClientAvg");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutRateClientAvg,*pFVar1,
               L"Out Rate (bytes) - avg among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutRateClientMax'' @ 141115fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutRateClientMax__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutRateClientMax == (FThreadSafeStaticStat<FStat_STAT_OutRateClientMax>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OutRateClientMax");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutRateClientMax,*pFVar1,
               L"Out Rate (bytes) - max among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutRateClientMin'' @ 141116050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutRateClientMin__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutRateClientMin == (FThreadSafeStaticStat<FStat_STAT_OutRateClientMin>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OutRateClientMin");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutRateClientMin,*pFVar1,
               L"Out Rate (bytes) - min among clients","STATGROUP_Net","STATCAT_Advanced",L"Net",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutgoingReliableMessageQueueMaxSize'' @ 1411160e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutgoingReliableMessageQueueMaxSize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutgoingReliableMessageQueueMaxSize ==
      (FThreadSafeStaticStat<FStat_STAT_OutgoingReliableMessageQueueMaxSize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OutgoingReliableMessageQueueMaxSize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutgoingReliableMessageQueueMaxSize,
               *pFVar1,L"Largest Reliable Outgoing Queue Size","STATGROUP_Net","STATCAT_Advanced",
               L"Net",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PacketReservedHandshake'' @ 141116170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PacketReservedHandshake__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PacketReservedHandshake ==
      (FThreadSafeStaticStat<FStat_STAT_PacketReservedHandshake>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PacketReservedHandshake");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedHandshake,*pFVar1,
               L"Reserved Handshake (bits)","STATGROUP_Packet","STATCAT_Advanced",L"Packet",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PacketReservedNetConnection'' @ 141116200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PacketReservedNetConnection__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PacketReservedNetConnection ==
      (FThreadSafeStaticStat<FStat_STAT_PacketReservedNetConnection>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PacketReservedNetConnection");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedNetConnection,*pFVar1,
               L"Reserved NetConnection (bits)","STATGROUP_Packet","STATCAT_Advanced",L"Packet",true
               ,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PacketReservedPacketHandler'' @ 141116290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PacketReservedPacketHandler__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PacketReservedPacketHandler ==
      (FThreadSafeStaticStat<FStat_STAT_PacketReservedPacketHandler>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PacketReservedPacketHandler");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedPacketHandler,*pFVar1,
               L"Reserved PacketHandler Total (bits)","STATGROUP_Packet","STATCAT_Advanced",
               L"Packet",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PacketReservedTotal'' @ 141116320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PacketReservedTotal__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PacketReservedTotal == (FThreadSafeStaticStat<FStat_STAT_PacketReservedTotal>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PacketReservedTotal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedTotal,*pFVar1,
               L"Reserved Total (bits)","STATGROUP_Packet","STATCAT_Advanced",L"Packet",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PendingOuterNetGuids'' @ 1411163b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PendingOuterNetGuids__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PendingOuterNetGuids ==
      (FThreadSafeStaticStat<FStat_STAT_PendingOuterNetGuids>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PendingOuterNetGuids");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PendingOuterNetGuids,*pFVar1,
               L"Pending Outer NetGuids","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PercentInVoice'' @ 141116440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PercentInVoice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PercentInVoice == (FThreadSafeStaticStat<FStat_STAT_PercentInVoice>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PercentInVoice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PercentInVoice,*pFVar1,L"In % Voice",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PercentOutVoice'' @ 1411164d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PercentOutVoice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PercentOutVoice == (FThreadSafeStaticStat<FStat_STAT_PercentOutVoice>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PercentOutVoice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PercentOutVoice,*pFVar1,L"Out % Voice",
               "STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Ping'' @ 141116560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Ping__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Ping == (FThreadSafeStaticStat<FStat_STAT_Ping>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Ping");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping,*pFVar1,L"Ping","STATGROUP_Net",
               "STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrioritizedActors'' @ 1411165f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrioritizedActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrioritizedActors == (FThreadSafeStaticStat<FStat_STAT_PrioritizedActors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrioritizedActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrioritizedActors,*pFVar1,
               L"Num Prioritized Actors","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SharedSerializationPropertyHit'' @ 141116680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SharedSerializationPropertyHit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SharedSerializationPropertyHit ==
      (FThreadSafeStaticStat<FStat_STAT_SharedSerializationPropertyHit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SharedSerializationPropertyHit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SharedSerializationPropertyHit,*pFVar1,
               L"SharedSerialization Property Hit","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SharedSerializationPropertyMiss'' @ 141116710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SharedSerializationPropertyMiss__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SharedSerializationPropertyMiss ==
      (FThreadSafeStaticStat<FStat_STAT_SharedSerializationPropertyMiss>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SharedSerializationPropertyMiss");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SharedSerializationPropertyMiss,*pFVar1,
               L"SharedSerialization Property Miss","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SharedSerializationRPCHit'' @ 1411167a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SharedSerializationRPCHit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SharedSerializationRPCHit ==
      (FThreadSafeStaticStat<FStat_STAT_SharedSerializationRPCHit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SharedSerializationRPCHit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SharedSerializationRPCHit,*pFVar1,
               L"SharedSerialization RPC Hit","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SharedSerializationRPCMiss'' @ 141116830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SharedSerializationRPCMiss__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SharedSerializationRPCMiss ==
      (FThreadSafeStaticStat<FStat_STAT_SharedSerializationRPCMiss>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SharedSerializationRPCMiss");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SharedSerializationRPCMiss,*pFVar1,
               L"SharedSerialization RPC Miss","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UnmappedReplicators'' @ 1411168c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UnmappedReplicators__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UnmappedReplicators == (FThreadSafeStaticStat<FStat_STAT_UnmappedReplicators>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_UnmappedReplicators");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnmappedReplicators,*pFVar1,
               L"Unmapped Replicators","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VoiceBytesRecv'' @ 141116950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VoiceBytesRecv__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VoiceBytesRecv == (FThreadSafeStaticStat<FStat_STAT_VoiceBytesRecv>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VoiceBytesRecv");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VoiceBytesRecv,*pFVar1,L"Voice bytes recv"
               ,"STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VoiceBytesSent'' @ 1411169e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VoiceBytesSent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VoiceBytesSent == (FThreadSafeStaticStat<FStat_STAT_VoiceBytesSent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VoiceBytesSent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VoiceBytesSent,*pFVar1,L"Voice bytes sent"
               ,"STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VoicePacketsRecv'' @ 141116a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VoicePacketsRecv__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VoicePacketsRecv == (FThreadSafeStaticStat<FStat_STAT_VoicePacketsRecv>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VoicePacketsRecv");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VoicePacketsRecv,*pFVar1,
               L"Voice packets recv","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VoicePacketsSent'' @ 141116b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VoicePacketsSent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VoicePacketsSent == (FThreadSafeStaticStat<FStat_STAT_VoicePacketsSent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_VoicePacketsSent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VoicePacketsSent,*pFVar1,
               L"Voice packets sent","STATGROUP_Net","STATCAT_Advanced",L"Net",true,false,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_NetDriverAddClientConnection'' @ 141116b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_NetDriverAddClientConnection__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_NetDriverAddClientConnection ==
      (FThreadSafeStaticStat<FStat_Stat_NetDriverAddClientConnection>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_NetDriverAddClientConnection");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_NetDriverAddClientConnection,*pFVar1,
               L"NetDriver AddClientConnection","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'SubObjectFactoryName'' @ 141116c20

void __cdecl UE::Net::Private::_dynamic_initializer_for__SubObjectFactoryName__(void)

{
  ::FName::FName(&SubObjectFactoryName,L"NetSubObjectFactory");
  return;
}

// `dynamic_initializer_for_'UnknownName'' @ 141116c40

void __cdecl _dynamic_initializer_for__UnknownName__(void)

{
  FString::FString(&UnknownName,"UnknownName");
  atexit(_dynamic_atexit_destructor_for__UnknownName__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h__Script_Engine_3119454951'' @ 141116c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h__Script_Engine_3119454951__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h__Script_Engine_1217494212'' @ 141116cc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h__Script_Engine_1217494212__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h__Script_Engine_3513224330'' @ 141116d10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h__Script_Engine_3513224330__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h__Script_Engine_3823386702'' @ 141116d50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h__Script_Engine_3823386702__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h__Script_Engine_2338561424'' @ 141116da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h__Script_Engine_2338561424__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_EngineReplicationBridge_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h__Script_Engine_458568178'' @ 141116de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h__Script_Engine_458568178__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetActorFactory_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h__Script_Engine_2390795207'' @ 141116e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h__Script_Engine_2390795207__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Iris_ReplicationSystem_NetSubObjectFactory_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h__Script_Engine_1922966187'' @ 141116e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h__Script_Engine_1922966187__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_NetworkProfiler'' @ 141116ea0

void __cdecl _dynamic_initializer_for___GCsvCategory_NetworkProfiler__(void)

{
  FString::operator=(&_GCsvCategory_NetworkProfiler.Name,L"NetworkProfiler");
  _GCsvCategory_NetworkProfiler.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_NetworkProfiler.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_NetworkProfiler__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Replication'' @ 141116ef0

void __cdecl _dynamic_initializer_for___GCsvCategory_Replication__(void)

{
  FString::operator=(&_GCsvCategory_Replication.Name,L"Replication");
  _GCsvCategory_Replication.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Replication.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Replication__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_ReplicationRPCs'' @ 141116f40

void __cdecl _dynamic_initializer_for___GCsvCategory_ReplicationRPCs__(void)

{
  FString::operator=(&_GCsvCategory_ReplicationRPCs.Name,L"ReplicationRPCs");
  _GCsvCategory_ReplicationRPCs.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_ReplicationRPCs.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_ReplicationRPCs__);
  return;
}

// `scalar_deleting_destructor' @ 148004db0

void * __thiscall
IBaseDelegateInstance<void___cdecl(AActor_*,UFunction_*,void_*,FOutParmRec_*,FFrame_*,UObject_*,bool_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AActor_*,UFunction_*,void_*,FOutParmRec_*,FFrame_*,UObject_*,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148004e00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AActor_*,UFunction_*,void_*,FOutParmRec_*,FFrame_*,UObject_*,bool_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AActor_*,UFunction_*,void_*,FOutParmRec_*,FFrame_*,UObject_*,bool_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148005070

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_*,UFunction_*,void_*,FOutParmRec_*,FFrame_*,UObject_*,bool_&),FDefaultDelegateUserPolicy,`UE::Net::Private::NetEmulationHelper::<lambda_32>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148005320

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_*,UFunction_*,void_*,FOutParmRec_*,FFrame_*,UObject_*,bool_&),FDefaultDelegateUserPolicy,`UE::Net::Private::NetEmulationHelper::<lambda_33>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480055f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_*,UFunction_*,void_*,FOutParmRec_*,FFrame_*,UObject_*,bool_&),FDefaultDelegateUserPolicy,`UE::Net::Private::NetEmulationHelper::<lambda_34>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480058c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_*,UFunction_*,void_*,FOutParmRec_*,FFrame_*,UObject_*,bool_&),FDefaultDelegateUserPolicy,`UE::Net::Private::NetEmulationHelper::<lambda_35>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UClass_UNetworkSettings @ 148005910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkSettings(void)

{
  if (Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton,
               &Z_Construct_UClass_UNetworkSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription @ 148005950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkEmulationProfileDescription.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkEmulationProfileDescription.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkEmulationProfileDescription.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkEmulationProfileDescription.InnerSingleton;
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

// NewStructOps @ 1480059d0

void * __cdecl
Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkEmulationProfileDescription,&UE::CoreUObject::Private::Construct<FNetworkEmulationProfileDescription>,&UE::CoreUObject::Private::ConstructForTests<FNetworkEmulationProfileDescription>,&UE::CoreUObject::Private::Destruct<FNetworkEmulationProfileDescription>,&UE::CoreUObject::Private::Copy<FNetworkEmulationProfileDescription>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bVerifyPeer_SetBit @ 148005a10

void __cdecl Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bVerifyPeer_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit @ 148005a20

void __cdecl
Z_Construct_UClass_UNetworkSettings_Statics::NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 2;
  return;
}

// Z_Construct_UClass_UDataStreamChannel @ 148005ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDataStreamChannel(void)

{
  if (Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton,
               &Z_Construct_UClass_UDataStreamChannel_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton;
}

// Z_Construct_UClass_ABandwidthTestActor @ 148005bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ABandwidthTestActor(void)

{
  if (Z_Registration_Info_UClass_ABandwidthTestActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ABandwidthTestActor.OuterSingleton,
               &Z_Construct_UClass_ABandwidthTestActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ABandwidthTestActor.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBandwidthTestGenerator @ 148005bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBandwidthTestGenerator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBandwidthTestGenerator.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBandwidthTestGenerator.InnerSingleton,
               &Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBandwidthTestGenerator.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBandwidthTestGenerator.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBandwidthTestItem @ 148005c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBandwidthTestItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBandwidthTestItem.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBandwidthTestItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBandwidthTestItem.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBandwidthTestItem.InnerSingleton;
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

// NewStructOps @ 148005cf0

void * __cdecl Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBandwidthTestItem,&UE::CoreUObject::Private::Construct<FBandwidthTestItem>,&UE::CoreUObject::Private::ConstructForTests<FBandwidthTestItem>,&UE::CoreUObject::Private::Destruct<FBandwidthTestItem>,&UE::CoreUObject::Private::Copy<FBandwidthTestItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148005d30

void * __cdecl Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBandwidthTestGenerator,&UE::CoreUObject::Private::Construct<FBandwidthTestGenerator>,&UE::CoreUObject::Private::ConstructForTests<FBandwidthTestGenerator>,&UE::CoreUObject::Private::Destruct<FBandwidthTestGenerator>,&UE::CoreUObject::Private::NetDeltaSerialize<FBandwidthTestGenerator>,&UE::CoreUObject::Private::Copy<FBandwidthTestGenerator>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNetActorFactory @ 148005d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetActorFactory(void)

{
  if (Z_Registration_Info_UClass_UNetActorFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetActorFactory.OuterSingleton,
               &Z_Construct_UClass_UNetActorFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetActorFactory.OuterSingleton;
}

// Z_Construct_UClass_UEngineReplicationBridge @ 1480060f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEngineReplicationBridge(void)

{
  if (Z_Registration_Info_UClass_UEngineReplicationBridge.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEngineReplicationBridge.OuterSingleton,
               &Z_Construct_UClass_UEngineReplicationBridge_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEngineReplicationBridge.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148006590

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::Private::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,UE::Net::Private::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148006970

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UNetFaultConfig @ 1480069a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetFaultConfig(void)

{
  if (Z_Registration_Info_UClass_UNetFaultConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetFaultConfig.OuterSingleton,
               &Z_Construct_UClass_UNetFaultConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetFaultConfig.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148006bd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148006df0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UNetSubObjectFactory @ 148006e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetSubObjectFactory(void)

{
  if (Z_Registration_Info_UClass_UNetSubObjectFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetSubObjectFactory.OuterSingleton,
               &Z_Construct_UClass_UNetSubObjectFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetSubObjectFactory.OuterSingleton;
}

// Z_Construct_UClass_UNetDriver @ 148006e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetDriver(void)

{
  if (Z_Registration_Info_UClass_UNetDriver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetDriver.OuterSingleton,
               &Z_Construct_UClass_UNetDriver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetDriver.OuterSingleton;
}

// Z_Construct_UScriptStruct_FChannelDefinition @ 148006ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChannelDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChannelDefinition.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChannelDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FChannelDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChannelDefinition.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChannelDefinition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig @ 148006f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetDriverReplicationSystemConfig.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetDriverReplicationSystemConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetDriverReplicationSystemConfig.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetDriverReplicationSystemConfig.InnerSingleton;
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

// NewStructOps @ 148007160

void * __cdecl Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x44;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPacketSimulationSettings,&UE::CoreUObject::Private::Construct<FPacketSimulationSettings>,&UE::CoreUObject::Private::ConstructForTests<FPacketSimulationSettings>,&UE::CoreUObject::Private::Destruct<FPacketSimulationSettings>,&UE::CoreUObject::Private::Copy<FPacketSimulationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllowParallelTasks_SetBit @ 1480072e0

void __cdecl
Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::
NewProp_bAllowParallelTasks_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewStructOps @ 1480072f0

void * __cdecl
Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetDriverReplicationSystemConfig,&UE::CoreUObject::Private::Construct<FNetDriverReplicationSystemConfig>,&UE::CoreUObject::Private::ConstructForTests<FNetDriverReplicationSystemConfig>,&UE::CoreUObject::Private::Destruct<FNetDriverReplicationSystemConfig>,&UE::CoreUObject::Private::Copy<FNetDriverReplicationSystemConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bTickOnCreate_SetBit @ 1480073f0

void __cdecl
Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bTickOnCreate_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 1;
  return;
}

// NewProp_bServerOpen_SetBit @ 148007400

void __cdecl
Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bServerOpen_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 2;
  return;
}

// NewProp_bClientOpen_SetBit @ 148007410

void __cdecl
Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bClientOpen_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 4;
  return;
}

// NewProp_bInitialServer_SetBit @ 148007420

void __cdecl
Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialServer_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 8;
  return;
}

// NewProp_bInitialClient_SetBit @ 148007430

void __cdecl
Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewProp_bInitialClient_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 0x10;
  return;
}

// NewStructOps @ 148007440

void * __cdecl Z_Construct_UScriptStruct_FChannelDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChannelDefinition,&UE::CoreUObject::Private::Construct<FChannelDefinition>,&UE::CoreUObject::Private::ConstructForTests<FChannelDefinition>,&UE::CoreUObject::Private::Destruct<FChannelDefinition>,&UE::CoreUObject::Private::Copy<FChannelDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bClampListenServerTickRate_SetBit @ 148007520

void __cdecl
Z_Construct_UClass_UNetDriver_Statics::NewProp_bClampListenServerTickRate_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  return;
}

// NewProp_bNoTimeouts_SetBit @ 148007530

void __cdecl Z_Construct_UClass_UNetDriver_Statics::NewProp_bNoTimeouts_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x329) = *(byte *)((longlong)param_1 + 0x329) | 0x80;
  return;
}

// NewProp_bNeverApplyNetworkEmulationSettings_SetBit @ 148007540

void __cdecl
Z_Construct_UClass_UNetDriver_Statics::NewProp_bNeverApplyNetworkEmulationSettings_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x32a) = *(byte *)((longlong)param_1 + 0x32a) | 1;
  return;
}

// NewProp_bSendImmediateAcks_SetBit @ 148007550

void __cdecl Z_Construct_UClass_UNetDriver_Statics::NewProp_bSendImmediateAcks_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa50) = 1;
  return;
}

// operator_new<FNetViewer,TSizedDefaultAllocator<32>_> @ 148008ee0

void * __cdecl
operator_new<FNetViewer,TSizedDefaultAllocator<32>_>
          (ulong64 param_1,TArray<FNetViewer,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 != 0x48) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Size == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xfba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  uVar3 = param_2->ArrayNum;
  if (uVar3 == param_2->ArrayMax) {
    uVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = uVar3 + 1;
  uVar5 = 0;
  if ((int)uVar3 < (int)(uVar3 + 1)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x48;
}

// ApplyAfter<`UNetDriver::InitBase'::__l20::<lambda_1>_&,FString> @ 14800adf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_UNetDriver::InitBase_::__l20::<lambda_1>_&,FString>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_1> *param_1,FString *param_2)

{
  UNetDriver *pUVar1;
  UWorld *pUVar2;
  FScriptContainerElement *pFVar3;
  UEngine *pUVar4;
  FString *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_48.Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  pFVar5 = ::FString::FString(&local_38,&local_48);
  pUVar4 = GEngine;
  pUVar1 = param_1->__this;
  pUVar2 = (pUVar1->World).field0_0x0.DebugPtr;
  pFVar6 = ::FString::FString(&local_28,pFVar5);
  pFVar7 = ::FString::FString(&local_18,pFVar6);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  Broadcast<IBaseDelegateInstance<void___cdecl(UWorld_*,UNetDriver_*,FString),FDefaultDelegateUserPolicy>,UWorld_*,UNetDriver_*,FString>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar4->NetworkDDoSEscalationEvent,pUVar2,pUVar1,pFVar7);
  pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// CastChecked<UEngineReplicationBridge_const_,UObjectReplicationBridge_const_> @ 14800b0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEngineReplicationBridge * __cdecl
CastChecked<UEngineReplicationBridge_const_,UObjectReplicationBridge_const_>
          (UObjectReplicationBridge *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObjectReplicationBridge *)0x0) {
    pFVar3 = GetTypeName<UEngineReplicationBridge_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UEngineReplicationBridge::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UEngineReplicationBridge *)param_1;
  }
  pFVar3 = GetTypeName<UEngineReplicationBridge_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObjectReplicationBridge_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ABandwidthTestActor,AActor> @ 14800b1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABandwidthTestActor * __cdecl CastChecked<ABandwidthTestActor,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<ABandwidthTestActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ABandwidthTestActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ABandwidthTestActor *)param_1;
  }
  pFVar3 = GetTypeName<ABandwidthTestActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UDataStreamChannel,UObject> @ 14800b270

UDataStreamChannel * __cdecl CastChecked<UDataStreamChannel,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UDataStreamChannel>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UDataStreamChannel::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UDataStreamChannel *)param_1;
  }
  pFVar3 = GetTypeName<UDataStreamChannel>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UEngineReplicationBridge,UObjectReplicationBridge> @ 14800b330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEngineReplicationBridge * __cdecl
CastChecked<UEngineReplicationBridge,UObjectReplicationBridge>(UObjectReplicationBridge *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObjectReplicationBridge *)0x0) {
    pFVar3 = GetTypeName<UEngineReplicationBridge>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UEngineReplicationBridge::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UEngineReplicationBridge *)param_1;
  }
  pFVar3 = GetTypeName<UEngineReplicationBridge>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObjectReplicationBridge>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNetActorFactory,UNetObjectFactory> @ 14800b3f0

UNetActorFactory * __cdecl
CastChecked<UNetActorFactory,UNetObjectFactory>(UNetObjectFactory *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetObjectFactory *)0x0) {
    pFVar3 = GetTypeName<UNetActorFactory>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNetActorFactory::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNetActorFactory *)param_1;
  }
  pFVar3 = GetTypeName<UNetActorFactory>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNetObjectFactory>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNetDriver,UObject> @ 14800b4b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetDriver * __cdecl CastChecked<UNetDriver,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNetDriver>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNetDriver::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNetDriver *)param_1;
  }
  pFVar3 = GetTypeName<UNetDriver>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FBandwidthTestItem,FBandwidthTestItem,int> @ 14800b570

void __cdecl
ConstructItems<FBandwidthTestItem,FBandwidthTestItem,int>
          (void *param_1,FBandwidthTestItem *param_2,int param_3)

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

// DefaultConstructItems<FBandwidthTestItem,int> @ 14800b6c0

void __cdecl DefaultConstructItems<FBandwidthTestItem,int>(void *param_1,int param_2)

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

// DefaultConstructItems<FNetworkProfiler::FSendBunchInfo,int> @ 14800b6f0

void __cdecl DefaultConstructItems<FNetworkProfiler::FSendBunchInfo,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 8;
    do {
      *(undefined2 *)(lVar1 + -8) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Net::Private::FAutoDestructProperty,int> @ 14800b800

void __cdecl
DestructItems<UE::Net::Private::FAutoDestructProperty,int>
          (FAutoDestructProperty *param_1,int param_2)

{
  FProperty *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  do {
    if (param_2 == 0) {
      return;
    }
    pFVar1 = param_1->Property;
    if ((pFVar1 != (FProperty *)0x0) &&
       (pvVar2 = param_1->LocalParameters, (pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None))
    {
      pcVar3 = *(code **)(pFVar1->_padding_ + 0x138);
      if ((pFVar1->ArrayDim < 1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pvVar2 == (void *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*pcVar3)(pFVar1,(longlong)pFVar1->Offset_Internal + (longlong)pvVar2);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

// DestructItems<FBandwidthTestItem,int> @ 14800b910

void __cdecl DestructItems<FBandwidthTestItem,int>(FBandwidthTestItem *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Kilobyte).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FDisconnectedClient,int> @ 14800b950

void __cdecl DestructItems<FDisconnectedClient,int>(FDisconnectedClient *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Address).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNetworkEmulationProfileDescription,int> @ 14800b990

void __cdecl
DestructItems<FNetworkEmulationProfileDescription,int>
          (FNetworkEmulationProfileDescription *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ToolTip).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ProfileName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNetworkObjectList::FSubObjectChannelReference,int> @ 14800b9e0

void __cdecl
DestructItems<FNetworkObjectList::FSubObjectChannelReference,int>
          (FSubObjectChannelReference *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RegisteredOwners;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`UE::Net::Private::<lambda_25>::operator()'::__l2::<lambda_1>_> @ 14800f0f0

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::<lambda_25>::operator()_::__l2::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"NetDriverName=",0xe,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// FindByPredicate<`UE::Net::Private::<lambda_25>::operator()'::__l2::<lambda_2>_> @ 14800f180

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_UE::Net::Private::<lambda_25>::operator()_::__l2::<lambda_2>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  int iVar1;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar2;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar2 = this_00 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (this_00 == pFVar2) {
      return (FString *)0x0;
    }
    iVar1 = ::FString::Find((FString *)this_00,L"NetDriverDef=",0xd,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) break;
    this_00 = this_00 + 0x10;
  }
  return (FString *)this_00;
}

// GetFullNameForCastLogError<UObjectReplicationBridge_const_> @ 14800fb80

FString * __cdecl
GetFullNameForCastLogError<UObjectReplicationBridge_const_>
          (FString *__return_storage_ptr__,UObjectReplicationBridge *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UNetObjectFactory> @ 14800fbb0

FString * __cdecl
GetFullNameForCastLogError<UNetObjectFactory>
          (FString *__return_storage_ptr__,UNetObjectFactory *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetFullNameForCastLogError<UObjectReplicationBridge> @ 14800fbe0

FString * __cdecl
GetFullNameForCastLogError<UObjectReplicationBridge>
          (FString *__return_storage_ptr__,UObjectReplicationBridge *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UEngineReplicationBridge_const_> @ 14800fdc0

FString * __cdecl GetTypeName<UEngineReplicationBridge_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UEngineReplicationBridge::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ABandwidthTestActor> @ 14800fe00

FString * __cdecl GetTypeName<ABandwidthTestActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ABandwidthTestActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UDataStreamChannel> @ 14800fe40

FString * __cdecl GetTypeName<UDataStreamChannel>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UDataStreamChannel::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UEngineReplicationBridge> @ 14800fe80

FString * __cdecl GetTypeName<UEngineReplicationBridge>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UEngineReplicationBridge::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNetActorFactory> @ 14800fec0

FString * __cdecl GetTypeName<UNetActorFactory>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNetActorFactory::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNetDriver> @ 14800ff00

FString * __cdecl GetTypeName<UNetDriver>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNetDriver::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<FActorPriority_*,int,UE::Core::Private::TProjectionMemberData<int_FActorPriority::*>,TGreater<void>_> @ 14800ff40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FActorPriority_*,int,UE::Core::Private::TProjectionMemberData<int_FActorPriority::*>,TGreater<void>_>
          (FActorPriority **param_1,int param_2,TProjectionMemberData<int_FActorPriority::*> param_3
          ,TGreater<void> param_4)

{
  FActorPriority *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = (longlong)(int)param_3.DataMemberPtr;
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
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar10 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_148010044:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar10 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar10 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  if (*(int *)((longlong)&param_1[iVar4]->Priority + lVar6) <
                      *(int *)((longlong)&param_1[(longlong)iVar7 + 2]->Priority + lVar6)) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar10];
                if (*(int *)((longlong)&pFVar1->Priority + lVar6) <=
                    *(int *)((longlong)&param_1[iVar4]->Priority + lVar6)) break;
                param_1[iVar10] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar10 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar10 + -2;
      iVar10 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar9 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (*(int *)((longlong)&param_1[iVar9]->Priority + lVar6) <
          *(int *)((longlong)&param_1[(longlong)iVar5 + 2]->Priority + lVar6)) {
        iVar9 = iVar5;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (*(int *)((longlong)&pFVar1->Priority + lVar6) <=
        *(int *)((longlong)&param_1[iVar9]->Priority + lVar6)) goto LAB_148010044;
    param_1[iVar4] = param_1[iVar9];
    iVar5 = iVar9 * 2 + 1;
    param_1[iVar9] = pFVar1;
    iVar4 = iVar9;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<``UNetDriver::PrintDebugRelevantActors'::__l2::SLocal::AggregateAndPrint'::__l2::FCompareActorClassCount>_>_>_> @ 148010120

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<__UNetDriver::PrintDebugRelevantActors_::__l2::SLocal::AggregateAndPrint_::__l2::FCompareActorClassCount>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<_public:_static_void___cdecl__public:_void___cdecl_UNetDriver::PrintDebugRelevantActors(void)_::_2_::SLocal::AggregateAndPrint(TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,FString)_::_2_::FCompareActorClassCount>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar2;
  undefined4 uVar3;
  code *pcVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar13;
  longlong lVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar15 = iVar10;
  iVar11 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_148010229:
      if (iVar11 == 0) {
        iVar10 = param_2 + -1;
        lVar14 = (longlong)iVar10;
        if (0 < iVar10) {
          pTVar13 = param_1 + lVar14;
          do {
            uVar6 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8);
            uVar3 = *(undefined4 *)((param_1->ElementData).Pad + 0x10);
            iVar15 = 0;
            TVar5 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar13->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar6;
            *(undefined4 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined4 *)((longlong)(pTVar13->ElementData).Pad + 0x10);
            pTVar13->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar7;
            *(undefined4 *)((longlong)(pTVar13->ElementData).Pad + 0x10) = uVar3;
            if (1 < iVar10) {
              do {
                iVar9 = iVar15 * 2;
                iVar11 = iVar9 + 1;
                if (iVar9 + 2 < iVar10) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x14 + 0x30) <
                      *(int *)((longlong)param_1 + (longlong)iVar11 * 0x14 + 8)) {
                    iVar11 = iVar9;
                  }
                  iVar11 = iVar11 + 1;
                }
                pTVar1 = param_1 + iVar11;
                pTVar2 = param_1 + iVar15;
                if (*(int *)((pTVar1->ElementData).Pad + 8) <=
                    *(int *)((longlong)param_1 + (longlong)iVar15 * 0x14 + 8)) break;
                uVar6 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined4 *)((longlong)(pTVar2->ElementData).Pad + 0x10);
                TVar5 = pTVar2->_s_1;
                uVar7 = *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 8);
                pTVar2->_s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)(pTVar2->ElementData).Pad + 8) = uVar6;
                *(undefined4 *)((longlong)(pTVar2->ElementData).Pad + 0x10) =
                     *(undefined4 *)((pTVar1->ElementData).Pad + 0x10);
                pTVar1->_s_1 = TVar5;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined4 *)((pTVar1->ElementData).Pad + 0x10) = uVar3;
                iVar15 = iVar11;
              } while (iVar11 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar14 = lVar14 + -1;
            pTVar13 = pTVar13 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar9 = iVar11 + -1;
      iVar10 = iVar15 + -2;
      iVar15 = iVar10;
      iVar11 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar12 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar10 * 0x14 + 0x30) <
          *(int *)((longlong)param_1 + (longlong)iVar12 * 0x14 + 8)) {
        iVar12 = iVar10;
      }
      iVar12 = iVar12 + 1;
    }
    pTVar13 = param_1 + iVar12;
    pTVar1 = param_1 + iVar9;
    if (*(int *)((pTVar13->ElementData).Pad + 8) <=
        *(int *)((longlong)param_1 + (longlong)iVar9 * 0x14 + 8)) goto LAB_148010229;
    TVar5 = pTVar1->_s_1;
    uVar6 = *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 8);
    uVar3 = *(undefined4 *)((longlong)(pTVar1->ElementData).Pad + 0x10);
    uVar7 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
    pTVar1->_s_1 = pTVar13->_s_1;
    *(undefined8 *)((longlong)(pTVar1->ElementData).Pad + 8) = uVar7;
    *(undefined4 *)((longlong)(pTVar1->ElementData).Pad + 0x10) =
         *(undefined4 *)((pTVar13->ElementData).Pad + 0x10);
    iVar10 = iVar12 * 2 + 1;
    pTVar13->_s_1 = TVar5;
    *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar6;
    *(undefined4 *)((pTVar13->ElementData).Pad + 0x10) = uVar3;
    iVar9 = iVar12;
  } while( true );
}

// InternalConstructor<ABandwidthTestActor> @ 148010340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ABandwidthTestActor>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    this->bReplicates = '\x01';
    this->bAlwaysRelevant = '\x01';
    this->_padding_ = (longlong)&___7ABandwidthTestActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    AActor::SetReplicatingMovement(this,false);
    (this->NetDormancy).Value = '\0';
  }
  return;
}

// InternalConstructor<UDataStreamChannel> @ 1480103b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UDataStreamChannel>(FObjectInitializer *param_1)

{
  UChannel *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = (UChannel *)param_1->Obj;
  if (this != (UChannel *)0x0) {
    UChannel::UChannel(this,param_1);
    this->_padding_ = (longlong)&___7UDataStreamChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
    ::SetCapacity((TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
                   *)&this[1]._padding_,0x100);
    *(uint *)&this[0x50]._padding_ = (uint)this[0x50]._padding_ & 0xfffffff8;
    pFVar1 = FName::FName(local_res8,"DataStream");
    this->ChName = *pFVar1;
  }
  return;
}

// InternalConstructor<UEngineReplicationBridge> @ 148010420

void __cdecl InternalConstructor<UEngineReplicationBridge>(FObjectInitializer *param_1)

{
  UObjectReplicationBridge *this;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  this = (UObjectReplicationBridge *)param_1->Obj;
  if (this != (UObjectReplicationBridge *)0x0) {
    UObjectReplicationBridge::UObjectReplicationBridge(this);
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this->_padding_ = (longlong)&___7UEngineReplicationBridge__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6AXV__TArrayView_PEAVUObject__H__PEBVUObjectReplicationBridge___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = UE::Net::Private::ActorReplicationBridgePreUpdateFunction;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*),void,TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*>
                  ::Call;
    UObjectReplicationBridge::SetInstancePreUpdateFunction
              (this,(TFunction<void___cdecl(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*)>
                     *)local_38);
    this[1]._padding_ = (longlong)UE::Net::Private::NetActorFactoryName;
    this[1]._padding_ = (longlong)UE::Net::Private::SubObjectFactoryName;
  }
  return;
}

// InternalConstructor<UNetActorFactory> @ 1480104d0

void __cdecl InternalConstructor<UNetActorFactory>(FObjectInitializer *param_1)

{
  UNetObjectFactory *this;
  undefined8 uVar1;
  
  this = (UNetObjectFactory *)param_1->Obj;
  if (this != (UNetObjectFactory *)0x0) {
    UNetObjectFactory::UNetObjectFactory(this,param_1);
    this->_padding_ = (longlong)&___7UNetActorFactory__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Bridge = (UObjectReplicationBridge *)0x0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&this[1].FactoryId = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[2]._padding_ = uVar1;
    this[2]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNetDriver> @ 148010550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UNetDriver>(FObjectInitializer *param_1)

{
  if ((UNetDriver *)param_1->Obj != (UNetDriver *)0x0) {
    UNetDriver::UNetDriver((UNetDriver *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNetFaultConfig> @ 148010570

void __cdecl InternalConstructor<UNetFaultConfig>(FObjectInitializer *param_1)

{
  UEscalationManagerConfig *this;
  
  this = (UEscalationManagerConfig *)param_1->Obj;
  if (this != (UEscalationManagerConfig *)0x0) {
    UEscalationManagerConfig::UEscalationManagerConfig(this,param_1);
    this->_padding_ = (longlong)&___7UNetFaultConfig__6B_;
  }
  return;
}

// InternalConstructor<UNetSubObjectFactory> @ 1480105a0

void __cdecl InternalConstructor<UNetSubObjectFactory>(FObjectInitializer *param_1)

{
  UNetObjectFactory *this;
  
  this = (UNetObjectFactory *)param_1->Obj;
  if (this != (UNetObjectFactory *)0x0) {
    UNetObjectFactory::UNetObjectFactory(this,param_1);
    this->_padding_ = (longlong)&___7UNetSubObjectFactory__6B_;
  }
  return;
}

// InternalConstructor<UNetworkSettings> @ 1480105d0

void __cdecl InternalConstructor<UNetworkSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FName local_res8 [4];
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UNetworkSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FName::FName(local_res8,L"Network");
    this->SectionName = local_res8[0];
  }
  return;
}

// InternalVTableHelperCtorCaller<ABandwidthTestActor> @ 148010630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ABandwidthTestActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ABandwidthTestActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ABandwidthTestActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDataStreamChannel> @ 148010700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDataStreamChannel>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UChannel *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDataStreamChannel::GetPrivateStaticClass();
  this = (UChannel *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UChannel *)0x0) {
    UChannel::UChannel(this,param_1);
    this->_padding_ = (longlong)&___7UDataStreamChannel__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEngineReplicationBridge> @ 1480107d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEngineReplicationBridge>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObjectReplicationBridge *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEngineReplicationBridge::GetPrivateStaticClass();
  this = (UObjectReplicationBridge *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UObjectReplicationBridge *)0x0) {
    UObjectReplicationBridge::UObjectReplicationBridge(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UEngineReplicationBridge__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetActorFactory> @ 1480108a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetActorFactory>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNetObjectFactory *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNetActorFactory::GetPrivateStaticClass();
  this = (UNetObjectFactory *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetObjectFactory *)0x0) {
    UNetObjectFactory::UNetObjectFactory(this,param_1);
    this->_padding_ = (longlong)&___7UNetActorFactory__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Bridge = (UObjectReplicationBridge *)0x0;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    *(double *)&this[1].FactoryId = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    this[2]._padding_ = uVar1;
    this[2]._padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetDriver> @ 148010990

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetDriver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetDriver *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetDriver::GetPrivateStaticClass();
  pUVar3 = (UNetDriver *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNetDriver *)0x0) {
    pUVar3 = UNetDriver::UNetDriver(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetFaultConfig> @ 148010a30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetFaultConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEscalationManagerConfig *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetFaultConfig::GetPrivateStaticClass();
  this = (UEscalationManagerConfig *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEscalationManagerConfig *)0x0) {
    UEscalationManagerConfig::UEscalationManagerConfig(this,param_1);
    this->_padding_ = (longlong)&___7UNetFaultConfig__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetSubObjectFactory> @ 148010ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetSubObjectFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetObjectFactory *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetSubObjectFactory::GetPrivateStaticClass();
  this = (UNetObjectFactory *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetObjectFactory *)0x0) {
    UNetObjectFactory::UNetObjectFactory(this,param_1);
    this->_padding_ = (longlong)&___7UNetSubObjectFactory__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkSettings> @ 148010b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UNetworkSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FActorPriority_*,int,UE::Core::Private::TProjectionMemberData<int_FActorPriority::*>,TGreater<void>_> @ 148010c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FActorPriority_*,int,UE::Core::Private::TProjectionMemberData<int_FActorPriority::*>,TGreater<void>_>
          (FActorPriority **param_1,int param_2,TProjectionMemberData<int_FActorPriority::*> param_3
          ,TGreater<void> param_4)

{
  FActorPriority **ppFVar1;
  FActorPriority *pFVar2;
  int iVar3;
  longlong lVar4;
  FActorPriority **ppFVar5;
  FActorPriority **ppFVar6;
  FActorPriority **ppFVar7;
  FActorPriority **ppFVar8;
  FActorPriority **ppFVar9;
  FActorPriority ***pppFVar10;
  float fVar11;
  undefined1 auStack_378 [48];
  FActorPriority **local_348;
  FActorPriority **local_338;
  FActorPriority **local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    lVar4 = (longlong)(int)param_3.DataMemberPtr;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar11;
    memset(local_320,0,0x2e8);
    pppFVar10 = &local_338;
    do {
      ppFVar9 = pppFVar10[1];
      ppFVar5 = *pppFVar10;
      ppFVar1 = pppFVar10[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_348._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_348 != 0) {
LAB_148010d00:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_148010d30:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x000148010d39;
          goto LAB_148010d47;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if (*(int *)((longlong)&(*ppFVar6)->Priority + lVar4) <=
                *(int *)((longlong)&(*ppFVar1)->Priority + lVar4)) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_148010e05;
      }
LAB_148010df4:
      local_348 = ppFVar1;
      HeapSortInternal<FActorPriority_*,int,UE::Core::Private::TProjectionMemberData<int_FActorPriority::*>,TGreater<void>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_148010e05:
      pppFVar10 = pppFVar10 + -3;
    } while (&local_338 <= pppFVar10);
  }
  return;
code_r0x000148010d39:
  if (*(int *)((longlong)&(*ppFVar8)->Priority + lVar4) <=
      *(int *)((longlong)&(*ppFVar5)->Priority + lVar4)) goto LAB_148010d30;
LAB_148010d47:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while (*(int *)((longlong)&(*ppFVar6)->Priority + lVar4) <=
           *(int *)((longlong)&(*ppFVar8)->Priority + lVar4));
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_148010d30;
  }
  pFVar2 = *ppFVar8;
  local_348._0_4_ = (int)local_348 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar10 = ppFVar5;
      pppFVar10[1] = ppFVar9;
      *(int *)(pppFVar10 + 2) = (int)local_348;
      pppFVar10 = pppFVar10 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_148010e05;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar10 = ppFVar8;
      pppFVar10[1] = ppFVar7 + -2;
      *(int *)(pppFVar10 + 2) = (int)local_348;
      pppFVar10 = pppFVar10 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_148010e05;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_348 == 0) goto LAB_148010df4;
  goto LAB_148010d00;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<``UNetDriver::PrintDebugRelevantActors'::__l2::SLocal::AggregateAndPrint'::__l2::FCompareActorClassCount>_>_>_> @ 148010eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<__UNetDriver::PrintDebugRelevantActors_::__l2::SLocal::AggregateAndPrint_::__l2::FCompareActorClassCount>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<_public:_static_void___cdecl__public:_void___cdecl_UNetDriver::PrintDebugRelevantActors(void)_::_2_::SLocal::AggregateAndPrint(TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,FString)_::_2_::FCompareActorClassCount>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x14) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_148010f80:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined4 *)((longlong)pTVar12 + lVar6 * 0x14 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined4 *)((longlong)pTVar12 + lVar6 * 0x14 + 0x10) =
               *(undefined4 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined4 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_148010fc2:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000148010fcb;
          goto LAB_148010fd5;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)((pTVar13->ElementData).Pad + 8) < *(int *)((pTVar1->ElementData).Pad + 8))
            {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined4 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined4 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined4 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined4 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_1480110e7;
      }
LAB_1480110d8:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<__UNetDriver::PrintDebugRelevantActors_::__l2::SLocal::AggregateAndPrint_::__l2::FCompareActorClassCount>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_1480110e7:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000148010fcb:
  if (*(int *)((longlong)pTVar9 + 0x1c) <= *(int *)((pTVar12->ElementData).Pad + 8))
  goto LAB_148010fc2;
LAB_148010fd5:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)pTVar11 + -0xc));
  uVar3 = *(undefined8 *)((longlong)pTVar11 + -0xc);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x1c);
    uVar2 = *(undefined4 *)((longlong)pTVar9 + 0x24);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x1c) = uVar3;
    *(undefined4 *)((longlong)pTVar9 + 0x24) = *(undefined4 *)((longlong)pTVar11 + -4);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0xc) = uVar5;
    *(undefined4 *)((longlong)pTVar11 + -4) = uVar2;
    goto LAB_148010fc2;
  }
  uVar2 = *(undefined4 *)((pTVar12->ElementData).Pad + 0x10);
  local_348._0_4_ = (int)local_348 + -1;
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar3;
  *(undefined4 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined4 *)((longlong)pTVar11 + -4);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0xc) = uVar5;
  *(undefined4 *)((longlong)pTVar11 + -4) = uVar2;
  if (((longlong)pTVar10 + (-0x14 - (longlong)pTVar12)) / 0x14 <
      ((longlong)pTVar8 - (longlong)pTVar13) / 0x14) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_1480110e7;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_1480110e7;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x14) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_1480110d8;
  goto LAB_148010f80;
}

// IsObjectPtrEqual<AActor,UObject_const_*,0> @ 1480111a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AActor,UObject_const_*,0>
          (TObjectPtr<AActor> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AActor *)0x0) {
    return (AActor *)*param_2 == (AActor *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (AActor *)*param_2;
}

// IsObjectPtrEqual<ULevel,UObject_*,0> @ 1480111c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<ULevel,UObject_*,0>
          (TObjectPtr<ULevel> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (ULevel *)0x0) {
    return (ULevel *)*param_2 == (ULevel *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (ULevel *)*param_2;
}

// NewObject<UChannel> @ 1480111e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UChannel * __cdecl
NewObject<UChannel>(UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,
                   UObject *param_5,bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UChannel *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UChannel_NoRegister();
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
  pUVar2 = (UChannel *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UDataStreamManager> @ 1480112e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDataStreamManager * __cdecl NewObject<UDataStreamManager>(UObject *param_1)

{
  UClass *pUVar1;
  UDataStreamManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDataStreamManager_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDataStreamManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UEngineReplicationBridge> @ 148011380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEngineReplicationBridge * __cdecl
NewObject<UEngineReplicationBridge>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UEngineReplicationBridge *pUVar2;
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
  pUVar1 = UEngineReplicationBridge::StaticClass();
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
  pUVar2 = (UEngineReplicationBridge *)
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

// NewObject<UNetworkMetricsBaseListener> @ 148011480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetworkMetricsBaseListener * __cdecl
NewObject<UNetworkMetricsBaseListener>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UNetworkMetricsBaseListener *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister();
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
  pUVar2 = (UNetworkMetricsBaseListener *)
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

// NewObject<UNetworkMetricsDatabase> @ 148011580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetworkMetricsDatabase * __cdecl NewObject<UNetworkMetricsDatabase>(UObject *param_1)

{
  UClass *pUVar1;
  UNetworkMetricsDatabase *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNetworkMetricsDatabase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNetworkMetricsStats> @ 148011620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetworkMetricsStats * __cdecl NewObject<UNetworkMetricsStats>(UObject *param_1)

{
  UClass *pUVar1;
  UNetworkMetricsStats *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNetworkMetricsStats_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNetworkMetricsStats *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UReplicationDriver> @ 1480116c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UReplicationDriver * __cdecl
NewObject<UReplicationDriver>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UReplicationDriver_NoRegister();
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
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UReplicationDriver *)pUVar2;
}

// ProfilerSerializeBitArray<FDefaultBitArrayAllocator> @ 1480117c0

void __cdecl
ProfilerSerializeBitArray<FDefaultBitArrayAllocator>
          (FArchive *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  ulonglong uVar2;
  int local_res8 [2];
  
  local_res8[0] = param_2->NumBits;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res8);
  FVar1 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    param_2 = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  }
  if (local_res8[0] + 0x1fU >> 5 != 0) {
    uVar2 = (ulonglong)(local_res8[0] + 0x1fU >> 5);
    do {
      (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,param_2);
      param_2 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// RemoveAllSwap<`UNetDriver::RemoveNetworkActor'::__l2::<lambda_1>_> @ 148011e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FNetworkObjectInfo_*,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_UNetDriver::RemoveNetworkActor_::__l2::<lambda_1>_>
          (TArray<FNetworkObjectInfo_*,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      if ((AActor *)**(longlong **)((this->AllocatorInstance).Data + lVar9) == param_1->Actor) {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar8 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar7) * 8,
                  (longlong)iVar7 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar8 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// UpperBoundInternal<FDelinquencyNameTimePair_const_,int,FDelinquencyNameTimePair,FIdentityFunctor,bool_(__cdecl*)(FDelinquencyNameTimePair_const_&,FDelinquencyNameTimePair_const_&)> @ 148012c60

int __cdecl
AlgoImpl::
UpperBoundInternal<FDelinquencyNameTimePair_const_,int,FDelinquencyNameTimePair,FIdentityFunctor,bool_(__cdecl*)(FDelinquencyNameTimePair_const_&,FDelinquencyNameTimePair_const_&)>
          (FDelinquencyNameTimePair *param_1,int param_2,FDelinquencyNameTimePair *param_3,
          FIdentityFunctor param_4,
          _func___cdecl_bool_FDelinquencyNameTimePair_ptr_FDelinquencyNameTimePair_ptr *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = (*param_5)(param_3,param_1 + iVar1);
      if (!bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// ~TFunction_OwnedObject<`UNetDriver::FindConnection'::__l2::<lambda_1>,0,1> @ 148016df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetDriver::FindConnection'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UNetDriver::FindConnection_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetDriver::FindConnection'::`2'::<lambda_1>,0,1>::_vftable_;
  FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UNetDriver::SendNetAnalytics'::__l2::<lambda_1>,0,0> @ 148016e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetDriver::SendNetAnalytics'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UNetDriver::SendNetAnalytics_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetDriver::SendNetAnalytics'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Net::FNetConnectionFaultRecovery::InitEscalationManager'::__l5::<lambda_1>,1,0> @ 148016e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::FNetConnectionFaultRecovery::InitEscalationManager'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UE::Net::FNetConnectionFaultRecovery::InitEscalationManager_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::FNetConnectionFaultRecovery::InitEscalationManager'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNetDriver::PostTickDispatch'::__l12::<lambda_2>,0,0> @ 148016e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetDriver::PostTickDispatch'::__l12::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UNetDriver::PostTickDispatch_::__l12::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetDriver::PostTickDispatch'::`12'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNetDriver::ServerReplicateActors'::__l61::<lambda_7>,0,1> @ 148016e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetDriver::ServerReplicateActors'::__l61::<lambda_7>,0,1>::
~TFunction_OwnedObject<_UNetDriver::ServerReplicateActors_::__l61::<lambda_7>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetDriver::ServerReplicateActors'::`61'::<lambda_7>,0,1>::_vftable_;
  return;
}

// operator<< @ 148018d70

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FNetworkProfilerHeader *param_2)

{
  uint *puVar1;
  ENetworkProfilerVersionHistory *pEVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  
  if ((param_1->field_0x28 & 4) == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetworkProfiler.cpp"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Magic);
    }
  }
  else {
    param_2->Magic = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar2 = (ENetworkProfilerVersionHistory *)**(undefined8 **)&param_1->field_0x8;
  if ((ENetworkProfilerVersionHistory *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Version);
    }
  }
  else {
    param_2->Version = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  FString::SerializeAsANSICharArray(&param_2->Tag,param_1,0);
  FString::SerializeAsANSICharArray(&param_2->GameName,param_1,0);
  FString::SerializeAsANSICharArray(&param_2->URL,param_1,0);
  return param_1;
}

// operator() @ 148019750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Net::Private::NetEmulationHelper::<lambda_32>::operator()'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1,UFunction *param_2,void *param_3,FOutParmRec *param_4,
          FFrame *param_5,UObject *param_6,bool *param_7)

{
  uint uVar1;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_2->FunctionFlags & FUNC_NetReliable) == FUNC_None) {
    uVar1 = rand();
    *param_7 = *(float *)this * __real_3c23d70a < (float)(uVar1 & 0x7fff) * __real_38000100;
    if (param_6 == (UObject *)0x0) {
      if ((byte)LogNetTraffic._0_1_ < 5) {
        return;
      }
      local_res18[0] = (FName)param_2->_padding_;
      ::FName::ToString(local_res18,&local_28);
      if ((param_1 == (AActor *)0x0) || (param_1->_padding_ == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
    else {
      if ((byte)LogNetTraffic._0_1_ < 5) {
        return;
      }
      local_res18[0] = (FName)param_2->_padding_;
      ::FName::ToString(local_res18,&local_28);
      local_res18[0].ComparisonIndex.Value = *(uint *)&param_6->field_0x18;
      local_res18[0].Number = *(uint *)&param_6->field_0x1c;
      ::FName::ToString(local_res18,&local_38);
      if ((param_1 == (AActor *)0x0) || (param_1->_padding_ == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 148019950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Net::Private::NetEmulationHelper::<lambda_33>::operator()'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1,UFunction *param_2,void *param_3,FOutParmRec *param_4,
          FFrame *param_5,UObject *param_6,bool *param_7)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *_Str;
  longlong lVar4;
  bool bVar5;
  FName local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (((param_2->FunctionFlags & FUNC_NetReliable) == FUNC_None) &&
     (uVar1 = rand(),
     *(float *)((longlong)this + 0x10) * __real_3c23d70a < (float)(uVar1 & 0x7fff) * __real_38000100
     )) {
    lVar4 = param_1->_padding_;
    bVar5 = false;
    if (lVar4 != 0) {
      do {
        if (bVar5) goto LAB_148019a71;
        local_res18 = *(FName *)(lVar4 + 0x18);
        ::FName::ToString(&local_res18,&local_38);
        if (*(int *)((longlong)this + 8) == 0) {
          _Str = L"";
LAB_148019a17:
          sVar3 = wcslen(_Str);
          iVar2 = ::FString::Find(&local_38,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
        }
        else {
          _Str = *(wchar_t **)this;
          if (_Str != (wchar_t *)0x0) goto LAB_148019a17;
          iVar2 = -1;
        }
        bVar5 = iVar2 != -1;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        lVar4 = *(longlong *)(lVar4 + 0x40);
      } while (lVar4 != 0);
      if (iVar2 != -1) {
LAB_148019a71:
        *param_7 = true;
        if (param_6 == (UObject *)0x0) {
          if ((byte)LogNetTraffic._0_1_ < 5) {
            return;
          }
          local_res18 = (FName)param_2->_padding_;
          ::FName::ToString(&local_res18,&local_38);
          if (param_1->_padding_ == 0) {
            ::FString::FString(&local_58,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_58,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
        else {
          if ((byte)LogNetTraffic._0_1_ < 5) {
            return;
          }
          local_res18 = (FName)param_2->_padding_;
          ::FName::ToString(&local_res18,&local_38);
          local_res18.ComparisonIndex.Value = *(uint *)&param_6->field_0x18;
          local_res18.Number = *(uint *)&param_6->field_0x1c;
          ::FName::ToString(&local_res18,&local_48);
          if (param_1->_padding_ == 0) {
            ::FString::FString(&local_58,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_58,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// operator() @ 148019c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Net::Private::NetEmulationHelper::<lambda_34>::operator()'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1,UFunction *param_2,void *param_3,FOutParmRec *param_4,
          FFrame *param_5,UObject *param_6,bool *param_7)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *_Str;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_2->FunctionFlags & FUNC_NetReliable) != FUNC_None) {
    return;
  }
  uVar1 = rand();
  if ((float)(uVar1 & 0x7fff) * __real_38000100 <=
      *(float *)((longlong)this + 0x10) * __real_3c23d70a) {
    return;
  }
  local_res18 = (FName)param_2->_padding_;
  ::FName::ToString(&local_res18,&local_28);
  if (*(int *)((longlong)this + 8) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)this;
    if (_Str == (wchar_t *)0x0) {
      iVar2 = -1;
      goto LAB_148019cdc;
    }
  }
  sVar3 = wcslen(_Str);
  iVar2 = ::FString::Find(&local_28,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
LAB_148019cdc:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (iVar2 != -1) {
    *param_7 = true;
    if (param_6 == (UObject *)0x0) {
      if ((byte)LogNetTraffic._0_1_ < 5) {
        return;
      }
      local_res18 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res18,&local_28);
      if ((param_1 == (AActor *)0x0) || (param_1->_padding_ == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
    else {
      if ((byte)LogNetTraffic._0_1_ < 5) {
        return;
      }
      local_res18 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res18,&local_28);
      local_res18.ComparisonIndex.Value = *(uint *)&param_6->field_0x18;
      local_res18.Number = *(uint *)&param_6->field_0x1c;
      ::FName::ToString(&local_res18,&local_38);
      if ((param_1 == (AActor *)0x0) || (param_1->_padding_ == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 148019e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Net::Private::NetEmulationHelper::<lambda_35>::operator()'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1,UFunction *param_2,void *param_3,FOutParmRec *param_4,
          FFrame *param_5,UObject *param_6,bool *param_7)

{
  UObject *pUVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str;
  longlong lVar5;
  bool bVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pUVar1 = param_6;
  if (((param_6 != (UObject *)0x0) && ((param_2->FunctionFlags & FUNC_NetReliable) == FUNC_None)) &&
     (uVar2 = rand(),
     *(float *)((longlong)this + 0x10) * __real_3c23d70a < (float)(uVar2 & 0x7fff) * __real_38000100
     )) {
    bVar6 = false;
    lVar5 = *(longlong *)&pUVar1->field_0x10;
    if (lVar5 != 0) {
      do {
        if (bVar6) goto LAB_148019fcc;
        param_6 = *(UObject **)(lVar5 + 0x18);
        ::FName::ToString((FName *)&param_6,&local_38);
        if (*(int *)((longlong)this + 8) == 0) {
          _Str = L"";
LAB_148019f70:
          sVar4 = wcslen(_Str);
          iVar3 = ::FString::Find(&local_38,_Str,(int)sVar4,IgnoreCase,FromStart,-1);
        }
        else {
          _Str = *(wchar_t **)this;
          if (_Str != (wchar_t *)0x0) goto LAB_148019f70;
          iVar3 = -1;
        }
        bVar6 = iVar3 != -1;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        lVar5 = *(longlong *)(lVar5 + 0x40);
      } while (lVar5 != 0);
      if (iVar3 != -1) {
LAB_148019fcc:
        *param_7 = true;
        if (4 < (byte)LogNetTraffic._0_1_) {
          param_6 = (UObject *)param_2->_padding_;
          ::FName::ToString((FName *)&param_6,&local_38);
          param_6 = *(UObject **)&pUVar1->field_0x18;
          ::FName::ToString((FName *)&param_6,&local_48);
          if ((param_1 == (AActor *)0x0) || (param_1->_padding_ == 0)) {
            ::FString::FString(&local_58,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1,&local_58,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14801bc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  UClass *pUVar7;
  AActor *pAVar8;
  ABandwidthTestActor *pAVar9;
  FActorSpawnParameters *pFVar10;
  longlong *plVar11;
  int iVar12;
  wchar_t *pwVar13;
  float fVar14;
  undefined1 auStackY_168 [32];
  float local_138 [2];
  UClass *local_130;
  TActorIteratorBase<TActorIterator<ABandwidthTestActor>_> local_128;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1->ArrayNum < 1) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
  }
  else {
    pFVar1 = (param_1->AllocatorInstance).Data;
    local_138[0] = 0.0;
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)pFVar1;
    }
    LexTryParseString<float>(local_138,pwVar13);
    bVar3 = false;
    pUVar7 = ABandwidthTestActor::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
    }
    local_128.Flags = OnlyActiveLevels|SkipPendingKill;
    local_128.State.bIsSet = false;
    local_130 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FActorIteratorState::FActorIteratorState
              (&local_128.State.TypedValue,param_2,(TSubclassOf<AActor>)&local_130);
    local_128.State.bIsSet = true;
    TActorIteratorBase<TActorIterator<ABandwidthTestActor>_>::operator++(&local_128);
    fVar5 = local_138[0];
    fVar4 = __real_447a0000;
    while( true ) {
      if ((local_128.State.bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_128.State.TypedValue.ReachedEnd != false) break;
      bVar3 = true;
      if ((local_128.State.bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pAVar8 = FActorIteratorState::GetActorChecked(&local_128.State.TypedValue);
      pAVar9 = CastChecked<ABandwidthTestActor,AActor>(pAVar8);
      if (0.0 < fVar5) {
        fVar14 = (float)(**(code **)(GEngine->_padding_ + 0x310))(GEngine,0);
        if (0.0 < fVar14) {
          iVar12 = (int)((fVar5 / fVar14) * fVar4);
          goto LAB_14801be49;
        }
      }
      else {
        iVar12 = 0;
LAB_14801be49:
        FBandwidthTestGenerator::FillBufferForSize(&pAVar9->BandwidthGenerator,iVar12);
        (pAVar9->BandwidthGenerator).SpikePeriodInSec = 0.0;
      }
      TActorIteratorBase<TActorIterator<ABandwidthTestActor>_>::operator++(&local_128);
    }
    if (local_128.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_128.State.TypedValue.CurrentWorld,
                 local_128.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_128.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_128.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
    if (!bVar3) {
      pFVar10 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_c8);
      pUVar7 = ABandwidthTestActor::StaticClass();
      pAVar9 = (ABandwidthTestActor *)
               UWorld::SpawnActor(param_2,pUVar7,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                  pFVar10);
      if (pAVar9 == (ABandwidthTestActor *)0x0) {
LAB_14801bf06:
        pAVar9 = (ABandwidthTestActor *)0x0;
      }
      else {
        pUVar7 = ABandwidthTestActor::StaticClass();
        iVar12 = (int)pUVar7->_padding_;
        if ((*(int *)(pAVar9->_padding_ + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar9->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar7->_padding_)) goto LAB_14801bf06;
      }
      if (local_c8._64_8_ != 0) {
        plVar11 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      ABandwidthTestActor::StartGeneratingBandwidth(pAVar9,fVar5);
    }
  }
  return;
}

// operator() @ 14801bf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
<lambda_27>::operator()
          (<lambda_27> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UClass *pUVar10;
  AActor *pAVar11;
  ABandwidthTestActor *pAVar12;
  FActorSpawnParameters *pFVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  wchar_t _C;
  wchar_t *_Str;
  undefined1 auStackY_198 [32];
  float local_168 [2];
  UClass *local_160;
  TActorIteratorBase<TActorIterator<ABandwidthTestActor>_> local_158;
  undefined1 local_f8 [112];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1->ArrayNum < 2) {
    if ((byte)LogConsoleResponse._0_1_ < 4) {
      return;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  _Str = L"";
  local_168[0] = 0.0;
  if (*(int *)(pFVar1 + 8) == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = *(wchar_t **)pFVar1;
  }
  LexTryParseString<float>(local_168,pwVar15);
  if ((param_1->ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 0x18) != 0) {
    _Str = *(wchar_t **)(pFVar1 + 0x10);
  }
  iVar8 = 0;
  if (((*_Str != L'\0') && (iVar8 = _wtoi(_Str), iVar8 == 0)) && (iVar9 = _finite(0.0), iVar9 != 0))
  {
    bVar6 = false;
    _C = *_Str;
    while (_C != L'\0') {
      if (((_C + L'ￕ' & 0xfffdU) != 0) && (iVar9 = iswspace(_C), iVar9 == 0)) {
        if (_C != L'\0') goto LAB_14801c0f0;
        break;
      }
      pwVar15 = _Str + 1;
      _Str = _Str + 1;
      _C = *pwVar15;
    }
  }
  goto LAB_14801c126;
  while( true ) {
    _C = _Str[1];
    _Str = _Str + 1;
    bVar6 = true;
    if (_C == L'\0') break;
LAB_14801c0f0:
    iVar9 = iswspace(_C);
    if (((iVar9 != 0) || (_C == L'.')) || ((!bVar6 && (_C != L'0')))) break;
  }
LAB_14801c126:
  pUVar10 = ABandwidthTestActor::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar10 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
  }
  local_158.Flags = OnlyActiveLevels|SkipPendingKill;
  local_158.State.bIsSet = false;
  local_160 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FActorIteratorState::FActorIteratorState
            (&local_158.State.TypedValue,param_2,(TSubclassOf<AActor>)&local_160);
  local_158.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<ABandwidthTestActor>_>::operator++(&local_158);
  fVar5 = local_168[0];
  dVar4 = __real_3f50624dd2f1a9fc;
  fVar3 = __real_447a0000;
  bVar6 = false;
  while( true ) {
    if ((local_158.State.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_158.State.TypedValue.ReachedEnd != false) break;
    bVar6 = true;
    if ((local_158.State.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar11 = FActorIteratorState::GetActorChecked(&local_158.State.TypedValue);
    pAVar12 = CastChecked<ABandwidthTestActor,AActor>(pAVar11);
    if ((fVar5 <= 0.0) || (iVar8 < 1)) {
      FBandwidthTestGenerator::FillBufferForSize(&pAVar12->BandwidthGenerator,0);
      (pAVar12->BandwidthGenerator).SpikePeriodInSec = 0.0;
      TActorIteratorBase<TActorIterator<ABandwidthTestActor>_>::operator++(&local_158);
    }
    else {
      FBandwidthTestGenerator::FillBufferForSize(&pAVar12->BandwidthGenerator,(int)(fVar5 * fVar3));
      (pAVar12->BandwidthGenerator).SpikePeriodInSec = (double)iVar8 * dVar4;
      FBandwidthTestGenerator::OnSpikePeriod(&pAVar12->BandwidthGenerator);
      TActorIteratorBase<TActorIterator<ABandwidthTestActor>_>::operator++(&local_158);
      bVar6 = true;
    }
  }
  if (local_158.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_158.State.TypedValue.CurrentWorld,
               local_158.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_158.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_158.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  if (bVar6) {
    return;
  }
  pFVar13 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_f8);
  pUVar10 = ABandwidthTestActor::StaticClass();
  pAVar11 = UWorld::SpawnActor(param_2,pUVar10,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                               pFVar13);
  if (pAVar11 != (AActor *)0x0) {
    pUVar10 = ABandwidthTestActor::StaticClass();
    iVar9 = (int)pUVar10->_padding_;
    if ((iVar9 <= *(int *)(pAVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar11->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar10->_padding_)) goto LAB_14801c357;
  }
  pAVar11 = (AActor *)0x0;
LAB_14801c357:
  if (local_f8._64_8_ != 0) {
    plVar14 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((fVar5 <= 0.0) || (iVar8 < 1)) {
    FBandwidthTestGenerator::FillBufferForSize((FBandwidthTestGenerator *)(pAVar11 + 1),0);
    pAVar11[1]._padding_ = 0;
  }
  else {
    FBandwidthTestGenerator::FillBufferForSize
              ((FBandwidthTestGenerator *)(pAVar11 + 1),(int)(fVar5 * fVar3));
    pAVar11[1]._padding_ = (longlong)((double)iVar8 * dVar4);
    FBandwidthTestGenerator::OnSpikePeriod((FBandwidthTestGenerator *)(pAVar11 + 1));
  }
  return;
}

// operator() @ 14801c430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
<lambda_28>::operator()
          (<lambda_28> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FActorSpawnParameters *pFVar4;
  UClass *pUVar5;
  AActor *pAVar6;
  longlong *plVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar4 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  pUVar5 = ABandwidthTestActor::StaticClass();
  pAVar6 = UWorld::SpawnActor(param_2,pUVar5,(TVector<double> *)0x0,(TRotator<double> *)0x0,pFVar4);
  if (pAVar6 != (AActor *)0x0) {
    pUVar5 = ABandwidthTestActor::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pAVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14801c4a7;
  }
  pAVar6 = (AActor *)0x0;
LAB_14801c4a7:
  if (local_88._64_8_ != 0) {
    plVar7 = (longlong *)(local_88 + 0x50);
    if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_88._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (pAVar6 == (AActor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GeneratorActor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\BandwidthTestActor.cpp"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// operator() @ 14801d130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Net::Private::<lambda_25>::operator()'::__l2::<lambda_3>::operator()
          (void *this,UNetDriver *param_1)

{
  longlong *plVar1;
  int iVar2;
  UNetConnection *pUVar3;
  AActor *pAVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  FName local_res10;
  FName local_res18;
  uint local_res20;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  FString local_80;
  void *local_70 [2];
  FString local_60;
  void *local_50 [3];
  
  local_res10 = (FName)param_1;
  if ((param_1->ServerConnection).field0_0x0.DebugPtr == (UNetConnection *)0x0) {
    if (3 < (byte)LogNet._0_1_) {
      local_res18 = param_1->NetDriverDefinition;
      ::FName::ToString(&local_res18,&local_98);
      ::FName::ToString(&param_1->NetDriverName,&local_b8);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    local_res20 = (param_1->ClientConnections).ArrayNum;
    uVar9 = (ulonglong)(int)local_res20;
    pFVar11 = (param_1->ClientConnections).AllocatorInstance.Data;
    local_a8.Data.AllocatorInstance.Data = pFVar11 + uVar9 * 8;
    while( true ) {
      FVar8.Data = local_a8.Data.AllocatorInstance.Data;
      local_88 = pFVar11;
      if (*(int *)((longlong)param_1 + 0x110) != (int)uVar9) {
        `TCheckedPointerIterator<TObjectPtr<UNetConnection>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (pFVar11 == FVar8.Data) break;
      plVar5 = *(longlong **)pFVar11;
      if (3 < (byte)LogNet._0_1_) {
        (**(code **)(*plVar5 + 0x2e0))(plVar5,local_70);
        FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)(plVar5 + 0x37),&local_80);
        if (plVar5[0x12] == 0) {
          ::FString::FString(&local_98,L"None");
        }
        else {
          local_res18 = *(FName *)(plVar5[0x12] + 0x18);
          ::FName::ToString(&local_res18,&local_98);
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70[0] != (void *)0x0) {
          FMemory::Free(local_70[0]);
        }
      }
      plVar12 = (longlong *)plVar5[9];
      lVar7 = plVar5[10];
      plVar1 = plVar12 + (int)lVar7;
      while( true ) {
        if ((int)plVar5[10] != (int)lVar7) {
          `TCheckedPointerIterator<TObjectPtr<UChildConnection>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (plVar12 == plVar1) break;
        plVar6 = (longlong *)*plVar12;
        if (3 < (byte)LogNet._0_1_) {
          (**(code **)(*plVar6 + 0x2e0))(plVar6,local_50);
          FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)(plVar6 + 0x37),&local_60);
          if (plVar6[0x12] == 0) {
            ::FString::FString(&local_b8,L"None");
          }
          else {
            local_res18 = *(FName *)(plVar6[0x12] + 0x18);
            ::FName::ToString(&local_res18,&local_b8);
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_50[0] != (void *)0x0) {
            FMemory::Free(local_50[0]);
          }
        }
        plVar12 = plVar12 + 1;
      }
      pFVar11 = local_88 + 8;
      uVar9 = (ulonglong)local_res20;
      param_1 = (UNetDriver *)local_res10;
    }
  }
  else {
    if (3 < (byte)LogNet._0_1_) {
      local_res10 = param_1->NetDriverDefinition;
      ::FName::ToString(&local_res10,&local_98);
      ::FName::ToString(&param_1->NetDriverName,&local_b8);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogNet._0_1_) {
        pUVar3 = (param_1->ServerConnection).field0_0x0.DebugPtr;
        (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3,&local_b8);
        pAVar4 = (((param_1->ServerConnection).field0_0x0.DebugPtr)->ViewTarget).field0_0x0.DebugPtr
        ;
        if (pAVar4 == (AActor *)0x0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          local_res10 = (FName)pAVar4->_padding_;
          ::FName::ToString(&local_res10,&local_a8);
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
    pUVar3 = (param_1->ServerConnection).field0_0x0.DebugPtr;
    pFVar10 = (pUVar3->Children).AllocatorInstance.Data;
    iVar2 = (pUVar3->Children).ArrayNum;
    pFVar11 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar3->Children).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UChildConnection>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res10);
      }
      if (pFVar10 == pFVar11) break;
      plVar5 = *(longlong **)pFVar10;
      if (3 < (byte)LogNet._0_1_) {
        (**(code **)(*plVar5 + 0x2e0))(plVar5,&local_b8);
        if (plVar5[0x12] == 0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          local_res10 = *(FName *)(plVar5[0x12] + 0x18);
          ::FName::ToString(&local_res10,&local_a8);
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = pFVar10 + 8;
    }
  }
  return;
}

// `vcall'{864,{flat}}'_}' @ 14801d694

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UNetDriver::`vcall'{864,{flat}}' }' */

void __thiscall UNetDriver::_vcall__864__flat______(UNetDriver *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014801d697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x360))();
  return;
}

// `vcall'{880,{flat}}'_}' @ 14801d6a4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UNetDriver::`vcall'{880,{flat}}' }' */

void __thiscall UNetDriver::_vcall__880__flat______(UNetDriver *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014801d6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x370))();
  return;
}

// `vcall'{1232,{flat}}'_}' @ 14801d6b4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UNetDriver::`vcall'{1232,{flat}}' }' */

void __thiscall UNetDriver::_vcall__1232__flat______(UNetDriver *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014801d6b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4d0))();
  return;
}

// `vcall'{1240,{flat}}'_}' @ 14801d6c4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UNetDriver::`vcall'{1240,{flat}}' }' */

void __thiscall UNetDriver::_vcall__1240__flat______(UNetDriver *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014801d6c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4d8))();
  return;
}

// `vcall'{1272,{flat}}'_}' @ 14801d6d4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl UNetDriver::`vcall'{1272,{flat}}' }' */

void __thiscall UNetDriver::_vcall__1272__flat______(UNetDriver *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014801d6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4f8))();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14801d6e4

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UNetDriver::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNetDriver::_vector_deleting_destructor__adjustor_40__(UNetDriver *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNetDriver *)&this[-1].TotalOutOfOrderPacketsRecovered,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14801d700

void * __thiscall
IBaseDelegateInstance<void___cdecl(FNetSyncLoadReport_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FNetSyncLoadReport_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d730

void * __thiscall
IBaseDelegateInstance<void___cdecl(UNetDriver_*,int,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UNetDriver_*,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d760

void * __thiscall
IBaseDelegateInstance<void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d790

void * __thiscall
IBaseDelegateInstance<void___cdecl(AActor_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AActor_const_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d7c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy,`UNetDriver::InitBase'::__l20::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d7f0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNetworkProfiler,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNetworkProfiler,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d820

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEngineReplicationBridge,void___cdecl(UNetDriver_*,int,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UEngineReplicationBridge,void___cdecl(UNetDriver_*,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d850

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEngineReplicationBridge,void___cdecl(AActor_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UEngineReplicationBridge,void___cdecl(AActor_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d880

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(FNetSyncLoadReport_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(FNetSyncLoadReport_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d8b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d8e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d910

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d940

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UNetDriver,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d970

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FNetSyncLoadReport_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FNetSyncLoadReport_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d9a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UNetDriver_*,int,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UNetDriver_*,int,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801d9d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UObject_*,UObject_*,UFunction_*,void_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801da00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AActor_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AActor_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801da30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXV__TArrayView_PEAVUObject__H__PEBVUObjectReplicationBridge___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801da70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetDriver::FindConnection'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetDriver::FindConnection'::`2'::<lambda_1>,0,1>::_vftable_;
  FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetDriver::SendNetAnalytics'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetDriver::SendNetAnalytics'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801db00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::FNetConnectionFaultRecovery::InitEscalationManager'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::FNetConnectionFaultRecovery::InitEscalationManager'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801db40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetDriver::PostTickDispatch'::__l12::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetDriver::PostTickDispatch'::`12'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801db80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNetDriver::ServerReplicateActors'::__l61::<lambda_7>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNetDriver::ServerReplicateActors'::`61'::<lambda_7>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dbc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetworkObjectInfo,SharedPointerInternals::DefaultDeleter<FNetworkObjectInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNetworkObjectInfo,SharedPointerInternals::DefaultDeleter<FNetworkObjectInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dc00

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FClassNetCacheMgr,SharedPointerInternals::DefaultDeleter<FClassNetCacheMgr>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FClassNetCacheMgr,SharedPointerInternals::DefaultDeleter<FClassNetCacheMgr>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dc40

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetAnalyticsAggregator,SharedPointerInternals::DefaultDeleter<FNetAnalyticsAggregator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNetAnalyticsAggregator,SharedPointerInternals::DefaultDeleter<FNetAnalyticsAggregator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dc80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetGUIDCache,SharedPointerInternals::DefaultDeleter<FNetGUIDCache>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNetGUIDCache,SharedPointerInternals::DefaultDeleter<FNetGUIDCache>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dcc0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetworkObjectList,SharedPointerInternals::DefaultDeleter<FNetworkObjectList>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNetworkObjectList,SharedPointerInternals::DefaultDeleter<FNetworkObjectList>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dd00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ABandwidthTestActor::_scalar_deleting_destructor_(ABandwidthTestActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ABandwidthTestActor__6B_;
  DestructItems<FBandwidthTestItem,int>
            ((FBandwidthTestItem *)
             (this->BandwidthGenerator).ReplicatedBuffers.AllocatorInstance.Data,
             (this->BandwidthGenerator).ReplicatedBuffers.ArrayNum);
  pFVar1 = (this->BandwidthGenerator).ReplicatedBuffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dd90

void * __thiscall
UE::Net::FBaseActorNetCreationHeader::_scalar_deleting_destructor_
          (FBaseActorNetCreationHeader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CustomCreationData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FNetObjectCreationHeader_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dde0

void * __thiscall
UE::Net::FDynamicActorNetCreationHeader::_scalar_deleting_destructor_
          (FDynamicActorNetCreationHeader *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FNetObjectCreationHeader_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801de30

void * __thiscall
FNetAnalyticsAggregator::_scalar_deleting_destructor_(FNetAnalyticsAggregator *this,uint param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->AnalyticsAppender != 0) {
    plVar1 = *(longlong **)&(this->AnalyticsAppender).field_0x28;
    plVar3 = (longlong *)&(this->AnalyticsAppender).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined4 *)&(this->AnalyticsDataConfigMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnalyticsDataConfigMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnalyticsDataConfigMap);
  *(undefined4 *)&(this->AnalyticsDataTypeMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnalyticsDataTypeMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnalyticsDataTypeMap);
  *(undefined4 *)&(this->AnalyticsDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnalyticsDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FNetAnalyticsData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FNetAnalyticsData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FNetAnalyticsData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnalyticsDataMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyticsProvider).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801df10

void * __thiscall
UE::Net::FNetBaseSubObjectCreationHeader::_scalar_deleting_destructor_
          (FNetBaseSubObjectCreationHeader *this,uint param_1)

{
  *(undefined ***)this = &___7FNetObjectCreationHeader_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801df50

void * __thiscall
UE::Net::FNetDynamicSubObjectCreationHeader::_scalar_deleting_destructor_
          (FNetDynamicSubObjectCreationHeader *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNetObjectCreationHeader_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801df90

void * __thiscall
UE::Net::FNetObjectCreationHeader::_scalar_deleting_destructor_
          (FNetObjectCreationHeader *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNetObjectCreationHeader_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801dfd0

void * __thiscall
UE::Net::FNetStaticSubObjectCreationHeader::_scalar_deleting_destructor_
          (FNetStaticSubObjectCreationHeader *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNetObjectCreationHeader_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e010

void * __thiscall
FNetworkObjectList::_scalar_deleting_destructor_(FNetworkObjectList *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->SubObjectChannelReferences).HashSize = 0;
  FVar1 = (this->SubObjectChannelReferences).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FNetworkObjectList::FActorSubObjectReferences>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkObjectList::FActorSubObjectReferences>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SubObjectChannelReferences).Elements);
  *(undefined4 *)&(this->DormantObjectsPerConnection).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DormantObjectsPerConnection).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DormantObjectsPerConnection);
  *(undefined4 *)&(this->FullyDormantObjectsByLevel).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FullyDormantObjectsByLevel).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FullyDormantObjectsByLevel);
  *(undefined4 *)&(this->NumDormantObjectsPerConnection).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NumDormantObjectsPerConnection).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NumDormantObjectsPerConnection);
  (this->SeamlessTravelingObjects).HashSize = 0;
  FVar1 = (this->SeamlessTravelingObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SeamlessTravelingObjects).Elements);
  (this->ObjectsDormantOnAllConnections).HashSize = 0;
  FVar1 = (this->ObjectsDormantOnAllConnections).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ObjectsDormantOnAllConnections).Elements);
  (this->ActiveNetworkObjects).HashSize = 0;
  FVar1 = (this->ActiveNetworkObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveNetworkObjects).Elements);
  (this->AllNetworkObjects).HashSize = 0;
  FVar1 = (this->AllNetworkObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e170

void * __thiscall
UE::Net::FPreRegisteredActorNetCreationHeader::_scalar_deleting_destructor_
          (FPreRegisteredActorNetCreationHeader *this,uint param_1)

{
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  *(undefined ***)this = &___7FNetObjectCreationHeader_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e1c0

void * __thiscall
UE::Net::FStaticActorNetCreationHeader::_scalar_deleting_destructor_
          (FStaticActorNetCreationHeader *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FNetObjectCreationHeader_Net_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e210

void * __thiscall
FTransactionallySafeArchiveWriter::_scalar_deleting_destructor_
          (FTransactionallySafeArchiveWriter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FArchive *pFVar2;
  
  this->_padding_ = (longlong)&___7FTransactionallySafeArchiveWriter__6B_;
  if (((this->InnerArchive).Ptr != (FArchive *)0x0) && (this->bRegisteredCommitHandler != false)) {
    (this->InnerArchive).Ptr = (FArchive *)0x0;
    pFVar1 = (this->DeferredWrites).AllocatorInstance.Data;
    (this->DeferredWrites).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeferredWrites).ArrayNum = 0;
    (this->DeferredWrites).ArrayMax = 0;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  pFVar1 = (this->DeferredWrites).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->InnerArchive).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UDataStreamChannel::_scalar_deleting_destructor_(UDataStreamChannel *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDataStreamChannel__6B_;
  TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
  ::
  ~TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
            (&this->WriteRecords);
  UChannel::~UChannel((UChannel *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2098);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UEngineReplicationBridge::_scalar_deleting_destructor_(UEngineReplicationBridge *this,uint param_1)

{
  *(undefined ***)this = &___7UEngineReplicationBridge__6B_;
  UObjectReplicationBridge::~UObjectReplicationBridge((UObjectReplicationBridge *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e390

void * __thiscall
UNetActorFactory::_scalar_deleting_destructor_(UNetActorFactory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetActorFactory__6B_;
  UNetObjectFactory::~UNetObjectFactory((UNetObjectFactory *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UNetDriver::_scalar_deleting_destructor_(UNetDriver *this,uint param_1)

{
  ~UNetDriver(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e450

void * __thiscall UNetFaultConfig::_scalar_deleting_destructor_(UNetFaultConfig *this,uint param_1)

{
  *(undefined ***)this = &___7UNetFaultConfig__6B_;
  UEscalationManagerConfig::~UEscalationManagerConfig((UEscalationManagerConfig *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e4b0

void * __thiscall
UNetSubObjectFactory::_scalar_deleting_destructor_(UNetSubObjectFactory *this,uint param_1)

{
  *(undefined ***)this = &___7UNetSubObjectFactory__6B_;
  UNetObjectFactory::~UNetObjectFactory((UNetObjectFactory *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14801e510

void * __thiscall
UNetworkSettings::_scalar_deleting_destructor_(UNetworkSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetworkSettings__6B_;
  DestructItems<FNetworkEmulationProfileDescription,int>
            ((FNetworkEmulationProfileDescription *)
             (this->NetworkEmulationProfiles).AllocatorInstance.Data,
             (this->NetworkEmulationProfiles).ArrayNum);
  pFVar1 = (this->NetworkEmulationProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// DumpRelevantActors @ 14802e020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DumpRelevantActors(UWorld *param_1)

{
  UNetDriver *pUVar1;
  
  pUVar1 = (param_1->NetDriver).field0_0x0.DebugPtr;
  if (pUVar1 != (UNetDriver *)0x0) {
    pUVar1->DebugRelevantActors = true;
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeBandwidthTestActor @ 14802e0f0

void __cdecl EmptyLinkFunctionForGeneratedCodeBandwidthTestActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDataStreamChannel @ 14802e100

void __cdecl EmptyLinkFunctionForGeneratedCodeDataStreamChannel(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEngineReplicationBridge @ 14802e110

void __cdecl EmptyLinkFunctionForGeneratedCodeEngineReplicationBridge(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetActorFactory @ 14802e120

void __cdecl EmptyLinkFunctionForGeneratedCodeNetActorFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetConnectionFaultRecovery @ 14802e130

void __cdecl EmptyLinkFunctionForGeneratedCodeNetConnectionFaultRecovery(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetDriver @ 14802e140

void __cdecl EmptyLinkFunctionForGeneratedCodeNetDriver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetSubObjectFactory @ 14802e150

void __cdecl EmptyLinkFunctionForGeneratedCodeNetSubObjectFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetworkSettings @ 14802e160

void __cdecl EmptyLinkFunctionForGeneratedCodeNetworkSettings(void)

{
  return;
}

// HandleNetFlushAllDormancy @ 14803b3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl HandleNetFlushAllDormancy(UNetDriver *param_1,UWorld *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FNetworkObjectList *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FNameEntryId FVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_void___cdecl_HandleNetFlushAllDormancy(UNetDriver_*,UWorld_*)_::_2_::FStat_STAT_NetDriver_HandleNetFlushAllDormancy>
  FVar11;
  FNetworkObjectList *pFVar12;
  ulonglong uVar13;
  UObject *pUVar14;
  longlong *plVar15;
  byte bVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint *puVar28;
  undefined1 auStackY_2c8 [32];
  undefined1 local_267;
  undefined1 local_266 [2];
  uint local_264;
  FName local_260;
  FColor_u_0 local_258;
  uint local_254;
  ForElementType<unsigned_int> local_250;
  int local_248;
  uint uStack_244;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_240;
  undefined4 local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  FName local_228;
  FName local_220;
  FName local_218;
  FNetworkObjectList *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  int local_1c0;
  FNetworkObjectList *local_1b8;
  LARGE_INTEGER local_1b0;
  LARGE_INTEGER local_1a8;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  longlong *local_178;
  int iStack_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  int local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  FNetworkObjectList *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FSparseArrayAllocationInfo local_e8;
  FName local_d8;
  FName local_d0 [4];
  undefined4 local_ac;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_NetDriver_HandleNetFlushAllDormancy ==
        (FThreadSafeStaticStat<_void___cdecl_HandleNetFlushAllDormancy(UNetDriver_*,UWorld_*)_::_2_::FStat_STAT_NetDriver_HandleNetFlushAllDormancy>
         )0x0) {
      pFVar10 = FName::FName(&local_d8,"STAT_NetDriver_HandleNetFlushAllDormancy");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetDriver_HandleNetFlushAllDormancy,
                 *pFVar10,L"STAT_NetDriver_HandleNetFlushAllDormancy","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar11 = StatPtr_STAT_NetDriver_HandleNetFlushAllDormancy;
  if (StatPtr_STAT_NetDriver_HandleNetFlushAllDormancy ==
      (FThreadSafeStaticStat<_void___cdecl_HandleNetFlushAllDormancy(UNetDriver_*,UWorld_*)_::_2_::FStat_STAT_NetDriver_HandleNetFlushAllDormancy>
       )0x0) {
    pFVar10 = FName::FName(local_d0,"STAT_NetDriver_HandleNetFlushAllDormancy");
    FVar11 = (FThreadSafeStaticStat<_void___cdecl_HandleNetFlushAllDormancy(UNetDriver_*,UWorld_*)_::_2_::FStat_STAT_NetDriver_HandleNetFlushAllDormancy>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NetDriver_HandleNetFlushAllDormancy,*pFVar10,
                          L"STAT_NetDriver_HandleNetFlushAllDormancy","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar11;
  bVar3 = false;
  bVar4 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  bVar6 = false;
  bVar7 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_14803b536:
    bVar4 = bVar7;
    bVar3 = bVar6;
    bVar6 = false;
    local_220 = local_218;
    FVar19 = local_218;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_258.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_258._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar6 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_228.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetDriver.cpp"
                   ,0xfde);
        bVar3 = true;
        bVar4 = true;
        bVar6 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14803b536;
    local_260 = FVar19;
    local_220 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = true;
  }
  if (((param_1 == (UNetDriver *)0x0) || (param_2 == (UWorld *)0x0)) ||
     ((param_1->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)) goto LAB_14803c05f;
  pFVar12 = UNetDriver::GetNetworkObjectList(param_1);
  FVar19.ComparisonIndex.Value = 1;
  FVar19.Number = 0;
  local_260.ComparisonIndex.Value = 1;
  local_260.Number = 0;
  uVar20 = *(int *)&(pFVar12->ObjectsDormantOnAllConnections).Elements.field_0x8 -
           *(int *)&(pFVar12->ObjectsDormantOnAllConnections).Elements.field_0x34;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  uVar21 = 1;
  local_254 = uVar20;
  local_1b8 = pFVar12;
  if (uVar20 != 0) {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8,uVar20);
    if (3 < uVar20) {
      uVar23 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_1d8 = (undefined4)lVar18;
      uVar21 = 1 << ((byte)lVar18 & 0x1f);
    }
    if ((local_60 == 0) || ((int)local_60 < (int)uVar21)) {
      local_60 = uVar21;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar21 != 0) {
        uVar20 = uVar21;
        if (uVar21 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar20 = 0;
            goto LAB_14803b675;
          }
        }
        else {
LAB_14803b675:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar20,4)
          ;
        }
        if (0 < (int)uVar21) {
          uVar23 = 0;
          uVar26 = (ulonglong)uVar21;
          do {
            FVar17.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar17.Data = local_68.Data;
            }
            uVar13 = uVar23 & (longlong)(int)uVar21 - 1U;
            uVar23 = uVar23 + 1;
            *(undefined4 *)(FVar17.Data + uVar13 * 4) = 0xffffffff;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_240 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
        local_248 = 0;
        uStack_234 = 0;
        iStack_230 = 0;
        uStack_244 = 1;
        if (local_80 != 0) {
          FVar25 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = local_88;
          }
          uVar20 = *(uint *)FVar25;
          iStack_230 = 0;
          while (uVar20 == 0) {
            iStack_230 = iStack_230 + 0x20;
            lVar18 = (longlong)local_248;
            local_248 = local_248 + 1;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < local_248)
            goto LAB_14803b77a;
            uVar20 = ((uint *)((longlong)FVar25 + 4))[lVar18];
          }
          uStack_244 = -uVar20 & uVar20;
          uVar23 = (ulonglong)uStack_244 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_1d4 = (int)lVar18;
          uStack_234 = iStack_230 + -1 + local_1d4;
          if ((int)local_80 < (int)uStack_234) {
LAB_14803b77a:
            uStack_234 = local_80;
          }
        }
        local_238 = 0xffffffff;
        local_1a0 = (longlong *)local_a8;
        local_198._padding_ = CONCAT44(uStack_244,local_248);
        local_198.CurrentBitIndex = uStack_234;
        local_198.UnvisitedBitMask = 0xffffffff;
        local_198._28_4_ = uStack_22c;
        local_198.BaseBitIndex = iStack_230;
        uVar20 = uStack_234;
        local_198.Array = pTStack_240;
        if ((int)uStack_234 < (int)local_80) {
          do {
            lVar18 = *local_1a0;
            lVar27 = (longlong)(int)uVar20;
            uVar23 = *(ulonglong *)(lVar18 + lVar27 * 0x10);
            uVar21 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
            uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
            uVar21 = (uVar21 >> 0x10 ^ uVar21) & local_60 - 1;
            *(uint *)(lVar18 + 0xc + lVar27 * 0x10) = uVar21;
            FVar17.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar17.Data = local_68.Data;
            }
            uVar23 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar21;
            *(undefined4 *)(lVar18 + 8 + lVar27 * 0x10) = *(undefined4 *)(FVar17.Data + uVar23 * 4);
            *(uint *)(FVar17.Data + uVar23 * 4) = uVar20;
            local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
            uVar20 = local_198.CurrentBitIndex;
          } while (local_198.CurrentBitIndex < (local_198.Array)->NumBits);
        }
      }
    }
  }
  iVar8 = *(int *)&(pFVar12->AllNetworkObjects).Elements.field_0x28;
  local_250 = (ForElementType<unsigned_int>)&(pFVar12->AllNetworkObjects).Elements.field_0x10;
  local_1e8 = 0;
  iStack_200 = 0;
  iStack_1ec = 0;
  uStack_1fc = 1;
  if (iVar8 != 0) {
    puVar28 = *(uint **)&(pFVar12->AllNetworkObjects).Elements.field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)local_250;
    }
    uStack_1fc = *puVar28;
    while (uStack_1fc == 0) {
      lVar18 = (longlong)iStack_200;
      local_1e8 = local_1e8 + 0x20;
      iStack_200 = iStack_200 + 1;
      iStack_1ec = iVar8;
      uStack_1fc = 1;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200) goto LAB_14803b8de;
      uStack_1fc = puVar28[lVar18 + 1];
    }
    uStack_1fc = -uStack_1fc & uStack_1fc;
    uVar23 = (ulonglong)uStack_1fc * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1d0 = (int)lVar18;
    iStack_1ec = local_1d0 + -1 + local_1e8;
    if (iVar8 < iStack_1ec) {
      iStack_1ec = iVar8;
    }
  }
LAB_14803b8de:
  uStack_1e4 = local_ac;
  iStack_1e0 = *(int *)&(pFVar12->AllNetworkObjects).Elements.field_0x8 -
               *(int *)&(pFVar12->AllNetworkObjects).Elements.field_0x34;
  uVar20 = *(uint *)&(pFVar12->AllNetworkObjects).Elements.field_0x28;
  TStack_140._padding_ = CONCAT44(uStack_1fc,iStack_200);
  uStack_1f0 = 0xffffffff;
  uVar21 = uVar20 & 0xffffffe0;
  TStack_140.CurrentBitIndex = iStack_1ec;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar20 >> 5;
  TStack_140._28_4_ = local_ac;
  TStack_140.BaseBitIndex = local_1e8;
  uStack_120 = CONCAT44(uStack_1dc,iStack_1e0);
  local_264 = uVar20;
  local_208 = pFVar12;
  local_1f8 = (undefined1 *)local_250;
  local_148 = pFVar12;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_250;
  if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar12 = local_1b8;
  FVar25 = local_250;
  uVar1 = *(int *)((longlong)local_250 + 0x18);
  if (uVar20 != uVar1) {
    FVar24 = *(ForElementType<unsigned_int> *)((longlong)local_250 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_250 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_250;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar22 * 4);
    while (uVar20 == 0) {
      lVar18 = (longlong)iVar22;
      uVar21 = uVar21 + 0x20;
      iVar22 = iVar22 + 1;
      uVar20 = uVar1;
      local_264 = uVar1;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14803ba00;
      uVar20 = *(uint *)((undefined1 *)((longlong)FVar24 + 4) + lVar18 * 4);
    }
    uVar23 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1cc = (int)lVar18;
    uVar20 = local_1cc + -1 + uVar21;
    local_264 = uVar20;
    if ((int)uVar1 < (int)uVar20) {
      uVar20 = uVar1;
      local_264 = uVar1;
    }
  }
LAB_14803ba00:
  while( true ) {
    pFVar5 = local_148;
    FVar9 = FVar19.ComparisonIndex.Value;
    if (*(int *)&(local_148->AllNetworkObjects).Elements.field_0x8 -
        *(int *)&(local_148->AllNetworkObjects).Elements.field_0x34 != (int)uStack_120) {
      local_267 = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_267);
    }
    if (((TStack_140.CurrentBitIndex == uVar20) &&
        ((ForElementType<unsigned_int>)TStack_140.Array == FVar25)) && (pFVar5 == pFVar12)) break;
    lVar18 = *(longlong *)
              (*(longlong *)&(pFVar5->AllNetworkObjects).Elements +
              (longlong)TStack_140.CurrentBitIndex * 0x18);
    if (((lVar18 != 0) &&
        (pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar18 + 8)), pUVar14 != (UObject *)0x0))
       && (1 < (byte)pUVar14[9].field_0x1)) {
      if (local_74 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,FVar9.Value,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
                           (int *)(local_a8 + 0xc));
        iVar22 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),FVar9.Value);
        FVar24 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
        if (local_88 != (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_88;
        }
        bVar16 = (byte)iVar22 & 0x1f;
        if (iVar22 < 0) {
          iVar22 = iVar22 + 0x1f;
          bVar16 = bVar16 - 0x20;
        }
        puVar28 = (uint *)((longlong)FVar24 + (longlong)(iVar22 >> 5) * 4);
        *puVar28 = *puVar28 & ~(FVar9.Value << (bVar16 & 0x1f));
        iVar22 = local_78;
      }
      else {
        local_74 = local_74 + -1;
        iVar22 = *(int *)(local_a8._0_8_ + (longlong)local_78 * 0x10 + 4);
        iVar8 = local_78;
        if (local_74 != 0) {
          *(undefined4 *)(local_a8._0_8_ + (longlong)iVar22 * 0x10) = 0xffffffff;
        }
      }
      local_78 = iVar22;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_a8,&local_e8,iVar8);
      if (local_e8.Pointer != (ulonglong *)0x0) {
        *(UObject **)local_e8.Pointer = pUVar14;
        *(undefined4 *)((longlong)local_e8.Pointer + 8) = 0xffffffff;
      }
      uVar23 = *(ulonglong *)local_e8.Pointer;
      uVar20 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
      uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
      uVar20 = uVar20 >> 0x10 ^ uVar20;
      if ((local_a8._8_4_ - local_74 != 1) && (local_a8._8_4_ != local_74)) {
        FVar17.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_68.Data;
        }
        for (iVar8 = *(int *)(FVar17.Data + (ulonglong)(local_60 - 1 & uVar20) * 4); iVar8 != -1;
            iVar8 = *(int *)(local_a8._0_8_ + (longlong)iVar8 * 0x10 + 8)) {
          if (*(ulonglong *)(local_a8._0_8_ + (longlong)iVar8 * 0x10) == uVar23) {
            if (iVar8 != -1) {
              *(ulonglong *)(local_a8._0_8_ + (longlong)iVar8 * 0x10) = uVar23;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_a8,local_e8.Index,local_260.ComparisonIndex.Value);
              FVar19 = local_260;
              uVar20 = local_264;
              goto LAB_14803bce6;
            }
            break;
          }
        }
      }
      uVar21 = local_a8._8_4_ - local_74;
      FVar9.Value = local_260.ComparisonIndex.Value;
      if (3 < uVar21) {
        uVar23 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_1c8 = (undefined4)lVar18;
        FVar9.Value = local_260.ComparisonIndex.Value << ((byte)lVar18 & 0x1f);
      }
      if (((int)uVar21 < 1) || ((int)FVar9.Value <= (int)local_60)) {
        uVar20 = local_60 - 1 & uVar20;
        *(uint *)((longlong)local_e8.Pointer + 0xc) = uVar20;
        FVar17.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_68.Data;
        }
        uVar23 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)((longlong)local_e8.Pointer + 8) = *(undefined4 *)(FVar17.Data + uVar23 * 4);
        *(int *)(FVar17.Data + uVar23 * 4) = local_e8.Index;
        FVar19 = local_260;
        uVar20 = local_264;
      }
      else {
        local_60 = FVar9.Value;
        TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_a8);
        FVar19 = local_260;
        uVar20 = local_264;
      }
    }
LAB_14803bce6:
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  QueryPerformanceCounter(&local_1b0);
  uVar20 = local_80;
  FVar19 = local_220;
  iStack_170 = 0;
  local_158 = 0;
  uStack_15c = 0;
  if (local_80 != 0) {
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_88;
    }
    uVar21 = *(uint *)FVar25;
    while (uVar21 == 0) {
      lVar18 = (longlong)iStack_170;
      local_158 = local_158 + 0x20;
      iStack_170 = iStack_170 + 1;
      uStack_15c = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_170)
      goto LAB_14803bdb1;
      uVar21 = ((uint *)((longlong)FVar25 + 4))[lVar18];
    }
    FVar9.Value = -uVar21 & uVar21;
    uVar23 = (ulonglong)FVar9.Value * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1c4 = (int)lVar18;
    uStack_15c = local_1c4 + -1 + local_158;
    if ((int)local_80 < (int)uStack_15c) {
      uStack_15c = local_80;
    }
  }
LAB_14803bdb1:
  local_178 = (longlong *)local_a8;
  iStack_154 = iStack_1ec;
  local_168 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uVar21 = local_80 & 0xffffffe0;
  iStack_150 = local_a8._8_4_ - local_74;
  uStack_160 = 0xffffffff;
  TStack_110.CurrentBitIndex = uStack_15c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._padding_ = CONCAT44(FVar9.Value,iStack_170);
  iVar8 = (int)local_80 >> 5;
  TStack_110._28_4_ = iStack_1ec;
  TStack_110.BaseBitIndex = local_158;
  uStack_f0 = CONCAT44(uStack_14c,iStack_150);
  bVar16 = (byte)local_80;
  uStack_16c = FVar9.Value;
  local_118 = local_178;
  TStack_110.Array = local_168;
  if (((int)local_80 < 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar20 != local_80) {
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
    if (local_88 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_88;
    }
    uVar20 = -1 << (bVar16 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar8 * 4);
    while (uVar20 == 0) {
      lVar18 = (longlong)iVar8;
      uVar21 = uVar21 + 0x20;
      iVar8 = iVar8 + 1;
      uVar20 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_14803bed3;
      uVar20 = ((uint *)((longlong)FVar25 + 4))[lVar18];
    }
    uVar23 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1c0 = (int)lVar18;
    uVar20 = local_1c0 + -1 + uVar21;
    if ((int)local_80 < (int)uVar20) {
      uVar20 = local_80;
    }
  }
LAB_14803bed3:
  while( true ) {
    plVar15 = local_118;
    if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
      local_266[0] = 0;
      `TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_266);
    }
    if (((TStack_110.CurrentBitIndex == uVar20) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar15 == (longlong *)local_a8)) break;
    AActor::FlushNetDormancy(*(AActor **)(*plVar15 + (longlong)TStack_110.CurrentBitIndex * 0x10));
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  QueryPerformanceCounter(&local_1a8);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar15 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"net.DormancyHysteresis",1);
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0xd0))(plVar15);
  }
  if (2 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
LAB_14803c05f:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// NetDriverExec @ 148044590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl NetDriverExec(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  FName *pFVar8;
  UNetDriver *pUVar9;
  FWorldContext *pFVar10;
  size_t sVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_188 [32];
  wchar_t *local_158;
  FName local_150;
  wchar_t local_148 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar4 = 0;
  local_158 = param_2;
  bVar3 = FParse::Command(&local_158,L"NET",true);
  if (bVar3) {
    uVar13 = 0;
    bVar3 = FParse::Token(&local_158,local_148,0x80,true,L'\0');
    if (bVar3) {
      pFVar8 = FName::FName(&local_150,local_148);
      pUVar9 = UEngine::FindNamedNetDriver(GEngine,param_1,*pFVar8);
      if (pUVar9 == (UNetDriver *)0x0) {
        pFVar10 = UEngine::GetWorldContextFromWorldChecked(GEngine,param_1);
        sVar11 = wcslen(local_148);
        local_158 = local_158 + -(longlong)(int)sVar11;
        uVar14 = uVar13;
        if (0 < (pFVar10->ActiveNetDrivers).ArrayNum) {
          do {
            uVar12 = (uint)uVar13;
            uVar7 = 0;
            if ((int)uVar12 < (pFVar10->ActiveNetDrivers).ArrayNum) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            lVar1 = *(longlong *)((pFVar10->ActiveNetDrivers).AllocatorInstance.Data + uVar14);
            if (lVar1 != 0) {
              bVar6 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))
                                (lVar1 + 0x28,param_1,local_158,param_3);
              bVar4 = bVar4 | bVar6;
            }
            uVar13 = (ulonglong)(uVar12 + 1);
            uVar14 = uVar14 + 0x10;
          } while ((int)(uVar12 + 1) < (pFVar10->ActiveNetDrivers).ArrayNum);
        }
      }
      else {
        bVar4 = (**(code **)(pUVar9->_padding_ + 8))(&pUVar9->_padding_,param_1,local_158,param_3);
      }
    }
    else {
      bVar4 = 0;
    }
  }
  else {
    bVar4 = 0;
  }
  return (bool)bVar4;
}

// ShouldEnableScopeSecondsTimers @ 148063110

bool __cdecl ShouldEnableScopeSecondsTimers(void)

{
  return true;
}

// Z_Construct_UClass_ABandwidthTestActor_NoRegister @ 148072000

UClass * __cdecl Z_Construct_UClass_ABandwidthTestActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BandwidthTestActor",
               &Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton,
               ABandwidthTestActor::StaticRegisterNativesABandwidthTestActor,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ABandwidthTestActor>,
               InternalVTableHelperCtorCaller<ABandwidthTestActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABandwidthTestActor.InnerSingleton;
}

// Z_Construct_UClass_UDataStreamChannel_NoRegister @ 1480720c0

UClass * __cdecl Z_Construct_UClass_UDataStreamChannel_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UDataStreamChannel::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataStreamChannel",
               &Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton,
               UDataStreamChannel::StaticRegisterNativesUDataStreamChannel,0x2098,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataStreamChannel>,
               InternalVTableHelperCtorCaller<UDataStreamChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton;
}

// Z_Construct_UClass_UEngineReplicationBridge_NoRegister @ 148072180

UClass * __cdecl Z_Construct_UClass_UEngineReplicationBridge_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineReplicationBridge",
               &Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton,
               UEngineReplicationBridge::StaticRegisterNativesUEngineReplicationBridge,0x6d0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UEngineReplicationBridge>,
               InternalVTableHelperCtorCaller<UEngineReplicationBridge>,local_res8,
               UObjectReplicationBridge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton;
}

// Z_Construct_UClass_UNetActorFactory_NoRegister @ 148072240

UClass * __cdecl Z_Construct_UClass_UNetActorFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetActorFactory",
               &Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton,
               UNetActorFactory::StaticRegisterNativesUNetActorFactory,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetActorFactory>,
               InternalVTableHelperCtorCaller<UNetActorFactory>,local_res8,
               UNetObjectFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton;
}

// Z_Construct_UClass_UNetDriver_NoRegister @ 148072300

UClass * __cdecl Z_Construct_UClass_UNetDriver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetDriver",&Z_Registration_Info_UClass_UNetDriver.InnerSingleton,
               UNetDriver::StaticRegisterNativesUNetDriver,0xa58,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetDriver>,InternalVTableHelperCtorCaller<UNetDriver>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetDriver.InnerSingleton;
}

// Z_Construct_UClass_UNetFaultConfig_NoRegister @ 1480723b0

UClass * __cdecl Z_Construct_UClass_UNetFaultConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetFaultConfig",
               &Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton,
               UNetFaultConfig::StaticRegisterNativesUNetFaultConfig,0x98,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetFaultConfig>,InternalVTableHelperCtorCaller<UNetFaultConfig>,
               local_res8,UEscalationManagerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton;
}

// Z_Construct_UClass_UNetSubObjectFactory_NoRegister @ 148072470

UClass * __cdecl Z_Construct_UClass_UNetSubObjectFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetSubObjectFactory",
               &Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton,
               UNetSubObjectFactory::StaticRegisterNativesUNetSubObjectFactory,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetSubObjectFactory>,
               InternalVTableHelperCtorCaller<UNetSubObjectFactory>,local_res8,
               UNetObjectFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton;
}

// Z_Construct_UClass_UNetworkSettings_NoRegister @ 148072530

UClass * __cdecl Z_Construct_UClass_UNetworkSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkSettings",
               &Z_Registration_Info_UClass_UNetworkSettings.InnerSingleton,
               UNetworkSettings::StaticRegisterNativesUNetworkSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkSettings>,
               InternalVTableHelperCtorCaller<UNetworkSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkSettings.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPacketSimulationSettings @ 1480725f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPacketSimulationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.InnerSingleton;
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

// OnNetworkCheatDetected'' @ 1503f5100

void __cdecl `dynamic_atexit_destructor_for_'FNetDelegates::OnNetworkCheatDetected__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnNetworkCheatDetected,(FWriteAccessScope *)&local_28);
  if ((FNetDelegates::OnNetworkCheatDetected._16_4_ != 0) &&
     (FNetDelegates::OnNetworkCheatDetected._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetDelegates::OnNetworkCheatDetected._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FNetDelegates::OnNetworkCheatDetected.field_0x8,0,0,0x10);
    FNetDelegates::OnNetworkCheatDetected._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FNetDelegates::OnNetworkCheatDetected._8_8_ != 0) {
    FMemory::Free((void *)FNetDelegates::OnNetworkCheatDetected._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetDelegates::OnNetworkCheatDetected);
  return;
}

// OnPendingNetGameConnectionCreated'' @ 1503f51a0

void __cdecl
`dynamic_atexit_destructor_for_'FNetDelegates::OnPendingNetGameConnectionCreated__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FNetDelegates::OnPendingNetGameConnectionCreated._8_8_,
             FNetDelegates::OnPendingNetGameConnectionCreated._16_4_);
  if (FNetDelegates::OnPendingNetGameConnectionCreated._8_8_ != 0) {
    FMemory::Free((void *)FNetDelegates::OnPendingNetGameConnectionCreated._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetDelegates::OnPendingNetGameConnectionCreated);
  return;
}

// OnReceivedNetworkEncryptionAck'' @ 1503f51e0

void __cdecl `dynamic_atexit_destructor_for_'FNetDelegates::OnReceivedNetworkEncryptionAck__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnReceivedNetworkEncryptionAck,(FWriteAccessScope *)&local_28);
  if ((FNetDelegates::OnReceivedNetworkEncryptionAck._16_4_ != 0) &&
     (FNetDelegates::OnReceivedNetworkEncryptionAck._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetDelegates::OnReceivedNetworkEncryptionAck._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FNetDelegates::OnReceivedNetworkEncryptionAck.field_0x8,0,0,
               0x10);
    FNetDelegates::OnReceivedNetworkEncryptionAck._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FNetDelegates::OnReceivedNetworkEncryptionAck._8_8_ != 0) {
    FMemory::Free((void *)FNetDelegates::OnReceivedNetworkEncryptionAck._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetDelegates::OnReceivedNetworkEncryptionAck);
  return;
}

// OnReceivedNetworkEncryptionFailure'' @ 1503f5280

void __cdecl
`dynamic_atexit_destructor_for_'FNetDelegates::OnReceivedNetworkEncryptionFailure__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnReceivedNetworkEncryptionFailure,(FWriteAccessScope *)&local_28);
  if ((FNetDelegates::OnReceivedNetworkEncryptionFailure._16_4_ != 0) &&
     (FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FNetDelegates::OnReceivedNetworkEncryptionFailure.field_0x8,0,0
               ,0x10);
    FNetDelegates::OnReceivedNetworkEncryptionFailure._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_ != 0) {
    FMemory::Free((void *)FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetDelegates::OnReceivedNetworkEncryptionFailure);
  return;
}

// OnReceivedNetworkEncryptionToken'' @ 1503f5320

void __cdecl `dynamic_atexit_destructor_for_'FNetDelegates::OnReceivedNetworkEncryptionToken__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnReceivedNetworkEncryptionToken,(FWriteAccessScope *)&local_28);
  if ((FNetDelegates::OnReceivedNetworkEncryptionToken._16_4_ != 0) &&
     (FNetDelegates::OnReceivedNetworkEncryptionToken._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetDelegates::OnReceivedNetworkEncryptionToken._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FNetDelegates::OnReceivedNetworkEncryptionToken.field_0x8,0,0,
               0x10);
    FNetDelegates::OnReceivedNetworkEncryptionToken._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FNetDelegates::OnReceivedNetworkEncryptionToken._8_8_ != 0) {
    FMemory::Free((void *)FNetDelegates::OnReceivedNetworkEncryptionToken._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetDelegates::OnReceivedNetworkEncryptionToken);
  return;
}

// OnSyncLoadDetected'' @ 1503f53c0

void __cdecl `dynamic_atexit_destructor_for_'FNetDelegates::OnSyncLoadDetected__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FNetDelegates::OnSyncLoadDetected._8_8_,FNetDelegates::OnSyncLoadDetected._16_4_);
  if (FNetDelegates::OnSyncLoadDetected._8_8_ != 0) {
    FMemory::Free((void *)FNetDelegates::OnSyncLoadDetected._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FNetDelegates::OnSyncLoadDetected);
  return;
}

// `dynamic_atexit_destructor_for_'Attrib_NumClients'' @ 1503f5400

void __cdecl
`UNetDriver::UpdateCrashContext'::__l2::_dynamic_atexit_destructor_for__Attrib_NumClients__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Attrib_NumClients.Data.AllocatorInstance.Data;
  if (Attrib_NumClients.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Attrib_NumClients.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarActorChannelPool'' @ 1503f5420

void __cdecl _dynamic_atexit_destructor_for__CVarActorChannelPool__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarActorChannelPool);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAddNetDriverInfoToNetAnalytics'' @ 1503f5440

void __cdecl _dynamic_atexit_destructor_for__CVarAddNetDriverInfoToNetAnalytics__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAddNetDriverInfoToNetAnalytics)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowReliableMulticastToNonRelevantChannels'' @ 1503f5460

void __cdecl _dynamic_atexit_destructor_for__CVarAllowReliableMulticastToNonRelevantChannels__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowReliableMulticastToNonRelevantChannels);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysCreateLevelFilteringGroupsForPersistentLevels'' @ 1503f5480

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CVarAlwaysCreateLevelFilteringGroupsForPersistentLevels__(void)

{
  CVarAlwaysCreateLevelFilteringGroupsForPersistentLevels._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAlwaysCreateLevelFilteringGroupsForPersistentLevels);
  return;
}

// `dynamic_atexit_destructor_for_'CVarClientIncomingBunchFrameTimeLimitMS'' @ 1503f54a0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarClientIncomingBunchFrameTimeLimitMS__(void)

{
  CVarClientIncomingBunchFrameTimeLimitMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarClientIncomingBunchFrameTimeLimitMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableActorCountInStats'' @ 1503f54c0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableActorCountInStats__(void)

{
  CVarEnableActorCountInStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableActorCountInStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableActorLevelChanges'' @ 1503f54e0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarEnableActorLevelChanges__(void)

{
  CVarEnableActorLevelChanges._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableActorLevelChanges);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableDynamicNetUpdateFrequency'' @ 1503f5500

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarEnableDynamicNetUpdateFrequency__(void)

{
  CVarEnableDynamicNetUpdateFrequency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableDynamicNetUpdateFrequency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNetStats'' @ 1503f5520

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNetStats__(void)

{
  CVarEnableNetStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNetStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableSupportForNoPawnConnection'' @ 1503f5540

void __cdecl _dynamic_atexit_destructor_for__CVarEnableSupportForNoPawnConnection__(void)

{
  CVarEnableSupportForNoPawnConnection._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableSupportForNoPawnConnection);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFilterGuidRemapping'' @ 1503f5560

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarFilterGuidRemapping__(void)

{
  CVarFilterGuidRemapping._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFilterGuidRemapping);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIrisPacketSequenceSafetyMargin'' @ 1503f5580

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarIrisPacketSequenceSafetyMargin__(void)

{
  CVarIrisPacketSequenceSafetyMargin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIrisPacketSequenceSafetyMargin)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogPendingGuidsOnShutdown'' @ 1503f55a0

void __cdecl _dynamic_atexit_destructor_for__CVarLogPendingGuidsOnShutdown__(void)

{
  CVarLogPendingGuidsOnShutdown._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogPendingGuidsOnShutdown);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxClientGuidRemaps'' @ 1503f55c0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxClientGuidRemaps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxClientGuidRemaps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinimumNumberOfPacketsForBurstTracking'' @ 1503f55e0

void __cdecl
NetAnalyticsCVars::_dynamic_atexit_destructor_for__CVarMinimumNumberOfPacketsForBurstTracking__
          (void)

{
  CVarMinimumNumberOfPacketsForBurstTracking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMinimumNumberOfPacketsForBurstTracking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetAllowEncryption'' @ 1503f5600

void __cdecl _dynamic_atexit_destructor_for__CVarNetAllowEncryption__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetAllowEncryption);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetCleanUpRenamedDynamicActors'' @ 1503f5620

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetCleanUpRenamedDynamicActors__(void)

{
  CVarNetCleanUpRenamedDynamicActors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetCleanUpRenamedDynamicActors)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetControlChannelDestructionInfo'' @ 1503f5640

void __cdecl _dynamic_atexit_destructor_for__CVarNetControlChannelDestructionInfo__(void)

{
  CVarNetControlChannelDestructionInfo._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetControlChannelDestructionInfo);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDebugDraw'' @ 1503f5660

void __cdecl _dynamic_atexit_destructor_for__CVarNetDebugDraw__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDebugDraw);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDebugDrawCullDistance'' @ 1503f5680

void __cdecl _dynamic_atexit_destructor_for__CVarNetDebugDrawCullDistance__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDebugDrawCullDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDisableRandomNetUpdateDelay'' @ 1503f56a0

void __cdecl _dynamic_atexit_destructor_for__CVarNetDisableRandomNetUpdateDelay__(void)

{
  CVarNetDisableRandomNetUpdateDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDisableRandomNetUpdateDelay)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDiscardTornOffActorRPCs'' @ 1503f56c0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetDiscardTornOffActorRPCs__(void)

{
  CVarNetDiscardTornOffActorRPCs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDiscardTornOffActorRPCs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDormancyValidate'' @ 1503f56e0

void __cdecl _dynamic_atexit_destructor_for__CVarNetDormancyValidate__(void)

{
  CVarNetDormancyValidate._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDormancyValidate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDriverReportTickFlushTime'' @ 1503f5700

void __cdecl _dynamic_atexit_destructor_for__CVarNetDriverReportTickFlushTime__(void)

{
  CVarNetDriverReportTickFlushTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDriverReportTickFlushTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetRequiredEncryptionNetDriverDefNames'' @ 1503f5720

void __cdecl
UE::Net::_dynamic_atexit_destructor_for__CVarNetRequiredEncryptionNetDriverDefNames__(void)

{
  CVarNetRequiredEncryptionNetDriverDefNames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetRequiredEncryptionNetDriverDefNames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetResetAckStatePostSeamlessTravel'' @ 1503f5740

void __cdecl _dynamic_atexit_destructor_for__CVarNetResetAckStatePostSeamlessTravel__(void)

{
  CVarNetResetAckStatePostSeamlessTravel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetResetAckStatePostSeamlessTravel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetReuseReplicatorsForDormantObjects'' @ 1503f5760

void __cdecl _dynamic_atexit_destructor_for__CVarNetReuseReplicatorsForDormantObjects__(void)

{
  CVarNetReuseReplicatorsForDormantObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetReuseReplicatorsForDormantObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetSendDormantDestructionOnRemoval'' @ 1503f5780

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetSendDormantDestructionOnRemoval__(void)

{
  CVarNetSendDormantDestructionOnRemoval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetSendDormantDestructionOnRemoval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetSerializeNewActorOverrideLevel'' @ 1503f57a0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetSerializeNewActorOverrideLevel__(void)

{
  CVarNetSerializeNewActorOverrideLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetSerializeNewActorOverrideLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetTrackDormantObjectsByLevel'' @ 1503f57c0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetTrackDormantObjectsByLevel__(void)

{
  CVarNetTrackDormantObjectsByLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetTrackDormantObjectsByLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetUpdateReplicationSystemWithNoConnections'' @ 1503f57e0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetUpdateReplicationSystemWithNoConnections__
          (void)

{
  CVarNetUpdateReplicationSystemWithNoConnections._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetUpdateReplicationSystemWithNoConnections);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumberOfDroppedPacketsToConsiderBurst'' @ 1503f5800

void __cdecl
NetAnalyticsCVars::_dynamic_atexit_destructor_for__CVarNumberOfDroppedPacketsToConsiderBurst__(void)

{
  CVarNumberOfDroppedPacketsToConsiderBurst._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNumberOfDroppedPacketsToConsiderBurst);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOptimizedRemapping'' @ 1503f5820

void __cdecl _dynamic_atexit_destructor_for__CVarOptimizedRemapping__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOptimizedRemapping);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPercentOfDroppedPacketsToConsiderBurst'' @ 1503f5840

void __cdecl
NetAnalyticsCVars::_dynamic_atexit_destructor_for__CVarPercentOfDroppedPacketsToConsiderBurst__
          (void)

{
  CVarPercentOfDroppedPacketsToConsiderBurst._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarPercentOfDroppedPacketsToConsiderBurst);
  return;
}

// `dynamic_atexit_destructor_for_'CVarProfilerUseComparisonTracking'' @ 1503f5860

void __cdecl _dynamic_atexit_destructor_for__CVarProfilerUseComparisonTracking__(void)

{
  CVarProfilerUseComparisonTracking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarProfilerUseComparisonTracking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRelinkMappedReferences'' @ 1503f5880

void __cdecl _dynamic_atexit_destructor_for__CVarRelinkMappedReferences__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRelinkMappedReferences);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRepManagerEnable'' @ 1503f58a0

void __cdecl _dynamic_atexit_destructor_for__CVarRepManagerEnable__(void)

{
  CVarRepManagerEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRepManagerEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplicationWriterMaxAllowedPacketsIfNotHugeObject'' @ 1503f58c0

void __cdecl
UE::Net::Private::
_dynamic_atexit_destructor_for__CVarReplicationWriterMaxAllowedPacketsIfNotHugeObject__(void)

{
  CVarReplicationWriterMaxAllowedPacketsIfNotHugeObject._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarReplicationWriterMaxAllowedPacketsIfNotHugeObject);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSerializeNewActorMaxBunchSize'' @ 1503f58e0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarSerializeNewActorMaxBunchSize__(void)

{
  CVarSerializeNewActorMaxBunchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSerializeNewActorMaxBunchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSetNetDormancyEnabled'' @ 1503f5900

void __cdecl _dynamic_atexit_destructor_for__CVarSetNetDormancyEnabled__(void)

{
  CVarSetNetDormancyEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSetNetDormancyEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseAdaptiveNetUpdateFrequency'' @ 1503f5920

void __cdecl _dynamic_atexit_destructor_for__CVarUseAdaptiveNetUpdateFrequency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseAdaptiveNetUpdateFrequency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWarnWhenOuterIsReplaced'' @ 1503f5940

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarWarnWhenOuterIsReplaced__(void)

{
  CVarWarnWhenOuterIsReplaced._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarWarnWhenOuterIsReplaced);
  return;
}

// `dynamic_atexit_destructor_for_'CrashContext_ReplicationModel'' @ 1503f5960

void __cdecl
`UNetDriver::UpdateCrashContext'::__l2::
_dynamic_atexit_destructor_for__CrashContext_ReplicationModel__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = CrashContext_ReplicationModel.Data.AllocatorInstance.Data;
  if (CrashContext_ReplicationModel.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (CrashContext_ReplicationModel.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CreateBandwidthGenerator'' @ 1503f5980

void __cdecl _dynamic_atexit_destructor_for__CreateBandwidthGenerator__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CreateBandwidthGenerator);
  return;
}

// `dynamic_atexit_destructor_for_'Delegate'' @ 1503f59a0

void __cdecl
`UReplicationDriver::CreateReplicationDriverDelegate'::__l2::
_dynamic_atexit_destructor_for__Delegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&::Delegate,
             (FWriteAccessScope *)&local_28);
  if ((::Delegate._16_4_ != 0) && (::Delegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)::Delegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&::Delegate.field_0x8,0,0,0x10);
    ::Delegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// `dynamic_atexit_destructor_for_'DumpActiveNetActorsCommand'' @ 1503f5a40

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__DumpActiveNetActorsCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpActiveNetActorsCommand);
  return;
}

// `dynamic_atexit_destructor_for_'DumpRelevantActorsCommand'' @ 1503f5a60

void __cdecl _dynamic_atexit_destructor_for__DumpRelevantActorsCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpRelevantActorsCommand);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 1503f5a80

void __cdecl
`UNetDriver::GetAsyncLoadDelinquencyAnalytics'::__l2::_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty.DelinquentAsyncLoads.AllDelinquents.HashSize = 0;
  if (::Empty.DelinquentAsyncLoads.AllDelinquents.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)::Empty.DelinquentAsyncLoads.AllDelinquents.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FDelinquencyNameTimePair>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDelinquencyNameTimePair>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Empty.DelinquentAsyncLoads.AllDelinquents.Elements);
  if (::Empty.DelinquentAsyncLoads.TopOffenders.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(::Empty.DelinquentAsyncLoads.TopOffenders.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GNetworkProfiler'' @ 1503f5ad0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__GNetworkProfiler__(void)

{
  FNetworkProfiler::~FNetworkProfiler(&GNetworkProfiler);
  return;
}

// `dynamic_atexit_destructor_for_'GRPCCSVTracker'' @ 1503f5af0

void __cdecl _dynamic_atexit_destructor_for__GRPCCSVTracker__(void)

{
  GRPCCSVTracker.FunctionMap._72_4_ = 0;
  if (GRPCCSVTracker.FunctionMap._64_8_ != 0) {
    FMemory::Free((void *)GRPCCSVTracker.FunctionMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UFunction_*,FRPCCSVTracker::FItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UFunction_*,FRPCCSVTracker::FItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UFunction_*,FRPCCSVTracker::FItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GRPCCSVTracker.FunctionMap);
  return;
}

// `dynamic_atexit_destructor_for_'GRequiredEncryptionNetDriverDefNames'' @ 1503f5b30

void __cdecl UE::Net::_dynamic_atexit_destructor_for__GRequiredEncryptionNetDriverDefNames__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GRequiredEncryptionNetDriverDefNames.AllocatorInstance.Data;
  if (GRequiredEncryptionNetDriverDefNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (GRequiredEncryptionNetDriverDefNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'GRequiredEncryptionNetDriverDefNames_Internal'' @ 1503f5b50

void __cdecl
UE::Net::_dynamic_atexit_destructor_for__GRequiredEncryptionNetDriverDefNames_Internal__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GRequiredEncryptionNetDriverDefNames_Internal.Data.AllocatorInstance.Data;
  if (GRequiredEncryptionNetDriverDefNames_Internal.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GRequiredEncryptionNetDriverDefNames_Internal.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GenerateBandwidth'' @ 1503f5b70

void __cdecl _dynamic_atexit_destructor_for__GenerateBandwidth__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GenerateBandwidth);
  return;
}

// `dynamic_atexit_destructor_for_'GenerateBandwidthSpike'' @ 1503f5b90

void __cdecl _dynamic_atexit_destructor_for__GenerateBandwidthSpike__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GenerateBandwidthSpike);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidConnection'' @ 1503f5bb0

void __cdecl
`FNetworkProfiler::SetCurrentConnection'::__l13::_dynamic_atexit_destructor_for__InvalidConnection__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidConnection.Data.AllocatorInstance.Data;
  if (InvalidConnection.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidConnection.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogNetSyncLoads'' @ 1503f5bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetSyncLoads__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetSyncLoads);
  return;
}

// `dynamic_atexit_destructor_for_'MaxConnectionsToTickPerServerFrame'' @ 1503f5bf0

void __cdecl NetCmds::_dynamic_atexit_destructor_for__MaxConnectionsToTickPerServerFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&MaxConnectionsToTickPerServerFrame)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'NetDriverExecRegistration'' @ 1503f5c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__NetDriverExecRegistration__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&NetDriverExecRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationDropAnyUnreliableFunction'' @ 1503f5c30

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationDropAnyUnreliableFunction__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropAnyUnreliableFunction);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationDropNothingFunction'' @ 1503f5c50

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationDropNothingFunction__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationDropNothingFunction);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationDropUnreliableOfActorClassFunction'' @ 1503f5c70

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationDropUnreliableOfActorClassFunction__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropUnreliableOfActorClassFunction);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationDropUnreliableOfSubObjectClassFunction'' @ 1503f5c90

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationDropUnreliableOfSubObjectClassFunction__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropUnreliableOfSubObjectClassFunction);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationDropUnreliableRPCFunction'' @ 1503f5cb0

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationDropUnreliableRPCFunction__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationDropUnreliableRPCFunction);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationOff'' @ 1503f5cd0

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationOff__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationOff);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktBufferBloatInMS'' @ 1503f5cf0

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationPktBufferBloatInMS__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktBufferBloatInMS);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktDup'' @ 1503f5d10

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktDup__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktDup);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktEmulationProfile'' @ 1503f5d30

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationPktEmulationProfile__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktEmulationProfile);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktIncomingBufferBloatInMS'' @ 1503f5d50

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationPktIncomingBufferBloatInMS__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&NetEmulationPktIncomingBufferBloatInMS);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktIncomingLagMax'' @ 1503f5d70

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationPktIncomingLagMax__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktIncomingLagMax);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktIncomingLagMin'' @ 1503f5d90

void __cdecl
UE::Net::Private::NetEmulationHelper::
_dynamic_atexit_destructor_for__NetEmulationPktIncomingLagMin__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktIncomingLagMin);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktIncomingLoss'' @ 1503f5db0

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktIncomingLoss__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktIncomingLoss);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktJitter'' @ 1503f5dd0

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktJitter__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktJitter);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktLag'' @ 1503f5df0

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktLag__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLag);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktLagMax'' @ 1503f5e10

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktLagMax__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLagMax);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktLagMin'' @ 1503f5e30

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktLagMin__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLagMin);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktLagVariance'' @ 1503f5e50

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktLagVariance__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLagVariance);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktLoss'' @ 1503f5e70

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktLoss__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktLoss);
  return;
}

// `dynamic_atexit_destructor_for_'NetEmulationPktOrder'' @ 1503f5e90

void __cdecl
UE::Net::Private::NetEmulationHelper::_dynamic_atexit_destructor_for__NetEmulationPktOrder__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&NetEmulationPktOrder);
  return;
}

// `dynamic_atexit_destructor_for_'PrintNetConnectionInfoCommand'' @ 1503f5eb0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__PrintNetConnectionInfoCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&PrintNetConnectionInfoCommand);
  return;
}

// `dynamic_atexit_destructor_for_'UnknownName'' @ 1503f5ed0

void __cdecl _dynamic_atexit_destructor_for__UnknownName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UnknownName.Data.AllocatorInstance.Data;
  if (UnknownName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UnknownName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_NetworkProfiler'' @ 1503f5ef0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_NetworkProfiler__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_NetworkProfiler.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_NetworkProfiler.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_NetworkProfiler.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_Replication'' @ 1503f5f10

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Replication__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Replication.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Replication.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_Replication.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_ReplicationRPCs'' @ 1503f5f30

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_ReplicationRPCs__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_ReplicationRPCs.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_ReplicationRPCs.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_ReplicationRPCs.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// operator() @ 150521a00

bool __thiscall
``UE::Net::FReplicationSystemUtil::AddDependentActor'::__l2::<lambda_2>::operator()'::__l11::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8922998478192246201>);
  if (bVar2) {
    if ((UObjectBaseUtility *)**(undefined8 **)this == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8922998478192246201>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150521a85;
    }
  }
  bVar2 = false;
LAB_150521a85:
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

