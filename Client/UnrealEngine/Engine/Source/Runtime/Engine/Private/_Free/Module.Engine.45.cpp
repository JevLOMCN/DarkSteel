// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 593

// `dynamic_initializer_for_'AddedConnections'' @ 141116f90

void __cdecl UE::Net::Metric::_dynamic_initializer_for__AddedConnections__(void)

{
  ::FName::FName(&AddedConnections,"AddedConnections");
  return;
}

// `dynamic_initializer_for_'AverageJitterInMS'' @ 141116fb0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__AverageJitterInMS__(void)

{
  ::FName::FName(&AverageJitterInMS,"AverageJitterInMS");
  return;
}

// `dynamic_initializer_for_'AvgPing'' @ 141116fd0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__AvgPing__(void)

{
  ::FName::FName(&AvgPing,"AvgPing");
  return;
}

// `dynamic_initializer_for_'CVarAllowAsyncLoading'' @ 141116ff0

void __cdecl _dynamic_initializer_for__CVarAllowAsyncLoading__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowAsyncLoading,L"net.AllowAsyncLoading",local_res8,
             L"Allow async loading of unloaded assets referenced in packets. If false the client will hitch and immediately load the asset, if true the packet will be delayed while the asset is async loaded. net.DelayUnmappedRPCs can be enabled to delay RPCs relying on async loading assets."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAsyncLoading__);
  return;
}

// `dynamic_initializer_for_'CVarAllowClientRemapCacheObject'' @ 141117040

void __cdecl _dynamic_initializer_for__CVarAllowClientRemapCacheObject__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowClientRemapCacheObject,L"net.AllowClientRemapCacheObject",
             &GbAllowClientRemapCacheObject,
             L"When enabled, we will allow clients to remap read only cache objects and keep the same NetGUID."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowClientRemapCacheObject__);
  return;
}

// `dynamic_initializer_for_'CVarAllowRPCDoSDetectionBlocking'' @ 141117090

void __cdecl _dynamic_initializer_for__CVarAllowRPCDoSDetectionBlocking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowRPCDoSDetectionBlocking,L"net.AllowRPCDoSDetectionBlocking",
             &GAllowRPCDoSDetectionBlocking,
             L"Overrides whether or not RPC DoS Detection RPC blocking is allowed. 0 = disabled, 1 = enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowRPCDoSDetectionBlocking__);
  return;
}

// `dynamic_initializer_for_'CVarAllowRPCDoSDetectionKicking'' @ 1411170e0

void __cdecl _dynamic_initializer_for__CVarAllowRPCDoSDetectionKicking__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowRPCDoSDetectionKicking,L"net.AllowRPCDoSDetectionKicking",local_res8,
             L"Overrides whether or not RPC DoS Detection kicking is enabled. 0 = disabled, 1 = enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowRPCDoSDetectionKicking__);
  return;
}

// `dynamic_initializer_for_'CVarDelinquencyNumberOfTopOffendersToTrack'' @ 141117130

void __cdecl _dynamic_initializer_for__CVarDelinquencyNumberOfTopOffendersToTrack__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDelinquencyNumberOfTopOffendersToTrack,
             L"net.DelinquencyNumberOfTopOffendersToTrack",&GDelinquencyNumberOfTopOffendersToTrack,
             L"When > 0 , this will be the number of \'TopOffenders\' that are tracked by the PackageMap and GuidCache for Queued Actors and Async Loads respectively. net.TrackAsyncLoadingGUIDThreshold / net.TrackQueuedActorThreshold still dictate whether or not any of these items are tracked."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDelinquencyNumberOfTopOffendersToTrack__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreNetworkChecksumMismatch'' @ 141117180

void __cdecl _dynamic_initializer_for__CVarIgnoreNetworkChecksumMismatch__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIgnoreNetworkChecksumMismatch,L"net.IgnoreNetworkChecksumMismatch",local_res8,
             L"If true, the integrity checksum on packagemap objects will be ignored, which can cause issues with out of sync data"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreNetworkChecksumMismatch__);
  return;
}

// `dynamic_initializer_for_'CVarIsNetGuidCacheHistoryEnabled'' @ 1411171d0

void __cdecl _dynamic_initializer_for__CVarIsNetGuidCacheHistoryEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIsNetGuidCacheHistoryEnabled,L"Net.NetGuidCacheHistoryEnabled",
             &bIsNetGuidCacheHistoryEnabled,
             L"When enabled, allows logging of NetGUIDCache History. Warning, this can eat up a lot of memory, and won\'t free itself until the Cache is destroyed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIsNetGuidCacheHistoryEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSerializedNetExportGroups'' @ 141117220

void __cdecl UE::Net::_dynamic_initializer_for__CVarMaxSerializedNetExportGroups__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSerializedNetExportGroups,L"net.MaxSerializedNetExportGroups",
             &MaxSerializedNetExportGroups,
             L"Maximum number of network export groups we would expect to receive in a bunch",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSerializedNetExportGroups__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSerializedNetExportsPerGroup'' @ 141117270

void __cdecl UE::Net::_dynamic_initializer_for__CVarMaxSerializedNetExportsPerGroup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSerializedNetExportsPerGroup,L"net.MaxSerializedNetExportsPerGroup",
             &MaxSerializedNetExportsPerGroup,
             L"Maximum number of network exports in each group we would expect to receive in a bunch"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSerializedNetExportsPerGroup__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSerializedNetGuids'' @ 1411172c0

void __cdecl UE::Net::_dynamic_initializer_for__CVarMaxSerializedNetGuids__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSerializedNetGuids,L"net.MaxSerializedNetGuids",&MaxSerializedNetGuids,
             L"Maximum number of network guids we would expect to receive in a bunch",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSerializedNetGuids__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSerializedReplayNetGuids'' @ 141117310

void __cdecl UE::Net::_dynamic_initializer_for__CVarMaxSerializedReplayNetGuids__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSerializedReplayNetGuids,L"net.MaxSerializedReplayNetGuids",
             &MaxSerializedReplayNetGuids,
             L"Maximum number of network guids we would expect to receive in replay export data.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarMaxSerializedReplayNetGuids__);
  return;
}

// `dynamic_initializer_for_'CVarNetCheckNoLoadPackages'' @ 141117360

void __cdecl _dynamic_initializer_for__CVarNetCheckNoLoadPackages__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetCheckNoLoadPackages,L"net.CheckNoLoadPackages",&GbNetCheckNoLoadPackages,
             L"If enabled, check the no load flag in GetObjectFromNetGUID before forcing a sync load on packages that are not marked IsFullyLoaded"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetCheckNoLoadPackages__);
  return;
}

// `dynamic_initializer_for_'CVarNetCurrentHandshakeVersion'' @ 1411173b0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetCurrentHandshakeVersion__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetCurrentHandshakeVersion,L"net.CurrentHandshakeVersion",&CurrentHandshakeVersion
             ,L"The current supported stateless handshake protocol version (numeric)",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetCurrentHandshakeVersion__);
  return;
}

// `dynamic_initializer_for_'CVarNetDoHandshakeVersionFallback'' @ 141117400

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetDoHandshakeVersionFallback__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetDoHandshakeVersionFallback,L"net.DoHandshakeVersionFallback",local_res8,
             L"Whether or not to (clientside) perform randomized falling-back to previous versions of the handshake protocol, upon failure."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDoHandshakeVersionFallback__);
  return;
}

// `dynamic_initializer_for_'CVarNetHandshakeEnforceNetworkCLVersion'' @ 141117450

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetHandshakeEnforceNetworkCLVersion__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetHandshakeEnforceNetworkCLVersion,L"net.HandshakeEnforceNetworkCLVersion",
             &GHandshakeEnforceNetworkCLVersion,
             L"Whether or not the stateless handshake should enforce the Network CL version, instead of the higher level netcode."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetHandshakeEnforceNetworkCLVersion__);
  return;
}

// `dynamic_initializer_for_'CVarNetHandshakeResendInterval'' @ 1411174a0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetHandshakeResendInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetHandshakeResendInterval,L"net.HandshakeResendInterval",&HandshakeResendInterval
             ,
             L"The delay between resending handshake packets which we have not received a response for."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetHandshakeResendInterval__);
  return;
}

// `dynamic_initializer_for_'CVarNetMagicHeader'' @ 1411174f0

void __cdecl _dynamic_initializer_for__CVarNetMagicHeader__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarNetMagicHeader,L"net.MagicHeader",&local_18,
             L"String representing binary bits which are prepended to every packet sent by the game. Max length: 32 bits."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarNetMagicHeader__);
  return;
}

// `dynamic_initializer_for_'CVarNetMinHandshakeVersion'' @ 141117560

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetMinHandshakeVersion__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetMinHandshakeVersion,L"net.MinHandshakeVersion",&MinSupportedHandshakeVersion,
             L"The minimum supported stateless handshake protocol version (numeric).",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetMinHandshakeVersion__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingDebugDump'' @ 1411175b0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetPingDebugDump__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPingDebugDump,L"net.NetPingDebugDump",&GNetPingDebugDump,
             L"Whether or not to dump NetPing ping values to log every 5 seconds.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPingDebugDump__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingEnabled'' @ 141117600

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetPingEnabled__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetPingEnabled,L"net.NetPingEnabled",local_res8,
             L"Whether or not the NetPing ping handling interface is enabled. Used for centralized ping tracking, and ICMP/UDP ping. (Valid values: 0 = Off, 1 = Enabled for client, 2 = Enabled for server and client, 3 = Enabled for server only)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPingEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingICMPInterval'' @ 141117650

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetPingICMPInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPingICMPInterval,L"net.NetPingICMPInterval",&GNetPingICMPInterval,
             L"Specifies the interval (in seconds) for performing ICMP pings.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPingICMPInterval__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingTimeoutDisableThreshold'' @ 1411176a0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetPingTimeoutDisableThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0xf;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetPingTimeoutDisableThreshold,L"net.NetPingTimeoutDisableThreshold",local_res8,
             L"The number of times to send an ICMP/UDP ping when at a failure/timeout rate of 100%, before giving up and disabling pings."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPingTimeoutDisableThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingTypes'' @ 1411176f0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetPingTypes__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarNetPingTypes,L"net.NetPingTypes",&local_18,
             L"A comma-delimited list of EPingType pings to enable, and (optionally) the EPingAverageType averaging to apply to the ping (e.g: \"RoundTrip=None,RoundTripExclFrame=PlayerStateAvg,ICMP=MovingAverage\")."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarNetPingTypes__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingUDPInterval'' @ 141117760

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetPingUDPInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPingUDPInterval,L"net.NetPingUDPInterval",&GNetPingUDPInterval,
             L"Specifies the interval (in seconds) for performing UDP pings.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPingUDPInterval__);
  return;
}

// `dynamic_initializer_for_'CVarNetPingUDPPort'' @ 1411177b0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetPingUDPPort__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetPingUDPPort,L"net.NetPingUDPPort",&GNetPingUDPPort,
             L"For \'UDPQoS\' ping type, sets the port used for pinging.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetPingUDPPort__);
  return;
}

// `dynamic_initializer_for_'CVarNetReportSyncLoads'' @ 141117800

void __cdecl _dynamic_initializer_for__CVarNetReportSyncLoads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetReportSyncLoads,L"net.ReportSyncLoads",&bNetReportSyncLoads,
             L"If enabled, the engine will track objects loaded by the networking system and broadcast FNetDelegates::OnSyncLoadDetected to report them.By default they are logged to the LogNetSyncLoads category."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetReportSyncLoads__);
  return;
}

// `dynamic_initializer_for_'CVarNetVerifyMagicHeader'' @ 141117850

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetVerifyMagicHeader__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetVerifyMagicHeader,L"net.VerifyMagicHeader",&GVerifyMagicHeader,
             L"Whether or not verification of the magic header is performed, prior to processing a packet. Disable if transitioning to a new magic header, while wishing to continue supporting the old header for a time."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetVerifyMagicHeader__);
  return;
}

// `dynamic_initializer_for_'CVarNetVerifyNetClientID'' @ 1411178a0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetVerifyNetClientID__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetVerifyNetClientID,L"net.VerifyNetClientID",&GVerifyNetClientID,
             L"Whether or not verification of the packet ClientID value is performed.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetVerifyNetClientID__);
  return;
}

// `dynamic_initializer_for_'CVarNetVerifyNetSessionID'' @ 1411178f0

void __cdecl UE::Net::_dynamic_initializer_for__CVarNetVerifyNetSessionID__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetVerifyNetSessionID,L"net.VerifyNetSessionID",&GVerifyNetSessionID,
             L"Whether or not verification of the packet SessionID value is performed.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetVerifyNetSessionID__);
  return;
}

// `dynamic_initializer_for_'CVarODSCMaxPayloadPerRequests'' @ 141117940

void __cdecl _dynamic_initializer_for__CVarODSCMaxPayloadPerRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarODSCMaxPayloadPerRequests,L"ODSC.MaxPayloadPerRequests",
             &GODSCMaxPayloadPerRequests,
             L"Specify how many shaders compilations requests we send in a single message to the ODSC server \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarODSCMaxPayloadPerRequests__);
  return;
}

// `dynamic_initializer_for_'CVarODSCRecompileMode'' @ 141117990

void __cdecl _dynamic_initializer_for__CVarODSCRecompileMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarODSCRecompileMode,L"ODSC.recompilemode",local_res8,
             L"Highly experimental - Changes how recompileshaders behaves in cooked build\n0 (legacy): Gathers all visible materials in a single frame and compiles all permutations for them\n1 (default): Compile only the permutations that are requested by the renderer. Faster iteration but more prone to hitching because of MDC recaching\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarODSCRecompileMode__);
  return;
}

// `dynamic_initializer_for_'CVarODSCUseDefaultMaterialOnRecompile'' @ 1411179e0

void __cdecl _dynamic_initializer_for__CVarODSCUseDefaultMaterialOnRecompile__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarODSCUseDefaultMaterialOnRecompile,L"ODSC.usedefaultmaterialonrecompile",
             &GODSCUseDefaultMaterialOnRecompile,
             L"Indicates if the default material should be used while waiting for a shader to be compiled by ODSC\n0 (default) - use the default material only if the permutation is misssing\n1 - use the default material even if a permutation exists\nSetting to 1 can be useful when changing uniform buffer layout on some shaders (SHADER_PARAMETER_STRUCT for example) and avoid recooking.\nThis won\'t work if the default material\'s layout is changed\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarODSCUseDefaultMaterialOnRecompile__);
  return;
}

// `dynamic_initializer_for_'CVarQuantizeActorLocationOnSpawn'' @ 141117a30

void __cdecl _dynamic_initializer_for__CVarQuantizeActorLocationOnSpawn__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQuantizeActorLocationOnSpawn,L"net.QuantizeActorLocationOnSpawn",
             &GbQuantizeActorLocationOnSpawn,
             L"When enabled, we will quantize Location for newly spawned actors to a single decimal of precision."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarQuantizeActorLocationOnSpawn__);
  return;
}

// `dynamic_initializer_for_'CVarQuantizeActorRotationOnSpawn'' @ 141117a80

void __cdecl _dynamic_initializer_for__CVarQuantizeActorRotationOnSpawn__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQuantizeActorRotationOnSpawn,L"net.QuantizeActorRotationOnSpawn",
             &GbQuantizeActorRotationOnSpawn,
             L"When enabled, we will quantize Rotation for newly spawned actors to a single decimal of precision."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarQuantizeActorRotationOnSpawn__);
  return;
}

// `dynamic_initializer_for_'CVarQuantizeActorScaleOnSpawn'' @ 141117ad0

void __cdecl _dynamic_initializer_for__CVarQuantizeActorScaleOnSpawn__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQuantizeActorScaleOnSpawn,L"net.QuantizeActorScaleOnSpawn",
             &GbQuantizeActorScaleOnSpawn,
             L"When enabled, we will quantize Scale for newly spawned actors to a single decimal of precision."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarQuantizeActorScaleOnSpawn__);
  return;
}

// `dynamic_initializer_for_'CVarQuantizeActorVelocityOnSpawn'' @ 141117b20

void __cdecl _dynamic_initializer_for__CVarQuantizeActorVelocityOnSpawn__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQuantizeActorVelocityOnSpawn,L"net.QuantizeActorVelocityOnSpawn",
             &GbQuantizeActorVelocityOnSpawn,
             L"When enabled, we will quantize Velocity for newly spawned actors to a single decimal of precision."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarQuantizeActorVelocityOnSpawn__);
  return;
}

// `dynamic_initializer_for_'CVarRPCDoSDetectionOverride'' @ 141117b70

void __cdecl _dynamic_initializer_for__CVarRPCDoSDetectionOverride__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarRPCDoSDetectionOverride,L"net.RPCDoSDetectionOverride",&local_18,
             L"Overrides whether or not RPC DoS Detection is enabled per-NetDriver. 0 = disabled, 1 = enabled. Example: net.RPCDoSDetectionOverride=GameNetDriver=1,BeaconNetDriver=0"
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarRPCDoSDetectionOverride__);
  return;
}

// `dynamic_initializer_for_'CVarRPCDoSForcedRPCTracking'' @ 141117be0

void __cdecl _dynamic_initializer_for__CVarRPCDoSForcedRPCTracking__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarRPCDoSForcedRPCTracking,L"net.RPCDoSForcedRPCTracking",&local_18,
             L"Sets a single RPC that, when encountered, forcibly enables RPC tracking (limited to one RPC for performance). Can also specify a random chance, between 0.0 and 1.0, for when encountering the RPC enables tracking, and a length of time for leaving tracking enabled (disables the next tick, otherwise).Example (50% chance for 10 seconds): net.RPCDoSForcedRPCTracking=ServerAdmin,0.5,10"
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarRPCDoSForcedRPCTracking__);
  return;
}

// `dynamic_initializer_for_'CVarRPCDoSScopeDebugging'' @ 141117c50

void __cdecl UE::Net::_dynamic_initializer_for__CVarRPCDoSScopeDebugging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRPCDoSScopeDebugging,L"net.RPCDoSScopeDebugging",&GRPCDoSScopeDebugging,
             L"Sets whether or not debugging/ensures for RPC DoS Tick/Packet scopes should be enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRPCDoSScopeDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarReservedNetGuidSize'' @ 141117ca0

void __cdecl _dynamic_initializer_for__CVarReservedNetGuidSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x200;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarReservedNetGuidSize,L"net.ReservedNetGuidSize",local_res8,
             L"Reserved size in bytes for NetGUID serialization, used as a placeholder for later serialization"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReservedNetGuidSize__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadingGUIDThresholdOwner'' @ 141117cf0

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadingGUIDThresholdOwner__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTrackAsyncLoadingGUIDThresholdOwner,L"net.TrackAsyncLoadingGUIDThresholdOwner",
             &GGuidCacheTrackAsyncLoadingGUIDThresholdOwner,
             L"When > 0, if the Net Connection\'s owning Controller or Pawn is waiting on Async Loads for longer than this threshold, we will fire a CSV Event to track it. Used for Debugging and Profiling"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadingGUIDThresholdOwner__);
  return;
}

// `dynamic_initializer_for_'CVarTrackAsyncLoadingGUIDTreshold'' @ 141117d40

void __cdecl _dynamic_initializer_for__CVarTrackAsyncLoadingGUIDTreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTrackAsyncLoadingGUIDTreshold,L"net.TrackAsyncLoadingGUIDThreshold",
             &GGuidCacheTrackAsyncLoadingGUIDThreshold,
             L"When > 0, any objects that take longer than the threshold to async load will be tracked. Threshold in seconds, @see FNetGUIDCache::ConsumeDelinquencyAnalytics. Used for Debugging and Analytics"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackAsyncLoadingGUIDTreshold__);
  return;
}

// `dynamic_initializer_for_'CVarTrackQueuedActorOwnerThreshold'' @ 141117d90

void __cdecl _dynamic_initializer_for__CVarTrackQueuedActorOwnerThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTrackQueuedActorOwnerThreshold,L"net.TrackQueuedActorThresholdOwner",
             &GPackageMapTrackQueuedActorThresholdOwner,
             L"When > 0, if the Net Connection\'s owning Controller or Pawn has Queued Bunches for longer than this threshold, we will fire a CSV Event to track it. Used for Debugging and Profiling"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackQueuedActorOwnerThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarTrackQueuedActorTreshold'' @ 141117de0

void __cdecl _dynamic_initializer_for__CVarTrackQueuedActorTreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTrackQueuedActorTreshold,L"net.TrackQueuedActorThreshold",
             &GPackageMapTrackQueuedActorThreshold,
             L"When > 0, any actors that spend longer than the threshold with queued bunches will be tracked. Threshold in seconds, @see UPackageMap::ConsumeDelinquencyAnalytics. Used for Debugging and Analytics"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTrackQueuedActorTreshold__);
  return;
}

// `dynamic_initializer_for_'CVarUseGranularNetworkTracking'' @ 141117e30

void __cdecl
UE::Net::Private::GranularMemoryTracking::_dynamic_initializer_for__CVarUseGranularNetworkTracking__
          (void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarUseGranularNetworkTracking,L"Net.UseGranularNetworkTracking",local_res8,
             L"When enabled, Obj List will print out highly detailed information about Network Memory Usage"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseGranularNetworkTracking__);
  return;
}

// `dynamic_initializer_for_'Channels'' @ 141117e80

void __cdecl UE::Net::Metric::_dynamic_initializer_for__Channels__(void)

{
  ::FName::FName(&Channels,"Channels");
  return;
}

// `dynamic_initializer_for_'ClosedConnectionsDueToReliableBufferOverflow'' @ 141117ea0

void __cdecl
UE::Net::Metric::_dynamic_initializer_for__ClosedConnectionsDueToReliableBufferOverflow__(void)

{
  ::FName::FName(&ClosedConnectionsDueToReliableBufferOverflow,
                 "ClosedConnectionsDueToReliableBufferOverflow");
  return;
}

// `dynamic_initializer_for_'Connections'' @ 141117ec0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__Connections__(void)

{
  ::FName::FName(&Connections,"Connections");
  return;
}

// `dynamic_initializer_for_'Current'' @ 141117ee0

void __cdecl ObjectCacheContextScopeImpl::_dynamic_initializer_for__Current__(void)

{
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x8ff8) = 0;
  __tlregdtor(_dynamic_atexit_destructor_for__Current__);
  return;
}

// `dynamic_initializer_for_'FNetSequenceNumberTestAutomationTestInstance'' @ 141117f20

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FNetSequenceNumberTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FNetSequenceNumberTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FNetSequenceNumberTestAutomationTestInstance,&local_18,false);
  FNetSequenceNumberTestAutomationTestInstance._0_8_ = &___7FNetSequenceNumberTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FNetSequenceNumberTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'GObjectIdAnnotations'' @ 141117f80

void __cdecl _dynamic_initializer_for__GObjectIdAnnotations__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GObjectIdAnnotations.InverseAnnotationMapCritical,4000);
  atexit(_dynamic_atexit_destructor_for__GObjectIdAnnotations__);
  return;
}

// `dynamic_initializer_for_'GObjectTracedSet'' @ 141117fb0

void __cdecl _dynamic_initializer_for__GObjectTracedSet__(void)

{
  atexit(_dynamic_atexit_destructor_for__GObjectTracedSet__);
  return;
}

// `dynamic_initializer_for_'GObjectTracedSetLock'' @ 141117fd0

void __cdecl _dynamic_initializer_for__GObjectTracedSetLock__(void)

{
  atexit(_dynamic_atexit_destructor_for__GObjectTracedSetLock__);
  return;
}

// `dynamic_initializer_for_'GatherPrioritizeTimeMS'' @ 141117ff0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__GatherPrioritizeTimeMS__(void)

{
  ::FName::FName(&GatherPrioritizeTimeMS,"GatherPrioritizeTimeMS");
  return;
}

// `dynamic_initializer_for_'ImportedNetGuids'' @ 141118010

void __cdecl UE::Net::Metric::_dynamic_initializer_for__ImportedNetGuids__(void)

{
  ::FName::FName(&ImportedNetGuids,"ImportedNetGuids");
  return;
}

// `dynamic_initializer_for_'InBunches'' @ 141118030

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InBunches__(void)

{
  ::FName::FName(&InBunches,"InBunches");
  return;
}

// `dynamic_initializer_for_'InLostPacketsFoundPerFrame'' @ 141118050

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InLostPacketsFoundPerFrame__(void)

{
  ::FName::FName(&InLostPacketsFoundPerFrame,"InLostPacketsFoundPerFrame");
  return;
}

// `dynamic_initializer_for_'InPackets'' @ 141118070

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InPackets__(void)

{
  ::FName::FName(&InPackets,"InPackets");
  return;
}

// `dynamic_initializer_for_'InPacketsClientAvg'' @ 141118090

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InPacketsClientAvg__(void)

{
  ::FName::FName(&InPacketsClientAvg,"InPacketsClientAvg");
  return;
}

// `dynamic_initializer_for_'InPacketsClientMax'' @ 1411180b0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InPacketsClientMax__(void)

{
  ::FName::FName(&InPacketsClientMax,"InPacketsClientMax");
  return;
}

// `dynamic_initializer_for_'InPacketsClientPerSecondAvg'' @ 1411180d0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InPacketsClientPerSecondAvg__(void)

{
  ::FName::FName(&InPacketsClientPerSecondAvg,"InPacketsClientPerSecondAvg");
  return;
}

// `dynamic_initializer_for_'InPacketsClientPerSecondMax'' @ 1411180f0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InPacketsClientPerSecondMax__(void)

{
  ::FName::FName(&InPacketsClientPerSecondMax,"InPacketsClientPerSecondMax");
  return;
}

// `dynamic_initializer_for_'InPacketsClientPerSecondMin'' @ 141118110

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InPacketsClientPerSecondMin__(void)

{
  ::FName::FName(&InPacketsClientPerSecondMin,"InPacketsClientPerSecondMin");
  return;
}

// `dynamic_initializer_for_'InPacketsLost'' @ 141118130

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InPacketsLost__(void)

{
  ::FName::FName(&InPacketsLost,"InPacketsLost");
  return;
}

// `dynamic_initializer_for_'InPacketsPerFrame'' @ 141118150

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InPacketsPerFrame__(void)

{
  ::FName::FName(&InPacketsPerFrame,"InPacketsPerFrame");
  return;
}

// `dynamic_initializer_for_'InRate'' @ 141118170

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InRate__(void)

{
  ::FName::FName(&InRate,"InRate");
  return;
}

// `dynamic_initializer_for_'InRateClientAvg'' @ 141118190

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InRateClientAvg__(void)

{
  ::FName::FName(&InRateClientAvg,"InRateClientAvg");
  return;
}

// `dynamic_initializer_for_'InRateClientMax'' @ 1411181b0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InRateClientMax__(void)

{
  ::FName::FName(&InRateClientMax,"InRateClientMax");
  return;
}

// `dynamic_initializer_for_'InRateClientMin'' @ 1411181d0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__InRateClientMin__(void)

{
  ::FName::FName(&InRateClientMin,"InRateClientMin");
  return;
}

// `dynamic_initializer_for_'IncomingReliableMessageQueueMaxSize'' @ 1411181f0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__IncomingReliableMessageQueueMaxSize__(void)

{
  ::FName::FName(&IncomingReliableMessageQueueMaxSize,"IncomingReliableMessageQueueMaxSize");
  return;
}

// `dynamic_initializer_for_'InvalidUniqueNetIdStr'' @ 141118210

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__InvalidUniqueNetIdStr__(void)

{
  ::FString::FString(&InvalidUniqueNetIdStr,L"INVALID");
  atexit(_dynamic_atexit_destructor_for__InvalidUniqueNetIdStr__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_GuidCache'' @ 141118240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_GuidCache__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NetworkingSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_GuidCacheLLM> FVar5;
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
  FVar5 = StatPtr_STAT_GuidCacheLLM;
  if (StatPtr_STAT_GuidCacheLLM == (FThreadSafeStaticStat<FStat_STAT_GuidCacheLLM>)0x0) {
    pFVar3 = FName::FName(&local_res10,"STAT_GuidCacheLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_GuidCacheLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GuidCacheLLM,*pFVar3,L"GuidCache",
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
            (&LLMTagDeclaration_GuidCache,L"GuidCache",(FName)0x0,*pFVar3,FVar2,FVar1,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_ObjectReverseLookupCache'' @ 1411183b0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_ObjectReverseLookupCache__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_ObjectReverseLookupCache,L"ObjectReverseLookupCache",(FName)0x0,
             (FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'ListNetGUIDExportsCommand'' @ 141118400

void __cdecl _dynamic_initializer_for__ListNetGUIDExportsCommand__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = ListNetGUIDExports;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ListNetGUIDExportsCommand,L"net.ListNetGUIDExports",L"Lists open actor channels",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__ListNetGUIDExportsCommand__);
  return;
}

// `dynamic_initializer_for_'LogHandshake'' @ 141118540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHandshake__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHandshake,L"LogHandshake",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHandshake__);
  return;
}

// `dynamic_initializer_for_'LogNetworkMetrics'' @ 141118580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetworkMetrics__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNetworkMetrics,L"LogNetworkMetrics",Error,All);
  atexit(_dynamic_atexit_destructor_for__LogNetworkMetrics__);
  return;
}

// `dynamic_initializer_for_'LogODSC'' @ 1411185c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogODSC__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogODSC,L"LogODSC",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogODSC__);
  return;
}

// `dynamic_initializer_for_'LogObjectCache'' @ 141118600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogObjectCache__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogObjectCache,L"LogObjectCache",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogObjectCache__);
  return;
}

// `dynamic_initializer_for_'LogOnlineEngine'' @ 141118640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOnlineEngine__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOnlineEngine,L"LogOnlineEngine",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOnlineEngine__);
  return;
}

// `dynamic_initializer_for_'MaxPacketOverhead'' @ 141118680

void __cdecl UE::Net::Metric::_dynamic_initializer_for__MaxPacketOverhead__(void)

{
  ::FName::FName(&MaxPacketOverhead,"MaxPacketOverhead");
  return;
}

// `dynamic_initializer_for_'MaxPing'' @ 1411186a0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__MaxPing__(void)

{
  ::FName::FName(&MaxPing,"MaxPing");
  return;
}

// `dynamic_initializer_for_'MinPing'' @ 1411186c0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__MinPing__(void)

{
  ::FName::FName(&MinPing,"MinPing");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1411186e0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NetGUIDInRate'' @ 141118700

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NetGUIDInRate__(void)

{
  ::FName::FName(&NetGUIDInRate,"NetGUIDInRate");
  return;
}

// `dynamic_initializer_for_'NetGUIDOutRate'' @ 141118720

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NetGUIDOutRate__(void)

{
  ::FName::FName(&NetGUIDOutRate,"NetGUIDOutRate");
  return;
}

// `dynamic_initializer_for_'NetInBunchTimeOvershootPercent'' @ 141118740

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NetInBunchTimeOvershootPercent__(void)

{
  ::FName::FName(&NetInBunchTimeOvershootPercent,"NetInBunchTimeOvershootPercent");
  return;
}

// `dynamic_initializer_for_'NetNumClients'' @ 141118760

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NetNumClients__(void)

{
  ::FName::FName(&NetNumClients,"NetNumClients");
  return;
}

// `dynamic_initializer_for_'NetSaturated'' @ 141118780

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NetSaturated__(void)

{
  ::FName::FName(&NetSaturated,"NetSaturated");
  return;
}

// `dynamic_initializer_for_'NumActorChannels'' @ 1411187a0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumActorChannels__(void)

{
  ::FName::FName(&NumActorChannels,"NumActorChannels");
  return;
}

// `dynamic_initializer_for_'NumActors'' @ 1411187c0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumActors__(void)

{
  ::FName::FName(&NumActors,"NumActors");
  return;
}

// `dynamic_initializer_for_'NumAllConnections'' @ 1411187e0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumAllConnections__(void)

{
  ::FName::FName(&NumAllConnections,"NumAllConnections");
  return;
}

// `dynamic_initializer_for_'NumClientUpdateLevelVisibility'' @ 141118800

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumClientUpdateLevelVisibility__(void)

{
  ::FName::FName(&NumClientUpdateLevelVisibility,"NumClientUpdateLevelVisibility");
  return;
}

// `dynamic_initializer_for_'NumClients'' @ 141118820

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumClients__(void)

{
  ::FName::FName(&NumClients,"NumClients");
  return;
}

// `dynamic_initializer_for_'NumConnections'' @ 141118840

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumConnections__(void)

{
  ::FName::FName(&NumConnections,"NumConnections");
  return;
}

// `dynamic_initializer_for_'NumConsideredActors'' @ 141118860

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumConsideredActors__(void)

{
  ::FName::FName(&NumConsideredActors,"NumConsideredActors");
  return;
}

// `dynamic_initializer_for_'NumDormantActors'' @ 141118880

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumDormantActors__(void)

{
  ::FName::FName(&NumDormantActors,"NumDormantActors");
  return;
}

// `dynamic_initializer_for_'NumInitiallyDormantActors'' @ 1411188a0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumInitiallyDormantActors__(void)

{
  ::FName::FName(&NumInitiallyDormantActors,"NumInitiallyDormantActors");
  return;
}

// `dynamic_initializer_for_'NumNetActors'' @ 1411188c0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumNetActors__(void)

{
  ::FName::FName(&NumNetActors,"NumNetActors");
  return;
}

// `dynamic_initializer_for_'NumNetGUIDsAckd'' @ 1411188e0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumNetGUIDsAckd__(void)

{
  ::FName::FName(&NumNetGUIDsAckd,"NumNetGUIDsAckd");
  return;
}

// `dynamic_initializer_for_'NumNetGUIDsPending'' @ 141118900

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumNetGUIDsPending__(void)

{
  ::FName::FName(&NumNetGUIDsPending,"NumNetGUIDsPending");
  return;
}

// `dynamic_initializer_for_'NumNetGUIDsUnAckd'' @ 141118920

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumNetGUIDsUnAckd__(void)

{
  ::FName::FName(&NumNetGUIDsUnAckd,"NumNetGUIDsUnAckd");
  return;
}

// `dynamic_initializer_for_'NumNoPawnPlayerControllersForReplication'' @ 141118940

void __cdecl
UE::Net::Metric::_dynamic_initializer_for__NumNoPawnPlayerControllersForReplication__(void)

{
  ::FName::FName(&NumNoPawnPlayerControllersForReplication,
                 "NumNoPawnPlayerControllersForReplication");
  return;
}

// `dynamic_initializer_for_'NumOpenChannels'' @ 141118960

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumOpenChannels__(void)

{
  ::FName::FName(&NumOpenChannels,"NumOpenChannels");
  return;
}

// `dynamic_initializer_for_'NumPawnsForReplication'' @ 141118980

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumPawnsForReplication__(void)

{
  ::FName::FName(&NumPawnsForReplication,"NumPawnsForReplication");
  return;
}

// `dynamic_initializer_for_'NumPlayerControllersForReplication'' @ 1411189a0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumPlayerControllersForReplication__(void)

{
  ::FName::FName(&NumPlayerControllersForReplication,"NumPlayerControllersForReplication");
  return;
}

// `dynamic_initializer_for_'NumRelevantDeletedActors'' @ 1411189c0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumRelevantDeletedActors__(void)

{
  ::FName::FName(&NumRelevantDeletedActors,"NumRelevantDeletedActors");
  return;
}

// `dynamic_initializer_for_'NumReplicateActorCallsPerConAvg'' @ 1411189e0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumReplicateActorCallsPerConAvg__(void)

{
  ::FName::FName(&NumReplicateActorCallsPerConAvg,"NumReplicateActorCallsPerConAvg");
  return;
}

// `dynamic_initializer_for_'NumReplicatedActorBytes'' @ 141118a00

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumReplicatedActorBytes__(void)

{
  ::FName::FName(&NumReplicatedActorBytes,"NumReplicatedActorBytes");
  return;
}

// `dynamic_initializer_for_'NumReplicatedActors'' @ 141118a20

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumReplicatedActors__(void)

{
  ::FName::FName(&NumReplicatedActors,"NumReplicatedActors");
  return;
}

// `dynamic_initializer_for_'NumReplicationViewers'' @ 141118a40

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumReplicationViewers__(void)

{
  ::FName::FName(&NumReplicationViewers,"NumReplicationViewers");
  return;
}

// `dynamic_initializer_for_'NumSkippedObjectEmptyUpdates'' @ 141118a60

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumSkippedObjectEmptyUpdates__(void)

{
  ::FName::FName(&NumSkippedObjectEmptyUpdates,"NumSkippedObjectEmptyUpdates");
  return;
}

// `dynamic_initializer_for_'NumTickingChannels'' @ 141118a80

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumTickingChannels__(void)

{
  ::FName::FName(&NumTickingChannels,"NumTickingChannels");
  return;
}

// `dynamic_initializer_for_'NumberOfActiveActors'' @ 141118aa0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumberOfActiveActors__(void)

{
  ::FName::FName(&NumberOfActiveActors,"NumberOfActiveActors");
  return;
}

// `dynamic_initializer_for_'NumberOfFullyDormantActors'' @ 141118ac0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__NumberOfFullyDormantActors__(void)

{
  ::FName::FName(&NumberOfFullyDormantActors,"NumberOfFullyDormantActors");
  return;
}

// `dynamic_initializer_for_'ODSCLogMissedMaterialsCmd'' @ 141118ae0

void __cdecl _dynamic_initializer_for__ODSCLogMissedMaterialsCmd__(void)

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
    puVar1[3] = FODSCManagerAccess::ODSCLogMissedMaterials;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ODSCLogMissedMaterialsCmd,L"odsc.logmissedmaterials",
             L"Logs materials that were not found by the ODSC server",
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
  atexit(_dynamic_atexit_destructor_for__ODSCLogMissedMaterialsCmd__);
  return;
}

// `dynamic_initializer_for_'ObjectChannelReg'' @ 141118c20

void __cdecl _dynamic_initializer_for__ObjectChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&ObjectChannelObject,"ObjectChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'ObjectPropertiesReg'' @ 141118c50

void __cdecl _dynamic_initializer_for__ObjectPropertiesReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&ObjectPropertiesObject,"ObjectProperties",&local_18);
  return;
}

// `dynamic_initializer_for_'Objects'' @ 141118c80

void __cdecl ObjectPropertyTrace::_dynamic_initializer_for__Objects__(void)

{
  atexit(_dynamic_atexit_destructor_for__Objects__);
  return;
}

// `dynamic_initializer_for_'OutBunches'' @ 141118ca0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutBunches__(void)

{
  ::FName::FName(&OutBunches,"OutBunches");
  return;
}

// `dynamic_initializer_for_'OutKBytes'' @ 141118cc0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutKBytes__(void)

{
  ::FName::FName(&OutKBytes,"OutKBytes");
  return;
}

// `dynamic_initializer_for_'OutLostPacketsFoundPerFrame'' @ 141118ce0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutLostPacketsFoundPerFrame__(void)

{
  ::FName::FName(&OutLostPacketsFoundPerFrame,"OutLostPacketsFoundPerFrame");
  return;
}

// `dynamic_initializer_for_'OutNetGUIDKBytesSec'' @ 141118d00

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutNetGUIDKBytesSec__(void)

{
  ::FName::FName(&OutNetGUIDKBytesSec,"OutNetGUIDKBytesSec");
  return;
}

// `dynamic_initializer_for_'OutPackets'' @ 141118d20

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutPackets__(void)

{
  ::FName::FName(&OutPackets,"OutPackets");
  return;
}

// `dynamic_initializer_for_'OutPacketsClientAvg'' @ 141118d40

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutPacketsClientAvg__(void)

{
  ::FName::FName(&OutPacketsClientAvg,"OutPacketsClientAvg");
  return;
}

// `dynamic_initializer_for_'OutPacketsClientMax'' @ 141118d60

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutPacketsClientMax__(void)

{
  ::FName::FName(&OutPacketsClientMax,"OutPacketsClientMax");
  return;
}

// `dynamic_initializer_for_'OutPacketsClientPerSecondAvg'' @ 141118d80

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutPacketsClientPerSecondAvg__(void)

{
  ::FName::FName(&OutPacketsClientPerSecondAvg,"OutPacketsClientPerSecondAvg");
  return;
}

// `dynamic_initializer_for_'OutPacketsClientPerSecondMax'' @ 141118da0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutPacketsClientPerSecondMax__(void)

{
  ::FName::FName(&OutPacketsClientPerSecondMax,"OutPacketsClientPerSecondMax");
  return;
}

// `dynamic_initializer_for_'OutPacketsClientPerSecondMin'' @ 141118dc0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutPacketsClientPerSecondMin__(void)

{
  ::FName::FName(&OutPacketsClientPerSecondMin,"OutPacketsClientPerSecondMin");
  return;
}

// `dynamic_initializer_for_'OutPacketsLost'' @ 141118de0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutPacketsLost__(void)

{
  ::FName::FName(&OutPacketsLost,"OutPacketsLost");
  return;
}

// `dynamic_initializer_for_'OutPacketsPerFrame'' @ 141118e00

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutPacketsPerFrame__(void)

{
  ::FName::FName(&OutPacketsPerFrame,"OutPacketsPerFrame");
  return;
}

// `dynamic_initializer_for_'OutRate'' @ 141118e20

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutRate__(void)

{
  ::FName::FName(&OutRate,"OutRate");
  return;
}

// `dynamic_initializer_for_'OutRateClientAvg'' @ 141118e40

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutRateClientAvg__(void)

{
  ::FName::FName(&OutRateClientAvg,"OutRateClientAvg");
  return;
}

// `dynamic_initializer_for_'OutRateClientMax'' @ 141118e60

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutRateClientMax__(void)

{
  ::FName::FName(&OutRateClientMax,"OutRateClientMax");
  return;
}

// `dynamic_initializer_for_'OutRateClientMin'' @ 141118e80

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutRateClientMin__(void)

{
  ::FName::FName(&OutRateClientMin,"OutRateClientMin");
  return;
}

// `dynamic_initializer_for_'OutgoingReliableMessageQueueMaxSize'' @ 141118ea0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__OutgoingReliableMessageQueueMaxSize__(void)

{
  ::FName::FName(&OutgoingReliableMessageQueueMaxSize,"OutgoingReliableMessageQueueMaxSize");
  return;
}

// `dynamic_initializer_for_'PendingOuterNetGuids'' @ 141118ec0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PendingOuterNetGuids__(void)

{
  ::FName::FName(&PendingOuterNetGuids,"PendingOuterNetGuids");
  return;
}

// `dynamic_initializer_for_'PercentInVoice'' @ 141118ee0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PercentInVoice__(void)

{
  ::FName::FName(&PercentInVoice,"PercentInVoice");
  return;
}

// `dynamic_initializer_for_'PercentOutVoice'' @ 141118f00

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PercentOutVoice__(void)

{
  ::FName::FName(&PercentOutVoice,"PercentOutVoice");
  return;
}

// `dynamic_initializer_for_'Ping'' @ 141118f20

void __cdecl UE::Net::Metric::_dynamic_initializer_for__Ping__(void)

{
  ::FName::FName(&Ping,"Ping");
  return;
}

// `dynamic_initializer_for_'PingBucketInt0'' @ 141118f40

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PingBucketInt0__(void)

{
  ::FName::FName(&PingBucketInt0,"PingBucketInt0");
  return;
}

// `dynamic_initializer_for_'PingBucketInt1'' @ 141118f60

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PingBucketInt1__(void)

{
  ::FName::FName(&PingBucketInt1,"PingBucketInt1");
  return;
}

// `dynamic_initializer_for_'PingBucketInt2'' @ 141118f80

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PingBucketInt2__(void)

{
  ::FName::FName(&PingBucketInt2,"PingBucketInt2");
  return;
}

// `dynamic_initializer_for_'PingBucketInt3'' @ 141118fa0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PingBucketInt3__(void)

{
  ::FName::FName(&PingBucketInt3,"PingBucketInt3");
  return;
}

// `dynamic_initializer_for_'PingBucketInt4'' @ 141118fc0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PingBucketInt4__(void)

{
  ::FName::FName(&PingBucketInt4,"PingBucketInt4");
  return;
}

// `dynamic_initializer_for_'PingBucketInt5'' @ 141118fe0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PingBucketInt5__(void)

{
  ::FName::FName(&PingBucketInt5,"PingBucketInt5");
  return;
}

// `dynamic_initializer_for_'PingBucketInt6'' @ 141119000

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PingBucketInt6__(void)

{
  ::FName::FName(&PingBucketInt6,"PingBucketInt6");
  return;
}

// `dynamic_initializer_for_'PingBucketInt7'' @ 141119020

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PingBucketInt7__(void)

{
  ::FName::FName(&PingBucketInt7,"PingBucketInt7");
  return;
}

// `dynamic_initializer_for_'PrioritizedActors'' @ 141119040

void __cdecl UE::Net::Metric::_dynamic_initializer_for__PrioritizedActors__(void)

{
  ::FName::FName(&PrioritizedActors,"PrioritizedActors");
  return;
}

// `dynamic_initializer_for_'RawPing'' @ 141119060

void __cdecl UE::Net::Metric::_dynamic_initializer_for__RawPing__(void)

{
  ::FName::FName(&RawPing,"RawPing");
  return;
}

// `dynamic_initializer_for_'RawPingClientAvg'' @ 141119080

void __cdecl UE::Net::Metric::_dynamic_initializer_for__RawPingClientAvg__(void)

{
  ::FName::FName(&RawPingClientAvg,"RawPingClientAvg");
  return;
}

// `dynamic_initializer_for_'RawPingClientMax'' @ 1411190a0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__RawPingClientMax__(void)

{
  ::FName::FName(&RawPingClientMax,"RawPingClientMax");
  return;
}

// `dynamic_initializer_for_'RawPingClientMin'' @ 1411190c0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__RawPingClientMin__(void)

{
  ::FName::FName(&RawPingClientMin,"RawPingClientMin");
  return;
}

// `dynamic_initializer_for_'ReplicateActorTimeMS'' @ 1411190e0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__ReplicateActorTimeMS__(void)

{
  ::FName::FName(&ReplicateActorTimeMS,"ReplicateActorTimeMS");
  return;
}

// `dynamic_initializer_for_'SatConnections'' @ 141119100

void __cdecl UE::Net::Metric::_dynamic_initializer_for__SatConnections__(void)

{
  ::FName::FName(&SatConnections,"SatConnections");
  return;
}

// `dynamic_initializer_for_'ServerReplicateActorTimeMS'' @ 141119120

void __cdecl UE::Net::Metric::_dynamic_initializer_for__ServerReplicateActorTimeMS__(void)

{
  ::FName::FName(&ServerReplicateActorTimeMS,"ServerReplicateActorTimeMS");
  return;
}

// `dynamic_initializer_for_'SharedSerializationPropertyHit'' @ 141119140

void __cdecl UE::Net::Metric::_dynamic_initializer_for__SharedSerializationPropertyHit__(void)

{
  ::FName::FName(&SharedSerializationPropertyHit,"SharedSerializationPropertyHit");
  return;
}

// `dynamic_initializer_for_'SharedSerializationPropertyMiss'' @ 141119160

void __cdecl UE::Net::Metric::_dynamic_initializer_for__SharedSerializationPropertyMiss__(void)

{
  ::FName::FName(&SharedSerializationPropertyMiss,"SharedSerializationPropertyMiss");
  return;
}

// `dynamic_initializer_for_'SharedSerializationRPCHit'' @ 141119180

void __cdecl UE::Net::Metric::_dynamic_initializer_for__SharedSerializationRPCHit__(void)

{
  ::FName::FName(&SharedSerializationRPCHit,"SharedSerializationRPCHit");
  return;
}

// `dynamic_initializer_for_'SharedSerializationRPCMiss'' @ 1411191a0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__SharedSerializationRPCMiss__(void)

{
  ::FName::FName(&SharedSerializationRPCMiss,"SharedSerializationRPCMiss");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GuidCacheLLM'' @ 1411191c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GuidCacheLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GuidCacheLLM == (FThreadSafeStaticStat<FStat_STAT_GuidCacheLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GuidCacheLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GuidCacheLLM,*pFVar1,L"GuidCache",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PingTimeoutPercent_ICMP'' @ 141119250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PingTimeoutPercent_ICMP__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PingTimeoutPercent_ICMP ==
      (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_ICMP>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PingTimeoutPercent_ICMP");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PingTimeoutPercent_ICMP,*pFVar1,
               L"Ping Timeout Percent (ICMP)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false
               ,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PingTimeoutPercent_UDPQoS'' @ 1411192e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PingTimeoutPercent_UDPQoS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PingTimeoutPercent_UDPQoS ==
      (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PingTimeoutPercent_UDPQoS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PingTimeoutPercent_UDPQoS,*pFVar1,
               L"Ping Timeout Percent (UDP QoS)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,
               false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PingTimeouts_ICMP'' @ 141119370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PingTimeouts_ICMP__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PingTimeouts_ICMP == (FThreadSafeStaticStat<FStat_STAT_PingTimeouts_ICMP>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PingTimeouts_ICMP");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PingTimeouts_ICMP,*pFVar1,
               L"Ping Timeouts (ICMP)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PingTimeouts_UDPQoS'' @ 141119400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PingTimeouts_UDPQoS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PingTimeouts_UDPQoS == (FThreadSafeStaticStat<FStat_STAT_PingTimeouts_UDPQoS>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_PingTimeouts_UDPQoS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PingTimeouts_UDPQoS,*pFVar1,
               L"Ping Timeouts (UDP QoS)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Ping_ICMP'' @ 141119490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Ping_ICMP__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Ping_ICMP == (FThreadSafeStaticStat<FStat_STAT_Ping_ICMP>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Ping_ICMP");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_ICMP,*pFVar1,L"Ping (ICMP)",
               "STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Ping_RoundTripExclFrame'' @ 141119520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Ping_RoundTripExclFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Ping_RoundTripExclFrame ==
      (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripExclFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Ping_RoundTripExclFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_RoundTripExclFrame,*pFVar1,
               L"Ping (Excl. Frame)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Ping_RoundTripInclFrame'' @ 1411195b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Ping_RoundTripInclFrame__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Ping_RoundTripInclFrame ==
      (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripInclFrame>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Ping_RoundTripInclFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_RoundTripInclFrame,*pFVar1,
               L"Ping (Incl. Frame)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Ping_UDPQoS'' @ 141119640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Ping_UDPQoS__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Ping_UDPQoS == (FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Ping_UDPQoS");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_UDPQoS,*pFVar1,L"Ping (UDP QoS)",
               "STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Ping_UpdatePingTime'' @ 1411196d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Ping_UpdatePingTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Ping_UpdatePingTime == (FThreadSafeStaticStat<FStat_STAT_Ping_UpdatePingTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_Ping_UpdatePingTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_UpdatePingTime,*pFVar1,
               L"UpdatePing Time","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StringIdMap'' @ 141119760

void __cdecl ObjectPropertyTrace::_dynamic_initializer_for__StringIdMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__StringIdMap__);
  return;
}

// `dynamic_initializer_for_'TickerHandle'' @ 141119780

void __cdecl ObjectPropertyTrace::_dynamic_initializer_for__TickerHandle__(void)

{
  atexit(_dynamic_atexit_destructor_for__TickerHandle__);
  return;
}

// `dynamic_initializer_for_'UnmappedReplicators'' @ 1411197a0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__UnmappedReplicators__(void)

{
  ::FName::FName(&UnmappedReplicators,"UnmappedReplicators");
  return;
}

// `dynamic_initializer_for_'VoiceBytesRecv'' @ 1411197c0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__VoiceBytesRecv__(void)

{
  ::FName::FName(&VoiceBytesRecv,"VoiceBytesRecv");
  return;
}

// `dynamic_initializer_for_'VoiceBytesSent'' @ 1411197e0

void __cdecl UE::Net::Metric::_dynamic_initializer_for__VoiceBytesSent__(void)

{
  ::FName::FName(&VoiceBytesSent,"VoiceBytesSent");
  return;
}

// `dynamic_initializer_for_'VoicePacketsRecv'' @ 141119800

void __cdecl UE::Net::Metric::_dynamic_initializer_for__VoicePacketsRecv__(void)

{
  ::FName::FName(&VoicePacketsRecv,"VoicePacketsRecv");
  return;
}

// `dynamic_initializer_for_'VoicePacketsSent'' @ 141119820

void __cdecl UE::Net::Metric::_dynamic_initializer_for__VoicePacketsSent__(void)

{
  ::FName::FName(&VoicePacketsSent,"VoicePacketsSent");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Note_h__Script_Engine_3611725306'' @ 141119840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Note_h__Script_Engine_3611725306__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Note_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h__Script_Engine_713167944'' @ 141119880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h__Script_Engine_713167944__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h__Script_Engine_2297435087'' @ 1411198c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h__Script_Engine_2297435087__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h__Script_Engine_1555592563'' @ 141119900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h__Script_Engine_1555592563__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PackageMapClient_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h__Script_Engine_3833643605'' @ 141119940

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h__Script_Engine_3833643605__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h__Script_Engine_2674511998'' @ 141119980

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h__Script_Engine_2674511998__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h__Script_Engine_3414708967'' @ 1411199c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h__Script_Engine_3414708967__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h__Script_Engine_2488479162'' @ 141119a00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h__Script_Engine_2488479162__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h__Script_Engine_3155389268'' @ 141119a40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h__Script_Engine_3155389268__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h__Script_Engine_2707750735'' @ 141119a90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h__Script_Engine_2707750735__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h__Script_Engine_3204995615'' @ 141119ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h__Script_Engine_3204995615__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h__Script_Engine_113779737'' @ 141119b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h__Script_Engine_113779737__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h__Script_Engine_2394631883'' @ 141119b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h__Script_Engine_2394631883__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h__Script_Engine_Statics
             ::ClassInfo,7,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsMutators_h__Script_Engine_2825466014'' @ 141119bb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsMutators_h__Script_Engine_2825466014__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsMutators_h__Script_Engine_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h__Script_Engine_2160354088'' @ 141119bf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h__Script_Engine_2160354088__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h__Script_Engine_2592761286'' @ 141119c30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h__Script_Engine_2592761286__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h__Script_Engine_1522066425'' @ 141119c70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h__Script_Engine_1522066425__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_ReplayResult_h__Script_Engine_2307021680'' @ 141119cb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_ReplayResult_h__Script_Engine_2307021680__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_ReplayResult_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h__Script_Engine_1169100902'' @ 141119d00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h__Script_Engine_1169100902__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h__Script_Engine_2076190999'' @ 141119d40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h__Script_Engine_2076190999__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h__Script_Engine_2918640299'' @ 141119d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h__Script_Engine_2918640299__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h__Script_Engine_3834723198'' @ 141119dc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h__Script_Engine_3834723198__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PackedLevelActor_PackedLevelActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_PackageMap'' @ 141119e00

void __cdecl _dynamic_initializer_for___GCsvCategory_PackageMap__(void)

{
  FString::operator=(&_GCsvCategory_PackageMap.Name,L"PackageMap");
  _GCsvCategory_PackageMap.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_PackageMap.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_PackageMap__);
  return;
}

// Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister @ 1480728e0

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsBaseListener_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsBaseListener",
               &Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton,
               UNetworkMetricsBaseListener::StaticRegisterNativesUNetworkMetricsBaseListener,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsBaseListener>,
               InternalVTableHelperCtorCaller<UNetworkMetricsBaseListener>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsBaseListener.InnerSingleton;
}

// Z_Construct_UClass_UNetworkMetricsConfig @ 148072990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsConfig(void)

{
  if (Z_Registration_Info_UClass_UNetworkMetricsConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkMetricsConfig.OuterSingleton,
               &Z_Construct_UClass_UNetworkMetricsConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsConfig.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ENetworkMetricEnableMode @ 1480729d0

UEnum * __cdecl Z_Construct_UEnum_Engine_ENetworkMetricEnableMode(void)

{
  if (Z_Registration_Info_UEnum_ENetworkMetricEnableMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENetworkMetricEnableMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENetworkMetricEnableMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENetworkMetricEnableMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNetworkMetricConfig @ 148072a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkMetricConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricConfig.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkMetricConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricConfig.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNetworkMetricConfig.InnerSingleton;
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

// ENetworkMetricEnableMode_StaticEnum @ 148072a90

UEnum * __cdecl ENetworkMetricEnableMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkMetricEnableMode,(UObject *)pUVar1,
                       L"ENetworkMetricEnableMode");
  }
  return Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton;
}

// NewStructOps @ 148072b90

void * __cdecl Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkMetricConfig,&UE::CoreUObject::Private::Construct<FNetworkMetricConfig>,&UE::CoreUObject::Private::ConstructForTests<FNetworkMetricConfig>,&UE::CoreUObject::Private::Destruct<FNetworkMetricConfig>,&UE::CoreUObject::Private::Copy<FNetworkMetricConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ANote @ 148072cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANote(void)

{
  if (Z_Registration_Info_UClass_ANote.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANote.OuterSingleton,
               &Z_Construct_UClass_ANote_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANote.OuterSingleton;
}

// Z_Construct_UClass_UOnlineSession @ 1480730a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlineSession(void)

{
  if (Z_Registration_Info_UClass_UOnlineSession.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlineSession.OuterSingleton,
               &Z_Construct_UClass_UOnlineSession_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlineSession.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1480733f0

void * __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FObjectIdAnnotation,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// Z_Construct_UClass_UEngineHandlerComponentFactory @ 1480736d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEngineHandlerComponentFactory(void)

{
  if (Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton,
               &Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton;
}

// Z_Construct_UClass_UNetworkSubsystem @ 148073750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkSubsystem(void)

{
  if (Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton,
               &Z_Construct_UClass_UNetworkSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkSubsystem.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNetworkMetricsMutator @ 148073790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkMetricsMutator_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkMetricsMutatorPercent @ 148073810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorPercent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorPercent.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorPercent.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkMetricsMutatorPercent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorPercent.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorPercent.InnerSingleton;
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

// NewStructOps @ 148073890

void * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutator_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkMetricsMutator,&UE::CoreUObject::Private::Construct<FNetworkMetricsMutator>,&UE::CoreUObject::Private::ConstructForTests<FNetworkMetricsMutator>,&UE::CoreUObject::Private::Destruct<FNetworkMetricsMutator>,&UE::CoreUObject::Private::Copy<FNetworkMetricsMutator>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1480738d0

void * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorAvg_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkMetricsMutatorAvg,&UE::CoreUObject::Private::Construct<FNetworkMetricsMutatorAvg>,&UE::CoreUObject::Private::ConstructForTests<FNetworkMetricsMutatorAvg>,&UE::CoreUObject::Private::Destruct<FNetworkMetricsMutatorAvg>,&UE::CoreUObject::Private::Copy<FNetworkMetricsMutatorAvg>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EPingType_StaticEnum @ 148073910

UEnum * __cdecl EPingType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPingType,(UObject *)pUVar1,L"EPingType");
  }
  return Z_Registration_Info_UEnum_EPingType.OuterSingleton;
}

// EPingAverageType_StaticEnum @ 148073950

UEnum * __cdecl EPingAverageType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPingAverageType,(UObject *)pUVar1,
                       L"EPingAverageType");
  }
  return Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton;
}

// NewStructOps @ 148073990

void * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorMin_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkMetricsMutatorMin,&UE::CoreUObject::Private::Construct<FNetworkMetricsMutatorMin>,&UE::CoreUObject::Private::ConstructForTests<FNetworkMetricsMutatorMin>,&UE::CoreUObject::Private::Destruct<FNetworkMetricsMutatorMin>,&UE::CoreUObject::Private::Copy<FNetworkMetricsMutatorMin>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UObjectReferencer @ 148073a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectReferencer(void)

{
  if (Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton,
               &Z_Construct_UClass_UObjectReferencer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton;
}

// NewStructOps @ 148073ac0

void * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorMax_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkMetricsMutatorMax,&UE::CoreUObject::Private::Construct<FNetworkMetricsMutatorMax>,&UE::CoreUObject::Private::ConstructForTests<FNetworkMetricsMutatorMax>,&UE::CoreUObject::Private::Destruct<FNetworkMetricsMutatorMax>,&UE::CoreUObject::Private::Copy<FNetworkMetricsMutatorMax>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UObjectTraceWorldSubsystem @ 148073c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectTraceWorldSubsystem(void)

{
  if (Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton,
               &Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.OuterSingleton;
}

// NewStructOps @ 148073cd0

void * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorPercent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkMetricsMutatorPercent,&UE::CoreUObject::Private::Construct<FNetworkMetricsMutatorPercent>,&UE::CoreUObject::Private::ConstructForTests<FNetworkMetricsMutatorPercent>,&UE::CoreUObject::Private::Destruct<FNetworkMetricsMutatorPercent>,&UE::CoreUObject::Private::Copy<FNetworkMetricsMutatorPercent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148073d10

void * __thiscall
FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// NewStructOps @ 148073d50

void * __cdecl
Z_Construct_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkMetricsMutatorOutPacketLoss,&UE::CoreUObject::Private::Construct<FNetworkMetricsMutatorOutPacketLoss>,&UE::CoreUObject::Private::ConstructForTests<FNetworkMetricsMutatorOutPacketLoss>,&UE::CoreUObject::Private::Destruct<FNetworkMetricsMutatorOutPacketLoss>,&UE::CoreUObject::Private::Copy<FNetworkMetricsMutatorOutPacketLoss>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148073f40

void * __cdecl
Z_Construct_UScriptStruct_FNetworkMetricsMutatorInPacketLoss_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNetworkMetricsMutatorInPacketLoss,&UE::CoreUObject::Private::Construct<FNetworkMetricsMutatorInPacketLoss>,&UE::CoreUObject::Private::ConstructForTests<FNetworkMetricsMutatorInPacketLoss>,&UE::CoreUObject::Private::Destruct<FNetworkMetricsMutatorInPacketLoss>,&UE::CoreUObject::Private::Copy<FNetworkMetricsMutatorInPacketLoss>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UOnlineBlueprintCallProxyBase @ 148073f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlineBlueprintCallProxyBase(void)

{
  if (Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.OuterSingleton,
               &Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRPCDoSState @ 148074070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRPCDoSState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRPCDoSState.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRPCDoSState.InnerSingleton,
               &Z_Construct_UScriptStruct_FRPCDoSState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRPCDoSState.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRPCDoSState.InnerSingleton;
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

// NewProp_bLogEscalate_SetBit @ 1480740f0

void __cdecl
Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bSendEscalateAnalytics_SetBit @ 148074100

void __cdecl
Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bKickPlayer_SetBit @ 148074110

void __cdecl
Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bTrackRecentRPCs_SetBit @ 148074120

void __cdecl
Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// NewStructOps @ 148074130

void * __cdecl Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRPCDoSState,&UE::CoreUObject::Private::Construct<FRPCDoSState>,&UE::CoreUObject::Private::ConstructForTests<FRPCDoSState>,&UE::CoreUObject::Private::Destruct<FRPCDoSState>,&UE::CoreUObject::Private::Copy<FRPCDoSState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148074220

void * __cdecl Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRPCDoSStateConfig,&UE::CoreUObject::Private::Construct<FRPCDoSStateConfig>,&UE::CoreUObject::Private::ConstructForTests<FRPCDoSStateConfig>,&UE::CoreUObject::Private::Destruct<FRPCDoSStateConfig>,&UE::CoreUObject::Private::Copy<FRPCDoSStateConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UValkyrieMetaData @ 148074310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UValkyrieMetaData(void)

{
  if (Z_Registration_Info_UClass_UValkyrieMetaData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UValkyrieMetaData.OuterSingleton,
               &Z_Construct_UClass_UValkyrieMetaData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UValkyrieMetaData.OuterSingleton;
}

// EReplayResult_StaticEnum @ 148074580

UEnum * __cdecl EReplayResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EReplayResult,(UObject *)pUVar1,L"EReplayResult");
  }
  return Z_Registration_Info_UEnum_EReplayResult.OuterSingleton;
}

// Z_Construct_UClass_UOnlineEngineInterface @ 1480745c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlineEngineInterface(void)

{
  if (Z_Registration_Info_UClass_UOnlineEngineInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlineEngineInterface.OuterSingleton,
               &Z_Construct_UClass_UOnlineEngineInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlineEngineInterface.OuterSingleton;
}

// Z_Construct_UClass_UReplicatedObjectInterface @ 148074840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReplicatedObjectInterface(void)

{
  if (Z_Registration_Info_UClass_UReplicatedObjectInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReplicatedObjectInterface.OuterSingleton,
               &Z_Construct_UClass_UReplicatedObjectInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReplicatedObjectInterface.OuterSingleton;
}

// Z_Construct_UClass_UPackageMapClient @ 148074880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPackageMapClient(void)

{
  if (Z_Registration_Info_UClass_UPackageMapClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPackageMapClient.OuterSingleton,
               &Z_Construct_UClass_UPackageMapClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPackageMapClient.OuterSingleton;
}

// NewStructOps @ 1480749c0

void * __cdecl Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FUniqueNetIdRepl,&UE::CoreUObject::Private::Construct<FUniqueNetIdRepl>,&UE::CoreUObject::Private::ConstructForTests<FUniqueNetIdRepl>,&UE::CoreUObject::Private::Destruct<FUniqueNetIdRepl>,&UE::CoreUObject::Private::SerializeArchive<FUniqueNetIdRepl>,&UE::CoreUObject::Private::NetSerialize<FUniqueNetIdRepl>,&UE::CoreUObject::Private::Copy<FUniqueNetIdRepl>,&UE::CoreUObject::Private::Identical<FUniqueNetIdRepl>,&UE::CoreUObject::Private::ExportTextItem<FUniqueNetIdRepl>,&UE::CoreUObject::Private::ImportTextItem<FUniqueNetIdRepl>,&UE::CoreUObject::Private::GetStructTypeHash<FUniqueNetIdRepl>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1480755e0

void * __thiscall
FNetSequenceNumberTest::_scalar_deleting_destructor_(FNetSequenceNumberTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148075850

void * __thiscall
FNetworkMetricsMutatorAvg::_scalar_deleting_destructor_
          (FNetworkMetricsMutatorAvg *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148075d60

void * __thiscall
FNetworkMetricsMutatorMin::_scalar_deleting_destructor_
          (FNetworkMetricsMutatorMin *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148076270

void * __thiscall
FNetworkMetricsMutatorMax::_scalar_deleting_destructor_
          (FNetworkMetricsMutatorMax *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// Z_Construct_UClass_APackedLevelActor @ 1480763a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APackedLevelActor(void)

{
  if (Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton,
               &Z_Construct_UClass_APackedLevelActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APackedLevelActor.OuterSingleton;
}

// Z_Construct_UClass_URPCDoSDetectionConfig @ 1480768b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URPCDoSDetectionConfig(void)

{
  if (Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton,
               &Z_Construct_UClass_URPCDoSDetectionConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton;
}

// Z_Construct_UScriptStruct_FRPCAnalyticsThreshold @ 1480768f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRPCAnalyticsThreshold(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRPCAnalyticsThreshold.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRPCAnalyticsThreshold.InnerSingleton,
               &Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRPCAnalyticsThreshold.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRPCAnalyticsThreshold.InnerSingleton;
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

// NewStructOps @ 148076a30

void * __cdecl Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRPCAnalyticsThreshold,&UE::CoreUObject::Private::Construct<FRPCAnalyticsThreshold>,&UE::CoreUObject::Private::ConstructForTests<FRPCAnalyticsThreshold>,&UE::CoreUObject::Private::Destruct<FRPCAnalyticsThreshold>,&UE::CoreUObject::Private::Copy<FRPCAnalyticsThreshold>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNetworkMetricsBaseListener @ 148076b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsBaseListener(void)

{
  if (Z_Registration_Info_UClass_UNetworkMetricsBaseListener.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkMetricsBaseListener.OuterSingleton,
               &Z_Construct_UClass_UNetworkMetricsBaseListener_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsBaseListener.OuterSingleton;
}

// Z_Construct_UClass_UNetworkMetricsCSV @ 148076b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsCSV(void)

{
  if (Z_Registration_Info_UClass_UNetworkMetricsCSV.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkMetricsCSV.OuterSingleton,
               &Z_Construct_UClass_UNetworkMetricsCSV_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsCSV.OuterSingleton;
}

// Z_Construct_UClass_UNetworkMetricsCSV_Replication @ 148076ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsCSV_Replication(void)

{
  if (Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.OuterSingleton,
               &Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.OuterSingleton;
}

// Z_Construct_UClass_UNetworkMetricsDatabase @ 148076be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsDatabase(void)

{
  if (Z_Registration_Info_UClass_UNetworkMetricsDatabase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkMetricsDatabase.OuterSingleton,
               &Z_Construct_UClass_UNetworkMetricsDatabase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsDatabase.OuterSingleton;
}

// Z_Construct_UClass_UNetworkMetricsLog @ 148076c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsLog(void)

{
  if (Z_Registration_Info_UClass_UNetworkMetricsLog.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkMetricsLog.OuterSingleton,
               &Z_Construct_UClass_UNetworkMetricsLog_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsLog.OuterSingleton;
}

// Z_Construct_UClass_UNetworkMetricsPerfCounters @ 148076c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsPerfCounters(void)

{
  if (Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.OuterSingleton,
               &Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.OuterSingleton;
}

// Z_Construct_UClass_UNetworkMetricsStats @ 148076ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsStats(void)

{
  if (Z_Registration_Info_UClass_UNetworkMetricsStats.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetworkMetricsStats.OuterSingleton,
               &Z_Construct_UClass_UNetworkMetricsStats_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsStats.OuterSingleton;
}

// NewProp_bRPCDoSDetection_SetBit @ 148076da0

void __cdecl
Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bRPCDoSAnalytics_SetBit @ 148076db0

void __cdecl
Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// Z_Construct_UClass_UObjectLibrary @ 148077030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectLibrary(void)

{
  if (Z_Registration_Info_UClass_UObjectLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectLibrary.OuterSingleton,
               &Z_Construct_UClass_UObjectLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectLibrary.OuterSingleton;
}

// Z_Construct_UClass_UNetPushModelHelpers @ 148077070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNetPushModelHelpers(void)

{
  if (Z_Registration_Info_UClass_UNetPushModelHelpers.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNetPushModelHelpers.OuterSingleton,
               &Z_Construct_UClass_UNetPushModelHelpers_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNetPushModelHelpers.OuterSingleton;
}

// NewProp_bHasBlueprintClasses_SetBit @ 1480770b0

void __cdecl
Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bUseWeakReferences_SetBit @ 1480770c0

void __cdecl
Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bIsFullyLoaded_SetBit @ 1480770d0

void __cdecl Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return;
}

// Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty @ 1480770e0

UFunction * __cdecl Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex @ 148077160

UFunction * __cdecl Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// operator<<<FODSCRequestPayload,TSizedDefaultAllocator<32>_> @ 148077800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FArchive * __cdecl
operator<<<FODSCRequestPayload,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FODSCRequestPayload,TSizedDefaultAllocator<32>_> *param_2)

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
  FODSCRequestPayload *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x68);
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
      DestructItems<FODSCRequestPayload,int>
                ((FODSCRequestPayload *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x27628)) {
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
              operator<<(param_1,(FODSCRequestPayload *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x68));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FODSCRequestPayload,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x868,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FODSCRequestPayload *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x68);
              DefaultConstructItems<FODSCRequestPayload,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
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

// AddLambda<`FODSCManager::FODSCManager'::__l5::<lambda_1>_> @ 148078790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::AddLambda<_FODSCManager::FODSCManager_::__l5::<lambda_1>_>(void *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FODSCManager *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FODSCManager *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TMultiMap_W4EOnScreenMessageSeverity_FCoreDelegates__VFText__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_W4EOnScreenMessageSeverity_FCoreDelegates__VFText___00_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy,`FODSCManager::FODSCManager'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  param_1->__this = (FODSCManager *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FODSCManager *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)((longlong)this + 0x10);
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// ConstructItems<FAssetData,FAssetData,int> @ 148079400

void __cdecl
ConstructItems<FAssetData,FAssetData,int>(void *param_1,FAssetData *param_2,int param_3)

{
  int iVar1;
  ForElementType<int> *_Dst;
  int *piVar2;
  ForElementType<int> *pFVar3;
  ForElementType<int> FVar4;
  
  if (param_3 != 0) {
    piVar2 = (int *)((longlong)param_1 + 100);
    pFVar3 = &(param_2->ChunkIDs).AllocatorInstance.SecondaryData;
    do {
      *(undefined8 *)(piVar2 + -0x19) =
           *(undefined8 *)((longlong)piVar2 + (longlong)param_2 + (-100 - (longlong)param_1));
      *(ForElementType<int> *)(piVar2 + -0x17) = pFVar3[-10];
      *(ForElementType<int> *)(piVar2 + -0x15) = pFVar3[-9];
      *(ForElementType<int> *)(piVar2 + -0x13) = pFVar3[-8];
      FVar4 = pFVar3[-6];
      *(ForElementType<int> *)(piVar2 + -0x11) = pFVar3[-7];
      *(ForElementType<int> *)(piVar2 + -0xf) = FVar4;
      piVar2[-0xd] = *(int *)(pFVar3 + -5);
      piVar2[-0xc] = *(int *)&pFVar3[-5].field_0x4;
      FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
                ((FAssetDataTagMapSharedView *)(piVar2 + -0xb),
                 (FAssetDataTagMapSharedView *)(pFVar3 + -4));
      *(ForElementType<int> *)(piVar2 + -9) = pFVar3[-3];
      FVar4 = pFVar3[-2];
      *(ForElementType<int> *)(piVar2 + -7) = FVar4;
      if (FVar4 != (ForElementType<int>)0x0) {
        LOCK();
        *(int *)((longlong)FVar4 + 8) = *(int *)((longlong)FVar4 + 8) + 1;
        UNLOCK();
      }
      piVar2[-3] = 0;
      piVar2[-2] = 0;
      FVar4 = *pFVar3;
      iVar1 = *(int *)(pFVar3 + 1);
      piVar2[-1] = iVar1;
      if (FVar4 == (ForElementType<int>)0x0) {
        FVar4 = (ForElementType<int>)(pFVar3 + -1);
      }
      if (iVar1 == 0) {
        *piVar2 = 2;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar1,0,(ForElementType<int> *)(piVar2 + -5),iVar1,piVar2);
        _Dst = *(ForElementType<int> **)(piVar2 + -3);
        if (*(ForElementType<int> **)(piVar2 + -3) == (ForElementType<int> *)0x0) {
          _Dst = (ForElementType<int> *)(piVar2 + -5);
        }
        memcpy(_Dst,(void *)FVar4,(longlong)iVar1 << 2);
      }
      piVar2 = piVar2 + 0x1a;
      pFVar3 = pFVar3 + 0xd;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TRefCountPtr<FMaterialShaderMap>,TRefCountPtr<FMaterialShaderMap>,int> @ 148079540

void __cdecl
ConstructItems<TRefCountPtr<FMaterialShaderMap>,TRefCountPtr<FMaterialShaderMap>,int>
          (void *param_1,TRefCountPtr<FMaterialShaderMap> *param_2,int param_3)

{
  FMaterialShaderMap *this;
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = 0;
      this = *(FMaterialShaderMap **)(lVar1 + (longlong)param_1);
      *(FMaterialShaderMap **)param_1 = this;
      if (this != (FMaterialShaderMap *)0x0) {
        FMaterialShaderMap::AddRef(this);
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FODSCRequestPayload,int> @ 1480795b0

void __cdecl DefaultConstructItems<FODSCRequestPayload,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FRPCDoSCounters,int> @ 148079600

void __cdecl DefaultConstructItems<FRPCDoSCounters,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FRPCDoSStateConfig,int> @ 148079630

void __cdecl DefaultConstructItems<FRPCDoSStateConfig,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 9;
    do {
      *(undefined2 *)(lVar1 + -1) = 0;
      *(undefined8 *)(lVar1 + 1) = 0xffffffffffff0000;
      *(undefined2 *)(lVar1 + 9) = 0xffff;
      *(undefined8 *)(lVar1 + 0xb) = 0xffffffffffff01ff;
      *(undefined1 *)(lVar1 + 0x13) = 0xff;
      *(undefined4 *)(lVar1 + 0x15) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x1f) = 0;
      *(undefined8 *)(lVar1 + 0x27) = 0;
      *(undefined8 *)(lVar1 + 0x2f) = 0;
      *(undefined8 *)(lVar1 + 0x37) = 0;
      *(undefined ***)(lVar1 + -9) = &___7FRPCDoSStateConfig__6B_;
      *(undefined8 *)(lVar1 + 0x3f) = 0;
      *(undefined8 *)(lVar1 + 0x47) = 0;
      *(undefined1 *)(lVar1 + 0x4f) = 0;
      *(undefined8 *)(lVar1 + 0x57) = 0;
      *(undefined8 *)(lVar1 + 0x5f) = 0;
      *(undefined1 *)(lVar1 + 0x67) = 0;
      *(undefined2 *)(lVar1 + 0x69) = 0;
      lVar1 = lVar1 + 0x78;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::FNetPing::FMovingAverageStorage,int> @ 1480796c0

void __cdecl
DefaultConstructItems<UE::Net::FNetPing::FMovingAverageStorage,int>(void *param_1,int param_2)

{
  double dVar1;
  undefined8 *puVar2;
  undefined4 uStack_3c;
  TArrayView<UE::Net::FBinnedMovingValueBase::FBin,int> local_38 [2];
  
  dVar1 = __real_3ff0000000000000;
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x88);
    do {
      local_38[0]._12_4_ = uStack_3c;
      local_38[0].ArrayNum = 4;
      puVar2[-0x11] = 0;
      puVar2[-0x10] = 0x7fefffffffffffff;
      puVar2[-0xf] = 0x10000000000000;
      puVar2[-0xe] = 0;
      puVar2[-0xd] = 0;
      *(undefined4 *)(puVar2 + -0xc) = 0;
      local_38[0].DataPtr = (FBin *)(puVar2 + -2);
      UE::Net::FBinnedMovingValueBase::FBinnedMovingValueBase
                ((FBinnedMovingValueBase *)(puVar2 + -0xb),local_38,dVar1,MovingAvg);
      puVar2[-1] = 0;
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2[5] = 0;
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      ((FBin *)(puVar2 + -2))->Sum = 0.0;
      puVar2[-3] = puVar2 + -0x10;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x17;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::FNetPing::FNoAverageStorage,int> @ 1480797d0

void __cdecl
DefaultConstructItems<UE::Net::FNetPing::FNoAverageStorage,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0x7fefffffffffffff;
      puVar1[1] = 0x10000000000000;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Net::FNetPing::FPlayerStateAvgStorage,int> @ 148079820

void __cdecl
DefaultConstructItems<UE::Net::FNetPing::FPlayerStateAvgStorage,int>(void *param_1,int param_2)

{
  ushort *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ushort *)((longlong)param_1 + 0xe);
    do {
      puVar1[-7] = 0;
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      *(undefined1 *)(puVar1 + -3) = 0;
      puVar1[-2] = puVar1[-2] & 0xe000;
      *(byte *)(puVar1 + -1) = (byte)puVar1[-1] & 0xf8;
      *puVar1 = *puVar1 & 0xe000;
      *(byte *)(puVar1 + 1) = (byte)puVar1[1] & 0xf8;
      puVar1[2] = puVar1[2] & 0xe000;
      *(byte *)(puVar1 + 3) = (byte)puVar1[3] & 0xf8;
      puVar1[4] = puVar1[4] & 0xe000;
      *(byte *)(puVar1 + 5) = (byte)puVar1[5] & 0xf8;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0xffff;
      puVar1[0xe] = 0xffff;
      puVar1[0xf] = 0xffff;
      puVar1[0x10] = 0x7fef;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0x10;
      puVar1[0x15] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 0;
      puVar1[0x1c] = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1e] = 0;
      puVar1 = puVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int> @ 148079920

void __cdecl
DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
          (TInstancedStruct<FNetworkMetricsMutator> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FInstancedStruct::Reset(&param_1->InstancedStruct);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNetworkMetricConfig,int> @ 148079960

void __cdecl DestructItems<FNetworkMetricConfig,int>(FNetworkMetricConfig *param_1,int param_2)

{
  TInstancedStruct<FNetworkMetricsMutator> *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->Mutator;
    if (*(void **)((longlong)(this + 2) + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(this + 2) + 8));
    }
    FInstancedStruct::Reset(&this->InstancedStruct);
    param_1 = (FNetworkMetricConfig *)(this + 4);
  }
  return;
}

// DestructItems<FODSCRequestPayload,int> @ 1480799b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl DestructItems<FODSCRequestPayload,int>(FODSCRequestPayload *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ShaderTypeNames;
    do {
      pFVar1 = (((FString *)((longlong)(pTVar2 + 1) + 8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -2))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -3))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 6) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetSet<TComponentInterfaceIterator<IStaticMeshComponent>,`FObjectCacheContext::GetStaticMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetStaticMeshComponents'::__l2::<lambda_2>_> @ 148081570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator> *
__thiscall
FObjectCacheContext::TComponentTypeCache<IStaticMeshComponent,UStaticMesh>::
GetSet<TComponentInterfaceIterator<IStaticMeshComponent>,_FObjectCacheContext::GetStaticMeshComponents_::__l2::<lambda_1>,_FObjectCacheContext::GetStaticMeshComponents_::__l2::<lambda_2>_>
          (TComponentTypeCache<IStaticMeshComponent,UStaticMesh> *this,UStaticMesh *param_1,
          <lambda_1> param_2,<lambda_2> param_3)

{
  TOptional<TMap<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,0>_>_>
  *this_00;
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  UStaticMesh *pUVar6;
  bool bVar7;
  ulonglong uVar8;
  UObject *pUVar9;
  TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar10;
  TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar18;
  uint uVar19;
  undefined1 *puVar20;
  IStaticMeshComponent **ppIVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int *piVar26;
  int iVar27;
  ForElementType<unsigned_int> FVar28;
  bool bVar29;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  int local_140 [2];
  uint local_138;
  uint uStack_134;
  ForElementType<unsigned_int> FStack_130;
  undefined4 local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  UStaticMesh *local_118;
  undefined4 local_110;
  int local_10c;
  UObject *local_108;
  FWeakObjectPtr *local_100;
  IStaticMeshComponent *local_f8;
  UStaticMesh *local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  TObjectCacheIterator<IStaticMeshComponent> local_c0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  FVar1 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar16 = 0;
  local_118 = param_1;
  if (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) != -1) goto LAB_148081b6c;
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId801,"ComputeSkinnedMeshToComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,0x321);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId801);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,0x2000);
  for (lVar3 = 0x3f; 0x200fUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  uVar22 = 1 << ((byte)lVar3 & 0x1f);
  local_110 = (undefined4)lVar3;
  if ((local_50 == 0) || ((int)local_50 < (int)uVar22)) {
    local_50 = uVar22;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar22 != 0) {
      uVar13 = uVar22;
      if (uVar22 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar13 = 0;
          goto LAB_14808169b;
        }
      }
      else {
LAB_14808169b:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
      }
      if (0 < (int)uVar22) {
        uVar25 = (ulonglong)uVar22;
        uVar24 = uVar16;
        do {
          FVar15.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar15.Data = local_58.Data;
          }
          uVar8 = uVar24 & (longlong)(int)uVar22 - 1U;
          uVar24 = uVar24 + 1;
          *(undefined4 *)(FVar15.Data + uVar8 * 4) = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    if (local_50 != 0) {
      local_138 = 0;
      uStack_134 = 1;
      uStack_124 = 0;
      uStack_120 = 0;
      if (local_70 != 0) {
        FVar28 = FVar1;
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = local_78;
        }
        uVar22 = *(uint *)FVar28;
        uVar24 = uVar16;
        while (uVar22 == 0) {
          uStack_120 = (int)uVar24 + 0x20;
          uVar24 = (ulonglong)uStack_120;
          iVar12 = (int)uVar16;
          local_138 = iVar12 + 1;
          uVar16 = (ulonglong)local_138;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_138)
          goto LAB_1480817a4;
          uVar22 = ((uint *)((longlong)FVar28 + 4))[iVar12];
        }
        uStack_134 = ~(uVar22 - 1) & uVar22;
        uVar16 = (ulonglong)uStack_134 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_10c = (int)lVar3;
        uStack_124 = local_10c + -1 + uStack_120;
        uVar16 = (ulonglong)uStack_124;
        if ((int)local_70 < (int)uStack_124) {
LAB_1480817a4:
          uVar16 = (ulonglong)local_70;
          uStack_124 = local_70;
        }
      }
      local_128 = 0xffffffff;
      local_e8 = (longlong *)local_98;
      local_e0._padding_ = CONCAT44(uStack_134,local_138);
      local_e0.CurrentBitIndex = uStack_124;
      local_e0.UnvisitedBitMask = 0xffffffff;
      local_e0._28_4_ = uStack_11c;
      local_e0.BaseBitIndex = uStack_120;
      FStack_130 = FVar1;
      local_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
      if ((int)uVar16 < (int)local_70) {
        do {
          piVar26 = (int *)((longlong)(int)uVar16 * 0x60 + *local_e8);
          uVar22 = piVar26[1];
          uVar19 = *piVar26 - uVar22 ^ uVar22 >> 0xd;
          uVar13 = (-0x61c88647 - uVar19) - uVar22 ^ uVar19 << 8;
          uVar23 = (uVar22 - uVar13) - uVar19 ^ uVar13 >> 0xd;
          uVar19 = (uVar19 - uVar23) - uVar13 ^ uVar23 >> 0xc;
          uVar22 = (uVar13 - uVar19) - uVar23 ^ uVar19 << 0x10;
          uVar23 = (uVar23 - uVar22) - uVar19 ^ uVar22 >> 5;
          uVar13 = (uVar19 - uVar23) - uVar22 ^ uVar23 >> 3;
          uVar22 = (uVar22 - uVar13) - uVar23 ^ uVar13 << 10;
          uVar22 = ((uVar23 - uVar22) - uVar13 ^ uVar22 >> 0xf) & local_50 - 1;
          piVar26[0x17] = uVar22;
          FVar15.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar15.Data = local_58.Data;
          }
          uVar24 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar22;
          piVar26[0x16] = *(int *)(FVar15.Data + uVar24 * 4);
          *(int *)(FVar15.Data + uVar24 * 4) = (int)uVar16;
          local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
          uVar16 = (ulonglong)(uint)local_e0.CurrentBitIndex;
        } while (local_e0.CurrentBitIndex < (int)*(uint *)((longlong)local_e0.Array + 0x18));
      }
    }
  }
  Get<TComponentInterfaceIterator<IStaticMeshComponent>_>(this,&local_c0);
  for (ppIVar21 = local_c0.ArrayView.DataPtr;
      ppIVar21 != local_c0.ArrayView.DataPtr + local_c0.ArrayView.ArrayNum; ppIVar21 = ppIVar21 + 1)
  {
    local_f8 = *ppIVar21;
    uVar22 = ((uint)((ulonglong)local_f8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_f8 >> 4)) *
             -0x7a143595;
    pUVar9 = (UObject *)(**(code **)*local_f8)();
    uVar16 = 0;
    iVar14 = 0;
    local_150.ObjectIndex = 0;
    local_150.ObjectSerialNumber = 0;
    iVar12 = iVar14;
    if (pUVar9 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      local_158.ObjectIndex = 0;
      local_158.ObjectSerialNumber = 0;
      local_108 = pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_108);
      uVar16 = (ulonglong)local_158 >> 0x20;
      iVar14 = local_158.ObjectIndex;
      local_150 = local_158;
      FVar5 = local_150;
      local_150.ObjectSerialNumber = local_158.ObjectSerialNumber;
      iVar12 = local_150.ObjectSerialNumber;
      local_150 = FVar5;
    }
    iVar27 = (int)uVar16;
    uVar19 = iVar14 - iVar27 ^ (uint)(uVar16 >> 0xd);
    uVar13 = (-0x61c88647 - iVar27) - uVar19 ^ uVar19 << 8;
    uVar23 = (iVar27 - uVar13) - uVar19 ^ uVar13 >> 0xd;
    uVar19 = (uVar19 - uVar23) - uVar13 ^ uVar23 >> 0xc;
    uVar13 = (uVar13 - uVar19) - uVar23 ^ uVar19 << 0x10;
    uVar23 = (uVar23 - uVar13) - uVar19 ^ uVar13 >> 5;
    uVar19 = (uVar19 - uVar23) - uVar13 ^ uVar23 >> 3;
    uVar13 = (uVar13 - uVar19) - uVar23 ^ uVar19 << 10;
    uVar13 = (uVar23 - uVar13) - uVar19 ^ uVar13 >> 0xf;
    if (local_98._8_4_ != local_64) {
      FVar15.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_58.Data;
      }
      iVar27 = *(int *)(FVar15.Data + (ulonglong)(local_50 - 1 & uVar13) * 4);
      while (iVar27 != -1) {
        pFVar17 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar27 * 0x60);
        if ((*(int *)pFVar17 == iVar14) && (*(int *)(pFVar17 + 4) == iVar12)) {
          if ((iVar27 != -1) && (pFVar17 != (FScriptContainerElement *)0x0)) goto LAB_148081a88;
          break;
        }
        iVar27 = *(int *)(pFVar17 + 0x58);
      }
    }
    local_100 = &local_150;
    local_168 = 0;
    TSet<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TObjectKey<UStaticMesh>_&&>_>
              ((TSet<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_98,(uint)local_140,
               (TKeyInitializer<TObjectKey<UStaticMesh>_&&> *)(ulonglong)uVar13,(bool *)&local_100);
    pFVar17 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_140[0] * 0x60);
LAB_148081a88:
    uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
    TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>::
    FindOrAddByHash<IStaticMeshComponent_*_const_&>
              ((TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
                *)(pFVar17 + 8),uVar22 ^ uVar22 >> 0x10,&local_f8,(bool *)0x0);
  }
  if (local_c0.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.OwnedArray.AllocatorInstance.Data);
  }
  this_00 = &this->AssetToComponents;
  if ((TOptional<TMap<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,0>_>_>
       *)local_98 != this_00) {
    *(undefined4 *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x48) = 0;
    pvVar2 = *(void **)((longlong)&(this->AssetToComponents).field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    TSet<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ((TSet<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this_00,
               (TSet<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_98);
    if ((*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
                 *)(*pcVar4)();
      return pTVar10;
    }
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_148081b6c:
  pUVar6 = local_118;
  pTVar10 = (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
             *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FObjectCacheContext::TComponentTypeCache<IStaticMeshComponent,UStaticMesh>::
           GetSet<TComponentInterfaceIterator<IStaticMeshComponent>,`FObjectCacheContext::GetStaticMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetStaticMeshComponents'::__l2::<lambda_2>_>'
           ::__l2::_dynamic_atexit_destructor_for__EmptySet__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) == -1) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar29)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
               *)(*pcVar4)();
    return pTVar10;
  }
  local_148.ObjectSerialNumber = 0;
  pTVar18 = pTVar10;
  if (pUVar6 != (UStaticMesh *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    local_f0 = pUVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_f0);
    pTVar18 = (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
               *)((ulonglong)local_148 & 0xffffffff);
  }
  uVar22 = (int)pTVar18 - local_148.ObjectSerialNumber ^ (uint)local_148.ObjectSerialNumber >> 0xd;
  uVar19 = (-0x61c88647 - uVar22) - local_148.ObjectSerialNumber ^ uVar22 << 8;
  uVar13 = (local_148.ObjectSerialNumber - uVar19) - uVar22 ^ uVar19 >> 0xd;
  uVar22 = (uVar22 - uVar13) - uVar19 ^ uVar13 >> 0xc;
  uVar19 = (uVar19 - uVar22) - uVar13 ^ uVar22 << 0x10;
  uVar13 = (uVar13 - uVar19) - uVar22 ^ uVar19 >> 5;
  uVar22 = (uVar22 - uVar13) - uVar19 ^ uVar13 >> 3;
  uVar19 = (uVar19 - uVar22) - uVar13 ^ uVar22 << 10;
  if (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 8) !=
      *(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x34)) {
    puVar20 = *(undefined1 **)((longlong)&(this->AssetToComponents).field0_0x0 + 0x40);
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = (undefined1 *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x38);
    }
    iVar12 = *(int *)(puVar20 +
                     (ulonglong)
                     (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x48) - 1U &
                     ((uVar13 - uVar19) - uVar22 ^ uVar19 >> 0xf)) * 4);
    if (iVar12 != -1) {
      do {
        pTVar11 = (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
                   *)((longlong)iVar12 * 0x60 + *(longlong *)&(this->AssetToComponents).field0_0x0);
        if ((*(int *)&pTVar11->Elements == (int)pTVar18) &&
           (*(uint *)&(pTVar11->Elements).field_0x4 == local_148.ObjectSerialNumber)) {
          if (iVar12 != -1) goto LAB_148081d0e;
          break;
        }
        iVar12 = *(int *)&pTVar11[1].Elements.field_0x8;
      } while (iVar12 != -1);
    }
  }
  pTVar11 = pTVar10;
LAB_148081d0e:
  pTVar18 = (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
             *)&(pTVar11->Elements).field_0x8;
  if (pTVar11 ==
      (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator> *
      )0x0) {
    pTVar18 = pTVar10;
  }
  pTVar10 = &EmptySet;
  if (pTVar18 !=
      (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator> *
      )0x0) {
    pTVar10 = pTVar18;
  }
  return pTVar10;
}

// GetSet<TObjectIterator<UInstancedSkinnedMeshComponent>,`FObjectCacheContext::GetInstancedSkinnedMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetInstancedSkinnedMeshComponents'::__l2::<lambda_2>_> @ 148081d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
* __thiscall
FObjectCacheContext::TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData>::
GetSet<TObjectIterator<UInstancedSkinnedMeshComponent>,_FObjectCacheContext::GetInstancedSkinnedMeshComponents_::__l2::<lambda_1>,_FObjectCacheContext::GetInstancedSkinnedMeshComponents_::__l2::<lambda_2>_>
          (TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData> *this,
          UTransformProviderData *param_1,<lambda_1> param_2,<lambda_2> param_3)

{
  TOptional<TMap<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>_>_>
  *this_00;
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  ulonglong uVar7;
  UTransformProviderData *pUVar8;
  TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar9;
  TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar17;
  uint uVar18;
  undefined1 *puVar19;
  UInstancedSkinnedMeshComponent **ppUVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int *piVar25;
  int iVar26;
  ForElementType<unsigned_int> FVar27;
  bool bVar28;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  int local_140 [2];
  uint local_138;
  uint uStack_134;
  ForElementType<unsigned_int> FStack_130;
  undefined4 local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  UTransformProviderData *local_118;
  undefined4 local_110;
  int local_10c;
  UTransformProviderData *local_108;
  FWeakObjectPtr *local_100;
  UInstancedSkinnedMeshComponent *local_f8;
  UTransformProviderData *local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  TObjectCacheIterator<UInstancedSkinnedMeshComponent> local_c0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  FVar1 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar15 = 0;
  local_118 = param_1;
  if (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) != -1) goto LAB_14808237c;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId801,"ComputeSkinnedMeshToComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,0x321);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId801);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,0x2000);
  for (lVar3 = 0x3f; 0x200fUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  uVar21 = 1 << ((byte)lVar3 & 0x1f);
  local_110 = (undefined4)lVar3;
  if ((local_50 == 0) || ((int)local_50 < (int)uVar21)) {
    local_50 = uVar21;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar21 != 0) {
      uVar12 = uVar21;
      if (uVar21 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar12 = 0;
          goto LAB_148081eab;
        }
      }
      else {
LAB_148081eab:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
      }
      if (0 < (int)uVar21) {
        uVar24 = (ulonglong)uVar21;
        uVar23 = uVar15;
        do {
          FVar14.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_58.Data;
          }
          uVar7 = uVar23 & (longlong)(int)uVar21 - 1U;
          uVar23 = uVar23 + 1;
          *(undefined4 *)(FVar14.Data + uVar7 * 4) = 0xffffffff;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    if (local_50 != 0) {
      local_138 = 0;
      uStack_134 = 1;
      uStack_124 = 0;
      uStack_120 = 0;
      if (local_70 != 0) {
        FVar27 = FVar1;
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_78;
        }
        uVar21 = *(uint *)FVar27;
        uVar23 = uVar15;
        while (uVar21 == 0) {
          uStack_120 = (int)uVar23 + 0x20;
          uVar23 = (ulonglong)uStack_120;
          iVar11 = (int)uVar15;
          local_138 = iVar11 + 1;
          uVar15 = (ulonglong)local_138;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_138)
          goto LAB_148081fb4;
          uVar21 = ((uint *)((longlong)FVar27 + 4))[iVar11];
        }
        uStack_134 = ~(uVar21 - 1) & uVar21;
        uVar15 = (ulonglong)uStack_134 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_10c = (int)lVar3;
        uStack_124 = local_10c + -1 + uStack_120;
        uVar15 = (ulonglong)uStack_124;
        if ((int)local_70 < (int)uStack_124) {
LAB_148081fb4:
          uVar15 = (ulonglong)local_70;
          uStack_124 = local_70;
        }
      }
      local_128 = 0xffffffff;
      local_e8 = (longlong *)local_98;
      local_e0._padding_ = CONCAT44(uStack_134,local_138);
      local_e0.CurrentBitIndex = uStack_124;
      local_e0.UnvisitedBitMask = 0xffffffff;
      local_e0._28_4_ = uStack_11c;
      local_e0.BaseBitIndex = uStack_120;
      FStack_130 = FVar1;
      local_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
      if ((int)uVar15 < (int)local_70) {
        do {
          piVar25 = (int *)((longlong)(int)uVar15 * 0x60 + *local_e8);
          uVar21 = piVar25[1];
          uVar18 = *piVar25 - uVar21 ^ uVar21 >> 0xd;
          uVar12 = (-0x61c88647 - uVar18) - uVar21 ^ uVar18 << 8;
          uVar22 = (uVar21 - uVar12) - uVar18 ^ uVar12 >> 0xd;
          uVar18 = (uVar18 - uVar22) - uVar12 ^ uVar22 >> 0xc;
          uVar21 = (uVar12 - uVar18) - uVar22 ^ uVar18 << 0x10;
          uVar22 = (uVar22 - uVar21) - uVar18 ^ uVar21 >> 5;
          uVar12 = (uVar18 - uVar22) - uVar21 ^ uVar22 >> 3;
          uVar21 = (uVar21 - uVar12) - uVar22 ^ uVar12 << 10;
          uVar21 = ((uVar22 - uVar21) - uVar12 ^ uVar21 >> 0xf) & local_50 - 1;
          piVar25[0x17] = uVar21;
          FVar14.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_58.Data;
          }
          uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
          piVar25[0x16] = *(int *)(FVar14.Data + uVar23 * 4);
          *(int *)(FVar14.Data + uVar23 * 4) = (int)uVar15;
          local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
          uVar15 = (ulonglong)(uint)local_e0.CurrentBitIndex;
        } while (local_e0.CurrentBitIndex < (int)*(uint *)((longlong)local_e0.Array + 0x18));
      }
    }
  }
  Get<TObjectIterator<UInstancedSkinnedMeshComponent>_>(this,&local_c0);
  for (ppUVar20 = local_c0.ArrayView.DataPtr;
      ppUVar20 != local_c0.ArrayView.DataPtr + local_c0.ArrayView.ArrayNum; ppUVar20 = ppUVar20 + 1)
  {
    local_f8 = *ppUVar20;
    uVar21 = ((uint)((ulonglong)local_f8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_f8 >> 4)) *
             -0x7a143595;
    pUVar8 = UInstancedSkinnedMeshComponent::GetTransformProvider(local_f8);
    uVar15 = 0;
    iVar13 = 0;
    local_150.ObjectIndex = 0;
    local_150.ObjectSerialNumber = 0;
    iVar11 = iVar13;
    if (pUVar8 != (UTransformProviderData *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      local_158.ObjectIndex = 0;
      local_158.ObjectSerialNumber = 0;
      local_108 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_108);
      uVar15 = (ulonglong)local_158 >> 0x20;
      iVar13 = local_158.ObjectIndex;
      local_150 = local_158;
      FVar5 = local_150;
      local_150.ObjectSerialNumber = local_158.ObjectSerialNumber;
      iVar11 = local_150.ObjectSerialNumber;
      local_150 = FVar5;
    }
    iVar26 = (int)uVar15;
    uVar18 = iVar13 - iVar26 ^ (uint)(uVar15 >> 0xd);
    uVar12 = (-0x61c88647 - iVar26) - uVar18 ^ uVar18 << 8;
    uVar22 = (iVar26 - uVar12) - uVar18 ^ uVar12 >> 0xd;
    uVar18 = (uVar18 - uVar22) - uVar12 ^ uVar22 >> 0xc;
    uVar12 = (uVar12 - uVar18) - uVar22 ^ uVar18 << 0x10;
    uVar22 = (uVar22 - uVar12) - uVar18 ^ uVar12 >> 5;
    uVar18 = (uVar18 - uVar22) - uVar12 ^ uVar22 >> 3;
    uVar12 = (uVar12 - uVar18) - uVar22 ^ uVar18 << 10;
    uVar12 = (uVar22 - uVar12) - uVar18 ^ uVar12 >> 0xf;
    if (local_98._8_4_ != local_64) {
      FVar14.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_58.Data;
      }
      iVar26 = *(int *)(FVar14.Data + (ulonglong)(local_50 - 1 & uVar12) * 4);
      while (iVar26 != -1) {
        pFVar16 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar26 * 0x60);
        if ((*(int *)pFVar16 == iVar13) && (*(int *)(pFVar16 + 4) == iVar11)) {
          if ((iVar26 != -1) && (pFVar16 != (FScriptContainerElement *)0x0)) goto LAB_148082298;
          break;
        }
        iVar26 = *(int *)(pFVar16 + 0x58);
      }
    }
    local_100 = &local_150;
    local_168 = 0;
    TSet<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TObjectKey<UTransformProviderData>_&&>_>
              ((TSet<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_98,(uint)local_140,
               (TKeyInitializer<TObjectKey<UTransformProviderData>_&&> *)(ulonglong)uVar12,
               (bool *)&local_100);
    pFVar16 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_140[0] * 0x60);
LAB_148082298:
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
    ::FindOrAddByHash<UInstancedSkinnedMeshComponent_*_const_&>
              ((TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
                *)(pFVar16 + 8),uVar21 ^ uVar21 >> 0x10,&local_f8,(bool *)0x0);
  }
  if (local_c0.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.OwnedArray.AllocatorInstance.Data);
  }
  this_00 = &this->AssetToComponents;
  if ((TOptional<TMap<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>_>_>
       *)local_98 != this_00) {
    *(undefined4 *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x48) = 0;
    pvVar2 = *(void **)((longlong)&(this->AssetToComponents).field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    TSet<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ((TSet<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this_00,
               (TSet<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_98);
    if ((*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
                *)(*pcVar4)();
      return pTVar9;
    }
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14808237c:
  pUVar8 = local_118;
  pTVar9 = (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
            *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FObjectCacheContext::
           TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData>::
           GetSet<TObjectIterator<UInstancedSkinnedMeshComponent>,`FObjectCacheContext::GetInstancedSkinnedMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetInstancedSkinnedMeshComponents'::__l2::<lambda_2>_>'
           ::__l2::_dynamic_atexit_destructor_for__EmptySet__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) == -1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar28)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
              *)(*pcVar4)();
    return pTVar9;
  }
  local_148.ObjectSerialNumber = 0;
  pTVar17 = pTVar9;
  if (pUVar8 != (UTransformProviderData *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    local_f0 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_f0);
    pTVar17 = (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
               *)((ulonglong)local_148 & 0xffffffff);
  }
  uVar21 = (int)pTVar17 - local_148.ObjectSerialNumber ^ (uint)local_148.ObjectSerialNumber >> 0xd;
  uVar18 = (-0x61c88647 - uVar21) - local_148.ObjectSerialNumber ^ uVar21 << 8;
  uVar12 = (local_148.ObjectSerialNumber - uVar18) - uVar21 ^ uVar18 >> 0xd;
  uVar21 = (uVar21 - uVar12) - uVar18 ^ uVar12 >> 0xc;
  uVar18 = (uVar18 - uVar21) - uVar12 ^ uVar21 << 0x10;
  uVar12 = (uVar12 - uVar18) - uVar21 ^ uVar18 >> 5;
  uVar21 = (uVar21 - uVar12) - uVar18 ^ uVar12 >> 3;
  uVar18 = (uVar18 - uVar21) - uVar12 ^ uVar21 << 10;
  if (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 8) !=
      *(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x34)) {
    puVar19 = *(undefined1 **)((longlong)&(this->AssetToComponents).field0_0x0 + 0x40);
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = (undefined1 *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x38);
    }
    iVar11 = *(int *)(puVar19 +
                     (ulonglong)
                     (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x48) - 1U &
                     ((uVar12 - uVar18) - uVar21 ^ uVar18 >> 0xf)) * 4);
    if (iVar11 != -1) {
      do {
        pTVar10 = (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
                   *)((longlong)iVar11 * 0x60 + *(longlong *)&(this->AssetToComponents).field0_0x0);
        if ((*(int *)&pTVar10->Elements == (int)pTVar17) &&
           (*(uint *)&(pTVar10->Elements).field_0x4 == local_148.ObjectSerialNumber)) {
          if (iVar11 != -1) goto LAB_14808251e;
          break;
        }
        iVar11 = *(int *)&pTVar10[1].Elements.field_0x8;
      } while (iVar11 != -1);
    }
  }
  pTVar10 = pTVar9;
LAB_14808251e:
  pTVar17 = (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
             *)&(pTVar10->Elements).field_0x8;
  if (pTVar10 ==
      (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar17 = pTVar9;
  }
  pTVar9 = &EmptySet;
  if (pTVar17 !=
      (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar9 = pTVar17;
  }
  return pTVar9;
}

// GetSet<TObjectIterator<USkinnedMeshComponent>,`FObjectCacheContext::GetSkinnedMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetSkinnedMeshComponents'::__l2::<lambda_2>_> @ 148082590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator> *
__thiscall
FObjectCacheContext::TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset>::
GetSet<TObjectIterator<USkinnedMeshComponent>,_FObjectCacheContext::GetSkinnedMeshComponents_::__l2::<lambda_1>,_FObjectCacheContext::GetSkinnedMeshComponents_::__l2::<lambda_2>_>
          (TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset> *this,USkinnedAsset *param_1,
          <lambda_1> param_2,<lambda_2> param_3)

{
  TOptional<TMap<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>_>_>
  *this_00;
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  longlong lVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  ulonglong uVar7;
  USkinnedAsset *pUVar8;
  TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar9;
  TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  *pTVar17;
  uint uVar18;
  undefined1 *puVar19;
  USkinnedMeshComponent **ppUVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int *piVar25;
  int iVar26;
  ForElementType<unsigned_int> FVar27;
  bool bVar28;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  int local_140 [2];
  uint local_138;
  uint uStack_134;
  ForElementType<unsigned_int> FStack_130;
  undefined4 local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  USkinnedAsset *local_118;
  undefined4 local_110;
  int local_10c;
  USkinnedAsset *local_108;
  FWeakObjectPtr *local_100;
  USkinnedMeshComponent *local_f8;
  USkinnedAsset *local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  TObjectCacheIterator<USkinnedMeshComponent> local_c0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  FVar1 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar15 = 0;
  local_118 = param_1;
  if (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) != -1) goto LAB_148082b8c;
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId801,"ComputeSkinnedMeshToComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,0x321);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId801);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,0x2000);
  for (lVar3 = 0x3f; 0x200fUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  uVar21 = 1 << ((byte)lVar3 & 0x1f);
  local_110 = (undefined4)lVar3;
  if ((local_50 == 0) || ((int)local_50 < (int)uVar21)) {
    local_50 = uVar21;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar21 != 0) {
      uVar12 = uVar21;
      if (uVar21 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar12 = 0;
          goto LAB_1480826bb;
        }
      }
      else {
LAB_1480826bb:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
      }
      if (0 < (int)uVar21) {
        uVar24 = (ulonglong)uVar21;
        uVar23 = uVar15;
        do {
          FVar14.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_58.Data;
          }
          uVar7 = uVar23 & (longlong)(int)uVar21 - 1U;
          uVar23 = uVar23 + 1;
          *(undefined4 *)(FVar14.Data + uVar7 * 4) = 0xffffffff;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    if (local_50 != 0) {
      local_138 = 0;
      uStack_134 = 1;
      uStack_124 = 0;
      uStack_120 = 0;
      if (local_70 != 0) {
        FVar27 = FVar1;
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_78;
        }
        uVar21 = *(uint *)FVar27;
        uVar23 = uVar15;
        while (uVar21 == 0) {
          uStack_120 = (int)uVar23 + 0x20;
          uVar23 = (ulonglong)uStack_120;
          iVar11 = (int)uVar15;
          local_138 = iVar11 + 1;
          uVar15 = (ulonglong)local_138;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_138)
          goto LAB_1480827c4;
          uVar21 = ((uint *)((longlong)FVar27 + 4))[iVar11];
        }
        uStack_134 = ~(uVar21 - 1) & uVar21;
        uVar15 = (ulonglong)uStack_134 * 2 + 1;
        lVar3 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        local_10c = (int)lVar3;
        uStack_124 = local_10c + -1 + uStack_120;
        uVar15 = (ulonglong)uStack_124;
        if ((int)local_70 < (int)uStack_124) {
LAB_1480827c4:
          uVar15 = (ulonglong)local_70;
          uStack_124 = local_70;
        }
      }
      local_128 = 0xffffffff;
      local_e8 = (longlong *)local_98;
      local_e0._padding_ = CONCAT44(uStack_134,local_138);
      local_e0.CurrentBitIndex = uStack_124;
      local_e0.UnvisitedBitMask = 0xffffffff;
      local_e0._28_4_ = uStack_11c;
      local_e0.BaseBitIndex = uStack_120;
      FStack_130 = FVar1;
      local_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
      if ((int)uVar15 < (int)local_70) {
        do {
          piVar25 = (int *)((longlong)(int)uVar15 * 0x60 + *local_e8);
          uVar21 = piVar25[1];
          uVar18 = *piVar25 - uVar21 ^ uVar21 >> 0xd;
          uVar12 = (-0x61c88647 - uVar18) - uVar21 ^ uVar18 << 8;
          uVar22 = (uVar21 - uVar12) - uVar18 ^ uVar12 >> 0xd;
          uVar18 = (uVar18 - uVar22) - uVar12 ^ uVar22 >> 0xc;
          uVar21 = (uVar12 - uVar18) - uVar22 ^ uVar18 << 0x10;
          uVar22 = (uVar22 - uVar21) - uVar18 ^ uVar21 >> 5;
          uVar12 = (uVar18 - uVar22) - uVar21 ^ uVar22 >> 3;
          uVar21 = (uVar21 - uVar12) - uVar22 ^ uVar12 << 10;
          uVar21 = ((uVar22 - uVar21) - uVar12 ^ uVar21 >> 0xf) & local_50 - 1;
          piVar25[0x17] = uVar21;
          FVar14.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_58.Data;
          }
          uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar21;
          piVar25[0x16] = *(int *)(FVar14.Data + uVar23 * 4);
          *(int *)(FVar14.Data + uVar23 * 4) = (int)uVar15;
          local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
          uVar15 = (ulonglong)(uint)local_e0.CurrentBitIndex;
        } while (local_e0.CurrentBitIndex < (int)*(uint *)((longlong)local_e0.Array + 0x18));
      }
    }
  }
  Get<TObjectIterator<USkinnedMeshComponent>_>(this,&local_c0);
  for (ppUVar20 = local_c0.ArrayView.DataPtr;
      ppUVar20 != local_c0.ArrayView.DataPtr + local_c0.ArrayView.ArrayNum; ppUVar20 = ppUVar20 + 1)
  {
    local_f8 = *ppUVar20;
    uVar21 = ((uint)((ulonglong)local_f8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_f8 >> 4)) *
             -0x7a143595;
    pUVar8 = USkinnedMeshComponent::GetSkinnedAsset(local_f8);
    uVar15 = 0;
    iVar13 = 0;
    local_150.ObjectIndex = 0;
    local_150.ObjectSerialNumber = 0;
    iVar11 = iVar13;
    if (pUVar8 != (USkinnedAsset *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      local_158.ObjectIndex = 0;
      local_158.ObjectSerialNumber = 0;
      local_108 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_108);
      uVar15 = (ulonglong)local_158 >> 0x20;
      iVar13 = local_158.ObjectIndex;
      local_150 = local_158;
      FVar5 = local_150;
      local_150.ObjectSerialNumber = local_158.ObjectSerialNumber;
      iVar11 = local_150.ObjectSerialNumber;
      local_150 = FVar5;
    }
    iVar26 = (int)uVar15;
    uVar18 = iVar13 - iVar26 ^ (uint)(uVar15 >> 0xd);
    uVar12 = (-0x61c88647 - iVar26) - uVar18 ^ uVar18 << 8;
    uVar22 = (iVar26 - uVar12) - uVar18 ^ uVar12 >> 0xd;
    uVar18 = (uVar18 - uVar22) - uVar12 ^ uVar22 >> 0xc;
    uVar12 = (uVar12 - uVar18) - uVar22 ^ uVar18 << 0x10;
    uVar22 = (uVar22 - uVar12) - uVar18 ^ uVar12 >> 5;
    uVar18 = (uVar18 - uVar22) - uVar12 ^ uVar22 >> 3;
    uVar12 = (uVar12 - uVar18) - uVar22 ^ uVar18 << 10;
    uVar12 = (uVar22 - uVar12) - uVar18 ^ uVar12 >> 0xf;
    if (local_98._8_4_ != local_64) {
      FVar14.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar14.Data = local_58.Data;
      }
      iVar26 = *(int *)(FVar14.Data + (ulonglong)(local_50 - 1 & uVar12) * 4);
      while (iVar26 != -1) {
        pFVar16 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar26 * 0x60);
        if ((*(int *)pFVar16 == iVar13) && (*(int *)(pFVar16 + 4) == iVar11)) {
          if ((iVar26 != -1) && (pFVar16 != (FScriptContainerElement *)0x0)) goto LAB_148082aa8;
          break;
        }
        iVar26 = *(int *)(pFVar16 + 0x58);
      }
    }
    local_100 = &local_150;
    local_168 = 0;
    TSet<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TObjectKey<USkinnedAsset>_&&>_>
              ((TSet<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_98,(uint)local_140,
               (TKeyInitializer<TObjectKey<USkinnedAsset>_&&> *)(ulonglong)uVar12,(bool *)&local_100
              );
    pFVar16 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_140[0] * 0x60);
LAB_148082aa8:
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>::
    FindOrAddByHash<USkinnedMeshComponent_*_const_&>
              ((TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
                *)(pFVar16 + 8),uVar21 ^ uVar21 >> 0x10,&local_f8,(bool *)0x0);
  }
  if (local_c0.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.OwnedArray.AllocatorInstance.Data);
  }
  this_00 = &this->AssetToComponents;
  if ((TOptional<TMap<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>_>_>
       *)local_98 != this_00) {
    *(undefined4 *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x48) = 0;
    pvVar2 = *(void **)((longlong)&(this->AssetToComponents).field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    TSet<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ((TSet<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this_00,
               (TSet<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)local_98);
    if ((*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
                *)(*pcVar4)();
      return pTVar9;
    }
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_148082b8c:
  pUVar8 = local_118;
  pTVar9 = (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
            *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FObjectCacheContext::TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset>::
           GetSet<TObjectIterator<USkinnedMeshComponent>,`FObjectCacheContext::GetSkinnedMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetSkinnedMeshComponents'::__l2::<lambda_2>_>'
           ::__l2::_dynamic_atexit_destructor_for__EmptySet__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0xc) == -1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar28)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
              *)(*pcVar4)();
    return pTVar9;
  }
  local_148.ObjectSerialNumber = 0;
  pTVar17 = pTVar9;
  if (pUVar8 != (USkinnedAsset *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    local_f0 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_f0);
    pTVar17 = (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
               *)((ulonglong)local_148 & 0xffffffff);
  }
  uVar21 = (int)pTVar17 - local_148.ObjectSerialNumber ^ (uint)local_148.ObjectSerialNumber >> 0xd;
  uVar18 = (-0x61c88647 - uVar21) - local_148.ObjectSerialNumber ^ uVar21 << 8;
  uVar12 = (local_148.ObjectSerialNumber - uVar18) - uVar21 ^ uVar18 >> 0xd;
  uVar21 = (uVar21 - uVar12) - uVar18 ^ uVar12 >> 0xc;
  uVar18 = (uVar18 - uVar21) - uVar12 ^ uVar21 << 0x10;
  uVar12 = (uVar12 - uVar18) - uVar21 ^ uVar18 >> 5;
  uVar21 = (uVar21 - uVar12) - uVar18 ^ uVar12 >> 3;
  uVar18 = (uVar18 - uVar21) - uVar12 ^ uVar21 << 10;
  if (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 8) !=
      *(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x34)) {
    puVar19 = *(undefined1 **)((longlong)&(this->AssetToComponents).field0_0x0 + 0x40);
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = (undefined1 *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x38);
    }
    iVar11 = *(int *)(puVar19 +
                     (ulonglong)
                     (*(int *)((longlong)&(this->AssetToComponents).field0_0x0 + 0x48) - 1U &
                     ((uVar12 - uVar18) - uVar21 ^ uVar18 >> 0xf)) * 4);
    if (iVar11 != -1) {
      do {
        pTVar10 = (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
                   *)((longlong)iVar11 * 0x60 + *(longlong *)&(this->AssetToComponents).field0_0x0);
        if ((*(int *)&pTVar10->Elements == (int)pTVar17) &&
           (*(uint *)&(pTVar10->Elements).field_0x4 == local_148.ObjectSerialNumber)) {
          if (iVar11 != -1) goto LAB_148082d2e;
          break;
        }
        iVar11 = *(int *)&pTVar10[1].Elements.field_0x8;
      } while (iVar11 != -1);
    }
  }
  pTVar10 = pTVar9;
LAB_148082d2e:
  pTVar17 = (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
             *)&(pTVar10->Elements).field_0x8;
  if (pTVar10 ==
      (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar17 = pTVar9;
  }
  pTVar9 = &EmptySet;
  if (pTVar17 !=
      (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar9 = pTVar17;
  }
  return pTVar9;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<`ListNetGUIDExports'::__l2::FCompareNetGUIDCount>_>_>_> @ 148082e30

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::__l2::FCompareNetGUIDCount>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_void___cdecl_ListNetGUIDExports(void)_::_2_::FCompareNetGUIDCount>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar15 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_148082f3d:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar14 = param_1 + lVar11;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar14->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
            pTVar14->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) = uVar2;
            iVar15 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar15 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 8) <
                      *(int *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x38)) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                lVar12 = (longlong)iVar15;
                pTVar1 = param_1 + iVar10;
                if (*(int *)((longlong)param_1 + lVar12 * 0x18 + 8) <=
                    *(int *)((pTVar1->ElementData).Pad + 8)) break;
                uVar4 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar2 = *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10);
                TVar5 = param_1[lVar12]._s_1;
                uVar6 = *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8);
                param_1[lVar12]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8) = uVar4;
                *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                pTVar1->_s_1 = TVar5;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar2;
                iVar15 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar15 + -2;
      iVar15 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar13 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 8) <
          *(int *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 0x38)) {
        iVar13 = iVar9;
      }
      iVar13 = iVar13 + 1;
    }
    lVar11 = (longlong)iVar8;
    pTVar14 = param_1 + iVar13;
    if (*(int *)((longlong)param_1 + lVar11 * 0x18 + 8) <= *(int *)((pTVar14->ElementData).Pad + 8))
    goto LAB_148082f3d;
    uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
    iVar9 = iVar13 * 2 + 1;
    uVar2 = *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10);
    TVar5 = param_1[lVar11]._s_1;
    uVar6 = *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8);
    param_1[lVar11]._s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar4;
    *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10) =
         *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
    pTVar14->_s_1 = TVar5;
    *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) = uVar2;
    iVar8 = iVar13;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_> @ 148083050

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>
          param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  longlong lVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar19;
  int iVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar21;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar12 = iVar11;
  iVar20 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_1480831bc:
      if (iVar20 == 0) {
        iVar11 = param_2 + -1;
        lVar17 = (longlong)iVar11;
        if (0 < iVar11) {
          pTVar21 = param_1 + lVar17;
          do {
            uVar3 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 8);
            TVar4 = param_1->_s_1;
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar21->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar3;
            pTVar21->_s_1 = TVar4;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 8) = uVar5;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x10) = uVar6;
            *(undefined8 *)((longlong)(pTVar21->ElementData).Pad + 0x18) = uVar7;
            iVar12 = 0;
            if (1 < iVar11) {
              do {
                iVar20 = iVar12 * 2;
                iVar9 = iVar20 + 1;
                if (iVar20 + 2 < iVar11) {
                  lVar13 = (longlong)iVar20 + 1;
                  lVar1 = (longlong)iVar20 + 2;
                  if (*(int *)(lVar13 * 0x20 + 8 + (longlong)param_1) == 0) {
                    pwVar15 = L"";
                  }
                  else {
                    pwVar15 = *(wchar_t **)&param_1[lVar13]._s_1;
                  }
                  if (*(int *)(lVar1 * 0x20 + 8 + (longlong)param_1) == 0) {
                    pwVar14 = L"";
                  }
                  else {
                    pwVar14 = *(wchar_t **)&param_1[lVar1]._s_1;
                  }
                  iVar16 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
                  if (iVar16 < 0) {
                    iVar9 = iVar20;
                  }
                  iVar9 = iVar9 + 1;
                }
                pTVar18 = param_1 + iVar12;
                pTVar19 = param_1 + iVar9;
                if (*(int *)((longlong)(pTVar19->ElementData).Pad + 8) == 0) {
                  pwVar15 = L"";
                }
                else {
                  pwVar15 = *(wchar_t **)&pTVar19->_s_1;
                }
                if (*(int *)((pTVar18->ElementData).Pad + 8) == 0) {
                  pwVar14 = L"";
                }
                else {
                  pwVar14 = *(wchar_t **)&pTVar18->_s_1;
                }
                iVar12 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
                if (-1 < iVar12) break;
                uVar3 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8);
                TVar4 = pTVar18->_s_1;
                uVar5 = *(undefined8 *)((pTVar18->ElementData).Pad + 8);
                uVar6 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x10);
                uVar7 = *(undefined8 *)((pTVar18->ElementData).Pad + 0x18);
                pTVar18->_s_1 = pTVar19->_s_1;
                *(undefined8 *)((pTVar18->ElementData).Pad + 8) = uVar3;
                uVar3 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18);
                *(undefined8 *)((pTVar18->ElementData).Pad + 0x10) =
                     *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10);
                *(undefined8 *)((pTVar18->ElementData).Pad + 0x18) = uVar3;
                pTVar19->_s_1 = TVar4;
                *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8) = uVar5;
                *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10) = uVar6;
                *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18) = uVar7;
                iVar12 = iVar9;
              } while (iVar9 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar17 = lVar17 + -1;
            pTVar21 = pTVar21 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar9 = iVar20 + -1;
      iVar11 = iVar12 + -2;
      iVar12 = iVar11;
      iVar20 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar16 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      lVar17 = (longlong)iVar11 + 1;
      lVar13 = (longlong)iVar11 + 2;
      if (*(int *)(lVar17 * 0x20 + 8 + (longlong)param_1) == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)&param_1[lVar17]._s_1;
      }
      if (*(int *)(lVar13 * 0x20 + 8 + (longlong)param_1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = *(wchar_t **)&param_1[lVar13]._s_1;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
      if (iVar10 < 0) {
        iVar16 = iVar11;
      }
      iVar16 = iVar16 + 1;
    }
    pTVar21 = param_1 + iVar9;
    pTVar18 = param_1 + iVar16;
    if (*(int *)((longlong)(pTVar18->ElementData).Pad + 8) == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = *(wchar_t **)&pTVar18->_s_1;
    }
    if (*(int *)((pTVar21->ElementData).Pad + 8) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)&pTVar21->_s_1;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
    if (-1 < iVar11) goto LAB_1480831bc;
    uVar3 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 8);
    iVar11 = iVar16 * 2 + 1;
    TVar4 = pTVar21->_s_1;
    uVar5 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
    uVar6 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
    uVar7 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
    pTVar21->_s_1 = pTVar18->_s_1;
    *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) =
         *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar3;
    pTVar18->_s_1 = TVar4;
    *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 8) = uVar5;
    *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x10) = uVar6;
    *(undefined8 *)((longlong)(pTVar18->ElementData).Pad + 0x18) = uVar7;
    iVar9 = iVar16;
  } while( true );
}

// HeapSortInternal<`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows'::__l2::FField,int,FIdentityFunctor,`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows'::__l2::<lambda_1>_> @ 148083330

void __cdecl
AlgoImpl::
HeapSortInternal<_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows_::__l2::FField,int,FIdentityFunctor,_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows_::__l2::<lambda_1>_>
          (FField *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  code *pcVar1;
  FString *pFVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  FField *pFVar15;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar14 = iVar8;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_14808348e:
      if (iVar9 == 0) {
        iVar8 = param_2 + -1;
        lVar13 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar15 = param_1 + lVar13;
          do {
            uVar3 = pFVar15->Bytes;
            iVar14 = 0;
            pFVar2 = param_1->Name;
            uVar4 = param_1->Bytes;
            param_1->Name = pFVar15->Name;
            param_1->Bytes = uVar3;
            pFVar15->Name = pFVar2;
            pFVar15->Bytes = uVar4;
            if (1 < iVar8) {
              do {
                iVar9 = iVar14 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar8) {
                  if (((param_1[iVar6].Name)->Data).ArrayNum == 0) {
                    pwVar11 = L"";
                  }
                  else {
                    pwVar11 = (wchar_t *)((param_1[iVar6].Name)->Data).AllocatorInstance.Data;
                  }
                  if (((param_1[(longlong)iVar9 + 2].Name)->Data).ArrayNum == 0) {
                    pwVar10 = L"";
                  }
                  else {
                    pwVar10 = (wchar_t *)
                              ((param_1[(longlong)iVar9 + 2].Name)->Data).AllocatorInstance.Data;
                  }
                  iVar12 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
                  if (iVar12 < 0) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (((param_1[iVar6].Name)->Data).ArrayNum == 0) {
                  pwVar11 = L"";
                }
                else {
                  pwVar11 = (wchar_t *)((param_1[iVar6].Name)->Data).AllocatorInstance.Data;
                }
                if (((param_1[iVar14].Name)->Data).ArrayNum == 0) {
                  pwVar10 = L"";
                }
                else {
                  pwVar10 = (wchar_t *)((param_1[iVar14].Name)->Data).AllocatorInstance.Data;
                }
                iVar9 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
                if (-1 < iVar9) break;
                pFVar2 = param_1[iVar14].Name;
                uVar3 = param_1[iVar14].Bytes;
                uVar4 = param_1[iVar6].Bytes;
                param_1[iVar14].Name = param_1[iVar6].Name;
                param_1[iVar14].Bytes = uVar4;
                param_1[iVar6].Name = pFVar2;
                param_1[iVar6].Bytes = uVar3;
                iVar14 = iVar6;
              } while (iVar6 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar13 = lVar13 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar8 = iVar14 + -2;
      iVar14 = iVar8;
      iVar9 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar12 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      if (((param_1[iVar12].Name)->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)((param_1[iVar12].Name)->Data).AllocatorInstance.Data;
      }
      if (((param_1[(longlong)iVar8 + 2].Name)->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)((param_1[(longlong)iVar8 + 2].Name)->Data).AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
      if (iVar7 < 0) {
        iVar12 = iVar8;
      }
      iVar12 = iVar12 + 1;
    }
    if (((param_1[iVar12].Name)->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)((param_1[iVar12].Name)->Data).AllocatorInstance.Data;
    }
    if (((param_1[iVar6].Name)->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)((param_1[iVar6].Name)->Data).AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
    if (-1 < iVar8) goto LAB_14808348e;
    pFVar2 = param_1[iVar6].Name;
    uVar3 = param_1[iVar6].Bytes;
    iVar8 = iVar12 * 2 + 1;
    uVar4 = param_1[iVar12].Bytes;
    param_1[iVar6].Name = param_1[iVar12].Name;
    param_1[iVar6].Bytes = uVar4;
    param_1[iVar12].Name = pFVar2;
    param_1[iVar12].Bytes = uVar3;
    iVar6 = iVar12;
  } while( true );
}

// HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,`FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>_>_> @ 1480835e0

void __cdecl
AlgoImpl::
HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FRPCDoSDetection::UpdateSeverity_Private_::__l94::<lambda_1>_>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,_private:_void___cdecl_FRPCDoSDetection::UpdateSeverity_Private(ERPCDoSSeverityUpdate,ERPCDoSEscalateReason)_::_94_::<lambda_1>_>
          param_4)

{
  FName *pFVar1;
  FName *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar11 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1480836e7:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar11 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar3;
            if (1 < iVar7) {
              do {
                iVar9 = iVar11 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>::operator()
                                    (param_4.Predicate,param_1 + (iVar9 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar11;
                bVar5 = `FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>::operator()
                                  (param_4.Predicate,pFVar2,pFVar1);
                if (!bVar5) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar11 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>::operator()
                        (param_4.Predicate,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    bVar5 = `FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>::operator()
                      (param_4.Predicate,pFVar2,pFVar1);
    if (!bVar5) goto LAB_1480836e7;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<ANote> @ 1480837d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ANote>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANote__6B_;
    pFVar2 = FName::FName(&local_res8,L"SceneComp");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar4 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar4;
    (pUVar4->Mobility).Value = '\0';
    AActor::SetHidden(this,true);
    AActor::SetCanBeDamaged(this,false);
  }
  return;
}

// InternalConstructor<APackedLevelActor> @ 148083880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APackedLevelActor>(FObjectInitializer *param_1)

{
  ALevelInstance *this;
  
  this = (ALevelInstance *)param_1->Obj;
  if (this != (ALevelInstance *)0x0) {
    ALevelInstance::ALevelInstance(this);
    this->_padding_ = (longlong)&APackedLevelActor::_vftable__for__AActor__;
    this->_padding_ = (longlong)&APackedLevelActor::_vftable__for__ILevelInstanceInterface__;
  }
  return;
}

// InternalConstructor<UEngineHandlerComponentFactory> @ 1480838c0

void __cdecl InternalConstructor<UEngineHandlerComponentFactory>(FObjectInitializer *param_1)

{
  UHandlerComponentFactory *this;
  
  this = (UHandlerComponentFactory *)param_1->Obj;
  if (this != (UHandlerComponentFactory *)0x0) {
    UHandlerComponentFactory::UHandlerComponentFactory(this,param_1);
    *(undefined ***)this = &___7UEngineHandlerComponentFactory__6B_;
  }
  return;
}

// InternalConstructor<UNetPushModelHelpers> @ 1480838f0

void __cdecl InternalConstructor<UNetPushModelHelpers>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UNetPushModelHelpers__6B_;
  }
  return;
}

// InternalConstructor<UNetworkMetricsBaseListener> @ 148083920

void __cdecl InternalConstructor<UNetworkMetricsBaseListener>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UNetworkMetricsBaseListener__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UNetworkMetricsCSV> @ 148083960

void __cdecl InternalConstructor<UNetworkMetricsCSV>(FObjectInitializer *param_1)

{
  UObject *this;
  bool bVar1;
  int iVar2;
  FString *pFStackX_8;
  FString FStack_18;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x10 = 0;
  *(undefined8 *)(this + 1) = 0;
  *(undefined ***)this = &___7UNetworkMetricsCSV__6B_;
  *(undefined4 *)&this[1].field_0x18 = 0xffffffff;
  FString::FString(&FStack_18,"Networking");
  iVar2 = FCsvProfiler::GetCategoryIndex(&FStack_18);
  if (iVar2 == 1) {
    pFStackX_8 = &FStack_18;
    bVar1 = `UNetworkMetricsCSV::SetCategory'::__l3::<lambda_1>::operator()(&pFStackX_8);
    if (!bVar1) goto LAB_14808ba7e;
  }
  *(int *)&this[1].field_0x18 = iVar2;
LAB_14808ba7e:
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// InternalConstructor<UNetworkMetricsCSV_Replication> @ 148083980

void __cdecl InternalConstructor<UNetworkMetricsCSV_Replication>(FObjectInitializer *param_1)

{
  UNetworkMetricsCSV *this;
  bool bVar1;
  int iVar2;
  FString *local_res8;
  FString local_18;
  
  this = (UNetworkMetricsCSV *)param_1->Obj;
  if (this == (UNetworkMetricsCSV *)0x0) {
    return;
  }
  UNetworkMetricsCSV::UNetworkMetricsCSV(this);
  this->_padding_ = (longlong)&___7UNetworkMetricsCSV_Replication__6B_;
  FString::FString(&local_18,"Replication");
  iVar2 = FCsvProfiler::GetCategoryIndex(&local_18);
  if (iVar2 == 1) {
    local_res8 = &local_18;
    bVar1 = `UNetworkMetricsCSV::SetCategory'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar1) goto LAB_1480839e2;
  }
  this->CategoryIndex = iVar2;
LAB_1480839e2:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// InternalConstructor<UNetworkMetricsConfig> @ 148083a10

void __cdecl InternalConstructor<UNetworkMetricsConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNetworkMetricsConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNetworkMetricsDatabase> @ 148083a50

void __cdecl InternalConstructor<UNetworkMetricsDatabase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNetworkMetricsDatabase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x4 = 0x80;
    *(undefined4 *)&this[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[4].field_0xc = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x4 = 0x80;
    *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[6].field_0xc = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)&this[8].field_0x4 = 0x80;
    *(undefined4 *)&this[8].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[8].field_0xc = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined4 *)&this[8].field_0x20 = 0;
    *(undefined8 *)(this + 9) = 0;
    *(undefined8 *)&this[9].field_0x8 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined4 *)(this + 10) = 0;
    *(undefined4 *)&this[10].field_0x4 = 0x80;
    *(undefined4 *)&this[10].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[10].field_0xc = 0;
    *(undefined8 *)&this[10].field_0x18 = 0;
    *(undefined4 *)&this[10].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UNetworkMetricsLog> @ 148083bc0

void __cdecl InternalConstructor<UNetworkMetricsLog>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &___7UNetworkMetricsLog__6B_;
  }
  return;
}

// InternalConstructor<UNetworkMetricsPerfCounters> @ 148083c00

void __cdecl InternalConstructor<UNetworkMetricsPerfCounters>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &___7UNetworkMetricsPerfCounters__6B_;
  }
  return;
}

// InternalConstructor<UNetworkMetricsStats> @ 148083c40

void __cdecl InternalConstructor<UNetworkMetricsStats>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined ***)this = &___7UNetworkMetricsStats__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UNetworkSubsystem> @ 148083c80

void __cdecl InternalConstructor<UNetworkSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UNetworkSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UObjectLibrary> @ 148083ce0

void __cdecl InternalConstructor<UObjectLibrary>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)&this[2].field_0x20 = 0x101;
    *(undefined ***)this = &___7UObjectLibrary__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined2 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x18 = 2;
    *(undefined8 *)&this[4].field_0x10 = 2;
  }
  return;
}

// InternalConstructor<UObjectReferencer> @ 148083d80

void __cdecl InternalConstructor<UObjectReferencer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectReferencer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UObjectTraceWorldSubsystem> @ 148083dc0

void __cdecl InternalConstructor<UObjectTraceWorldSubsystem>(FObjectInitializer *param_1)

{
  UWorldSubsystem *this;
  
  this = (UWorldSubsystem *)param_1->Obj;
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this);
    this->_padding_ = (longlong)&___7UObjectTraceWorldSubsystem__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UOnlineBlueprintCallProxyBase> @ 148083e00

void __cdecl InternalConstructor<UOnlineBlueprintCallProxyBase>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UOnlineBlueprintCallProxyBase__6B_;
    UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
    return;
  }
  return;
}

// InternalConstructor<UOnlineEngineInterface> @ 148083e50

void __cdecl InternalConstructor<UOnlineEngineInterface>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOnlineEngineInterface__6B_;
  }
  return;
}

// InternalConstructor<UOnlineSession> @ 148083e80

void __cdecl InternalConstructor<UOnlineSession>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOnlineSession__6B_;
  }
  return;
}

// InternalConstructor<UPackageMapClient> @ 148083eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPackageMapClient>(FObjectInitializer *param_1)

{
  if ((UPackageMapClient *)param_1->Obj != (UPackageMapClient *)0x0) {
    UPackageMapClient::UPackageMapClient((UPackageMapClient *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<URPCDoSDetectionConfig> @ 148083ed0

void __cdecl InternalConstructor<URPCDoSDetectionConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7URPCDoSDetectionConfig__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UReplicatedObjectInterface> @ 148083f30

void __cdecl InternalConstructor<UReplicatedObjectInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UReplicatedObjectInterface__6B_;
  }
  return;
}

// InternalConstructor<UValkyrieMetaData> @ 148083f60

void __cdecl InternalConstructor<UValkyrieMetaData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UValkyrieMetaData__6B_;
    FName::FName((FName *)(this + 1),L"Valkyrie_DevelopmentStatus");
    FString::FString((FString *)&this[1].field_0x8,L"Experimental");
    FName::FName((FName *)&this[1].field_0x18,L"Valkyrie_DeprecationStatus");
    FString::FString((FString *)&this[1].field_0x20,L"Deprecated");
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<ANote> @ 148083fe0

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

UObject * __cdecl InternalVTableHelperCtorCaller<ANote>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ANote::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ANote__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APackedLevelActor> @ 148084090

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

UObject * __cdecl InternalVTableHelperCtorCaller<APackedLevelActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ALevelInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APackedLevelActor::GetPrivateStaticClass();
  this = (ALevelInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ALevelInstance *)0x0) {
    ALevelInstance::ALevelInstance(this,param_1);
    this->_padding_ = (longlong)&APackedLevelActor::_vftable__for__AActor__;
    this->_padding_ = (longlong)&APackedLevelActor::_vftable__for__ILevelInstanceInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEngineHandlerComponentFactory> @ 148084150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UEngineHandlerComponentFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEngineHandlerComponentFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UHandlerComponentFactory::UHandlerComponentFactory((UHandlerComponentFactory *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEngineHandlerComponentFactory__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetPushModelHelpers> @ 148084200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetPushModelHelpers>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetPushModelHelpers::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetPushModelHelpers__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkMetricsBaseListener> @ 1480842b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetworkMetricsBaseListener>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkMetricsBaseListener::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetworkMetricsBaseListener__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkMetricsCSV> @ 148084370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkMetricsCSV>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkMetricsCSV::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UNetworkMetricsCSV__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkMetricsCSV_Replication> @ 148084430

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetworkMetricsCSV_Replication>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkMetricsCSV_Replication::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UNetworkMetricsCSV_Replication__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkMetricsConfig> @ 1480844f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkMetricsConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkMetricsConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetworkMetricsConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkMetricsDatabase> @ 1480845b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkMetricsDatabase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkMetricsDatabase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNetworkMetricsDatabase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0xc = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 8) = 0;
    *(undefined4 *)&pUVar1[8].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0xc = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0xc = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[10].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkMetricsLog> @ 148084790

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkMetricsLog>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkMetricsLog::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UNetworkMetricsLog__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkMetricsPerfCounters> @ 148084850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNetworkMetricsPerfCounters>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkMetricsPerfCounters::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UNetworkMetricsPerfCounters__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkMetricsStats> @ 148084910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkMetricsStats>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkMetricsStats::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UNetworkMetricsStats__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNetworkSubsystem> @ 1480849d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNetworkSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNetworkSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UNetworkSubsystem__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].field_0x30 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x34 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectLibrary> @ 148084ab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectLibrary__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 2;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectReferencer> @ 148084bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectReferencer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectReferencer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectReferencer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectTraceWorldSubsystem> @ 148084c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectTraceWorldSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectTraceWorldSubsystem::GetPrivateStaticClass();
  this = (UWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWorldSubsystem *)0x0) {
    UWorldSubsystem::UWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&___7UObjectTraceWorldSubsystem__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlineBlueprintCallProxyBase> @ 148084d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOnlineBlueprintCallProxyBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlineBlueprintCallProxyBase::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UOnlineBlueprintCallProxyBase__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlineEngineInterface> @ 148084de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOnlineEngineInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlineEngineInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOnlineEngineInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlineSession> @ 148084e90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOnlineSession>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlineSession::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOnlineSession__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPackageMapClient> @ 148084f40

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

UObject * __cdecl InternalVTableHelperCtorCaller<UPackageMapClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPackageMapClient *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPackageMapClient::GetPrivateStaticClass();
  pUVar3 = (UPackageMapClient *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPackageMapClient *)0x0) {
    pUVar3 = UPackageMapClient::UPackageMapClient(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URPCDoSDetectionConfig> @ 148084fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URPCDoSDetectionConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URPCDoSDetectionConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7URPCDoSDetectionConfig__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UReplicatedObjectInterface> @ 1480850b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UReplicatedObjectInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReplicatedObjectInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UReplicatedObjectInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UValkyrieMetaData> @ 148085160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UValkyrieMetaData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UValkyrieMetaData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UValkyrieMetaData__6B_;
    FName::FName((FName *)(pUVar1 + 1),L"Valkyrie_DevelopmentStatus");
    FString::FString((FString *)&pUVar1[1].field_0x8,L"Experimental");
    FName::FName((FName *)&pUVar1[1].field_0x18,L"Valkyrie_DeprecationStatus");
    FString::FString((FString *)&pUVar1[1].field_0x20,L"Deprecated");
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<`ListNetGUIDExports'::__l2::FCompareNetGUIDCount>_>_>_> @ 148085250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::__l2::FCompareNetGUIDCount>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_void___cdecl_ListNetGUIDExports(void)_::_2_::FCompareNetGUIDCount>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
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
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_148085320:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_148085370:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000148085379;
          goto LAB_148085383;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)((pTVar1->ElementData).Pad + 8) < *(int *)((pTVar13->ElementData).Pad + 8))
            {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_1480854a5;
      }
LAB_148085496:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::__l2::FCompareNetGUIDCount>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_1480854a5:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000148085379:
  if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)pTVar9 + 0x20))
  goto LAB_148085370;
LAB_148085383:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(int *)((longlong)pTVar11 + -0x10) <= *(int *)((pTVar12->ElementData).Pad + 8));
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x10);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x20);
    uVar3 = *(undefined8 *)((longlong)pTVar9 + 0x28);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x20) = uVar2;
    *(undefined8 *)((longlong)pTVar9 + 0x28) = *(undefined8 *)((longlong)pTVar11 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
    goto LAB_148085370;
  }
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_1480854a5;
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
    if (pTVar8 <= pTVar13) goto LAB_1480854a5;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_148085496;
  goto LAB_148085320;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_> @ 148085560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar17;
    memset(local_330,0,0x2e8);
    ppTVar12 = &local_348;
    do {
      pTVar9 = ppTVar12[1];
      pTVar16 = *ppTVar12;
      local_358 = ppTVar12[2];
      iVar6 = (int)((longlong)pTVar9 - (longlong)pTVar16 >> 5) + 1;
      pTVar15 = pTVar16;
      iVar11 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148085620:
        if (8 < iVar6) {
          uVar1 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
          pTVar13 = pTVar9 + 1;
          pTVar16 = pTVar15 + iVar6 / 2;
          TVar2 = pTVar16->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
          pTVar16->_s_1 = pTVar15->_s_1;
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar1;
          pTVar15->_s_1 = TVar2;
          *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar5;
          pTVar16 = pTVar15;
LAB_148085660:
          pTVar10 = pTVar16;
          pTVar16 = pTVar10 + 1;
          if (pTVar16 <= pTVar9) goto code_r0x000148085669;
          goto LAB_1480856a0;
        }
        for (; pTVar13 = pTVar15, pTVar16 = pTVar15, pTVar15 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar10 = pTVar13, pTVar16 = pTVar16 + 1, pTVar16 <= pTVar9) {
            if (*(int *)((pTVar16->ElementData).Pad + 8) == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = *(wchar_t **)&pTVar16->_s_1;
            }
            if (*(int *)((pTVar10->ElementData).Pad + 8) == 0) {
              pwVar7 = L"";
            }
            else {
              pwVar7 = *(wchar_t **)&pTVar10->_s_1;
            }
            iVar11 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
            pTVar13 = pTVar16;
            if (-1 < iVar11) {
              pTVar13 = pTVar10;
            }
          }
          TVar2 = pTVar10->_s_1;
          uVar1 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x10);
          uVar4 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x18);
          uVar5 = *(undefined8 *)((pTVar9->ElementData).Pad + 8);
          pTVar10->_s_1 = pTVar9->_s_1;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar9->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar9->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x18) = uVar5;
          pTVar9->_s_1 = TVar2;
          *(undefined8 *)((pTVar9->ElementData).Pad + 8) = uVar1;
          *(undefined8 *)((pTVar9->ElementData).Pad + 0x10) = uVar3;
          *(undefined8 *)((pTVar9->ElementData).Pad + 0x18) = uVar4;
        }
        goto LAB_1480857b4;
      }
LAB_1480857a3:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
                (pTVar16,iVar6,param_3,param_4);
LAB_1480857b4:
      ppTVar12 = ppTVar12 + -3;
    } while (&local_348 <= ppTVar12);
  }
  return;
code_r0x000148085669:
  if (*(int *)((longlong)pTVar10 + 0x28) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)&pTVar16->_s_1;
  }
  if (*(int *)((pTVar15->ElementData).Pad + 8) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)&pTVar15->_s_1;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
  if (-1 < iVar6) goto LAB_148085660;
LAB_1480856a0:
  do {
    pTVar14 = pTVar13;
    pTVar13 = pTVar14 + -1;
    if (pTVar13 <= pTVar15) break;
    if (*(int *)((pTVar15->ElementData).Pad + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)&pTVar15->_s_1;
    }
    if (*(int *)((longlong)pTVar14 + -0x18) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)&pTVar13->_s_1;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar8);
  } while (-1 < iVar6);
  uVar1 = *(undefined8 *)((longlong)pTVar14 + -0x18);
  if (pTVar16 <= pTVar13) {
    TVar2 = pTVar16->_s_1;
    uVar3 = *(undefined8 *)((longlong)pTVar10 + 0x28);
    uVar4 = *(undefined8 *)((longlong)pTVar10 + 0x30);
    uVar5 = *(undefined8 *)((longlong)pTVar10 + 0x38);
    pTVar16->_s_1 = pTVar13->_s_1;
    *(undefined8 *)((longlong)pTVar10 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar14 + -8);
    *(undefined8 *)((longlong)pTVar10 + 0x30) = *(undefined8 *)((longlong)pTVar14 + -0x10);
    *(undefined8 *)((longlong)pTVar10 + 0x38) = uVar1;
    pTVar13->_s_1 = TVar2;
    *(undefined8 *)((longlong)pTVar14 + -0x18) = uVar3;
    *(undefined8 *)((longlong)pTVar14 + -0x10) = uVar4;
    *(undefined8 *)((longlong)pTVar14 + -8) = uVar5;
    goto LAB_148085660;
  }
  TVar2 = pTVar15->_s_1;
  uVar3 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
  uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
  uVar5 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
  pTVar15->_s_1 = pTVar13->_s_1;
  *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar1;
  iVar11 = iVar11 + -1;
  uVar1 = *(undefined8 *)((longlong)pTVar14 + -8);
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar14 + -0x10);
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar1;
  pTVar13->_s_1 = TVar2;
  *(undefined8 *)((longlong)pTVar14 + -0x18) = uVar3;
  *(undefined8 *)((longlong)pTVar14 + -0x10) = uVar4;
  *(undefined8 *)((longlong)pTVar14 + -8) = uVar5;
  if ((longlong)((longlong)pTVar13 + (-0x20 - (longlong)pTVar15) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar9 - (longlong)pTVar16 & 0xffffffffffffffe0U)) {
    if (pTVar16 < pTVar9) {
      *ppTVar12 = pTVar16;
      ppTVar12[1] = pTVar9;
      *(int *)(ppTVar12 + 2) = iVar11;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar13 <= pTVar15 + 1) goto LAB_1480857b4;
    pTVar9 = pTVar14 + -2;
    pTVar16 = pTVar15;
  }
  else {
    if (pTVar15 + 1 < pTVar13) {
      *ppTVar12 = pTVar15;
      ppTVar12[1] = pTVar14 + -2;
      *(int *)(ppTVar12 + 2) = iVar11;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar9 <= pTVar16) goto LAB_1480857b4;
  }
  iVar6 = (int)((longlong)pTVar9 - (longlong)pTVar16 >> 5) + 1;
  pTVar15 = pTVar16;
  if (iVar11 == 0) goto LAB_1480857a3;
  goto LAB_148085620;
}

// IntroSortInternal<`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows'::__l2::FField,int,FIdentityFunctor,`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows'::__l2::<lambda_1>_> @ 1480858b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows_::__l2::FField,int,FIdentityFunctor,_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows_::__l2::<lambda_1>_>
          (FField *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  ulong64 uVar1;
  FString *pFVar2;
  ulong64 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FField *pFVar7;
  FField *pFVar8;
  FField *pFVar9;
  int iVar10;
  FField **ppFVar11;
  FField *pFVar12;
  FField *pFVar13;
  FField *pFVar14;
  float fVar15;
  undefined1 auStack_388 [48];
  FField *local_358;
  FField *local_348;
  FField *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar15;
    memset(local_330,0,0x2e8);
    ppFVar11 = &local_348;
    do {
      pFVar7 = ppFVar11[1];
      pFVar14 = *ppFVar11;
      local_358 = ppFVar11[2];
      iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar14 >> 4) + 1;
      pFVar13 = pFVar14;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148085970:
        if (8 < iVar4) {
          uVar1 = pFVar13->Bytes;
          pFVar8 = pFVar7 + 1;
          pFVar2 = pFVar13[iVar4 / 2].Name;
          uVar3 = pFVar13[iVar4 / 2].Bytes;
          pFVar13[iVar4 / 2].Name = pFVar13->Name;
          pFVar13[iVar4 / 2].Bytes = uVar1;
          pFVar13->Name = pFVar2;
          pFVar13->Bytes = uVar3;
          pFVar14 = pFVar13;
LAB_1480859a0:
          pFVar12 = pFVar14;
          pFVar14 = pFVar12 + 1;
          if (pFVar14 <= pFVar7) goto code_r0x0001480859a9;
          goto LAB_1480859e0;
        }
        for (; pFVar8 = pFVar13, pFVar14 = pFVar13, pFVar13 < pFVar7; pFVar7 = pFVar7 + -1) {
          while (pFVar12 = pFVar8, pFVar14 = pFVar14 + 1, pFVar14 <= pFVar7) {
            if ((pFVar14->Name->Data).ArrayNum == 0) {
              pwVar6 = L"";
            }
            else {
              pwVar6 = (wchar_t *)(pFVar14->Name->Data).AllocatorInstance.Data;
            }
            if ((pFVar12->Name->Data).ArrayNum == 0) {
              pwVar5 = L"";
            }
            else {
              pwVar5 = (wchar_t *)(pFVar12->Name->Data).AllocatorInstance.Data;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar6);
            pFVar8 = pFVar14;
            if (-1 < iVar10) {
              pFVar8 = pFVar12;
            }
          }
          pFVar2 = pFVar12->Name;
          uVar1 = pFVar12->Bytes;
          uVar3 = pFVar7->Bytes;
          pFVar12->Name = pFVar7->Name;
          pFVar12->Bytes = uVar3;
          pFVar7->Name = pFVar2;
          pFVar7->Bytes = uVar1;
        }
        goto LAB_148085ad2;
      }
LAB_148085ac0:
      HeapSortInternal<_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows_::__l2::FField,int,FIdentityFunctor,_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows_::__l2::<lambda_1>_>
                (pFVar14,iVar4,param_3,param_4);
LAB_148085ad2:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_348 <= ppFVar11);
  }
  return;
code_r0x0001480859a9:
  if ((pFVar14->Name->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar14->Name->Data).AllocatorInstance.Data;
  }
  if ((pFVar13->Name->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar13->Name->Data).AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar6);
  if (-1 < iVar4) goto LAB_1480859a0;
LAB_1480859e0:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar13) break;
    if ((pFVar13->Name->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar13->Name->Data).AllocatorInstance.Data;
    }
    if ((pFVar8->Name->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar8->Name->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar6);
  } while (-1 < iVar4);
  uVar1 = pFVar9[-1].Bytes;
  if (pFVar14 <= pFVar8) {
    pFVar2 = pFVar14->Name;
    uVar3 = pFVar12[1].Bytes;
    pFVar14->Name = pFVar8->Name;
    pFVar12[1].Bytes = uVar1;
    pFVar8->Name = pFVar2;
    pFVar9[-1].Bytes = uVar3;
    goto LAB_1480859a0;
  }
  pFVar2 = pFVar13->Name;
  uVar3 = pFVar13->Bytes;
  iVar10 = iVar10 + -1;
  pFVar13->Name = pFVar8->Name;
  pFVar13->Bytes = uVar1;
  pFVar8->Name = pFVar2;
  pFVar9[-1].Bytes = uVar3;
  if ((longlong)((longlong)pFVar8 + (-0x10 - (longlong)pFVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar7 - (longlong)pFVar14 & 0xfffffffffffffff0U)) {
    if (pFVar14 < pFVar7) {
      *ppFVar11 = pFVar14;
      ppFVar11[1] = pFVar7;
      *(int *)(ppFVar11 + 2) = iVar10;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar8 <= pFVar13 + 1) goto LAB_148085ad2;
    pFVar7 = pFVar9 + -2;
    pFVar14 = pFVar13;
  }
  else {
    if (pFVar13 + 1 < pFVar8) {
      *ppFVar11 = pFVar13;
      ppFVar11[1] = pFVar9 + -2;
      *(int *)(ppFVar11 + 2) = iVar10;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar7 <= pFVar14) goto LAB_148085ad2;
  }
  iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar14 >> 4) + 1;
  pFVar13 = pFVar14;
  if (iVar10 == 0) goto LAB_148085ac0;
  goto LAB_148085970;
}

// IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,`FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>_>_> @ 148085bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FRPCDoSDetection::UpdateSeverity_Private_::__l94::<lambda_1>_>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,_private:_void___cdecl_FRPCDoSDetection::UpdateSeverity_Private(ERPCDoSSeverityUpdate,ERPCDoSEscalateReason)_::_94_::<lambda_1>_>
          param_4)

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FName *pFVar5;
  int iVar6;
  FName **ppFVar7;
  FName *pFVar8;
  FName *pFVar9;
  FName *pFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FName *local_358;
  FName *local_348;
  FName *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppFVar7 = &local_348;
    do {
      pFVar4 = ppFVar7[1];
      pFVar5 = *ppFVar7;
      local_358 = ppFVar7[2];
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 3) + 1;
      pFVar10 = pFVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148085c80:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar8 = pFVar4 + 1;
          FVar1 = pFVar10[iVar3 >> 1];
          pFVar10[iVar3 >> 1] = *pFVar10;
          *pFVar10 = FVar1;
          pFVar5 = pFVar10;
LAB_148085cb0:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar4) goto code_r0x000148085cb9;
          goto LAB_148085cd0;
        }
        for (; pFVar8 = pFVar10, pFVar5 = pFVar10, pFVar10 < pFVar4; pFVar4 = pFVar4 + -1) {
          while (pFVar9 = pFVar8, pFVar5 = pFVar5 + 1, pFVar5 <= pFVar4) {
            bVar2 = `FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>::operator()
                              (param_4.Predicate,pFVar9,pFVar5);
            pFVar8 = pFVar5;
            if (!bVar2) {
              pFVar8 = pFVar9;
            }
          }
          FVar1 = *pFVar9;
          *pFVar9 = *pFVar4;
          *pFVar4 = FVar1;
        }
        goto LAB_148085d96;
      }
LAB_148085d85:
      HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FRPCDoSDetection::UpdateSeverity_Private_::__l94::<lambda_1>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_148085d96:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_348 <= ppFVar7);
  }
  return;
code_r0x000148085cb9:
  bVar2 = `FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>::operator()
                    (param_4.Predicate,pFVar10,pFVar5);
  if (!bVar2) goto LAB_148085cb0;
LAB_148085cd0:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar10) break;
    bVar2 = `FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>::operator()
                      (param_4.Predicate,pFVar8,pFVar10);
  } while (!bVar2);
  if (pFVar5 <= pFVar8) {
    FVar1 = *pFVar5;
    *pFVar5 = *pFVar8;
    *pFVar8 = FVar1;
    goto LAB_148085cb0;
  }
  FVar1 = *pFVar10;
  iVar6 = iVar6 + -1;
  *pFVar10 = *pFVar8;
  *pFVar8 = FVar1;
  if ((longlong)((longlong)pFVar8 + (-8 - (longlong)pFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar4 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar4) {
      *ppFVar7 = pFVar5;
      ppFVar7[1] = pFVar4;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar10 + 1) goto LAB_148085d96;
    pFVar4 = pFVar9 + -2;
    pFVar5 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar8) {
      *ppFVar7 = pFVar10;
      ppFVar7[1] = pFVar9 + -2;
      *(int *)(ppFVar7 + 2) = iVar6;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar4 <= pFVar5) goto LAB_148085d96;
  }
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar5 >> 3) + 1;
  pFVar10 = pFVar5;
  if (iVar6 == 0) goto LAB_148085d85;
  goto LAB_148085c80;
}

// NewObject<UObjectLibrary> @ 148085e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObjectLibrary * __cdecl NewObject<UObjectLibrary>(UObject *param_1)

{
  UClass *pUVar1;
  UObjectLibrary *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UObjectLibrary::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UObjectLibrary *)
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

// NewObject<UOnlineEngineInterface> @ 148085f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOnlineEngineInterface * __cdecl
NewObject<UOnlineEngineInterface>
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
  pUVar1 = UOnlineEngineInterface::StaticClass();
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
  return (UOnlineEngineInterface *)pUVar2;
}

// NewObject<URPCDoSDetectionConfig> @ 148086000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URPCDoSDetectionConfig * __cdecl
NewObject<URPCDoSDetectionConfig>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  URPCDoSDetectionConfig *pUVar2;
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
  pUVar1 = URPCDoSDetectionConfig::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (URPCDoSDetectionConfig *)
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

// SafeNetSerializeTArray_Default<4096,unsigned_char,TSizedDefaultAllocator<32>_> @ 148086a60

bool __cdecl
SafeNetSerializeTArray_Default<4096,unsigned_char,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  size_t _Size;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int local_res8 [2];
  
  local_res8[0] = 0;
  for (lVar9 = 0x3f; 0x1fffUL >> lVar9 == 0; lVar9 = lVar9 + -1) {
  }
  bVar11 = 1;
  if (((param_1->field_0x28 & 4) != 0) &&
     (local_res8[0] = param_2->ArrayNum, 0x1000 < local_res8[0])) {
    bVar11 = 0;
    local_res8[0] = 0x1000;
  }
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8);
  if ((param_1->field_0x28 & 1) != 0) {
    if (0x1000 < local_res8[0]) {
      bVar11 = 0;
      local_res8[0] = 0x1000;
    }
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    _Size = (size_t)local_res8[0];
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_res8[0],&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + iVar5,0,_Size);
  }
  lVar9 = (longlong)local_res8[0];
  uVar8 = 0;
  if (0 < lVar9) {
    lVar10 = 0;
    do {
      if ((param_1->field_0x29 & 2) != 0) break;
      uVar6 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pFVar7 = (param_2->AllocatorInstance).Data + lVar10;
      pFVar1 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
      if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7,1);
      }
      else {
        *pFVar7 = *pFVar1;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar9);
  }
  return (bool)(~((byte)param_1->field_0x29 >> 1) & bVar11);
}

// SafeNetSerializeTArray_HeaderOnly<4096,unsigned_char,TSizedDefaultAllocator<32>_> @ 148086c30

int __cdecl
SafeNetSerializeTArray_HeaderOnly<4096,unsigned_char,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          bool *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  for (lVar1 = 0x3f; 0x1fffUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  if (((param_1->field_0x28 & 4) != 0) &&
     (local_res8[0] = param_2->ArrayNum, 0x1000 < local_res8[0])) {
    *param_3 = false;
    local_res8[0] = 0x1000;
  }
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8);
  if ((param_1->field_0x28 & 1) != 0) {
    if (0x1000 < local_res8[0]) {
      *param_3 = false;
      local_res8[0] = 0x1000;
    }
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    iVar2 = local_res8[0];
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_res8[0],&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + iVar3,0,(longlong)iVar2);
  }
  return local_res8[0];
}

// Sort<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<`ListNetGUIDExports'::__l2::FCompareNetGUIDCount>_> @ 148087010

void __thiscall
TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::__l2::FCompareNetGUIDCount>_>
          (TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_void___cdecl_ListNetGUIDExports(void)_::_2_::FCompareNetGUIDCount>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_void___cdecl_ListNetGUIDExports(void)_::_2_::FCompareNetGUIDCount>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::__l2::FCompareNetGUIDCount>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_void___cdecl_ListNetGUIDExports(void)_::_2_::FCompareNetGUIDCount>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StaticEnum<enum_ENetworkMetricEnableMode> @ 1480870a0

UEnum * __cdecl StaticEnum<enum_ENetworkMetricEnableMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkMetricEnableMode,(UObject *)pUVar1,
                       L"ENetworkMetricEnableMode");
  }
  return Z_Registration_Info_UEnum_ENetworkMetricEnableMode.OuterSingleton;
}

// StaticEnum<enum_EPingAverageType> @ 1480870e0

UEnum * __cdecl StaticEnum<enum_EPingAverageType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPingAverageType,(UObject *)pUVar1,
                       L"EPingAverageType");
  }
  return Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton;
}

// StaticEnum<enum_EPingType> @ 148087120

UEnum * __cdecl StaticEnum<enum_EPingType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPingType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPingType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPingType,(UObject *)pUVar1,L"EPingType");
  }
  return Z_Registration_Info_UEnum_EPingType.OuterSingleton;
}

// StaticEnum<enum_EReplayResult> @ 148087160

UEnum * __cdecl StaticEnum<enum_EReplayResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EReplayResult,(UObject *)pUVar1,L"EReplayResult");
  }
  return Z_Registration_Info_UEnum_EReplayResult.OuterSingleton;
}

// PingAvgData @ 14808ac40

PingAvgData * __thiscall PingAvgData::PingAvgData(PingAvgData *this)

{
  this->PingCount = '\0';
  this->PingSum = 0;
  return this;
}

// StatelessConnectHandlerComponent @ 14808ac60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

StatelessConnectHandlerComponent * __thiscall
StatelessConnectHandlerComponent::StatelessConnectHandlerComponent
          (StatelessConnectHandlerComponent *this)

{
  short sVar1;
  void *_Src;
  code *pcVar2;
  EHandshakeVersion EVar3;
  TConsoleVariableData<FString> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  StatelessConnectHandlerComponent *pSVar9;
  ForElementType<unsigned_int> FVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ForElementType<unsigned_int> FVar15;
  ulonglong uVar16;
  FName local_res8;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  pFVar8 = ::FName::FName(&local_res8,L"StatelessConnectHandlerComponent");
  HandlerComponent::HandlerComponent((HandlerComponent *)this,*pFVar8);
  uVar14 = 0;
  *(undefined ***)this = &___7StatelessConnectHandlerComponent__6B_;
  this->Driver = (UNetDriver *)0x0;
  FBitWriter::FBitWriter(&this->OldPacket);
  this->HandshakeSecret[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HandshakeSecret[0].ArrayNum = 0;
  this->HandshakeSecret[0].ArrayMax = 0;
  this->HandshakeSecret[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->HandshakeSecret[1].ArrayNum = 0;
  this->HandshakeSecret[1].ArrayMax = 0;
  (this->LastChallengeSuccessAddress).Object = (FInternetAddr *)0x0;
  (this->LastChallengeSuccessAddress).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ActiveSecret = 0xff;
  this->LastSecretUpdateTimestamp = 0.0;
  this->LastInitTimestamp = 0.0;
  this->LastServerSequence = 0;
  EVar3 = (EHandshakeVersion)UE::Net::CurrentHandshakeVersion;
  this->LastClientSequence = 0;
  *(undefined8 *)&this->HandshakeFailureCallback = 0;
  *(undefined8 *)&(this->HandshakeFailureCallback).field_0x28 = 0;
  this->MinClientHandshakeVersion = EVar3;
  this->LastValidationLogPeriodStart = 0.0;
  this->ValidationLogCounter = 0;
  this->LastUpgradeMessagePeriodStart = 0.0;
  this->UpgradeMessageCounter = 0;
  this->LastClientSendTimestamp = 0.0;
  this->LastChallengeTimestamp = 0.0;
  this->LastRestartPacketTimestamp = 0.0;
  this->LastSecretId = '\0';
  this->LastTimestamp = 0.0;
  this->LastCookie[0] = '\0';
  this->LastCookie[1] = '\0';
  this->LastCookie[2] = '\0';
  this->LastCookie[3] = '\0';
  this->LastCookie[4] = '\0';
  this->LastCookie[5] = '\0';
  this->LastCookie[6] = '\0';
  this->LastCookie[7] = '\0';
  this->LastCookie[8] = '\0';
  this->LastCookie[9] = '\0';
  this->LastCookie[10] = '\0';
  this->LastCookie[0xb] = '\0';
  this->LastCookie[0xc] = '\0';
  this->LastCookie[0xd] = '\0';
  this->LastCookie[0xe] = '\0';
  this->LastCookie[0xf] = '\0';
  this->LastCookie[0x10] = '\0';
  this->LastCookie[0x11] = '\0';
  this->LastCookie[0x12] = '\0';
  this->LastCookie[0x13] = '\0';
  this->bRestartedHandshake = false;
  this->AuthorisedCookie[0] = '\0';
  this->AuthorisedCookie[1] = '\0';
  this->AuthorisedCookie[2] = '\0';
  this->AuthorisedCookie[3] = '\0';
  this->AuthorisedCookie[4] = '\0';
  this->AuthorisedCookie[5] = '\0';
  this->AuthorisedCookie[6] = '\0';
  this->AuthorisedCookie[7] = '\0';
  this->AuthorisedCookie[8] = '\0';
  this->AuthorisedCookie[9] = '\0';
  this->AuthorisedCookie[10] = '\0';
  this->AuthorisedCookie[0xb] = '\0';
  this->AuthorisedCookie[0xc] = '\0';
  this->AuthorisedCookie[0xd] = '\0';
  this->AuthorisedCookie[0xe] = '\0';
  this->AuthorisedCookie[0xf] = '\0';
  this->AuthorisedCookie[0x10] = '\0';
  this->AuthorisedCookie[0x11] = '\0';
  this->AuthorisedCookie[0x12] = '\0';
  this->AuthorisedCookie[0x13] = '\0';
  (this->MagicHeader).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->MagicHeader).NumBits = 0;
  *(undefined8 *)&(this->MagicHeader).MaxBits = 0x80;
  this->SentHandshakePacketCount = '\0';
  this->LastRemoteHandshakeVersion = (EHandshakeVersion)UE::Net::CurrentHandshakeVersion;
  this->CachedGlobalNetTravelCount = 0;
  this->CachedClientID = 0;
  HandlerComponent::SetActive((HandlerComponent *)this,true);
  this->field_0x18 = 1;
  pTVar4 = CVarNetMagicHeader.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    uVar16 = 0x10;
    if (!bVar5) goto LAB_14808addd;
  }
  uVar16 = uVar14;
LAB_14808addd:
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = *(int *)((longlong)&pTVar4->ShadowedValue[0].Data.ArrayNum + uVar16);
  lVar12 = (longlong)local_30;
  _Src = *(void **)((longlong)&pTVar4->ShadowedValue[0].Data.AllocatorInstance.Data + uVar16);
  if (local_30 == 0) {
    local_2c = 0;
    iVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar12 * 2);
    iVar7 = local_30;
  }
  if (1 < iVar7) {
    iVar6 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    if (iVar6 < 0x21) {
      bVar5 = true;
      uVar16 = uVar14;
      while( true ) {
        iVar6 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar6 = 0;
        }
        iVar13 = (int)uVar14;
        if (iVar6 <= iVar13) break;
        if (!bVar5) goto LAB_14808af7c;
        if ((((iVar13 < 0) || (iVar7 == 0)) || (iVar7 + -1 <= iVar13)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          pSVar9 = (StatelessConnectHandlerComponent *)(*pcVar2)();
          return pSVar9;
        }
        sVar1 = *(short *)(local_38.Data + uVar16);
        if ((sVar1 == 0x30) || (sVar1 == 0x31)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->MagicHeader,1);
        FVar10 = (this->MagicHeader).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<unsigned_int>)&this->MagicHeader;
        if (FVar10 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = FVar10;
        }
        bVar11 = (byte)iVar7 & 0x1f;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0x1f;
          bVar11 = bVar11 - 0x20;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        *(uint *)((longlong)FVar15 + (longlong)(iVar7 >> 5) * 4) =
             ~(1 << (bVar11 & 0x1f)) & *(uint *)((longlong)FVar15 + (longlong)(iVar7 >> 5) * 4) |
             (uint)(sVar1 != 0x30) << (bVar11 & 0x1f);
        uVar16 = uVar16 + 2;
        iVar7 = local_30;
      }
      if (bVar5) {
        FVar10 = (this->MagicHeader).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<unsigned_int>)0x0) {
          FVar10 = (ForElementType<unsigned_int>)&this->MagicHeader;
        }
        this->MagicHeaderUint = *(uint *)FVar10;
      }
      else {
LAB_14808af7c:
        if (1 < (byte)LogHandshake._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
        }
        iVar7 = (this->MagicHeader).MaxBits;
        (this->MagicHeader).NumBits = 0;
        if ((iVar7 < 0) || (0x80 < iVar7)) {
          (this->MagicHeader).MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->MagicHeader,0);
        }
      }
    }
    else if (1 < (byte)LogHandshake._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
    }
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return this;
}

// ~TFunction_OwnedObject<`UE::Net::Private::FNetPingICMP::Ping'::__l5::<lambda_1>,0,0> @ 14808cb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FNetPingICMP::Ping'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Net::Private::FNetPingICMP::Ping_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::Private::FNetPingICMP::Ping'::`5'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::Net::Private::FNetPingUDPQoS::Ping'::__l5::<lambda_1>,0,0> @ 14808cb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FNetPingUDPQoS::Ping'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Net::Private::FNetPingUDPQoS::Ping_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::Private::FNetPingUDPQoS::Ping'::`5'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// operator<< @ 1480900a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FODSCRequestPayload *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  int *piVar4;
  uint local_res8 [2];
  Type local_res10 [2];
  uint local_res18 [4];
  
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (uint)param_2->ShaderPlatform;
  local_res10[0] = param_2->FeatureLevel;
  local_res18[0] = (uint)param_2->QualityLevel;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  puVar2 = &param_1->field_0x2a;
  if ((Type *)plVar3[1] < (Type *)*plVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(Type *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  operator<<(param_1,&param_2->MaterialName);
  operator<<(param_1,&param_2->VertexFactoryName);
  operator<<(param_1,&param_2->PipelineName);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ShaderTypeNames);
  piVar1 = &param_2->PermutationId;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<(param_1,&param_2->RequestHash);
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->ShaderPlatform = (EShaderPlatform)local_res8[0];
    param_2->FeatureLevel = local_res10[0];
    param_2->QualityLevel = (Type)local_res18[0];
  }
  return param_1;
}

// operator<< @ 148090240

FArchive * __cdecl operator<<(FArchive *param_1,FUniqueNetIdRepl *param_2)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar5;
  FArchive *pFVar6;
  FUniqueNetId *pFVar7;
  undefined8 *puVar8;
  bool local_res8 [16];
  uint local_res18 [2];
  FName local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  undefined8 local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TSharedPtr<FUniqueNetId_const_,1> local_50;
  TSharedPtr<FUniqueNetId_const_,1> local_40;
  
  if (((param_1->field_0x29 & 1) == 0) || ((char)param_1->field_0x2b < '\0')) {
    FUniqueNetIdRepl::NetSerialize(param_2,param_1,(UPackageMap *)0x0,local_res8);
    return param_1;
  }
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
  local_res18[0] = 0;
  if (bVar4) {
    pTVar5 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_2,&local_50);
    pFVar7 = pTVar5->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    local_res18[0] = (**(code **)(*(longlong *)pFVar7 + 0x20))(pFVar7);
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  bVar1 = param_1->field_0x28;
  if ((int)local_res18[0] < 1) {
    if ((bVar1 & 1) != 0) {
      local_60 = 0;
      pTStack_58 = (TReferenceControllerBase<1> *)0x0;
      (**(code **)(param_2->_padding_ + 8))(param_2,&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_58);
    }
  }
  else {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 1) == 0) {
        return param_1;
      }
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res20);
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.Data.ArrayNum = 0;
      local_80.Data.ArrayMax = 0;
      operator<<(param_1,&local_80);
      FUniqueNetIdRepl::UniqueIdFromString(param_2,local_res20,&local_80);
      local_70.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    }
    else {
      bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
      if ((!bVar4) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("UniqueNetId.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\OnlineReplStructs.cpp"
                             ,0x46,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar3)();
        return pFVar6;
      }
      bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
      if (bVar4) {
        pFVar7 = FUniqueNetIdWrapper::operator->((FUniqueNetIdWrapper *)param_2);
        puVar8 = (undefined8 *)(**(code **)(*(longlong *)pFVar7 + 0x10))(pFVar7,local_88);
      }
      else {
        local_98 = 0;
        puVar8 = &local_98;
      }
      local_90 = *puVar8;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_90);
      pTVar5 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_2,&local_40);
      pFVar7 = pTVar5->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      (**(code **)(*(longlong *)pFVar7 + 0x30))(pFVar7,&local_70);
      operator<<(param_1,&local_70);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  return param_1;
}

// operator<< @ 148090470

FArchive * __cdecl operator<<(FArchive *param_1,FNetFieldExport *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  byte local_res8 [8];
  FName local_res10;
  FString local_28;
  
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = -(param_2->bExportBlob != false) & 2U | param_2->bExported != false;
  if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->bExported = (bool)(local_res8[0] & 1);
    param_2->bExportBlob = (bool)(local_res8[0] >> 1 & 1);
  }
  if (param_2->bExported == false) {
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,&param_2->Handle);
  puVar1 = &param_2->CompatibleChecksum;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    uVar4 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if (uVar4 < 9) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res10);
      operator<<(param_1,&local_28);
      param_2->ExportName = local_res10;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      goto LAB_1480905de;
    }
    if (((param_1->field_0x28 & 1) != 0) &&
       (uVar4 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1), uVar4 < 10)) {
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->ExportName);
      goto LAB_1480905de;
    }
  }
  UPackageMap::StaticSerializeName(param_1,&param_2->ExportName);
LAB_1480905de:
  if (param_2->bExportBlob != false) {
    SafeNetSerializeTArray_Default<4096,unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->Blob);
  }
  return param_1;
}

// operator<< @ 148090610

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FNetFieldExportGroup *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FArchive *pFVar6;
  uint uVar7;
  uint local_res8 [2];
  
  operator<<(param_1,&param_2->PathName);
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,&param_2->PathNameIndex);
  local_res8[0] = (param_2->NetFieldExports).ArrayNum;
  piVar1 = &(param_2->NetFieldExports).ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x1a0))(param_1,local_res8);
  uVar7 = local_res8[0];
  if ((param_1->field_0x28 & 1) != 0) {
    if ((uint)UE::Net::MaxSerializedNetExportsPerGroup < local_res8[0]) {
      if (1 < (byte)LogNetPackageMap._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      }
      FArchiveState::SetError((FArchiveState *)param_1);
      return param_1;
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,local_res8[0],&(param_2->NetFieldExports).AllocatorInstance,piVar1,
                       &(param_2->NetFieldExports).ArrayMax);
    DefaultConstructItems<FNetFieldExport,int>
              ((param_2->NetFieldExports).AllocatorInstance.Data + (longlong)iVar4 * 0x28,uVar7);
  }
  uVar7 = 0;
  if (0 < *piVar1) {
    do {
      uVar5 = 0;
      if ((int)uVar7 < (param_2->NetFieldExports).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar2)();
        return pFVar6;
      }
      operator<<(param_1,(FNetFieldExport *)
                         ((param_2->NetFieldExports).AllocatorInstance.Data +
                         (longlong)(int)uVar7 * 0x28));
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *piVar1);
  }
  return param_1;
}

// operator() @ 148090b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `BroadcastNetFailure'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UWorld *pUVar3;
  
  pUVar3 = (UWorld *)0x0;
  bVar1 = FWeakObjectPtr::IsValid(this);
  pUVar2 = pUVar3;
  if (bVar1) {
    pUVar2 = (UWorld *)FWeakObjectPtr::Get(this);
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 8));
  if (bVar1) {
    pUVar3 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
  }
  UEngine::BroadcastNetworkFailure
            (GEngine,pUVar2,(UNetDriver *)pUVar3,*(Type *)((longlong)this + 0x10),
             (FString *)((longlong)this + 0x18));
  return;
}

// operator() @ 148091470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`ObjectPropertyTrace::TraceObjects'::__l9::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2,int param_3,int param_4,
          TStringBuilderBase<wchar_t> *param_5)

{
  wchar_t wVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ForAnyElementType FVar12;
  int iVar13;
  wchar_t *pwVar14;
  undefined1 auStack_98 [32];
  FString local_78;
  FString local_68;
  undefined8 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_5->End < param_5->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(param_5,1);
  }
  iVar13 = 0;
  *param_5->CurPos = L'\0';
  ::FString::FString(&local_78,param_5->Base);
  pFVar8 = local_78.Data.AllocatorInstance.Data + (longlong)local_78.Data.ArrayNum * 2;
  do {
    if (pFVar8 == local_78.Data.AllocatorInstance.Data) {
      iVar4 = -1;
      goto LAB_148091508;
    }
    pFVar8 = pFVar8 + -2;
  } while (*(wchar_t *)pFVar8 != L'.');
  iVar4 = (int)((longlong)pFVar8 - (longlong)local_78.Data.AllocatorInstance.Data >> 1);
LAB_148091508:
  iVar11 = local_78.Data.ArrayNum + -1;
  pwVar14 = L"";
  if (local_78.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  if (iVar4 < iVar11) {
    iVar11 = iVar4;
  }
  iVar4 = 0;
  if (0 < iVar11) {
    iVar4 = iVar11;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar12.Data = local_78.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_68,(wchar_t *)FVar12.Data,iVar4);
  uVar5 = ObjectPropertyTrace::TraceStringId(param_1);
  uVar6 = ObjectPropertyTrace::TraceStringId(&local_78);
  uVar7 = ObjectPropertyTrace::TraceStringId(&local_68);
  if (-1 < ObjectProperties->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FObjectPropertyValue3Fields>((TLogScope<1> *)&local_58);
    *local_58 = *(undefined8 *)this;
    local_58[1] = *(undefined8 *)((longlong)this + 8);
    if ((param_2->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    wVar1 = *pwVar14;
    pFVar8 = (FScriptContainerElement *)pwVar14;
    while (wVar1 != L'\0') {
      pFVar8 = pFVar8 + 2;
      iVar13 = iVar13 + 1;
      wVar1 = *(wchar_t *)pFVar8;
    }
    UE::Trace::Private::Field_WriteStringWide(6,pwVar14,iVar13);
    uVar10 = (ulonglong)_tls_index;
    *(int *)(local_58 + 2) = param_4;
    pvVar3 = ThreadLocalStoragePointer;
    *(uint *)((longlong)local_58 + 0x14) = uVar5;
    *(uint *)(local_58 + 3) = uVar6;
    *(uint *)((longlong)local_58 + 0x1c) = uVar7;
    lVar2 = *(longlong *)((longlong)pvVar3 + uVar10 * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar9 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar9;
    if (lVar2 != local_50) {
      *(longlong *)(lVar2 + 0x28) = lVar9;
    }
    *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 148091980

/* [thunk]:public: virtual void * __ptr64 __cdecl APackedLevelActor::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
APackedLevelActor::_vector_deleting_destructor__adjustor_704__(APackedLevelActor *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((APackedLevelActor *)&this[-1].field_0xa0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148091994

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FODSCThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FODSCThread::_vector_deleting_destructor__adjustor_8__(FODSCThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FODSCThread *)&this[-1].field_0x188,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1480919b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UWorld_*,UE::Net::TNetResult<enum_EReplayResult>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480919e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy,`FODSCManager::FODSCManager'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091a10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`BroadcastNetFailure'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091a60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FODSCManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FODSCManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091a90

void * __thiscall
TBaseSPMethodDelegateInstance<0,FReplayPlaylistTracker,1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FReplayPlaylistTracker,1,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091af0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FReplayPlaylistTracker,1,void___cdecl(UWorld_*,UE::Net::TNetResult<enum_EReplayResult>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091b50

void * __thiscall
TBasicNetAnalyticsData<FRPCDoSAnalyticsVars>::_scalar_deleting_destructor_
          (TBasicNetAnalyticsData<FRPCDoSAnalyticsVars> *this,uint param_1)

{
  FRPCDoSAnalyticsVars::~FRPCDoSAnalyticsVars((FRPCDoSAnalyticsVars *)&this->field_0x20);
  FNetAnalyticsData::~FNetAnalyticsData((FNetAnalyticsData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091ba0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UWorld_*,UE::Net::TNetResult<enum_EReplayResult>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FNetPingICMP::Ping'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::Private::FNetPingICMP::Ping'::`5'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FNetPingUDPQoS::Ping'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::Private::FNetPingUDPQoS::Ping'::`5'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091c70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRPCAnalytics,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FRPCAnalytics,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091cb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRPCTrackingInfo,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FRPCTrackingInfo,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091cf0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNetFieldExportGroup,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNetFieldExportGroup,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091d30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Net::Private::FNetPingICMP,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Net::Private::FNetPingICMP,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091d70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Net::Private::FNetPingUDPQoS,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Net::Private::FNetPingUDPQoS,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091db0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FQueuedBunchObjectReference,SharedPointerInternals::DefaultDeleter<FQueuedBunchObjectReference>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FQueuedBunchObjectReference,SharedPointerInternals::DefaultDeleter<FQueuedBunchObjectReference>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091df0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRPCDoSAnalyticsData,FNetAnalyticsDataDeleter,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FRPCDoSAnalyticsData,FNetAnalyticsDataDeleter,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<StatelessConnectHandlerComponent,SharedPointerInternals::DefaultDeleter<StatelessConnectHandlerComponent>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<StatelessConnectHandlerComponent,SharedPointerInternals::DefaultDeleter<StatelessConnectHandlerComponent>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091e70

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`FNetGUIDCache::StartAsyncLoadingPackage'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091ea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ANote::_scalar_deleting_destructor_(ANote *this,uint param_1)

{
  *(undefined ***)this = &___7ANote__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091f00

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
APackedLevelActor::_scalar_deleting_destructor_(APackedLevelActor *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ILevelInstanceInterface__;
  ALevelInstance::~ALevelInstance((ALevelInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091f70

void * __thiscall
FArchiveCountMemGUID::_scalar_deleting_destructor_(FArchiveCountMemGUID *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091fb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall FNetGUIDCache::_scalar_deleting_destructor_(FNetGUIDCache *this,uint param_1)

{
  ~FNetGUIDCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x480);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148091ff0

void * __thiscall
FNetworkMetricsMutator::_scalar_deleting_destructor_(FNetworkMetricsMutator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092020

void * __thiscall
FNetworkMetricsMutatorInPacketLoss::_scalar_deleting_destructor_
          (FNetworkMetricsMutatorInPacketLoss *this,uint param_1)

{
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092070

void * __thiscall
FNetworkMetricsMutatorOutPacketLoss::_scalar_deleting_destructor_
          (FNetworkMetricsMutatorOutPacketLoss *this,uint param_1)

{
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480920c0

void * __thiscall
FNetworkMetricsMutatorPercent::_scalar_deleting_destructor_
          (FNetworkMetricsMutatorPercent *this,uint param_1)

{
  ForElementType<FName> FVar1;
  
  FVar1 = (this->SourceMetricNames).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092110

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall FODSCManager::_scalar_deleting_destructor_(FODSCManager *this,uint param_1)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  FVar1.ID = (this->OnScreenMessagesHandle).ID;
  this->_padding_ = (longlong)&___7FODSCManager__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnGetOnScreenMessages,FVar1);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEnginePreExit,
             this);
  StopThread(this);
  pFVar2 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ErrorMessageCS);
  *(undefined4 *)&(this->MaterialInstancesCachedUniformExpressions).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MaterialInstancesCachedUniformExpressions).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*,TWeakObjectPtr<UMaterialInstance_const_,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialInstancesCachedUniformExpressions);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MaterialInstancesCachedUniformExpressionsCS);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480921e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FODSCMessageHandler::_scalar_deleting_destructor_(FODSCMessageHandler *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->OutGlobalShaderMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutMeshMaterialMaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FODSCRequestPayload,int>
            ((FODSCRequestPayload *)(this->RequestBatch).AllocatorInstance.Data,
             (this->RequestBatch).ArrayNum);
  pFVar1 = (this->RequestBatch).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderTypesToLoad).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->MaterialsToLoad).AllocatorInstance.Data,
             (this->MaterialsToLoad).ArrayNum);
  pFVar1 = (this->MaterialsToLoad).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IFileServerMessageHandler_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall FODSCThread::_scalar_deleting_destructor_(FODSCThread *this,uint param_1)

{
  ~FODSCThread(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480922c0

void * __thiscall
FObjectAsTraceIdProxyArchive::_scalar_deleting_destructor_
          (FObjectAsTraceIdProxyArchive *this,uint param_1)

{
  *(undefined ***)this = &___7FObjectAsTraceIdProxyArchive__6B_;
  FNameAsStringProxyArchive::~FNameAsStringProxyArchive((FNameAsStringProxyArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092310

void * __thiscall
FRPCDoSAnalyticsData::_scalar_deleting_destructor_(FRPCDoSAnalyticsData *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->WorldFunc != 0) {
    plVar1 = *(longlong **)&(this->WorldFunc).field_0x28;
    plVar2 = (longlong *)&(this->WorldFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FRPCDoSAnalyticsVars::~FRPCDoSAnalyticsVars((FRPCDoSAnalyticsVars *)&this->field_0x20);
  FNetAnalyticsData::~FNetAnalyticsData((FNetAnalyticsData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092380

void * __thiscall
FRPCDoSStateConfig::_scalar_deleting_destructor_(FRPCDoSStateConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllTimePeriods).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SeverityCategory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRPCDoSState__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480923e0

void * __thiscall
IPlatformFile::IFileServerMessageHandler::_scalar_deleting_destructor_
          (IFileServerMessageHandler *this,uint param_1)

{
  *this = (IFileServerMessageHandler)&___7IFileServerMessageHandler_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void * __thiscall
StatelessConnectHandlerComponent::_scalar_deleting_destructor_
          (StatelessConnectHandlerComponent *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  
  FVar1 = (this->MagicHeader).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if (*(longlong *)&this->HandshakeFailureCallback != 0) {
    plVar2 = *(longlong **)&(this->HandshakeFailureCallback).field_0x28;
    plVar4 = (longlong *)&(this->HandshakeFailureCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastChallengeSuccessAddress).SharedReferenceCount.ReferenceController);
  pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->ActiveSecret;
  lVar5 = 2;
  do {
    pFVar3 = pTVar6[-1].AllocatorInstance.Data;
    pTVar6 = pTVar6 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  } while (lVar5 != 0);
  FBitWriter::~FBitWriter(&this->OldPacket);
  HandlerComponent::~HandlerComponent((HandlerComponent *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480924f0

void * __thiscall
UEngineHandlerComponentFactory::_scalar_deleting_destructor_
          (UEngineHandlerComponentFactory *this,uint param_1)

{
  *(undefined ***)this = &___7UEngineHandlerComponentFactory__6B_;
  UHandlerComponentFactory::~UHandlerComponentFactory((UHandlerComponentFactory *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092550

void * __thiscall
UNetPushModelHelpers::_scalar_deleting_destructor_(UNetPushModelHelpers *this,uint param_1)

{
  *(undefined ***)this = &___7UNetPushModelHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480925b0

void * __thiscall
UNetworkMetricsBaseListener::_scalar_deleting_destructor_
          (UNetworkMetricsBaseListener *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            ((TInstancedStruct<FNetworkMetricsMutator> *)(this->Mutators).AllocatorInstance.Data,
             (this->Mutators).ArrayNum);
  pFVar1 = (this->Mutators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092630

void * __thiscall
UNetworkMetricsCSV::_scalar_deleting_destructor_(UNetworkMetricsCSV *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            ((TInstancedStruct<FNetworkMetricsMutator> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480926b0

void * __thiscall
UNetworkMetricsCSV_Replication::_scalar_deleting_destructor_
          (UNetworkMetricsCSV_Replication *this,uint param_1)

{
  *(undefined ***)this = &___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            (*(TInstancedStruct<FNetworkMetricsMutator> **)&this->field_0x30,
             *(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092730

void * __thiscall
UNetworkMetricsConfig::_scalar_deleting_destructor_(UNetworkMetricsConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetworkMetricsConfig__6B_;
  DestructItems<FNetworkMetricConfig,int>
            ((FNetworkMetricConfig *)(this->Listeners).AllocatorInstance.Data,
             (this->Listeners).ArrayNum);
  pFVar1 = (this->Listeners).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 1480927b0

void * __thiscall
UNetworkMetricsDatabase::_scalar_deleting_destructor_(UNetworkMetricsDatabase *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNetworkMetricsDatabase__6B_;
  *(undefined4 *)&(this->ListenersToMetrics).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ListenersToMetrics).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ListenersToMetrics);
  *(undefined4 *)&(this->LastReportListener).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LastReportListener).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LastReportListener);
  *(undefined4 *)&(this->MetricFloats).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetricFloats).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetricFloats);
  *(undefined4 *)&(this->MetricInts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetricInts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetworkMetric<__int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetricInts);
  *(undefined4 *)&(this->MetricTypes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetricTypes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MetricTypes);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x1b8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480928c0

void * __thiscall
UNetworkMetricsLog::_scalar_deleting_destructor_(UNetworkMetricsLog *this,uint param_1)

{
  *(undefined ***)this = &___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            (*(TInstancedStruct<FNetworkMetricsMutator> **)&this->field_0x30,
             *(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092940

void * __thiscall
UNetworkMetricsPerfCounters::_scalar_deleting_destructor_
          (UNetworkMetricsPerfCounters *this,uint param_1)

{
  *(undefined ***)this = &___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            (*(TInstancedStruct<FNetworkMetricsMutator> **)&this->field_0x30,
             *(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1480929c0

void * __thiscall
UNetworkMetricsStats::_scalar_deleting_destructor_(UNetworkMetricsStats *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            ((TInstancedStruct<FNetworkMetricsMutator> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092a40

void * __thiscall
UNetworkSubsystem::_scalar_deleting_destructor_(UNetworkSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNetworkSubsystem__6B_;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->GroupsManager).SubObjectGroupMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroupsManager);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092ae0

void * __thiscall UObjectLibrary::_scalar_deleting_destructor_(UObjectLibrary *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UObjectLibrary__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnObjectRemovedEvent).field_0x8,
             *(int *)&(this->OnObjectRemovedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnObjectRemovedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnObjectRemovedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnObjectAddedEvent).field_0x8,*(int *)&(this->OnObjectAddedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnObjectAddedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnObjectAddedEvent);
  DestructItems<FAssetData,int>
            ((FAssetData *)(this->AssetDataList).AllocatorInstance.Data,
             (this->AssetDataList).ArrayNum);
  pFVar2 = (this->AssetDataList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WeakObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092bf0

void * __thiscall
UObjectReferencer::_scalar_deleting_destructor_(UObjectReferencer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UObjectReferencer__6B_;
  pFVar1 = (this->ReferencedObjects).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 148092c60

void * __thiscall
UObjectTraceWorldSubsystem::_scalar_deleting_destructor_
          (UObjectTraceWorldSubsystem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObjectTraceWorldSubsystem__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092cc0

void * __thiscall
UOnlineBlueprintCallProxyBase::_scalar_deleting_destructor_
          (UOnlineBlueprintCallProxyBase *this,uint param_1)

{
  *(undefined ***)this = &___7UOnlineBlueprintCallProxyBase__6B_;
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092d20

void * __thiscall
UOnlineEngineInterface::_scalar_deleting_destructor_(UOnlineEngineInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UOnlineEngineInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092d80

void * __thiscall UOnlineSession::_scalar_deleting_destructor_(UOnlineSession *this,uint param_1)

{
  *(undefined ***)this = &___7UOnlineSession__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092de0

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
UPackageMapClient::_scalar_deleting_destructor_(UPackageMapClient *this,uint param_1)

{
  ~UPackageMapClient(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092e40

void * __thiscall
URPCDoSDetectionConfig::_scalar_deleting_destructor_(URPCDoSDetectionConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URPCDoSDetectionConfig__6B_;
  pFVar1 = (this->RPCAnalyticsThresholds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RPCBlockAllowlist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RPCBlockWhitelist).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DetectionSeverity).AllocatorInstance.Data,
             (this->DetectionSeverity).ArrayNum);
  pFVar1 = (this->DetectionSeverity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092ef0

void * __thiscall
UReplicatedObjectInterface::_scalar_deleting_destructor_
          (UReplicatedObjectInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148092f50

void * __thiscall
UValkyrieMetaData::_scalar_deleting_destructor_(UValkyrieMetaData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UValkyrieMetaData__6B_;
  pFVar1 = (this->DeprecationStatusValue_Deprecated).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DevelopmentStatusValue_Experimental).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// AddObjectToTracedSet @ 148093bf0

bool __cdecl AddObjectToTracedSet(FObjectId *param_1)

{
  int iVar1;
  ulong64 uVar2;
  ForElementType<FSetElementId> FVar3;
  FObjectId local_res8 [4];
  
  AcquireSRWLockShared((PSRWLOCK)&GObjectTracedSetLock);
  uVar2 = param_1->ObjectId;
  if (GObjectTracedSet.Elements._8_4_ != GObjectTracedSet.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x154c5e0e8;
    if (GObjectTracedSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = GObjectTracedSet.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar3 +
                         (ulonglong)
                         (GObjectTracedSet.HashSize - 1U & (int)(uVar2 >> 0x20) * 0x17 + (int)uVar2)
                         * 4); iVar1 != -1;
        iVar1 = *(int *)(GObjectTracedSet.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
      if (*(ulong64 *)(GObjectTracedSet.Elements._0_8_ + (longlong)iVar1 * 0x10) == uVar2) {
        ReleaseSRWLockShared((PSRWLOCK)&GObjectTracedSetLock);
        return false;
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&GObjectTracedSetLock);
  AcquireSRWLockExclusive((PSRWLOCK)&GObjectTracedSetLock);
  TSet<UE::ObjectTrace::FObjectId,DefaultKeyFuncs<UE::ObjectTrace::FObjectId,0>,FDefaultSetAllocator>
  ::Emplace<UE::ObjectTrace::FObjectId_const_&>(&GObjectTracedSet,local_res8,(bool *)param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)&GObjectTracedSetLock);
  return true;
}

// BeginHandshakePacket @ 148097d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::BeginHandshakePacket
          (StatelessConnectHandlerComponent *this,FBitWriter *param_1,EHandshakePacketType param_2,
          EHandshakeVersion param_3,uchar param_4,uint param_5,EHandshakePacketModifier param_6)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<unsigned_int> FVar3;
  EHandshakePacketModifier EVar4;
  EHandshakePacketType local_res8 [8];
  uint local_res20 [2];
  undefined1 in_stack_00000039;
  
  iVar1 = (this->MagicHeader).NumBits;
  EVar4 = param_6 & RestartHandshake;
  if (0 < iVar1) {
    FVar3 = (this->MagicHeader).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<unsigned_int>)0x0) {
      FVar3 = (ForElementType<unsigned_int>)&this->MagicHeader;
    }
    (**(code **)(param_1->_padding_ + 400))(param_1,FVar3,(longlong)iVar1);
  }
  if (param_3 < SessionClientId) {
    FBitWriter::WriteBit(param_1,'\x01');
    FBitWriter::WriteBit(param_1,EVar4);
    if (param_3 == Original) goto LAB_148097ec8;
  }
  else {
    (**(code **)(param_1->_padding_ + 400))(param_1,&this->CachedGlobalNetTravelCount,2);
    (**(code **)(param_1->_padding_ + 400))(param_1,&param_5,3);
    FBitWriter::WriteBit(param_1,'\x01');
    FBitWriter::WriteBit(param_1,EVar4);
  }
  plVar2 = (longlong *)param_1->_padding_;
  _param_6 = CONCAT11(in_stack_00000039,(undefined1)UE::Net::MinSupportedHandshakeVersion);
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_3);
  local_res8[0] = param_2;
  if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,&param_6,1);
  }
  else {
    _param_6 = CONCAT11(in_stack_00000039,*(undefined1 *)*plVar2);
    *plVar2 = *plVar2 + 1;
  }
  plVar2 = (longlong *)param_1->_padding_;
  if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,1);
  }
  else {
    local_res20[0] = CONCAT31(local_res20[0]._1_3_,*(undefined1 *)*plVar2);
    *plVar2 = *plVar2 + 1;
  }
  plVar2 = (longlong *)param_1->_padding_;
  if ((EHandshakePacketType *)plVar2[1] < (EHandshakePacketType *)*plVar2 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(EHandshakePacketType *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  plVar2 = (longlong *)param_1->_padding_;
  if ((uchar *)plVar2[1] < (uchar *)*plVar2 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,&param_4,1);
  }
  else {
    param_4 = *(uchar *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
LAB_148097ec8:
  if (Randomized < param_3) {
    local_res20[0] = FNetworkVersion::GetLocalNetworkVersion(true);
    if (this->Driver == (UNetDriver *)0x0) {
      _param_6 = None;
    }
    else {
      _param_6 = UNetDriver::GetNetworkRuntimeFeatures(this->Driver);
    }
    plVar2 = (longlong *)param_1->_padding_;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = (longlong *)param_1->_padding_;
    if ((ulonglong)plVar2[1] < *plVar2 + 2U) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&param_6,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ushort *)&param_6);
      }
    }
    else {
      *plVar2 = *plVar2 + 2;
    }
  }
  return;
}

// BroadcastNetFailure @ 148097fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl BroadcastNetFailure(UNetDriver *param_1,Type param_2,FString *param_3)

{
  TObjectPtr<UWorld>_u_0 this;
  bool bVar1;
  FTimerManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  UWorld *pUVar4;
  UWorld *pUVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  TObjectPtr<UWorld>_u_0 local_68;
  FDelegateAllocation local_60;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  Type local_40;
  FString local_38;
  
  this = (TObjectPtr<UWorld>_u_0)(param_1->World).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this.DebugPtr != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this.DebugPtr);
  }
  pUVar5 = (UWorld *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_68 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this.DebugPtr != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this.DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_68);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_68 = (TObjectPtr<UWorld>_u_0)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_68);
  local_50 = local_res8;
  local_48 = local_res20;
  local_40 = param_2;
  FString::FString(&local_38,param_3);
  if (this.DebugPtr == (UWorld *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid(&local_50);
    pUVar4 = pUVar5;
    if (bVar1) {
      pUVar4 = (UWorld *)FWeakObjectPtr::Get(&local_50);
    }
    bVar1 = FWeakObjectPtr::IsValid(&local_48);
    if (bVar1) {
      pUVar5 = (UWorld *)FWeakObjectPtr::Get(&local_48);
    }
    UEngine::BroadcastNetworkFailure(GEngine,pUVar4,(UNetDriver *)pUVar5,local_40,&local_38);
  }
  else {
    this_00 = UWorld::GetTimerManager(this.DebugPtr);
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x40,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`BroadcastNetFailure'::`2'::<lambda_1>_>
                 ::_vftable_;
      *(FWeakObjectPtr *)(puVar2 + 3) = local_50;
      *(FWeakObjectPtr *)(puVar2 + 4) = local_48;
      *(Type *)(puVar2 + 5) = local_40;
      FString::FString((FString *)(puVar2 + 6),&local_38);
    }
    FTimerManager::SetTimerForNextTick
              (this_00,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                       &local_68.ObjectPtr);
    if (local_60.DelegateSize != 0) {
      if (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
      goto LAB_1480981aa;
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
  }
LAB_1480981aa:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// CanReadUnaligned @ 1480984c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

bool __thiscall
StatelessConnectHandlerComponent::CanReadUnaligned(StatelessConnectHandlerComponent *this)

{
  return true;
}

// CapHandshakePacket @ 1480984d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::CapHandshakePacket
          (StatelessConnectHandlerComponent *this,FBitWriter *param_1,EHandshakeVersion param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FString *pFVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  char local_res18 [16];
  FString local_38;
  FString local_28;
  
  iVar5 = (this->MagicHeader).NumBits;
  iVar9 = iVar5 + 5;
  if (param_2 < SessionClientId) {
    iVar9 = iVar5;
  }
  iVar9 = (int)param_1->Num - iVar9;
  if (param_2 == Original) {
    if (((iVar9 != 0xe3) && (iVar9 != 2)) &&
       ((iVar9 != 0x183 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumBits == OriginalHandshakePacketSizeBits || NumBits == OriginalRestartHandshakePacketSizeBits || NumBits == OriginalRestartResponseSizeBits"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PacketHandlers\\StatelessConnectHandlerComponent.cpp"
                            ,0x313,L""), bVar4)))) goto code_r0x0001480985ce;
  }
  else if (param_2 == Randomized) {
    if (((iVar9 != 0x103) && (iVar9 != 0x22)) &&
       ((iVar9 != 0x1a3 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumBits == VerRandomizedHandshakePacketSizeBits || NumBits == VerRandomizedRestartHandshakePacketSizeBits || NumBits == VerRandomizedRestartResponseSizeBits"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PacketHandlers\\StatelessConnectHandlerComponent.cpp"
                            ,0x318,L""), bVar4)))) {
code_r0x0001480985ce:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if ((((iVar9 != 0x133) && (iVar9 != 0x52)) && (iVar9 != 0x1d3)) &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumBits == (82 + 225) || NumBits == 82 || NumBits == (82 + 385) || NumBits == 82"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PacketHandlers\\StatelessConnectHandlerComponent.cpp"
                              ,0x31d,L""), bVar4)) goto code_r0x0001480985ce;
  pFVar6 = ::FString::FString(&local_38,L"PostPacketHandler");
  if (GPacketAuditor != (FPacketAudit *)0x0) {
    pFVar7 = ::FString::FString(&local_28,pFVar6);
    FPacketAudit::AddStage_Internal(GPacketAuditor,pFVar7,param_1,false);
  }
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (param_2 != Original) {
    iVar5 = FMath::RandRange(0,8);
    uVar8 = -iVar5 + 0x10;
    if (((param_2 < SessionClientId) && (iVar9 + uVar8 * 8 == 0x183)) &&
       (uVar8 = -iVar5 + 0xf, (int)uVar8 < 0)) {
      uVar8 = 0;
    }
    if (0 < (int)uVar8) {
      uVar10 = (ulonglong)uVar8;
      do {
        iVar5 = rand();
        plVar2 = (longlong *)param_1->_padding_;
        local_res18[0] =
             (((char)(iVar5 / 0xff) + (char)(iVar5 >> 0x1f)) -
             (char)((longlong)iVar5 * 0x80808081 >> 0x3f)) + (char)iVar5;
        if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,1);
        }
        else {
          local_res18[0] = *(char *)*plVar2;
          *plVar2 = *plVar2 + 1;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  FBitWriter::WriteBit(param_1,'\x01');
  this->SentHandshakePacketCount = this->SentHandshakePacketCount + '\x01';
  return;
}

// CheckVersion @ 148098cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

bool __thiscall
StatelessConnectHandlerComponent::CheckVersion
          (StatelessConnectHandlerComponent *this,FParsedHandshakeData *param_1,
          EHandshakeVersion *param_2)

{
  EHandshakeVersion EVar1;
  EHandshakeVersion EVar2;
  longlong lVar3;
  EHandshakeVersion EVar4;
  bool bVar5;
  wchar_t *pwVar6;
  bool bVar7;
  bool bVar8;
  EEngineNetworkRuntimeFeatures EVar9;
  uint uVar10;
  EHandshakeVersion *pEVar11;
  EHandshakeVersion EVar12;
  undefined1 auStack_308 [32];
  int local_2e8;
  uint local_2e0;
  uint local_2d8;
  int local_2d0;
  int local_2c8;
  uint local_2c0;
  uint local_2b8;
  wchar_t *local_2b0;
  wchar_t *local_2a8;
  uint local_298;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [128];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_308;
  EVar4 = (EHandshakeVersion)UE::Net::CurrentHandshakeVersion;
  pEVar11 = UE::Net::HandshakeCompatibilityBreaks;
  bVar5 = false;
  bVar7 = false;
  EVar1 = param_1->RemoteMinVersion;
  EVar12 = Latest;
  *param_2 = EVar4;
  do {
    if (EVar4 < *pEVar11) {
      EVar12 = *pEVar11 - Randomized;
      bVar7 = true;
      break;
    }
    pEVar11 = pEVar11 + 1;
  } while (pEVar11 != &DAT_1519f0be3);
  if ((((UE::Net::MinSupportedHandshakeVersion <= (int)(uint)EVar1) &&
       (param_1->RemoteMinVersion <= EVar4)) &&
      (EVar2 = param_1->RemoteCurVersion, param_1->RemoteMinVersion <= EVar2)) &&
     ((!bVar7 || (EVar2 <= EVar12)))) {
    if (EVar2 <= EVar4) {
      *param_2 = EVar2;
    }
    bVar5 = true;
  }
  if (this->Driver == (UNetDriver *)0x0) {
    EVar9 = None;
  }
  else {
    EVar9 = UNetDriver::GetNetworkRuntimeFeatures(this->Driver);
  }
  bVar7 = true;
  bVar8 = true;
  if (Randomized < param_1->RemoteCurVersion) {
    uVar10 = FNetworkVersion::GetLocalNetworkVersion(true);
    bVar7 = FNetworkVersion::IsNetworkCompatible(uVar10,param_1->RemoteNetworkVersion);
    bVar8 = FNetworkVersion::AreNetworkRuntimeFeaturesCompatible
                      (EVar9,param_1->RemoteNetworkFeatures);
  }
  if (((!bVar5) || (bVar7 == false)) || (bVar8 == false)) {
    lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 8);
    local_298 = FNetworkVersion::GetLocalNetworkVersion(true);
    local_168.Base = local_148;
    local_168.bIsDynamic = false;
    local_168.bIsExternal = false;
    local_168.CurPos = local_148;
    local_288.bIsDynamic = false;
    local_288.bIsExternal = false;
    local_168.End = (wchar_t *)local_48;
    local_288.Base = local_268;
    local_288.CurPos = local_268;
    local_288.End = (wchar_t *)&local_168;
    FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset(EVar9,&local_168);
    FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset(param_1->RemoteNetworkFeatures,&local_288)
    ;
    if ((4 < (byte)LogHandshake._0_1_) &&
       ((lVar3 == 0 ||
        ((*(char *)(lVar3 + 0x69) == '\0' &&
         ((*(char *)(lVar3 + 0x40) == '\0' ||
          (*(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + 1,
          *(int *)(lVar3 + 0x70) <= *(int *)(lVar3 + 0x6c))))))))) {
      if (local_168.End < local_168.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      }
      pwVar6 = local_168.Base;
      *local_168.CurPos = L'\0';
      if (local_288.End < (TStringBuilderBase<wchar_t> *)(local_288.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_288,1);
      }
      *local_288.CurPos = L'\0';
      local_2a8 = pwVar6;
      local_2b0 = local_288.Base;
      local_2b8 = local_298;
      local_2c0 = param_1->RemoteNetworkVersion;
      local_2c8 = UE::Net::CurrentHandshakeVersion;
      local_2d0 = UE::Net::MinSupportedHandshakeVersion;
      local_2d8 = (uint)param_1->RemoteCurVersion;
      local_2e8 = UE::Net::GHandshakeEnforceNetworkCLVersion;
      local_2e0 = (uint)EVar1;
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
    if ((bVar7 == false) && (UE::Net::GHandshakeEnforceNetworkCLVersion != 0)) {
      bVar7 = false;
      goto LAB_148098f83;
    }
  }
  bVar7 = true;
LAB_148098f83:
  if (((bVar5) && (bVar7)) && (bVar8 != false)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// CollectPendingMeshMaterialRequests @ 148099f70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
CollectPendingMeshMaterialRequests
          (TQueue<FODSCRequestPayload,0> *param_1,
          TArray<FODSCMessageHandler_*,TSizedDefaultAllocator<32>_> *param_2,
          atomic<unsigned_int> *param_3,int param_4)

{
  FScriptContainerElement FVar1;
  EShaderPlatform EVar2;
  Type TVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FODSCMessageHandler *pFVar11;
  FODSCMessageHandler *pFVar12;
  ulonglong uVar13;
  FODSCRequestPayload *pFVar14;
  ForAnyElementType FVar15;
  undefined1 local_res8 [8];
  ForAnyElementType local_128;
  undefined8 local_120;
  FODSCMessageHandler *local_118;
  FODSCRequestPayload local_110;
  FODSCRequestPayload local_a8;
  
  pFVar12 = (FODSCMessageHandler *)0x0;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  local_a8.MaterialName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.MaterialName.Data.ArrayNum = 0;
  local_a8.MaterialName.Data.ArrayMax = 0;
  local_a8.VertexFactoryName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.VertexFactoryName.Data.ArrayNum = 0;
  local_a8.VertexFactoryName.Data.ArrayMax = 0;
  local_a8.PipelineName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.PipelineName.Data.ArrayNum = 0;
  local_a8.PipelineName.Data.ArrayMax = 0;
  local_a8.ShaderTypeNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ShaderTypeNames.ArrayNum = 0;
  local_a8.ShaderTypeNames.ArrayMax = 0;
  local_a8.RequestHash.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.RequestHash.Data.ArrayNum = 0;
  local_a8.RequestHash.Data.ArrayMax = 0;
  while (pTVar4 = param_1->Tail->NextNode, pTVar4 != (TNode *)0x0) {
    FODSCRequestPayload::operator=(&local_a8,&pTVar4->Item);
    pTVar5 = param_1->Tail;
    param_1->Tail = pTVar4;
    local_110.MaterialName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.MaterialName.Data.ArrayNum = 0;
    local_110.MaterialName.Data.ArrayMax = 0;
    local_110.VertexFactoryName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.VertexFactoryName.Data.ArrayNum = 0;
    local_110.VertexFactoryName.Data.ArrayMax = 0;
    local_110.PipelineName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.PipelineName.Data.ArrayNum = 0;
    local_110.PipelineName.Data.ArrayMax = 0;
    local_110.ShaderTypeNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ShaderTypeNames.ArrayNum = 0;
    local_110.ShaderTypeNames.ArrayMax = 0;
    local_110.RequestHash.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.RequestHash.Data.ArrayNum = 0;
    local_110.RequestHash.Data.ArrayMax = 0;
    FODSCRequestPayload::operator=(&pTVar4->Item,&local_110);
    if (local_110.RequestHash.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.RequestHash.Data.AllocatorInstance.Data);
    }
    FVar15.Data = local_110.ShaderTypeNames.AllocatorInstance.Data;
    DestructItems<FString,int>
              ((FString *)local_110.ShaderTypeNames.AllocatorInstance.Data,
               local_110.ShaderTypeNames.ArrayNum);
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
    if (local_110.PipelineName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.PipelineName.Data.AllocatorInstance.Data);
    }
    if (local_110.VertexFactoryName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.VertexFactoryName.Data.AllocatorInstance.Data);
    }
    if (local_110.MaterialName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.MaterialName.Data.AllocatorInstance.Data);
    }
    if (pTVar5 != (TNode *)0x0) {
      FODSCRequestPayload::~FODSCRequestPayload(&pTVar5->Item);
      operator_delete(pTVar5,0x70);
    }
    if (((local_128.Data <= &local_a8) &&
        (&local_a8 < (FODSCRequestPayload *)(local_128.Data + (longlong)local_120._4_4_ * 0x68))) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (int)local_120;
    if ((int)local_120 == local_120._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,&local_128,(int *)((longlong)&local_120 + 4));
    }
    local_120 = CONCAT44(local_120._4_4_,iVar9 + 1);
    FODSCRequestPayload::FODSCRequestPayload
              ((FODSCRequestPayload *)(local_128.Data + (longlong)iVar9 * 0x68),&local_a8);
  }
  if ((int)local_120 != 0) {
    pFVar11 = operator_new(0x78);
    if (pFVar11 != (FODSCMessageHandler *)0x0) {
      if ((int)local_120 < 1) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar1 = local_128.Data[8];
      iVar9 = (int)local_120;
      if ((int)local_120 < 1) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (int)local_120;
      }
      TVar3 = *(Type *)(local_128.Data + 4);
      if ((iVar9 < 1) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar11->ShaderPlatform = *(EShaderPlatform *)local_128.Data;
      pFVar11->_padding_ = (longlong)&___7FODSCMessageHandler__6B_;
      pFVar11->RequestStartTime = 0.0;
      (pFVar11->MaterialsToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->MaterialsToLoad).ArrayNum = 0;
      (pFVar11->MaterialsToLoad).ArrayMax = 0;
      (pFVar11->ShaderTypesToLoad).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->ShaderTypesToLoad).Data.ArrayNum = 0;
      (pFVar11->ShaderTypesToLoad).Data.ArrayMax = 0;
      pFVar11->FeatureLevel = TVar3;
      pFVar11->QualityLevel = (Type)FVar1;
      pFVar11->RecompileCommandType = Material;
      (pFVar11->ExtraCompilerFlags).Data = 0;
      (pFVar11->RequestBatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->RequestBatch).ArrayNum = 0;
      (pFVar11->RequestBatch).ArrayMax = 0;
      (pFVar11->OutMeshMaterialMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->OutMeshMaterialMaps).ArrayNum = 0;
      (pFVar11->OutMeshMaterialMaps).ArrayMax = 0;
      (pFVar11->OutGlobalShaderMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->OutGlobalShaderMap).ArrayNum = 0;
      (pFVar11->OutGlobalShaderMap).ArrayMax = 0;
      pFVar12 = pFVar11;
    }
    iVar9 = (int)local_120;
    uVar13 = (ulonglong)(int)local_120;
    pFVar14 = (FODSCRequestPayload *)(local_128.Data + uVar13 * 0x68);
    FVar15.Data = local_128.Data;
    local_118 = pFVar12;
    while( true ) {
      if ((int)uVar13 != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FODSCRequestPayload,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((FODSCRequestPayload *)FVar15.Data == pFVar14) break;
      if (param_4 <= (local_118->RequestBatch).ArrayNum) {
        pFVar6 = (param_2->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar6 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar10 + 1;
        *(FODSCMessageHandler **)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             local_118;
        LOCK();
        *param_3 = (atomic<unsigned_int>)((int)*param_3 + (local_118->RequestBatch).ArrayNum);
        UNLOCK();
        pFVar12 = operator_new(0x78);
        if (pFVar12 == (FODSCMessageHandler *)0x0) {
          local_118 = (FODSCMessageHandler *)0x0;
        }
        else {
          if ((int)local_120 < 1) {
            bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          FVar1 = local_128.Data[8];
          iVar10 = (int)local_120;
          if ((int)local_120 < 1) {
            bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar10 = (int)local_120;
          }
          TVar3 = *(Type *)(local_128.Data + 4);
          if ((iVar10 < 1) &&
             (bVar8 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          EVar2 = *(EShaderPlatform *)local_128.Data;
          pFVar12->_padding_ = (longlong)&___7FODSCMessageHandler__6B_;
          pFVar12->RequestStartTime = 0.0;
          (pFVar12->MaterialsToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->MaterialsToLoad).ArrayNum = 0;
          (pFVar12->MaterialsToLoad).ArrayMax = 0;
          (pFVar12->ShaderTypesToLoad).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->ShaderTypesToLoad).Data.ArrayNum = 0;
          (pFVar12->ShaderTypesToLoad).Data.ArrayMax = 0;
          (pFVar12->ExtraCompilerFlags).Data = 0;
          (pFVar12->RequestBatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->RequestBatch).ArrayNum = 0;
          (pFVar12->RequestBatch).ArrayMax = 0;
          (pFVar12->OutMeshMaterialMaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->OutMeshMaterialMaps).ArrayNum = 0;
          (pFVar12->OutMeshMaterialMaps).ArrayMax = 0;
          (pFVar12->OutGlobalShaderMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->OutGlobalShaderMap).ArrayNum = 0;
          (pFVar12->OutGlobalShaderMap).ArrayMax = 0;
          pFVar12->ShaderPlatform = EVar2;
          pFVar12->FeatureLevel = TVar3;
          pFVar12->QualityLevel = (Type)FVar1;
          pFVar12->RecompileCommandType = Material;
          local_118 = pFVar12;
        }
      }
      FODSCMessageHandler::AddPayload(local_118,(FODSCRequestPayload *)FVar15.Data);
      uVar13 = local_120 & 0xffffffff;
      FVar15.Data = FVar15.Data + 0x68;
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 < pFVar6 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == param_2->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar9 + 1;
    *(FODSCMessageHandler **)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_118;
    LOCK();
    *param_3 = (atomic<unsigned_int>)((int)*param_3 + (local_118->RequestBatch).ArrayNum);
    UNLOCK();
  }
  FODSCRequestPayload::~FODSCRequestPayload(&local_a8);
  DestructItems<FODSCRequestPayload,int>((FODSCRequestPayload *)local_128.Data,(int)local_120);
  if ((FODSCRequestPayload *)local_128.Data != (FODSCRequestPayload *)0x0) {
    FMemory::Free(local_128.Data);
  }
  return;
}

// CountBytes @ 14809c350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::CountBytes
          (StatelessConnectHandlerComponent *this,FArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  HandlerComponent::CountBytes((HandlerComponent *)this,param_1);
  piVar1 = &this->HandshakeSecret[0].ArrayNum;
  lVar2 = 2;
  do {
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)*piVar1,(longlong)piVar1[1]);
    piVar1 = piVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// DoesPrimitiveDependsOnMaterials @ 14809f200

bool __cdecl
ObjectCacheContextImpl::DoesPrimitiveDependsOnMaterials
          (FObjectCacheContext *param_1,IPrimitiveComponent *param_2,
          TArrayView<UMaterialInterface_*,int> *param_3)

{
  UMaterialInterface **ppUVar1;
  UMaterialInterface *pUVar2;
  UMaterialInterface *pUVar3;
  char cVar4;
  bool bVar5;
  UMaterialInterface **ppUVar6;
  UMaterialInterface **ppUVar7;
  TObjectCacheIterator<UMaterialInterface> local_38;
  
  FObjectCacheContext::GetUsedMaterials(param_1,&local_38,param_2);
  if (local_38.ArrayView.ArrayNum != 0) {
    ppUVar7 = param_3->DataPtr;
    ppUVar1 = ppUVar7 + param_3->ArrayNum;
    if (ppUVar7 != ppUVar1) {
      do {
        pUVar2 = *ppUVar7;
        for (ppUVar6 = local_38.ArrayView.DataPtr;
            ppUVar6 != local_38.ArrayView.DataPtr + local_38.ArrayView.ArrayNum;
            ppUVar6 = ppUVar6 + 1) {
          pUVar3 = *ppUVar6;
          if ((pUVar3 != (UMaterialInterface *)0x0) &&
             ((pUVar3 == pUVar2 ||
              (cVar4 = (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3,pUVar2), cVar4 != '\0')))) {
            bVar5 = true;
            goto LAB_14809f291;
          }
        }
        ppUVar7 = ppUVar7 + 1;
      } while (ppUVar7 != ppUVar1);
    }
  }
  bVar5 = false;
LAB_14809f291:
  if (local_38.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.OwnedArray.AllocatorInstance.Data);
  }
  return bVar5;
}

// EmptyLinkFunctionForGeneratedCodeEngineHandlerComponentFactory @ 14809f440

void __cdecl EmptyLinkFunctionForGeneratedCodeEngineHandlerComponentFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetPing @ 14809f450

void __cdecl EmptyLinkFunctionForGeneratedCodeNetPing(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetPushModelHelpers @ 14809f460

void __cdecl EmptyLinkFunctionForGeneratedCodeNetPushModelHelpers(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetworkMetricsConfig @ 14809f470

void __cdecl EmptyLinkFunctionForGeneratedCodeNetworkMetricsConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetworkMetricsDatabase @ 14809f480

void __cdecl EmptyLinkFunctionForGeneratedCodeNetworkMetricsDatabase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetworkMetricsMutators @ 14809f490

void __cdecl EmptyLinkFunctionForGeneratedCodeNetworkMetricsMutators(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNetworkSubsystem @ 14809f4a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNetworkSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNote @ 14809f4b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNote(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectEditorUtils @ 14809f4c0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectEditorUtils(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectLibrary @ 14809f4d0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectReferencer @ 14809f4e0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectReferencer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectTrace @ 14809f4f0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectTrace(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBlueprintCallProxyBase @ 14809f500

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBlueprintCallProxyBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineEngineInterface @ 14809f510

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineEngineInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineReplStructs @ 14809f520

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineReplStructs(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineSession @ 14809f530

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineSession(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePackageMapClient @ 14809f540

void __cdecl EmptyLinkFunctionForGeneratedCodePackageMapClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePackedLevelActor @ 14809f550

void __cdecl EmptyLinkFunctionForGeneratedCodePackedLevelActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRPCDoSDetection @ 14809f560

void __cdecl EmptyLinkFunctionForGeneratedCodeRPCDoSDetection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRPCDoSDetectionConfig @ 14809f570

void __cdecl EmptyLinkFunctionForGeneratedCodeRPCDoSDetectionConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReplayResult @ 14809f580

void __cdecl EmptyLinkFunctionForGeneratedCodeReplayResult(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReplicatedObjectInterface @ 14809f590

void __cdecl EmptyLinkFunctionForGeneratedCodeReplicatedObjectInterface(void)

{
  return;
}

// FEmptyOnlineDelegate_DelegateWrapper @ 1480a1160

void __cdecl
FEmptyOnlineDelegate_DelegateWrapper(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GenerateCookie @ 1480a2620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::GenerateCookie
          (StatelessConnectHandlerComponent *this,TSharedPtr<FInternetAddr_const_,1> *param_1,
          uchar param_2,double param_3,uchar (*param_4) [20])

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  double local_res20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_res20 = param_3;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_c8.Bytes = &local_e8;
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (param_1->Object == (FInternetAddr *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*param_1->Object + 0x80))(param_1->Object,&local_d8,1);
  if (*(double **)(local_c8._padding_ + 8) < *(double **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_c8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,&local_res20,8);
      }
      else {
        (**(code **)(local_c8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(ulong64 *)&local_res20);
    }
  }
  else {
    local_res20 = **(double **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 8;
  }
  ::operator<<((FArchive *)&local_c8,&local_d8);
  lVar3 = 0xe8;
  if (param_2 != '\0') {
    lVar3 = 0xf8;
  }
  FSHA1::HMACBuffer(*(void **)(&this->field_0x0 + lVar3),0x40,local_e8.AllocatorInstance.Data,
                    (longlong)local_e8.ArrayNum,*param_4);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_c8);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// GetAdjustedSizeBits @ 1480a3b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

int __thiscall
StatelessConnectHandlerComponent::GetAdjustedSizeBits
          (StatelessConnectHandlerComponent *this,int param_1,EHandshakeVersion param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (this->MagicHeader).NumBits + param_1;
  iVar1 = iVar2 + 5;
  if (param_2 < SessionClientId) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// GetMaterialsAffectedByMaterials_Iteration @ 1480a48b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
ObjectCacheContextImpl::GetMaterialsAffectedByMaterials_Iteration
          (TArrayView<UMaterialInterface_*,int> *param_1,
          TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
          *param_2)

{
  UMaterialInterface **ppUVar1;
  UMaterialInterface *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  EInternalObjectFlags EVar6;
  ulonglong uVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  UMaterialInterface **ppUVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ForElementType<unsigned_int> FVar20;
  bool bVar21;
  undefined1 auStackY_198 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TObjectIterator<UMaterialInstance> local_148;
  UMaterialInterface *local_130;
  undefined4 local_128;
  int local_124;
  UMaterialInterface *local_120;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId533,"GetMaterialsAffectedByMaterials_Iteration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,0x215);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId533);
  }
  uVar11 = param_1->ArrayNum;
  uVar9 = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if (uVar11 == 0) goto LAB_1480a4bb0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,uVar11);
  uVar14 = 1;
  if (3 < uVar11) {
    uVar17 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_128 = (undefined4)lVar15;
    uVar14 = 1 << ((byte)lVar15 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar14 <= (int)local_a0)) goto LAB_1480a4bb0;
  local_a0 = uVar14;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar14 != 0) {
    uVar16 = uVar14;
    if (uVar14 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar16 = 0;
        goto LAB_1480a49e2;
      }
    }
    else {
LAB_1480a49e2:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar16,4);
    }
    if (0 < (int)uVar14) {
      uVar18 = (ulonglong)uVar14;
      uVar17 = uVar9;
      do {
        FVar12.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_a8.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar17;
        uVar17 = uVar17 + 1;
        *(undefined4 *)(FVar12.Data + uVar7 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (local_a0 != 0) {
    local_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_c0 != 0) {
      FVar20 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_c8;
      }
      uVar14 = *(uint *)FVar20;
      uVar17 = uVar9;
      while (uVar14 == 0) {
        uStack_150 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_150;
        iVar10 = (int)uVar9;
        local_168 = iVar10 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_1480a4af3;
        uVar14 = ((uint *)((longlong)FVar20 + 4))[iVar10];
      }
      uStack_164 = -uVar14 & uVar14;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_124 = (int)lVar15;
      uStack_154 = local_124 + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_c0 < (int)uStack_154) {
LAB_1480a4af3:
        uVar9 = (ulonglong)local_c0;
        uStack_154 = local_c0;
      }
    }
    local_118 = (longlong *)local_e8;
    local_110._padding_ = CONCAT44(uStack_164,local_168);
    local_110.CurrentBitIndex = uStack_154;
    local_110.UnvisitedBitMask = 0xffffffff;
    local_110._28_4_ = uStack_14c;
    local_110.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_c0) {
      do {
        puVar19 = (ulonglong *)((longlong)(int)uVar9 * 0x10 + *local_118);
        uVar14 = ((uint)(*puVar19 >> 0x14) & 0xffff ^ (uint)(*puVar19 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = (uVar14 >> 0x10 ^ uVar14) & local_a0 - 1;
        *(uint *)((longlong)puVar19 + 0xc) = uVar14;
        FVar12.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_a8.Data;
        }
        uVar17 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(FVar12.Data + uVar17 * 4);
        *(int *)(FVar12.Data + uVar17 * 4) = (int)uVar9;
        local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
        uVar9 = (ulonglong)(uint)local_110.CurrentBitIndex;
      } while (local_110.CurrentBitIndex < (local_110.Array)->NumBits);
    }
  }
LAB_1480a4bb0:
  ppUVar13 = param_1->DataPtr;
  ppUVar1 = ppUVar13 + (int)uVar11;
  for (; ppUVar13 != ppUVar1; ppUVar13 = ppUVar13 + 1) {
    local_130 = *ppUVar13;
    uVar11 = ((uint)((ulonglong)local_130 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_130 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    uVar11 = uVar11 >> 0x10 ^ uVar11;
    TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
    FindOrAddByHash<UMaterialInterface_*_const_&>(param_2,uVar11,&local_130,(bool *)0x0);
    TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
    FindOrAddByHash<UMaterialInterface_*_const_&>
              ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
                *)local_e8,uVar11,&local_130,(bool *)0x0);
  }
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_148.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ObjectArray.ArrayNum = 0;
  local_148.ObjectArray.ArrayMax = 0;
  local_148.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UMaterialInstance_NoRegister();
  GetObjectsOfClass(pUVar8,&local_148.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AsyncLoadingPhase2|Async|
                             AsyncLoadingPhase1|Garbage|AutoRTFMConstructionAborted));
LAB_1480a4c93:
  do {
    do {
      do {
        TObjectIterator<UMaterialInstance>::Advance(&local_148);
        lVar15 = (longlong)local_148.Index;
        if ((local_148.Index < 0) || (local_148.ObjectArray.ArrayNum <= local_148.Index)) {
          if (local_148.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.ObjectArray.AllocatorInstance.Data);
          }
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98);
          local_a0 = 0;
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data);
          }
          TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8);
          if (bVar21) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return;
        }
        uVar11 = 0;
        if (local_148.Index < local_148.ObjectArray.ArrayNum) {
          uVar11 = (uint)~local_148.Index >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar2 = *(UMaterialInterface **)(local_148.ObjectArray.AllocatorInstance.Data + lVar15 * 8)
        ;
        uVar9 = (**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2);
        uVar11 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      } while (local_e8._8_4_ == local_b4);
      FVar12.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar12.Data = local_a8.Data;
      }
      iVar10 = *(int *)(FVar12.Data + (ulonglong)(local_a0 - 1 & (uVar11 >> 0x10 ^ uVar11)) * 4);
    } while (iVar10 == -1);
    do {
      if (*(ulonglong *)(local_e8._0_8_ + (longlong)iVar10 * 0x10) == uVar9) {
        ppUVar13 = param_1->DataPtr;
        ppUVar1 = ppUVar13 + param_1->ArrayNum;
        goto joined_r0x0001480a4d9a;
      }
      iVar10 = *(int *)(local_e8._0_8_ + (longlong)iVar10 * 0x10 + 8);
    } while (iVar10 != -1);
  } while( true );
joined_r0x0001480a4d9a:
  if (ppUVar13 == ppUVar1) goto LAB_1480a4c93;
  cVar5 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2,*ppUVar13);
  if (cVar5 != '\0') {
    uVar11 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    local_120 = pUVar2;
    TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
    FindOrAddByHash<UMaterialInterface_*>(param_2,uVar11 >> 0x10 ^ uVar11,&local_120,(bool *)0x0);
    goto LAB_1480a4c93;
  }
  ppUVar13 = ppUVar13 + 1;
  goto joined_r0x0001480a4d9a;
}

// GetObjectCacheInternalFlagsExclusion @ 1480a6c70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

EInternalObjectFlags __cdecl ObjectCacheContextImpl::GetObjectCacheInternalFlagsExclusion(void)

{
  return Unreachable|AsyncLoadingPhase2|Async|AsyncLoadingPhase1|Garbage;
}

// GetPrimitivesAffectedByMaterials_Iteration @ 1480a9090

void __cdecl
ObjectCacheContextImpl::GetPrimitivesAffectedByMaterials_Iteration
          (FObjectCacheContext *param_1,TArrayView<UMaterialInterface_*,int> *param_2,
          TSet<IPrimitiveComponent_*,DefaultKeyFuncs<IPrimitiveComponent_*,0>,FDefaultSetAllocator>
          *param_3)

{
  UMaterialInterface **ppUVar1;
  IPrimitiveComponent *pIVar2;
  UMaterialInterface *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInterface **ppUVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  IPrimitiveComponent **ppIVar9;
  UMaterialInterface **ppUVar10;
  UMaterialInterface **ppUVar11;
  UMaterialInterface **ppUVar12;
  bool bVar13;
  IPrimitiveComponent *local_a8;
  IPrimitiveComponent **local_a0;
  UMaterialInterface **local_98;
  undefined8 uStack_90;
  TObjectCacheIterator<UMaterialInterface> local_88;
  TObjectCacheIterator<IPrimitiveComponent> local_68;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId619,"GetPrimitivesAffectedByMaterials_Iteration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
               ,0x26b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId619);
  }
  FObjectCacheContext::GetPrimitiveComponents(param_1,&local_68);
  local_a0 = local_68.ArrayView.DataPtr + local_68.ArrayView.ArrayNum;
  ppIVar9 = local_68.ArrayView.DataPtr;
  if (local_68.ArrayView.DataPtr != local_a0) {
    do {
      pIVar2 = *ppIVar9;
      local_a8 = pIVar2;
      cVar6 = (**(code **)*pIVar2)(pIVar2);
      if ((cVar6 != '\0') && (lVar7 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2), lVar7 != 0))
      {
        local_98 = param_2->DataPtr;
        uStack_90 = *(undefined8 *)&param_2->ArrayNum;
        FObjectCacheContext::GetUsedMaterials(param_1,&local_88,pIVar2);
        ppUVar5 = local_88.ArrayView.DataPtr;
        if ((local_88.ArrayView.ArrayNum != 0) &&
           (ppUVar1 = local_98 + (int)uStack_90, local_98 != ppUVar1)) {
          ppUVar10 = local_88.ArrayView.DataPtr + local_88.ArrayView.ArrayNum;
          ppUVar12 = local_98;
          do {
            pUVar3 = *ppUVar12;
            for (ppUVar11 = ppUVar5; ppUVar11 != ppUVar10; ppUVar11 = ppUVar11 + 1) {
              pUVar4 = *ppUVar11;
              if ((pUVar4 != (UMaterialInterface *)0x0) &&
                 ((pUVar4 == pUVar3 ||
                  (cVar6 = (**(code **)(pUVar4->_padding_ + 0x2f8))(pUVar4,pUVar3), cVar6 != '\0')))
                 ) {
                if (local_88.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.OwnedArray.AllocatorInstance.Data);
                }
                uVar8 = ((uint)((ulonglong)pIVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar2 >> 4)
                        ) * -0x7a143595;
                uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
                TSet<IPrimitiveComponent_*,DefaultKeyFuncs<IPrimitiveComponent_*,0>,FDefaultSetAllocator>
                ::FindOrAddByHash<IPrimitiveComponent_*_const_&>
                          (param_3,uVar8 >> 0x10 ^ uVar8,&local_a8,(bool *)0x0);
                goto LAB_1480a9236;
              }
            }
            ppUVar12 = ppUVar12 + 1;
          } while (ppUVar12 != ppUVar1);
        }
        if (local_88.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.OwnedArray.AllocatorInstance.Data);
        }
      }
LAB_1480a9236:
      ppIVar9 = ppIVar9 + 1;
    } while (ppIVar9 != local_a0);
  }
  if (local_68.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.OwnedArray.AllocatorInstance.Data);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetReferencedTextureCollections @ 1480aa3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ObjectCacheContextImpl::GetReferencedTextureCollections
          (UMaterialInterface *param_1,
          TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int iVar1;
  longlong lVar2;
  TObjectPtr<UTextureCollection>_u_0 TVar3;
  bool bVar4;
  UClass *pUVar5;
  uint uVar6;
  TObjectPtr<UTextureCollection>_u_0 *pTVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  TObjectPtr<UTextureCollection>_u_0 local_a0;
  TArrayView<TObjectPtr<UTextureCollection>_const_,int> local_98;
  TSparseArray<TSparseSetElement<UTextureCollection_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  UMaterialInterface::GetReferencedTextureCollections(param_1,&local_98);
  for (pTVar7 = &(local_98.DataPtr)->field0_0x0;
      pTVar7 != &local_98.DataPtr[local_98.ArrayNum].field0_0x0; pTVar7 = pTVar7 + 1) {
    local_a0 = (TObjectPtr<UTextureCollection>_u_0)pTVar7->DebugPtr;
    if (local_a0 != (UTextureCollection *)0x0) {
      uVar6 = ((uint)((ulonglong)local_a0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_a0 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>::
      FindOrAddByHash<UTextureCollection_*_const_&>
                (param_2,uVar6 >> 0x10 ^ uVar6,&local_a0.DebugPtr,(bool *)0x0);
    }
  }
  if (param_1 != (UMaterialInterface *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      while( true ) {
        lVar2 = param_1[2]._padding_;
        iVar1 = (int)param_1[2]._padding_;
        pTVar7 = (TObjectPtr<UTextureCollection>_u_0 *)(lVar2 + 0x10);
        while( true ) {
          if ((int)param_1[2]._padding_ != iVar1) {
            `TCheckedPointerIterator<FTextureCollectionParameterValue,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_a8);
          }
          if (pTVar7 + -2 == (TObjectPtr<UTextureCollection>_u_0 *)(lVar2 + (longlong)iVar1 * 0x28))
          break;
          TVar3 = (TObjectPtr<UTextureCollection>_u_0)pTVar7->DebugPtr;
          if (TVar3.DebugPtr != (UTextureCollection *)0x0) {
            uVar6 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
                    (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            local_a0 = TVar3;
            TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
            ::FindOrAddByHash<UTextureCollection_*>
                      (param_2,uVar6 >> 0x10 ^ uVar6,&local_a0.DebugPtr,(bool *)0x0);
          }
          pTVar7 = pTVar7 + 5;
        }
        lVar2._0_4_ = param_1[1].SubsurfaceProfiles.ArrayNum;
        lVar2._4_4_ = param_1[1].SubsurfaceProfiles.ArrayMax;
        if (lVar2 == 0) break;
        pUVar5 = Z_Construct_UClass_UMaterialInstance_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1[1].SubsurfaceProfiles.ArrayNum,pUVar5);
        if ((!bVar4) ||
           (param_1 = *(UMaterialInterface **)&param_1[1].SubsurfaceProfiles.ArrayNum,
           param_1 == (UMaterialInterface *)0x0)) break;
      }
    }
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<UTextureCollection_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UTextureCollection_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}

// GetReferencedTextures @ 1480aa620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ObjectCacheContextImpl::GetReferencedTextures
          (UMaterialInterface *param_1,
          TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  TObjectPtr<UObject>_u_0 TVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  uint uVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  TObjectPtr<UObject>_u_0 local_a0;
  TArrayView<TObjectPtr<UObject>_const_,int> local_98;
  TSparseArray<TSparseSetElement<UTexture_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  UMaterialInterface::GetReferencedTextures(param_1,&local_98);
  for (pTVar7 = &(local_98.DataPtr)->field0_0x0;
      pTVar7 != &local_98.DataPtr[local_98.ArrayNum].field0_0x0; pTVar7 = pTVar7 + 1) {
    TVar2 = (TObjectPtr<UObject>_u_0)pTVar7->DebugPtr;
    if (TVar2 == (UObject *)0x0) {
LAB_1480aa70e:
      local_a0.DebugPtr = (UObject *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_UTexture_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)((longlong)TVar2 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)TVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_1480aa70e;
      uVar6 = ((uint)((ulonglong)TVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)TVar2 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      local_a0 = TVar2;
      TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>::
      FindOrAddByHash<UTexture_*_const_&>
                (param_2,uVar6 >> 0x10 ^ uVar6,(UTexture **)&local_a0.DebugPtr,(bool *)0x0);
    }
  }
  if (param_1 != (UMaterialInterface *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      while( true ) {
        lVar3 = param_1[2]._padding_;
        iVar1 = (int)param_1[2]._padding_;
        pTVar7 = (TObjectPtr<UObject>_u_0 *)(lVar3 + 0x10);
        while( true ) {
          if ((int)param_1[2]._padding_ != iVar1) {
            `TCheckedPointerIterator<FTextureParameterValue,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_a8);
          }
          if (pTVar7 + -2 == (TObjectPtr<UObject>_u_0 *)(lVar3 + (longlong)iVar1 * 0x28)) break;
          TVar2 = (TObjectPtr<UObject>_u_0)pTVar7->DebugPtr;
          if (TVar2.DebugPtr != (UObject *)0x0) {
            uVar6 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
                    (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            local_a0 = TVar2;
            TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>::
            FindOrAddByHash<UTexture_*>
                      (param_2,uVar6 >> 0x10 ^ uVar6,(UTexture **)&local_a0.DebugPtr,(bool *)0x0);
          }
          pTVar7 = pTVar7 + 5;
        }
        lVar3._0_4_ = param_1[1].SubsurfaceProfiles.ArrayNum;
        lVar3._4_4_ = param_1[1].SubsurfaceProfiles.ArrayMax;
        if (lVar3 == 0) break;
        pUVar5 = Z_Construct_UClass_UMaterialInstance_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1[1].SubsurfaceProfiles.ArrayNum,pUVar5);
        if ((!bVar4) ||
           (param_1 = *(UMaterialInterface **)&param_1[1].SubsurfaceProfiles.ArrayNum,
           param_1 == (UMaterialInterface *)0x0)) break;
      }
    }
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<UTexture_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UTexture_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}

// GetReservedPacketBits @ 1480aa920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

int __thiscall
StatelessConnectHandlerComponent::GetReservedPacketBits(StatelessConnectHandlerComponent *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_PacketReservedHandshake> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar4;
  FName local_res8;
  FStatMessage local_18;
  
  iVar4 = (this->MagicHeader).NumBits + 6;
  FVar3 = StatPtr_STAT_PacketReservedHandshake;
  if (StatPtr_STAT_PacketReservedHandshake ==
      (FThreadSafeStaticStat<FStat_STAT_PacketReservedHandshake>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_PacketReservedHandshake");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_PacketReservedHandshake>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedHandshake,*pFVar2,
                       L"Reserved Handshake (bits)","STATGROUP_Packet","STATCAT_Advanced",L"Packet",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar1;
    local_18.StatData.Pad = (uchar  [8])(longlong)iVar4;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Set(&local_res8,(longlong)iVar4);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return iVar4;
}

// GetTypeHash @ 1480aadd0

int __cdecl GetTypeHash(FObjectIdAnnotation *param_1)

{
  return (int)(param_1->Id >> 0x20) * 0x17 + (int)param_1->Id;
}

// GetTypeHash @ 1480aadf0

uint __cdecl GetTypeHash(FODSCShaderId *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (param_1->ShaderPipelineName).Hash;
  uVar4 = *(uint *)&param_1->Platform & 0xffff;
  uVar3 = param_1->PermutationId - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar3 = ((int)(uVar1 >> 0x20) * 0x17 - uVar4) + (int)uVar1 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar1 = (param_1->VFTypeHashedName).Hash;
  uVar3 = ((int)(uVar1 >> 0x20) * 0x17 - uVar4) + (int)uVar1 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  uVar1 = (param_1->ShaderTypeHashedName).Hash;
  uVar2 = ((int)(uVar1 >> 0x20) * 0x17 - uVar4) + (int)uVar1 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 1480ab030

uint __cdecl GetTypeHash(FUniqueNetIdRepl *param_1)

{
  FUniqueNetId *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar5;
  TSharedPtr<FUniqueNetId_const_,1> local_18;
  
  bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
  if (!bVar3) {
    return 0xffffffff;
  }
  pTVar5 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_18);
  if (pTVar5->Object == (FUniqueNetId *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = pTVar5->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  uVar4 = (**(code **)(*(longlong *)pFVar1 + 0x40))(pFVar1);
  return uVar4;
}

// Incoming @ 1480acab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::Incoming
          (StatelessConnectHandlerComponent *this,FBitReader *param_1)

{
  TSharedPtr<FInternetAddr_const_,1> *pTVar1;
  int iVar2;
  UNetConnection *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  uchar uVar9;
  bool bVar10;
  bool bVar11;
  EEngineNetworkRuntimeFeatures EVar12;
  undefined8 uVar13;
  FInternetAddr *pFVar14;
  undefined **ppuVar15;
  longlong *plVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_398 [32];
  byte local_368;
  byte local_367 [15];
  undefined8 local_358;
  EHandshakeVersion EStack_350;
  undefined1 uStack_34f;
  undefined2 uStack_34e;
  uint uStack_34c;
  undefined4 local_348 [4];
  undefined8 local_338;
  undefined4 local_330;
  longlong local_328;
  FSharedReferencer<1> FStack_320;
  void *local_318 [2];
  FString local_308;
  FCommonSendToClientParams local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  FParsedHandshakeData local_2c8;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [128];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_398;
  iVar2 = (this->MagicHeader).NumBits;
  if (0 < iVar2) {
    local_348[0] = 0;
    (**(code **)(param_1->_padding_ + 400))(param_1,local_348,(longlong)iVar2);
  }
  bVar6 = true;
  local_368 = 0;
  local_367[0] = 0;
  bVar11 = true;
  if (NetCLVersion < this->LastRemoteHandshakeVersion) {
    (**(code **)(param_1->_padding_ + 400))(param_1,&local_368,2);
    (**(code **)(param_1->_padding_ + 400))(param_1,local_367,3);
    if ((UE::Net::GVerifyNetSessionID != 0) &&
       (((uint)local_368 != this->CachedGlobalNetTravelCount || ((param_1->_padding_ & 0x200) != 0))
       )) {
      bVar6 = false;
    }
    bVar11 = true;
    if ((UE::Net::GVerifyNetClientID != 0) &&
       (((uint)local_367[0] != this->CachedClientID || ((param_1->_padding_ & 0x200) != 0)))) {
      bVar11 = false;
    }
  }
  uVar9 = FBitReader::ReadBit(param_1);
  if (uVar9 == '\0') {
    if ((param_1->_padding_ & 0x200) == 0) {
      if ((!bVar6) || (!bVar11)) {
        if ((4 < (byte)LogHandshake._0_1_) && (bVar11 = TrackValidationLogs(this), bVar11)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
        }
        param_1->Pos = param_1->Num;
        return;
      }
      dVar19 = 0.0;
      if (this->LastInitTimestamp == 0.0) {
        return;
      }
      pTVar1 = &this->LastChallengeSuccessAddress;
      if (pTVar1->Object == (FInternetAddr *)0x0) {
        return;
      }
      if (**(char **)&this->field_0x8 != '\x01') {
        return;
      }
      if (this->Driver != (UNetDriver *)0x0) {
        dVar19 = this->Driver->ElapsedTime;
      }
      if (dVar19 - this->LastInitTimestamp < __real_4024000000000000) {
        return;
      }
      local_328 = 0;
      FStack_320.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FInternetAddr_const_,1> *)&local_328) {
        pTVar1->Object = (FInternetAddr *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LastChallengeSuccessAddress).SharedReferenceCount,&FStack_320);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_320.ReferenceController);
      this->LastInitTimestamp = 0.0;
      return;
    }
LAB_1480ad32d:
    if (4 < (byte)LogHandshake._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
    }
    return;
  }
  if ((param_1->_padding_ & 0x200) != 0) goto LAB_1480ad32d;
  uVar21 = 0;
  uVar22 = 0;
  local_2c8.RemoteMinVersion = Latest;
  local_2c8.RemoteCurVersion = Latest;
  local_2c8.Timestamp = 0.0;
  local_2c8.RemoteNetworkVersion = 0;
  local_2c8.RemoteNetworkFeatures = None;
  local_2c8.HandshakePacketType = InitialPacket;
  local_2c8.RemoteSentHandshakePacketCount = '\0';
  EVar12 = None;
  local_2c8.bRestartHandshake = false;
  local_2c8.SecretId = '\0';
  local_2c8.Cookie[0x10] = '\0';
  local_2c8.Cookie[0x11] = '\0';
  local_2c8.Cookie[0x12] = '\0';
  local_2c8.Cookie[0x13] = '\0';
  local_2c8.OrigCookie[0x10] = '\0';
  local_2c8.OrigCookie[0x11] = '\0';
  local_2c8.OrigCookie[0x12] = '\0';
  local_2c8.OrigCookie[0x13] = '\0';
  local_2c8.Cookie[0] = '\0';
  local_2c8.Cookie[1] = '\0';
  local_2c8.Cookie[2] = '\0';
  local_2c8.Cookie[3] = '\0';
  local_2c8.Cookie[4] = '\0';
  local_2c8.Cookie[5] = '\0';
  local_2c8.Cookie[6] = '\0';
  local_2c8.Cookie[7] = '\0';
  local_2c8.Cookie[8] = '\0';
  local_2c8.Cookie[9] = '\0';
  local_2c8.Cookie[10] = '\0';
  local_2c8.Cookie[0xb] = '\0';
  local_2c8.Cookie[0xc] = '\0';
  local_2c8.Cookie[0xd] = '\0';
  local_2c8.Cookie[0xe] = '\0';
  local_2c8.Cookie[0xf] = '\0';
  local_2c8.OrigCookie[0] = '\0';
  local_2c8.OrigCookie[1] = '\0';
  local_2c8.OrigCookie[2] = '\0';
  local_2c8.OrigCookie[3] = '\0';
  local_2c8.OrigCookie[4] = '\0';
  local_2c8.OrigCookie[5] = '\0';
  local_2c8.OrigCookie[6] = '\0';
  local_2c8.OrigCookie[7] = '\0';
  local_2c8.OrigCookie[8] = '\0';
  local_2c8.OrigCookie[9] = '\0';
  local_2c8.OrigCookie[10] = '\0';
  local_2c8.OrigCookie[0xb] = '\0';
  local_2c8.OrigCookie[0xc] = '\0';
  local_2c8.OrigCookie[0xd] = '\0';
  local_2c8.OrigCookie[0xe] = '\0';
  local_2c8.OrigCookie[0xf] = '\0';
  bVar10 = ParseHandshakePacket(this,param_1,&local_2c8);
  if (!bVar10) {
    FArchiveState::SetError((FArchiveState *)param_1);
    if ((byte)LogHandshake._0_1_ < 5) {
      return;
    }
    ppuVar15 = (undefined **)&::LOG_Static;
    goto LAB_1480ace35;
  }
  if ((local_2c8.HandshakePacketType != Challenge) || (local_2c8.Timestamp <= 0.0)) {
    bVar10 = false;
LAB_1480acc1c:
    bVar7 = false;
  }
  else {
    bVar10 = true;
    if (this->field_0x10 == '\x03') goto LAB_1480acc1c;
    bVar7 = true;
  }
  if (**(char **)&this->field_0x8 == '\0') {
    if (bVar11) {
      if (((bVar6) || (bVar7)) || (local_2c8.HandshakePacketType == Last)) {
        if ((this->field_0x10 == '\0') || (this->field_0x10 == '\x01')) {
          if (local_2c8.bRestartHandshake == false) {
            if (bVar10) {
              if (4 < (byte)LogHandshake._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
              }
              this->CachedGlobalNetTravelCount = (uint)local_368;
              if (this->Driver != (UNetDriver *)0x0) {
                dVar19 = this->Driver->ElapsedTime;
                uVar21 = SUB84(dVar19,0);
                uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
              }
              this->LastChallengeTimestamp = (double)CONCAT44(uVar22,uVar21);
              SendChallengeResponse
                        (this,local_2c8.RemoteCurVersion,local_2c8.SecretId,local_2c8.Timestamp,
                         local_2c8.Cookie);
              HandlerComponent::SetState((HandlerComponent *)this,InitializedOnLocal);
              return;
            }
            if ((local_2c8.HandshakePacketType == Ack) && (local_2c8.Timestamp < 0.0)) {
              if (this->bRestartedHandshake == false) {
                if ((this->Driver == (UNetDriver *)0x0) ||
                   (pUVar3 = (this->Driver->ServerConnection).field0_0x0.DebugPtr,
                   pUVar3 == (UNetConnection *)0x0)) {
                  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_7541995887837314052>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PacketHandlers\\StatelessConnectHandlerComponent.cpp"
                                      ,0x3fc,"ServerConn != nullptr");
                  if (bVar11) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                else {
                  uVar8 = local_2c8.Cookie._2_2_;
                  (**(code **)(pUVar3->_padding_ + 0x378))
                            (pUVar3,local_2c8.Cookie._0_4_ & 0x3fff,uVar8 & 0x3fff);
                }
                *(undefined8 *)this->AuthorisedCookie = local_2c8.Cookie._0_8_;
                *(undefined8 *)(this->AuthorisedCookie + 8) = local_2c8.Cookie._8_8_;
                *(undefined4 *)(this->AuthorisedCookie + 0x10) = local_2c8.Cookie._16_4_;
              }
              HandlerComponent::SetState((HandlerComponent *)this,Initialized);
              HandlerComponent::Initialized((HandlerComponent *)this);
              this->bRestartedHandshake = false;
              this->SentHandshakePacketCount = '\0';
              return;
            }
            if (local_2c8.HandshakePacketType != Last) {
              return;
            }
            FNetworkVersion::GetLocalNetworkVersion(true);
            local_168.bIsDynamic = false;
            local_168.bIsExternal = false;
            local_168.Base = local_148;
            local_168.CurPos = local_148;
            local_168.End = (wchar_t *)local_48;
            local_288.Base = local_268;
            local_288.CurPos = local_268;
            local_288.End = (wchar_t *)&local_168;
            local_288.bIsDynamic = false;
            local_288.bIsExternal = false;
            if (this->Driver != (UNetDriver *)0x0) {
              EVar12 = UNetDriver::GetNetworkRuntimeFeatures(this->Driver);
            }
            FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset(EVar12,&local_168);
            FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset
                      (local_2c8.RemoteNetworkFeatures,&local_288);
            if (4 < (byte)LogHandshake._0_1_) {
              if (local_168.End < local_168.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_168,1);
              }
              *local_168.CurPos = L'\0';
              if (local_288.End < (TStringBuilderBase<wchar_t> *)(local_288.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_288,1);
              }
              *local_288.CurPos = L'\0';
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
            }
            if (*(void **)&this->HandshakeFailureCallback != (void *)0x0) {
              EStack_350 = (EHandshakeVersion)local_2c8.RemoteNetworkFeatures;
              uStack_34f = local_2c8.RemoteNetworkFeatures._1_1_;
              local_330 = CONCAT22(uStack_34e,local_2c8.RemoteNetworkFeatures);
              local_358 = (TSharedPtr<FInternetAddr_const_,1> *)
                          CONCAT44(local_2c8.RemoteNetworkVersion,1);
              local_338 = local_358;
              UE::Core::Private::Function::CheckCallable(*(void **)&this->HandshakeFailureCallback);
              pcVar5 = *(code **)&this->HandshakeFailureCallback;
              plVar4 = *(longlong **)&(this->HandshakeFailureCallback).field_0x28;
              plVar16 = (longlong *)&(this->HandshakeFailureCallback).field_0x10;
              if (plVar4 != (longlong *)0x0) {
                plVar16 = plVar4;
              }
              uVar13 = (**(code **)(*plVar16 + 8))();
              (*pcVar5)(uVar13,&local_338);
            }
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
            return;
          }
          if ((byte)LogHandshake._0_1_ < 5) {
            return;
          }
          ppuVar15 = (undefined **)&::LOG_Static;
        }
        else {
          if (local_2c8.bRestartHandshake == false) {
            return;
          }
          local_2d8 = 0;
          local_2e8 = 0;
          uStack_2e0 = 0;
          if (((*(longlong *)this->AuthorisedCookie == 0) &&
              (*(longlong *)(this->AuthorisedCookie + 8) == 0)) &&
             (*(int *)(this->AuthorisedCookie + 0x10) == 0)) {
            bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_7541995887837313995>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PacketHandlers\\StatelessConnectHandlerComponent.cpp"
                                ,0x435,"bValidAuthCookie");
            if (!bVar11) {
              if (4 < (byte)LogHandshake._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
              }
              FArchiveState::SetError((FArchiveState *)param_1);
              return;
            }
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          dVar17 = FWindowsPlatformTime::Seconds();
          dVar19 = __real_4024000000000000;
          if (this->bRestartedHandshake == false) {
            if ((this->Driver == (UNetDriver *)0x0) ||
               (pUVar3 = (this->Driver->ServerConnection).field0_0x0.DebugPtr,
               pUVar3 == (UNetConnection *)0x0)) {
              dVar20 = 0.0;
            }
            else {
              dVar20 = pUVar3->LastReceiveRealtime;
            }
            dVar18 = dVar17 - this->LastClientSendTimestamp;
            bVar11 = __real_4024000000000000 < dVar18;
            if (((this->LastRestartPacketTimestamp == 0.0) ||
                (__real_3ff199999999999a < dVar17 - this->LastRestartPacketTimestamp)) ||
               (__real_3ff0000000000000 < dVar17 - dVar20)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            this->LastRestartPacketTimestamp = dVar17;
            if ((dVar19 < dVar18) && (bVar6)) {
              if (4 < (byte)LogHandshake._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
              }
              this->bRestartedHandshake = true;
              HandlerComponent::SetState((HandlerComponent *)this,UnInitialized);
              SendInitialPacket(this,this->LastRemoteHandshakeVersion);
              return;
            }
          }
          else {
            this->LastRestartPacketTimestamp = dVar17;
            bVar11 = false;
          }
          dVar19 = this->Driver->ElapsedTime;
          if (dVar19 - LastLogStartTime <= __real_403e000000000000) {
            if (2 < LogCounter) {
              return;
            }
            LogCounter = LogCounter + 1;
          }
          else {
            LogCounter = 1;
            LastLogStartTime = dVar19;
          }
          if (this->bRestartedHandshake == false) {
            if (bVar11) {
              if ((byte)LogHandshake._0_1_ < 5) {
                return;
              }
              ppuVar15 = (undefined **)&::LOG_Static;
            }
            else {
              if ((byte)LogHandshake._0_1_ < 5) {
                return;
              }
              ppuVar15 = (undefined **)&::LOG_Static;
            }
          }
          else {
            if ((byte)LogHandshake._0_1_ < 5) {
              return;
            }
            ppuVar15 = &PTR_u_Ignoring_restar_151a0c700;
          }
        }
LAB_1480ace35:
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)ppuVar15,(FLogCategoryBase *)&LogHandshake);
        return;
      }
      goto LAB_1480ad2a4;
    }
  }
  else if (**(char **)&this->field_0x8 == '\x01') {
    if ((bVar6) && (bVar11)) {
      if ((this->LastChallengeSuccessAddress).Object == (FInternetAddr *)0x0) {
        return;
      }
      if (4 < (byte)LogHandshake._0_1_) {
        ::FString::FromBlob(&local_308,this->AuthorisedCookie,0x14);
        pFVar14 = TSharedPtr<FInternetAddr_const_,1>::operator->(&this->LastChallengeSuccessAddress)
        ;
        (**(code **)((longlong)*pFVar14 + 0x80))(pFVar14,local_318,1);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
        if (local_318[0] != (void *)0x0) {
          FMemory::Free(local_318[0]);
        }
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.Data.AllocatorInstance.Data);
        }
      }
      local_358 = &this->LastChallengeSuccessAddress;
      EStack_350 = this->LastRemoteHandshakeVersion;
      uStack_34c = this->CachedClientID;
      local_2f8._9_1_ = uStack_34f;
      local_2f8.HandshakeVersion = EStack_350;
      local_2f8._10_2_ = uStack_34e;
      local_2f8.ClientID = uStack_34c;
      local_2f8.ClientAddress = local_358;
      SendChallengeAck(this,&local_2f8,'\0',this->AuthorisedCookie);
      return;
    }
    goto LAB_1480ad2a4;
  }
  if ((bVar6) && (bVar11)) {
    return;
  }
LAB_1480ad2a4:
  if ((4 < (byte)LogHandshake._0_1_) && (bVar11 = TrackValidationLogs(this), bVar11)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
  }
  param_1->Pos = param_1->Num;
  return;
}

// IncomingConnectionless @ 1480ad460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::IncomingConnectionless
          (StatelessConnectHandlerComponent *this,FIncomingPacketRef *param_1)

{
  FBitReader *this_00;
  longlong lVar1;
  UNetDriver *pUVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  EHandshakeVersion EVar6;
  bool bVar7;
  bool bVar8;
  uchar uVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_338 [32];
  byte local_2f8;
  EHandshakeVersion local_2f7;
  byte local_2f6 [14];
  TSharedPtr<FInternetAddr_const_,1> *local_2e8;
  EHandshakeVersion EStack_2e0;
  undefined2 uStack_2df;
  undefined1 uStack_2dd;
  uint uStack_2dc;
  uint local_2d8 [2];
  TSharedPtr<FInternetAddr_const_,1> local_2d0;
  FInternetAddr *local_2c0;
  FSharedReferencer<1> local_2b8;
  undefined8 local_2b0;
  FSharedReferencer<1> aFStack_2a8 [2];
  TSharedPtr<FInternetAddr_const_,1> *local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined2 local_27f;
  undefined1 local_27d;
  FCommonSendToClientParams local_278;
  FCommonSendToClientParams local_268;
  undefined1 local_258 [8];
  TReferenceControllerBase<1> *local_250;
  FCommonSendToClientParams local_248;
  undefined2 local_22f;
  undefined1 local_22d;
  FCommonSendToClientParams local_228;
  FBitWriter local_218;
  FBitWriter local_158;
  FParsedHandshakeData local_98;
  uchar local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_338;
  this_00 = param_1->Packet;
  local_2d0.Object = param_1->Address->Object;
  local_2d0.SharedReferenceCount.ReferenceController =
       (param_1->Address->SharedReferenceCount).ReferenceController;
  if (local_2d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (0 < (this->MagicHeader).NumBits) {
    local_2d8[0] = 0;
    (**(code **)(this_00->_padding_ + 400))(this_00,local_2d8);
    if ((UE::Net::GVerifyMagicHeader != 0) && (local_2d8[0] != this->MagicHeaderUint)) {
      if ((4 < (byte)LogNet._0_1_) && (bVar8 = TrackValidationLogs(this), bVar8)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      FArchiveState::SetError((FArchiveState *)this_00);
      goto LAB_1480adbd0;
    }
  }
  bVar8 = true;
  local_2f6[0] = 0;
  local_2f8 = 0;
  if (2 < UE::Net::CurrentHandshakeVersion) {
    (**(code **)(this_00->_padding_ + 400))(this_00,local_2f6,2);
    (**(code **)(this_00->_padding_ + 400))(this_00,&local_2f8);
    if ((UE::Net::GVerifyNetSessionID != 0) &&
       (((uint)local_2f6[0] != this->CachedGlobalNetTravelCount ||
        ((this_00->_padding_ & 0x200) != 0)))) {
      bVar8 = false;
    }
  }
  uVar9 = FBitReader::ReadBit(this_00);
  if ((uVar9 == '\0') || ((this_00->_padding_ & 0x200) != 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  local_2b0 = 0;
  aFStack_2a8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LastChallengeSuccessAddress != (TSharedPtr<FInternetAddr_const_,1> *)&local_2b0) {
    (this->LastChallengeSuccessAddress).Object = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastChallengeSuccessAddress).SharedReferenceCount,aFStack_2a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_2a8[0].ReferenceController);
  if (bVar10) {
    local_98.RemoteMinVersion = Latest;
    local_98.RemoteCurVersion = Latest;
    local_98.Timestamp = 0.0;
    local_98.RemoteNetworkVersion = 0;
    local_98.RemoteNetworkFeatures = None;
    local_98.HandshakePacketType = InitialPacket;
    local_98.RemoteSentHandshakePacketCount = '\0';
    local_98.bRestartHandshake = false;
    local_98.SecretId = '\0';
    local_98.Cookie[0x10] = '\0';
    local_98.Cookie[0x11] = '\0';
    local_98.Cookie[0x12] = '\0';
    local_98.Cookie[0x13] = '\0';
    local_98.OrigCookie[0x10] = '\0';
    local_98.OrigCookie[0x11] = '\0';
    local_98.OrigCookie[0x12] = '\0';
    local_98.OrigCookie[0x13] = '\0';
    local_98.Cookie[0] = '\0';
    local_98.Cookie[1] = '\0';
    local_98.Cookie[2] = '\0';
    local_98.Cookie[3] = '\0';
    local_98.Cookie[4] = '\0';
    local_98.Cookie[5] = '\0';
    local_98.Cookie[6] = '\0';
    local_98.Cookie[7] = '\0';
    local_98.Cookie[8] = '\0';
    local_98.Cookie[9] = '\0';
    local_98.Cookie[10] = '\0';
    local_98.Cookie[0xb] = '\0';
    local_98.Cookie[0xc] = '\0';
    local_98.Cookie[0xd] = '\0';
    local_98.Cookie[0xe] = '\0';
    local_98.Cookie[0xf] = '\0';
    local_98.OrigCookie[0] = '\0';
    local_98.OrigCookie[1] = '\0';
    local_98.OrigCookie[2] = '\0';
    local_98.OrigCookie[3] = '\0';
    local_98.OrigCookie[4] = '\0';
    local_98.OrigCookie[5] = '\0';
    local_98.OrigCookie[6] = '\0';
    local_98.OrigCookie[7] = '\0';
    local_98.OrigCookie[8] = '\0';
    local_98.OrigCookie[9] = '\0';
    local_98.OrigCookie[10] = '\0';
    local_98.OrigCookie[0xb] = '\0';
    local_98.OrigCookie[0xc] = '\0';
    local_98.OrigCookie[0xd] = '\0';
    local_98.OrigCookie[0xe] = '\0';
    local_98.OrigCookie[0xf] = '\0';
    bVar10 = ParseHandshakePacket(this,this_00,&local_98);
    if (bVar10) {
      if (**(char **)&this->field_0x8 == '\x01') {
        local_2f7 = Latest;
        bVar10 = CheckVersion(this,&local_98,&local_2f7);
        EVar6 = local_2f7;
        if ((local_98.HandshakePacketType == InitialPacket) && (local_98.Timestamp == 0.0)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        pUVar2 = this->Driver;
        if (pUVar2 == (UNetDriver *)0x0) {
          uVar16 = 0;
          uVar17 = 0;
        }
        else {
          uVar16 = SUB84(pUVar2->ElapsedTime,0);
          uVar17 = (undefined4)((ulonglong)pUVar2->ElapsedTime >> 0x20);
        }
        if (bVar10) {
          if (bVar8) {
            if (!bVar7) {
              dVar5 = (double)CONCAT44(uVar17,uVar16) - local_98.Timestamp;
              dVar4 = local_98.Timestamp - this->LastSecretUpdateTimestamp;
              if ((dVar5 < 0.0) || (__real_4044000000000000 <= dVar5)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (local_98.SecretId == this->ActiveSecret) {
                bVar10 = 0.0 <= dVar4;
              }
              else {
                bVar10 = dVar4 <= 0.0;
              }
              if ((bVar8) && (bVar10)) {
                GenerateCookie(this,&local_2d0,local_98.SecretId,local_98.Timestamp,
                               (uchar (*) [20])local_58);
                iVar11 = memcmp(local_98.Cookie,local_58,0x14);
                if (iVar11 == 0) {
                  if (local_98.bRestartHandshake == false) {
                    uVar13 = local_98.Cookie._0_4_;
                    this->LastServerSequence = local_98.Cookie._0_4_ & 0x3fff;
                    this->LastClientSequence = (int)(short)local_98.Cookie._2_2_ & 0x3fff;
                    uVar16 = local_98.Cookie._4_4_;
                    uVar17 = local_98.Cookie._8_4_;
                    uVar15 = local_98.Cookie._12_4_;
                    uVar12 = local_98.Cookie._16_4_;
                  }
                  else {
                    uVar13 = local_98.OrigCookie._0_4_;
                    uVar16 = local_98.OrigCookie._4_4_;
                    uVar17 = local_98.OrigCookie._8_4_;
                    uVar15 = local_98.OrigCookie._12_4_;
                    uVar12 = local_98.OrigCookie._16_4_;
                  }
                  *(uint *)this->AuthorisedCookie = uVar13;
                  *(undefined4 *)(this->AuthorisedCookie + 4) = uVar16;
                  *(undefined4 *)(this->AuthorisedCookie + 8) = uVar17;
                  *(undefined4 *)(this->AuthorisedCookie + 0xc) = uVar15;
                  *(undefined4 *)(this->AuthorisedCookie + 0x10) = uVar12;
                  this->bRestartedHandshake = local_98.bRestartHandshake;
                  if ((local_2d0.Object == (FInternetAddr *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar8)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  puVar14 = (undefined8 *)
                            (**(code **)((longlong)*local_2d0.Object + 0xa0))
                                      (local_2d0.Object,local_258);
                  local_2b8.ReferenceController = (TReferenceControllerBase<1> *)puVar14[1];
                  local_2c0 = (FInternetAddr *)*puVar14;
                  if (local_2b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_2b8.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_2b8.ReferenceController)->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  if (&this->LastChallengeSuccessAddress !=
                      (TSharedPtr<FInternetAddr_const_,1> *)&local_2c0) {
                    (this->LastChallengeSuccessAddress).Object = local_2c0;
                    local_2c0 = (FInternetAddr *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=
                              (&(this->LastChallengeSuccessAddress).SharedReferenceCount,&local_2b8)
                    ;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_2b8.ReferenceController);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_250);
                  this->LastRemoteHandshakeVersion = local_2f7;
                  uStack_28c = (uint)local_2f8;
                  this->CachedClientID = uStack_28c;
                  if ((local_2f7 < this->MinClientHandshakeVersion) &&
                     (UE::Net::MinSupportedHandshakeVersion <= (int)(uint)local_2f7)) {
                    this->MinClientHandshakeVersion = local_2f7;
                  }
                  local_298 = &local_2d0;
                  uStack_290 = CONCAT31(uStack_290._1_3_,local_2f7);
                  local_248._8_8_ = ZEXT58(CONCAT14(local_2f8,uStack_290));
                  local_248.ClientAddress = local_298;
                  SendChallengeAck(this,&local_248,local_98.RemoteSentHandshakePacketCount,
                                   this->AuthorisedCookie);
                }
              }
              goto LAB_1480adbd0;
            }
          }
          else if (!bVar7) {
            if (4 < (byte)LogHandshake._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
            }
            FArchiveState::SetError((FArchiveState *)this_00);
            goto LAB_1480adbd0;
          }
          local_2e8 = &local_2d0;
          EStack_2e0 = local_2f7;
          uStack_2dc = (uint)local_2f8;
          local_268._8_8_ =
               ZEXT58(CONCAT14(local_2f8,CONCAT13(uStack_2dd,CONCAT21(uStack_2df,local_2f7))));
          local_268.ClientAddress = local_2e8;
          SendConnectChallenge(this,&local_268,local_98.RemoteSentHandshakePacketCount);
        }
        else if ((bVar7) && (SessionClientId < local_98.RemoteCurVersion)) {
          if ((double)CONCAT44(uVar17,uVar16) - this->LastUpgradeMessagePeriodStart <
              __real_4072c00000000000) {
            uVar13 = this->UpgradeMessageCounter + 1;
            this->UpgradeMessageCounter = uVar13;
            if (0x1ff < uVar13) goto LAB_1480adbd0;
          }
          else {
            this->LastUpgradeMessagePeriodStart = (double)CONCAT44(uVar17,uVar16);
            this->UpgradeMessageCounter = 0;
          }
          local_2e8 = &local_2d0;
          uStack_2df = local_22f;
          uStack_2dd = local_22d;
          EStack_2e0 = local_2f7;
          uVar13 = (uint)local_2f8;
          uStack_2dc = uVar13;
          if (pUVar2 != (UNetDriver *)0x0) {
            iVar11 = 0xd8;
            if (local_2f7 < SessionClientId) {
              iVar11 = 0xd3;
            }
            FBitWriter::FBitWriter
                      (&local_158,(longlong)(iVar11 + (this->MagicHeader).NumBits),false);
            BeginHandshakePacket
                      (this,&local_158,Last,EVar6,this->SentHandshakePacketCount,uVar13,None);
            local_228._9_2_ = uStack_2df;
            local_228.HandshakeVersion = EStack_2e0;
            local_228._11_1_ = uStack_2dd;
            local_228.ClientID = uStack_2dc;
            local_228.ClientAddress = local_2e8;
            SendToClient(this,&local_228,Last,&local_158);
            FBitWriter::~FBitWriter(&local_158);
          }
        }
      }
    }
    else {
      FArchiveState::SetError((FArchiveState *)this_00);
      lVar1 = *(longlong *)(*(longlong *)&this->field_0x8 + 8);
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      }
      if ((4 < (byte)LogHandshake._0_1_) &&
         ((lVar1 == 0 ||
          ((*(char *)(lVar1 + 0x69) == '\0' &&
           ((*(char *)(lVar1 + 0x40) == '\0' ||
            (*(int *)(lVar1 + 0x70) = *(int *)(lVar1 + 0x70) + 1,
            *(int *)(lVar1 + 0x70) <= *(int *)(lVar1 + 0x6c))))))))) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
      }
    }
  }
  else if ((this_00->_padding_ & 0x200) == 0) {
    if ((bVar8) && (param_1->Traits->bFromRecentlyDisconnected == false)) {
      local_2e8 = &local_2d0;
      EVar6 = (EHandshakeVersion)UE::Net::MinSupportedHandshakeVersion;
      uStack_2df = local_27f;
      uStack_2dd = local_27d;
      uVar13 = (uint)local_2f8;
      EStack_2e0 = EVar6;
      uStack_2dc = uVar13;
      if (this->Driver != (UNetDriver *)0x0) {
        iVar11 = 0xd8;
        if (EVar6 < SessionClientId) {
          iVar11 = 0xd3;
        }
        FBitWriter::FBitWriter(&local_218,(longlong)(iVar11 + (this->MagicHeader).NumBits),false);
        BeginHandshakePacket
                  (this,&local_218,RestartHandshake,EVar6,this->SentHandshakePacketCount,uVar13,
                   RestartHandshake);
        lVar1 = *(longlong *)(*(longlong *)&this->field_0x8 + 8);
        if ((5 < (byte)LogHandshake._0_1_) &&
           ((lVar1 == 0 ||
            ((*(char *)(lVar1 + 0x69) == '\0' &&
             ((*(char *)(lVar1 + 0x40) == '\0' ||
              (*(int *)(lVar1 + 0x70) = *(int *)(lVar1 + 0x70) + 1,
              *(int *)(lVar1 + 0x70) <= *(int *)(lVar1 + 0x6c))))))))) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
        }
        local_278._9_2_ = uStack_2df;
        local_278.HandshakeVersion = EStack_2e0;
        local_278._11_1_ = uStack_2dd;
        local_278.ClientID = uStack_2dc;
        local_278.ClientAddress = local_2e8;
        SendToClient(this,&local_278,RestartHandshake,&local_218);
        FBitWriter::~FBitWriter(&local_218);
      }
    }
  }
  else if (4 < (byte)LogHandshake._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
  }
LAB_1480adbd0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.SharedReferenceCount.ReferenceController);
  return;
}

// InitFromConnectionless @ 1480afa60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::InitFromConnectionless
          (StatelessConnectHandlerComponent *this,StatelessConnectHandlerComponent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FInternetAddr *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  
  pTVar1 = (param_1->LastChallengeSuccessAddress).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->LastChallengeSuccessAddress).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->LastChallengeSuccessAddress).SharedReferenceCount.ReferenceController;
  (this->LastChallengeSuccessAddress).Object = pFVar2;
  (this->LastChallengeSuccessAddress).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->LastRemoteHandshakeVersion = param_1->LastRemoteHandshakeVersion;
  this->CachedClientID = param_1->CachedClientID;
  uVar4 = *(undefined8 *)(param_1->AuthorisedCookie + 8);
  *(undefined8 *)this->AuthorisedCookie = *(undefined8 *)param_1->AuthorisedCookie;
  *(undefined8 *)(this->AuthorisedCookie + 8) = uVar4;
  *(undefined4 *)(this->AuthorisedCookie + 0x10) = *(undefined4 *)(param_1->AuthorisedCookie + 0x10)
  ;
  if (this->Driver != (UNetDriver *)0x0) {
    this->LastInitTimestamp = this->Driver->ElapsedTime;
    return;
  }
  this->LastInitTimestamp = 0.0;
  return;
}

// Initialize @ 1480b13b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall StatelessConnectHandlerComponent::Initialize(StatelessConnectHandlerComponent *this)

{
  EHandshakeVersion *pEVar1;
  EHandshakeVersion EVar2;
  EHandshakeVersion EVar3;
  EHandshakeVersion EVar4;
  
  if (**(char **)&this->field_0x8 == '\x01') {
    HandlerComponent::Initialized((HandlerComponent *)this);
    if ((EHandshakeVersion)UE::Net::CurrentHandshakeVersion < (Latest|Randomized)) {
      pEVar1 = UE::Net::HandshakeCompatibilityBreaks;
      EVar4 = Latest;
      EVar2 = Original;
      do {
        EVar3 = *pEVar1;
        if ((EHandshakeVersion)UE::Net::CurrentHandshakeVersion < EVar3) {
          EVar4 = EVar3 - Randomized;
          EVar3 = EVar2;
          break;
        }
        pEVar1 = pEVar1 + 1;
        EVar2 = EVar3;
      } while (pEVar1 != &DAT_1519f0be3);
      if ((((EHandshakeVersion)UE::Net::MinSupportedHandshakeVersion < EVar3) ||
          (EVar4 < (EHandshakeVersion)UE::Net::MinSupportedHandshakeVersion)) &&
         (1 < (byte)LogHandshake._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
      }
    }
    else if (1 < (byte)LogHandshake._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
      return;
    }
  }
  return;
}

// IsValid @ 1480b4190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

bool __thiscall StatelessConnectHandlerComponent::IsValid(StatelessConnectHandlerComponent *this)

{
  return true;
}

// IteratePropertiesRecursive @ 1480b41a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ObjectPropertyTrace::IteratePropertiesRecursive
          (FProperty *param_1,void *param_2,FString *param_3,
          TFunctionRef<void___cdecl(FString_const_&,FString_const_&,int,int,TStringBuilderBase<wchar_t>_&)>
          *param_4,int *param_5,int param_6,TStringBuilderBase<wchar_t> *param_7)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FProperty *pFVar3;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar4;
  ForElementType<unsigned_int> FVar5;
  FScriptContainerElement *_Src;
  code *pcVar6;
  longlong lVar7;
  FScriptSetHelper *pFVar8;
  FScriptMapHelper_u_16 FVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar21;
  void *pvVar22;
  ForElementType<unsigned_int> FVar23;
  FMapProperty *pFVar24;
  ForAnyElementType _Src_00;
  ulonglong *puVar25;
  longlong lVar26;
  FString *pFVar28;
  FMapProperty *pFVar29;
  undefined1 auStackY_438 [32];
  int local_3f8;
  int local_3d8;
  uint local_3d0 [2];
  FString *local_3c8;
  TScriptContainerIterator<FScriptSetHelper> local_3b8;
  void *local_3a8;
  ForAnyElementType local_3a0;
  int local_398 [2];
  ForAnyElementType local_390;
  int local_388;
  int local_384;
  int local_380;
  int local_378 [2];
  int local_370;
  int local_368 [2];
  int local_360 [2];
  int local_358;
  int local_350 [2];
  uint local_348;
  uint local_344;
  uint local_340 [2];
  int local_338;
  int local_330 [2];
  int local_328;
  int local_320 [2];
  int local_318;
  int local_310;
  int local_308;
  TFieldIterator<FProperty> local_300;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  TFunctionRef<void___cdecl(FString_const_&,FString_const_&,int,int,TStringBuilderBase<wchar_t>_&)>
  local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  TFunctionRef<void___cdecl(FString_const_&,FString_const_&,int,int,TStringBuilderBase<wchar_t>_&)>
  local_208;
  TFunctionRef<void___cdecl(FString_const_&,FString_const_&,int,int,TStringBuilderBase<wchar_t>_&)>
  local_1f8;
  FString local_1e8;
  FString local_1d8;
  TFunctionRef<void___cdecl(FString_const_&,FString_const_&,int,int,TStringBuilderBase<wchar_t>_&)>
  local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TFunctionRef<void___cdecl(FString_const_&,FString_const_&,int,int,TStringBuilderBase<wchar_t>_&)>
  local_188;
  FScopedPropertyName local_178;
  FString local_168;
  void *local_158 [2];
  void *local_148 [2];
  void *local_138 [2];
  void *local_128 [2];
  void *local_118 [2];
  void *local_108 [2];
  FString local_f8;
  void *local_e8 [2];
  void *local_d8 [2];
  FScriptMapHelper local_c8;
  undefined1 local_90 [24];
  undefined8 uStack_78;
  int local_70;
  ulonglong local_68;
  FMapProperty *pFVar20;
  int *piVar27;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pFVar20 = (FMapProperty *)0x0;
  iVar12 = 0;
  local_3a8 = (void *)((ulonglong)local_3a8 & 0xffffffff00000000);
  local_3c8 = param_3;
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if ((param_1 == (FProperty *)0x0) ||
       (pFVar24 = (FMapProperty *)param_1,
       (*(ulonglong *)(param_1->_padding_ + 0x18) >> 0x2e & 1) == 0)) {
      pFVar24 = pFVar20;
    }
    iVar13 = 0;
    if (pFVar24 == (FMapProperty *)0x0) {
      if ((param_1 == (FProperty *)0x0) ||
         (pFVar24 = (FMapProperty *)param_1,
         (*(ulonglong *)(param_1->_padding_ + 0x18) >> 0x2f & 1) == 0)) {
        pFVar24 = pFVar20;
      }
      if (pFVar24 == (FMapProperty *)0x0) {
        if ((param_1 == (FProperty *)0x0) ||
           ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
          local_3f8 = param_6;
          if (1 < param_1->ArrayDim) {
            *param_5 = *param_5 + 1;
            local_3f8 = *param_5;
            ::FString::PrintfImpl(&local_168,L"{Num = %d}");
            local_178.StartSize = (int)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
            local_178.Builder = param_7;
            TStringBuilderBase<wchar_t>::AppendChar<wchar_t,0>(param_7,L'.');
            pFVar28 = FField::GetName((FField *)param_1,&local_f8);
            iVar16 = (pFVar28->Data).ArrayNum;
            iVar11 = iVar16 + -1;
            if (iVar16 == 0) {
              iVar11 = iVar12;
            }
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      (param_7,(wchar_t *)(pFVar28->Data).AllocatorInstance.Data,iVar11);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            uVar14 = (**(code **)(param_1->_padding_ + 0x68))(param_1,local_e8,0,0);
            local_318 = param_6;
            local_310 = local_3f8;
            (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,uVar14,&local_168);
            if (local_e8[0] != (void *)0x0) {
              FMemory::Free(local_e8[0]);
            }
            FScopedPropertyName::~FScopedPropertyName(&local_178);
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
          }
          uVar19 = param_1->ArrayDim;
          pFVar24 = pFVar20;
          pFVar29 = pFVar20;
          if (uVar19 != 0) {
            do {
              iVar12 = (int)pFVar29;
              if (((iVar12 < 0) || ((int)uVar19 <= iVar12)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((param_2 == (void *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ContainerPtr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2de,L""), bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_3a8 = (void *)((longlong)param_2 +
                                  (longlong)param_1->Offset_Internal +
                                  (longlong)iVar12 * (longlong)param_1->ElementSize);
              if (param_1->ArrayDim == 1) {
                pFVar24 = (FMapProperty *)(ulonglong)((uint)pFVar24 | 1);
                local_3a0.Data = (FScriptContainerElement *)0x0;
                iVar16 = (local_3c8->Data).ArrayNum;
                _Src = (local_3c8->Data).AllocatorInstance.Data;
                local_398[0] = iVar16;
                if (iVar16 == 0) {
                  local_398[1] = 0;
                  piVar27 = local_398;
                  _Src_00.Data = (FScriptContainerElement *)pFVar20;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar16,0,&local_3a0,iVar16,local_398 + 1);
                  memcpy(local_3a0.Data,_Src,(longlong)iVar16 * 2);
                  piVar27 = local_398;
                  _Src_00.Data = local_3a0.Data;
                }
              }
              else {
                pFVar24 = (FMapProperty *)(ulonglong)((uint)pFVar24 | 2);
                ::FString::PrintfImpl(&local_268,L"[%d]");
                piVar27 = &local_268.Data.ArrayNum;
                _Src_00.Data = local_268.Data.AllocatorInstance.Data;
              }
              local_388 = *piVar27;
              lVar26 = (longlong)local_388;
              local_390.Data = (FScriptContainerElement *)0x0;
              if (local_388 == 0) {
                local_384 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_388,0,&local_390,local_388,&local_384);
                memcpy(local_390.Data,_Src_00.Data,lVar26 * 2);
              }
              if ((((ulonglong)pFVar24 & 2) != 0) &&
                 (pFVar24 = (FMapProperty *)(ulonglong)((uint)pFVar24 & 0xfffffffd),
                 (FMapProperty *)local_268.Data.AllocatorInstance.Data != (FMapProperty *)0x0)) {
                FMemory::Free(local_268.Data.AllocatorInstance.Data);
              }
              if ((((ulonglong)pFVar24 & 1) != 0) &&
                 (pFVar24 = (FMapProperty *)(ulonglong)((uint)pFVar24 & 0xfffffffe),
                 (FMapProperty *)local_3a0.Data != (FMapProperty *)0x0)) {
                FMemory::Free(local_3a0.Data);
              }
              pwVar1 = param_7->CurPos;
              pwVar2 = param_7->Base;
              if (param_7->End < pwVar1 + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_7,1);
              }
              *param_7->CurPos = L'.';
              param_7->CurPos = param_7->CurPos + 1;
              iVar16 = local_388 + -1;
              if (local_388 == 0) {
                iVar16 = iVar13;
              }
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_7,(wchar_t *)local_390.Data,iVar16);
              local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2e8.Data.ArrayNum = 0;
              local_2e8.Data.ArrayMax = 0;
              FProperty::ExportText_Direct
                        (param_1,&local_2e8,local_3a8,local_3a8,(UObject *)0x0,0,(UObject *)0x0);
              *param_5 = *param_5 + 1;
              local_3a8 = (void *)CONCAT44(local_3a8._4_4_,*param_5);
              uVar14 = (**(code **)(param_1->_padding_ + 0x68))(param_1,local_d8,0,0);
              local_308 = local_3f8;
              (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,uVar14,&local_2e8);
              if (local_d8[0] != (void *)0x0) {
                FMemory::Free(local_d8[0]);
              }
              if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
              }
              iVar15 = (int)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
              iVar11 = iVar15 - (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
              iVar16 = iVar13;
              if (0 < iVar11) {
                iVar16 = iVar11;
              }
              if ((iVar15 < iVar16) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount <= Len()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                      ,0xe8,L""), bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              param_7->CurPos = param_7->CurPos + -(longlong)iVar16;
              if (local_390.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_390.Data);
              }
              uVar19 = param_1->ArrayDim;
              pFVar29 = (FMapProperty *)(ulonglong)(iVar12 + 1U);
            } while (iVar12 + 1U != uVar19);
          }
        }
        else {
          *param_5 = *param_5 + 1;
          iVar12 = *param_5;
          pFVar28 = (FString *)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
          local_3c8 = pFVar28;
          TStringBuilderBase<wchar_t>::AppendChar<wchar_t,0>(param_7,L'.');
          bVar10 = IsThisNotNull(param_1,"FField::GetName");
          if (bVar10) {
            ::FName::ToString((FName *)&param_1->_padding_,&local_2b8);
          }
          else {
            ::FString::FString(&local_2b8,L"None");
          }
          iVar13 = local_2b8.Data.ArrayNum + -1;
          if (local_2b8.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    (param_7,(wchar_t *)local_2b8.Data.AllocatorInstance.Data,iVar13);
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_198,L"{...}");
          uVar14 = (**(code **)(param_1->_padding_ + 0x68))(param_1,local_108,0,0);
          local_328 = param_6;
          local_320[0] = iVar12;
          (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,uVar14,&local_198,local_320);
          if (local_108[0] != (void *)0x0) {
            FMemory::Free(local_108[0]);
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          if ((param_1->ArrayDim < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((param_2 == (void *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_300.Struct = (UStruct *)param_1[1]._padding_;
          iVar13 = param_1->Offset_Internal;
          if (local_300.Struct == (UStruct *)0x0) {
            local_300.Field = (FField *)0x0;
          }
          else {
            local_300.Field = (local_300.Struct)->ChildProperties;
          }
          local_300.InterfaceIndex = -1;
          local_300.bIncludeSuper = true;
          local_300.bIncludeDeprecated = true;
          local_300.bIncludeInterface = false;
          TFieldIterator<FProperty>::IterateToNext(&local_300);
          pFVar3 = (FProperty *)local_300.Field;
          while (local_300.Field = (FField *)pFVar3, pFVar3 != (FProperty *)0x0) {
            local_188._0_8_ = *(undefined8 *)param_4;
            local_188._8_8_ = *(undefined8 *)&param_4->field_0x8;
            bVar10 = IsThisNotNull(pFVar3,"FField::GetName");
            if (bVar10) {
              ::FName::ToString((FName *)&pFVar3->_padding_,&local_278);
            }
            else {
              ::FString::FString(&local_278,L"None");
            }
            IteratePropertiesRecursive
                      (pFVar3,(void *)((longlong)iVar13 + (longlong)param_2),&local_278,&local_188,
                       param_5,iVar12,param_7);
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
            }
            local_300.Field = (FField *)pFVar3->_padding_;
            TFieldIterator<FProperty>::IterateToNext(&local_300);
            pFVar28 = local_3c8;
            pFVar3 = (FProperty *)local_300.Field;
          }
          iVar16 = (int)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
          iVar13 = iVar16 - (int)pFVar28;
          iVar12 = 0;
          if (0 < iVar13) {
            iVar12 = iVar13;
          }
          if ((iVar16 < iVar12) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount <= Len()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                  ,0xe8,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          param_7->CurPos = param_7->CurPos + -(longlong)iVar12;
        }
      }
      else {
        if (((int)pFVar24->_padding_ < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((param_2 == (void *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_90._0_8_ = pFVar24->KeyProp;
        local_90._16_8_ = pFVar24->ValueProp;
        uStack_78._0_4_ = (pFVar24->MapLayout).ValueOffset;
        uStack_78._4_4_ = (pFVar24->MapLayout).SetLayout.HashNextIdOffset;
        local_70 = (pFVar24->MapLayout).SetLayout.HashIndexOffset;
        local_90._8_8_ = (longlong)*(int *)((longlong)&pFVar24->_padding_ + 4) + (longlong)param_2;
        if (((FProperty *)local_90._0_8_ == (FProperty *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementProp",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1653,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *param_5 = *param_5 + 1;
        iVar13 = *param_5;
        ::FString::PrintfImpl(&local_1a8,L"{Num = %d}");
        local_3c8 = (FString *)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
        if (param_7->End < param_7->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_7,1);
        }
        *param_7->CurPos = L'.';
        param_7->CurPos = param_7->CurPos + 1;
        bVar10 = IsThisNotNull(param_1,"FField::GetName");
        if (bVar10) {
          ::FName::ToString((FName *)&param_1->_padding_,&local_2c8);
        }
        else {
          ::FString::FString(&local_2c8,L"None");
        }
        iVar16 = local_2c8.Data.ArrayNum + -1;
        if (local_2c8.Data.ArrayNum == 0) {
          iVar16 = iVar12;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (param_7,(wchar_t *)local_2c8.Data.AllocatorInstance.Data,iVar16);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        uVar14 = (**(code **)(param_1->_padding_ + 0x68))(param_1,local_118,0,0);
        local_338 = param_6;
        local_330[0] = iVar13;
        (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,uVar14,&local_1a8,local_330);
        if (local_118[0] != (void *)0x0) {
          FMemory::Free(local_118[0]);
        }
        local_3b8.Container = (FScriptSetHelper *)local_90;
        local_3b8.InternalIndex = -1;
        local_3b8.LogicalIndex = -1;
        TScriptContainerIterator<FScriptSetHelper>::Advance(&local_3b8);
        while( true ) {
          pFVar8 = local_3b8.Container;
          uVar19 = local_3b8.InternalIndex;
          pTVar4 = (local_3b8.Container)->Set;
          if ((local_3b8.InternalIndex < 0) ||
             ((pTVar4->Elements).AllocationFlags.NumBits <= local_3b8.InternalIndex)) break;
          if (((pTVar4->Elements).AllocationFlags.NumBits <= local_3b8.InternalIndex) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (pTVar4->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<unsigned_int>)&(pTVar4->Elements).AllocationFlags;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = FVar5;
          }
          uVar21 = uVar19;
          if ((int)uVar19 < 0) {
            uVar21 = uVar19 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar19 & 0x1f) & 1
              ) == 0) break;
          iVar12 = local_3b8.InternalIndex;
          pTVar4 = pFVar8->Set;
          if (((int)uVar19 < 0) || ((pTVar4->Elements).AllocationFlags.NumBits <= (int)uVar19)) {
LAB_1480b4ef5:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Iterator",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x16bb,
                                L"Invalid Iterator. Test Iterator before calling this method.");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if (((pTVar4->Elements).AllocationFlags.NumBits <= (int)uVar19) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(Index)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x8c4,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar5 = (pTVar4->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
            FVar23 = (ForElementType<unsigned_int>)&(pTVar4->Elements).AllocationFlags;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = FVar5;
            }
            uVar21 = uVar19 & 0x1f;
            if ((int)uVar19 < 0) {
              uVar19 = uVar19 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar19 >> 5) * 4) >> uVar21 & 1) == 0)
            goto LAB_1480b4ef5;
          }
          iVar12 = local_70 * iVar12;
          lVar26 = *(longlong *)local_90._8_8_;
          ::FString::PrintfImpl(&local_1b8,L"[%d]");
          local_1c8._0_8_ = *(undefined8 *)param_4;
          local_1c8._8_8_ = *(undefined8 *)&param_4->field_0x8;
          IteratePropertiesRecursive
                    (pFVar24->KeyProp,(void *)(iVar12 + lVar26),&local_1b8,&local_1c8,param_5,iVar13
                     ,param_7);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          TScriptContainerIterator<FScriptSetHelper>::Advance(&local_3b8);
        }
        iVar16 = (int)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
        iVar13 = iVar16 - (int)local_3c8;
        iVar12 = 0;
        if (0 < iVar13) {
          iVar12 = iVar13;
        }
        if ((iVar16 < iVar12) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount <= Len()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                ,0xe8,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        param_7->CurPos = param_7->CurPos + -(longlong)iVar12;
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (((int)pFVar24->_padding_ < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((param_2 == (void *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FScriptMapHelper::FScriptMapHelper
                (&local_c8,pFVar24,
                 (void *)((longlong)*(int *)((longlong)&pFVar24->_padding_ + 4) + (longlong)param_2)
                );
      *param_5 = *param_5 + 1;
      iVar16 = *param_5;
      ::FString::PrintfImpl(&local_1d8,L"{Num = %d}");
      local_3c8 = (FString *)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
      if (param_7->End < param_7->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_7,1);
      }
      *param_7->CurPos = L'.';
      param_7->CurPos = param_7->CurPos + 1;
      bVar10 = IsThisNotNull(param_1,"FField::GetName");
      if (bVar10) {
        ::FName::ToString((FName *)&param_1->_padding_,&local_2d8);
      }
      else {
        ::FString::FString(&local_2d8,L"None");
      }
      iVar11 = local_2d8.Data.ArrayNum + -1;
      if (local_2d8.Data.ArrayNum == 0) {
        iVar11 = iVar12;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (param_7,(wchar_t *)local_2d8.Data.AllocatorInstance.Data,iVar11);
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      uVar14 = (**(code **)(param_1->_padding_ + 0x68))(param_1,local_148,0,0);
      local_370 = param_6;
      local_368[0] = iVar16;
      (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,uVar14,&local_1d8,local_368);
      if (local_148[0] != (void *)0x0) {
        FMemory::Free(local_148[0]);
      }
      iVar12 = ((local_c8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      if (0 < iVar12) {
        do {
          local_360[0] = (int)pFVar20;
          bVar10 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_c8,(<lambda_1> *)local_360);
          if (bVar10) break;
          uVar19 = (int)pFVar20 + 1;
          pFVar20 = (FMapProperty *)(ulonglong)uVar19;
        } while ((int)uVar19 < iVar12);
      }
      local_3d0[0] = (uint)pFVar20;
      bVar10 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                         (&local_c8,(<lambda_1> *)local_3d0);
      if (bVar10) {
        do {
          *param_5 = *param_5 + 1;
          iVar12 = *param_5;
          ::FString::PrintfImpl(&local_288,L"[%d]");
          (**(code **)(pFVar24->ValueProp->_padding_ + 0x68))(pFVar24->ValueProp,local_128,0,0);
          (**(code **)(pFVar24->KeyProp->_padding_ + 0x68))(pFVar24->KeyProp,local_138,0,0);
          ::FString::PrintfImpl(&local_1e8,L"{%s, %s}");
          if (local_138[0] != (void *)0x0) {
            FMemory::Free(local_138[0]);
          }
          if (local_128[0] != (void *)0x0) {
            FMemory::Free(local_128[0]);
          }
          pwVar1 = param_7->CurPos;
          pwVar2 = param_7->Base;
          if (param_7->End < pwVar1 + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_7,1);
          }
          *param_7->CurPos = L'.';
          param_7->CurPos = param_7->CurPos + 1;
          iVar11 = local_288.Data.ArrayNum + -1;
          if (local_288.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    (param_7,(wchar_t *)local_288.Data.AllocatorInstance.Data,iVar11);
          ::FString::FString(&local_218,L"{...}");
          local_358 = iVar16;
          local_350[0] = iVar12;
          (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_1e8,&local_218,local_350);
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          FVar9 = local_c8.field2_0x10;
          uVar19 = (uint)pFVar20;
          if ((local_c8.MapFlags & UsesMemoryImageAllocator) == None) {
            local_344 = uVar19;
            bVar10 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_c8,(<lambda_1> *)&local_344);
            if ((!bVar10) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Iterator",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1303,
                                    L"Invalid Iterator. Test Iterator before calling this method."),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pvVar22 = (void *)((longlong)
                               (int)(local_c8.MapLayout.SetLayout.SparseArrayLayout.Size * uVar19) +
                              ((FVar9.FreezableMap)->Pairs).Elements.Data._padding_);
          }
          else {
            local_348 = uVar19;
            bVar10 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_c8,(<lambda_1> *)&local_348);
            if ((!bVar10) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Iterator",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x1303,
                                    L"Invalid Iterator. Test Iterator before calling this method."),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar18 = (undefined1 *)((FVar9.FreezableMap)->Pairs).Elements.Data._padding_;
            if (((ulonglong)puVar18 & 1) != 0) {
              puVar18 = &(FVar9.HeapMap)->field_0x0 + ((longlong)puVar18 >> 0x18);
            }
            pvVar22 = puVar18 + (int)(local_c8.MapLayout.SetLayout.SparseArrayLayout.Size * uVar19);
          }
          local_208._0_8_ = *(undefined8 *)param_4;
          local_208._8_8_ = *(undefined8 *)&param_4->field_0x8;
          pFVar3 = pFVar24->KeyProp;
          bVar10 = IsThisNotNull(pFVar3,"FField::GetName");
          if (bVar10) {
            ::FName::ToString((FName *)&pFVar3->_padding_,&local_258);
          }
          else {
            ::FString::FString(&local_258,L"None");
          }
          IteratePropertiesRecursive
                    (pFVar24->KeyProp,pvVar22,&local_258,&local_208,param_5,iVar12,param_7);
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          pFVar3 = pFVar24->ValueProp;
          local_1f8._0_8_ = *(undefined8 *)param_4;
          local_1f8._8_8_ = *(undefined8 *)&param_4->field_0x8;
          bVar10 = IsThisNotNull(pFVar3,"FField::GetName");
          if (bVar10) {
            ::FName::ToString((FName *)&pFVar3->_padding_,&local_298);
          }
          else {
            ::FString::FString(&local_298,L"None");
          }
          IteratePropertiesRecursive
                    (pFVar24->ValueProp,pvVar22,&local_298,&local_1f8,param_5,iVar12,param_7);
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          iVar15 = (int)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
          iVar11 = iVar15 - (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
          iVar12 = iVar13;
          if (0 < iVar11) {
            iVar12 = iVar11;
          }
          if ((iVar15 < iVar12) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount <= Len()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                                  ,0xe8,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          param_7->CurPos = param_7->CurPos + -(longlong)iVar12;
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          iVar12 = ((local_c8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
          do {
            uVar19 = uVar19 + 1;
            pFVar20 = (FMapProperty *)(ulonglong)uVar19;
            if (iVar12 <= (int)uVar19) break;
            local_340[0] = uVar19;
            bVar10 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_c8,(<lambda_1> *)local_340);
          } while (!bVar10);
          local_3d0[0] = uVar19;
          bVar10 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_c8,(<lambda_1> *)local_3d0);
        } while (bVar10);
      }
      iVar16 = (int)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
      iVar12 = iVar16 - (int)local_3c8;
      if (0 < iVar12) {
        iVar13 = iVar12;
      }
      if ((iVar16 < iVar13) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount <= Len()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                              ,0xe8,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      param_7->CurPos = param_7->CurPos + -(longlong)iVar13;
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((param_1->ArrayDim < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar7 = param_1[1]._padding_;
    puVar25 = (ulonglong *)((longlong)param_1->Offset_Internal + (longlong)param_2);
    (**(code **)(*(longlong *)param_1[1]._padding_ + 0x168))();
    lVar26 = param_1[1]._padding_;
    iVar13 = *(int *)(lVar26 + 0x34);
    if ((iVar13 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((lVar26 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *param_5 = *param_5 + 1;
    iVar16 = *param_5;
    ::FString::PrintfImpl(&local_228,L"{Num = %d}");
    pwVar1 = param_7->CurPos;
    pwVar2 = param_7->Base;
    if (param_7->End < pwVar1 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_7,1);
    }
    *param_7->CurPos = L'.';
    param_7->CurPos = param_7->CurPos + 1;
    bVar10 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar10) {
      ::FName::ToString((FName *)&param_1->_padding_,&local_2a8);
    }
    else {
      ::FString::FString(&local_2a8,L"None");
    }
    iVar11 = local_2a8.Data.ArrayNum + -1;
    if (local_2a8.Data.ArrayNum == 0) {
      iVar11 = iVar12;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_7,(wchar_t *)local_2a8.Data.AllocatorInstance.Data,iVar11);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    uVar14 = (**(code **)(param_1->_padding_ + 0x68))(param_1,local_158,0,0);
    local_380 = param_6;
    local_378[0] = iVar16;
    (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,uVar14,&local_228,local_378);
    pFVar24 = pFVar20;
    if (local_158[0] != (void *)0x0) {
      FMemory::Free(local_158[0]);
    }
    while( true ) {
      iVar12 = (int)pFVar24;
      if ((int)puVar25[1] <= iVar12) break;
      pFVar24 = pFVar20;
      if ((int)puVar25[1] != 0) {
        uVar17 = *puVar25;
        if (((lVar7 & 1) != 0) && ((uVar17 & 1) != 0)) {
          uVar17 = ((longlong)uVar17 >> 0x18) + (longlong)puVar25;
        }
        pFVar24 = (FMapProperty *)((longlong)iVar13 * (longlong)iVar12 + uVar17);
      }
      ::FString::PrintfImpl(&local_238,L"[%d]");
      local_248._0_8_ = *(undefined8 *)param_4;
      local_248._8_8_ = *(undefined8 *)&param_4->field_0x8;
      IteratePropertiesRecursive
                ((FProperty *)param_1[1]._padding_,pFVar24,&local_238,&local_248,param_5,iVar16,
                 param_7);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      pFVar24 = (FMapProperty *)(ulonglong)(iVar12 + 1);
    }
    iVar13 = (int)((longlong)param_7->CurPos - (longlong)param_7->Base >> 1);
    local_3d8 = (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
    local_3d8 = iVar13 - local_3d8;
    iVar12 = 0;
    if (0 < local_3d8) {
      iVar12 = local_3d8;
    }
    if ((iVar13 < iVar12) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount <= Len()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                            ,0xe8,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_7->CurPos = param_7->CurPos + -(longlong)iVar12;
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LexToString @ 1480b5750

wchar_t * __cdecl LexToString(ERPCDoSEscalateReason param_1)

{
  if (param_1 == CountLimit) {
    return L"CountLimit";
  }
  if (param_1 == TimeLimit) {
    return L"TimeLimit";
  }
  if (param_1 == AutoEscalate) {
    return L"AutoEscalate";
  }
  if (param_1 != Deescalate) {
    return L"Unknown";
  }
  return L"Deescalate";
}

// LexToString @ 1480b57a0

wchar_t * __cdecl LexToString(EReplayResult param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"::Invalid";
  switch(param_1) {
  case Success:
    pwVar1 = L"EReplayResult::Success";
    break;
  case ReplayNotFound:
    pwVar1 = L"EReplayResult::ReplayNotFound";
    break;
  case Corrupt:
    pwVar1 = L"EReplayResult::Corrupt";
    break;
  case UnsupportedCheckpoint:
    pwVar1 = L"EReplayResult::UnsupportedCheckpoint";
    break;
  case GameSpecific:
    pwVar1 = L"EReplayResult::GameSpecific";
    break;
  case InitConnect:
    pwVar1 = L"EReplayResult::InitConnect";
    break;
  case LoadMap:
    pwVar1 = L"EReplayResult::LoadMap";
    break;
  case Serialization:
    pwVar1 = L"EReplayResult::Serialization";
    break;
  case StreamerError:
    pwVar1 = L"EReplayResult::StreamerError";
    break;
  case ConnectionClosed:
    pwVar1 = L"EReplayResult::ConnectionClosed";
    break;
  case MissingArchive:
    pwVar1 = L"EReplayResult::MissingArchive";
    break;
  case Unknown:
    pwVar1 = L"EReplayResult::Unknown";
    break;
  default:
    goto switchD_1480b57c4_default;
  }
  do {
    pwVar1 = pwVar1 + 1;
  } while (*pwVar1 != L':');
switchD_1480b57c4_default:
  return pwVar1 + 2;
}

// ListNetGUIDExports @ 1480b5900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ListNetGUIDExports(void)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  int iVar5;
  UClass *pUVar6;
  longlong lVar7;
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  *this;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  FValueComparisonClass<_void___cdecl_ListNetGUIDExports(void)_::_2_::FCompareNetGUIDCount>
  local_res18;
  TObjectIterator<UPackageMapClient> local_a8;
  longlong local_88;
  undefined1 auStack_80 [16];
  uint uStack_70;
  int iStack_6c;
  longlong local_68;
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  *pTStack_60;
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  *local_58;
  undefined2 local_50;
  FString local_48;
  undefined1 local_38 [32];
  longlong local_18;
  TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
  *pTStack_10;
  
  local_a8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectArray.ArrayNum = 0;
  local_a8.ObjectArray.ArrayMax = 0;
  local_a8.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UPackageMapClient::StaticClass();
  GetObjectsOfClass(pUVar6,&local_a8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UPackageMapClient>::Advance(&local_a8);
    lVar7 = (longlong)local_a8.Index;
    if ((local_a8.Index < 0) || (local_a8.ObjectArray.ArrayNum <= local_a8.Index)) {
      if (local_a8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar8 = 0;
    if (local_a8.Index < local_a8.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_a8.Index >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    local_res18.Predicate.Predicate =
         (TDereferenceWrapper<int,_void___cdecl_ListNetGUIDExports(void)_::_2_::FCompareNetGUIDCount>
          )local_res8;
    this = (TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
            *)(*(longlong *)(local_a8.ObjectArray.AllocatorInstance.Data + lVar7 * 8) + 0xe0);
    TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::__l2::FCompareNetGUIDCount>_>
              (this,&local_res18);
    if (2 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
    TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_38,this);
    local_50 = 0;
    stack0xffffffffffffff88 = local_38._16_16_;
    local_88 = local_38._0_8_;
    auStack_80._0_8_ = local_38._8_8_;
    local_68 = local_18;
    pTStack_60 = pTStack_10;
    local_58 = this;
    if (local_38._28_4_ < *(int *)(local_38._16_8_ + 0x18)) {
      do {
        if (2 < (byte)LogNetPackageMap._0_1_) {
          FString::PrintfImpl(&local_48,L"%llu");
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        uStack_70 = uStack_70 & ~auStack_80._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_80);
      } while (iStack_6c < *(int *)(auStack_80._8_8_ + 0x18));
      if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
        uVar8 = *(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34;
        if (uVar8 < 4) {
          iVar5 = 1;
        }
        else {
          uVar1 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          local_res10 = (undefined4)lVar7;
          iVar5 = 1 << ((byte)lVar7 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_58->HashSize < iVar5)) || (iVar5 < local_58->HashSize)) {
          local_58->HashSize = iVar5;
          TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
          ::Rehash(local_58);
        }
      }
    }
    if (2 < (byte)LogNetPackageMap._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// NotifyHandshakeBegin @ 1480b98d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::NotifyHandshakeBegin(StatelessConnectHandlerComponent *this)

{
  SendInitialPacket(this,(EHandshakeVersion)UE::Net::CurrentHandshakeVersion);
  return;
}

// Outgoing @ 1480ba900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::Outgoing
          (StatelessConnectHandlerComponent *this,FBitWriter *param_1,FOutPacketTraits *param_2)

{
  EHandshakeVersion EVar1;
  long64 lVar2;
  code *pcVar3;
  bool bVar4;
  FBitWriter *pFVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  int iVar8;
  FBitWriter local_188;
  FBitWriter local_c8;
  
  iVar8 = (int)param_1->Num + (this->MagicHeader).NumBits;
  EVar1 = this->LastRemoteHandshakeVersion;
  FBitWriter::FBitWriter(&local_188,&this->OldPacket);
  iVar6 = iVar8 + 5;
  if (EVar1 < SessionClientId) {
    iVar6 = iVar8;
  }
  iVar6 = iVar6 + 1;
  if (local_188.Max < iVar6) {
    iVar8 = 0x2000;
    if (0x2000 < iVar6) {
      iVar8 = iVar6;
    }
    pFVar5 = FBitWriter::FBitWriter(&local_c8,(longlong)iVar8,true);
    FBitWriter::operator=(&local_188,pFVar5);
    FBitWriter::~FBitWriter(&local_c8);
  }
  else {
    FBitWriter::Reset(&local_188);
  }
  iVar6 = (this->MagicHeader).NumBits;
  if (0 < iVar6) {
    FVar7 = (this->MagicHeader).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&this->MagicHeader;
    }
    FBitWriter::SerializeBits(&local_188,(void *)FVar7,(longlong)iVar6);
  }
  if (NetCLVersion < this->LastRemoteHandshakeVersion) {
    FBitWriter::SerializeBits(&local_188,&this->CachedGlobalNetTravelCount,2);
    FBitWriter::SerializeBits(&local_188,&this->CachedClientID,3);
  }
  FBitWriter::WriteBit(&local_188,'\0');
  lVar2 = param_1->Num;
  if ((param_1->_padding_ & 0x200) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsError()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                       ,0x49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FBitWriter::SerializeBits(&local_188,(param_1->Buffer).AllocatorInstance.Data,lVar2);
  FBitWriter::operator=(&this->OldPacket,param_1);
  FBitWriter::operator=(param_1,&local_188);
  FBitWriter::~FBitWriter(&local_188);
  return;
}

// OutputInstanceInternal @ 1480bab60

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

void __cdecl
OutputInstanceInternal
          (UObject *param_1,ulong64 param_2,ulong64 param_3,UStruct *param_4,FString *param_5,
          FString *param_6,uchar param_7)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  int iVar3;
  longlong lVar4;
  ulong64 uVar5;
  longlong lVar6;
  UWorld *pUVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  int iVar11;
  LARGE_INTEGER LVar12;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  longlong local_50;
  LARGE_INTEGER *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  FObjectTrace::OutputType(param_4);
  if (-1 < ObjectChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FObjectObjectFields>((TLogScope<1> *)&local_58.s);
    LVar12 = local_58;
    *(ulong64 *)local_58 = param_2;
    uVar5 = FObjectTrace::GetObjectId((UObject *)param_4);
    *(ulong64 *)(LVar12.QuadPart + 8) = uVar5;
    pwVar10 = L"";
    *(ulong64 *)(LVar12.QuadPart + 0x10) = param_3;
    iVar3 = (param_5->Data).ArrayNum;
    iVar11 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar11 = 0;
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
    }
    if (iVar11 < 0) {
      iVar11 = 0;
      wVar2 = *pwVar9;
      pFVar1 = (FScriptContainerElement *)pwVar9;
      while (wVar2 != L'\0') {
        pFVar1 = pFVar1 + 2;
        iVar11 = iVar11 + 1;
        wVar2 = *(wchar_t *)pFVar1;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(3,pwVar9,iVar11);
    iVar3 = (param_6->Data).ArrayNum;
    iVar11 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar11 = 0;
    }
    else {
      pwVar10 = (wchar_t *)(param_6->Data).AllocatorInstance.Data;
    }
    if (iVar11 < 0) {
      iVar11 = 0;
      wVar2 = *pwVar10;
      pFVar1 = (FScriptContainerElement *)pwVar10;
      while (wVar2 != L'\0') {
        pFVar1 = pFVar1 + 2;
        iVar11 = iVar11 + 1;
        wVar2 = *(wchar_t *)pFVar1;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(4,pwVar10,iVar11);
    uVar8 = (ulonglong)_tls_index;
    *(uchar *)(LVar12.QuadPart + 0x18) = param_7;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
    **(undefined1 **)(lVar4 + 0x20) = 6;
    lVar6 = *(longlong *)(lVar4 + 0x20) + 1;
    *(longlong *)(lVar4 + 0x20) = lVar6;
    if (lVar4 != local_50) {
      *(longlong *)(lVar4 + 0x28) = lVar6;
    }
    *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
  }
  if (-1 < ObjectChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FObjectObjectLifetimeBegin2Fields>
              ((TLogScope<0> *)&local_48);
    QueryPerformanceCounter(&local_58);
    local_48->QuadPart = (LONGLONG)local_58;
    pUVar7 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    LVar12 = (LARGE_INTEGER)FObjectTrace::GetWorldElapsedTime(pUVar7);
    local_48[1] = LVar12;
    local_48[2].QuadPart = param_2;
    *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
  }
  return;
}

// ParseHandshakePacket @ 1480bba80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

bool __thiscall
StatelessConnectHandlerComponent::ParseHandshakePacket
          (StatelessConnectHandlerComponent *this,FBitReader *param_1,FParsedHandshakeData *param_2)

{
  EEngineNetworkRuntimeFeatures *pEVar1;
  double *pdVar2;
  longlong *plVar3;
  uchar *puVar4;
  EEngineNetworkRuntimeFeatures *pEVar5;
  double *pdVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uchar uVar11;
  int iVar12;
  EHandshakeVersion local_res10 [16];
  EHandshakeVersion local_res20 [8];
  EHandshakePacketType local_48 [16];
  
  iVar12 = (int)param_1->Num - (int)param_1->Pos;
  if ((UE::Net::MinSupportedHandshakeVersion == 0) &&
     (((iVar12 == 0xe2 || (iVar12 == 1)) || (iVar12 == 0x182)))) {
    bVar10 = ParseHandshakePacketOriginal(this,param_1,param_2);
    return bVar10;
  }
  if ((iVar12 + -0x102 < 0x40) || (0x80 < iVar12 + -0x132)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((iVar12 + -0x21 < 0x40) || (0x80 < iVar12 + -0x51)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((iVar12 + -0x1a2 < 0x40) || (0x80 < iVar12 + -0x1d2)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  uVar11 = FBitReader::ReadBit(param_1);
  local_res10[0] = Original;
  local_res20[0] = Original;
  local_48[0] = InitialPacket;
  param_2->bRestartHandshake = uVar11 != '\0';
  plVar3 = (longlong *)param_1->_padding_;
  if ((EHandshakeVersion *)plVar3[1] < (EHandshakeVersion *)*plVar3 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = *(EHandshakeVersion *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  plVar3 = (longlong *)param_1->_padding_;
  if ((EHandshakeVersion *)plVar3[1] < (EHandshakeVersion *)*plVar3 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,1);
  }
  else {
    local_res20[0] = *(EHandshakeVersion *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  plVar3 = (longlong *)param_1->_padding_;
  if ((EHandshakePacketType *)plVar3[1] < (EHandshakePacketType *)*plVar3 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_48,1);
  }
  else {
    local_48[0] = *(EHandshakePacketType *)*plVar3;
    *plVar3 = *plVar3 + 1;
  }
  puVar4 = *(uchar **)param_1->_padding_;
  if ((uchar *)((undefined8 *)param_1->_padding_)[1] < puVar4 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,&param_2->RemoteSentHandshakePacketCount,1);
  }
  else {
    param_2->RemoteSentHandshakePacketCount = *puVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 1;
  }
  param_2->RemoteMinVersion = local_res10[0];
  param_2->RemoteCurVersion = local_res20[0];
  param_2->HandshakePacketType = local_48[0];
  if (Randomized < local_res20[0]) {
    ::operator<<((FArchive *)param_1,&param_2->RemoteNetworkVersion);
    pEVar1 = &param_2->RemoteNetworkFeatures;
    pEVar5 = *(EEngineNetworkRuntimeFeatures **)param_1->_padding_;
    if ((EEngineNetworkRuntimeFeatures *)((undefined8 *)param_1->_padding_)[1] < pEVar5 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,pEVar1,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,pEVar1);
      }
    }
    else {
      *pEVar1 = *pEVar5;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 2;
    }
  }
  if ((bVar10) &&
     ((param_2->HandshakePacketType == InitialPacket ||
      ((byte)(param_2->HandshakePacketType - Challenge) < 3)))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if ((bVar7) && (param_2->HandshakePacketType == RestartHandshake)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((bVar8) && (param_2->HandshakePacketType == RestartResponse)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((iVar12 - 0x91U < 0x41) && (param_2->HandshakePacketType == Last)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((bVar10) || (bVar8)) {
    uVar11 = FBitReader::ReadBit(param_1);
    param_2->SecretId = uVar11;
    pdVar2 = &param_2->Timestamp;
    pdVar6 = *(double **)param_1->_padding_;
    if ((double *)((longlong *)param_1->_padding_)[1] < pdVar6 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,pdVar2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ulong64 *)pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar6;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 8;
    }
    (**(code **)(param_1->_padding_ + 0x188))(param_1,param_2->Cookie,0x14);
    if (bVar8) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,param_2->OrigCookie,0x14);
    }
    bVar10 = (bool)(~(*(byte *)((longlong)&param_1->_padding_ + 1) >> 1) & 1);
    if (bVar10 == false) {
      return false;
    }
  }
  else {
    if (bVar7) {
      if ((param_1->_padding_ & 0x200) != 0) {
        return false;
      }
      if (param_2->bRestartHandshake == false) {
        return false;
      }
    }
    else {
      if (!bVar9) {
        return false;
      }
      if ((param_1->_padding_ & 0x200) != 0) {
        return false;
      }
      if (param_2->bRestartHandshake != false) {
        return false;
      }
    }
    if (**(char **)&this->field_0x8 != '\0') {
      return false;
    }
    bVar10 = true;
  }
  param_1->Pos = param_1->Num;
  return bVar10;
}

// ParseHandshakePacketOriginal @ 1480bbe20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

bool __thiscall
StatelessConnectHandlerComponent::ParseHandshakePacketOriginal
          (StatelessConnectHandlerComponent *this,FBitReader *param_1,FParsedHandshakeData *param_2)

{
  double *pdVar1;
  uchar uVar2;
  EHandshakePacketType EVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = (int)param_1->Num - (int)param_1->Pos;
  param_2->RemoteMinVersion = Original;
  param_2->RemoteCurVersion = Original;
  if ((iVar5 == 0xe2) || (iVar5 == 0x182)) {
    uVar2 = FBitReader::ReadBit(param_1);
    param_2->bRestartHandshake = uVar2 != '\0';
    uVar2 = FBitReader::ReadBit(param_1);
    param_2->SecretId = uVar2;
    pdVar1 = *(double **)param_1->_padding_;
    if ((double *)((longlong *)param_1->_padding_)[1] < pdVar1 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&param_2->Timestamp,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(ulong64 *)&param_2->Timestamp);
      }
    }
    else {
      param_2->Timestamp = *pdVar1;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 8;
    }
    (**(code **)(param_1->_padding_ + 0x188))(param_1,param_2->Cookie,0x14);
    if (iVar5 == 0x182) {
      param_2->HandshakePacketType = RestartResponse;
      (**(code **)(param_1->_padding_ + 0x188))(param_1,param_2->OrigCookie,0x14);
    }
    else {
      if (param_2->Timestamp <= 0.0) {
        EVar3 = InitialPacket;
        if (param_2->Timestamp < 0.0) {
          EVar3 = Ack;
        }
      }
      else {
        EVar3 = (**(char **)&this->field_0x8 != '\0') + Challenge;
      }
      param_2->HandshakePacketType = EVar3;
    }
    bVar4 = (bool)(~(*(byte *)((longlong)&param_1->_padding_ + 1) >> 1) & 1);
  }
  else {
    if (iVar5 == 1) {
      param_2->HandshakePacketType = RestartHandshake;
      uVar2 = FBitReader::ReadBit(param_1);
      param_2->bRestartHandshake = uVar2 != '\0';
      if ((((param_1->_padding_ & 0x200) == 0) && (uVar2 != '\0')) &&
         (**(char **)&this->field_0x8 == '\0')) {
        return true;
      }
    }
    bVar4 = false;
  }
  return bVar4;
}

// SanityCheckExport @ 1480cd3a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
SanityCheckExport(FNetGUIDCache *param_1,UObject *param_2,FNetworkGUID *param_3,FString *param_4,
                 UObject *param_5,FNetworkGUID *param_6,FExportFlags *param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNetGuidCacheObject *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  ForAnyElementType FVar7;
  FName local_res8;
  FName local_res10;
  FNetworkGUID *local_res18;
  FName local_res20;
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
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res18 = param_3;
  if ((param_1 == (FNetGUIDCache *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GuidCache != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x419,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == (UObject *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Object != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x41a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
           ::Find((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                   *)&param_1->ObjectLookup,param_3);
  if (pFVar4 == (FNetGuidCacheObject *)0x0) {
    if ((byte)LogNetPackageMap._0_1_ < 3) goto LAB_1480cd585;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_88,(UObject *)0x0);
    FString::PrintfImpl(&local_128,L"%llu");
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (((pFVar4->OuterGUID).field0_0x0.ObjectId == (param_6->field0_0x0).ObjectId) ||
       ((byte)LogNetPackageMap._0_1_ < 3)) goto LAB_1480cd585;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_98,(UObject *)0x0);
    FString::PrintfImpl(&local_138,L"%llu");
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    local_88.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
      local_88.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_1480cd585:
  local_res8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
  local_res8.Number = *(uint *)&param_2->field_0x1c;
  FName::ToString(&local_res8,&local_118);
  iVar3 = (param_4->Data).ArrayNum;
  if (local_118.Data.ArrayNum == iVar3) {
    if (local_118.Data.ArrayNum < 2) {
      bVar2 = false;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_118.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_4->Data).AllocatorInstance.Data);
      bVar2 = iVar3 != 0;
    }
  }
  else {
    bVar2 = local_118.Data.ArrayNum + iVar3 != 1;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (2 < (byte)LogNetPackageMap._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_78,(UObject *)0x0);
    FString::PrintfImpl(&local_108,L"%llu");
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pUVar6 = *(UObject **)&param_2->field_0x20;
  if (pUVar6 != param_5) {
    if (pUVar6 == (UObject *)0x0) {
      FVar7.Data = (FScriptContainerElement *)&u_NULL;
      pUVar6 = (UObject *)0x0;
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      pUVar6 = (UObject *)&DAT_00000001;
      FName::ToString(&local_res10,&local_f8);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar7.Data = local_f8.Data.AllocatorInstance.Data;
      }
    }
    FString::FString(&local_b8,(wchar_t *)FVar7.Data);
    if ((pUVar6 != (UObject *)0x0) &&
       (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
    if (param_5 == (UObject *)0x0) {
      FVar7.Data = (FScriptContainerElement *)&u_NULL;
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
      local_res20.Number = *(uint *)&param_5->field_0x1c;
      bVar2 = true;
      FName::ToString(&local_res20,&local_e8);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar7.Data = local_e8.Data.AllocatorInstance.Data;
      }
    }
    FString::FString(&local_c8,(wchar_t *)FVar7.Data);
    if ((bVar2) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogNetPackageMap._0_1_) {
      FString::PrintfImpl(&local_d8,L"%llu");
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_68,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (((*(byte *)&local_res18->field0_0x0 & 1) == 0) ||
     (bVar2 = true, *(longlong *)&param_2->field_0x20 != 0)) {
    bVar2 = false;
  }
  pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
  iVar3 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar3) ||
     (pUVar6 = param_2,
     (longlong *)
     *(undefined1 **)(*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar3 * 8)
     != &pUVar5->_padding_)) {
    pUVar6 = (UObject *)0x0;
  }
  if ((bVar2 != (pUVar6 != (UObject *)0x0)) && (2 < (byte)LogNetPackageMap._0_1_)) {
    FString::PrintfImpl(&local_a8,L"%llu");
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_58,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SendChallengeAck @ 1480cdb30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SendChallengeAck
          (StatelessConnectHandlerComponent *this,FCommonSendToClientParams *param_1,uchar param_2,
          uchar *param_3)

{
  int iVar1;
  ulong64 local_res8;
  FCommonSendToClientParams local_d8;
  FBitWriter local_c8;
  
  if (this->Driver != (UNetDriver *)0x0) {
    iVar1 = 0x1b9;
    if (param_1->HandshakeVersion < SessionClientId) {
      iVar1 = 0x1b4;
    }
    FBitWriter::FBitWriter(&local_c8,(longlong)(iVar1 + (this->MagicHeader).NumBits),false);
    BeginHandshakePacket
              (this,&local_c8,Ack,param_1->HandshakeVersion,param_2,param_1->ClientID,None);
    local_res8 = __real_bff0000000000000;
    FBitWriter::WriteBit(&local_c8,'\x01');
    if (*(ulong64 **)(local_c8._padding_ + 8) < *(ulong64 **)local_c8._padding_ + 1) {
      if ((local_c8._padding_._2_1_ & 1) == 0) {
        (**(code **)(local_c8._padding_ + 0x188))(&local_c8,&local_res8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,&local_res8);
      }
    }
    else {
      local_res8 = **(ulong64 **)local_c8._padding_;
      *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 8;
    }
    FBitWriter::Serialize(&local_c8,param_3,0x14);
    if (4 < (byte)LogHandshake._0_1_) {
      ::FString::FromBlob((FString *)&local_d8,param_3,0x14);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
      if (local_d8.ClientAddress != (TSharedPtr<FInternetAddr_const_,1> *)0x0) {
        FMemory::Free(local_d8.ClientAddress);
      }
    }
    local_d8.ClientAddress = param_1->ClientAddress;
    local_d8.HandshakeVersion = param_1->HandshakeVersion;
    local_d8._9_3_ = *(undefined3 *)&param_1->field_0x9;
    local_d8.ClientID = param_1->ClientID;
    SendToClient(this,&local_d8,Ack,&local_c8);
    FBitWriter::~FBitWriter(&local_c8);
  }
  return;
}

// SendChallengeResponse @ 1480cdcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SendChallengeResponse
          (StatelessConnectHandlerComponent *this,EHandshakeVersion param_1,uchar param_2,
          double param_3,uchar *param_4)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  EHandshakePacketType EVar4;
  bool bVar5;
  double local_res20;
  FString local_e8;
  FBitWriter local_d8;
  
  local_res20 = param_3;
  if ((this->Driver != (UNetDriver *)0x0) &&
     ((this->Driver->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)) {
    iVar3 = 0x133;
    if (this->bRestartedHandshake != false) {
      iVar3 = 0x1d3;
    }
    if ((NetCLVersion < param_1) && (iVar3 = 0x138, this->bRestartedHandshake != false)) {
      iVar3 = 0x1d8;
    }
    FBitWriter::FBitWriter(&local_d8,(longlong)(iVar3 + (this->MagicHeader).NumBits + 0x81),false);
    bVar5 = this->bRestartedHandshake != false;
    EVar4 = Response;
    if (bVar5) {
      EVar4 = RestartResponse;
    }
    BeginHandshakePacket
              (this,&local_d8,EVar4,param_1,this->SentHandshakePacketCount,this->CachedClientID,
               bVar5);
    FBitWriter::WriteBit(&local_d8,param_2);
    if (*(double **)(local_d8._padding_ + 8) < *(double **)local_d8._padding_ + 1) {
      if ((local_d8._padding_._2_1_ & 1) == 0) {
        (**(code **)(local_d8._padding_ + 0x188))(&local_d8,&local_res20,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(ulong64 *)&local_res20);
      }
    }
    else {
      local_res20 = **(double **)local_d8._padding_;
      *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 8;
    }
    FBitWriter::Serialize(&local_d8,param_4,0x14);
    if (this->bRestartedHandshake != false) {
      FBitWriter::Serialize(&local_d8,this->AuthorisedCookie,0x14);
    }
    if (4 < (byte)LogHandshake._0_1_) {
      ::FString::FromBlob(&local_e8,param_4,0x14);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    SendToServer(this,param_1,EVar4,&local_d8);
    this->LastTimestamp = local_res20;
    this->LastSecretId = param_2;
    this->LastServerSequence = (int)*(short *)param_4 & 0x3fff;
    sVar1 = *(short *)(param_4 + 2);
    this->LastRemoteHandshakeVersion = param_1;
    this->LastClientSequence = (int)sVar1 & 0x3fff;
    uVar2 = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)this->LastCookie = *(undefined8 *)param_4;
    *(undefined8 *)(this->LastCookie + 8) = uVar2;
    *(undefined4 *)(this->LastCookie + 0x10) = *(undefined4 *)(param_4 + 0x10);
    FBitWriter::~FBitWriter(&local_d8);
    return;
  }
  if (1 < (byte)LogHandshake._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
  }
  return;
}

// SendConnectChallenge @ 1480cdf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SendConnectChallenge
          (StatelessConnectHandlerComponent *this,FCommonSendToClientParams *param_1,uchar param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStackY_148 [32];
  double local_108 [2];
  FCommonSendToClientParams local_f8;
  FBitWriter local_e8;
  uchar local_28 [24];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (this->Driver != (UNetDriver *)0x0) {
    iVar2 = 0x1b9;
    if (param_1->HandshakeVersion < SessionClientId) {
      iVar2 = 0x1b4;
    }
    FBitWriter::FBitWriter(&local_e8,(longlong)(iVar2 + (this->MagicHeader).NumBits),false);
    BeginHandshakePacket
              (this,&local_e8,Challenge,param_1->HandshakeVersion,param_2,param_1->ClientID,None);
    local_108[0] = this->Driver->ElapsedTime;
    GenerateCookie(this,param_1->ClientAddress,this->ActiveSecret,local_108[0],
                   (uchar (*) [20])local_28);
    FBitWriter::WriteBit(&local_e8,this->ActiveSecret);
    if (*(double **)(local_e8._padding_ + 8) < *(double **)local_e8._padding_ + 1) {
      if ((local_e8._padding_._2_1_ & 1) == 0) {
        (**(code **)(local_e8._padding_ + 0x188))(&local_e8,local_108,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_e8,(ulong64 *)local_108);
      }
    }
    else {
      local_108[0] = **(double **)local_e8._padding_;
      *(longlong *)local_e8._padding_ = *(longlong *)local_e8._padding_ + 8;
    }
    FBitWriter::Serialize(&local_e8,local_28,0x14);
    lVar1 = *(longlong *)(*(longlong *)&this->field_0x8 + 8);
    if ((4 < (byte)LogHandshake._0_1_) &&
       ((lVar1 == 0 ||
        ((*(char *)(lVar1 + 0x69) == '\0' &&
         ((*(char *)(lVar1 + 0x40) == '\0' ||
          (*(int *)(lVar1 + 0x70) = *(int *)(lVar1 + 0x70) + 1,
          *(int *)(lVar1 + 0x70) <= *(int *)(lVar1 + 0x6c))))))))) {
      ::FString::FromBlob((FString *)&local_f8,local_28,0x14);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
      if (local_f8.ClientAddress != (TSharedPtr<FInternetAddr_const_,1> *)0x0) {
        FMemory::Free(local_f8.ClientAddress);
      }
    }
    local_f8.ClientAddress = param_1->ClientAddress;
    local_f8.HandshakeVersion = param_1->HandshakeVersion;
    local_f8._9_3_ = *(undefined3 *)&param_1->field_0x9;
    local_f8.ClientID = param_1->ClientID;
    SendToClient(this,&local_f8,Challenge,&local_e8);
    FBitWriter::~FBitWriter(&local_e8);
  }
  return;
}

// SendInitialPacket @ 1480ce170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SendInitialPacket
          (StatelessConnectHandlerComponent *this,EHandshakeVersion param_1)

{
  int iVar1;
  undefined1 auStackY_138 [32];
  FBitWriter local_f8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (**(char **)&this->field_0x8 == '\0') {
    if ((this->Driver == (UNetDriver *)0x0) ||
       ((this->Driver->ServerConnection).field0_0x0.DebugPtr == (UNetConnection *)0x0)) {
      if (1 < (byte)LogHandshake._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
      }
    }
    else {
      iVar1 = 0x1b9;
      if (param_1 < SessionClientId) {
        iVar1 = 0x1b4;
      }
      FBitWriter::FBitWriter(&local_f8,(longlong)(iVar1 + (this->MagicHeader).NumBits),false);
      BeginHandshakePacket
                (this,&local_f8,InitialPacket,param_1,this->SentHandshakePacketCount,
                 this->CachedClientID,this->bRestartedHandshake != false);
      FBitWriter::WriteBit(&local_f8,'\0');
      local_28 = 0;
      local_20 = 0;
      local_38 = 0;
      uStack_30 = 0;
      FBitWriter::Serialize(&local_f8,&local_38,0x1c);
      SendToServer(this,param_1,InitialPacket,&local_f8);
      FBitWriter::~FBitWriter(&local_f8);
    }
  }
  return;
}

// SendRestartHandshakeRequest @ 1480ce5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SendRestartHandshakeRequest
          (StatelessConnectHandlerComponent *this,FCommonSendToClientParams *param_1)

{
  longlong lVar1;
  int iVar2;
  FCommonSendToClientParams local_d8;
  FBitWriter local_c8;
  
  if (this->Driver != (UNetDriver *)0x0) {
    iVar2 = 0xd8;
    if (param_1->HandshakeVersion < SessionClientId) {
      iVar2 = 0xd3;
    }
    FBitWriter::FBitWriter(&local_c8,(longlong)(iVar2 + (this->MagicHeader).NumBits),false);
    BeginHandshakePacket
              (this,&local_c8,RestartHandshake,param_1->HandshakeVersion,
               this->SentHandshakePacketCount,param_1->ClientID,RestartHandshake);
    lVar1 = *(longlong *)(*(longlong *)&this->field_0x8 + 8);
    if ((5 < (byte)LogHandshake._0_1_) &&
       ((lVar1 == 0 ||
        ((*(char *)(lVar1 + 0x69) == '\0' &&
         ((*(char *)(lVar1 + 0x40) == '\0' ||
          (*(int *)(lVar1 + 0x70) = *(int *)(lVar1 + 0x70) + 1,
          *(int *)(lVar1 + 0x70) <= *(int *)(lVar1 + 0x6c))))))))) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
    }
    local_d8.ClientAddress = param_1->ClientAddress;
    local_d8.HandshakeVersion = param_1->HandshakeVersion;
    local_d8._9_3_ = *(undefined3 *)&param_1->field_0x9;
    local_d8.ClientID = param_1->ClientID;
    SendToClient(this,&local_d8,RestartHandshake,&local_c8);
    FBitWriter::~FBitWriter(&local_c8);
  }
  return;
}

// SendToClient @ 1480ce6a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SendToClient
          (StatelessConnectHandlerComponent *this,FCommonSendToClientParams *param_1,
          EHandshakePacketType param_2,FBitWriter *param_3)

{
  undefined1 *puVar1;
  PacketHandler *pPVar2;
  UNetDriver *pUVar3;
  code *pcVar4;
  long64 lVar5;
  char cVar6;
  uchar *puVar7;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined2 local_2c;
  FInternetAddr *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if (this->Driver != (UNetDriver *)0x0) {
    CapHandshakePacket(this,param_3,param_1->HandshakeVersion);
    pPVar2 = (this->Driver->ConnectionlessHandler).Ptr;
    if (pPVar2 != (PacketHandler *)0x0) {
      pPVar2->bRawSend = '\x01';
    }
    cVar6 = (**(code **)(this->Driver->_padding_ + 0x420))();
    if (cVar6 != '\0') {
      pUVar3 = this->Driver;
      local_38[0] = 1;
      local_34 = 0;
      local_2c = 0;
      lVar5 = param_3->Num;
      pcVar4 = *(code **)(pUVar3->_padding_ + 0x378);
      puVar7 = FBitWriter::GetData(param_3);
      local_28 = param_1->ClientAddress->Object;
      local_20 = (param_1->ClientAddress->SharedReferenceCount).ReferenceController;
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar4)(pUVar3,&local_28,puVar7,(int)lVar5,local_38);
    }
    if (pPVar2 != (PacketHandler *)0x0) {
      pPVar2->bRawSend = '\0';
    }
  }
  return;
}

// SendToServer @ 1480ce7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SendToServer
          (StatelessConnectHandlerComponent *this,EHandshakeVersion param_1,
          EHandshakePacketType param_2,FBitWriter *param_3)

{
  byte *pbVar1;
  UNetConnection *pUVar2;
  code *pcVar3;
  long64 lVar4;
  char cVar5;
  uchar *puVar6;
  LARGE_INTEGER local_res8;
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined2 local_1c;
  
  if ((this->Driver != (UNetDriver *)0x0) &&
     ((this->Driver->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)) {
    CapHandshakePacket(this,param_3,param_1);
    pbVar1 = (byte *)(*(longlong *)&this->field_0x8 + 2);
    *pbVar1 = *pbVar1 | 1;
    cVar5 = (**(code **)(this->Driver->_padding_ + 0x420))();
    if (cVar5 != '\0') {
      lVar4 = param_3->Num;
      local_24 = 0;
      local_1c = 0;
      local_28[0] = 1;
      pUVar2 = (this->Driver->ServerConnection).field0_0x0.DebugPtr;
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x2e8);
      puVar6 = FBitWriter::GetData(param_3);
      (*pcVar3)(pUVar2,puVar6,(int)lVar4,local_28);
    }
    pbVar1 = (byte *)(*(longlong *)&this->field_0x8 + 2);
    *pbVar1 = *pbVar1 & 0xfe;
    QueryPerformanceCounter(&local_res8);
    this->LastClientSendTimestamp =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  return;
}

// SendVersionUpgradeMessage @ 1480ce8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakePacketType": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SendVersionUpgradeMessage
          (StatelessConnectHandlerComponent *this,FCommonSendToClientParams *param_1)

{
  int iVar1;
  FCommonSendToClientParams local_d8;
  FBitWriter local_c8;
  
  if (this->Driver != (UNetDriver *)0x0) {
    iVar1 = 0xd8;
    if (param_1->HandshakeVersion < SessionClientId) {
      iVar1 = 0xd3;
    }
    FBitWriter::FBitWriter(&local_c8,(longlong)(iVar1 + (this->MagicHeader).NumBits),false);
    BeginHandshakePacket
              (this,&local_c8,Last,param_1->HandshakeVersion,this->SentHandshakePacketCount,
               param_1->ClientID,None);
    local_d8.ClientAddress = param_1->ClientAddress;
    local_d8.HandshakeVersion = param_1->HandshakeVersion;
    local_d8._9_3_ = *(undefined3 *)&param_1->field_0x9;
    local_d8.ClientID = param_1->ClientID;
    SendToClient(this,&local_d8,Last,&local_c8);
    FBitWriter::~FBitWriter(&local_c8);
  }
  return;
}

// SetDriver @ 1480d2d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SetDriver
          (StatelessConnectHandlerComponent *this,UNetDriver *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FInternetAddr *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  size_t sVar7;
  void *pvVar8;
  ulong64 uVar9;
  StatelessConnectHandlerComponent *pSVar10;
  uint uVar11;
  ForAnyElementType _Str;
  int iVar12;
  bool bVar13;
  double dVar14;
  undefined1 auStackY_2a8 [32];
  int local_278 [2];
  FName local_270;
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  this->Driver = param_1;
  if (**(char **)&this->field_0x8 == '\x01') {
    pTVar1 = (param_1->StatelessConnectComponent).WeakReferenceCount.ReferenceController;
    pSVar10 = (StatelessConnectHandlerComponent *)0x0;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar1->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_1480d2ea0;
        }
        LOCK();
        aVar6 = pTVar1->SharedReferenceCount;
        bVar13 = aVar5 == aVar6;
        if (bVar13) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar13);
      pSVar10 = (param_1->StatelessConnectComponent).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pSVar10 != (StatelessConnectHandlerComponent *)0x0) {
      if (pSVar10 == this) {
        UpdateSecret(this);
      }
      else {
        pTVar1 = (pSVar10->LastChallengeSuccessAddress).SharedReferenceCount.ReferenceController;
        pFVar2 = (pSVar10->LastChallengeSuccessAddress).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (this->LastChallengeSuccessAddress).SharedReferenceCount.ReferenceController;
        (this->LastChallengeSuccessAddress).Object = pFVar2;
        (this->LastChallengeSuccessAddress).SharedReferenceCount.ReferenceController = pTVar1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        this->LastRemoteHandshakeVersion = pSVar10->LastRemoteHandshakeVersion;
        this->CachedClientID = pSVar10->CachedClientID;
        uVar4 = *(undefined8 *)(pSVar10->AuthorisedCookie + 8);
        *(undefined8 *)this->AuthorisedCookie = *(undefined8 *)pSVar10->AuthorisedCookie;
        *(undefined8 *)(this->AuthorisedCookie + 8) = uVar4;
        *(undefined4 *)(this->AuthorisedCookie + 0x10) =
             *(undefined4 *)(pSVar10->AuthorisedCookie + 0x10);
        if (this->Driver == (UNetDriver *)0x0) {
          dVar14 = 0.0;
        }
        else {
          dVar14 = this->Driver->ElapsedTime;
        }
        this->LastInitTimestamp = dVar14;
      }
    }
LAB_1480d2ea0:
    this->CachedGlobalNetTravelCount = this->Driver->CachedGlobalNetTravelCount & 3;
    return;
  }
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.End = (wchar_t *)local_38;
  local_270 = param_1->NetDriverDefinition;
  ::FName::ToString(&local_270,&local_268);
  if (local_268.Data.ArrayNum == 0) {
    _Str.Data = (FScriptContainerElement *)L"";
  }
  else {
    iVar12 = 0;
    _Str.Data = local_268.Data.AllocatorInstance.Data;
    if (local_268.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1480d2f46;
  }
  sVar7 = wcslen((wchar_t *)_Str.Data);
  iVar12 = (int)sVar7;
LAB_1480d2f46:
  uVar9 = (ulong64)iVar12;
  if (local_258.End < local_258.CurPos + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar9);
  }
  if (iVar12 != 0) {
    pvVar8 = FGenericPlatformString::Memcpy(local_258.CurPos,_Str.Data,uVar9 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar8 + uVar9 * 2);
  }
  if (local_258.End < local_258.CurPos + 0x21) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,0x21);
  }
  pvVar8 = FGenericPlatformString::Memcpy
                     (local_258.CurPos,L" StatelessConnectHandlerComponent",0x42);
  local_278[0] = 0;
  local_258.CurPos = (wchar_t *)((longlong)pvVar8 + 0x42);
  if (local_258.End < (wchar_t *)((longlong)pvVar8 + 0x44)) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  FConfigCacheIni::GetInt(GConfig,local_258.Base,L"CachedClientID",local_278,&GEngineIni);
  iVar12 = 0;
  if (0 < local_278[0]) {
    iVar12 = local_278[0];
  }
  uVar11 = iVar12 + 1;
  this->CachedClientID = uVar11;
  if (0x7fffffff < uVar11) {
    this->CachedClientID = 0;
    uVar11 = 0;
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  FConfigCacheIni::SetInt(GConfig,local_258.Base,L"CachedClientID",uVar11,&GEngineIni);
  FConfigCacheIni::Flush(GConfig,false,&GEngineIni);
  this->CachedClientID = this->CachedClientID & 7;
  if (4 < (byte)LogHandshake._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return;
}

// SetHandshakeFailureCallback @ 1480d31e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::SetHandshakeFailureCallback
          (StatelessConnectHandlerComponent *this,
          TUniqueFunction<void___cdecl(UE::Net::FStatelessHandshakeFailureInfo)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->HandshakeFailureCallback;
  uVar3 = *(undefined8 *)&(this->HandshakeFailureCallback).field_0x8;
  uVar4 = *(undefined8 *)&(this->HandshakeFailureCallback).field_0x10;
  uVar5 = *(undefined8 *)&(this->HandshakeFailureCallback).field_0x18;
  uVar6 = *(undefined8 *)&(this->HandshakeFailureCallback).field_0x20;
  uVar7 = *(undefined8 *)&(this->HandshakeFailureCallback).field_0x28;
  *(undefined8 *)&this->HandshakeFailureCallback = *(undefined8 *)param_1;
  *(undefined8 *)&(this->HandshakeFailureCallback).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->HandshakeFailureCallback).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->HandshakeFailureCallback).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->HandshakeFailureCallback).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->HandshakeFailureCallback).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return;
}

// SplitAndAppendCustomExportsBunch @ 1480d4710

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

bool __cdecl
SplitAndAppendCustomExportsBunch
          (TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *param_1,FOutBunch **param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FOutBunch *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FOutBunch *pFVar8;
  ForElementType<FOutBunch_*> FVar9;
  longlong lVar10;
  ForElementType<UE::Net::FNetToken> _Dst;
  uint uVar11;
  FString *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForElementType<UE::Net::FNetToken> _Src;
  ulonglong uVar16;
  undefined1 auStackY_128 [32];
  FOutBunch *local_d8;
  FString local_d0;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  ForElementType<FOutBunch_*> *local_a0;
  ForElementType<FOutBunch_*> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar8 = *param_2;
  uVar14 = (longlong)param_3 & 0xfffffffffffffff8;
  local_98.SecondaryData = (ForElementType<FOutBunch_*>)0x0;
  local_50 = 0;
  local_4c = 8;
  local_a0 = (ForElementType<FOutBunch_*> *)param_1;
  if ((longlong)uVar14 < pFVar8->_padding_) {
    if (((pFVar8->_padding_ & 0x200) != 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("!IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                           ,0x49,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar13 = pFVar8->_padding_;
    uVar15 = (*param_2)->_padding_;
    while (0 < (longlong)uVar15) {
      if ((*param_2)->_padding_ == 0) {
        pFVar8 = operator_new(0x150);
        if (pFVar8 == (FOutBunch *)0x0) goto LAB_1480d482a;
        local_d8 = FOutBunch::FOutBunch(pFVar8,(*param_2)->Channel,false);
      }
      else {
        pFVar8 = operator_new(0x150);
        if (pFVar8 == (FOutBunch *)0x0) {
LAB_1480d482a:
          local_d8 = (FOutBunch *)0x0;
        }
        else {
          local_d8 = FOutBunch::FOutBunch(pFVar8,(UPackageMap *)(*param_2)->_padding_,uVar14);
        }
      }
      uVar16 = uVar14;
      if ((longlong)uVar15 < (longlong)uVar14) {
        uVar16 = uVar15;
      }
      (**(code **)(local_d8->_padding_ + 400))(local_d8,lVar13,uVar16);
      local_d8->bPartial = '\x01';
      local_d8->_padding_ = (*param_2)->_padding_;
      (*param_2)->_padding_ = 0;
      FVar9 = (ForElementType<FOutBunch_*>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FOutBunch_*>)0x0) {
        FVar9 = local_98.SecondaryData;
      }
      if ((ulonglong)FVar9 <= &local_d8) {
        FVar9 = (ForElementType<FOutBunch_*>)&local_98;
        if (local_98.SecondaryData != (ForElementType<FOutBunch_*>)0x0) {
          FVar9 = local_98.SecondaryData;
        }
        if ((&local_d8 < (FOutBunch **)((longlong)FVar9 + (longlong)local_4c * 8)) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FOutBunch_*>_>
                             (0x808,&local_98,&local_4c);
      }
      lVar10 = (longlong)local_50;
      FVar9 = (ForElementType<FOutBunch_*>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FOutBunch_*>)0x0) {
        FVar9 = local_98.SecondaryData;
      }
      local_50 = local_50 + 1;
      *(FOutBunch **)((longlong)FVar9 + lVar10 * 8) = local_d8;
      local_c0.Data = (FScriptContainerElement *)0x0;
      local_b8 = ((*param_2)->DebugString).Data.ArrayNum;
      lVar10 = (longlong)local_b8;
      pFVar2 = ((*param_2)->DebugString).Data.AllocatorInstance.Data;
      if (local_b8 == 0) {
        local_b4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b8,0,&local_c0,local_b8,&local_b4);
        memcpy(local_c0.Data,pFVar2,lVar10 * 2);
      }
      FString::PrintfImpl(&local_d0,L"Partial[%d]: %s");
      pFVar8 = local_d8;
      pFVar12 = &local_d8->DebugString;
      if (pFVar12 != &local_d0) {
        pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar12->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->DebugString).Data.ArrayNum = local_d0.Data.ArrayNum;
        (pFVar8->DebugString).Data.ArrayMax = local_d0.Data.ArrayMax;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      uVar15 = uVar15 - uVar16;
      lVar13 = lVar13 + ((longlong)uVar16 >> 3);
      if (5 < (byte)LogNetPackageMap._0_1_) {
        local_b0.Data = (FScriptContainerElement *)0x0;
        local_a8 = ((*param_2)->DebugString).Data.ArrayNum;
        lVar10 = (longlong)local_a8;
        pFVar2 = ((*param_2)->DebugString).Data.AllocatorInstance.Data;
        if (local_a8 == 0) {
          local_a4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_a8,0,&local_b0,local_a8,&local_a4);
          memcpy(local_b0.Data,pFVar2,lVar10 * 2);
        }
        UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogNetPackageMap);
        if (local_b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data);
        }
      }
      if (uVar15 == 0) break;
      uVar11 = (uint)((longlong)uVar16 >> 0x3f) & 7;
      if ((((int)uVar16 + uVar11 & 7) != uVar11) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8846227299280877432>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                             ,0x888,"BitsLeft == 0 || BitsThisBunch % 8 == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    uVar11 = 0;
    if ((int)(local_50 - 1U) < local_50) {
      uVar11 = ~(local_50 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FVar9 = (ForElementType<FOutBunch_*>)&local_98;
    if (local_98.SecondaryData != (ForElementType<FOutBunch_*>)0x0) {
      FVar9 = local_98.SecondaryData;
    }
    pFVar8 = *(FOutBunch **)((longlong)FVar9 + (longlong)(local_50 + -1) * 8);
    if (pFVar8 == (FOutBunch *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8846227299280877427>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PackageMapClient.cpp"
                         ,0x88d,"LastPartialBunch");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    else {
      pFVar8->field_0xfd = (pFVar8->field_0xfd ^ (*param_2)->field_0xfd) & 4 ^ pFVar8->field_0xfd;
      pFVar3 = *param_2;
      if (pFVar8 != pFVar3) {
        _Src = (pFVar3->NetTokensPendingExport).AllocatorInstance.SecondaryData;
        piVar1 = &(pFVar8->NetTokensPendingExport).ArrayMax;
        iVar7 = (pFVar3->NetTokensPendingExport).ArrayNum;
        if (_Src == (ForElementType<UE::Net::FNetToken>)0x0) {
          _Src = (ForElementType<UE::Net::FNetToken>)&pFVar3->NetTokensPendingExport;
        }
        (pFVar8->NetTokensPendingExport).ArrayNum = iVar7;
        if ((iVar7 == 0) && (*piVar1 == 0)) {
          *piVar1 = 4;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                    (4,4,iVar7,*piVar1,&(pFVar8->NetTokensPendingExport).AllocatorInstance,iVar7,
                     piVar1);
          _Dst = (pFVar8->NetTokensPendingExport).AllocatorInstance.SecondaryData;
          if (iVar7 != 0) {
            if (_Dst == (ForElementType<UE::Net::FNetToken>)0x0) {
              _Dst = (ForElementType<UE::Net::FNetToken>)&pFVar8->NetTokensPendingExport;
            }
            memcpy((void *)_Dst,(void *)_Src,(longlong)iVar7 << 2);
          }
        }
      }
    }
    pFVar8 = *param_2;
    if (pFVar8 != (FOutBunch *)0x0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    *param_2 = (FOutBunch *)0x0;
    param_1 = (TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *)local_a0;
  }
  else {
    iVar7 = 0;
    if ((&local_98 <= param_2) && (param_2 < &local_98.SecondaryData)) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = local_50;
      if (local_50 == local_4c) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FOutBunch_*>_>
                          (0x808,&local_98,&local_4c);
      }
    }
    local_50 = iVar7 + 1;
    FVar9 = (ForElementType<FOutBunch_*>)&local_98;
    if (local_98.SecondaryData != (ForElementType<FOutBunch_*>)0x0) {
      FVar9 = local_98.SecondaryData;
    }
    *(FOutBunch **)((longlong)FVar9 + (longlong)iVar7 * 8) = *param_2;
  }
  if (((ForElementType<FOutBunch_*> *)param_1 == &local_98) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar13 = (longlong)local_50;
  if (local_50 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_50,&param_1->AllocatorInstance,
                       (int *)((ForAnyElementType *)
                               ((ForElementType<FOutBunch_*> *)param_1)->InlineData + 1),
                       (int *)((longlong)
                               ((ForAnyElementType *)
                                ((ForElementType<FOutBunch_*> *)param_1)->InlineData + 1) + 4));
    FVar9 = (ForElementType<FOutBunch_*>)&local_98;
    if (local_98.SecondaryData != (ForElementType<FOutBunch_*>)0x0) {
      FVar9 = local_98.SecondaryData;
    }
    memcpy(((ForAnyElementType *)((ForElementType<FOutBunch_*> *)param_1)->InlineData)->Data +
           (longlong)iVar7 * 8,(void *)FVar9,lVar13 << 3);
  }
  bVar5 = 1 < local_50;
  if (local_98.SecondaryData != (ForElementType<FOutBunch_*>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  return bVar5;
}

// Tick @ 1480dbb40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::Tick(StatelessConnectHandlerComponent *this,float param_1)

{
  UNetDriver *pUVar1;
  StatelessConnectHandlerComponent *pSVar2;
  float fVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  EHandshakeVersion EVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  StatelessConnectHandlerComponent *pSVar10;
  longlong lVar11;
  StatelessConnectHandlerComponent *pSVar12;
  LARGE_INTEGER local_res8;
  
  if (**(char **)&this->field_0x8 == '\0') {
    if (((this->field_0x10 != '\x03') && (this->LastClientSendTimestamp != 0.0)) &&
       (QueryPerformanceCounter(&local_res8),
       (double)UE::Net::HandshakeResendInterval <
       ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000) - this->LastClientSendTimestamp)) {
      if ((this->Driver != (UNetDriver *)0x0) &&
         (__real_402e000000000000 < this->Driver->ElapsedTime - this->LastChallengeTimestamp)) {
        HandlerComponent::SetState((HandlerComponent *)this,UnInitialized);
      }
      if (this->field_0x10 == '\0') {
        if (5 < (byte)LogHandshake._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
        }
        pTVar4 = UE::Net::CVarNetDoHandshakeVersionFallback.Ref;
        EVar6 = (EHandshakeVersion)UE::Net::CurrentHandshakeVersion;
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
          lVar11 = 0;
        }
        else {
          lVar11 = 4;
        }
        if (*(int *)((longlong)pTVar4->ShadowedValue + lVar11) != 0) {
          uVar7 = rand();
          iVar8 = (int)((float)(uVar7 & 0x7fff) * __real_38800100);
          iVar9 = 1;
          if (iVar8 < 1) {
            iVar9 = iVar8;
          }
          if (iVar9 == 1) {
            iVar9 = UE::Net::CurrentHandshakeVersion - (uint)this->SentHandshakePacketCount;
            if (iVar9 < UE::Net::MinSupportedHandshakeVersion) {
              iVar9 = UE::Net::MinSupportedHandshakeVersion;
            }
            if (iVar9 != UE::Net::CurrentHandshakeVersion) {
              iVar9 = FMath::RandRange(iVar9,UE::Net::CurrentHandshakeVersion);
              EVar6 = (EHandshakeVersion)iVar9;
            }
          }
        }
        SendInitialPacket(this,EVar6);
        return;
      }
      if ((this->field_0x10 == '\x01') && (this->LastTimestamp != 0.0)) {
        if (5 < (byte)LogHandshake._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHandshake);
        }
        SendChallengeResponse
                  (this,this->LastRemoteHandshakeVersion,this->LastSecretId,this->LastTimestamp,
                   this->LastCookie);
        return;
      }
    }
  }
  else {
    pUVar1 = this->Driver;
    if (pUVar1 != (UNetDriver *)0x0) {
      pSVar2 = (StatelessConnectHandlerComponent *)
               (pUVar1->StatelessConnectComponent).WeakReferenceCount.ReferenceController;
      pSVar12 = (StatelessConnectHandlerComponent *)0x0;
      pSVar10 = pSVar2;
      if (pSVar2 != (StatelessConnectHandlerComponent *)0x0) {
        iVar9 = *(int *)&pSVar2->field_0x8;
        do {
          pSVar10 = pSVar12;
          if (iVar9 == 0) goto LAB_1480dbd75;
          LOCK();
          iVar8 = *(int *)&pSVar2->field_0x8;
          bVar5 = iVar9 == iVar8;
          if (bVar5) {
            *(int *)&pSVar2->field_0x8 = iVar9 + 1;
            iVar8 = iVar9;
          }
          UNLOCK();
          iVar9 = iVar8;
        } while (!bVar5);
        pSVar12 = (pUVar1->StatelessConnectComponent).Object;
        pSVar10 = pSVar2;
      }
LAB_1480dbd75:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar10);
      fVar3 = __real_39200140;
      if (pSVar12 == this) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          uVar7 = rand();
          CurVariance = (float)(uVar7 & 0x7fff) * fVar3;
          _Init_thread_footer(&::_TSS0);
        }
        if (0.0 < (this->Driver->ElapsedTime - this->LastSecretUpdateTimestamp) -
                  (double)(CurVariance + __real_41700000)) {
          uVar7 = rand();
          CurVariance = (float)(uVar7 & 0x7fff) * fVar3;
          UpdateSecret(this);
        }
      }
    }
  }
  return;
}

// TickObjectTraceWorldSubsystem @ 1480dbe80

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

void __cdecl TickObjectTraceWorldSubsystem(UWorld *param_1,ELevelTick param_2,float param_3)

{
  FChannel *pFVar1;
  bool bVar2;
  UObjectTraceWorldSubsystem *pUVar3;
  ulong64 uVar4;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulong64 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  if (param_2 == LEVELTICK_All) {
    local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
    bVar2 = UWorld::IsPaused(param_1);
    if ((!bVar2) &&
       (pUVar3 = UWorld::GetSubsystem<UObjectTraceWorldSubsystem>(param_1),
       pUVar3 != (UObjectTraceWorldSubsystem *)0x0)) {
      pUVar3->FrameIndex = pUVar3->FrameIndex + 1;
      pFVar1 = ObjectChannel;
      pUVar3->ElapsedTime = (double)param_3 + pUVar3->ElapsedTime;
      if (-1 < pFVar1->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FObjectRecordingInfoFields>((TLogScope<0> *)&local_30);
        uVar4 = FObjectTrace::GetObjectId((UObject *)param_1);
        *local_30 = uVar4;
        QueryPerformanceCounter(&local_38);
        *(LARGE_INTEGER *)(local_30 + 1) = local_38;
        local_30[3] = (ulong64)pUVar3->ElapsedTime;
        *(uint *)((longlong)local_30 + 0x14) = (uint)pUVar3->FrameIndex;
        *(uint *)(local_30 + 2) = (uint)pUVar3->RecordingIndex;
        *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
      }
    }
  }
  return;
}

// TraceObjects @ 1480dc830

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

void __cdecl ObjectPropertyTrace::TraceObjects(void)

{
  FWeakObjectPtr *pFVar1;
  FField *pFVar2;
  LARGE_INTEGER LVar3;
  bool bVar4;
  UObject *pUVar5;
  ulong64 uVar6;
  UWorld *pUVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ForAnyElementType this;
  bool bVar10;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [8];
  _struct_19 local_e0;
  uint local_d8;
  TFieldIterator<FProperty> local_d0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  FString local_a8;
  LARGE_INTEGER local_98;
  ulong64 local_90;
  code *local_88;
  LARGE_INTEGER *local_80;
  TStringBuilderBase<wchar_t> local_78;
  LARGE_INTEGER *local_58;
  longlong local_50;
  LARGE_INTEGER *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId246,"FObjectPropertyTrace::TraceObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectPropertyTrace.cpp"
               ,0xf6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId246);
  }
  uVar8 = (ulonglong)Objects.ArrayNum;
  local_d8 = Objects.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(Objects.AllocatorInstance.Data + uVar8 * 8);
  uVar9 = uVar8;
  this.Data = Objects.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != (int)uVar9) {
      `TCheckedPointerIterator<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_e8);
    }
    if ((FWeakObjectPtr *)this.Data == pFVar1) break;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
    if (pUVar5 != (UObject *)0x0) {
      QueryPerformanceCounter(&local_b8);
      uVar6 = FObjectTrace::GetObjectId(pUVar5);
      LVar3 = local_b8;
      if (-1 < ObjectProperties->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FObjectPropertiesStart2Fields>
                  ((TLogScope<0> *)&local_58);
        *local_58 = LVar3;
        local_58[1].QuadPart = uVar6;
        pUVar7 = (UWorld *)(**(code **)(*(longlong *)pUVar5 + 0x180))(pUVar5);
        local_e0 = (_struct_19)FObjectTrace::GetWorldElapsedTime(pUVar7);
        local_58[2].s = local_e0;
        *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
      }
      local_d0.Struct = *(UStruct **)&pUVar5->field_0x10;
      local_98 = LVar3;
      local_78.End = (wchar_t *)0x0;
      local_78.bIsDynamic = false;
      local_78.bIsExternal = false;
      local_e0.LowPart = 0xffffffff;
      local_78.Base = (wchar_t *)0x0;
      local_78.CurPos = (wchar_t *)0x0;
      if (local_d0.Struct == (UStruct *)0x0) {
        local_d0.Field = (FField *)0x0;
      }
      else {
        local_d0.Field = (local_d0.Struct)->ChildProperties;
      }
      local_d0.bIncludeInterface = false;
      local_d0.InterfaceIndex = -1;
      local_d0.bIncludeSuper = true;
      local_d0.bIncludeDeprecated = true;
      local_90 = uVar6;
      TFieldIterator<FProperty>::IterateToNext(&local_d0);
      if ((FProperty *)local_d0.Field != (FProperty *)0x0) {
        do {
          pFVar2 = local_d0.Field;
          local_80 = &local_98;
          local_88 = UE::Core::Private::Function::
                     TFunctionRefCaller<`ObjectPropertyTrace::TraceObjects'::__l9::<lambda_1>,void,FString_const_&,FString_const_&,int,int,TStringBuilderBase<wchar_t>_&>
                     ::Call;
          bVar4 = IsThisNotNull(local_d0.Field,"FField::GetName");
          if (bVar4) {
            ::FName::ToString(&pFVar2->NamePrivate,&local_a8);
          }
          else {
            ::FString::FString(&local_a8,L"None");
          }
          IteratePropertiesRecursive
                    ((FProperty *)pFVar2,pUVar5,&local_a8,
                     (TFunctionRef<void___cdecl(FString_const_&,FString_const_&,int,int,TStringBuilderBase<wchar_t>_&)>
                      *)&local_88,(int *)&local_e0,-1,&local_78);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          local_d0.Field = pFVar2->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_d0);
        } while ((FProperty *)local_d0.Field != (FProperty *)0x0);
        uVar9 = (ulonglong)local_d8;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
      QueryPerformanceCounter(&local_b0);
      if (-1 < ObjectProperties->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FObjectPropertiesEndFields>((TLogScope<0> *)&local_48);
        *local_48 = local_b0;
        local_48[1].QuadPart = uVar6;
        *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
      }
    }
    uVar8 = (ulonglong)(uint)Objects.ArrayNum;
    this.Data = this.Data + 8;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TraceStringId @ 1480dcb40

uint __cdecl ObjectPropertyTrace::TraceStringId(FString *param_1)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  wchar_t *pwVar10;
  wchar_t *_Src;
  uint uVar11;
  uint uVar13;
  int local_res8;
  undefined1 local_38 [12];
  int iStack_2c;
  uint *puVar12;
  
  iVar5 = (param_1->Data).ArrayNum;
  _Src = L"";
  if (iVar5 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  puVar12 = (uint *)0x0;
  uVar11 = 0;
  uVar13 = 0;
  uVar4 = iVar5 - 1;
  if (iVar5 == 0) {
    uVar4 = uVar13;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,pwVar10);
  iVar5 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&StringIdMap,uVar4,param_1);
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x20 + StringIdMap._0_8_;
    puVar7 = (uint *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = puVar12;
    }
    if (puVar7 != (uint *)0x0) {
      return *puVar7;
    }
  }
  if (1 < (param_1->Data).ArrayNum) {
    CurrentClassPropertyStringId = CurrentClassPropertyStringId + 1;
    stack0xffffffffffffffd0 = &CurrentClassPropertyStringId;
    local_38._0_8_ = param_1;
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                *)&StringIdMap,(TPairInitializer<FString_const_&,unsigned_int_const_&> *)&local_res8
               ,(bool *)local_38);
    uVar4 = *(uint *)((longlong)local_res8 * 0x20 + 0x10 + StringIdMap._0_8_);
    if (-1 < ObjectProperties->Enabled) {
      iVar5 = (param_1->Data).ArrayNum;
      uVar9 = iVar5 - 1;
      if (iVar5 == 0) {
        uVar9 = uVar13;
      }
      UE::Trace::Private::FImportantLogScope::Enter<FObjectClassPropertyStringIdFields>
                ((FImportantLogScope *)local_38,uVar9 * 2);
      uVar3 = local_38._0_8_;
      *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_38._0_8_)->AllocatorInstance)
                .Data = uVar4;
      iVar5 = (param_1->Data).ArrayNum;
      if (iVar5 != 0) {
        _Src = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        uVar11 = iVar5 - 1;
      }
      if ((int)uVar11 < 0) {
        sVar1 = *_Src;
        uVar11 = uVar13;
        pFVar2 = (FScriptContainerElement *)_Src;
        while (sVar1 != 0) {
          pFVar2 = pFVar2 + 2;
          uVar11 = (int)puVar12 + 1;
          puVar12 = (uint *)(ulonglong)uVar11;
          sVar1 = *(short *)pFVar2;
        }
      }
      iVar5 = iStack_2c;
      puVar12 = (uint *)((longlong)
                         &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_38._0_8_)->
                          AllocatorInstance).Data + (longlong)iStack_2c);
      *puVar12 = uVar11 << 0xe | 0x100;
      *(undefined1 *)puVar12 = 1;
      memcpy(puVar12 + 1,_Src,(ulonglong)(uVar11 * 2));
      *(undefined1 *)
       ((longlong)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)uVar3)->AllocatorInstance).Data
       + (longlong)(int)(iVar5 + uVar11 * 2) + 4) = 3;
      piVar8 = (int *)((longlong)
                       &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_38._0_8_)->
                        AllocatorInstance).Data + (longlong)(int)stack0xffffffffffffffd0);
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    return uVar4;
  }
  return 0;
}

// TrackValidationLogs @ 1480dd1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

bool __thiscall
StatelessConnectHandlerComponent::TrackValidationLogs(StatelessConnectHandlerComponent *this)

{
  double dVar1;
  uint uVar2;
  
  dVar1 = this->Driver->ElapsedTime;
  if (__real_403e000000000000 <= dVar1 - this->LastValidationLogPeriodStart) {
    this->LastValidationLogPeriodStart = dVar1;
    this->ValidationLogCounter = 0;
    return true;
  }
  uVar2 = this->ValidationLogCounter + 1;
  this->ValidationLogCounter = uVar2;
  return uVar2 < 10;
}

// UpdateSecret @ 1480e19d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
StatelessConnectHandlerComponent::UpdateSecret(StatelessConnectHandlerComponent *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar9;
  ulonglong uVar8;
  
  if (this->Driver == (UNetDriver *)0x0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = this->Driver->ElapsedTime;
  }
  uVar5 = 0;
  this->LastSecretUpdateTimestamp = dVar9;
  if (this->ActiveSecret == 0xff) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x40,&this->HandshakeSecret[0].AllocatorInstance,
               &this->HandshakeSecret[0].ArrayNum,&this->HandshakeSecret[0].ArrayMax);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x40,&this->HandshakeSecret[1].AllocatorInstance,
               &this->HandshakeSecret[1].ArrayNum,&this->HandshakeSecret[1].ArrayMax);
    uVar6 = uVar5;
    uVar8 = uVar5;
    do {
      iVar4 = rand();
      if (this->HandshakeSecret[1].ArrayNum <= (int)uVar8) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      this->HandshakeSecret[1].AllocatorInstance.Data[uVar6] =
           (FScriptContainerElement)
           ((((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
            (char)((longlong)iVar4 * 0x80808081 >> 0x3f)) + (char)iVar4);
      uVar6 = uVar6 + 1;
    } while ((int)uVar7 < 0x40);
    bVar2 = false;
  }
  else {
    bVar2 = this->ActiveSecret == '\0';
  }
  this->ActiveSecret = bVar2;
  uVar6 = uVar5;
  do {
    iVar4 = rand();
    if (this->HandshakeSecret[bVar2].ArrayNum <= (int)uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar7 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar7;
    this->HandshakeSecret[bVar2].AllocatorInstance.Data[uVar6] =
         (FScriptContainerElement)
         ((((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
          (char)((longlong)iVar4 * 0x80808081 >> 0x3f)) + (char)iVar4);
    uVar6 = uVar6 + 1;
  } while ((int)uVar7 < 0x40);
  return;
}

// Z_Construct_UClass_ANote_NoRegister @ 1480e3830

UClass * __cdecl Z_Construct_UClass_ANote_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANote.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Note",&Z_Registration_Info_UClass_ANote.InnerSingleton,
               ANote::StaticRegisterNativesANote,0x2c0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<ANote>,InternalVTableHelperCtorCaller<ANote>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANote.InnerSingleton;
}

// Z_Construct_UClass_APackedLevelActor_NoRegister @ 1480e38f0

UClass * __cdecl Z_Construct_UClass_APackedLevelActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PackedLevelActor",
               &Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton,
               APackedLevelActor::StaticRegisterNativesAPackedLevelActor,0x360,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APackedLevelActor>,
               InternalVTableHelperCtorCaller<APackedLevelActor>,local_res8,
               ALevelInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APackedLevelActor.InnerSingleton;
}

// Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister @ 1480e39b0

UClass * __cdecl Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineHandlerComponentFactory",
               &Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton,
               UEngineHandlerComponentFactory::StaticRegisterNativesUEngineHandlerComponentFactory,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEngineHandlerComponentFactory>,
               InternalVTableHelperCtorCaller<UEngineHandlerComponentFactory>,local_res8,
               UHandlerComponentFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineHandlerComponentFactory.InnerSingleton;
}

// Z_Construct_UClass_UNetPushModelHelpers_NoRegister @ 1480e3a70

UClass * __cdecl Z_Construct_UClass_UNetPushModelHelpers_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetPushModelHelpers",
               &Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton,
               UNetPushModelHelpers::StaticRegisterNativesUNetPushModelHelpers,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNetPushModelHelpers>,
               InternalVTableHelperCtorCaller<UNetPushModelHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton;
}

// Z_Construct_UClass_UNetworkMetricsCSV_NoRegister @ 1480e3b30

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsCSV_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsCSV",
               &Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton,
               UNetworkMetricsCSV::StaticRegisterNativesUNetworkMetricsCSV,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsCSV>,
               InternalVTableHelperCtorCaller<UNetworkMetricsCSV>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsCSV.InnerSingleton;
}

// Z_Construct_UClass_UNetworkMetricsCSV_Replication_NoRegister @ 1480e3bf0

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsCSV_Replication_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsCSV_Replication",
               &Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton,
               UNetworkMetricsCSV_Replication::StaticRegisterNativesUNetworkMetricsCSV_Replication,
               0x48,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsCSV_Replication>,
               InternalVTableHelperCtorCaller<UNetworkMetricsCSV_Replication>,local_res8,
               UNetworkMetricsCSV::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsCSV_Replication.InnerSingleton;
}

// Z_Construct_UClass_UNetworkMetricsConfig_NoRegister @ 1480e3cb0

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsConfig",
               &Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton,
               UNetworkMetricsConfig::StaticRegisterNativesUNetworkMetricsConfig,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsConfig>,
               InternalVTableHelperCtorCaller<UNetworkMetricsConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsConfig.InnerSingleton;
}

// Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister @ 1480e3d60

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsDatabase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsDatabase",
               &Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton,
               UNetworkMetricsDatabase::StaticRegisterNativesUNetworkMetricsDatabase,0x1b8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsDatabase>
               ,InternalVTableHelperCtorCaller<UNetworkMetricsDatabase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsDatabase.InnerSingleton;
}

// Z_Construct_UClass_UNetworkMetricsLog_NoRegister @ 1480e3e10

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsLog_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsLog",
               &Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton,
               UNetworkMetricsLog::StaticRegisterNativesUNetworkMetricsLog,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsLog>,
               InternalVTableHelperCtorCaller<UNetworkMetricsLog>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton;
}

// Z_Construct_UClass_UNetworkMetricsPerfCounters_NoRegister @ 1480e3ed0

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsPerfCounters_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsPerfCounters",
               &Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton,
               UNetworkMetricsPerfCounters::StaticRegisterNativesUNetworkMetricsPerfCounters,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsPerfCounters>,
               InternalVTableHelperCtorCaller<UNetworkMetricsPerfCounters>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsPerfCounters.InnerSingleton;
}

// Z_Construct_UClass_UNetworkMetricsStats_NoRegister @ 1480e3f90

UClass * __cdecl Z_Construct_UClass_UNetworkMetricsStats_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsStats",
               &Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton,
               UNetworkMetricsStats::StaticRegisterNativesUNetworkMetricsStats,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetworkMetricsStats>,
               InternalVTableHelperCtorCaller<UNetworkMetricsStats>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsStats.InnerSingleton;
}

// Z_Construct_UClass_UNetworkSubsystem_NoRegister @ 1480e4050

UClass * __cdecl Z_Construct_UClass_UNetworkSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkSubsystem",
               &Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton,
               UNetworkSubsystem::StaticRegisterNativesUNetworkSubsystem,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkSubsystem>,
               InternalVTableHelperCtorCaller<UNetworkSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UObjectLibrary_NoRegister @ 1480e4110

UClass * __cdecl Z_Construct_UClass_UObjectLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectLibrary",
               &Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton,
               UObjectLibrary::StaticRegisterNativesUObjectLibrary,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectLibrary>,
               InternalVTableHelperCtorCaller<UObjectLibrary>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectLibrary.InnerSingleton;
}

// Z_Construct_UClass_UObjectReferencer_NoRegister @ 1480e41c0

UClass * __cdecl Z_Construct_UClass_UObjectReferencer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectReferencer",
               &Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton,
               UObjectReferencer::StaticRegisterNativesUObjectReferencer,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectReferencer>,
               InternalVTableHelperCtorCaller<UObjectReferencer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton;
}

// Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister @ 1480e4270

UClass * __cdecl Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectTraceWorldSubsystem",
               &Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton,
               UObjectTraceWorldSubsystem::StaticRegisterNativesUObjectTraceWorldSubsystem,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTraceWorldSubsystem>,
               InternalVTableHelperCtorCaller<UObjectTraceWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister @ 1480e4330

UClass * __cdecl Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineBlueprintCallProxyBase",
               &Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton,
               UOnlineBlueprintCallProxyBase::StaticRegisterNativesUOnlineBlueprintCallProxyBase,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnlineBlueprintCallProxyBase>,
               InternalVTableHelperCtorCaller<UOnlineBlueprintCallProxyBase>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton;
}

// Z_Construct_UClass_UOnlineEngineInterface_NoRegister @ 1480e43f0

UClass * __cdecl Z_Construct_UClass_UOnlineEngineInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineEngineInterface",
               &Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton,
               UOnlineEngineInterface::StaticRegisterNativesUOnlineEngineInterface,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UOnlineEngineInterface>,
               InternalVTableHelperCtorCaller<UOnlineEngineInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineEngineInterface.InnerSingleton;
}

// Z_Construct_UClass_UOnlineSession_NoRegister @ 1480e44a0

UClass * __cdecl Z_Construct_UClass_UOnlineSession_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineSession.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineSession",
               &Z_Registration_Info_UClass_UOnlineSession.InnerSingleton,
               UOnlineSession::StaticRegisterNativesUOnlineSession,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UOnlineSession>,
               InternalVTableHelperCtorCaller<UOnlineSession>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineSession.InnerSingleton;
}

// Z_Construct_UClass_UPackageMapClient_NoRegister @ 1480e4550

UClass * __cdecl Z_Construct_UClass_UPackageMapClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPackageMapClient::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PackageMapClient",
               &Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton,
               UPackageMapClient::StaticRegisterNativesUPackageMapClient,0x4b8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPackageMapClient>,
               InternalVTableHelperCtorCaller<UPackageMapClient>,local_res8,UPackageMap::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackageMapClient.InnerSingleton;
}

// Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister @ 1480e4610

UClass * __cdecl Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RPCDoSDetectionConfig",
               &Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton,
               URPCDoSDetectionConfig::StaticRegisterNativesURPCDoSDetectionConfig,0x88,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<URPCDoSDetectionConfig>,
               InternalVTableHelperCtorCaller<URPCDoSDetectionConfig>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URPCDoSDetectionConfig.InnerSingleton;
}

// Z_Construct_UClass_UReplicatedObjectInterface_NoRegister @ 1480e46c0

UClass * __cdecl Z_Construct_UClass_UReplicatedObjectInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplicatedObjectInterface",
               &Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton,
               UReplicatedObjectInterface::StaticRegisterNativesUReplicatedObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicatedObjectInterface>,
               InternalVTableHelperCtorCaller<UReplicatedObjectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton;
}

// Z_Construct_UClass_UValkyrieMetaData_NoRegister @ 1480e4780

UClass * __cdecl Z_Construct_UClass_UValkyrieMetaData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ValkyrieMetaData",
               &Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton,
               UValkyrieMetaData::StaticRegisterNativesUValkyrieMetaData,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UValkyrieMetaData>,
               InternalVTableHelperCtorCaller<UValkyrieMetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UValkyrieMetaData.InnerSingleton;
}

// Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature @ 1480e4830

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EPingAverageType @ 1480e4870

UEnum * __cdecl Z_Construct_UEnum_Engine_EPingAverageType(void)

{
  if (Z_Registration_Info_UEnum_EPingAverageType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPingAverageType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPingAverageType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPingAverageType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EPingType @ 1480e48b0

UEnum * __cdecl Z_Construct_UEnum_Engine_EPingType(void)

{
  if (Z_Registration_Info_UEnum_EPingType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPingType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPingType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPingType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EReplayResult @ 1480e48f0

UEnum * __cdecl Z_Construct_UEnum_Engine_EReplayResult(void)

{
  if (Z_Registration_Info_UEnum_EReplayResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EReplayResult.InnerSingleton,
               &Z_Construct_UEnum_Engine_EReplayResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EReplayResult.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNetworkMetricsMutatorAvg @ 1480e4930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorAvg(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorAvg.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorAvg.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkMetricsMutatorAvg_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorAvg.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorAvg.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkMetricsMutatorInPacketLoss @ 1480e49b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorInPacketLoss(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorInPacketLoss.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorInPacketLoss.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkMetricsMutatorInPacketLoss_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorInPacketLoss.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorInPacketLoss.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkMetricsMutatorMax @ 1480e4a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorMax(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMax.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMax.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkMetricsMutatorMax_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMax.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMax.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkMetricsMutatorMin @ 1480e4ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorMin(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMin.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMin.InnerSingleton,
               &Z_Construct_UScriptStruct_FNetworkMetricsMutatorMin_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMin.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorMin.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss @ 1480e4b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRPCDoSStateConfig @ 1480e4bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRPCDoSStateConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.InnerSingleton;
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

// Z_Construct_UScriptStruct_FUniqueNetIdRepl @ 1480e4c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUniqueNetIdRepl(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FUniqueNetIdRepl.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FUniqueNetIdRepl.InnerSingleton,
               &Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FUniqueNetIdRepl.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FUniqueNetIdRepl.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CVarAllowAsyncLoading'' @ 1503f5f50

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAsyncLoading__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAsyncLoading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowClientRemapCacheObject'' @ 1503f5f70

void __cdecl _dynamic_atexit_destructor_for__CVarAllowClientRemapCacheObject__(void)

{
  CVarAllowClientRemapCacheObject._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowClientRemapCacheObject);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowRPCDoSDetectionBlocking'' @ 1503f5f90

void __cdecl _dynamic_atexit_destructor_for__CVarAllowRPCDoSDetectionBlocking__(void)

{
  CVarAllowRPCDoSDetectionBlocking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowRPCDoSDetectionBlocking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowRPCDoSDetectionKicking'' @ 1503f5fb0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowRPCDoSDetectionKicking__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowRPCDoSDetectionKicking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelinquencyNumberOfTopOffendersToTrack'' @ 1503f5fd0

void __cdecl _dynamic_atexit_destructor_for__CVarDelinquencyNumberOfTopOffendersToTrack__(void)

{
  CVarDelinquencyNumberOfTopOffendersToTrack._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDelinquencyNumberOfTopOffendersToTrack);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreNetworkChecksumMismatch'' @ 1503f5ff0

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreNetworkChecksumMismatch__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnoreNetworkChecksumMismatch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIsNetGuidCacheHistoryEnabled'' @ 1503f6010

void __cdecl _dynamic_atexit_destructor_for__CVarIsNetGuidCacheHistoryEnabled__(void)

{
  CVarIsNetGuidCacheHistoryEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIsNetGuidCacheHistoryEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSerializedNetExportGroups'' @ 1503f6030

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarMaxSerializedNetExportGroups__(void)

{
  CVarMaxSerializedNetExportGroups._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSerializedNetExportGroups);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSerializedNetExportsPerGroup'' @ 1503f6050

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarMaxSerializedNetExportsPerGroup__(void)

{
  CVarMaxSerializedNetExportsPerGroup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxSerializedNetExportsPerGroup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSerializedNetGuids'' @ 1503f6070

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarMaxSerializedNetGuids__(void)

{
  CVarMaxSerializedNetGuids._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSerializedNetGuids);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSerializedReplayNetGuids'' @ 1503f6090

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarMaxSerializedReplayNetGuids__(void)

{
  CVarMaxSerializedReplayNetGuids._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSerializedReplayNetGuids);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetCheckNoLoadPackages'' @ 1503f60b0

void __cdecl _dynamic_atexit_destructor_for__CVarNetCheckNoLoadPackages__(void)

{
  CVarNetCheckNoLoadPackages._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetCheckNoLoadPackages);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetCurrentHandshakeVersion'' @ 1503f60d0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetCurrentHandshakeVersion__(void)

{
  CVarNetCurrentHandshakeVersion._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetCurrentHandshakeVersion);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDoHandshakeVersionFallback'' @ 1503f60f0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetDoHandshakeVersionFallback__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDoHandshakeVersionFallback);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetHandshakeEnforceNetworkCLVersion'' @ 1503f6110

void __cdecl
UE::Net::_dynamic_atexit_destructor_for__CVarNetHandshakeEnforceNetworkCLVersion__(void)

{
  CVarNetHandshakeEnforceNetworkCLVersion._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetHandshakeEnforceNetworkCLVersion);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetHandshakeResendInterval'' @ 1503f6130

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetHandshakeResendInterval__(void)

{
  CVarNetHandshakeResendInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetHandshakeResendInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetMagicHeader'' @ 1503f6150

void __cdecl _dynamic_atexit_destructor_for__CVarNetMagicHeader__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetMagicHeader);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetMinHandshakeVersion'' @ 1503f6170

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetMinHandshakeVersion__(void)

{
  CVarNetMinHandshakeVersion._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetMinHandshakeVersion);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingDebugDump'' @ 1503f6190

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetPingDebugDump__(void)

{
  CVarNetPingDebugDump._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingDebugDump);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingEnabled'' @ 1503f61b0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetPingEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingICMPInterval'' @ 1503f61d0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetPingICMPInterval__(void)

{
  CVarNetPingICMPInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingICMPInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingTimeoutDisableThreshold'' @ 1503f61f0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetPingTimeoutDisableThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingTimeoutDisableThreshold)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingTypes'' @ 1503f6210

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetPingTypes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingTypes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingUDPInterval'' @ 1503f6230

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetPingUDPInterval__(void)

{
  CVarNetPingUDPInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingUDPInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetPingUDPPort'' @ 1503f6250

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetPingUDPPort__(void)

{
  CVarNetPingUDPPort._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetPingUDPPort);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetReportSyncLoads'' @ 1503f6270

void __cdecl _dynamic_atexit_destructor_for__CVarNetReportSyncLoads__(void)

{
  CVarNetReportSyncLoads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetReportSyncLoads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetVerifyMagicHeader'' @ 1503f6290

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetVerifyMagicHeader__(void)

{
  CVarNetVerifyMagicHeader._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetVerifyMagicHeader);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetVerifyNetClientID'' @ 1503f62b0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetVerifyNetClientID__(void)

{
  CVarNetVerifyNetClientID._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetVerifyNetClientID);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetVerifyNetSessionID'' @ 1503f62d0

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarNetVerifyNetSessionID__(void)

{
  CVarNetVerifyNetSessionID._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetVerifyNetSessionID);
  return;
}

// `dynamic_atexit_destructor_for_'CVarODSCMaxPayloadPerRequests'' @ 1503f62f0

void __cdecl _dynamic_atexit_destructor_for__CVarODSCMaxPayloadPerRequests__(void)

{
  CVarODSCMaxPayloadPerRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarODSCMaxPayloadPerRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVarODSCRecompileMode'' @ 1503f6310

void __cdecl _dynamic_atexit_destructor_for__CVarODSCRecompileMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarODSCRecompileMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarODSCUseDefaultMaterialOnRecompile'' @ 1503f6330

void __cdecl _dynamic_atexit_destructor_for__CVarODSCUseDefaultMaterialOnRecompile__(void)

{
  CVarODSCUseDefaultMaterialOnRecompile._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarODSCUseDefaultMaterialOnRecompile);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQuantizeActorLocationOnSpawn'' @ 1503f6350

void __cdecl _dynamic_atexit_destructor_for__CVarQuantizeActorLocationOnSpawn__(void)

{
  CVarQuantizeActorLocationOnSpawn._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQuantizeActorLocationOnSpawn);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQuantizeActorRotationOnSpawn'' @ 1503f6370

void __cdecl _dynamic_atexit_destructor_for__CVarQuantizeActorRotationOnSpawn__(void)

{
  CVarQuantizeActorRotationOnSpawn._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQuantizeActorRotationOnSpawn);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQuantizeActorScaleOnSpawn'' @ 1503f6390

void __cdecl _dynamic_atexit_destructor_for__CVarQuantizeActorScaleOnSpawn__(void)

{
  CVarQuantizeActorScaleOnSpawn._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQuantizeActorScaleOnSpawn);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQuantizeActorVelocityOnSpawn'' @ 1503f63b0

void __cdecl _dynamic_atexit_destructor_for__CVarQuantizeActorVelocityOnSpawn__(void)

{
  CVarQuantizeActorVelocityOnSpawn._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQuantizeActorVelocityOnSpawn);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRPCDoSDetectionOverride'' @ 1503f63d0

void __cdecl _dynamic_atexit_destructor_for__CVarRPCDoSDetectionOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRPCDoSDetectionOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRPCDoSForcedRPCTracking'' @ 1503f63f0

void __cdecl _dynamic_atexit_destructor_for__CVarRPCDoSForcedRPCTracking__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRPCDoSForcedRPCTracking);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRPCDoSScopeDebugging'' @ 1503f6410

void __cdecl UE::Net::_dynamic_atexit_destructor_for__CVarRPCDoSScopeDebugging__(void)

{
  CVarRPCDoSScopeDebugging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRPCDoSScopeDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReservedNetGuidSize'' @ 1503f6430

void __cdecl _dynamic_atexit_destructor_for__CVarReservedNetGuidSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReservedNetGuidSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadingGUIDThresholdOwner'' @ 1503f6450

void __cdecl _dynamic_atexit_destructor_for__CVarTrackAsyncLoadingGUIDThresholdOwner__(void)

{
  CVarTrackAsyncLoadingGUIDThresholdOwner._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTrackAsyncLoadingGUIDThresholdOwner);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackAsyncLoadingGUIDTreshold'' @ 1503f6470

void __cdecl _dynamic_atexit_destructor_for__CVarTrackAsyncLoadingGUIDTreshold__(void)

{
  CVarTrackAsyncLoadingGUIDTreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackAsyncLoadingGUIDTreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackQueuedActorOwnerThreshold'' @ 1503f6490

void __cdecl _dynamic_atexit_destructor_for__CVarTrackQueuedActorOwnerThreshold__(void)

{
  CVarTrackQueuedActorOwnerThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackQueuedActorOwnerThreshold)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrackQueuedActorTreshold'' @ 1503f64b0

void __cdecl _dynamic_atexit_destructor_for__CVarTrackQueuedActorTreshold__(void)

{
  CVarTrackQueuedActorTreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrackQueuedActorTreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseGranularNetworkTracking'' @ 1503f64d0

void __cdecl
UE::Net::Private::GranularMemoryTracking::
_dynamic_atexit_destructor_for__CVarUseGranularNetworkTracking__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseGranularNetworkTracking);
  return;
}

// `dynamic_atexit_destructor_for_'CountName'' @ 1503f64f0

void __cdecl
`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows'::__l2::
_dynamic_atexit_destructor_for__CountName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
               ::__l2::CountName.Data.AllocatorInstance.Data;
  if (`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
      ::__l2::CountName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope::GenerateRows(FString_const&___ptr64,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
      ::__l2::CountName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Current'' @ 1503f6510

void __cdecl ObjectCacheContextScopeImpl::_dynamic_atexit_destructor_for__Current__(void)

{
  FObjectCacheContext *this;
  
  this = *(FObjectCacheContext **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x8ff8);
  if (this != (FObjectCacheContext *)0x0) {
    FObjectCacheContext::~FObjectCacheContext(this);
    ::operator_delete(this,0x310);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 1503f6560

void __cdecl
`FObjectCacheContext::TComponentTypeCache<IStaticMeshComponent,UStaticMesh>::
GetSet<TComponentInterfaceIterator<IStaticMeshComponent>,`FObjectCacheContext::GetStaticMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetStaticMeshComponents'::__l2::<lambda_2>_>'
::__l2::_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<IStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IStaticMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 1503f65a0

void __cdecl
`FObjectCacheContext::TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData>::
GetSet<TObjectIterator<UInstancedSkinnedMeshComponent>,`FObjectCacheContext::GetInstancedSkinnedMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetInstancedSkinnedMeshComponents'::__l2::<lambda_2>_>'
::__l2::_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UInstancedSkinnedMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UInstancedSkinnedMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 1503f65e0

void __cdecl
`FObjectCacheContext::TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset>::
GetSet<TObjectIterator<USkinnedMeshComponent>,`FObjectCacheContext::GetSkinnedMeshComponents'::__l2::<lambda_1>,`FObjectCacheContext::GetSkinnedMeshComponents'::__l2::<lambda_2>_>'
::__l2::_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USkinnedMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USkinnedMeshComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 1503f6620

void __cdecl
`FObjectCacheContext::GetMaterialsAffectedByTexture'::__l2::
_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 1503f6660

void __cdecl
`FObjectCacheContext::GetMaterialsAffectedByTextureCollection'::__l2::
_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'FNetSequenceNumberTestAutomationTestInstance'' @ 1503f66a0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FNetSequenceNumberTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FNetSequenceNumberTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GObjectIdAnnotations'' @ 1503f66c0

void __cdecl _dynamic_atexit_destructor_for__GObjectIdAnnotations__(void)

{
  GObjectIdAnnotations._padding_ =
       (longlong)&___7__FUObjectAnnotationSparseSearchable_UFObjectIdAnnotation___00__6B_;
  FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::RemoveAllAnnotations
            (&GObjectIdAnnotations);
  DeleteCriticalSection((LPCRITICAL_SECTION)&GObjectIdAnnotations.InverseAnnotationMapCritical);
  GObjectIdAnnotations.InverseAnnotationMap._72_4_ = 0;
  if (GObjectIdAnnotations.InverseAnnotationMap._64_8_ != 0) {
    FMemory::Free((void *)GObjectIdAnnotations.InverseAnnotationMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectIdAnnotation,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectIdAnnotation,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectIdAnnotation,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GObjectIdAnnotations.InverseAnnotationMap);
  FUObjectAnnotationSparse<FObjectIdAnnotation,1>::~FUObjectAnnotationSparse<FObjectIdAnnotation,1>
            ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)&GObjectIdAnnotations);
  return;
}

// `dynamic_atexit_destructor_for_'GObjectTracedSet'' @ 1503f6730

void __cdecl _dynamic_atexit_destructor_for__GObjectTracedSet__(void)

{
  GObjectTracedSet.HashSize = 0;
  if (GObjectTracedSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GObjectTracedSet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UE::ObjectTrace::FObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::ObjectTrace::FObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GObjectTracedSet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GObjectTracedSetLock'' @ 1503f6770

void __cdecl _dynamic_atexit_destructor_for__GObjectTracedSetLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&GObjectTracedSetLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001503f6790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&GObjectTracedSetLock);
    return;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidUniqueNetIdStr'' @ 1503f67d0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__InvalidUniqueNetIdStr__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidUniqueNetIdStr.Data.AllocatorInstance.Data;
  if (InvalidUniqueNetIdStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidUniqueNetIdStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LastPingTypesCVar'' @ 1503f67f0

void __cdecl
`UE::Net::FNetPing::Init'::__l2::_dynamic_atexit_destructor_for__LastPingTypesCVar__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LastPingTypesCVar.Data.AllocatorInstance.Data;
  if (LastPingTypesCVar.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LastPingTypesCVar.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ListNetGUIDExportsCommand'' @ 1503f6810

void __cdecl _dynamic_atexit_destructor_for__ListNetGUIDExportsCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ListNetGUIDExportsCommand);
  return;
}

// `dynamic_atexit_destructor_for_'LogHandshake'' @ 1503f6830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHandshake__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHandshake);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetworkMetrics'' @ 1503f6850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetworkMetrics__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetworkMetrics);
  return;
}

// `dynamic_atexit_destructor_for_'LogODSC'' @ 1503f6870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogODSC__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogODSC);
  return;
}

// `dynamic_atexit_destructor_for_'LogObjectCache'' @ 1503f6890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogObjectCache__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogObjectCache);
  return;
}

// `dynamic_atexit_destructor_for_'LogOnlineEngine'' @ 1503f68b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOnlineEngine__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOnlineEngine);
  return;
}

// `dynamic_atexit_destructor_for_'NetPingSingleton'' @ 1503f68d0

void __cdecl
`UE::Net::Private::FNetPingICMP::GetNetPingICMP'::__l2::
_dynamic_atexit_destructor_for__NetPingSingleton__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (NetPingSingleton.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'ODSCLogMissedMaterialsCmd'' @ 1503f68f0

void __cdecl _dynamic_atexit_destructor_for__ODSCLogMissedMaterialsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ODSCLogMissedMaterialsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'Objects'' @ 1503f6910

void __cdecl ObjectPropertyTrace::_dynamic_atexit_destructor_for__Objects__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Objects.AllocatorInstance.Data;
  if (Objects.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Stack'' @ 1503f6930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::Get'::__l2::
_dynamic_atexit_destructor_for__Stack__(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  
  pvVar4 = _Stack;
  if (_Stack != (void *)0x0) {
    if (*(void **)((longlong)_Stack + 0x68) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)_Stack + 0x68));
    }
    *(undefined4 *)((longlong)pvVar4 + 0x58) = 0;
    if (*(void **)((longlong)pvVar4 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar4 + 0x50));
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope,TDefaultDelete<UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScope>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)pvVar4 + 0x10));
    plVar3 = *(longlong **)((longlong)pvVar4 + 8);
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
    ::operator_delete(pvVar4,0x78);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StringIdMap'' @ 1503f69c0

void __cdecl ObjectPropertyTrace::_dynamic_atexit_destructor_for__StringIdMap__(void)

{
  StringIdMap._72_4_ = 0;
  if (StringIdMap._64_8_ != 0) {
    FMemory::Free((void *)StringIdMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&StringIdMap);
  return;
}

// `dynamic_atexit_destructor_for_'TickerHandle'' @ 1503f6a00

void __cdecl ObjectPropertyTrace::_dynamic_atexit_destructor_for__TickerHandle__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController = TickerHandle.WeakReferenceCount.ReferenceController;
  if (TickerHandle.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(TickerHandle.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001503f6a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'UnknownScopeName'' @ 1503f6a30

void __cdecl
`UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork'::__l2::
_dynamic_atexit_destructor_for__UnknownScopeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
               ::__l2::UnknownScopeName.Data.AllocatorInstance.Data;
  if (`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
      ::__l2::UnknownScopeName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_void___cdecl_UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork(FString_const&___ptr64,unsigned___int64)___ptr64'
      ::__l2::UnknownScopeName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_PackageMap'' @ 1503f6a50

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_PackageMap__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_PackageMap.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_PackageMap.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_PackageMap.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

