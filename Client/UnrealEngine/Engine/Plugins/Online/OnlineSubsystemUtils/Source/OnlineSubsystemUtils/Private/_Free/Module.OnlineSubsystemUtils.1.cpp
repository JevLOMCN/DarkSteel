// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 696

// OnNetworkProcessingCausingSlowFrame'' @ 14144c390

void __cdecl `dynamic_initializer_for_'UIpNetDriver::OnNetworkProcessingCausingSlowFrame__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UIpNetDriver::OnNetworkProcessingCausingSlowFrame__);
  return;
}

// `dynamic_initializer_for_'AwayText'' @ 14144c3b0

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&AwayText,L"OnlinePresence",L"Away",L"Away");
  atexit(_dynamic_atexit_destructor_for__AwayText__);
  return;
}

// `dynamic_initializer_for_'CVarAlwaysPlayVoipComponent'' @ 14144c3f0

void __cdecl _dynamic_initializer_for__CVarAlwaysPlayVoipComponent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAlwaysPlayVoipComponent,L"au.voip.AlwaysPlayVoiceComponent",
             &CvarAlwaysPlayVoipComponent,
             L"When set to 1, guarantees that voip components won\'t get deprioritized. \n0: Let voip components get killed, 1: force VOIP components to be higher priority than all other audio sources."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysPlayVoipComponent__);
  return;
}

// `dynamic_initializer_for_'CVarDelayCancellationResponse'' @ 14144c440

void __cdecl BeaconConsoleVariables::_dynamic_initializer_for__CVarDelayCancellationResponse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayCancellationResponse,L"beacon.DelayCancellationResponse",local_res8,
             L"Delay time between received cancel response and notification\nTime in secs",0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayCancellationResponse__);
  return;
}

// `dynamic_initializer_for_'CVarDelayFinishHandshake'' @ 14144c490

void __cdecl BeaconConsoleVariables::_dynamic_initializer_for__CVarDelayFinishHandshake__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayFinishHandshake,L"beacon.DelayFinishHandshake",local_res8,
             L"Delay time before finishing handshake by calling client RPC\nTime in seconds. A value of 0 means no delay, and a negative value means never call it."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayFinishHandshake__);
  return;
}

// `dynamic_initializer_for_'CVarDelayFinishHandshakeType'' @ 14144c4e0

void __cdecl BeaconConsoleVariables::_dynamic_initializer_for__CVarDelayFinishHandshakeType__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarDelayFinishHandshakeType,L"beacon.DelayFinishHandshakeBeaconType",&local_18,
             L"The type of beacon to apply the handshake delay to.\nLeave blank for all.",0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarDelayFinishHandshakeType__);
  return;
}

// `dynamic_initializer_for_'CVarDelayFullResponse'' @ 14144c550

void __cdecl BeaconConsoleVariables::_dynamic_initializer_for__CVarDelayFullResponse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayFullResponse,L"beacon.DelayFullResponse",local_res8,
             L"Delay time between received full response and notification\nTime in secs",0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayFullResponse__);
  return;
}

// `dynamic_initializer_for_'CVarDelayReservationResponse'' @ 14144c5a0

void __cdecl BeaconConsoleVariables::_dynamic_initializer_for__CVarDelayReservationResponse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayReservationResponse,L"beacon.DelayReservationResponse",local_res8,
             L"Delay time between received response and notification\nTime in secs",0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayReservationResponse__);
  return;
}

// `dynamic_initializer_for_'CVarDelayUpdateResponse'' @ 14144c5f0

void __cdecl BeaconConsoleVariables::_dynamic_initializer_for__CVarDelayUpdateResponse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarDelayUpdateResponse,L"beacon.DelayUpdateResponse",local_res8,
             L"Delay time between received update response and notification\nTime in secs",0);
  atexit(_dynamic_atexit_destructor_for__CVarDelayUpdateResponse__);
  return;
}

// `dynamic_initializer_for_'CVarMaxAggregateIPLogs'' @ 14144c640

void __cdecl IPNetDriverInternal::_dynamic_initializer_for__CVarMaxAggregateIPLogs__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,IPNetDriverInternal::<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxAggregateIPLogs,L"net.MaxAggregateIPLogs",&MaxAggregateIPLogs,
             L"The maximum number of IP\'s to include in aggregated pre-connection logging, before such logging is disabled altogether (Min: 1, Max: 128)."
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
  atexit(_dynamic_atexit_destructor_for__CVarMaxAggregateIPLogs__);
  return;
}

// `dynamic_initializer_for_'CVarMaxIPHitLogs'' @ 14144c780

void __cdecl IPNetDriverInternal::_dynamic_initializer_for__CVarMaxIPHitLogs__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,IPNetDriverInternal::<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxIPHitLogs,L"net.MaxIPHitLogs",&MaxIPHitLogs,
             L"The maximum number of times to individually log a specific IP pre-connection, before aggregating further logs."
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
  atexit(_dynamic_atexit_destructor_for__CVarMaxIPHitLogs__);
  return;
}

// `dynamic_initializer_for_'CVarNetBlockSend'' @ 14144c8c0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarNetBlockSend__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetBlockSend,L"net.BlockSend",&GNetBlockSend,
             L"When enabled, blocks packet sends on NetConnection\'s.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetBlockSend__);
  return;
}

// `dynamic_initializer_for_'CVarNetDebugAddResolverAddress'' @ 14144c910

void __cdecl _dynamic_initializer_for__CVarNetDebugAddResolverAddress__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarNetDebugAddResolverAddress,L"net.DebugAppendResolverAddress",&local_18,
             L"If this is set, all IP address resolution methods will add the value of this CVAR to the list of results.This allows for testing resolution functionality across all multiple addresses with the end goal of having a successful result(being the value of this CVAR)"
             ,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarNetDebugAddResolverAddress__);
  return;
}

// `dynamic_initializer_for_'CVarNetDebugDualIPs'' @ 14144c980

void __cdecl _dynamic_initializer_for__CVarNetDebugDualIPs__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetDebugDualIPs,L"net.DebugDualIPs",local_res8,
             L"If true, will duplicate every packet received, and process with a new (deterministic) IP, to emulate receiving client packets from dual IP\'s - which can happen under real-world network conditions(only supports a single client on the server)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDebugDualIPs__);
  return;
}

// `dynamic_initializer_for_'CVarNetDebugInitialConnect'' @ 14144c9d0

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarNetDebugInitialConnect__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetDebugInitialConnect,L"net.DebugInitialConnect",&GNetDebugInitialConnect,
             L"When enabled, periodically logs socket-level send stats clientside, until a packet is successfully received to verify connection."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDebugInitialConnect__);
  return;
}

// `dynamic_initializer_for_'CVarNetDebugInitialConnectLogFrequency'' @ 14144ca20

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarNetDebugInitialConnectLogFrequency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetDebugInitialConnectLogFrequency,L"net.DebugInitialConnectLogFrequency",
             &GNetDebugInitialConnectLogFrequency,
             L"The amount of time, in seconds, between initial connect debug logging.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetDebugInitialConnectLogFrequency__);
  return;
}

// `dynamic_initializer_for_'CVarNetIpConnectionDisableResolution'' @ 14144ca70

void __cdecl _dynamic_initializer_for__CVarNetIpConnectionDisableResolution__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetIpConnectionDisableResolution,L"net.IpConnectionDisableResolution",local_res8,
             L"If enabled, any future ip connections will not use resolution methods.",1);
  atexit(_dynamic_atexit_destructor_for__CVarNetIpConnectionDisableResolution__);
  return;
}

// `dynamic_initializer_for_'CVarNetIpConnectionUseSendTasks'' @ 14144cac0

void __cdecl _dynamic_initializer_for__CVarNetIpConnectionUseSendTasks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetIpConnectionUseSendTasks,L"net.IpConnectionUseSendTasks",local_res8,
             L"If true, the IpConnection will call the socket\'s SendTo function in a task graph task so that it can run off the game thread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetIpConnectionUseSendTasks__);
  return;
}

// `dynamic_initializer_for_'CVarNetIpNetDriverReceiveThreadPollTimeMS'' @ 14144cb10

void __cdecl _dynamic_initializer_for__CVarNetIpNetDriverReceiveThreadPollTimeMS__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0xfa;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetIpNetDriverReceiveThreadPollTimeMS,L"net.IpNetDriverReceiveThreadPollTimeMS",
             local_res8,
             L"If net.IpNetDriverUseReceiveThread is true, the number of milliseconds to use as the timeout value for FSocket::Wait on the receive thread. A negative value means to wait indefinitely (FSocket::Shutdown should cancel it though)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetIpNetDriverReceiveThreadPollTimeMS__);
  return;
}

// `dynamic_initializer_for_'CVarNetIpNetDriverReceiveThreadQueueMaxPackets'' @ 14144cb60

void __cdecl _dynamic_initializer_for__CVarNetIpNetDriverReceiveThreadQueueMaxPackets__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x400;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetIpNetDriverReceiveThreadQueueMaxPackets,
             L"net.IpNetDriverReceiveThreadQueueMaxPackets",local_res8,
             L"If net.IpNetDriverUseReceiveThread is true, the maximum number of packets that can be waiting in the queue. Additional packets received will be dropped."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetIpNetDriverReceiveThreadQueueMaxPackets__);
  return;
}

// `dynamic_initializer_for_'CVarNetIpNetDriverUseReceiveThread'' @ 14144cbb0

void __cdecl _dynamic_initializer_for__CVarNetIpNetDriverUseReceiveThread__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetIpNetDriverUseReceiveThread,L"net.IpNetDriverUseReceiveThread",local_res8,
             L"If true, the IpNetDriver will call the socket\'s RecvFrom function on a separate thread (not the game thread)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetIpNetDriverUseReceiveThread__);
  return;
}

// `dynamic_initializer_for_'CVarNetRecreateSocketCooldown'' @ 14144cc00

void __cdecl UE::Net::Private::_dynamic_initializer_for__CVarNetRecreateSocketCooldown__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetRecreateSocketCooldown,L"net.RecreateSocketCooldown",
             &GNetRecreateSocketCooldown,
             L"The minimum amount of time, in seconds, between socket recreation attempts.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNetRecreateSocketCooldown__);
  return;
}

// `dynamic_initializer_for_'CVarNetRecreateSocketTimeoutThreshold'' @ 14144cc50

void __cdecl
UE::Net::Private::_dynamic_initializer_for__CVarNetRecreateSocketTimeoutThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNetRecreateSocketTimeoutThreshold,L"net.RecreateSocketTimeoutThreshold",
             &GNetRecreateSocketTimeoutThreshold,
             L"The amount of time, in seconds, without receiving a packet or alternatively without a send ack, before triggering socket recreation. (0.0 = off)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetRecreateSocketTimeoutThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarNetUseRecvMulti'' @ 14144cca0

void __cdecl _dynamic_initializer_for__CVarNetUseRecvMulti__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetUseRecvMulti,L"net.UseRecvMulti",local_res8,
             L"If true, and if running on a Unix/Linux platform, multiple packets will be retrieved from the socket with one syscall, improving performance and also allowing retrieval of timestamp information."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetUseRecvMulti__);
  return;
}

// `dynamic_initializer_for_'CVarNetUseRecvTimestamps'' @ 14144ccf0

void __cdecl _dynamic_initializer_for__CVarNetUseRecvTimestamps__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNetUseRecvTimestamps,L"net.UseRecvTimestamps",local_res8,
             L"If true and if net.UseRecvMulti is also true, on a Unix/Linux platform, the kernel timestamp will be retrieved for each packet received, providing more accurate ping calculations."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNetUseRecvTimestamps__);
  return;
}

// `dynamic_initializer_for_'CVarRcvThreadShouldSleepForLongRecvErrors'' @ 14144cd40

void __cdecl _dynamic_initializer_for__CVarRcvThreadShouldSleepForLongRecvErrors__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRcvThreadShouldSleepForLongRecvErrors,L"net.RcvThreadShouldSleepForLongRecvErrors"
             ,local_res8,
             L"Whether or not the receive thread should sleep for RecvFrom errors which are expected to last a long time. 0 = don\'t sleep, 1 = sleep, 2 = exit receive thread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRcvThreadShouldSleepForLongRecvErrors__);
  return;
}

// `dynamic_initializer_for_'CVarRcvThreadSleepTimeForWaitableErrorsInSeconds'' @ 14144cd90

void __cdecl _dynamic_initializer_for__CVarRcvThreadSleepTimeForWaitableErrorsInSeconds__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarRcvThreadSleepTimeForWaitableErrorsInSeconds,
             L"net.RcvThreadSleepTimeForWaitableErrorsInSeconds",local_res8,
             L"Time the receive thread will sleep when a waitable error is returned by a socket operation."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRcvThreadSleepTimeForWaitableErrorsInSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarRecvMultiCapacity'' @ 14144cde0

void __cdecl _dynamic_initializer_for__CVarRecvMultiCapacity__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x800;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRecvMultiCapacity,L"net.RecvMultiCapacity",local_res8,
             L"When RecvMulti is enabled, this is the number of packets it is allocated to handle per call - bigger is better (especially under a DDoS), but keep an eye on memory cost."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRecvMultiCapacity__);
  return;
}

// `dynamic_initializer_for_'CVarRequireInitiatorIsPartyLeader'' @ 14144ce30

void __cdecl
BeaconConsoleVariables::_dynamic_initializer_for__CVarRequireInitiatorIsPartyLeader__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarRequireInitiatorIsPartyLeader,L"beacon.RequireInitiatorIsPartyLeader",local_res8,
             L"Enforce RPC validation which checks whether the initiator of a reservation RPC is the party leader\nEnabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRequireInitiatorIsPartyLeader__);
  return;
}

// `dynamic_initializer_for_'ChatText'' @ 14144ce80

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&ChatText,L"OnlinePresence",L"Chat",L"Chat");
  atexit(_dynamic_atexit_destructor_for__ChatText__);
  return;
}

// `dynamic_initializer_for_'DoNotDisturbText'' @ 14144cec0

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DoNotDisturbText,L"OnlinePresence",L"DoNotDisturb",L"Do Not Disturb");
  atexit(_dynamic_atexit_destructor_for__DoNotDisturbText__);
  return;
}

// `dynamic_initializer_for_'Error_Authentication'' @ 14144cf00

void __cdecl _dynamic_initializer_for__Error_Authentication__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Error_Authentication,L"NetworkErrors",L"AuthenticationFailure",
             L"Failed to verify user authentication.");
  atexit(_dynamic_atexit_destructor_for__Error_Authentication__);
  return;
}

// `dynamic_initializer_for_'Error_ControlFlow'' @ 14144cf40

void __cdecl _dynamic_initializer_for__Error_ControlFlow__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Error_ControlFlow,L"NetworkErrors",L"ControlFlowError",L"Control flow error: {0}.");
  atexit(_dynamic_atexit_destructor_for__Error_ControlFlow__);
  return;
}

// `dynamic_initializer_for_'Error_UnableToParsePacket'' @ 14144cf80

void __cdecl _dynamic_initializer_for__Error_UnableToParsePacket__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&Error_UnableToParsePacket,L"NetworkErrors",L"UnableToParsePacket",
             L"Unable to parse expected packet structure: {0}.");
  atexit(_dynamic_atexit_destructor_for__Error_UnableToParsePacket__);
  return;
}

// `dynamic_initializer_for_'GCurrentDuplicateIP'' @ 14144cfc0

void __cdecl _dynamic_initializer_for__GCurrentDuplicateIP__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCurrentDuplicateIP__);
  return;
}

// `dynamic_initializer_for_'GIpNetDriverLongFramePrintoutThresholdSecsCVar'' @ 14144cfe0

void __cdecl _dynamic_initializer_for__GIpNetDriverLongFramePrintoutThresholdSecsCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GIpNetDriverLongFramePrintoutThresholdSecsCVar,
             L"n.IpNetDriverMaxFrameTimeBeforeLogging",&GIpNetDriverLongFramePrintoutThresholdSecs,
             L"Time to spend processing networking data in a single frame before an output log warning is printed (in seconds)\n default: 10 s"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GIpNetDriverLongFramePrintoutThresholdSecsCVar__);
  return;
}

// `dynamic_initializer_for_'GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecsCVar'' @ 14144d030

void __cdecl _dynamic_initializer_for__GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecsCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecsCVar,
             L"n.IpNetDriverMaxFrameTimeBeforeAlert",&GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecs
             ,
             L"Time to spend processing networking data in a single frame before an alert is raised (in seconds)\nIt may get called multiple times in a single frame if additional processing after a previous alert exceeds the threshold again\n default: 1 s"
             ,0);
  atexit(_dynamic_atexit_destructor_for__GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecsCVar__);
  return;
}

// `dynamic_initializer_for_'GSendLocalTalkersToEndpointCommand'' @ 14144d080

void __cdecl _dynamic_initializer_for__GSendLocalTalkersToEndpointCommand__(void)

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
    puVar1[3] = <lambda_27>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GSendLocalTalkersToEndpointCommand,L"voice.sendLocalTalkersToEndpoint",
             L"This will send audio output for all outgoing voip audio to the named endpoint. if given no arguments, this will disconnect all external endpoints."
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
  atexit(_dynamic_atexit_destructor_for__GSendLocalTalkersToEndpointCommand__);
  return;
}

// `dynamic_initializer_for_'GSendRemoteTalkersToEndpointCommand'' @ 14144d1c0

void __cdecl _dynamic_initializer_for__GSendRemoteTalkersToEndpointCommand__(void)

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
    puVar1[3] = <lambda_26>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GSendRemoteTalkersToEndpointCommand,L"voice.sendRemoteTalkersToEndpoint",
             L"This will send audio output for all incoming voip audio to the named endpoint. if given no arguments, this will route voice output through the game engine."
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
  atexit(_dynamic_atexit_destructor_for__GSendRemoteTalkersToEndpointCommand__);
  return;
}

// `dynamic_initializer_for_'LogBeacon'' @ 14144d300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBeacon__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogBeacon,L"LogBeacon",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBeacon__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOnlineSubsystemUtils'' @ 14144d340

void __cdecl _dynamic_initializer_for__ModuleRegistrantOnlineSubsystemUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OnlineSubsystemUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OnlineSubsystemUtils",0x14);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FOnlineSubsystemUtilsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_AOnlineBeaconClient_ClientOnConnected'' @ 14144d390

void __cdecl _dynamic_initializer_for__NAME_AOnlineBeaconClient_ClientOnConnected__(void)

{
  FName::FName(&NAME_AOnlineBeaconClient_ClientOnConnected,L"ClientOnConnected");
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ClientCancelReservationResponse'' @ 14144d3b0

void __cdecl
_dynamic_initializer_for__NAME_APartyBeaconClient_ClientCancelReservationResponse__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ClientCancelReservationResponse,
               L"ClientCancelReservationResponse");
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ClientReservationResponse'' @ 14144d3d0

void __cdecl _dynamic_initializer_for__NAME_APartyBeaconClient_ClientReservationResponse__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ClientReservationResponse,L"ClientReservationResponse");
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ClientSendReservationFull'' @ 14144d3f0

void __cdecl _dynamic_initializer_for__NAME_APartyBeaconClient_ClientSendReservationFull__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ClientSendReservationFull,L"ClientSendReservationFull");
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ClientSendReservationUpdates'' @ 14144d410

void __cdecl _dynamic_initializer_for__NAME_APartyBeaconClient_ClientSendReservationUpdates__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ClientSendReservationUpdates,L"ClientSendReservationUpdates"
              );
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ServerAddOrUpdateReservationRequest'' @ 14144d430

void __cdecl
_dynamic_initializer_for__NAME_APartyBeaconClient_ServerAddOrUpdateReservationRequest__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ServerAddOrUpdateReservationRequest,
               L"ServerAddOrUpdateReservationRequest");
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ServerCancelReservationRequest'' @ 14144d450

void __cdecl
_dynamic_initializer_for__NAME_APartyBeaconClient_ServerCancelReservationRequest__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ServerCancelReservationRequest,
               L"ServerCancelReservationRequest");
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ServerRemoveMemberFromReservationRequest'' @ 14144d470

void __cdecl
_dynamic_initializer_for__NAME_APartyBeaconClient_ServerRemoveMemberFromReservationRequest__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ServerRemoveMemberFromReservationRequest,
               L"ServerRemoveMemberFromReservationRequest");
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ServerReservationRequest'' @ 14144d490

void __cdecl _dynamic_initializer_for__NAME_APartyBeaconClient_ServerReservationRequest__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ServerReservationRequest,L"ServerReservationRequest");
  return;
}

// `dynamic_initializer_for_'NAME_APartyBeaconClient_ServerUpdateReservationRequest'' @ 14144d4b0

void __cdecl
_dynamic_initializer_for__NAME_APartyBeaconClient_ServerUpdateReservationRequest__(void)

{
  FName::FName(&NAME_APartyBeaconClient_ServerUpdateReservationRequest,
               L"ServerUpdateReservationRequest");
  return;
}

// `dynamic_initializer_for_'NAME_Unset'' @ 14144d4d0

void __cdecl _dynamic_initializer_for__NAME_Unset__(void)

{
  FName::FName(&NAME_Unset,L"UNSET");
  return;
}

// `dynamic_initializer_for_'OfflineText'' @ 14144d4f0

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&OfflineText,L"OnlinePresence",L"Offline",L"Offline");
  atexit(_dynamic_atexit_destructor_for__OfflineText__);
  return;
}

// `dynamic_initializer_for_'OnlineExecRegistration'' @ 14144d530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__OnlineExecRegistration__(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec(&OnlineExecRegistration,OnlineExec);
  atexit(_dynamic_atexit_destructor_for__OnlineExecRegistration__);
  return;
}

// `dynamic_initializer_for_'OnlineText'' @ 14144d560

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&OnlineText,L"OnlinePresence",L"Online",L"Online");
  atexit(_dynamic_atexit_destructor_for__OnlineText__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IpConnection_AddressSynthesis'' @ 14144d5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IpConnection_AddressSynthesis__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IpConnection_AddressSynthesis ==
      (FThreadSafeStaticStat<FStat_STAT_IpConnection_AddressSynthesis>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IpConnection_AddressSynthesis");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_AddressSynthesis,*pFVar1,
               L"IpConnection Address Synthesis","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IpConnection_SendToSocket'' @ 14144d630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IpConnection_SendToSocket__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IpConnection_SendToSocket ==
      (FThreadSafeStaticStat<FStat_STAT_IpConnection_SendToSocket>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IpConnection_SendToSocket");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_SendToSocket,*pFVar1,
               L"IpConnection Socket SendTo","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IpConnection_WaitForSendTasks'' @ 14144d6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IpConnection_WaitForSendTasks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IpConnection_WaitForSendTasks ==
      (FThreadSafeStaticStat<FStat_STAT_IpConnection_WaitForSendTasks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IpConnection_WaitForSendTasks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpConnection_WaitForSendTasks,*pFVar1,
               L"IpConnection WaitForSendTasks","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IpNetDriver_Destroy_WaitForReceiveThread'' @ 14144d750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IpNetDriver_Destroy_WaitForReceiveThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IpNetDriver_Destroy_WaitForReceiveThread ==
      (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_Destroy_WaitForReceiveThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IpNetDriver_Destroy_WaitForReceiveThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpNetDriver_Destroy_WaitForReceiveThread,
               *pFVar1,L"IpNetDriver Destroy WaitForReceiveThread","STATGROUP_Net",
               "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IpNetDriver_RecvFromSocket'' @ 14144d7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IpNetDriver_RecvFromSocket__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IpNetDriver_RecvFromSocket ==
      (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_RecvFromSocket>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IpNetDriver_RecvFromSocket");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpNetDriver_RecvFromSocket,*pFVar1,
               L"IpNetDriver Socket RecvFrom","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_IpConnectionInitRemoteConnection'' @ 14144d870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_IpConnectionInitRemoteConnection__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_IpConnectionInitRemoteConnection ==
      (FThreadSafeStaticStat<FStat_Stat_IpConnectionInitRemoteConnection>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_IpConnectionInitRemoteConnection");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_IpConnectionInitRemoteConnection,*pFVar1,
               L"IpConnection InitRemoteConnection","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_IpNetDriverAddNewConnection'' @ 14144d900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_IpNetDriverAddNewConnection__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_IpNetDriverAddNewConnection ==
      (FThreadSafeStaticStat<FStat_Stat_IpNetDriverAddNewConnection>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_IpNetDriverAddNewConnection");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_IpNetDriverAddNewConnection,*pFVar1,
               L"IpNetDriver Add new connection","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h__Script_OnlineSubsystemUtils_1670597651'' @ 14144d990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h__Script_OnlineSubsystemUtils_1670597651__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h__Script_OnlineSubsystemUtils_4233879932'' @ 14144d9d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h__Script_OnlineSubsystemUtils_4233879932__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h__Script_OnlineSubsystemUtils_772635975'' @ 14144da10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h__Script_OnlineSubsystemUtils_772635975__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h__Script_OnlineSubsystemUtils_1849178252'' @ 14144da50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h__Script_OnlineSubsystemUtils_1849178252__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h__Script_OnlineSubsystemUtils_2878507016'' @ 14144da90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h__Script_OnlineSubsystemUtils_2878507016__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h__Script_OnlineSubsystemUtils_1839301150'' @ 14144dad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h__Script_OnlineSubsystemUtils_1839301150__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h__Script_OnlineSubsystemUtils_2526014381'' @ 14144db10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h__Script_OnlineSubsystemUtils_2526014381__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h__Script_OnlineSubsystemUtils_4096662376'' @ 14144db50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h__Script_OnlineSubsystemUtils_4096662376__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndTurnCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h__Script_OnlineSubsystemUtils_3627940318'' @ 14144db90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h__Script_OnlineSubsystemUtils_3627940318__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h__Script_OnlineSubsystemUtils_3577489648'' @ 14144dbe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h__Script_OnlineSubsystemUtils_3577489648__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h__Script_OnlineSubsystemUtils_3281889361'' @ 14144dc20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h__Script_OnlineSubsystemUtils_3281889361__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h__Script_OnlineSubsystemUtils_2388040069'' @ 14144dc70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h__Script_OnlineSubsystemUtils_2388040069__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h__Script_OnlineSubsystemUtils_710416970'' @ 14144dcb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h__Script_OnlineSubsystemUtils_710416970__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h__Script_OnlineSubsystemUtils_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h__Script_OnlineSubsystemUtils_3722146252'' @ 14144dd00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h__Script_OnlineSubsystemUtils_3722146252__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h__Script_OnlineSubsystemUtils_1638048177'' @ 14144dd40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h__Script_OnlineSubsystemUtils_1638048177__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h__Script_OnlineSubsystemUtils_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h__Script_OnlineSubsystemUtils_2991728039'' @ 14144dd90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h__Script_OnlineSubsystemUtils_2991728039__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseReceiptsCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h__Script_OnlineSubsystemUtils_3868697363'' @ 14144ddd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h__Script_OnlineSubsystemUtils_3868697363__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h__Script_OnlineSubsystemUtils_1218729655'' @ 14144de20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h__Script_OnlineSubsystemUtils_1218729655__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpConnection_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h__Script_OnlineSubsystemUtils_45698125'' @ 14144de60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h__Script_OnlineSubsystemUtils_45698125__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h__Script_OnlineSubsystemUtils_3696306623'' @ 14144dea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h__Script_OnlineSubsystemUtils_3696306623__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h__Script_OnlineSubsystemUtils_3179126500'' @ 14144dee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h__Script_OnlineSubsystemUtils_3179126500__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h__Script_OnlineSubsystemUtils_1593641474'' @ 14144df20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h__Script_OnlineSubsystemUtils_1593641474__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h__Script_OnlineSubsystemUtils_217800511'' @ 14144df60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h__Script_OnlineSubsystemUtils_217800511__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h__Script_OnlineSubsystemUtils_2123443175'' @ 14144dfa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h__Script_OnlineSubsystemUtils_2123443175__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h__Script_OnlineSubsystemUtils_722915036'' @ 14144dfe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h__Script_OnlineSubsystemUtils_722915036__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h__Script_OnlineSubsystemUtils_3841877099'' @ 14144e020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h__Script_OnlineSubsystemUtils_3841877099__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h__Script_OnlineSubsystemUtils_2924257279'' @ 14144e060

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h__Script_OnlineSubsystemUtils_2924257279__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIEConfig_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h__Script_OnlineSubsystemUtils_1914153387'' @ 14144e0a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h__Script_OnlineSubsystemUtils_1914153387__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h__Script_OnlineSubsystemUtils_4149441563'' @ 14144e0e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h__Script_OnlineSubsystemUtils_4149441563__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineAccountStoredCredentials_h__Script_OnlineSubsystemUtils_1085612700'' @ 14144e120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineAccountStoredCredentials_h__Script_OnlineSubsystemUtils_1085612700__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineAccountStoredCredentials_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h__Script_OnlineSubsystemUtils_2805579578'' @ 14144e160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h__Script_OnlineSubsystemUtils_2805579578__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h__Script_OnlineSubsystemUtils_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h__Script_OnlineSubsystemUtils_2727413415'' @ 14144e1b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h__Script_OnlineSubsystemUtils_2727413415__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h__Script_OnlineSubsystemUtils_3192483771'' @ 14144e1f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h__Script_OnlineSubsystemUtils_3192483771__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHost_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconReservation_h__Script_OnlineSubsystemUtils_3587574702'' @ 14144e230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconReservation_h__Script_OnlineSubsystemUtils_3587574702__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconReservation_h__Script_OnlineSubsystemUtils_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h__Script_OnlineSubsystemUtils_1932600297'' @ 14144e270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h__Script_OnlineSubsystemUtils_1932600297__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h__Script_OnlineSubsystemUtils_2425023597'' @ 14144e2b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h__Script_OnlineSubsystemUtils_2425023597__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h__Script_OnlineSubsystemUtils_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_OnlineSubsystemUtils'' @ 14144e300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_OnlineSubsystemUtils__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xb8d5ddc6;
  local_res8[0].DeclarationsHash = 0x388282c6;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_OnlineSubsystemUtils,L"/Script/OnlineSubsystemUtils",
             &Z_Registration_Info_UPackage__Script_OnlineSubsystemUtils,local_res8);
  return;
}

// NewProp_bReuseAddressAndPort_SetBit @ 14ec425f0

void __cdecl
Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bReuseAddressAndPort_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 1;
  return;
}

// NewProp_bAuthRequired_SetBit @ 14ec42600

void __cdecl
Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_bAuthRequired_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f5) = 1;
  return;
}

// Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch @ 14ec42670

UFunction * __cdecl Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UJoinSessionCallbackProxy_NoRegister @ 14ec42710

UClass * __cdecl Z_Construct_UClass_UJoinSessionCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"JoinSessionCallbackProxy",
               &Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton,
               UJoinSessionCallbackProxy::StaticRegisterNativesUJoinSessionCallbackProxy,0x1b0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UJoinSessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UJoinSessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UJoinSessionCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UJoinSessionCallbackProxy @ 14ec42920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UJoinSessionCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton;
}

// Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession @ 14ec42960

UFunction * __cdecl Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UOnlineEngineInterfaceImpl @ 14ec42a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlineEngineInterfaceImpl(void)

{
  if (Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton,
               &Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton;
}

// Z_Construct_UClass_AOnlineBeacon @ 14ec42aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AOnlineBeacon(void)

{
  if (Z_Registration_Info_UClass_AOnlineBeacon.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AOnlineBeacon.OuterSingleton,
               &Z_Construct_UClass_AOnlineBeacon_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AOnlineBeacon.OuterSingleton;
}

// NewProp_bOnlineServicesCompatibilityEnabled_SetBit @ 14ec42ae0

void __cdecl
Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::
NewProp_bOnlineServicesCompatibilityEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x188) = 1;
  return;
}

// Z_Construct_UClass_UOnlineSessionClient @ 14ec42af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlineSessionClient(void)

{
  if (Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton,
               &Z_Construct_UClass_UOnlineSessionClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlineSessionClient.OuterSingleton;
}

// NewProp_bIsFromInvite_SetBit @ 14ec42b30

void __cdecl
Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x200) = 1;
  return;
}

// NewProp_bHandlingDisconnect_SetBit @ 14ec42b40

void __cdecl
Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x201) = 1;
  return;
}

// Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore @ 14ec42bb0

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UConnectionCallbackProxy_NoRegister @ 14ec42d30

UClass * __cdecl Z_Construct_UClass_UConnectionCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"ConnectionCallbackProxy",
               &Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton,
               UConnectionCallbackProxy::StaticRegisterNativesUConnectionCallbackProxy,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UConnectionCallbackProxy>,
               InternalVTableHelperCtorCaller<UConnectionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConnectionCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_APartyBeaconClient @ 14ec42df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APartyBeaconClient(void)

{
  if (Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton,
               &Z_Construct_UClass_APartyBeaconClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APartyBeaconClient.OuterSingleton;
}

// Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType @ 14ec42e30

UEnum * __cdecl Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType(void)

{
  if (Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton,
               &Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EClientRequestType.InnerSingleton;
}

// EClientRequestType_StaticEnum @ 14ec42e70

UEnum * __cdecl EClientRequestType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType,(UObject *)pUVar1,
                       L"EClientRequestType");
  }
  return Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton;
}

// Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse @ 14ec43030

UFunction * __cdecl Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse @ 14ec430a0

UFunction * __cdecl Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull @ 14ec43100

UFunction * __cdecl Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AOnlineBeaconClient_NoRegister @ 14ec43140

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconClient",
               &Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton,
               AOnlineBeaconClient::StaticRegisterNativesAOnlineBeaconClient,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconClient>,
               InternalVTableHelperCtorCaller<AOnlineBeaconClient>,local_res8,
               AOnlineBeacon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton;
}

// Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates @ 14ec434e0

UFunction * __cdecl Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14ec43680

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,IPNetDriverInternal::<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,IPNetDriverInternal::<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials @ 14ec436b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOnlineAccountStoredCredentials.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOnlineAccountStoredCredentials.InnerSingleton,
               &Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOnlineAccountStoredCredentials.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOnlineAccountStoredCredentials.InnerSingleton;
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

// Z_Construct_UPackage__Script_OnlineSubsystemUtils @ 14ec43730

UPackage * __cdecl Z_Construct_UPackage__Script_OnlineSubsystemUtils(void)

{
  if (Z_Registration_Info_UPackage__Script_OnlineSubsystemUtils.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_OnlineSubsystemUtils.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_OnlineSubsystemUtils.OuterSingleton;
}

// NewStructOps @ 14ec43770

void * __cdecl Z_Construct_UScriptStruct_FOnlineAccountStoredCredentials_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOnlineAccountStoredCredentials,&UE::CoreUObject::Private::Construct<FOnlineAccountStoredCredentials>,&UE::CoreUObject::Private::ConstructForTests<FOnlineAccountStoredCredentials>,&UE::CoreUObject::Private::Destruct<FOnlineAccountStoredCredentials>,&UE::CoreUObject::Private::Copy<FOnlineAccountStoredCredentials>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ec439d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,IPNetDriverInternal::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,IPNetDriverInternal::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest @ 14ec43a00

UFunction * __cdecl
Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ServerAddOrUpdateReservationRequest_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister @ 14ec43a40

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconHostObject",
               &Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton,
               AOnlineBeaconHostObject::StaticRegisterNativesAOnlineBeaconHostObject,0x2e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconHostObject>,
               InternalVTableHelperCtorCaller<AOnlineBeaconHostObject>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconHostObject.InnerSingleton;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14ec43bb4

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FTestSessionInterface::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FTestSessionInterface::_vector_deleting_destructor__adjustor_24__
          (FTestSessionInterface *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FTestSessionInterface *)&this[-1].CachedSessionResult.PingInMs,param_1);
  return pvVar1;
}

// Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest @ 14ec43bd0

UFunction * __cdecl Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bAllowCrossplay_SetBit @ 14ec43c50

void __cdecl
Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UClass_UConnectionCallbackProxy @ 14ec43c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UConnectionCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UConnectionCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UConnectionCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UConnectionCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UConnectionCallbackProxy.OuterSingleton;
}

// NewStructOps @ 14ec43ca0

void * __cdecl Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPlayerReservation,&UE::CoreUObject::Private::Construct<FPlayerReservation>,&UE::CoreUObject::Private::ConstructForTests<FPlayerReservation>,&UE::CoreUObject::Private::Destruct<FPlayerReservation>,&UE::CoreUObject::Private::Copy<FPlayerReservation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_NoRegister @ 14ec43ce0

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseCheckoutCallbackProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton,
               UInAppPurchaseCheckoutCallbackProxy::
               StaticRegisterNativesUInAppPurchaseCheckoutCallbackProxy,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseCheckoutCallbackProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseCheckoutCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_ULeaderboardBlueprintLibrary @ 14ec43d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULeaderboardBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14ec43dd0

void __cdecl
Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest @ 14ec43de0

UFunction * __cdecl
Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14ec43e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FTestSessionInterface::_scalar_deleting_destructor_(FTestSessionInterface *this,uint param_1)

{
  ~FTestSessionInterface(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x428);
  }
  return this;
}

// Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger @ 14ec43e60

UFunction * __cdecl Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService @ 14ec43ea0

UFunction * __cdecl Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UConnectionCallbackProxy_ConnectToService_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest @ 14ec43f90

UFunction * __cdecl Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteCompleteDelegate__DelegateSignature @ 14ec43fd0

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteCompleteDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteCompleteDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature @ 14ec44010

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature @ 14ec44050

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature @ 14ec44090

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature @ 14ec440d0

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature @ 14ec44110

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature @ 14ec44150

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature @ 14ec44190

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineConnectionResult__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature @ 14ec441d0

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature @ 14ec44210

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature @ 14ec44250

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppReceiptsResult__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature @ 14ec44290

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest @ 14ec442d0

UFunction * __cdecl Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPendingReservationSent_SetBit @ 14ec443d0

void __cdecl
Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x409) = 1;
  return;
}

// NewProp_bCancelReservation_SetBit @ 14ec443e0

void __cdecl
Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40a) = 1;
  return;
}

// Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy @ 14ec443f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.OuterSingleton;
}

// Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister @ 14ec44430

UClass * __cdecl Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardFlushCallbackProxy",
               &Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton,
               ULeaderboardFlushCallbackProxy::StaticRegisterNativesULeaderboardFlushCallbackProxy,
               0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULeaderboardFlushCallbackProxy>,
               InternalVTableHelperCtorCaller<ULeaderboardFlushCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.InnerSingleton;
}

// Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout @ 14ec444e0

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCreateSessionCallbackProxy_NoRegister @ 14ec445d0

UClass * __cdecl Z_Construct_UClass_UCreateSessionCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"CreateSessionCallbackProxy",
               &Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton,
               UCreateSessionCallbackProxy::StaticRegisterNativesUCreateSessionCallbackProxy,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCreateSessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UCreateSessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCreateSessionCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_ULeaderboardFlushCallbackProxy @ 14ec44800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULeaderboardFlushCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton;
}

// Z_Construct_UClass_UIpNetDriver @ 14ec44840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIpNetDriver(void)

{
  if (Z_Registration_Info_UClass_UIpNetDriver.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIpNetDriver.OuterSingleton,
               &Z_Construct_UClass_UIpNetDriver_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIpNetDriver.OuterSingleton;
}

// NewProp_LogPortUnreach_SetBit @ 14ec44880

void __cdecl Z_Construct_UClass_UIpNetDriver_Statics::NewProp_LogPortUnreach_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa58) = *(uint *)((longlong)param_1 + 0xa58) | 1;
  return;
}

// NewProp_AllowPlayerPortUnreach_SetBit @ 14ec44890

void __cdecl
Z_Construct_UClass_UIpNetDriver_Statics::NewProp_AllowPlayerPortUnreach_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa58) = *(uint *)((longlong)param_1 + 0xa58) | 2;
  return;
}

// NewProp_bExitOnBindFailure_SetBit @ 14ec448a0

void __cdecl
Z_Construct_UClass_UIpNetDriver_Statics::NewProp_bExitOnBindFailure_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xa58) = *(uint *)((longlong)param_1 + 0xa58) | 4;
  return;
}

// Z_Construct_UClass_UOnlinePIEConfig @ 14ec448b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlinePIEConfig(void)

{
  if (Z_Registration_Info_UClass_UOnlinePIEConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlinePIEConfig.OuterSingleton,
               &Z_Construct_UClass_UOnlinePIEConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlinePIEConfig.OuterSingleton;
}

// Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush @ 14ec448f0

UFunction * __cdecl
Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14ec44c10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestIdentityInterface,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestIdentityInterface,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec45130

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestIdentityInterface,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestIdentityInterface,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewProp_bIsConsumable_SetBit @ 14ec45160

void __cdecl
Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14ec45170

void * __cdecl Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInAppPurchaseProductRequest2,&UE::CoreUObject::Private::Construct<FInAppPurchaseProductRequest2>,&UE::CoreUObject::Private::ConstructForTests<FInAppPurchaseProductRequest2>,&UE::CoreUObject::Private::Destruct<FInAppPurchaseProductRequest2>,&UE::CoreUObject::Private::Copy<FInAppPurchaseProductRequest2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ec454a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestEntitlementsInterface,void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestEntitlementsInterface,void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister @ 14ec454d0

UClass * __cdecl Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardQueryCallbackProxy",
               &Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton,
               ULeaderboardQueryCallbackProxy::StaticRegisterNativesULeaderboardQueryCallbackProxy,
               0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULeaderboardQueryCallbackProxy>,
               InternalVTableHelperCtorCaller<ULeaderboardQueryCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.InnerSingleton;
}

// EInAppPurchaseStatus_StaticEnum @ 14ec45580

UEnum * __cdecl EInAppPurchaseStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus,(UObject *)pUVar1
                       ,L"EInAppPurchaseStatus");
  }
  return Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ec45920

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestAchievementsInterface,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestAchievementsInterface,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewStructOps @ 14ec45950

void * __cdecl Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInAppPurchaseReceiptInfo2,&UE::CoreUObject::Private::Construct<FInAppPurchaseReceiptInfo2>,&UE::CoreUObject::Private::ConstructForTests<FInAppPurchaseReceiptInfo2>,&UE::CoreUObject::Private::Destruct<FInAppPurchaseReceiptInfo2>,&UE::CoreUObject::Private::Copy<FInAppPurchaseReceiptInfo2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ec45990

void * __thiscall
IBaseDelegateInstance<void___cdecl(FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec459e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec45cc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestAchievementsInterface,void___cdecl(FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestAchievementsInterface,void___cdecl(FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_ULeaderboardQueryCallbackProxy @ 14ec45cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULeaderboardQueryCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton;
}

// Z_Construct_UClass_UInAppPurchaseFinalizeProxy_NoRegister @ 14ec45d30

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseFinalizeProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseFinalizeProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton,
               UInAppPurchaseFinalizeProxy::StaticRegisterNativesUInAppPurchaseFinalizeProxy,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInAppPurchaseFinalizeProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseFinalizeProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.InnerSingleton;
}

// Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery @ 14ec45e90

UFunction * __cdecl
Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInAppPurchaseFinalizeProxy @ 14ec45ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseFinalizeProxy(void)

{
  if (Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton,
               &Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton;
}

// Z_Construct_UClass_UCreateSessionCallbackProxy @ 14ec45f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCreateSessionCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UCreateSessionCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCreateSessionCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCreateSessionCallbackProxy.OuterSingleton;
}

// Z_Construct_UClass_UOnlinePIESettings @ 14ec45f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlinePIESettings(void)

{
  if (Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton,
               &Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton;
}

// Z_Construct_UClass_UAchievementBlueprintLibrary @ 14ec45f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAchievementBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UAchievementBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAchievementBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UAchievementBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAchievementBlueprintLibrary.OuterSingleton;
}

// NewProp_bUseLAN_SetBit @ 14ec45fd0

void __cdecl
Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_bUseLAN_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize @ 14ec45fe0

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseLobbiesIfAvailable_SetBit @ 14ec46020

void __cdecl
Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::
NewProp_bUseLobbiesIfAvailable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewProp_bOnlinePIEEnabled_SetBit @ 14ec46030

void __cdecl
Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bFoundID_SetBit @ 14ec46040

void __cdecl
Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::
NewProp_bFoundID_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bHidden_SetBit @ 14ec46050

void __cdecl
Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::
NewProp_bHidden_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession @ 14ec46060

UFunction * __cdecl Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription @ 14ec460a0

UFunction * __cdecl
Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bFoundID_SetBit @ 14ec460e0

void __cdecl
Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::
NewProp_bFoundID_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister @ 14ec460f0

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseQueryCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton,
               UInAppPurchaseQueryCallbackProxy2::
               StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseQueryCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseQueryCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.InnerSingleton;
}

// Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress @ 14ec461a0

UFunction * __cdecl
Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AOnlineBeaconHostObject @ 14ec462e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconHostObject(void)

{
  if (Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton,
               &Z_Construct_UClass_AOnlineBeaconHostObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton;
}

// Z_Construct_UClass_UDestroySessionCallbackProxy_NoRegister @ 14ec46320

UClass * __cdecl Z_Construct_UClass_UDestroySessionCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"DestroySessionCallbackProxy",
               &Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton,
               UDestroySessionCallbackProxy::StaticRegisterNativesUDestroySessionCallbackProxy,0x90,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDestroySessionCallbackProxy>,
               InternalVTableHelperCtorCaller<UDestroySessionCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDestroySessionCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_ULogoutCallbackProxy_NoRegister @ 14ec464a0

UClass * __cdecl Z_Construct_UClass_ULogoutCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LogoutCallbackProxy",
               &Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton,
               ULogoutCallbackProxy::StaticRegisterNativesULogoutCallbackProxy,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULogoutCallbackProxy>,
               InternalVTableHelperCtorCaller<ULogoutCallbackProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULogoutCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UDestroySessionCallbackProxy @ 14ec46560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDestroySessionCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton;
}

// Z_Construct_UClass_AOnlineBeaconClient @ 14ec46660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconClient(void)

{
  if (Z_Registration_Info_UClass_AOnlineBeaconClient.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AOnlineBeaconClient.OuterSingleton,
               &Z_Construct_UClass_AOnlineBeaconClient_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconClient.OuterSingleton;
}

// Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState @ 14ec466a0

UEnum * __cdecl Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState(void)

{
  if (Z_Registration_Info_UEnum_EBeaconConnectionState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBeaconConnectionState.InnerSingleton,
               &Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBeaconConnectionState.InnerSingleton;
}

// EBeaconConnectionState_StaticEnum @ 14ec466e0

UEnum * __cdecl EBeaconConnectionState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState,
                       (UObject *)pUVar1,L"EBeaconConnectionState");
  }
  return Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton;
}

// Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession @ 14ec46720

UFunction * __cdecl Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected @ 14ec46760

UFunction * __cdecl Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ULogoutCallbackProxy @ 14ec467a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULogoutCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_ULogoutCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULogoutCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_ULogoutCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULogoutCallbackProxy.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ec467e0

void * __thiscall
FTestCloudInterface::_scalar_deleting_destructor_(FTestCloudInterface *this,uint param_1)

{
  ~FTestCloudInterface(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// Z_Construct_UFunction_ULogoutCallbackProxy_Logout @ 14ec46820

UFunction * __cdecl Z_Construct_UFunction_ULogoutCallbackProxy_Logout(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister @ 14ec46860

UClass * __cdecl Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"EndMatchCallbackProxy",
               &Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton,
               UEndMatchCallbackProxy::StaticRegisterNativesUEndMatchCallbackProxy,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEndMatchCallbackProxy>,
               InternalVTableHelperCtorCaller<UEndMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndMatchCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl @ 14ec46a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl(void)

{
  if (Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton,
               &Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton;
}

// Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2 @ 14ec46ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2(void)

{
  if (Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton,
               &Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton;
}

// Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType @ 14ec46b10

UEnum * __cdecl Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType(void)

{
  if (Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton,
               &Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FOnlineProxyStoreOffer @ 14ec46b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOnlineProxyStoreOffer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOnlineProxyStoreOffer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOnlineProxyStoreOffer.InnerSingleton,
               &Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOnlineProxyStoreOffer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOnlineProxyStoreOffer.InnerSingleton;
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

// EOnlineProxyStoreOfferDiscountType_StaticEnum @ 14ec46bd0

UEnum * __cdecl EOnlineProxyStoreOfferDiscountType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType,
                       (UObject *)pUVar1,L"EOnlineProxyStoreOfferDiscountType");
  }
  return Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton;
}

// NewStructOps @ 14ec46c10

void * __cdecl Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOnlineProxyStoreOffer,&UE::CoreUObject::Private::Construct<FOnlineProxyStoreOffer>,&UE::CoreUObject::Private::ConstructForTests<FOnlineProxyStoreOffer>,&UE::CoreUObject::Private::Destruct<FOnlineProxyStoreOffer>,&UE::CoreUObject::Private::Copy<FOnlineProxyStoreOffer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister @ 14ec46c50

UClass * __cdecl Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementQueryCallbackProxy",
               &Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton,
               UAchievementQueryCallbackProxy::StaticRegisterNativesUAchievementQueryCallbackProxy,
               0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAchievementQueryCallbackProxy>,
               InternalVTableHelperCtorCaller<UAchievementQueryCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.InnerSingleton;
}

// Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery @ 14ec46dd0

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAchievementQueryCallbackProxy @ 14ec46e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAchievementQueryCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton;
}

// Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions @ 14ec46e50

UFunction * __cdecl
Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements @ 14ec46e90

UFunction * __cdecl Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEndTurnCallbackProxy @ 14ec46f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEndTurnCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UEndTurnCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEndTurnCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UEndTurnCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEndTurnCallbackProxy.OuterSingleton;
}

// Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn @ 14ec46fd0

UFunction * __cdecl Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEndTurnCallbackProxy_EndTurn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14ec47010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FTestPresenceInterface::_scalar_deleting_destructor_(FTestPresenceInterface *this,uint param_1)

{
  ~FTestPresenceInterface(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister @ 14ec47050

UClass * __cdecl Z_Construct_UClass_UAchievementWriteCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementWriteCallbackProxy",
               &Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton,
               UAchievementWriteCallbackProxy::StaticRegisterNativesUAchievementWriteCallbackProxy,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAchievementWriteCallbackProxy>,
               InternalVTableHelperCtorCaller<UAchievementWriteCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister @ 14ec47110

UClass * __cdecl Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"FindSessionsCallbackProxy",
               &Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton,
               UFindSessionsCallbackProxy::StaticRegisterNativesUFindSessionsCallbackProxy,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFindSessionsCallbackProxy>,
               InternalVTableHelperCtorCaller<UFindSessionsCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFindSessionsCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UAchievementWriteCallbackProxy @ 14ec47390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAchievementWriteCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAchievementWriteCallbackProxy.OuterSingleton;
}

// Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister @ 14ec47450

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton,
               UInAppPurchaseCallbackProxy2::StaticRegisterNativesUInAppPurchaseCallbackProxy2,0xc0,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInAppPurchaseCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.InnerSingleton;
}

// Z_Construct_UClass_UEndMatchCallbackProxy @ 14ec47540

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEndMatchCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UEndMatchCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEndMatchCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UEndMatchCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEndMatchCallbackProxy.OuterSingleton;
}

// Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteProgress @ 14ec47640

UFunction * __cdecl Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteProgress(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAchievementWriteCallbackProxy_WriteProgress_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch @ 14ec47740

UFunction * __cdecl Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister @ 14ec47780

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseReceiptsCallbackProxy",
               &Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton,
               UInAppPurchaseReceiptsCallbackProxy::
               StaticRegisterNativesUInAppPurchaseReceiptsCallbackProxy,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseReceiptsCallbackProxy>,
               InternalVTableHelperCtorCaller<UInAppPurchaseReceiptsCallbackProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.InnerSingleton;
}

// Z_Construct_UClass_UFindSessionsCallbackProxy @ 14ec478e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFindSessionsCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBlueprintSessionResult @ 14ec47920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintSessionResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintSessionResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintSessionResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintSessionResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintSessionResult.InnerSingleton;
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

// NewStructOps @ 14ec479a0

void * __cdecl Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintSessionResult,&UE::CoreUObject::Private::Construct<FBlueprintSessionResult>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintSessionResult>,&UE::CoreUObject::Private::Destruct<FBlueprintSessionResult>,&UE::CoreUObject::Private::Copy<FBlueprintSessionResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy @ 14ec479e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UInAppPurchaseReceiptsCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseReceiptsCallbackProxy.OuterSingleton;
}

// Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts @ 14ec47b80

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseGetKnownReceipts_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIpConnection @ 14ec47bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIpConnection(void)

{
  if (Z_Registration_Info_UClass_UIpConnection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIpConnection.OuterSingleton,
               &Z_Construct_UClass_UIpConnection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIpConnection.OuterSingleton;
}

// Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts @ 14ec47c00

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseQueryOwnedProducts_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UEndTurnCallbackProxy_NoRegister @ 14ec47c40

UClass * __cdecl Z_Construct_UClass_UEndTurnCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"EndTurnCallbackProxy",
               &Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton,
               UEndTurnCallbackProxy::StaticRegisterNativesUEndTurnCallbackProxy,0x88,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UEndTurnCallbackProxy>,
               InternalVTableHelperCtorCaller<UEndTurnCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEndTurnCallbackProxy.InnerSingleton;
}

// NewProp_bUseLAN_SetBit @ 14ec47dc0

void __cdecl
Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// NewProp_bUseLobbies_SetBit @ 14ec47dd0

void __cdecl
Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLobbies_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts @ 14ec47de0

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseReceiptsCallbackProxy_CreateProxyObjectForInAppPurchaseRestoreOwnedProducts_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions @ 14ec47e20

UFunction * __cdecl Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers @ 14ec47fa0

UFunction * __cdecl Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers @ 14ec48060

UFunction * __cdecl Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs @ 14ec480a0

UFunction * __cdecl Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName @ 14ec48140

UFunction * __cdecl Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister @ 14ec483f0

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"InAppPurchaseRestoreCallbackProxy2",
               &Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton,
               UInAppPurchaseRestoreCallbackProxy2::
               StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInAppPurchaseRestoreCallbackProxy2>,
               InternalVTableHelperCtorCaller<UInAppPurchaseRestoreCallbackProxy2>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.InnerSingleton;
}

// Z_Construct_UClass_UInAppPurchaseCallbackProxy2 @ 14ec484e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseCallbackProxy2(void)

{
  if (Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.OuterSingleton,
               &Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseCallbackProxy2.OuterSingleton;
}

// Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus @ 14ec48520

UEnum * __cdecl Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus(void)

{
  if (Z_Registration_Info_UEnum_EInAppPurchaseStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInAppPurchaseStatus.InnerSingleton,
               &Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInAppPurchaseStatus.InnerSingleton;
}

// Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2 @ 14ec48560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseProductRequest2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInAppPurchaseProductRequest2.InnerSingleton,
               &Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseProductRequest2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInAppPurchaseProductRequest2.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2 @ 14ec485e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseReceiptInfo2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInAppPurchaseReceiptInfo2.InnerSingleton,
               &Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseReceiptInfo2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInAppPurchaseReceiptInfo2.InnerSingleton;
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

// NewStructOps @ 14ec48660

void * __cdecl Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInAppPurchaseProductInfo2,&UE::CoreUObject::Private::Construct<FInAppPurchaseProductInfo2>,&UE::CoreUObject::Private::ConstructForTests<FInAppPurchaseProductInfo2>,&UE::CoreUObject::Private::Destruct<FInAppPurchaseProductInfo2>,&UE::CoreUObject::Private::Copy<FInAppPurchaseProductInfo2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister @ 14ec486a0

UClass * __cdecl Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"FindTurnBasedMatchCallbackProxy",
               &Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton,
               UFindTurnBasedMatchCallbackProxy::
               StaticRegisterNativesUFindTurnBasedMatchCallbackProxy,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFindTurnBasedMatchCallbackProxy>,
               InternalVTableHelperCtorCaller<UFindTurnBasedMatchCallbackProxy>,local_res8,
               UOnlineBlueprintCallProxyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.InnerSingleton;
}

// Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase @ 14ec48a50

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned @ 14ec48a90

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2 @ 14ec48b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2(void)

{
  if (Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton,
               &Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton;
}

// Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2 @ 14ec48bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseRestoreInfo2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInAppPurchaseRestoreInfo2.InnerSingleton,
               &Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseRestoreInfo2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInAppPurchaseRestoreInfo2.InnerSingleton;
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

// NewStructOps @ 14ec48c50

void * __cdecl Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInAppPurchaseRestoreInfo2,&UE::CoreUObject::Private::Construct<FInAppPurchaseRestoreInfo2>,&UE::CoreUObject::Private::ConstructForTests<FInAppPurchaseRestoreInfo2>,&UE::CoreUObject::Private::Destruct<FInAppPurchaseRestoreInfo2>,&UE::CoreUObject::Private::Copy<FInAppPurchaseRestoreInfo2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases @ 14ec48c90

UFunction * __cdecl
Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy @ 14ec48cd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy(void)

{
  if (Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.OuterSingleton,
               &Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFindTurnBasedMatchCallbackProxy.OuterSingleton;
}

// Z_Construct_UClass_AOnlineBeaconHost @ 14ec48d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconHost(void)

{
  if (Z_Registration_Info_UClass_AOnlineBeaconHost.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AOnlineBeaconHost.OuterSingleton,
               &Z_Construct_UClass_AOnlineBeaconHost_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconHost.OuterSingleton;
}

// NewProp_ShowExistingMatches_SetBit @ 14ec48d50

void __cdecl
Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::
NewProp_ShowExistingMatches_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// <lambda_invoker_cdecl> @ 14ec48d60

void __cdecl
<lambda_26>::<lambda_invoker_cdecl>(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  <lambda_26> local_res10 [24];
  
  operator()(local_res10,param_1);
  return;
}

// <lambda_invoker_cdecl> @ 14ec48d80

void __cdecl
<lambda_27>::<lambda_invoker_cdecl>(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  <lambda_27> local_res10 [24];
  
  operator()(local_res10,param_1);
  return;
}

// Add<`UE::Online::FOnlineServicesEngineUtils::OnOnlineServicesCreated'::__l8::<lambda_1>_> @ 14ec493c0

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>::
Add<_UE::Online::FOnlineServicesEngineUtils::OnOnlineServicesCreated_::__l8::<lambda_1>_>
          (TOnlineEventCallable<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,<lambda_1> *param_1)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ulong64 *puVar6;
  FDelegateHandle FVar7;
  undefined1 local_res8 [8];
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  FVar7.ID = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFExternalUIStatusChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy,`UE::Online::FOnlineServicesEngineUtils::OnOnlineServicesCreated'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = param_1->__this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FReadAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        FVar7.ID = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar3 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      (this_00->InvocationList).ArrayNum = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((this_00->InvocationList).AllocatorInstance.Data + (longlong)iVar3 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
      goto LAB_14ec49515;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
LAB_14ec49515:
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>
            (__return_storage_ptr__,FVar7,&this->DelegateRef);
  return __return_storage_ptr__;
}

// Add<`UE::Online::FOnlineServicesEngineUtils::SetEngineExternalUIBinding'::__l9::<lambda_1>_> @ 14ec495d0

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>::
Add<_UE::Online::FOnlineServicesEngineUtils::SetEngineExternalUIBinding_::__l9::<lambda_1>_>
          (TOnlineEventCallable<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,<lambda_1> *param_1)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  ulong64 *puVar6;
  FDelegateHandle FVar7;
  undefined1 local_res8 [8];
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  FVar7.ID = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFExternalUIStatusChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy,`UE::Online::FOnlineServicesEngineUtils::SetEngineExternalUIBinding'::`9'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = param_1->__this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FReadAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FReadAccessScope *)&local_48);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar6 = (ulong64 *)
                 (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                           (local_70.DelegateAllocator,local_res8);
        FVar7.ID = *puVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      iVar3 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar3 == *piVar1) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      (this_00->InvocationList).ArrayNum = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((this_00->InvocationList).AllocatorInstance.Data + (longlong)iVar3 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
      goto LAB_14ec49725;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
LAB_14ec49725:
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>
            (__return_storage_ptr__,FVar7,&this->DelegateRef);
  return __return_storage_ptr__;
}

// AutoRTFMFunctorInvoker<`UIpConnection::LowLevelSend'::__l32::<lambda_1>_> @ 14ec49fa0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_UIpConnection::LowLevelSend_::__l32::<lambda_1>_>(void *param_1)

{
  UIpConnection *this;
  void *_Src;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  size_t _Size;
  ForAnyElementType local_48;
  undefined8 local_40;
  UIpConnection *local_38;
  FScriptContainerElement *local_30;
  uint local_28;
  undefined4 local_24;
  int local_20;
  FOutPacketTraits local_1c;
  
  this = *(UIpConnection **)((longlong)param_1 + 0x18);
  _Src = (void *)**(undefined8 **)((longlong)param_1 + 8);
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = (int)(**(int **)param_1 + 7 + (**(int **)param_1 + 7 >> 0x1f & 7U)) >> 3;
  _Size = (size_t)(int)(uint)local_40;
  if ((int)(uint)local_40 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_40);
  }
  if ((_Src == (void *)0x0) && ((uint)local_40 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x2d3,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((uint)local_40 == 0) {
    local_24 = 0;
    local_28 = (uint)local_40;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(uint)local_40,0,&local_48,(uint)local_40,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,_Src,_Size);
    local_24 = local_40._4_4_;
    local_28 = (uint)local_40;
  }
  FVar2.Data = local_48.Data;
  local_30 = local_48.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_20 = **(int **)param_1;
  local_1c._0_8_ = **(undefined8 **)((longlong)param_1 + 0x10);
  local_1c._8_8_ = (*(undefined8 **)((longlong)param_1 + 0x10))[1];
  local_38 = this;
  UIpConnection::SendToRemote(this,(uchar *)FVar2.Data,local_20,&local_1c);
  if (local_30 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// CastChecked<AOnlineBeaconClient,AActor> @ 14ec4a120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconClient * __cdecl CastChecked<AOnlineBeaconClient,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (AOnlineBeaconClient *)0x0;
    }
    pFVar3 = GetTypeName<AOnlineBeaconClient>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AOnlineBeaconClient::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AOnlineBeaconClient *)param_1;
  }
  pFVar3 = GetTypeName<AOnlineBeaconClient>(&local_28);
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

// CastChecked<UIpConnection,UNetConnection> @ 14ec4a200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UIpConnection * __cdecl CastChecked<UIpConnection,UNetConnection>(UNetConnection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetConnection *)0x0) {
    pFVar3 = GetTypeName<UIpConnection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UIpConnection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UIpConnection *)param_1;
  }
  pFVar3 = GetTypeName<UIpConnection>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNetConnection>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FBlueprintSessionResult,FBlueprintSessionResult,int> @ 14ec4a2c0

void __cdecl
ConstructItems<FBlueprintSessionResult,FBlueprintSessionResult,int>
          (void *param_1,FBlueprintSessionResult *param_2,int param_3)

{
  undefined4 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FSharedReferencer<1> *pFVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    pFVar4 = &(param_2->OnlineResult).Session.OwningUserId.SharedReferenceCount;
    plVar5 = (longlong *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)pFVar4 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FOnlineSession__6B_;
      plVar5[-1] = (longlong)((TSharedPtr<FUniqueNetId_const_,1> *)(pFVar4 + -1))->Object;
      pTVar2 = pFVar4->ReferenceController;
      *plVar5 = (longlong)pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      FString::FString((FString *)(plVar5 + 1),(FString *)(pFVar4 + 1));
      FOnlineSessionSettings::FOnlineSessionSettings
                ((FOnlineSessionSettings *)(plVar5 + 3),(FOnlineSessionSettings *)(pFVar4 + 3));
      plVar5[0x1e] = *(longlong *)(pFVar4 + 0x1e);
      lVar3 = *(longlong *)(pFVar4 + 0x1f);
      plVar5[0x1f] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar5 + 0x20) = *(undefined4 *)(pFVar4 + 0x20);
      *(undefined4 *)((longlong)plVar5 + 0x104) = *(undefined4 *)((longlong)(pFVar4 + 0x20) + 4);
      puVar1 = (undefined4 *)(pFVar4 + 0x21);
      pFVar4 = pFVar4 + 0x24;
      *(undefined4 *)(plVar5 + 0x21) = *puVar1;
      plVar5 = plVar5 + 0x24;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInAppPurchaseReceiptInfo2,FInAppPurchaseReceiptInfo2,int> @ 14ec4a3c0

void __cdecl
ConstructItems<FInAppPurchaseReceiptInfo2,FInAppPurchaseReceiptInfo2,int>
          (void *param_1,FInAppPurchaseReceiptInfo2 *param_2,int param_3)

{
  FString *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->ValidationInfo;
    this = (FString *)((longlong)param_1 + 0x20);
    do {
      FString::FString(this + -2,
                       (FString *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)this)
                      );
      FString::FString(this + -1,pFVar1 + -1);
      FString::FString(this,pFVar1);
      FString::FString(this + 1,pFVar1 + 1);
      pFVar1 = pFVar1 + 4;
      this = this + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInAppPurchaseRestoreInfo2,FInAppPurchaseRestoreInfo2,int> @ 14ec4a450

void __cdecl
ConstructItems<FInAppPurchaseRestoreInfo2,FInAppPurchaseRestoreInfo2,int>
          (void *param_1,FInAppPurchaseRestoreInfo2 *param_2,int param_3)

{
  FString *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->ValidationInfo;
    this = (FString *)((longlong)param_1 + 0x20);
    do {
      FString::FString(this + -2,
                       (FString *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)this)
                      );
      FString::FString(this + -1,pFVar1 + -1);
      FString::FString(this,pFVar1);
      pFVar1 = pFVar1 + 3;
      this = this + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FOnlineProxyStoreOffer,FOnlineProxyStoreOffer,int> @ 14ec4a4d0

void __cdecl
ConstructItems<FOnlineProxyStoreOffer,FOnlineProxyStoreOffer,int>
          (void *param_1,FOnlineProxyStoreOffer *param_2,int param_3)

{
  ITextData *pIVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [8];
  
  if (param_3 != 0) {
    plVar3 = (longlong *)((longlong)param_1 + 0x10);
    puVar4 = &(param_2->Title).Flags;
    do {
      FString::FString((FString *)
                       ((longlong)puVar4 + (longlong)param_1 + (-0x18 - (longlong)param_2)),
                       (FString *)(puVar4 + -6));
      *plVar3 = 0;
      pIVar1 = (((FText *)(puVar4 + -2))->TextData).Reference;
      *plVar3 = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      *(uint *)(plVar3 + 1) = *puVar4;
      plVar3[2] = 0;
      plVar2 = *(longlong **)(puVar4 + 2);
      plVar3[2] = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_res20);
      }
      *(uint *)(plVar3 + 3) = puVar4[4];
      plVar3[4] = 0;
      plVar2 = *(longlong **)(puVar4 + 6);
      plVar3[4] = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_28);
      }
      *(uint *)(plVar3 + 5) = puVar4[8];
      plVar3[6] = 0;
      plVar2 = *(longlong **)(puVar4 + 10);
      plVar3[6] = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_24);
      }
      *(uint *)(plVar3 + 7) = puVar4[0xc];
      *(uint *)(plVar3 + 8) = puVar4[0xe];
      plVar3[9] = 0;
      plVar2 = *(longlong **)(puVar4 + 0x10);
      plVar3[9] = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_20);
      }
      *(uint *)(plVar3 + 10) = puVar4[0x12];
      *(uint *)(plVar3 + 0xb) = puVar4[0x14];
      FString::FString((FString *)(plVar3 + 0xc),(FString *)(puVar4 + 0x16));
      plVar3[0xe] = *(longlong *)(puVar4 + 0x1a);
      plVar3[0xf] = *(longlong *)(puVar4 + 0x1c);
      *(undefined1 *)(plVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x1e);
      *(undefined8 *)
       &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          *)(plVar3 + 0x11))->Elements = 0;
      plVar3[0x12] = 0;
      plVar3[0x15] = 0;
      *(undefined4 *)(plVar3 + 0x16) = 0;
      *(undefined4 *)((longlong)plVar3 + 0xb4) = 0x80;
      *(undefined4 *)(plVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)((longlong)plVar3 + 0xbc) = 0;
      plVar3[0x19] = 0;
      *(undefined4 *)(plVar3 + 0x1a) = 0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(plVar3 + 0x11),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(puVar4 + 0x20));
      plVar3 = plVar3 + 0x1d;
      puVar4 = puVar4 + 0x3a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPlayerReservation,FPlayerReservation,int> @ 14ec4a680

void __cdecl
ConstructItems<FPlayerReservation,FPlayerReservation,int>
          (void *param_1,FPlayerReservation *param_2,int param_3)

{
  bool *pbVar1;
  undefined8 *puVar2;
  FString *pFVar3;
  
  if (param_3 != 0) {
    pFVar3 = &param_2->ValidationStr;
    puVar2 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      *(undefined ***)((longlong)pFVar3 + (longlong)param_1 + (-0x30 - (longlong)param_2)) =
           &___7FUniqueNetIdWrapper__6B_;
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
      ::
      TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                  *)(puVar2 + -3),
                 (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                  *)&(((FPlayerReservation *)(pFVar3 + -3))->UniqueId)._padding_);
      *(undefined ***)((longlong)pFVar3 + (longlong)param_1 + (-0x30 - (longlong)param_2)) =
           &___7FUniqueNetIdRepl__6B_;
      *puVar2 = 0;
      puVar2[1] = 0;
      FString::FString((FString *)(puVar2 + 2),pFVar3);
      FString::FString((FString *)(puVar2 + 4),pFVar3 + 1);
      *(bool *)(puVar2 + 6) = *(bool *)(pFVar3 + 2);
      pbVar1 = (bool *)(pFVar3 + 2);
      pFVar3 = (FString *)((longlong)(pFVar3 + 5) + 8);
      *(float *)((longlong)puVar2 + 0x34) = *(float *)(pbVar1 + 4);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0xb;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FInAppPurchaseReceiptInfo2,int> @ 14ec4a850

void __cdecl DefaultConstructItems<FInAppPurchaseReceiptInfo2,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      lVar1 = lVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FInAppPurchaseRestoreInfo2,int> @ 14ec4a890

void __cdecl DefaultConstructItems<FInAppPurchaseRestoreInfo2,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPurchaseReceipt::FLineItemInfo,int> @ 14ec4a8d0

void __cdecl DefaultConstructItems<FPurchaseReceipt::FLineItemInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FLineItemInfo_FPurchaseReceipt__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPurchaseReceipt::FReceiptOfferEntry,int> @ 14ec4a910

void __cdecl
DefaultConstructItems<FPurchaseReceipt::FReceiptOfferEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FReceiptOfferEntry_FPurchaseReceipt__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UIpNetDriver::FAggregatedIP,int> @ 14ec4ada0

void __cdecl DestructItems<UIpNetDriver::FAggregatedIP,int>(FAggregatedIP *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->IPStr;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBlueprintSessionResult,int> @ 14ec4ade0

void __cdecl
DestructItems<FBlueprintSessionResult,int>(FBlueprintSessionResult *param_1,int param_2)

{
  void *pvVar1;
  FOnlineSessionSettings *this;
  
  if (param_2 != 0) {
    this = &(param_1->OnlineResult).Session.SessionSettings;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[1].NumPublicConnections);
      FOnlineSessionSettings::~FOnlineSessionSettings(this);
      pvVar1 = *(void **)&this[-1].MemberSettings.field_0x40;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-1].MemberSettings.field_0x38);
      this = (FOnlineSessionSettings *)&this[1].Settings.field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInAppPurchaseProductRequest2,int> @ 14ec4ae40

void __cdecl
DestructItems<FInAppPurchaseProductRequest2,int>(FInAppPurchaseProductRequest2 *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ProductIdentifier).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FInAppPurchaseReceiptInfo2,int> @ 14ec4ae80

void __cdecl
DestructItems<FInAppPurchaseReceiptInfo2,int>(FInAppPurchaseReceiptInfo2 *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ValidationInfo;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FInAppPurchaseReceiptInfo2 *)(pFVar2 + -2))->ItemName).Data.AllocatorInstance.Data
      ;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInAppPurchaseRestoreInfo2,int> @ 14ec4aef0

void __cdecl
DestructItems<FInAppPurchaseRestoreInfo2,int>(FInAppPurchaseRestoreInfo2 *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ItemId;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FInAppPurchaseRestoreInfo2 *)(pFVar2 + -1))->ItemName).Data.AllocatorInstance.Data
      ;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOnlineAccountStoredCredentials,int> @ 14ec4af50

void __cdecl
DestructItems<FOnlineAccountStoredCredentials,int>
          (FOnlineAccountStoredCredentials *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Type;
    do {
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FOnlineAccountStoredCredentials *)(pFVar2 + -2))->Id).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOnlineProxyStoreOffer,int> @ 14ec4afc0

void __cdecl DestructItems<FOnlineProxyStoreOffer,int>(FOnlineProxyStoreOffer *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->DynamicFields).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-0xd] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xd]);
      }
      if ((longlong *)puVar1[-0x10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-0x10] + 0x10))();
      }
      if ((longlong *)puVar1[-0x13] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-0x13] + 0x10))();
      }
      if ((longlong *)puVar1[-0x15] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-0x15] + 0x10))();
      }
      if ((longlong *)puVar1[-0x17] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-0x17] + 0x10))();
      }
      if ((longlong *)puVar1[-0x19] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[-0x19] + 0x10))();
      }
      if ((void *)puVar1[-0x1b] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x1b]);
      }
      puVar1 = puVar1 + 0x1d;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPlayerReservation,int> @ 14ec4b0a0

void __cdecl DestructItems<FPlayerReservation,int>(FPlayerReservation *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ValidationStr;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)(pFVar2 + -3));
      pFVar2 = (FString *)((longlong)(pFVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UIpNetDriver::FReceivedPacket,int> @ 14ec4b100

void __cdecl DestructItems<UIpNetDriver::FReceivedPacket,int>(FReceivedPacket *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->FromAddress).SharedReferenceCount.ReferenceController);
    pFVar1 = (param_1->PacketBytes).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FSocket,1>,int> @ 14ec4b150

void __cdecl DestructItems<TSharedPtr<FSocket,1>,int>(TSharedPtr<FSocket,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FSharedContentHandle,1>,int> @ 14ec4b190

void __cdecl
DestructItems<TSharedRef<FSharedContentHandle,1>,int>
          (TSharedRef<FSharedContentHandle,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<UE::Online::IOnlineServices,1>,int> @ 14ec4b1d0

void __cdecl
DestructItems<TSharedRef<UE::Online::IOnlineServices,1>,int>
          (TSharedRef<UE::Online::IOnlineServices,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Online::FOnlineEventDelegateHandle,int> @ 14ec4b210

void __cdecl
DestructItems<UE::Online::FOnlineEventDelegateHandle,int>
          (FOnlineEventDelegateHandle *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong *plStack_10;
  
  uVar7 = uStack_30;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uStack_30 = uVar7;
    if (*(void **)&param_1->DelegateUnbinder != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->DelegateUnbinder);
      plVar9 = *(longlong **)&(param_1->DelegateUnbinder).field_0x28;
      pcVar1 = *(code **)&param_1->DelegateUnbinder;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)&(param_1->DelegateUnbinder).field_0x10;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar1)(uVar8);
      lVar6 = *(longlong *)&param_1->DelegateUnbinder;
      uStack_30 = *(undefined8 *)&(param_1->DelegateUnbinder).field_0x8;
      uVar2 = *(undefined4 *)&(param_1->DelegateUnbinder).field_0x10;
      uVar3 = *(undefined4 *)&(param_1->DelegateUnbinder).field_0x14;
      uVar4 = *(undefined4 *)&(param_1->DelegateUnbinder).field_0x18;
      uVar5 = *(undefined4 *)&(param_1->DelegateUnbinder).field_0x1c;
      uVar8 = *(undefined8 *)&(param_1->DelegateUnbinder).field_0x20;
      plStack_10 = *(longlong **)&(param_1->DelegateUnbinder).field_0x28;
      *(undefined8 *)&param_1->DelegateUnbinder = 0;
      *(undefined8 *)&(param_1->DelegateUnbinder).field_0x8 = uVar7;
      *(undefined4 *)&(param_1->DelegateUnbinder).field_0x10 = local_28;
      *(undefined4 *)&(param_1->DelegateUnbinder).field_0x14 = uStack_24;
      *(undefined4 *)&(param_1->DelegateUnbinder).field_0x18 = uStack_20;
      *(undefined4 *)&(param_1->DelegateUnbinder).field_0x1c = uStack_1c;
      *(undefined4 *)&(param_1->DelegateUnbinder).field_0x20 = (undefined4)local_18;
      *(undefined4 *)&(param_1->DelegateUnbinder).field_0x24 = local_18._4_4_;
      *(undefined4 *)&(param_1->DelegateUnbinder).field_0x28 = 0;
      *(undefined4 *)&(param_1->DelegateUnbinder).field_0x2c = 0;
      local_28 = uVar2;
      uStack_24 = uVar3;
      uStack_20 = uVar4;
      uStack_1c = uVar5;
      local_18 = uVar8;
      if (lVar6 != 0) {
        plVar9 = (longlong *)&local_28;
        if (plStack_10 != (longlong *)0x0) {
          plVar9 = plStack_10;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    if (*(longlong *)&param_1->DelegateUnbinder != 0) {
      plVar9 = *(longlong **)&(param_1->DelegateUnbinder).field_0x28;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)&(param_1->DelegateUnbinder).field_0x10;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    param_1 = param_1 + 1;
    uVar7 = uStack_30;
  }
  return;
}

// DestructItems<FOnlineSessionSearchResult,int> @ 14ec4b310

void __cdecl
DestructItems<FOnlineSessionSearchResult,int>(FOnlineSessionSearchResult *param_1,int param_2)

{
  void *pvVar1;
  FOnlineSessionSettings *this;
  
  if (param_2 != 0) {
    this = &(param_1->Session).SessionSettings;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[1].NumPublicConnections);
      FOnlineSessionSettings::~FOnlineSessionSettings(this);
      pvVar1 = *(void **)&this[-1].MemberSettings.field_0x40;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-1].MemberSettings.field_0x38);
      this = (FOnlineSessionSettings *)&this[1].Settings.field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<AOnlineBeaconClient> @ 14ec4c4d0

FString * __cdecl GetTypeName<AOnlineBeaconClient>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AOnlineBeaconClient::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UIpConnection> @ 14ec4c510

FString * __cdecl GetTypeName<UIpConnection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UIpConnection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<AOnlineBeacon> @ 14ec4c550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AOnlineBeacon>(FObjectInitializer *param_1)

{
  if ((AOnlineBeacon *)param_1->Obj != (AOnlineBeacon *)0x0) {
    AOnlineBeacon::AOnlineBeacon((AOnlineBeacon *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AOnlineBeaconClient> @ 14ec4c570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AOnlineBeaconClient>(FObjectInitializer *param_1)

{
  if ((AOnlineBeaconClient *)param_1->Obj != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AOnlineBeaconHost> @ 14ec4c590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AOnlineBeaconHost>(FObjectInitializer *param_1)

{
  AOnlineBeacon *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = (AOnlineBeacon *)param_1->Obj;
  if (this != (AOnlineBeacon *)0x0) {
    AOnlineBeacon::AOnlineBeacon(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    this->_padding_ = (longlong)&AOnlineBeaconHost::_vftable__for__AActor__;
    *(undefined4 *)&this[1]._padding_ = 0x400;
    this->_padding_ = (longlong)&AOnlineBeaconHost::_vftable__for__FNetworkNotify__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    pFVar1 = FName::FName(local_res8,L"BeaconDriverHost");
    this->_padding_ = (longlong)*pFVar1;
  }
  return;
}

// InternalConstructor<AOnlineBeaconHostObject> @ 14ec4c6e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AOnlineBeaconHostObject>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AOnlineBeaconHostObject__6B_;
    FString::FString((FString *)(this + 1),L"UNDEFINED");
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<APartyBeaconClient> @ 14ec4c740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<APartyBeaconClient>(FObjectInitializer *param_1)

{
  AOnlineBeaconClient *this;
  
  this = (AOnlineBeaconClient *)param_1->Obj;
  if (this != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient(this,param_1);
    this->_padding_ = (longlong)&APartyBeaconClient::_vftable__for__AActor__;
    this->_padding_ = (longlong)&APartyBeaconClient::_vftable__for__FNetworkNotify__;
    this[1]._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAchievementBlueprintLibrary> @ 14ec4c860

void __cdecl InternalConstructor<UAchievementBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAchievementBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UAchievementQueryCallbackProxy> @ 14ec4c890

void __cdecl InternalConstructor<UAchievementQueryCallbackProxy>(FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase *this;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UAchievementQueryCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UAchievementWriteCallbackProxy> @ 14ec4c8f0

void __cdecl InternalConstructor<UAchievementWriteCallbackProxy>(FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase *this;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UAchievementWriteCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UConnectionCallbackProxy> @ 14ec4c960

void __cdecl InternalConstructor<UConnectionCallbackProxy>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UOnlineBlueprintCallProxyBase *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  UOnlineBlueprintCallProxyBase *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    puVar1 = &this[2].field_0x10;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined ***)this = &___7UConnectionCallbackProxy__6B_;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this[2].field_0x8,
               (FWriteAccessScope *)&local_28);
    local_10 = puVar1;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUConnectionCallbackProxy____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = UConnectionCallbackProxy::OnLoginCompleted;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// InternalConstructor<UCreateSessionCallbackProxy> @ 14ec4ca90

void __cdecl InternalConstructor<UCreateSessionCallbackProxy>(FObjectInitializer *param_1)

{
  UCreateSessionCallbackProxy *this;
  
  this = (UCreateSessionCallbackProxy *)param_1->Obj;
  if (this != (UCreateSessionCallbackProxy *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
              ((UOnlineBlueprintCallProxyBase *)this,param_1);
    this->_padding_ = (longlong)&___7UCreateSessionCallbackProxy__6B_;
    *(undefined8 *)&this->OnSuccess = 0;
    *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
    *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
    *(undefined8 *)&this->OnFailure = 0;
    *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
    *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
    (this->PlayerControllerWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
    TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
    CreateUObject<UCreateSessionCallbackProxy>
              (&this->CreateCompleteDelegate,this,(pmf_f83ca02e)0x14ec86af0);
    TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
    CreateUObject<UCreateSessionCallbackProxy>
              (&this->StartCompleteDelegate,this,(pmf_f83ca02e)0x14ec8aa80);
    (this->CreateCompleteDelegateHandle).ID = 0;
    (this->StartCompleteDelegateHandle).ID = 0;
    this->NumPublicConnections = 1;
  }
  return;
}

// InternalConstructor<UDestroySessionCallbackProxy> @ 14ec4cb30

void __cdecl InternalConstructor<UDestroySessionCallbackProxy>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UOnlineBlueprintCallProxyBase *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  UOnlineBlueprintCallProxyBase *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    puVar1 = &this[2].field_0x10;
    *(undefined ***)this = &___7UDestroySessionCallbackProxy__6B_;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this[2].field_0x8,
               (FWriteAccessScope *)&local_28);
    local_10 = puVar1;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDestroySessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = UDestroySessionCallbackProxy::OnCompleted;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    *(undefined8 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UEndMatchCallbackProxy> @ 14ec4cc60

void __cdecl InternalConstructor<UEndMatchCallbackProxy>(FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase *this;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UEndMatchCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UEndTurnCallbackProxy> @ 14ec4ccc0

void __cdecl InternalConstructor<UEndTurnCallbackProxy>(FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase *this;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UEndTurnCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UFindSessionsCallbackProxy> @ 14ec4cd20

void __cdecl InternalConstructor<UFindSessionsCallbackProxy>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UOnlineBlueprintCallProxyBase *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  UOnlineBlueprintCallProxyBase *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    puVar1 = &this[2].field_0x10;
    *(undefined ***)this = &___7UFindSessionsCallbackProxy__6B_;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this[2].field_0x8,
               (FWriteAccessScope *)&local_28);
    local_10 = puVar1;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUFindSessionsCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = UFindSessionsCallbackProxy::OnCompleted;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    this[3].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UFindTurnBasedMatchCallbackProxy> @ 14ec4ce60

void __cdecl InternalConstructor<UFindTurnBasedMatchCallbackProxy>(FObjectInitializer *param_1)

{
  UOnlineBlueprintCallProxyBase *this;
  FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *pFVar1;
  FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *pFVar2;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    pFVar2 = (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *)0x0;
    *(undefined ***)this = &___7UFindTurnBasedMatchCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    pFVar1 = operator_new(0x30);
    if (pFVar1 != (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *)0x0) {
      pFVar1->_padding_ = 0;
      pFVar1->_padding_ = (longlong)&___7FFindTurnBasedMatchCallbackProxyMatchmakerDelegate__6B_;
      pFVar1->_padding_ = 0;
      pFVar1->FindTurnBasedMatchCallbackProxy = (UFindTurnBasedMatchCallbackProxy *)0x0;
      (pFVar1->TurnBasedInterface).Object = (IOnlineTurnBased *)0x0;
      (pFVar1->TurnBasedInterface).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar2 = pFVar1;
    }
    TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1>::
    TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1><FFindTurnBasedMatchCallbackProxyMatchmakerDelegate>
              ((TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1> *)
               &this[2].field_0x28,pFVar2);
  }
  return;
}

// InternalConstructor<UInAppPurchaseCallbackProxy2> @ 14ec4cf00

void __cdecl InternalConstructor<UInAppPurchaseCallbackProxy2>(FObjectInitializer *param_1)

{
  UObject *this;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInAppPurchaseCallbackProxy2__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x4 = 0;
    this[3].field_0xc = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10[0] = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
    *(int *)&this[3].field_0x4 = local_res8.ObjectIndex;
    *(int *)&this[3].field_0x8 = local_res8.ObjectSerialNumber;
    this[3].field_0xc = 0;
    this[4].field_0x18 = 1;
  }
  return;
}

// InternalConstructor<UInAppPurchaseCheckoutCallbackProxy> @ 14ec4cfc0

void __cdecl InternalConstructor<UInAppPurchaseCheckoutCallbackProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[4].field_0x8 = 1;
    *(undefined ***)this = &___7UInAppPurchaseCheckoutCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined1 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<UInAppPurchaseFinalizeProxy> @ 14ec4d020

void __cdecl InternalConstructor<UInAppPurchaseFinalizeProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInAppPurchaseFinalizeProxy__6B_;
  }
  return;
}

// InternalConstructor<UInAppPurchaseQueryCallbackProxy2> @ 14ec4d050

void __cdecl InternalConstructor<UInAppPurchaseQueryCallbackProxy2>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInAppPurchaseQueryCallbackProxy2__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UInAppPurchaseReceiptsCallbackProxy> @ 14ec4d0b0

void __cdecl InternalConstructor<UInAppPurchaseReceiptsCallbackProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[3].field_0x20 = 1;
    *(undefined ***)this = &___7UInAppPurchaseReceiptsCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UInAppPurchaseRestoreCallbackProxy2> @ 14ec4d130

void __cdecl InternalConstructor<UInAppPurchaseRestoreCallbackProxy2>(FObjectInitializer *param_1)

{
  UObject *this;
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInAppPurchaseRestoreCallbackProxy2__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined1 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10[0] = 0;
    *(undefined ***)&this[3].field_0x10 = &___7FUniqueNetIdRepl__6B_;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
    *(int *)&this[2].field_0xc = local_res8.ObjectIndex;
    *(int *)&this[2].field_0x10 = local_res8.ObjectSerialNumber;
  }
  return;
}

// InternalConstructor<UIpConnection> @ 14ec4d1f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UIpConnection>(FObjectInitializer *param_1)

{
  UNetConnection *this;
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  this = (UNetConnection *)param_1->Obj;
  if (this != (UNetConnection *)0x0) {
    UNetConnection::UNetConnection(this,param_1);
    this->_padding_ = (longlong)&UIpConnection::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UIpConnection::_vftable__for__FExec__;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    puVar5 = (undefined8 *)0x0;
    *(undefined4 *)((longlong)&this[1].PackageMap.field0_0x0 + 4) = 0x40a00000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Children.ArrayNum = 0;
    this[1].Children.ArrayMax = 0;
    this[1].Driver.field0_0x0.DebugPtr = (UNetDriver *)0x0;
    this[1].PackageMapClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    *(undefined4 *)&this[1].PackageMap.field0_0x0 = 0;
    this[1].OpenChannels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].OpenChannels.ArrayNum = 0;
    this[1].OpenChannels.ArrayMax = 0;
    *(undefined4 *)&this[1].SentTemporaries.AllocatorInstance.Data = 0;
    this[1].SentTemporaries.ArrayNum = 0;
    this[1].SentTemporaries.ArrayMax = 0;
    *(undefined4 *)&this[1].ViewTarget.field0_0x0 = 0;
    puVar3 = operator_new(0x60);
    puVar4 = puVar5;
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = UE::Core::Private::PimplPtr::
                DeleterFunc<UE::Net::Private::FNetConnectionAddressResolution>;
      *(undefined2 *)((longlong)puVar3 + 0x55) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x57) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      *(undefined4 *)(puVar3 + 10) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x54) = 0;
      puVar4 = puVar3;
    }
    this[1].OwningActor.field0_0x0.DebugPtr = (AActor *)(puVar4 + 2);
    pTVar1 = CVarNetIpConnectionDisableResolution.Ref;
    bVar2 = IsInParallelGameThread();
    if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
      puVar5 = (undefined8 *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + (longlong)puVar5) != 0) {
      *(undefined1 *)
       ((longlong)&((this[1].OwningActor.field0_0x0.DebugPtr)->PrimaryActorTick)._padding_ + 4) = 1;
    }
  }
  return;
}

// InternalConstructor<UIpNetDriver> @ 14ec4d350

void __cdecl InternalConstructor<UIpNetDriver>(FObjectInitializer *param_1)

{
  if ((UIpNetDriver *)param_1->Obj != (UIpNetDriver *)0x0) {
    UIpNetDriver::UIpNetDriver((UIpNetDriver *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UJoinSessionCallbackProxy> @ 14ec4d370

void __cdecl InternalConstructor<UJoinSessionCallbackProxy>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UOnlineBlueprintCallProxyBase *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  UOnlineBlueprintCallProxyBase *local_res8;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this = (UOnlineBlueprintCallProxyBase *)param_1->Obj;
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UJoinSessionCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)&this[2].field_0x8 = &___7FOnlineSession__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)(this + 3));
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    puVar1 = &this[8].field_0x10;
    *(undefined8 *)&this[7].field_0x28 = 0;
    *(undefined4 *)(this + 8) = 9999;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&this[8].field_0x18 = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this[8].field_0x8,
               (FWriteAccessScope *)&local_28);
    local_10 = puVar1;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUJoinSessionCallbackProxy____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = UJoinSessionCallbackProxy::OnCompleted;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    *(undefined8 *)&this[8].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<ULeaderboardBlueprintLibrary> @ 14ec4d4f0

void __cdecl InternalConstructor<ULeaderboardBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7ULeaderboardBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<ULeaderboardFlushCallbackProxy> @ 14ec4d520

void __cdecl InternalConstructor<ULeaderboardFlushCallbackProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULeaderboardFlushCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<ULeaderboardQueryCallbackProxy> @ 14ec4d580

void __cdecl InternalConstructor<ULeaderboardQueryCallbackProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULeaderboardQueryCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULogoutCallbackProxy> @ 14ec4d600

void __cdecl InternalConstructor<ULogoutCallbackProxy>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7ULogoutCallbackProxy__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UOnlineEngineInterfaceImpl> @ 14ec4d660

void __cdecl InternalConstructor<UOnlineEngineInterfaceImpl>(FObjectInitializer *param_1)

{
  UOnlineEngineInterface *this;
  
  this = (UOnlineEngineInterface *)param_1->Obj;
  if (this != (UOnlineEngineInterface *)0x0) {
    UOnlineEngineInterface::UOnlineEngineInterface(this,param_1);
    *(undefined ***)this = &___7UOnlineEngineInterfaceImpl__6B_;
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
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    *(undefined4 *)&this[4].field_0x24 = 0x80;
    *(undefined4 *)(this + 5) = 0xffffffff;
    *(undefined4 *)&this[5].field_0x4 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined4 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
    *(undefined4 *)&this[6].field_0x24 = 0x80;
    *(undefined4 *)(this + 7) = 0xffffffff;
    *(undefined4 *)&this[7].field_0x4 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined4 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined4 *)&this[8].field_0x20 = 0;
    *(undefined4 *)&this[8].field_0x24 = 0x80;
    *(undefined4 *)(this + 9) = 0xffffffff;
    *(undefined4 *)&this[9].field_0x4 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0;
    *(undefined4 *)&this[9].field_0x18 = 0;
    this[9].field_0x20 = 0;
    *(undefined8 *)(this + 10) = 0;
  }
  return;
}

// InternalConstructor<UOnlinePIEConfig> @ 14ec4d7b0

void __cdecl InternalConstructor<UOnlinePIEConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOnlinePIEConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UOnlinePIESettings> @ 14ec4d7f0

void __cdecl InternalConstructor<UOnlinePIESettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UOnlinePIESettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    pFVar1 = FName::FName(local_res8,L"LevelEditor");
    this->CategoryName = *pFVar1;
  }
  return;
}

// InternalConstructor<UOnlineServicesEngineInterfaceImpl> @ 14ec4d850

void __cdecl InternalConstructor<UOnlineServicesEngineInterfaceImpl>(FObjectInitializer *param_1)

{
  UOnlineEngineInterface *this;
  
  this = (UOnlineEngineInterface *)param_1->Obj;
  if (this != (UOnlineEngineInterface *)0x0) {
    UOnlineEngineInterface::UOnlineEngineInterface(this,param_1);
    *(undefined ***)this = &___7UOnlineServicesEngineInterfaceImpl__6B_;
  }
  return;
}

// InternalConstructor<UOnlineSessionClient> @ 14ec4d880

void __cdecl InternalConstructor<UOnlineSessionClient>(FObjectInitializer *param_1)

{
  UOnlineSession *this;
  
  this = (UOnlineSession *)param_1->Obj;
  if (this != (UOnlineSession *)0x0) {
    UOnlineSession::UOnlineSession(this,param_1);
    *(undefined ***)this = &___7UOnlineSessionClient__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)&this[5].field_0x18 = &___7FOnlineSession__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)&this[6].field_0x18);
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)&this[0xc].field_0x8 = 0;
    *(undefined8 *)&this[0xc].field_0x10 = 0;
    *(undefined4 *)&this[0xc].field_0x18 = 9999;
    *(undefined2 *)&this[0xc].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AOnlineBeacon> @ 14ec4d9a0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AOnlineBeacon>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AOnlineBeacon::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AOnlineBeacon::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&AOnlineBeacon::_vftable__for__FNetworkNotify__;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AOnlineBeaconClient> @ 14ec4da70

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

UObject * __cdecl InternalVTableHelperCtorCaller<AOnlineBeaconClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconClient *pAVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AOnlineBeaconClient::GetPrivateStaticClass();
  pAVar3 = (AOnlineBeaconClient *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pAVar3 != (AOnlineBeaconClient *)0x0) {
    pAVar3 = AOnlineBeaconClient::AOnlineBeaconClient(pAVar3,param_1);
    return (UObject *)pAVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AOnlineBeaconHost> @ 14ec4db10

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

UObject * __cdecl InternalVTableHelperCtorCaller<AOnlineBeaconHost>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AOnlineBeaconHost::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AOnlineBeaconHost::_vftable__for__AActor__;
    this[1]._padding_ = (longlong)&AOnlineBeaconHost::_vftable__for__FNetworkNotify__;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined2 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0x400;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    this[1].RayTracingGroupId = 0x80;
    *(undefined4 *)&this[1].AttachmentReplication.AttachParent.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].AttachmentReplication.AttachParent.field0_0x0 + 4) = 0;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0;
    *(undefined4 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
    this[1].AttachmentReplication.RotationOffset.Pitch = 0.0;
    this[1].AttachmentReplication.AttachSocket.ComparisonIndex = 0;
    this[1].AttachmentReplication.AttachSocket.Number = 0;
    *(undefined4 *)&this[1].AttachmentReplication.AttachComponent.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].AttachmentReplication.AttachComponent.field0_0x0 + 4) = 0x80;
    *(undefined4 *)&this[1].ReplicatedMovement.LinearVelocity.field0_0x0 = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ReplicatedMovement.LinearVelocity.field0_0x0 + 4) = 0;
    this[1].ReplicatedMovement.LinearVelocity.field0_0x0._s_0.Z = 0.0;
    *(undefined4 *)&this[1].ReplicatedMovement.AngularVelocity.field0_0x0 = 0;
    this[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.Y = 0.0;
    this[1].ReplicatedMovement.AngularVelocity.field0_0x0._s_0.Z = 0.0;
    this[1].ReplicatedMovement.Location.field0_0x0._s_0.Z = 0.0;
    *(undefined4 *)&this[1].ReplicatedMovement.Rotation.Pitch = 0;
    *(undefined4 *)((longlong)&this[1].ReplicatedMovement.Rotation.Pitch + 4) = 0x80;
    *(undefined4 *)&this[1].ReplicatedMovement.Rotation.Yaw = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ReplicatedMovement.Rotation.Yaw + 4) = 0;
    this[1].ReplicatedMovement.Acceleration.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].ReplicatedMovement.Acceleration.field0_0x0 + 8) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AOnlineBeaconHostObject> @ 14ec4dcd0

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

UObject * __cdecl InternalVTableHelperCtorCaller<AOnlineBeaconHostObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AOnlineBeaconHostObject::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AOnlineBeaconHostObject__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<APartyBeaconClient> @ 14ec4dda0

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

UObject * __cdecl InternalVTableHelperCtorCaller<APartyBeaconClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AOnlineBeaconClient *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APartyBeaconClient::GetPrivateStaticClass();
  this = (AOnlineBeaconClient *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AOnlineBeaconClient *)0x0) {
    AOnlineBeaconClient::AOnlineBeaconClient(this,param_1);
    this->_padding_ = (longlong)&APartyBeaconClient::_vftable__for__AActor__;
    this->_padding_ = (longlong)&APartyBeaconClient::_vftable__for__FNetworkNotify__;
    this[1]._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAchievementBlueprintLibrary> @ 14ec4df20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAchievementBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAchievementBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAchievementBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAchievementQueryCallbackProxy> @ 14ec4dfd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAchievementQueryCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAchievementQueryCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UAchievementQueryCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAchievementWriteCallbackProxy> @ 14ec4e0a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAchievementWriteCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAchievementWriteCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UAchievementWriteCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UConnectionCallbackProxy> @ 14ec4e180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UConnectionCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UConnectionCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UConnectionCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCreateSessionCallbackProxy> @ 14ec4e260

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCreateSessionCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCreateSessionCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UCreateSessionCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDestroySessionCallbackProxy> @ 14ec4e360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDestroySessionCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDestroySessionCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UDestroySessionCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEndMatchCallbackProxy> @ 14ec4e440

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEndMatchCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEndMatchCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UEndMatchCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEndTurnCallbackProxy> @ 14ec4e520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEndTurnCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEndTurnCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UEndTurnCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFindSessionsCallbackProxy> @ 14ec4e5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFindSessionsCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFindSessionsCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UFindSessionsCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFindTurnBasedMatchCallbackProxy> @ 14ec4e6e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UFindTurnBasedMatchCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFindTurnBasedMatchCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UFindTurnBasedMatchCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInAppPurchaseCallbackProxy2> @ 14ec4e7c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInAppPurchaseCallbackProxy2>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInAppPurchaseCallbackProxy2::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[3].field_0xc = 0;
    *(undefined ***)pUVar1 = &___7UInAppPurchaseCallbackProxy2__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInAppPurchaseCheckoutCallbackProxy> @ 14ec4e8d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInAppPurchaseCheckoutCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInAppPurchaseCheckoutCallbackProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[4].field_0x8 = 1;
    *(undefined ***)pUVar1 = &___7UInAppPurchaseCheckoutCallbackProxy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined1 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInAppPurchaseFinalizeProxy> @ 14ec4e9b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInAppPurchaseFinalizeProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInAppPurchaseFinalizeProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInAppPurchaseFinalizeProxy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInAppPurchaseQueryCallbackProxy2> @ 14ec4ea60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInAppPurchaseQueryCallbackProxy2>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInAppPurchaseQueryCallbackProxy2::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInAppPurchaseQueryCallbackProxy2__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInAppPurchaseReceiptsCallbackProxy> @ 14ec4eb30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInAppPurchaseReceiptsCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInAppPurchaseReceiptsCallbackProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[3].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UInAppPurchaseReceiptsCallbackProxy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    pUVar1[3].field_0x20 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInAppPurchaseRestoreCallbackProxy2> @ 14ec4ec30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInAppPurchaseRestoreCallbackProxy2>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInAppPurchaseRestoreCallbackProxy2::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInAppPurchaseRestoreCallbackProxy2__6B_;
    *(undefined ***)&pUVar1[3].field_0x10 = &___7FUniqueNetIdRepl__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIpConnection> @ 14ec4ed40

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

UObject * __cdecl InternalVTableHelperCtorCaller<UIpConnection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetConnection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIpConnection::GetPrivateStaticClass();
  this = (UNetConnection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetConnection *)0x0) {
    UNetConnection::UNetConnection(this,param_1);
    this->_padding_ = (longlong)&UIpConnection::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UIpConnection::_vftable__for__FExec__;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(this + 1),4000);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Children.ArrayNum = 0;
    this[1].Children.ArrayMax = 0;
    this[1].Driver.field0_0x0.DebugPtr = (UNetDriver *)0x0;
    this[1].PackageMapClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    *(undefined4 *)&this[1].PackageMap.field0_0x0 = 0;
    *(undefined4 *)&this[1].SentTemporaries.AllocatorInstance.Data = 0;
    this[1].SentTemporaries.ArrayNum = 0;
    this[1].SentTemporaries.ArrayMax = 0;
    *(undefined4 *)&this[1].ViewTarget.field0_0x0 = 0;
    this[1].OwningActor.field0_0x0.DebugPtr = (AActor *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIpNetDriver> @ 14ec4ee70

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

UObject * __cdecl InternalVTableHelperCtorCaller<UIpNetDriver>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNetDriver *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIpNetDriver::GetPrivateStaticClass();
  this = (UNetDriver *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNetDriver *)0x0) {
    UNetDriver::UNetDriver(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UIpNetDriver::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UIpNetDriver::_vftable__for__FExec__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1].NetConnectionClassName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].NetConnectionClassName.Data.ArrayNum = 0;
    this[1].NetConnectionClassName.Data.ArrayMax = 0;
    this[1].ReplicationDriverClassName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ReplicationDriverClassName.Data.ArrayNum = 0;
    this[1].ReplicationDriverClassName.Data.ArrayMax = 0;
    this[1].ReplicationBridgeClassName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined2 *)&this[1].ReplicationBridgeClassName.Data.ArrayNum = 0x100;
    this[1].ReplicationSystemConfigServer.MaxReplicatedObjectCount = 0;
    this[1].ReplicationSystemConfigServer.InitialNetObjectListCount = 0;
    this[1].ReplicationSystemConfigServer.NetObjectListGrowCount = 0;
    this[1].ReplicationSystemConfigServer.PreAllocatedMemoryBuffersObjectCount = 0;
    this[1].ReplicationSystemConfigServer.MaxReplicationWriterObjectCount = 0;
    this[1].ReplicationSystemConfigServer.MaxDeltaCompressedObjectCount = 0;
    this[1].ReplicationSystemConfigServer.MaxNetObjectGroupCount = 0;
    this[1].ReplicationSystemConfigServer.bAllowParallelTasks = false;
    *(undefined3 *)&this[1].ReplicationSystemConfigServer.field_0x1d = 0;
    this[1].ReplicationSystemConfigClient.MaxReplicatedObjectCount = 0;
    this[1].ReplicationSystemConfigClient.InitialNetObjectListCount = 0;
    this[1].ReplicationSystemConfigClient.NetObjectListGrowCount = 0;
    this[1].ReplicationSystemConfigClient.PreAllocatedMemoryBuffersObjectCount = 0;
    this[1].ReplicationSystemConfigClient.MaxReplicationWriterObjectCount = 0;
    this[1].ReplicationSystemConfigClient.MaxDeltaCompressedObjectCount = 0;
    *(undefined1 *)&this[1].ReplicationSystemConfigClient.MaxNetObjectGroupCount = 0;
    *(undefined8 *)&this[1].MaxDownloadSize = 0;
    this[1].NetServerMaxTickRate = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UJoinSessionCallbackProxy> @ 14ec4efb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UJoinSessionCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UOnlineBlueprintCallProxyBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UJoinSessionCallbackProxy::GetPrivateStaticClass();
  this = (UOnlineBlueprintCallProxyBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UOnlineBlueprintCallProxyBase *)0x0) {
    UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase(this,param_1);
    *(undefined ***)this = &___7UJoinSessionCallbackProxy__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)&this[2].field_0x8 = &___7FOnlineSession__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)(this + 3));
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)&this[7].field_0x28 = 0;
    *(undefined4 *)(this + 8) = 9999;
    *(undefined8 *)&this[8].field_0x8 = 0;
    *(undefined8 *)&this[8].field_0x10 = 0;
    *(undefined4 *)&this[8].field_0x18 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULeaderboardBlueprintLibrary> @ 14ec4f0f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULeaderboardBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULeaderboardBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULeaderboardBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULeaderboardFlushCallbackProxy> @ 14ec4f1a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULeaderboardFlushCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULeaderboardFlushCallbackProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULeaderboardFlushCallbackProxy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULeaderboardQueryCallbackProxy> @ 14ec4f280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULeaderboardQueryCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULeaderboardQueryCallbackProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULeaderboardQueryCallbackProxy__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULogoutCallbackProxy> @ 14ec4f380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULogoutCallbackProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULogoutCallbackProxy::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7ULogoutCallbackProxy__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlineEngineInterfaceImpl> @ 14ec4f450

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOnlineEngineInterfaceImpl>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlineEngineInterfaceImpl::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UOnlineEngineInterface::UOnlineEngineInterface((UOnlineEngineInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOnlineEngineInterfaceImpl__6B_;
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
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 5) = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)&pUVar1[6].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 7) = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0x4 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined4 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 9) = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x4 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined4 *)&pUVar1[9].field_0x18 = 0;
    pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlinePIEConfig> @ 14ec4f620

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOnlinePIEConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlinePIEConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOnlinePIEConfig__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlinePIESettings> @ 14ec4f6e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOnlinePIESettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlinePIESettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    this->_padding_ = (longlong)&___7UOnlinePIESettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlineServicesEngineInterfaceImpl> @ 14ec4f7a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOnlineServicesEngineInterfaceImpl>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlineServicesEngineInterfaceImpl::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UOnlineEngineInterface::UOnlineEngineInterface((UOnlineEngineInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOnlineServicesEngineInterfaceImpl__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOnlineSessionClient> @ 14ec4f850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOnlineSessionClient>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOnlineSessionClient::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UOnlineSession::UOnlineSession((UOnlineSession *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOnlineSessionClient__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)&pUVar1[5].field_0x18 = &___7FOnlineSession__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)&pUVar1[6].field_0x18);
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x18 = 9999;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UAchievementQueryCallbackProxy> @ 14ec4f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAchievementQueryCallbackProxy * __cdecl NewObject<UAchievementQueryCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UAchievementQueryCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAchievementQueryCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAchievementQueryCallbackProxy *)
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

// NewObject<UAchievementWriteCallbackProxy> @ 14ec4fa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAchievementWriteCallbackProxy * __cdecl NewObject<UAchievementWriteCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UAchievementWriteCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAchievementWriteCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAchievementWriteCallbackProxy *)
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

// NewObject<UConnectionCallbackProxy> @ 14ec4fb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UConnectionCallbackProxy * __cdecl NewObject<UConnectionCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UConnectionCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UConnectionCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UConnectionCallbackProxy *)
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

// NewObject<UCreateSessionCallbackProxy> @ 14ec4fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCreateSessionCallbackProxy * __cdecl NewObject<UCreateSessionCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UCreateSessionCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCreateSessionCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCreateSessionCallbackProxy *)
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

// NewObject<UDestroySessionCallbackProxy> @ 14ec4fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDestroySessionCallbackProxy * __cdecl NewObject<UDestroySessionCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UDestroySessionCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UDestroySessionCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UDestroySessionCallbackProxy *)
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

// NewObject<UEndMatchCallbackProxy> @ 14ec4fcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEndMatchCallbackProxy * __cdecl NewObject<UEndMatchCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UEndMatchCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UEndMatchCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UEndMatchCallbackProxy *)
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

// NewObject<UEndTurnCallbackProxy> @ 14ec4fd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEndTurnCallbackProxy * __cdecl NewObject<UEndTurnCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UEndTurnCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UEndTurnCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UEndTurnCallbackProxy *)
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

// NewObject<UFindSessionsCallbackProxy> @ 14ec4fe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFindSessionsCallbackProxy * __cdecl NewObject<UFindSessionsCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UFindSessionsCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UFindSessionsCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UFindSessionsCallbackProxy *)
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

// NewObject<UFindTurnBasedMatchCallbackProxy> @ 14ec4fed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFindTurnBasedMatchCallbackProxy * __cdecl
NewObject<UFindTurnBasedMatchCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UFindTurnBasedMatchCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UFindTurnBasedMatchCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UFindTurnBasedMatchCallbackProxy *)
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

// NewObject<UInAppPurchaseCallbackProxy2> @ 14ec4ff70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseCallbackProxy2 * __cdecl NewObject<UInAppPurchaseCallbackProxy2>(UObject *param_1)

{
  UClass *pUVar1;
  UInAppPurchaseCallbackProxy2 *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UInAppPurchaseCallbackProxy2::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInAppPurchaseCallbackProxy2 *)
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

// NewObject<UInAppPurchaseCheckoutCallbackProxy> @ 14ec50010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseCheckoutCallbackProxy * __cdecl
NewObject<UInAppPurchaseCheckoutCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UInAppPurchaseCheckoutCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UInAppPurchaseCheckoutCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInAppPurchaseCheckoutCallbackProxy *)
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

// NewObject<UInAppPurchaseFinalizeProxy> @ 14ec500b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseFinalizeProxy * __cdecl NewObject<UInAppPurchaseFinalizeProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UInAppPurchaseFinalizeProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UInAppPurchaseFinalizeProxy *)pUVar2;
}

// NewObject<UInAppPurchaseQueryCallbackProxy2> @ 14ec50150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseQueryCallbackProxy2 * __cdecl
NewObject<UInAppPurchaseQueryCallbackProxy2>(UObject *param_1)

{
  UClass *pUVar1;
  UInAppPurchaseQueryCallbackProxy2 *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UInAppPurchaseQueryCallbackProxy2::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInAppPurchaseQueryCallbackProxy2 *)
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

// NewObject<UInAppPurchaseReceiptsCallbackProxy> @ 14ec501f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseReceiptsCallbackProxy * __cdecl
NewObject<UInAppPurchaseReceiptsCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UInAppPurchaseReceiptsCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UInAppPurchaseReceiptsCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInAppPurchaseReceiptsCallbackProxy *)
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

// NewObject<UInAppPurchaseRestoreCallbackProxy2> @ 14ec50290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInAppPurchaseRestoreCallbackProxy2 * __cdecl
NewObject<UInAppPurchaseRestoreCallbackProxy2>(UObject *param_1)

{
  UClass *pUVar1;
  UInAppPurchaseRestoreCallbackProxy2 *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UInAppPurchaseRestoreCallbackProxy2::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UInAppPurchaseRestoreCallbackProxy2 *)
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

// NewObject<UIpConnection> @ 14ec50330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UIpConnection * __cdecl
NewObject<UIpConnection>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UIpConnection *pUVar2;
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
  pUVar1 = UIpConnection::StaticClass();
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
  pUVar2 = (UIpConnection *)
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

// NewObject<UJoinSessionCallbackProxy> @ 14ec50430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UJoinSessionCallbackProxy * __cdecl NewObject<UJoinSessionCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UJoinSessionCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UJoinSessionCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UJoinSessionCallbackProxy *)
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

// NewObject<ULeaderboardFlushCallbackProxy> @ 14ec504d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULeaderboardFlushCallbackProxy * __cdecl NewObject<ULeaderboardFlushCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  ULeaderboardFlushCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = ULeaderboardFlushCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULeaderboardFlushCallbackProxy *)
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

// NewObject<ULeaderboardQueryCallbackProxy> @ 14ec50570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULeaderboardQueryCallbackProxy * __cdecl NewObject<ULeaderboardQueryCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  ULeaderboardQueryCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = ULeaderboardQueryCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULeaderboardQueryCallbackProxy *)
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

// NewObject<ULogoutCallbackProxy> @ 14ec50610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULogoutCallbackProxy * __cdecl NewObject<ULogoutCallbackProxy>(UObject *param_1)

{
  UClass *pUVar1;
  ULogoutCallbackProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = ULogoutCallbackProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULogoutCallbackProxy *)
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

// NewObject<USoundWaveProcedural> @ 14ec506b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundWaveProcedural * __cdecl NewObject<USoundWaveProcedural>(UObject *param_1)

{
  UClass *pUVar1;
  USoundWaveProcedural *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_USoundWaveProcedural_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (USoundWaveProcedural *)
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

// NewObject<UVoipListenerSynthComponent> @ 14ec50750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UVoipListenerSynthComponent * __cdecl NewObject<UVoipListenerSynthComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UVoipListenerSynthComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UVoipListenerSynthComponent *)
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

// StaticEnum<enum_EBeaconConnectionState> @ 14ec50e10

UEnum * __cdecl StaticEnum<enum_EBeaconConnectionState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState,
                       (UObject *)pUVar1,L"EBeaconConnectionState");
  }
  return Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton;
}

// StaticEnum<enum_EClientRequestType> @ 14ec50e50

UEnum * __cdecl StaticEnum<enum_EClientRequestType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType,(UObject *)pUVar1,
                       L"EClientRequestType");
  }
  return Z_Registration_Info_UEnum_EClientRequestType.OuterSingleton;
}

// StaticEnum<enum_EInAppPurchaseStatus> @ 14ec50e90

UEnum * __cdecl StaticEnum<enum_EInAppPurchaseStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus,(UObject *)pUVar1
                       ,L"EInAppPurchaseStatus");
  }
  return Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton;
}

// StaticEnum<enum_EOnlineProxyStoreOfferDiscountType> @ 14ec50ed0

UEnum * __cdecl StaticEnum<enum_EOnlineProxyStoreOfferDiscountType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType,
                       (UObject *)pUVar1,L"EOnlineProxyStoreOfferDiscountType");
  }
  return Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton;
}

// TransformIf<TArray<UObject_*,TSizedDefaultAllocator<32>_>,TArray<AOnlineBeaconClient_*,TSizedDefaultAllocator<32>_>_&,FOnlineBeaconClientFilter,`GetFilteredOnlineBeaconClientInstances'::__l2::<lambda_1>_> @ 14ec50f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
Algo::
TransformIf<TArray<UObject_*,TSizedDefaultAllocator<32>_>,TArray<AOnlineBeaconClient_*,TSizedDefaultAllocator<32>_>_&,FOnlineBeaconClientFilter,_GetFilteredOnlineBeaconClientInstances_::__l2::<lambda_1>_>
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<AOnlineBeaconClient_*,TSizedDefaultAllocator<32>_> *param_2,
          FOnlineBeaconClientFilter *param_3,<lambda_1> param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  AOnlineBeaconClient *pAVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_38 [8];
  longlong local_30;
  
  iVar1 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar10 + (longlong)iVar1 * 8;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_38[0] = 0;
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_38);
    }
    if (pFVar10 == pFVar3) {
      FUniqueNetIdRepl::~FUniqueNetIdRepl(&param_3->UniqueId);
      pFVar3 = (param_3->Type).Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pFVar3 = (param_3->Name).Data.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return;
    }
    pAVar8 = *(AOnlineBeaconClient **)pFVar10;
    if (pAVar8 == (AOnlineBeaconClient *)0x0) {
LAB_14ec50f99:
      pAVar8 = (AOnlineBeaconClient *)0x0;
    }
    else {
      pUVar7 = AOnlineBeaconClient::StaticClass();
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(pAVar8->_padding_ + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar8->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) goto LAB_14ec50f99;
    }
    bVar5 = FOnlineBeaconClientFilter::operator()(param_3,pAVar8);
    if (bVar5) {
      lVar9 = *(longlong *)pFVar10;
      if (lVar9 == 0) {
LAB_14ec50fd9:
        lVar9 = 0;
      }
      else {
        pUVar7 = AOnlineBeaconClient::StaticClass();
        iVar6 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar7->_padding_)) goto LAB_14ec50fd9;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      local_30 = lVar9;
      if ((pFVar2 <= (FScriptContainerElement *)&local_30) &&
         ((FScriptContainerElement *)&local_30 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_30;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>_> @ 14ec510e0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *param_1
          )

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>_> @ 14ec510f0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *param_1
          )

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> @ 14ec51100

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>'::__l2::<lambda_1>,1,1> @ 14ec55010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFExternalUIStatusChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFExternalUIStatusChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ec5503a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UIpNetDriver::InitBase'::__l2::<lambda_1>,1,1> @ 14ec55050

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UIpNetDriver::InitBase'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UIpNetDriver::InitBase_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::InitBase'::`2'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FOnlineSubsystemUtils::SetEngineExternalUIBinding'::__l2::<lambda_1>,0,0> @ 14ec55070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOnlineSubsystemUtils::SetEngineExternalUIBinding'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FOnlineSubsystemUtils::SetEngineExternalUIBinding_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__SetEngineExternalUIBinding_FOnlineSubsystemUtils__UEAAXAEBV__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy_____Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::__l2::<lambda_1>,1,1> @ 14ec55090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UIpNetDriver::FReceiveThreadRunnable::SetSocket_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::__l5::<lambda_1>,0,1> @ 14ec550e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::Net::Private::FNetDriverAddressResolution::InitConnect_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::__l5::<lambda_1>,1,1> @ 14ec55100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl_::__l5::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ec55123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::ClearSocket'::__l8::<lambda_1>,1,0> @ 14ec55130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::ClearSocket'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UIpNetDriver::FReceiveThreadRunnable::ClearSocket_::__l8::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::ClearSocket'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UIpConnection::SafeDeferredSocketCleanup'::__l8::<lambda_1>,1,0> @ 14ec55150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpConnection::SafeDeferredSocketCleanup'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UIpConnection::SafeDeferredSocketCleanup_::__l8::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpConnection::SafeDeferredSocketCleanup'::`8'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UIpNetDriver::RecreateSocket'::__l11::<lambda_1>,1,0> @ 14ec55170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpNetDriver::RecreateSocket'::__l11::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UIpNetDriver::RecreateSocket_::__l11::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::RecreateSocket'::`11'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UIpConnection::SendToRemote'::__l44::<lambda_2>,1,1> @ 14ec55190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpConnection::SendToRemote'::__l44::<lambda_2>,1,1>::
~TFunction_OwnedObject<_UIpConnection::SendToRemote_::__l44::<lambda_2>,1,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpConnection::SendToRemote'::`44'::<lambda_2>,1,1>::_vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// operator() @ 14ec58e40

void __thiscall
<lambda_26>::operator()(<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FOnlineSubsystemModule *pFVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  int iVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                    ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
    _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                     (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName);
  plVar6 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x50))(pFVar5,0);
  if (plVar6 == (longlong *)0x0) {
    local_20 = 0;
    local_28 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar11 = pTVar10;
    pTVar12 = pTVar10;
  }
  else {
    puVar7 = (ulonglong *)(**(code **)(*plVar6 + 0x68))(plVar6,local_38);
    pTVar12 = (TReferenceControllerBase<1> *)*puVar7;
    pTVar11 = (TReferenceControllerBase<1> *)puVar7[1];
    puVar7[1] = 0;
    *puVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) goto LAB_14ec58f1a;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PlatformVoiceInterface.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineSubsystemUtils.cpp"
                     ,0x33,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ec58f1a:
  iVar8 = param_1->ArrayNum;
  if (iVar8 == 0) {
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pTVar12->_padding_ + 0x118))(pTVar12);
  }
  else {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pTVar13 = pTVar10;
    if (0 < iVar8) {
      do {
        uVar9 = (uint)pTVar10;
        uVar4 = 0;
        if ((int)uVar9 < iVar8) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar8 = *(int *)(pFVar1 + (longlong)&(pTVar13->SharedReferenceCount).field_0x0);
        uVar4 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar4 = 0;
        }
        ::FString::AppendChars
                  (&local_48,*(wchar_t **)((longlong)&pTVar13->_padding_ + (longlong)pFVar1),uVar4);
        ::FString::AppendChars(&local_48,L" ",1);
        iVar8 = param_1->ArrayNum;
        pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)(uVar9 + 1);
        pTVar13 = pTVar13 + 1;
      } while ((int)(uVar9 + 1) < iVar8);
    }
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pTVar12->_padding_ + 0x108))(pTVar12,&local_48,1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// operator() @ 14ec590d0

void __thiscall
<lambda_27>::operator()(<lambda_27> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FOnlineSubsystemModule *pFVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  int iVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                    ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
    _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar5 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                     (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName);
  plVar6 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x50))(pFVar5,0);
  if (plVar6 == (longlong *)0x0) {
    local_20 = 0;
    local_28 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar11 = pTVar10;
    pTVar12 = pTVar10;
  }
  else {
    puVar7 = (ulonglong *)(**(code **)(*plVar6 + 0x68))(plVar6,local_38);
    pTVar12 = (TReferenceControllerBase<1> *)*puVar7;
    pTVar11 = (TReferenceControllerBase<1> *)puVar7[1];
    puVar7[1] = 0;
    *puVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) goto LAB_14ec591aa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PlatformVoiceInterface.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineSubsystemUtils.cpp"
                     ,0x50,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ec591aa:
  iVar8 = param_1->ArrayNum;
  if (iVar8 == 0) {
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pTVar12->_padding_ + 0x118))(pTVar12);
  }
  else {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pTVar13 = pTVar10;
    if (0 < iVar8) {
      do {
        uVar9 = (uint)pTVar10;
        uVar4 = 0;
        if ((int)uVar9 < iVar8) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar8 = *(int *)(pFVar1 + (longlong)&(pTVar13->SharedReferenceCount).field_0x0);
        uVar4 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar4 = 0;
        }
        ::FString::AppendChars
                  (&local_48,*(wchar_t **)((longlong)&pTVar13->_padding_ + (longlong)pFVar1),uVar4);
        ::FString::AppendChars(&local_48,L" ",1);
        iVar8 = param_1->ArrayNum;
        pTVar10 = (TReferenceControllerBase<1> *)(ulonglong)(uVar9 + 1);
        pTVar13 = pTVar13 + 1;
      } while ((int)(uVar9 + 1) < iVar8);
    }
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pTVar12->_padding_ + 0x110))(pTVar12,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// `vcall'{1888,{flat}}'_}' @ 14ec59958

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl AOnlineBeacon::`vcall'{1888,{flat}}' }' */

void __thiscall AOnlineBeacon::_vcall__1888__flat______(AOnlineBeacon *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec5995b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))();
  return;
}

// `vcall'{1912,{flat}}'_}' @ 14ec59968

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]: __cdecl AOnlineBeaconClient::`vcall'{1912,{flat}}' }' */

void __thiscall AOnlineBeaconClient::_vcall__1912__flat______(AOnlineBeaconClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec5996b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x778))();
  return;
}

// `vcall'{1888,{flat}}'_}' @ 14ec59978

/* [thunk]: __cdecl AOnlineBeaconHostObject::`vcall'{1888,{flat}}' }' */

void __thiscall AOnlineBeaconHostObject::_vcall__1888__flat______(AOnlineBeaconHostObject *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec5997b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))();
  return;
}

// `vcall'{1896,{flat}}'_}' @ 14ec59988

/* [thunk]: __cdecl AOnlineBeaconHostObject::`vcall'{1896,{flat}}' }' */

void __thiscall AOnlineBeaconHostObject::_vcall__1896__flat______(AOnlineBeaconHostObject *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec5998b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x768))();
  return;
}

// `vcall'{56,{flat}}'_}' @ 14ec59998

/* [thunk]: __cdecl FOnlineSubsystemUtils::`vcall'{56,{flat}}' }' */

void __thiscall FOnlineSubsystemUtils::_vcall__56__flat______(FOnlineSubsystemUtils *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec5999b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// `vcall'{728,{flat}}'_}' @ 14ec599a4

/* [thunk]: __cdecl UOnlineSessionClient::`vcall'{728,{flat}}' }' */

void __thiscall UOnlineSessionClient::_vcall__728__flat______(UOnlineSessionClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec599a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))();
  return;
}

// `vcall'{760,{flat}}'_}' @ 14ec599b4

/* [thunk]: __cdecl UOnlineSessionClient::`vcall'{760,{flat}}' }' */

void __thiscall UOnlineSessionClient::_vcall__760__flat______(UOnlineSessionClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec599b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))();
  return;
}

// `vcall'{768,{flat}}'_}' @ 14ec599c4

/* [thunk]: __cdecl UOnlineSessionClient::`vcall'{768,{flat}}' }' */

void __thiscall UOnlineSessionClient::_vcall__768__flat______(UOnlineSessionClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec599c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x300))();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ec599d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UIpConnection::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UIpConnection::_vector_deleting_destructor__adjustor_40__(UIpConnection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UIpConnection *)&this[-1].SocketError_RecvDelayStartTime,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ec599e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UIpNetDriver::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UIpNetDriver::_vector_deleting_destructor__adjustor_40__(UIpNetDriver *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UIpNetDriver *)&this[-1].AggregatedIPsToLog,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ec59a00

void * __thiscall
IBaseDelegateInstance<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59a30

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59a60

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59a90

void * __thiscall
IBaseDelegateInstance<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59ac0

void * __thiscall
IBaseDelegateInstance<void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59af0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59b20

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59b50

void * __thiscall
IBaseDelegateInstance<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59b80

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59bb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy,`UE::Online::FOnlineServicesEngineUtils::OnOnlineServicesCreated'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59be0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy,`UE::Online::FOnlineServicesEngineUtils::SetEngineExternalUIBinding'::__l9::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59c10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseRestoreCallbackProxy2::OnInAppPurchaseRestoreComplete'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59c40

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseCallbackProxy2::OnPurchaseComplete'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59c70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseCheckoutCallbackProxy::OnPurchaseComplete'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59ca0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseReceiptsCallbackProxy::OnQueryComplete'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59cd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead'::__l14::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59d00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconClient::ClientCancelReservationResponse_Implementation'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59d30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconClient::ClientReservationResponse_Implementation'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59d60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconClient::ClientSendReservationFull_Implementation'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59d90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconClient::ClientSendReservationUpdates_Implementation'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59dc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Online::FOnlineServicesEngineUtils,void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Online::FOnlineServicesEngineUtils,void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59df0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOnlineSubsystemUtils,void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FOnlineSubsystemUtils,void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59e20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59e50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59e80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59eb0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59ee0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59f10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
           *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59f60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59f90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59fc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec59ff0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a020

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a050

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a080

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a0b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a0e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a110

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a140

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a1a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a1d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a200

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a230

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a290

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a2c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a2f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a320

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a350

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a380

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a3b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a410

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a470

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a4d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a500

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a530

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a560

void * __thiscall
TCommonDelegateInstanceState<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a590

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a5c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a5f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x8;
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
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a650

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a680

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0x8);
  pvVar1 = *(void **)&(this->Payload).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a6e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a710

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a740

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a770

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a7a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Payload).field_0x8);
  pvVar1 = *(void **)&(this->Payload).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a800

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a830

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
           *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->Payload).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a880

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  pvVar1 = *(void **)&(this->Payload).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a8e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFExternalUIStatusChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFExternalUIStatusChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar3 = *(longlong **)((longlong)this + 0x18);
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
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a980

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UIpNetDriver::InitBase'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::InitBase'::`2'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5a9c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOnlineSubsystemUtils::SetEngineExternalUIBinding'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__SetEngineExternalUIBinding_FOnlineSubsystemUtils__UEAAXAEBV__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy_____Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5aa00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5aa70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Net::Private::FNetDriverAddressResolution::InitConnect'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5aab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocketImpl'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ab10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::ClearSocket'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::ClearSocket'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ab60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpConnection::SafeDeferredSocketCleanup'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpConnection::SafeDeferredSocketCleanup'::`8'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5aba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpNetDriver::RecreateSocket'::__l11::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpNetDriver::RecreateSocket'::`11'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5abe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UIpConnection::SendToRemote'::__l44::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UIpConnection::SendToRemote'::`44'::<lambda_2>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ac30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOnlineSessionSettings,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FOnlineSessionSettings,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ac70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPurchaseReceipt,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPurchaseReceipt,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5acb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,SharedPointerInternals::DefaultDeleter<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,SharedPointerInternals::DefaultDeleter<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5acf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineSessionSearch,SharedPointerInternals::DefaultDeleter<FOnlineSessionSearch>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineSessionSearch,SharedPointerInternals::DefaultDeleter<FOnlineSessionSearch>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ad30

void * __thiscall
SharedPointerInternals::TReferenceControllerWithDeleter<FSocket,FSocketDeleter,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSocket,FSocketDeleter,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ad70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUniqueNetIdString,SharedPointerInternals::DefaultDeleter<FUniqueNetIdString>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUniqueNetIdString,SharedPointerInternals::DefaultDeleter<FUniqueNetIdString>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5adb0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::__l80::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ade0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UE::Online::TOnlineResult<UE::Online::FAuthLogin>_const_&),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::AutoLogin'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x28));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ae40

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UOnlineServicesEngineInterfaceImpl::BindToExternalUIOpening'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5aea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AOnlineBeacon::_scalar_deleting_destructor_(AOnlineBeacon *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5af10

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
AOnlineBeaconClient::_scalar_deleting_destructor_(AOnlineBeaconClient *this,uint param_1)

{
  ~AOnlineBeaconClient(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5af70

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
AOnlineBeaconHost::_scalar_deleting_destructor_(AOnlineBeaconHost *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnBeaconConnectedMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnBeaconConnectedMapping);
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnBeaconSpawnedMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnBeaconSpawnedMapping);
  pFVar2 = (this->ClientActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ConnectionState).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConnectionState).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConnectionState);
  this->_padding_ = (longlong)&AOnlineBeacon::_vftable__for__AActor__;
  this->_padding_ = (longlong)&AOnlineBeacon::_vftable__for__FNetworkNotify__;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b090

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
AOnlineBeaconHostObject::_scalar_deleting_destructor_(AOnlineBeaconHostObject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AOnlineBeaconHostObject__6B_;
  pFVar1 = (this->ClientActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BeaconTypeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b120

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
APartyBeaconClient::_scalar_deleting_destructor_(APartyBeaconClient *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)
             (this->PendingReservation).RemovedPartyMembers.AllocatorInstance.Data,
             (this->PendingReservation).RemovedPartyMembers.ArrayNum);
  pFVar1 = (this->PendingReservation).RemovedPartyMembers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)(this->PendingReservation).PartyMembers.AllocatorInstance.Data,
             (this->PendingReservation).PartyMembers.ArrayNum);
  pFVar1 = (this->PendingReservation).PartyMembers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&(this->PendingReservation).PartyLeader);
  pFVar1 = (this->DestSessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationFull);
  pvVar2 = *(void **)&(this->ReservationFull).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReservationFull);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationCountUpdate);
  pvVar2 = *(void **)&(this->ReservationCountUpdate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReservationCountUpdate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationRequestComplete);
  pvVar2 = *(void **)&(this->ReservationRequestComplete).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReservationRequestComplete);
  AOnlineBeaconClient::~AOnlineBeaconClient((AOnlineBeaconClient *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x438);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b280

void * __thiscall
FFindTurnBasedMatchCallbackProxyMatchmakerDelegate::_scalar_deleting_destructor_
          (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FFindTurnBasedMatchCallbackProxyMatchmakerDelegate__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TurnBasedInterface).SharedReferenceCount.ReferenceController);
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
  this->_padding_ = (longlong)&___7FTurnBasedMatchmakerDelegate__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b300

void * __thiscall
FPurchaseReceipt::FLineItemInfo::_scalar_deleting_destructor_(FLineItemInfo *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ValidationInfo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UniqueId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b370

void * __thiscall
FOnlineSearchSettings::_scalar_deleting_destructor_(FOnlineSearchSettings *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->SearchParams).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SearchParams).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SearchParams);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b3d0

void * __thiscall
UE::Online::FOnlineServicesEngineUtils::_scalar_deleting_destructor_
          (FOnlineServicesEngineUtils *this,uint param_1)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  FVar1.ID = (this->OnOnlineServicesCreatedDelegateHandle).ID;
  this->_padding_ = (longlong)&___7FOnlineServicesEngineUtils_Online_UE__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &Online::OnOnlineServicesCreated,FVar1);
  }
  DestructItems<UE::Online::FOnlineEventDelegateHandle,int>
            ((FOnlineEventDelegateHandle *)(this->ExternalUIDelegateHandles).AllocatorInstance.Data,
             (this->ExternalUIDelegateHandles).ArrayNum);
  pFVar2 = (this->ExternalUIDelegateHandles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExternalUIChangeDelegate);
  pvVar3 = *(void **)&(this->OnExternalUIChangeDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalUIChangeDelegate);
  this->_padding_ = (longlong)&___7IOnlineServicesEngineUtils_Online_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b480

void * __thiscall FOnlineSession::_scalar_deleting_destructor_(FOnlineSession *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionInfo).SharedReferenceCount.ReferenceController);
  FOnlineSessionSettings::~FOnlineSessionSettings(&this->SessionSettings);
  pFVar1 = (this->OwningUserName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningUserId).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b4f0

void * __thiscall
FOnlineSessionSearch::_scalar_deleting_destructor_(FOnlineSessionSearch *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->QuerySettings).SearchParams.field_0x48 = 0;
  this->_padding_ = (longlong)&___7FOnlineSessionSearch__6B_;
  pvVar1 = *(void **)&(this->QuerySettings).SearchParams.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->QuerySettings).SearchParams);
  DestructItems<FOnlineSessionSearchResult,int>
            ((FOnlineSessionSearchResult *)(this->SearchResults).AllocatorInstance.Data,
             (this->SearchResults).ArrayNum);
  pFVar2 = (this->SearchResults).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b580

void * __thiscall
FOnlineSessionSettings::_scalar_deleting_destructor_(FOnlineSessionSettings *this,uint param_1)

{
  ~FOnlineSessionSettings(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b5c0

void * __thiscall
FOnlineSubsystemUtils::_scalar_deleting_destructor_(FOnlineSubsystemUtils *this,uint param_1)

{
  FDelegateHandle FVar1;
  void *pvVar2;
  
  FVar1.ID = (this->OnOnlineSubsystemCreatedDelegateHandle).ID;
  this->_padding_ = (longlong)&___7FOnlineSubsystemUtils__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FOnlineSubsystemDelegates::OnOnlineSubsystemCreated,FVar1);
  }
  *(undefined4 *)&(this->HashToSubsystemName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HashToSubsystemName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_char,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_char,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HashToSubsystemName);
  *(undefined4 *)&(this->SubsystemNameToHash).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SubsystemNameToHash).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubsystemNameToHash);
  *(undefined4 *)&(this->ExternalUIDelegateHandles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExternalUIDelegateHandles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalUIDelegateHandles);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExternalUIChangeDelegate);
  pvVar2 = *(void **)&(this->OnExternalUIChangeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalUIChangeDelegate);
  this->_padding_ = (longlong)&___7IOnlineSubsystemUtils__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b6c0

void * __thiscall
FOnlineSubsystemUtilsModule::_scalar_deleting_destructor_
          (FOnlineSubsystemUtilsModule *this,uint param_1)

{
  IOnlineServicesEngineUtils *pIVar1;
  IOnlineSubsystemUtils *pIVar2;
  
  this->_padding_ = (longlong)&___7FOnlineSubsystemUtilsModule__6B_;
  pIVar1 = (this->OnlineServicesUtils).Ptr;
  if (pIVar1 != (IOnlineServicesEngineUtils *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = (this->SubsystemUtils).Ptr;
  if (pIVar2 != (IOnlineSubsystemUtils *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b730

void * __thiscall
FPurchaseReceipt::_scalar_deleting_destructor_(FPurchaseReceipt *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FPurchaseReceipt::FReceiptOfferEntry,int>
            ((FReceiptOfferEntry *)(this->ReceiptOffers).AllocatorInstance.Data,
             (this->ReceiptOffers).ArrayNum);
  pFVar1 = (this->ReceiptOffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransactionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b7a0

void * __thiscall
FPurchaseReceipt::FReceiptOfferEntry::_scalar_deleting_destructor_
          (FReceiptOfferEntry *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FPurchaseReceipt::FLineItemInfo,int>
            ((FLineItemInfo *)(this->LineItems).AllocatorInstance.Data,(this->LineItems).ArrayNum);
  pFVar1 = (this->LineItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OfferId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Namespace).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b820

void * __thiscall
UIpNetDriver::FReceiveThreadRunnable::_scalar_deleting_destructor_
          (FReceiveThreadRunnable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Socket).SharedReferenceCount.ReferenceController);
  TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  ~TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&this->OwnerEventQueue);
  TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::
  ~TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>(&this->CommandQueue);
  DestructItems<UIpNetDriver::FReceivedPacket,int>
            ((FReceivedPacket *)(this->ReceiveQueue).Buffer.Elements.AllocatorInstance.Data,
             (this->ReceiveQueue).Buffer.Elements.ArrayNum);
  pFVar1 = (this->ReceiveQueue).Buffer.Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b8a0

void * __thiscall
FTurnBasedMatchmakerDelegate::_scalar_deleting_destructor_
          (FTurnBasedMatchmakerDelegate *this,uint param_1)

{
  *this = (FTurnBasedMatchmakerDelegate)&___7FTurnBasedMatchmakerDelegate__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b8e0

void * __thiscall FUniqueNetId::_scalar_deleting_destructor_(FUniqueNetId *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
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
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b940

void * __thiscall
FUniqueNetIdString::_scalar_deleting_destructor_(FUniqueNetIdString *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->UniqueNetIdStr).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b9b0

void * __thiscall
UE::Online::IOnlineServicesEngineUtils::_scalar_deleting_destructor_
          (IOnlineServicesEngineUtils *this,uint param_1)

{
  *this = (IOnlineServicesEngineUtils)&___7IOnlineServicesEngineUtils_Online_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5b9f0

void * __thiscall
IOnlineSubsystemUtils::_scalar_deleting_destructor_(IOnlineSubsystemUtils *this,uint param_1)

{
  *this = (IOnlineSubsystemUtils)&___7IOnlineSubsystemUtils__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ba30

void * __thiscall
UAchievementBlueprintLibrary::_scalar_deleting_destructor_
          (UAchievementBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAchievementBlueprintLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14ec5ba90

void * __thiscall
UAchievementQueryCallbackProxy::_scalar_deleting_destructor_
          (UAchievementQueryCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAchievementQueryCallbackProxy__6B_;
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5bb30

void * __thiscall
UAchievementWriteCallbackProxy::_scalar_deleting_destructor_
          (UAchievementWriteCallbackProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAchievementWriteCallbackProxy__6B_;
  pFVar1 = (this->AchievementName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WriteObject).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->OnWriteFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteFailure);
  pvVar2 = *(void **)&(this->OnWriteSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5bbf0

void * __thiscall
UConnectionCallbackProxy::_scalar_deleting_destructor_(UConnectionCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UConnectionCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLoginCompleteDelegate);
  pvVar1 = *(void **)&(this->OnLoginCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoginCompleteDelegate);
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5bcb0

void * __thiscall
UCreateSessionCallbackProxy::_scalar_deleting_destructor_
          (UCreateSessionCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UCreateSessionCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartCompleteDelegate);
  pvVar1 = *(void **)&(this->StartCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StartCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CreateCompleteDelegate);
  pvVar1 = *(void **)&(this->CreateCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CreateCompleteDelegate);
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5bda0

void * __thiscall
UDestroySessionCallbackProxy::_scalar_deleting_destructor_
          (UDestroySessionCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDestroySessionCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  pvVar1 = *(void **)&(this->Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate);
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5be60

void * __thiscall
UEndMatchCallbackProxy::_scalar_deleting_destructor_(UEndMatchCallbackProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UEndMatchCallbackProxy__6B_;
  pFVar1 = (this->MatchID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5bf10

void * __thiscall
UEndTurnCallbackProxy::_scalar_deleting_destructor_(UEndTurnCallbackProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UEndTurnCallbackProxy__6B_;
  pFVar1 = (this->MatchID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5bfc0

void * __thiscall
UFindSessionsCallbackProxy::_scalar_deleting_destructor_
          (UFindSessionsCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UFindSessionsCallbackProxy__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SearchObject).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  pvVar1 = *(void **)&(this->Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate);
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c090

void * __thiscall
UFindTurnBasedMatchCallbackProxy::_scalar_deleting_destructor_
          (UFindTurnBasedMatchCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UFindTurnBasedMatchCallbackProxy__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Delegate).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c140

void * __thiscall
UInAppPurchaseCallbackProxy2::_scalar_deleting_destructor_
          (UInAppPurchaseCallbackProxy2 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseCallbackProxy2__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PurchaseInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PurchasingPlayer).SharedReferenceCount.ReferenceController);
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  pFVar1 = (this->SavedReceipts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->InAppPurchaseCompleteDelegate);
  pvVar2 = *(void **)&(this->InAppPurchaseCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InAppPurchaseCompleteDelegate);
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c240

void * __thiscall
UInAppPurchaseCheckoutCallbackProxy::_scalar_deleting_destructor_
          (UInAppPurchaseCheckoutCallbackProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseCheckoutCallbackProxy__6B_;
  if ((this->SavedReceipt).bIsSet != false) {
    pFVar1 = (this->SavedReceipt).TypedValue.TransactionIdentifier.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ValidationInfo.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ItemId.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SavedReceipt).TypedValue.ItemName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c330

void * __thiscall
UInAppPurchaseFinalizeProxy::_scalar_deleting_destructor_
          (UInAppPurchaseFinalizeProxy *this,uint param_1)

{
  *(undefined ***)this = &___7UInAppPurchaseFinalizeProxy__6B_;
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

// `scalar_deleting_destructor' @ 14ec5c390

void * __thiscall
UInAppPurchaseQueryCallbackProxy2::_scalar_deleting_destructor_
          (UInAppPurchaseQueryCallbackProxy2 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseQueryCallbackProxy2__6B_;
  DestructItems<FOnlineProxyStoreOffer,int>
            ((FOnlineProxyStoreOffer *)(this->SavedProductInformation).AllocatorInstance.Data,
             (this->SavedProductInformation).ArrayNum);
  pFVar1 = (this->SavedProductInformation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
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

// `scalar_deleting_destructor' @ 14ec5c450

void * __thiscall
UInAppPurchaseReceiptsCallbackProxy::_scalar_deleting_destructor_
          (UInAppPurchaseReceiptsCallbackProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseReceiptsCallbackProxy__6B_;
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  pFVar1 = (this->SavedReceipts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->InAppPurchaseCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InAppPurchaseCompleteDelegate);
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c530

void * __thiscall
UInAppPurchaseRestoreCallbackProxy2::_scalar_deleting_destructor_
          (UInAppPurchaseRestoreCallbackProxy2 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInAppPurchaseRestoreCallbackProxy2__6B_;
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&this->PurchasingPlayer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PurchaseInterface).SharedReferenceCount.ReferenceController);
  DestructItems<FInAppPurchaseRestoreInfo2,int>
            ((FInAppPurchaseRestoreInfo2 *)(this->SavedReceipts).AllocatorInstance.Data,
             (this->SavedReceipts).ArrayNum);
  pFVar1 = (this->SavedReceipts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UIpConnection::_scalar_deleting_destructor_(UIpConnection *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FNetConnectionAddressResolution *pFVar3;
  FScriptContainerElement *pFVar4;
  FBaseGraphTask *pFVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  pFVar3 = (this->Resolver).Ptr;
  if (pFVar3 != (FNetConnectionAddressResolution *)0x0) {
    (**(code **)&pFVar3[-1].ResolverResults.ArrayNum)(&pFVar3[-1].ResolverResults.ArrayNum);
  }
  DestructItems<TSharedPtr<FSocket,1>,int>
            ((TSharedPtr<FSocket,1> *)(this->DeferredCleanupSockets).AllocatorInstance.Data,
             (this->DeferredCleanupSockets).ArrayNum);
  pFVar4 = (this->DeferredCleanupSockets).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SocketPrivate).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->LastSendTask).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar4 = (this->SocketSendResults).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SocketSendResultsCriticalSection);
  UNetConnection::~UNetConnection((UNetConnection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2020);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UIpNetDriver::_scalar_deleting_destructor_(UIpNetDriver *this,uint param_1)

{
  FNetDriverAddressResolution *pFVar1;
  FScriptContainerElement *pFVar2;
  FRecvMulti *pFVar3;
  FRunnableThread *pFVar4;
  FReceiveThreadRunnable *pFVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  pFVar1 = (this->Resolver).Ptr;
  if (pFVar1 != (FNetDriverAddressResolution *)0x0) {
    (*(code *)pFVar1[-1].BoundSockets.AllocatorInstance.Data)(pFVar1 + -1);
  }
  DestructItems<UIpNetDriver::FAggregatedIP,int>
            ((FAggregatedIP *)(this->AggregatedIPsToLog).AllocatorInstance.Data,
             (this->AggregatedIPsToLog).ArrayNum);
  pFVar2 = (this->AggregatedIPsToLog).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NewIPHitCount).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NewIPHashes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SocketPrivate).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->RecvMultiState).Ptr;
  if (pFVar3 != (FRecvMulti *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar4 = (this->SocketReceiveThread).Ptr;
  if (pFVar4 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
  }
  pFVar5 = (this->SocketReceiveThreadRunnable).Ptr;
  if (pFVar5 != (FReceiveThreadRunnable *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
  }
  UNetDriver::~UNetDriver((UNetDriver *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb08);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c820

void * __thiscall
UJoinSessionCallbackProxy::_scalar_deleting_destructor_
          (UJoinSessionCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UJoinSessionCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  pvVar1 = *(void **)&(this->Delegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineSearchResult).Session.SessionInfo.SharedReferenceCount.ReferenceController
            );
  FOnlineSessionSettings::~FOnlineSessionSettings
            (&(this->OnlineSearchResult).Session.SessionSettings);
  pFVar2 = (this->OnlineSearchResult).Session.OwningUserName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineSearchResult).Session.OwningUserId.SharedReferenceCount.
             ReferenceController);
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase
            ((UOnlineBlueprintCallProxyBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5c920

void * __thiscall
ULeaderboardBlueprintLibrary::_scalar_deleting_destructor_
          (ULeaderboardBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7ULeaderboardBlueprintLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14ec5c980

void * __thiscall
ULeaderboardFlushCallbackProxy::_scalar_deleting_destructor_
          (ULeaderboardFlushCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULeaderboardFlushCallbackProxy__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LeaderboardFlushCompleteDelegate);
  pvVar1 = *(void **)&(this->LeaderboardFlushCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LeaderboardFlushCompleteDelegate);
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ca40

void * __thiscall
ULeaderboardQueryCallbackProxy::_scalar_deleting_destructor_
          (ULeaderboardQueryCallbackProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ULeaderboardQueryCallbackProxy__6B_;
  pFVar1 = (this->StatName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReadObject).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LeaderboardReadCompleteDelegate);
  pvVar2 = *(void **)&(this->LeaderboardReadCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LeaderboardReadCompleteDelegate);
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
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

// `scalar_deleting_destructor' @ 14ec5cb20

void * __thiscall
ULogoutCallbackProxy::_scalar_deleting_destructor_(ULogoutCallbackProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULogoutCallbackProxy__6B_;
  pvVar1 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5cbc0

void * __thiscall
UOnlineEngineInterfaceImpl::_scalar_deleting_destructor_
          (UOnlineEngineInterfaceImpl *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UOnlineEngineInterfaceImpl__6B_;
  *(undefined4 *)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnLoginPIECompleteDelegateHandlesForPIEInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnLoginPIECompleteDelegateHandlesForPIEInstances);
  *(undefined4 *)&(this->OnEndSessionCompleteDelegateHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnEndSessionCompleteDelegateHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnEndSessionCompleteDelegateHandles);
  *(undefined4 *)&(this->OnStartSessionCompleteDelegateHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnStartSessionCompleteDelegateHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnStartSessionCompleteDelegateHandles);
  pFVar2 = (this->CompatibleUniqueNetIdTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->MappedUniqueNetIdTypes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MappedUniqueNetIdTypes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MappedUniqueNetIdTypes);
  UOnlineEngineInterface::~UOnlineEngineInterface((UOnlineEngineInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x198);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ccc0

void * __thiscall
UOnlinePIEConfig::_scalar_deleting_destructor_(UOnlinePIEConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOnlinePIEConfig__6B_;
  DestructItems<FString,int>
            ((FString *)(this->LoginTypesAllowingDuplicates).AllocatorInstance.Data,
             (this->LoginTypesAllowingDuplicates).ArrayNum);
  pFVar1 = (this->LoginTypesAllowingDuplicates).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14ec5cd40

void * __thiscall
UOnlinePIESettings::_scalar_deleting_destructor_(UOnlinePIESettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOnlinePIESettings__6B_;
  DestructItems<FOnlineAccountStoredCredentials,int>
            ((FOnlineAccountStoredCredentials *)(this->Logins).AllocatorInstance.Data,
             (this->Logins).ArrayNum);
  pFVar1 = (this->Logins).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14ec5cdc0

void * __thiscall
UOnlineServicesEngineInterfaceImpl::_scalar_deleting_destructor_
          (UOnlineServicesEngineInterfaceImpl *this,uint param_1)

{
  *(undefined ***)this = &___7UOnlineServicesEngineInterfaceImpl__6B_;
  UOnlineEngineInterface::~UOnlineEngineInterface((UOnlineEngineInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec5ce20

void * __thiscall
UOnlineSessionClient::_scalar_deleting_destructor_(UOnlineSessionClient *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UOnlineSessionClient__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSessionResult).Session.SessionInfo.SharedReferenceCount.
             ReferenceController);
  FOnlineSessionSettings::~FOnlineSessionSettings
            (&(this->CachedSessionResult).Session.SessionSettings);
  pFVar1 = (this->CachedSessionResult).Session.OwningUserName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSessionResult).Session.OwningUserId.SharedReferenceCount.
             ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSessionUserInviteAcceptedDelegate
            );
  pvVar2 = *(void **)&(this->OnSessionUserInviteAcceptedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionUserInviteAcceptedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnJoinSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJoinSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroyForMainMenuCompleteDelegate);
  pvVar2 = *(void **)&(this->OnDestroyForMainMenuCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroyForMainMenuCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroyForJoinSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroyForJoinSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndForJoinSessionCompleteDelegate
            );
  pvVar2 = *(void **)&(this->OnEndForJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndForJoinSessionCompleteDelegate);
  UOnlineSession::~UOnlineSession((UOnlineSession *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x208);
  }
  return this;
}

// ApplyVoiceSettings @ 14ec60410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ApplyVoiceSettings(UVoipListenerSynthComponent *param_1,FVoiceSettings *param_2)

{
  USceneComponent *this;
  USoundAttenuation *pUVar1;
  USoundEffectSourcePresetChain *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UAudioComponent *this_00;
  UWorld *pUVar6;
  
  USynthComponent::CreateAudioComponent((USynthComponent *)param_1);
  param_1->field_0x250 = param_1->field_0x250 | 4;
  this_00 = USynthComponent::GetAudioComponent((USynthComponent *)param_1);
  if (this_00 == (UAudioComponent *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("AudioComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineSubsystemUtils.cpp"
                       ,0xba,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_2->ComponentToAttachTo).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    cVar5 = (**(code **)(*(longlong *)this_00 + 0x4f8))(this_00,0);
    if (cVar5 != '\0') {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("AudioComponent->IsSimulatingPhysics() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineSubsystemUtils.cpp"
                         ,0xbf,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)&this_00->field_0xd0 == 0) {
      USceneComponent::SetupAttachment
                ((USceneComponent *)this_00,(param_2->ComponentToAttachTo).field0_0x0.DebugPtr,
                 (FName)0x0);
    }
    else {
      (**(code **)(*(longlong *)this_00 + 0x508))();
    }
    if ((this_00->field_0x98 & 1) == 0) {
      this = (param_2->ComponentToAttachTo).field0_0x0.DebugPtr;
      pUVar6 = (UWorld *)this->_padding_;
      if (pUVar6 == (UWorld *)0x0) {
        pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)this_00,pUVar6,(FRegisterComponentContext *)0x0);
      this_00->AudioDeviceID = 0xffffffff;
    }
  }
  pUVar1 = (param_2->AttenuationSettings).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundAttenuation *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(TObjectPtr<USoundAttenuation>_u_0 *)&param_1->field_0x258 =
         (param_2->AttenuationSettings).field0_0x0;
  }
  pUVar2 = (param_2->SourceEffectChain).field0_0x0.DebugPtr;
  if (pUVar2 != (USoundEffectSourcePresetChain *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(TObjectPtr<USoundEffectSourcePresetChain>_u_0 *)&param_1->field_0x7f8 =
         (param_2->SourceEffectChain).field0_0x0;
  }
  return;
}

// CreateVoiceAudioComponent @ 14ec6b100

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAudioComponent * __cdecl CreateVoiceAudioComponent(uint param_1,int param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  USoundWave *this;
  UAudioComponent *pUVar6;
  FCreateComponentParams *pFVar7;
  UAudioSettings *pUVar8;
  FString *pFVar9;
  size_t sVar10;
  USoundClass *pUVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStackY_218 [32];
  FScriptContainerElement *local_1c8;
  undefined4 uStack_1bc;
  FAudioDeviceHandle local_1b8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  FString local_178;
  FSoftObjectPath local_168;
  undefined1 local_148 [128];
  FCreateComponentParams local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar6 = (UAudioComponent *)0x0;
  iVar13 = 0;
  if (GEngine == (UEngine *)0x0) {
    return (UAudioComponent *)0x0;
  }
  UEngine::GetMainAudioDevice(GEngine,&local_1b8);
  bVar3 = FAudioDeviceHandle::IsValid(&local_1b8);
  if (!bVar3) goto LAB_14ec6b37b;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_USoundWaveProcedural_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_148,pUVar5);
  local_148._8_8_ = pUVar4;
  this = (USoundWave *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148)
  ;
  if (local_148._64_8_ != 0) {
    plVar12 = (longlong *)(local_148 + 0x50);
    if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_148._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  USoundWave::SetSampleRate(this,param_1,false);
  this->bLooping = '\0';
  this->bCanProcessAsync = '\x01';
  this->NumChannels = param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x461c4000;
  (this->SoundGroup).Value = '\x04';
  bVar3 = FAudioDeviceHandle::IsValid(&local_1b8);
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                         ,0x60,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pUVar6 = (UAudioComponent *)(*pcVar1)();
    return pUVar6;
  }
  pFVar7 = FAudioDevice::FCreateComponentParams::FCreateComponentParams(&local_c8);
  pUVar6 = FAudioDevice::CreateComponent((USoundBase *)this,pFVar7);
  local_c8.ConcurrencySet.HashSize = 0;
  if (local_c8.ConcurrencySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.ConcurrencySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundConcurrency_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.ConcurrencySet.Elements);
  fVar2 = __real_3fc00000;
  if (pUVar6 == (UAudioComponent *)0x0) {
    if (2 < (byte)LogVoiceDecode._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
    }
    goto LAB_14ec6b37b;
  }
  pUVar6->bAllowSpatialization = '\0';
  pUVar6->bIsUISound = '\x01';
  UAudioComponent::SetVolumeMultiplier(pUVar6,fVar2);
  pUVar8 = GetDefault<UAudioSettings>();
  FSoftObjectPath::FSoftObjectPath(&local_168,&pUVar8->VoiPSoundClass);
  if (local_168.AssetPath.PackageName != (FName)0x0) {
    pFVar9 = FSoftObjectPath::ToString(&local_168,&local_178);
    if ((pFVar9->Data).ArrayNum == 0) {
      local_1c8 = (FScriptContainerElement *)0x15060d16c;
LAB_14ec6b2d6:
      sVar10 = wcslen((wchar_t *)local_1c8);
      iVar13 = (int)sVar10;
    }
    else {
      local_1c8 = (pFVar9->Data).AllocatorInstance.Data;
      if (local_1c8 != (FScriptContainerElement *)0x0) goto LAB_14ec6b2d6;
    }
    pUVar5 = Z_Construct_UClass_USoundClass_NoRegister();
    local_188._12_4_ = uStack_1bc;
    local_188.Size = iVar13;
    local_198.DataPtr = (wchar_t *)0x0;
    local_198.Size = 0;
    local_198._12_4_ = 0;
    local_188.DataPtr = (wchar_t *)local_1c8;
    pUVar11 = (USoundClass *)
              StaticLoadObject(pUVar5,(UObject *)0x0,&local_188,&local_198,0,(UPackageMap *)0x0,true
                               ,(FLinkerInstancingContext *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (USoundClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (pUVar6->SoundClassOverride).field0_0x0.DebugPtr = pUVar11;
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  if (local_168.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14ec6b37b:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_1b8);
  return pUVar6;
}

// CreateVoiceSynthComponent @ 14ec6b3c0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UVoipListenerSynthComponent * __cdecl CreateVoiceSynthComponent(UWorld *param_1,uint param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UVoipListenerSynthComponent *this;
  UAudioSettings *pUVar4;
  FString *pFVar5;
  size_t sVar6;
  USoundClass *pUVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackY_158 [32];
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  FAudioDeviceHandle local_e8;
  FSoftObjectPath local_d0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this = (UVoipListenerSynthComponent *)0x0;
  iVar9 = 0;
  if (param_1 == (UWorld *)0x0) {
    return (UVoipListenerSynthComponent *)0x0;
  }
  UWorld::GetAudioDevice(param_1,&local_e8);
  bVar1 = FAudioDeviceHandle::IsValid(&local_e8);
  if (!bVar1) goto LAB_14ec6b5a9;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar2;
  this = (UVoipListenerSynthComponent *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (this == (UVoipListenerSynthComponent *)0x0) {
    if (2 < (byte)LogVoiceDecode._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogVoiceDecode);
    }
    goto LAB_14ec6b5a9;
  }
  pUVar4 = GetDefault<UAudioSettings>();
  FSoftObjectPath::FSoftObjectPath(&local_d0,&pUVar4->VoiPSoundClass);
  if (local_d0.AssetPath.PackageName != (FName)0x0) {
    local_118.Size = 0;
    local_118._12_4_ = 0;
    local_118.DataPtr = (wchar_t *)0x0;
    pFVar5 = FSoftObjectPath::ToString(&local_d0,&local_f8);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_108.DataPtr = L"";
LAB_14ec6b4cc:
      sVar6 = wcslen(local_108.DataPtr);
      iVar9 = (int)sVar6;
    }
    else {
      local_108.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)local_108.DataPtr != (FScriptContainerElement *)0x0)
      goto LAB_14ec6b4cc;
    }
    local_108.Size = iVar9;
    pUVar3 = Z_Construct_UClass_USoundClass_NoRegister();
    pUVar7 = (USoundClass *)
             StaticLoadObject(pUVar3,(UObject *)0x0,&local_108,&local_118,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (USoundClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (((TObjectPtr<USoundClass> *)&this->field_0x7f0)->field0_0x0).DebugPtr = pUVar7;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  this->field_0x838 =
       ((char)CvarAlwaysPlayVoipComponent << 2 ^ this->field_0x838) & 4U ^ this->field_0x838;
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)this,param_1,(FRegisterComponentContext *)0x0);
  USynthComponent::Initialize((USynthComponent *)this,param_2);
  if (local_d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14ec6b5a9:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_e8);
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAchievementBlueprintLibrary @ 14ec6d320

void __cdecl EmptyLinkFunctionForGeneratedCodeAchievementBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAchievementQueryCallbackProxy @ 14ec6d330

void __cdecl EmptyLinkFunctionForGeneratedCodeAchievementQueryCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAchievementWriteCallbackProxy @ 14ec6d340

void __cdecl EmptyLinkFunctionForGeneratedCodeAchievementWriteCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeConnectionCallbackProxy @ 14ec6d350

void __cdecl EmptyLinkFunctionForGeneratedCodeConnectionCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCreateSessionCallbackProxy @ 14ec6d360

void __cdecl EmptyLinkFunctionForGeneratedCodeCreateSessionCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDestroySessionCallbackProxy @ 14ec6d370

void __cdecl EmptyLinkFunctionForGeneratedCodeDestroySessionCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEndMatchCallbackProxy @ 14ec6d380

void __cdecl EmptyLinkFunctionForGeneratedCodeEndMatchCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEndTurnCallbackProxy @ 14ec6d390

void __cdecl EmptyLinkFunctionForGeneratedCodeEndTurnCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFindSessionsCallbackProxy @ 14ec6d3a0

void __cdecl EmptyLinkFunctionForGeneratedCodeFindSessionsCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeFindTurnBasedMatchCallbackProxy @ 14ec6d3b0

void __cdecl EmptyLinkFunctionForGeneratedCodeFindTurnBasedMatchCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInAppPurchaseCallbackProxy2 @ 14ec6d3c0

void __cdecl EmptyLinkFunctionForGeneratedCodeInAppPurchaseCallbackProxy2(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInAppPurchaseCheckoutCallbackProxy @ 14ec6d3d0

void __cdecl EmptyLinkFunctionForGeneratedCodeInAppPurchaseCheckoutCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInAppPurchaseDataTypes @ 14ec6d3e0

void __cdecl EmptyLinkFunctionForGeneratedCodeInAppPurchaseDataTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInAppPurchaseFinalizeProxy @ 14ec6d3f0

void __cdecl EmptyLinkFunctionForGeneratedCodeInAppPurchaseFinalizeProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInAppPurchaseQueryCallbackProxy2 @ 14ec6d400

void __cdecl EmptyLinkFunctionForGeneratedCodeInAppPurchaseQueryCallbackProxy2(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInAppPurchaseReceiptsCallbackProxy @ 14ec6d410

void __cdecl EmptyLinkFunctionForGeneratedCodeInAppPurchaseReceiptsCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInAppPurchaseRestoreCallbackProxy2 @ 14ec6d420

void __cdecl EmptyLinkFunctionForGeneratedCodeInAppPurchaseRestoreCallbackProxy2(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIpConnection @ 14ec6d430

void __cdecl EmptyLinkFunctionForGeneratedCodeIpConnection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIpNetDriver @ 14ec6d440

void __cdecl EmptyLinkFunctionForGeneratedCodeIpNetDriver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeJoinSessionCallbackProxy @ 14ec6d450

void __cdecl EmptyLinkFunctionForGeneratedCodeJoinSessionCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLeaderboardBlueprintLibrary @ 14ec6d460

void __cdecl EmptyLinkFunctionForGeneratedCodeLeaderboardBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLeaderboardFlushCallbackProxy @ 14ec6d470

void __cdecl EmptyLinkFunctionForGeneratedCodeLeaderboardFlushCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLeaderboardQueryCallbackProxy @ 14ec6d480

void __cdecl EmptyLinkFunctionForGeneratedCodeLeaderboardQueryCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLogoutCallbackProxy @ 14ec6d490

void __cdecl EmptyLinkFunctionForGeneratedCodeLogoutCallbackProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineAccountStoredCredentials @ 14ec6d4a0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineAccountStoredCredentials(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeacon @ 14ec6d4b0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeacon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconClient @ 14ec6d4c0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconHost @ 14ec6d4d0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconHost(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconHostObject @ 14ec6d4e0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconHostObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineBeaconReservation @ 14ec6d4f0

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineBeaconReservation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineEngineInterfaceImpl @ 14ec6d500

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineEngineInterfaceImpl(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlinePIEConfig @ 14ec6d510

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlinePIEConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlinePIESettings @ 14ec6d520

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlinePIESettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineServicesEngineInterfaceImpl @ 14ec6d530

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineServicesEngineInterfaceImpl(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineSessionClient @ 14ec6d540

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineSessionClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOnlineSubsystemUtils_init @ 14ec6d550

void __cdecl EmptyLinkFunctionForGeneratedCodeOnlineSubsystemUtils_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePartyBeaconClient @ 14ec6d560

void __cdecl EmptyLinkFunctionForGeneratedCodePartyBeaconClient(void)

{
  return;
}

// FAchievementWriteCompleteDelegate_DelegateWrapper @ 14ec71d40

void __cdecl
FAchievementWriteCompleteDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2,
          float param_3,int param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_38;
  float local_28;
  int local_24;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (&local_38 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_38.Data.ArrayMax = 0;
    local_38.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_38,uVar1,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_28 = param_3;
  local_24 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// FAchievementWriteDelegate_DelegateWrapper @ 14ec71e20

void __cdecl
FAchievementWriteDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2,float param_3
          ,int param_4)

{
  FName local_18;
  float local_10;
  int local_c;
  
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FBlueprintFindSessionsResultDelegate_DelegateWrapper @ 14ec71e50

void __cdecl
FBlueprintFindSessionsResultDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FBlueprintSessionResult,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TArray<FBlueprintSessionResult,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    DestructItems<FBlueprintSessionResult,int>((FBlueprintSessionResult *)0x0,0);
    iVar1 = param_2->ArrayNum;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_18.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.ArrayMax == 0)) {
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,iVar1,local_18.ArrayMax,&local_18.AllocatorInstance,iVar1,
                 &local_18.ArrayMax);
      ConstructItems<FBlueprintSessionResult,FBlueprintSessionResult,int>
                (local_18.AllocatorInstance.Data,(FBlueprintSessionResult *)pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  DestructItems<FBlueprintSessionResult,int>
            ((FBlueprintSessionResult *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FInAppPurchaseQuery2Result_DelegateWrapper @ 14ec71f30

void __cdecl
FInAppPurchaseQuery2Result_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FOnlineProxyStoreOffer,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FOnlineProxyStoreOffer *pFVar2;
  TArray<FOnlineProxyStoreOffer,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    DestructItems<FOnlineProxyStoreOffer,int>((FOnlineProxyStoreOffer *)0x0,0);
    iVar1 = param_2->ArrayNum;
    pFVar2 = (FOnlineProxyStoreOffer *)(param_2->AllocatorInstance).Data;
    local_18.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.ArrayMax == 0)) {
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe8,8,iVar1,local_18.ArrayMax,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax
                );
      ConstructItems<FOnlineProxyStoreOffer,FOnlineProxyStoreOffer,int>
                (local_18.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  DestructItems<FOnlineProxyStoreOffer,int>
            ((FOnlineProxyStoreOffer *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FOnlineProxyStoreOffer *)local_18.AllocatorInstance.Data != (FOnlineProxyStoreOffer *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FInAppPurchaseRestoreResult2_DelegateWrapper @ 14ec72010

void __cdecl
FInAppPurchaseRestoreResult2_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EInAppPurchaseStatus param_2,
          TArray<FInAppPurchaseRestoreInfo2,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FInAppPurchaseRestoreInfo2 *pFVar2;
  EInAppPurchaseStatus local_28 [8];
  TArray<FInAppPurchaseRestoreInfo2,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    DestructItems<FInAppPurchaseRestoreInfo2,int>((FInAppPurchaseRestoreInfo2 *)0x0,0);
    iVar1 = param_3->ArrayNum;
    pFVar2 = (FInAppPurchaseRestoreInfo2 *)(param_3->AllocatorInstance).Data;
    local_20.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_20.ArrayMax == 0)) {
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar1,local_20.ArrayMax,&local_20.AllocatorInstance,iVar1,&local_20.ArrayMax
                );
      ConstructItems<FInAppPurchaseRestoreInfo2,FInAppPurchaseRestoreInfo2,int>
                (local_20.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  DestructItems<FInAppPurchaseRestoreInfo2,int>
            ((FInAppPurchaseRestoreInfo2 *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
  if ((FInAppPurchaseRestoreInfo2 *)local_20.AllocatorInstance.Data !=
      (FInAppPurchaseRestoreInfo2 *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// FInAppPurchaseResult2_DelegateWrapper @ 14ec72100

void __cdecl
FInAppPurchaseResult2_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EInAppPurchaseStatus param_2,
          TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FInAppPurchaseReceiptInfo2 *pFVar2;
  EInAppPurchaseStatus local_28 [8];
  TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    DestructItems<FInAppPurchaseReceiptInfo2,int>((FInAppPurchaseReceiptInfo2 *)0x0,0);
    iVar1 = param_3->ArrayNum;
    pFVar2 = (FInAppPurchaseReceiptInfo2 *)(param_3->AllocatorInstance).Data;
    local_20.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_20.ArrayMax == 0)) {
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar1,local_20.ArrayMax,&local_20.AllocatorInstance,iVar1,&local_20.ArrayMax
                );
      ConstructItems<FInAppPurchaseReceiptInfo2,FInAppPurchaseReceiptInfo2,int>
                (local_20.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
  if ((FInAppPurchaseReceiptInfo2 *)local_20.AllocatorInstance.Data !=
      (FInAppPurchaseReceiptInfo2 *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// FLeaderboardQueryResult_DelegateWrapper @ 14ec721f0

void __cdecl
FLeaderboardQueryResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2)

{
  int local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnLeaderboardFlushed_DelegateWrapper @ 14ec72210

void __cdecl
FOnLeaderboardFlushed_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnlineConnectionResult_DelegateWrapper @ 14ec72230

void __cdecl
FOnlineConnectionResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2)

{
  int local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnlineLogoutResult_DelegateWrapper @ 14ec72250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FOnlineLogoutResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,APlayerController *param_2)

{
  APlayerController *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnlineProxyInAppCheckoutResult_DelegateWrapper @ 14ec72270

void __cdecl
FOnlineProxyInAppCheckoutResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EInAppPurchaseStatus param_2,FInAppPurchaseReceiptInfo2 *param_3)

{
  EInAppPurchaseStatus local_58 [8];
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_58[0] = param_2;
  FString::operator=(&local_50,&param_3->ItemName);
  FString::operator=(&local_40,&param_3->ItemId);
  FString::operator=(&local_30,&param_3->ValidationInfo);
  FString::operator=(&local_20,&param_3->TransactionIdentifier);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_58);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// FOnlineProxyInAppReceiptsResult_DelegateWrapper @ 14ec72340

void __cdecl
FOnlineProxyInAppReceiptsResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EInAppPurchaseStatus param_2,
          TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FInAppPurchaseReceiptInfo2 *pFVar2;
  EInAppPurchaseStatus local_28 [8];
  TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    DestructItems<FInAppPurchaseReceiptInfo2,int>((FInAppPurchaseReceiptInfo2 *)0x0,0);
    iVar1 = param_3->ArrayNum;
    pFVar2 = (FInAppPurchaseReceiptInfo2 *)(param_3->AllocatorInstance).Data;
    local_20.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_20.ArrayMax == 0)) {
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar1,local_20.ArrayMax,&local_20.AllocatorInstance,iVar1,&local_20.ArrayMax
                );
      ConstructItems<FInAppPurchaseReceiptInfo2,FInAppPurchaseReceiptInfo2,int>
                (local_20.AllocatorInstance.Data,pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  DestructItems<FInAppPurchaseReceiptInfo2,int>
            ((FInAppPurchaseReceiptInfo2 *)local_20.AllocatorInstance.Data,local_20.ArrayNum);
  if ((FInAppPurchaseReceiptInfo2 *)local_20.AllocatorInstance.Data !=
      (FInAppPurchaseReceiptInfo2 *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// FOnlineTurnBasedMatchResult_DelegateWrapper @ 14ec72430

void __cdecl
FOnlineTurnBasedMatchResult_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetBaseVoiceChatTeamId @ 14ec73690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __cdecl GetBaseVoiceChatTeamId(UWorld *param_1)

{
  FName FVar1;
  FNameEntryId FVar2;
  DWORD DVar3;
  undefined4 extraout_var;
  UNetDriver *pUVar4;
  ISocketSubsystem *pIVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  uint local_res8 [2];
  FName local_res10;
  wchar_t *local_28;
  int local_20;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  uVar7 = 0;
  if (param_1 != (UWorld *)0x0) {
    FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
    local_res8[1] = 0;
    FVar1.Number = 0;
    FVar1.ComparisonIndex.Value = local_res8[0];
    pUVar4 = UEngine::FindNamedNetDriver(GEngine,param_1,FVar1);
    if (pUVar4 != (UNetDriver *)0x0) {
      (**(code **)(pUVar4->_padding_ + 0x330))(pUVar4,&local_28);
      if (1 < local_20) {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        pIVar5 = ISocketSubsystem::Get(&local_res10);
        (**(code **)(pIVar5->_padding_ + 0x90))(pIVar5,&local_18);
        local_res8[0] = local_res8[0] & 0xffffff00;
        pwVar6 = L"";
        if (local_20 != 0) {
          pwVar6 = local_28;
        }
        (**(code **)(*local_18 + 0x10))(local_18,pwVar6,local_res8);
        if ((char)local_res8[0] != '\0') {
          local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
          (**(code **)(*local_18 + 0x20))(local_18,&local_res10);
          DVar3 = FWindowsPlatformProcess::GetCurrentProcessId();
          uVar7 = CONCAT44(local_res10.ComparisonIndex.Value,DVar3) & 0xffffffff00ffffff;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10);
      }
      if (local_28 != (wchar_t *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  return uVar7;
}

// GetBeaconLogString @ 14ec737b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __cdecl GetBeaconLogString(FString *__return_storage_ptr__,AOnlineBeaconClient *param_1)

{
  code *pcVar1;
  UEnum *this;
  bool bVar2;
  UPackage *pUVar3;
  FString *pFVar4;
  FUniqueNetIdRepl *this_00;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
    Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState,
                       (UObject *)pUVar3,L"EBeaconConnectionState");
  }
  this = Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton;
  if ((Z_Registration_Info_UEnum_EBeaconConnectionState.OuterSingleton == (UEnum *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  UEnum::GetNameByValue(this,(long64)&local_res8);
  FName::ToString(&local_res8,&local_48);
  this_00 = AOnlineBeaconClient::GetUniqueId(param_1);
  FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)this_00,&local_38);
  local_res10 = *(FName *)(param_1->_padding_ + 0x18);
  FName::ToString(&local_res10,&local_58);
  local_res18 = (FName)param_1->_padding_;
  FName::ToString(&local_res18,&local_68);
  FString::PrintfImpl(__return_storage_ptr__,L"Name: %s, Type: %s, UniqueId: %s, State: %s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetClientPeerIp @ 14ec74610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl GetClientPeerIp(FName param_1,FUniqueNetId *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  UEngine *this;
  FNameEntryId FVar8;
  ENetMode EVar9;
  int iVar10;
  UClass *pUVar11;
  UWorld *pUVar12;
  undefined4 extraout_var;
  UNetDriver *this_00;
  undefined8 *puVar13;
  FString *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  bool bVar17;
  uint local_res18 [4];
  undefined1 local_58 [16];
  void *local_48 [2];
  
  this = GEngine;
  bVar7 = false;
  bVar6 = false;
  local_res18[0] = 0;
  if (GEngine != (UEngine *)0x0) {
    pUVar11 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar3 = this->_padding_;
    iVar2 = (int)pUVar11->_padding_;
    if (((iVar2 <= *(int *)(lVar3 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar11->_padding_)) &&
       (pUVar12 = UGameEngine::GetGameWorld((UGameEngine *)this), pUVar12 != (UWorld *)0x0)) {
      FVar8 = FNameEntryId::FromValidEName((EName)local_res18);
      local_res18[0] = *(uint *)CONCAT44(extraout_var,FVar8.Value);
      local_res18[1] = 0;
      FVar5.Number = 0;
      FVar5.ComparisonIndex.Value = local_res18[0];
      this_00 = UEngine::FindNamedNetDriver(GEngine,pUVar12,FVar5);
      if ((this_00 != (UNetDriver *)0x0) &&
         (EVar9 = UNetDriver::GetNetMode(this_00), (int)EVar9 < 3)) {
        pFVar15 = (this_00->ClientConnections).AllocatorInstance.Data;
        iVar2 = (this_00->ClientConnections).ArrayNum;
        pFVar1 = pFVar15 + (longlong)iVar2 * 8;
        do {
          if ((this_00->ClientConnections).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TObjectPtr<UNetConnection>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar15 == pFVar1) {
            return 0;
          }
          plVar4 = *(longlong **)pFVar15;
          if (plVar4 == (longlong *)0x0) {
LAB_14ec7477c:
            bVar17 = false;
          }
          else {
            puVar13 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 0x30))(param_2,local_48);
            bVar7 = true;
            bVar6 = true;
            pFVar14 = FUniqueNetIdWrapper::ToString
                                ((FUniqueNetIdWrapper *)(plVar4 + 0x37),(FString *)local_58);
            iVar10 = (pFVar14->Data).ArrayNum;
            if (iVar10 == *(int *)(puVar13 + 1)) {
              if (1 < iVar10) {
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                                    (wchar_t *)*puVar13);
                bVar17 = iVar10 == 0;
                goto LAB_14ec74770;
              }
            }
            else {
              bVar17 = *(int *)(puVar13 + 1) + iVar10 == 1;
LAB_14ec74770:
              if (!bVar17) goto LAB_14ec7477c;
            }
            bVar17 = true;
          }
          if ((bVar6) &&
             (bVar6 = false,
             (FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_58._0_8_);
          }
          if ((bVar7) && (bVar7 = false, local_48[0] != (void *)0x0)) {
            FMemory::Free(local_48[0]);
          }
          if (bVar17) {
            (**(code **)(*plVar4 + 0x338))(plVar4,local_58);
            uVar16 = 0;
            if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
              local_res18[0] = 0;
              (**(code **)(*(longlong *)local_58._0_8_ + 0x20))(local_58._0_8_,local_res18);
              uVar16 = local_res18[0];
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_58._8_8_);
            return uVar16;
          }
          pFVar15 = pFVar15 + 8;
        } while( true );
      }
    }
  }
  return 0;
}

// GetFilteredOnlineBeaconClientInstances @ 14ec75120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<AOnlineBeaconClient_*,TSizedDefaultAllocator<32>_> * __cdecl
GetFilteredOnlineBeaconClientInstances
          (TArray<AOnlineBeaconClient_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOnlineBeaconClientFilter *param_1)

{
  UClass *pUVar1;
  <lambda_1> local_res8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_78;
  undefined1 local_68 [64];
  ForAnyElementType local_28;
  undefined8 local_20;
  bool local_18;
  FOnlineBeaconClientFilterFlags local_17;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pUVar1 = AOnlineBeaconClient::StaticClass();
  GetObjectsOfClass(pUVar1,&local_78,true,RF_ClassDefaultObject,Borrowed);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FString::FString((FString *)local_68,&param_1->Name);
  FString::FString((FString *)(local_68 + 0x10),&param_1->Type);
  local_68._32_8_ = &___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)(local_68 + 0x28),
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(param_1->UniqueId)._padding_);
  local_68._32_8_ = &___7FUniqueNetIdRepl__6B_;
  local_18 = param_1->bIsWildcard;
  local_17 = param_1->Flags;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  Algo::
  TransformIf<TArray<UObject_*,TSizedDefaultAllocator<32>_>,TArray<AOnlineBeaconClient_*,TSizedDefaultAllocator<32>_>_&,FOnlineBeaconClientFilter,_GetFilteredOnlineBeaconClientInstances_::__l2::<lambda_1>_>
            (&local_78,__return_storage_ptr__,(FOnlineBeaconClientFilter *)local_68,local_res8);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFirstPlayerAccountId @ 14ec75220

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

FUniqueNetIdRepl * __cdecl
`anonymous_namespace'::GetFirstPlayerAccountId
          (FUniqueNetIdRepl *__return_storage_ptr__,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  ULocalPlayer *pUVar3;
  FUniqueNetIdRepl *pFVar4;
  IOnlineSubsystem *pIVar5;
  longlong *plVar6;
  FUserOnlineAccount *pFVar7;
  longlong *plVar8;
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  TSharedPtr<FUserOnlineAccount,1> *local_e0;
  int local_d8;
  FName local_d0;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  FUniqueNetIdRepl local_98;
  undefined **local_68;
  undefined1 local_60 [16];
  byte local_50;
  void *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
  (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
  pUVar3 = UEngine::GetFirstGamePlayer(GEngine,param_1);
  if (pUVar3 == (ULocalPlayer *)0x0) {
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    local_e8 = 0;
    pIVar5 = IOnlineSubsystem::Get(&local_d0);
    if (pIVar5 == (IOnlineSubsystem *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      plVar6 = (longlong *)(**(code **)(pIVar5->_padding_ + 0x80))(pIVar5,local_c8);
      plVar8 = (longlong *)*plVar6;
      pTVar10 = (TReferenceControllerBase<1> *)plVar6[1];
      plVar6[1] = 0;
      *plVar6 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x108))(plVar8,&local_e0);
        if (local_d8 != 0) {
          if (local_d8 < 1) {
            local_f8 = 0;
            local_f0 = (longlong)local_d8;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pFVar4 = (FUniqueNetIdRepl *)(*pcVar1)();
              return pFVar4;
            }
          }
          pFVar7 = TSharedPtr<FUserOnlineAccount,1>::operator->(local_e0);
          plVar8 = (longlong *)(**(code **)((longlong)*pFVar7 + 8))(pFVar7,local_b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_98._padding_ = *plVar8;
          local_98._padding_ = plVar8[1];
          if ((TReferenceControllerBase<1> *)local_98._padding_ !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            ((TReferenceControllerBase<1> *)local_98._padding_)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)local_98._padding_)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_98._padding_._0_1_ = 0;
          local_98._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
          local_98.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.ReplicationBytes.ArrayNum = 0;
          local_98.ReplicationBytes.ArrayMax = 0;
          FUniqueNetIdRepl::operator=(__return_storage_ptr__,&local_98);
          local_98._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
          if (local_98.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.ReplicationBytes.AllocatorInstance.Data);
          }
          uVar9 = (ulonglong)(byte)local_98._padding_;
          if (1 < (byte)local_98._padding_) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pFVar4 = (FUniqueNetIdRepl *)(*pcVar1)();
              return pFVar4;
            }
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar9] ==
              UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_98._padding_);
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar9])(&local_98._padding_);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0);
        }
        DestructItems<TSharedPtr<FUserOnlineAccount,1>,int>(local_e0,local_d8);
        if (local_e0 != (TSharedPtr<FUserOnlineAccount,1> *)0x0) {
          FMemory::Free(local_e0);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  else {
    pFVar4 = (FUniqueNetIdRepl *)(**(code **)(pUVar3->_padding_ + 0x360))(pUVar3,&local_68);
    FUniqueNetIdRepl::operator=(__return_storage_ptr__,pFVar4);
    local_68 = &___7FUniqueNetIdRepl__6B_;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if (1 < local_50) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FUniqueNetIdRepl *)(*pcVar1)();
        return pFVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50])(local_60);
  }
  return __return_storage_ptr__;
}

// GetPortFromNetDriver @ 14ec770f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl GetPortFromNetDriver(FName param_1)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  UEngine *this;
  FNameEntryId FVar4;
  ENetMode EVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  undefined4 extraout_var;
  UNetDriver *this_00;
  ForAnyElementType FVar10;
  int iVar11;
  uint local_res10 [2];
  FString local_28;
  FString local_18;
  
  this = GEngine;
  iVar11 = 0;
  iVar6 = 0;
  iVar7 = iVar11;
  if (GEngine != (UEngine *)0x0) {
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this->_padding_;
    iVar1 = (int)pUVar8->_padding_;
    iVar7 = iVar6;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      pUVar9 = UGameEngine::GetGameWorld((UGameEngine *)this);
      if (pUVar9 != (UWorld *)0x0) {
        FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
        local_res10[0] = *(uint *)CONCAT44(extraout_var,FVar4.Value);
        local_res10[1] = 0;
        FVar3.Number = 0;
        FVar3.ComparisonIndex.Value = local_res10[0];
        this_00 = UEngine::FindNamedNetDriver(GEngine,pUVar9,FVar3);
        if (this_00 != (UNetDriver *)0x0) {
          EVar5 = UNetDriver::GetNetMode(this_00);
          if ((int)EVar5 < 3) {
            (**(code **)(this_00->_padding_ + 0x330))(this_00,&local_18);
            FString::FString(&local_28,":");
            iVar7 = local_28.Data.ArrayNum + -1;
            if (local_28.Data.ArrayNum == 0) {
              iVar7 = 0;
            }
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_28.Data.ArrayNum != 0) {
              FVar10.Data = local_28.Data.AllocatorInstance.Data;
            }
            iVar6 = FString::Find(&local_18,(wchar_t *)FVar10.Data,iVar7,IgnoreCase,FromEnd,-1);
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            iVar7 = iVar11;
            if (iVar6 != -1) {
              FString::RightChop(&local_18,&local_28,iVar6 + 1);
              if (1 < local_28.Data.ArrayNum) {
                FVar10.Data = (FScriptContainerElement *)L"";
                if (local_28.Data.ArrayNum != 0) {
                  FVar10.Data = local_28.Data.AllocatorInstance.Data;
                }
                iVar7 = _wtoi((wchar_t *)FVar10.Data);
              }
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
            }
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  return iVar7;
}

// GetSessionInterface @ 14ec78e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<IOnlineSession,1> * __cdecl
Online::GetSessionInterface
          (TSharedPtr<IOnlineSession,1> *__return_storage_ptr__,UWorld *param_1,FName param_2)

{
  IOnlineSubsystem *pIVar1;
  undefined8 *puVar2;
  FName local_res18 [2];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res18[0] = param_2;
  pIVar1 = IOnlineSubsystem::Get(local_res18);
  if (pIVar1 == (IOnlineSubsystem *)0x0) {
    __return_storage_ptr__->Object = (IOnlineSession *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  puVar2 = (undefined8 *)(**(code **)(pIVar1->_padding_ + 0x20))(pIVar1,local_18);
  __return_storage_ptr__->Object = (IOnlineSession *)*puVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)puVar2[1];
  puVar2[1] = 0;
  *puVar2 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetUtils @ 14ec79a20

IOnlineSubsystemUtils * __cdecl Online::GetUtils(void)

{
  IModuleInterface *pIVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&OnlineSubsystemModuleName,L"OnlineSubsystemUtils");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pIVar1 = FModuleManager::GetModulePtr_Internal(OnlineSubsystemModuleName);
  if (pIVar1 != (IModuleInterface *)0x0) {
    return (IOnlineSubsystemUtils *)pIVar1[1];
  }
  return (IOnlineSubsystemUtils *)0x0;
}

// GetVoiceChatTeamId @ 14ec79b10

ulong64 __cdecl GetVoiceChatTeamId(ulong64 param_1,uchar param_2)

{
  return (ulonglong)param_2 << 0x18 | param_1;
}

// GetWorldForOnline @ 14ec79b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl GetWorldForOnline(FName param_1)

{
  int iVar1;
  longlong lVar2;
  UEngine *this;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  this = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar3 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this->_padding_;
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar4 = UGameEngine::GetGameWorld((UGameEngine *)this);
      return pUVar4;
    }
  }
  return (UWorld *)0x0;
}

// HandleBeaconCommands @ 14ec79b90

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

bool __cdecl
HandleBeaconCommands
          (IOnlineSubsystem *param_1,UWorld *param_2,wchar_t *param_3,FOutputDevice *param_4)

{
  FScriptContainerElement *pFVar1;
  AOnlineBeaconClient *pAVar2;
  int iVar3;
  bool bVar4;
  EConnectionState EVar5;
  FString *pFVar6;
  UNetConnection *this;
  FStaticBasicLogRecord *pFVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_f8 [32];
  FScriptContainerElement *local_d8;
  undefined1 local_c8 [8];
  TArray<AOnlineBeaconClient_*,TSizedDefaultAllocator<32>_> local_c0;
  wchar_t *local_b0;
  TArray<AOnlineBeaconClient_*,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  undefined1 local_88 [32];
  FUniqueNetIdRepl local_68;
  bool local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_b0 = param_3;
  bVar4 = FParse::Command(&local_b0,L"DUMP",true);
  if (bVar4) {
    local_68._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_4_ = 0;
    local_88._12_4_ = 0;
    local_88._16_8_ = (FScriptContainerElement *)0x0;
    local_88._24_4_ = 0;
    local_88._28_4_ = 0;
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68._padding_._0_1_ = 0;
    local_68.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ReplicationBytes.ArrayNum = 0;
    local_68.ReplicationBytes.ArrayMax = 0;
    local_38 = false;
    bVar4 = FOnlineBeaconClientFilter::Parse
                      (local_b0,(FOnlineBeaconClientFilter *)local_88,WildcardAllowed);
    if (bVar4) {
      if (4 < (byte)LogBeacon._0_1_) {
        if (local_38 == false) {
          pFVar6 = FUniqueNetIdWrapper::ToDebugString
                             ((FUniqueNetIdWrapper *)(local_88 + 0x20),&local_98);
          if ((pFVar6->Data).ArrayNum == 0) {
            local_d8 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_d8 = (pFVar6->Data).AllocatorInstance.Data;
          }
          FString::PrintfImpl((FString *)&local_c0,L"Name: %s, Type: %s, UniqueId: %s");
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        else {
          FString::FString((FString *)&local_c0,L"Wildcard");
        }
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
      }
      GetFilteredOnlineBeaconClientInstances(&local_a8,(FOnlineBeaconClientFilter *)local_88);
      iVar3 = local_a8.ArrayNum;
      pFVar1 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8;
      FVar8.Data = local_a8.AllocatorInstance.Data;
      while( true ) {
        if (local_a8.ArrayNum != iVar3) {
          `TCheckedPointerIterator<AOnlineBeaconClient_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_c8);
        }
        if (FVar8.Data == pFVar1) break;
        if (4 < (byte)LogBeacon._0_1_) {
          GetBeaconLogString(&local_98,*(AOnlineBeaconClient **)FVar8.Data);
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogBeacon);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        FVar8.Data = FVar8.Data + 8;
      }
      if (4 < (byte)LogBeacon._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogBeacon);
      }
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      goto LAB_14ec7a040;
    }
    if ((byte)LogBeacon._0_1_ < 3) goto LAB_14ec7a040;
    pFVar7 = &LOG_Static;
  }
  else {
    bVar4 = FParse::Command(&local_b0,L"DISCONNECT",true);
    if (!bVar4) {
      return true;
    }
    local_68._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_4_ = 0;
    local_88._12_4_ = 0;
    local_88._16_8_ = (FScriptContainerElement *)0x0;
    local_88._24_4_ = 0;
    local_88._28_4_ = 0;
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_68._padding_._0_1_ = 0;
    local_68.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ReplicationBytes.ArrayNum = 0;
    local_68.ReplicationBytes.ArrayMax = 0;
    local_38 = false;
    bVar4 = FOnlineBeaconClientFilter::Parse(local_b0,(FOnlineBeaconClientFilter *)local_88,None);
    if (bVar4) {
      if (4 < (byte)LogBeacon._0_1_) {
        if (local_38 == false) {
          pFVar6 = FUniqueNetIdWrapper::ToDebugString
                             ((FUniqueNetIdWrapper *)(local_88 + 0x20),&local_98);
          if ((pFVar6->Data).ArrayNum == 0) {
            local_d8 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_d8 = (pFVar6->Data).AllocatorInstance.Data;
          }
          FString::PrintfImpl((FString *)&local_c0,L"Name: %s, Type: %s, UniqueId: %s");
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        else {
          FString::FString((FString *)&local_c0,L"Wildcard");
        }
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
      }
      GetFilteredOnlineBeaconClientInstances(&local_c0,(FOnlineBeaconClientFilter *)local_88);
      iVar3 = local_c0.ArrayNum;
      pFVar1 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 8;
      FVar8.Data = local_c0.AllocatorInstance.Data;
      while( true ) {
        if (local_c0.ArrayNum != iVar3) {
          `TCheckedPointerIterator<AOnlineBeaconClient_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_c8);
        }
        if (FVar8.Data == pFVar1) break;
        pAVar2 = *(AOnlineBeaconClient **)FVar8.Data;
        this = (UNetConnection *)(**(code **)(pAVar2->_padding_ + 0x570))(pAVar2);
        if ((this == (UNetConnection *)0x0) ||
           (EVar5 = UNetConnection::GetConnectionState(this), EVar5 == USOCK_Closed)) {
          if (4 < (byte)LogBeacon._0_1_) {
            GetBeaconLogString((FString *)&local_a8,pAVar2);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_____Beacon_not__15306e9b8,
                       (FLogCategoryBase *)&LogBeacon);
            if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.AllocatorInstance.Data);
            }
          }
          FVar8.Data = FVar8.Data + 8;
        }
        else {
          if (4 < (byte)LogBeacon._0_1_) {
            GetBeaconLogString(&local_98,pAVar2);
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogBeacon);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          (**(code **)(this->_padding_ + 0x308))(this,1);
          UNetConnection::Close(this);
          FVar8.Data = FVar8.Data + 8;
        }
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      if (4 < (byte)LogBeacon._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogBeacon);
      }
      goto LAB_14ec7a040;
    }
    if ((byte)LogBeacon._0_1_ < 3) goto LAB_14ec7a040;
    pFVar7 = &LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogBeacon);
LAB_14ec7a040:
  FUniqueNetIdRepl::~FUniqueNetIdRepl((FUniqueNetIdRepl *)(local_88 + 0x20));
  if ((FScriptContainerElement *)local_88._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._16_8_);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return true;
}

// HandleVoiceCommands @ 14ec7d420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
HandleVoiceCommands(IOnlineSubsystem *param_1,UWorld *param_2,wchar_t *param_3,
                   FOutputDevice *param_4)

{
  FName FVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  FModuleManager *pFVar6;
  FName *pFVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *local_res18 [2];
  bool local_1a8;
  bool local_1a7;
  bool local_1a6;
  undefined1 local_1a5;
  int local_1a4 [2];
  float local_19c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_198;
  FString local_188;
  longlong *local_178;
  TReferenceControllerBase<1> *local_170;
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
  FName local_68;
  FName local_60;
  void *local_58 [2];
  FLogScopedVerbosityOverride local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  local_res18[0] = param_3;
  bVar4 = FParse::Command(local_res18,L"DUMP",true);
  if (!bVar4) {
    (**(code **)(param_1->_padding_ + 0x68))(param_1,local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    return true;
  }
  FLogScopedVerbosityOverride::FLogScopedVerbosityOverride
            (&local_48,(FLogCategoryBase *)&LogVoice,Display);
  pFVar6 = FModuleManager::Get();
  pFVar7 = FName::FName(&local_68,"Voice");
  bVar4 = FModuleManager::IsModuleLoaded(pFVar6,*pFVar7);
  if (bVar4) {
    pFVar7 = FName::FName(&local_60,"Voice");
    FVar1 = *pFVar7;
    pFVar6 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(pFVar6,FVar1);
  }
  local_1a6 = false;
  bVar4 = FConfigCacheIni::GetBool
                    (GConfig,L"/Script/Engine.GameSession",L"bRequiresPushToTalk",&local_1a6,
                     &GGameIni);
  if ((!bVar4) && (2 < (byte)LogOnlineVoice._0_1_)) {
    FString::PrintfImpl(&local_168,
                        L"Missing bRequiresPushToTalk key in [/Script/Engine.GameSession] of DefaultGame.ini"
                       );
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  local_1a4[0] = 0;
  bVar4 = FConfigCacheIni::GetInt
                    (GConfig,L"OnlineSubsystem",L"MaxLocalTalkers",local_1a4,&GEngineIni);
  if ((!bVar4) && (2 < (byte)LogOnlineVoice._0_1_)) {
    FString::PrintfImpl(&local_158,
                        L"Missing MaxLocalTalkers key in OnlineSubsystem of DefaultEngine.ini");
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  local_1a4[1] = 0;
  bVar4 = FConfigCacheIni::GetInt
                    (GConfig,L"OnlineSubsystem",L"MaxRemoteTalkers",local_1a4 + 1,&GEngineIni);
  if ((!bVar4) && (2 < (byte)LogOnlineVoice._0_1_)) {
    FString::PrintfImpl(&local_148,
                        L"Missing MaxRemoteTalkers key in OnlineSubsystem of DefaultEngine.ini");
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  local_19c = 0.0;
  bVar4 = FConfigCacheIni::GetFloat
                    (GConfig,L"OnlineSubsystem",L"VoiceNotificationDelta",&local_19c,&GEngineIni);
  if ((!bVar4) && (2 < (byte)LogOnlineVoice._0_1_)) {
    FString::PrintfImpl(&local_138,
                        L"Missing VoiceNotificationDelta key in OnlineSubsystem of DefaultEngine.ini"
                       );
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  local_1a8 = false;
  bVar4 = FConfigCacheIni::GetBool
                    (GConfig,L"OnlineSubsystem",L"bHasVoiceEnabled",&local_1a8,&GEngineIni);
  if ((!bVar4) && (4 < (byte)LogOnlineVoice._0_1_)) {
    FString::PrintfImpl(&local_128,
                        L"Voice interface disabled by config [OnlineSubsystem].bHasVoiceEnabled");
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  local_1a7 = false;
  bVar4 = FConfigCacheIni::GetBool
                    (GConfig,L"OnlineSubsystem",L"bDuckingOptOut",&local_1a7,&GEngineIni);
  if ((!bVar4) && (4 < (byte)LogOnlineVoice._0_1_)) {
    FString::PrintfImpl(&local_118,
                        L"Voice ducking not set by config [OnlineSubsystem].bDuckingOptOut");
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  (**(code **)(param_1->_padding_ + 0x68))(param_1,&local_178);
  if (local_178 != (longlong *)0x0) {
    if ((local_178 == (longlong *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pFVar8 = (FString *)(**(code **)(*local_178 + 0xe8))(local_178,local_58);
    if (&local_188 != pFVar8) {
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      local_188.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_188.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  if (3 < (byte)LogOnlineVoice._0_1_) {
    FString::PrintfImpl(&local_108,L"Voice Module Available: %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogOnlineVoice._0_1_) {
      FString::PrintfImpl(&local_f8,L"Voice Module Enabled: %s");
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (3 < (byte)LogOnlineVoice._0_1_) {
    FString::PrintfImpl(&local_e8,L"Voice Interface Available: %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogOnlineVoice._0_1_) {
      FString::PrintfImpl(&local_d8,L"Voice Interface Enabled: %s");
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogOnlineVoice._0_1_) {
        FString::PrintfImpl(&local_c8,L"Ducking Opt Out Enabled: %s");
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (3 < (byte)LogOnlineVoice._0_1_) {
          FString::PrintfImpl(&local_b8,L"Max Local Talkers: %d");
          UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (3 < (byte)LogOnlineVoice._0_1_) {
            FString::PrintfImpl(&local_a8,L"Max Remote Talkers: %d");
            UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (3 < (byte)LogOnlineVoice._0_1_) {
              FString::PrintfImpl(&local_98,L"Notification Delta: %0.2f");
              UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (3 < (byte)LogOnlineVoice._0_1_) {
                FString::PrintfImpl(&local_88,L"Voice Requires Push To Talk: %s");
                UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
      }
    }
  }
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  FString::ParseIntoArray(&local_188,&local_198,L"\n",false);
  iVar3 = local_198.ArrayNum;
  pFVar10 = local_198.AllocatorInstance.Data + (longlong)local_198.ArrayNum * 0x10;
  FVar9.Data = local_198.AllocatorInstance.Data;
  while( true ) {
    if (local_198.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1a5)
      ;
    }
    if (FVar9.Data == pFVar10) break;
    if (3 < (byte)LogOnlineVoice._0_1_) {
      FString::PrintfImpl(&local_78,L"%s");
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnlineVoice);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    FVar9.Data = FVar9.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_198.AllocatorInstance.Data,local_198.ArrayNum);
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  FLogScopedVerbosityOverride::~FLogScopedVerbosityOverride(&local_48);
  return true;
}

// IsRPCInitiatorValid @ 14ec819b0

bool __cdecl
`anonymous_namespace'::IsRPCInitiatorValid(FUniqueNetIdRepl *param_1,FUniqueNetIdRepl *param_2)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = BeaconConsoleVariables::CVarRequireInitiatorIsPartyLeader.Ref;
  bVar3 = IsInParallelGameThread();
  if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (pTVar2->ShadowedValue[0] == false) {
    return true;
  }
  bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
  if ((bVar3) &&
     (bVar3 = ::operator==((FUniqueNetIdWrapper *)param_2,(FUniqueNetIdWrapper *)param_1), bVar3)) {
    return true;
  }
  return false;
}

// OnlineExec @ 14ec8b200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl OnlineExec(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FSharedReferencer<1> *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FOnlineSubsystemModule *pFVar11;
  IOnlineSubsystem *pIVar12;
  FString *pFVar13;
  FTestSessionInterface *pFVar14;
  int *piVar15;
  FName *pFVar16;
  FTestSessionInterface *this;
  FTestCloudInterface *this_00;
  FTSTicker *pFVar17;
  FTestLeaderboardInterface *pFVar18;
  FTestStatsInterface *this_01;
  FTestVoice *this_02;
  FTestTimeInterface *this_03;
  undefined8 *puVar19;
  ulong64 uVar20;
  FTestTitleFileInterface *this_04;
  FTestEntitlementsInterface *this_05;
  FTestAchievementsInterface *this_06;
  FTestSharingInterface *this_07;
  FTestUserInterface *this_08;
  FTestMessageInterface *this_09;
  FTestStoreInterface *this_10;
  FTestPurchaseInterface *this_11;
  ForAnyElementType FVar21;
  FOnlineSessionSetting *pFVar22;
  FScriptContainerElement *pFVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  undefined1 auStackY_798 [32];
  wchar_t *local_748;
  Type local_740 [8];
  FString local_738;
  undefined1 local_728;
  TArray<FString,TSizedDefaultAllocator<32>_> local_720;
  TArray<FString,TSizedDefaultAllocator<32>_> local_710;
  TArray<FString,TSizedDefaultAllocator<32>_> local_700;
  TArray<FString,TSizedDefaultAllocator<32>_> local_6f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_6e0;
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  undefined8 local_630;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  TPairInitializer<FString_const_&,EOnlineKeyValuePairDataType::Type_&&> local_5d8;
  FString local_5c8;
  FString local_5b8;
  FOnlineSessionSetting local_5a8;
  FOnlineSessionSetting local_580;
  FOnlineSessionSetting local_558;
  FOnlineSessionSetting local_530;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString *local_4c8;
  Type *local_4c0;
  FString local_4b8;
  FString local_4a8;
  FDestructionSentinel local_498;
  int *local_480;
  FDestructionSentinel local_478;
  FSharedReferencer<1> *local_460;
  FDestructionSentinel local_458;
  undefined1 *local_440;
  FDestructionSentinel local_438;
  undefined1 *local_420;
  FDestructionSentinel local_418;
  undefined1 *local_400;
  FOnlineAccountCredentials local_3f8;
  FName local_3c8;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  undefined1 local_338 [64];
  void *local_2f8;
  undefined4 local_2f0;
  FOnlineSessionSettings local_2e8;
  FOnlineSessionSettings local_208;
  FOnlineSessionSettings local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_798;
  cVar5 = '\0';
  local_748 = param_2;
  bVar4 = FParse::Command(&local_748,L"ONLINE",true);
  if (!bVar4) {
    return false;
  }
  this = (FTestSessionInterface *)0x0;
  local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_738.Data.ArrayNum = 0;
  local_738.Data.ArrayMax = 0;
  FParse::Value(local_748,L"Sub=",&local_738,true,(wchar_t **)0x0);
  iVar26 = 0;
  iVar10 = local_738.Data.ArrayNum + -1;
  if (local_738.Data.ArrayNum == 0) {
    iVar10 = iVar26;
  }
  if (iVar10 < 1) {
    FParse::Value(local_748,L"Subsystem=",&local_738,true,(wchar_t **)0x0);
    iVar10 = local_738.Data.ArrayNum + -1;
    if (local_738.Data.ArrayNum == 0) {
      iVar10 = iVar26;
    }
    iVar27 = local_738.Data.ArrayNum;
    if (0 < iVar10) {
      iVar10 = local_738.Data.ArrayNum + 9;
      iVar27 = 10;
      goto LAB_14ec8b2ea;
    }
  }
  else {
    iVar10 = local_738.Data.ArrayNum + 3;
    iVar27 = 4;
LAB_14ec8b2ea:
    if (local_738.Data.ArrayNum == 0) {
      iVar10 = iVar27;
    }
    local_748 = local_748 + iVar10;
    iVar27 = local_738.Data.ArrayNum;
  }
  pwVar24 = L"";
  iVar10 = iVar27 + -1;
  if (iVar27 == 0) {
    iVar10 = iVar26;
  }
  if (iVar10 == 0) {
    local_630 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                    ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar11 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                        (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::OnlineSubsystemModuleName);
    local_5d8._4_8_ = local_630;
  }
  else {
    FVar21.Data = (FScriptContainerElement *)L"";
    if (iVar27 != 0) {
      FVar21.Data = local_738.Data.AllocatorInstance.Data;
    }
    FName::FName((FName *)((longlong)&local_5d8.Key + 4),(wchar_t *)FVar21.Data);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                    ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar11 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                        (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::OnlineSubsystemModuleName);
  }
  pIVar12 = (IOnlineSubsystem *)(**(code **)(pFVar11->_padding_ + 0x50))(pFVar11,local_5d8._4_8_);
  if ((pIVar12 != (IOnlineSubsystem *)0x0) &&
     (cVar5 = (**(code **)(pIVar12->_padding_ + 0x160))(pIVar12,param_1,local_748), cVar5 == '\0'))
  {
    bVar4 = FParse::Command(&local_748,L"TEST",true);
    if (bVar4) {
      bVar4 = FParse::Command(&local_748,L"FRIENDS",true);
      if (bVar4) {
        local_710.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_710.ArrayNum = 0;
        local_710.ArrayMax = 0;
        FParse::Token(&local_6d0,&local_748,false);
        while (1 < local_6d0.Data.ArrayNum) {
          if (((local_710.AllocatorInstance.Data <= (FScriptContainerElement *)&local_6d0) &&
              ((FScriptContainerElement *)&local_6d0 <
               local_710.AllocatorInstance.Data + (longlong)local_710.ArrayMax * 0x10)) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar10 = local_710.ArrayNum;
          if (local_710.ArrayNum == local_710.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_710.AllocatorInstance,&local_710.ArrayMax);
          }
          FVar21.Data = local_6d0.Data.AllocatorInstance.Data;
          pFVar23 = local_710.AllocatorInstance.Data + (longlong)iVar10 * 0x10;
          local_710.ArrayNum = iVar10 + 1;
          *(FScriptContainerElement **)pFVar23 = (FScriptContainerElement *)0x0;
          lVar25 = (longlong)local_6d0.Data.ArrayNum;
          *(int *)(pFVar23 + 8) = local_6d0.Data.ArrayNum;
          if (local_6d0.Data.ArrayNum == 0) {
            *(int *)(pFVar23 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_6d0.Data.ArrayNum,0,(ForAnyElementType *)pFVar23,
                       local_6d0.Data.ArrayNum,(int *)(pFVar23 + 0xc));
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar23,FVar21.Data,lVar25 * 2);
          }
          pFVar13 = FParse::Token(&local_3a8,&local_748,false);
          if (&local_6d0 != pFVar13) {
            if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
            }
            local_6d0.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_6d0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
            local_6d0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
            (pFVar13->Data).ArrayNum = 0;
            (pFVar13->Data).ArrayMax = 0;
          }
          if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
          }
        }
        if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
        }
        pFVar14 = operator_new(0xd8);
        FVar21.Data = local_738.Data.AllocatorInstance.Data;
        if (pFVar14 != (FTestSessionInterface *)0x0) {
          pFVar14->_padding_ = 0;
          lVar25 = (longlong)local_738.Data.ArrayNum;
          *(int *)&pFVar14->_padding_ = local_738.Data.ArrayNum;
          piVar15 = (int *)((longlong)&pFVar14->_padding_ + 4);
          if (local_738.Data.ArrayNum == 0) {
            *piVar15 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_738.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                       local_738.Data.ArrayNum,piVar15);
            memcpy((FScriptContainerElement *)pFVar14->_padding_,FVar21.Data,lVar25 * 2);
          }
          pFVar14->_padding_ = 0;
          (((FString *)&pFVar14->_padding_)->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar14->Subsystem).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->Subsystem).Data.ArrayNum = 0;
          *(undefined8 *)&pFVar14->bOverallSuccess = 0;
          (pFVar14->UserId).Object = (FUniqueNetId *)0x0;
          *(undefined4 *)&(pFVar14->UserId).SharedReferenceCount.ReferenceController = 0;
          (((FString *)&pFVar14->World)->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar14->FriendsCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->FriendsCache).ArrayNum = 0;
          (pFVar14->Identity).Object = (IOnlineIdentity *)0x0;
          (pFVar14->Identity).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          (pFVar14->SessionInt).Object = (IOnlineSession *)0x0;
          (pFVar14->SessionInt).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          FString::FString((FString *)&pFVar14->Friends,L"default");
          *(undefined8 *)&pFVar14->OnSessionUserInviteAcceptedDelegate = 0;
          *(undefined8 *)
           &((TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
              *)&pFVar14->OnSessionUserInviteAcceptedDelegate)->field_0x8 = 0;
          *(undefined8 *)
           &((TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
              *)&pFVar14->OnSessionUserInviteAcceptedDelegate)->field_0x10 = 0;
          *(undefined8 *)&pFVar14->OnCreateSessionCompleteDelegate = 0;
          *(undefined8 *)&(pFVar14->OnCreateSessionCompleteDelegate).field_0x8 = 0;
          *(undefined8 *)&(pFVar14->OnCreateSessionCompleteDelegate).field_0x10 = 0;
          *(undefined4 *)&pFVar14->OnStartSessionCompleteDelegate = 0x1010101;
          *(undefined2 *)&(pFVar14->OnStartSessionCompleteDelegate).field_0x4 = 0x100;
          FString::FString((FString *)&(pFVar14->OnStartSessionCompleteDelegate).field_0x8,L"ut");
          this = pFVar14;
        }
        FTestFriendsInterface::Test((FTestFriendsInterface *)this,param_1,&local_710);
        cVar5 = '\x01';
        DestructItems<FString,int>((FString *)local_710.AllocatorInstance.Data,local_710.ArrayNum);
        if (local_710.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_710.AllocatorInstance.Data);
        }
      }
      else {
        bVar4 = FParse::Command(&local_748,L"SESSIONHOST",true);
        if (bVar4) {
          bVar4 = FParse::Command(&local_748,L"LAN",true);
          FOnlineSessionSettings::FOnlineSessionSettings(&local_2e8);
          local_670.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_670.Data.ArrayNum = 0;
          local_670.Data.ArrayMax = 0;
          bVar7 = FParse::Token(&local_748,&local_670,false,L'\0');
          if (bVar7) {
            do {
              local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_650.Data.ArrayNum = 0;
              local_650.Data.ArrayMax = 0;
              FParse::Token(&local_748,&local_650,false,L'\0');
              bVar7 = FString::IsNumeric(&local_650);
              if (bVar7) {
                FVar21.Data = (FScriptContainerElement *)L"";
                if (local_650.Data.ArrayNum != 0) {
                  FVar21.Data = local_650.Data.AllocatorInstance.Data;
                }
                iVar10 = _wtoi((wchar_t *)FVar21.Data);
                local_580.Data.Type = Empty;
                local_580.Data.CachedEstimatedMaxEscapedStringSize = 0;
                local_580.Data.Value.AsInt64 = 0;
                local_580.Data.Value._8_8_ = 0;
                FVariantData::SetValue(&local_580.Data,iVar10);
                local_580.AdvertisementType = DontAdvertise;
                FVar21.Data = (FScriptContainerElement *)L"";
                if (local_670.Data.ArrayNum != 0) {
                  FVar21.Data = local_670.Data.AllocatorInstance.Data;
                }
                local_580.ID = -1;
                pFVar16 = FName::FName(&local_3c8,(wchar_t *)FVar21.Data);
                FOnlineSessionSettings::Set(&local_2e8,*pFVar16,&local_580);
                pFVar22 = &local_580;
              }
              else {
                local_5a8.Data.Type = Empty;
                local_5a8.Data.CachedEstimatedMaxEscapedStringSize = 0;
                local_5a8.Data.Value.AsInt64 = 0;
                local_5a8.Data.Value._8_8_ = 0;
                FVariantData::SetValue(&local_5a8.Data,&local_650);
                local_5a8.AdvertisementType = DontAdvertise;
                FVar21.Data = (FScriptContainerElement *)L"";
                if (local_670.Data.ArrayNum != 0) {
                  FVar21.Data = local_670.Data.AllocatorInstance.Data;
                }
                local_5a8.ID = -1;
                pFVar16 = FName::FName(&local_3b0,(wchar_t *)FVar21.Data);
                FOnlineSessionSettings::Set(&local_2e8,*pFVar16,&local_5a8);
                pFVar22 = &local_5a8;
              }
              FVariantData::Empty(&pFVar22->Data);
              if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_650.Data.AllocatorInstance.Data);
              }
              bVar7 = FParse::Token(&local_748,&local_670,false,L'\0');
            } while (bVar7);
          }
          pFVar14 = operator_new(0x428);
          if (pFVar14 != (FTestSessionInterface *)0x0) {
            this = FTestSessionInterface::FTestSessionInterface(pFVar14,&local_738,true);
          }
          FTestSessionInterface::Test(this,param_1,bVar4,false,&local_2e8);
          cVar5 = '\x01';
          if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_670.Data.AllocatorInstance.Data);
          }
          FOnlineSessionSettings::~FOnlineSessionSettings(&local_2e8);
        }
        else {
          bVar4 = FParse::Command(&local_748,L"SESSIONCLIENT",true);
          if (bVar4) {
            bVar4 = FParse::Command(&local_748,L"LAN",true);
            FOnlineSessionSettings::FOnlineSessionSettings(&local_128);
            pFVar14 = operator_new(0x428);
            if (pFVar14 != (FTestSessionInterface *)0x0) {
              this = FTestSessionInterface::FTestSessionInterface(pFVar14,&local_738,false);
            }
            FTestSessionInterface::Test(this,param_1,bVar4,false,&local_128);
            cVar5 = '\x01';
            FOnlineSessionSettings::~FOnlineSessionSettings(&local_128);
          }
          else {
            bVar4 = FParse::Command(&local_748,L"STARTMATCHMAKING",true);
            if (bVar4) {
              FOnlineSessionSettings::FOnlineSessionSettings(&local_208);
              local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_660.Data.ArrayNum = 0;
              local_660.Data.ArrayMax = 0;
              bVar4 = FParse::Token(&local_748,&local_660,false,L'\0');
              if (bVar4) {
                do {
                  local_640.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_640.Data.ArrayNum = 0;
                  local_640.Data.ArrayMax = 0;
                  FParse::Token(&local_748,&local_640,false,L'\0');
                  bVar4 = FString::IsNumeric(&local_640);
                  if (bVar4) {
                    FVar21.Data = (FScriptContainerElement *)L"";
                    if (local_640.Data.ArrayNum != 0) {
                      FVar21.Data = local_640.Data.AllocatorInstance.Data;
                    }
                    iVar10 = _wtoi((wchar_t *)FVar21.Data);
                    local_558.Data.Type = Empty;
                    local_558.Data.CachedEstimatedMaxEscapedStringSize = 0;
                    local_558.Data.Value.AsInt64 = 0;
                    local_558.Data.Value._8_8_ = 0;
                    FVariantData::SetValue(&local_558.Data,iVar10);
                    local_558.AdvertisementType = DontAdvertise;
                    FVar21.Data = (FScriptContainerElement *)L"";
                    if (local_660.Data.ArrayNum != 0) {
                      FVar21.Data = local_660.Data.AllocatorInstance.Data;
                    }
                    local_558.ID = -1;
                    pFVar16 = FName::FName(&local_3c0,(wchar_t *)FVar21.Data);
                    FOnlineSessionSettings::Set(&local_208,*pFVar16,&local_558);
                    pFVar22 = &local_558;
                  }
                  else {
                    local_530.Data.Type = Empty;
                    local_530.Data.CachedEstimatedMaxEscapedStringSize = 0;
                    local_530.Data.Value.AsInt64 = 0;
                    local_530.Data.Value._8_8_ = 0;
                    FVariantData::SetValue(&local_530.Data,&local_640);
                    local_530.AdvertisementType = DontAdvertise;
                    FVar21.Data = (FScriptContainerElement *)L"";
                    if (local_660.Data.ArrayNum != 0) {
                      FVar21.Data = local_660.Data.AllocatorInstance.Data;
                    }
                    local_530.ID = -1;
                    pFVar16 = FName::FName(&local_3b8,(wchar_t *)FVar21.Data);
                    FOnlineSessionSettings::Set(&local_208,*pFVar16,&local_530);
                    pFVar22 = &local_530;
                  }
                  FVariantData::Empty(&pFVar22->Data);
                  if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_640.Data.AllocatorInstance.Data);
                  }
                  bVar4 = FParse::Token(&local_748,&local_660,false,L'\0');
                } while (bVar4);
              }
              pFVar14 = operator_new(0x428);
              if (pFVar14 != (FTestSessionInterface *)0x0) {
                this = FTestSessionInterface::FTestSessionInterface(pFVar14,&local_738,false);
              }
              FTestSessionInterface::Test(this,param_1,false,true,&local_208);
              cVar5 = '\x01';
              if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_660.Data.AllocatorInstance.Data);
              }
              FOnlineSessionSettings::~FOnlineSessionSettings(&local_208);
            }
            else {
              bVar4 = FParse::Command(&local_748,L"CLOUD",true);
              if (bVar4) {
                this_00 = operator_new(0x180);
                if (this_00 == (FTestCloudInterface *)0x0) {
                  FTestCloudInterface::Test((FTestCloudInterface *)0x0,param_1);
                  cVar5 = '\x01';
                }
                else {
                  pFVar17 = FTSTicker::GetCoreTicker();
                  FTSTickerObjectBase::FTSTickerObjectBase
                            ((FTSTickerObjectBase *)this_00,0.0,pFVar17);
                  FVar21.Data = local_738.Data.AllocatorInstance.Data;
                  pFVar13 = &this_00->Subsystem;
                  this_00->_padding_ = (longlong)&___7FTestCloudInterface__6B_;
                  piVar15 = &(this_00->Subsystem).Data.ArrayMax;
                  (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  lVar25 = (longlong)local_738.Data.ArrayNum;
                  (this_00->Subsystem).Data.ArrayNum = local_738.Data.ArrayNum;
                  if (local_738.Data.ArrayNum == 0) {
                    *piVar15 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_738.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,
                               local_738.Data.ArrayNum,piVar15);
                    memcpy((pFVar13->Data).AllocatorInstance.Data,FVar21.Data,lVar25 * 2);
                  }
                  this_00->bOverallSuccess = true;
                  (this_00->UserCloud).Object = (IOnlineUserCloud *)0x0;
                  (this_00->UserCloud).SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  (this_00->SharedCloud).Object = (IOnlineSharedCloud *)0x0;
                  (this_00->SharedCloud).SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  *(undefined8 *)&this_00->EnumerationDelegate = 0;
                  *(undefined8 *)&(this_00->EnumerationDelegate).field_0x8 = 0;
                  *(undefined4 *)&(this_00->EnumerationDelegate).field_0x10 = 0;
                  *(undefined8 *)&this_00->OnWriteUserCloudFileCompleteDelegate = 0;
                  *(undefined8 *)&(this_00->OnWriteUserCloudFileCompleteDelegate).field_0x8 = 0;
                  *(undefined4 *)&(this_00->OnWriteUserCloudFileCompleteDelegate).field_0x10 = 0;
                  *(undefined8 *)&this_00->OnWriteUserFileCanceledDelegate = 0;
                  *(undefined8 *)&(this_00->OnWriteUserFileCanceledDelegate).field_0x8 = 0;
                  *(undefined4 *)&(this_00->OnWriteUserFileCanceledDelegate).field_0x10 = 0;
                  *(undefined8 *)&this_00->OnReadEnumeratedUserFilesCompleteDelegate = 0;
                  *(undefined8 *)&(this_00->OnReadEnumeratedUserFilesCompleteDelegate).field_0x8 = 0
                  ;
                  *(undefined4 *)&(this_00->OnReadEnumeratedUserFilesCompleteDelegate).field_0x10 =
                       0;
                  *(undefined8 *)&this_00->OnDeleteEnumeratedUserFilesCompleteDelegate = 0;
                  *(undefined8 *)&(this_00->OnDeleteEnumeratedUserFilesCompleteDelegate).field_0x8 =
                       0;
                  *(undefined4 *)&(this_00->OnDeleteEnumeratedUserFilesCompleteDelegate).field_0x10
                       = 0;
                  *(undefined8 *)&this_00->OnWriteSharedCloudFileCompleteDelegate = 0;
                  *(undefined8 *)&(this_00->OnWriteSharedCloudFileCompleteDelegate).field_0x8 = 0;
                  *(undefined4 *)&(this_00->OnWriteSharedCloudFileCompleteDelegate).field_0x10 = 0;
                  *(undefined8 *)&this_00->OnReadEnumerateSharedFileCompleteDelegate = 0;
                  *(undefined8 *)&(this_00->OnReadEnumerateSharedFileCompleteDelegate).field_0x8 = 0
                  ;
                  *(undefined4 *)&(this_00->OnReadEnumerateSharedFileCompleteDelegate).field_0x10 =
                       0;
                  (this_00->EnumerationDelegateHandle).ID = 0;
                  (this_00->OnWriteUserCloudFileCompleteDelegateHandle).ID = 0;
                  (this_00->OnWriteUserFileCanceledDelegateHandle).ID = 0;
                  (this_00->OnReadEnumeratedUserFilesCompleteDelegateHandle).ID = 0;
                  (this_00->OnDeleteEnumeratedUserFilesCompleteDelegateHandle).ID = 0;
                  (this_00->OnWriteSharedCloudFileCompleteDelegateHandle).ID = 0;
                  (this_00->OnReadEnumerateSharedFileCompleteDelegateHandle).ID = 0;
                  (this_00->UserId).Object = (FUniqueNetId *)0x0;
                  (this_00->UserId).SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  (this_00->CloudFileHandles).AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  (this_00->CloudFileHandles).ArrayNum = 0;
                  (this_00->CloudFileHandles).ArrayMax = 0;
                  (this_00->RandomSharedFileHandles).AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  (this_00->RandomSharedFileHandles).ArrayNum = 0;
                  (this_00->RandomSharedFileHandles).ArrayMax = 0;
                  this_00->WriteUserCloudFileCount = 0;
                  this_00->WriteSharedCloudFileCount = 0;
                  this_00->ReadUserFileCount = 0;
                  this_00->ReadSharedFileCount = 0;
                  this_00->DeleteUserFileCount = 0;
                  this_00->CurrentTestPhase = EnumerateFiles;
                  this_00->LastTestPhase = Invalid;
                  FTestCloudInterface::Test(this_00,param_1);
                  cVar5 = '\x01';
                }
              }
              else {
                bVar4 = FParse::Command(&local_748,L"LEADERBOARDS",true);
                if (bVar4) {
                  local_5f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_5f8.Data.ArrayNum = 0;
                  local_5f8.Data.ArrayMax = 0;
                  local_608.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_608.Data.ArrayNum = 0;
                  local_608.Data.ArrayMax = 0;
                  local_618.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_618.Data.ArrayNum = 0;
                  local_618.Data.ArrayMax = 0;
                  bVar4 = FParse::Token(&local_748,&local_5f8,false,L'\0');
                  if ((bVar4) && (bVar4 = FParse::Token(&local_748,&local_608,false,L'\0'), bVar4))
                  {
                    local_338._0_8_ = 0;
                    local_338._8_8_ = 0;
                    local_338._32_8_ = 0;
                    local_338._40_4_ = 0;
                    local_338._44_4_ = 0x80;
                    local_338._48_4_ = 0xffffffff;
                    local_338._52_4_ = 0;
                    local_2f8 = (void *)0x0;
                    local_2f0 = 0;
                    local_680.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_680.Data.ArrayNum = 0;
                    local_680.Data.ArrayMax = 0;
                    bVar4 = FParse::Token(&local_748,&local_680,false,L'\0');
                    if (bVar4) {
                      do {
                        local_628.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_628.Data.ArrayNum = 0;
                        local_628.Data.ArrayMax = 0;
                        bVar4 = FParse::Token(&local_748,&local_628,false,L'\0');
                        if (bVar4) {
                          local_740[0] = EOnlineKeyValuePairDataType::FromString(&local_628);
                          local_4c8 = &local_680;
                          local_4c0 = local_740;
                          TSet<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>,TDefaultMapHashableKeyFuncs<FString,enum_EOnlineKeyValuePairDataType::Type,0>,FDefaultSetAllocator>
                          ::
                          Emplace<TPairInitializer<FString_const_&,enum_EOnlineKeyValuePairDataType::Type_&&>_>
                                    (local_338,&local_5d8,(bool *)&local_4c8);
                        }
                        else {
                          if (4 < (byte)LogOnlineLeaderboard._0_1_) {
                            FString::PrintfImpl(&local_5c8,
                                                L"Setting %s as UserId for LEADERBOARDS TEST");
                            UE::Logging::Private::BasicLog<5>
                                      (&LOG_Static,(FLogCategoryBase *)&LogOnlineLeaderboard);
                            if (local_5c8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
                            }
                          }
                          iVar10 = local_680.Data.ArrayNum + -1;
                          if (local_680.Data.ArrayNum == 0) {
                            iVar10 = 0;
                          }
                          FString::AssignRange
                                    (&local_618,(wchar_t *)local_680.Data.AllocatorInstance.Data,
                                     iVar10);
                        }
                        if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_628.Data.AllocatorInstance.Data);
                        }
                        bVar4 = FParse::Token(&local_748,&local_680,false,L'\0');
                      } while (bVar4);
                    }
                    pFVar18 = operator_new(0x188);
                    if (pFVar18 != (FTestLeaderboardInterface *)0x0) {
                      this = (FTestSessionInterface *)
                             FTestLeaderboardInterface::FTestLeaderboardInterface
                                       (pFVar18,&local_738);
                    }
                    FTestLeaderboardInterface::Test
                              ((FTestLeaderboardInterface *)this,param_1,&local_5f8,&local_608,
                               (TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
                                *)local_338,&local_618);
                    if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_680.Data.AllocatorInstance.Data);
                    }
                    local_2f0 = 0;
                    if (local_2f8 != (void *)0x0) {
                      FMemory::Free(local_2f8);
                    }
                    TSparseArray<TSparseSetElement<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              (local_338);
                  }
                  else {
                    pFVar18 = operator_new(0x188);
                    if (pFVar18 != (FTestLeaderboardInterface *)0x0) {
                      this = (FTestSessionInterface *)
                             FTestLeaderboardInterface::FTestLeaderboardInterface
                                       (pFVar18,&local_738);
                    }
                    FTestLeaderboardInterface::TestFromConfig
                              ((FTestLeaderboardInterface *)this,param_1);
                  }
                  cVar5 = '\x01';
                  if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_618.Data.AllocatorInstance.Data);
                  }
                  if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_608.Data.AllocatorInstance.Data);
                  }
                  if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  bVar4 = FParse::Command(&local_748,L"STATS",true);
                  if (bVar4) {
                    this_01 = operator_new(0x70);
                    if (this_01 != (FTestStatsInterface *)0x0) {
                      this = (FTestSessionInterface *)
                             FTestStatsInterface::FTestStatsInterface(this_01,&local_738);
                    }
                    FTestStatsInterface::Test((FTestStatsInterface *)this,param_1,local_748);
                    cVar5 = '\x01';
                  }
                  else {
                    bVar4 = FParse::Command(&local_748,L"PRESENCE",true);
                    if (bVar4) {
                      pFVar14 = operator_new(0x150);
                      if (pFVar14 != (FTestSessionInterface *)0x0) {
                        pFVar17 = FTSTicker::GetCoreTicker();
                        FTSTickerObjectBase::FTSTickerObjectBase
                                  ((FTSTickerObjectBase *)pFVar14,0.0,pFVar17);
                        FVar21.Data = local_738.Data.AllocatorInstance.Data;
                        pFVar13 = (FString *)&pFVar14->_padding_;
                        pFVar14->_padding_ = (longlong)&___7FTestPresenceInterface__6B_;
                        piVar15 = (int *)((longlong)
                                          &(pFVar14->Subsystem).Data.AllocatorInstance.Data + 4);
                        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        lVar25 = (longlong)local_738.Data.ArrayNum;
                        *(int *)&(pFVar14->Subsystem).Data.AllocatorInstance.Data =
                             local_738.Data.ArrayNum;
                        if (local_738.Data.ArrayNum == 0) {
                          *piVar15 = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (2,2,local_738.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,
                                     local_738.Data.ArrayNum,piVar15);
                          memcpy((pFVar13->Data).AllocatorInstance.Data,FVar21.Data,lVar25 * 2);
                        }
                        (pFVar14->Subsystem).Data.ArrayNum = 0;
                        (pFVar14->Subsystem).Data.ArrayMax = 0;
                        (pFVar14->UserId).Object = (FUniqueNetId *)0x0;
                        (pFVar14->UserId).SharedReferenceCount.ReferenceController =
                             (TReferenceControllerBase<1> *)0x0;
                        (((FString *)&pFVar14->World)->Data).AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        (pFVar14->FriendsCache).AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        (pFVar14->FriendsCache).ArrayNum = 0;
                        (pFVar14->FriendsCache).ArrayMax = 0;
                        (pFVar14->Identity).Object = (IOnlineIdentity *)0x0;
                        (pFVar14->Identity).SharedReferenceCount.ReferenceController =
                             (TReferenceControllerBase<1> *)0x0;
                        (pFVar14->SessionInt).Object = (IOnlineSession *)0x0;
                        (pFVar14->SessionInt).SharedReferenceCount.ReferenceController =
                             (TReferenceControllerBase<1> *)0x0;
                        (pFVar14->Friends).Object = (IOnlineFriends *)0x0;
                        *(undefined4 *)&(pFVar14->Friends).SharedReferenceCount.ReferenceController
                             = 0x3b;
                        *(undefined1 *)
                         ((longlong)&(pFVar14->Friends).SharedReferenceCount.ReferenceController + 4
                         ) = 0;
                        *(undefined8 *)&pFVar14->OnSessionUserInviteAcceptedDelegate = 0;
                        *(undefined8 *)
                         &((TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
                            *)&pFVar14->OnSessionUserInviteAcceptedDelegate)->field_0x8 = 0;
                        *(undefined8 *)
                         &((TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
                            *)&pFVar14->OnSessionUserInviteAcceptedDelegate)->field_0x10 = 0;
                        *(undefined8 *)&pFVar14->OnCreateSessionCompleteDelegate = 0;
                        (pFVar14->OnCreateSessionCompleteDelegate).field_0x8 = 1;
                        *(undefined8 *)&(pFVar14->OnCreateSessionCompleteDelegate).field_0x10 = 0;
                        *(undefined8 *)&pFVar14->OnStartSessionCompleteDelegate = 0;
                        *(undefined8 *)&pFVar14->OnEndSessionCompleteDelegate = 0;
                        *(undefined4 *)&(pFVar14->OnEndSessionCompleteDelegate).field_0x8 = 0;
                        *(undefined4 *)&(pFVar14->OnEndSessionCompleteDelegate).field_0xc = 0x80;
                        *(undefined4 *)&(pFVar14->OnEndSessionCompleteDelegate).field_0x10 =
                             0xffffffff;
                        *(undefined4 *)&(pFVar14->OnEndSessionCompleteDelegate).field_0x14 = 0;
                        ((FSharedReferencer<1> *)
                        &(pFVar14->OnDestroySessionCompleteDelegate).field_0x8)->ReferenceController
                             = (TReferenceControllerBase<1> *)0x0;
                        *(undefined4 *)&(pFVar14->OnDestroySessionCompleteDelegate).field_0x10 = 0;
                        *(undefined8 *)&pFVar14->OnUpdateSessionCompleteDelegate = 0;
                        *(undefined8 *)&(pFVar14->OnUpdateSessionCompleteDelegate).field_0x8 = 0;
                        *(undefined4 *)&(pFVar14->OnUpdateSessionCompleteDelegate).field_0x10 = 0;
                        *(undefined8 *)&pFVar14->OnRegisterPlayersCompleteDelegate = 0;
                        *(undefined8 *)&(pFVar14->OnRegisterPlayersCompleteDelegate).field_0x8 = 0;
                        *(undefined4 *)&(pFVar14->OnRegisterPlayersCompleteDelegate).field_0x10 = 0;
                        *(undefined8 *)&pFVar14->OnUnregisterPlayersCompleteDelegate = 0;
                        *(undefined8 *)&(pFVar14->OnUnregisterPlayersCompleteDelegate).field_0x8 = 0
                        ;
                        *(undefined8 *)&(pFVar14->OnUnregisterPlayersCompleteDelegate).field_0x10 =
                             0;
                        this = pFVar14;
                      }
                      pFVar13 = FParse::Token(&local_398,&local_748,false);
                      FTestPresenceInterface::Test((FTestPresenceInterface *)this,param_1,pFVar13);
                      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_398.Data.AllocatorInstance.Data);
                        cVar5 = '\x01';
                        goto LAB_14ec8d372;
                      }
                    }
                    else {
                      bVar4 = FParse::Command(&local_748,L"VOICE",true);
                      if (bVar4) {
                        this_02 = operator_new(0x140);
                        if (this_02 != (FTestVoice *)0x0) {
                          this = (FTestSessionInterface *)FTestVoice::FTestVoice(this_02);
                        }
                        FTestVoice::Test((FTestVoice *)this);
                        cVar5 = '\x01';
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"TIME",true);
                      if (bVar4) {
                        this_03 = operator_new(0x40);
                        FVar21.Data = local_738.Data.AllocatorInstance.Data;
                        if (this_03 == (FTestTimeInterface *)0x0) {
                          FTestTimeInterface::Test((FTestTimeInterface *)0x0,param_1);
                          cVar5 = '\x01';
                        }
                        else {
                          (this_03->SubsystemName).Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          lVar25 = (longlong)local_738.Data.ArrayNum;
                          (this_03->SubsystemName).Data.ArrayNum = local_738.Data.ArrayNum;
                          piVar15 = &(this_03->SubsystemName).Data.ArrayMax;
                          if (local_738.Data.ArrayNum == 0) {
                            *piVar15 = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (2,2,local_738.Data.ArrayNum,0,(ForAnyElementType *)this_03,
                                       local_738.Data.ArrayNum,piVar15);
                            memcpy((this_03->SubsystemName).Data.AllocatorInstance.Data,FVar21.Data,
                                   lVar25 * 2);
                          }
                          (this_03->OnlineTime).Object = (IOnlineTime *)0x0;
                          (this_03->OnlineTime).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          *(undefined8 *)&this_03->OnQueryServerUtcTimeCompleteDelegate = 0;
                          *(undefined8 *)&(this_03->OnQueryServerUtcTimeCompleteDelegate).field_0x8
                               = 0;
                          *(undefined4 *)&(this_03->OnQueryServerUtcTimeCompleteDelegate).field_0x10
                               = 0;
                          (this_03->OnQueryServerUtcTimeCompleteDelegateHandle).ID = 0;
                          FTestTimeInterface::Test(this_03,param_1);
                          cVar5 = '\x01';
                        }
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"IDENTITY",true);
                      if (bVar4) {
                        FParse::Token(&local_5e8,&local_748,false);
                        FParse::Token(&local_4a8,&local_748,false);
                        FParse::Token(&local_4b8,&local_748,false);
                        FString::FString(&local_5b8,L"logout");
                        if (local_5e8.Data.ArrayNum == local_5b8.Data.ArrayNum) {
                          if (local_5e8.Data.ArrayNum < 2) {
                            bVar4 = true;
                          }
                          else {
                            iVar10 = FGenericPlatformStricmp::Stricmp
                                               ((wchar_t *)local_5e8.Data.AllocatorInstance.Data,
                                                (wchar_t *)local_5b8.Data.AllocatorInstance.Data);
                            bVar4 = iVar10 == 0;
                          }
                        }
                        else {
                          bVar4 = local_5e8.Data.ArrayNum + local_5b8.Data.ArrayNum == 1;
                        }
                        if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
                        }
                        pFVar14 = operator_new(0xb0);
                        FVar21.Data = local_738.Data.AllocatorInstance.Data;
                        if (pFVar14 != (FTestSessionInterface *)0x0) {
                          pFVar14->_padding_ = 0;
                          lVar25 = (longlong)local_738.Data.ArrayNum;
                          *(int *)&pFVar14->_padding_ = local_738.Data.ArrayNum;
                          piVar15 = (int *)((longlong)&pFVar14->_padding_ + 4);
                          if (local_738.Data.ArrayNum == 0) {
                            *piVar15 = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (2,2,local_738.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                                       local_738.Data.ArrayNum,piVar15);
                            memcpy((void *)pFVar14->_padding_,FVar21.Data,lVar25 * 2);
                          }
                          pFVar14->_padding_ = 0;
                          piVar15 = &(pFVar14->Subsystem).Data.ArrayNum;
                          (((FString *)&pFVar14->_padding_)->Data).AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          (pFVar14->Subsystem).Data.ArrayNum = 0;
                          (pFVar14->Subsystem).Data.ArrayMax = 0;
                          *(undefined4 *)&pFVar14->bOverallSuccess = 0;
                          (pFVar14->Subsystem).Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::
                          GetWriteAccessScope((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>
                                               *)&pFVar14->Subsystem,(FWriteAccessScope *)&local_498
                                             );
                          local_480 = piVar15;
                          puVar19 = UE::Core::Private::DelegateAllocate
                                              (0x28,(FDelegateAllocation *)piVar15);
                          if (puVar19 != (undefined8 *)0x0) {
                            *puVar19 = &
                                       ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            uVar20 = FDelegateHandle::GenerateNewID();
                            puVar19[2] = uVar20;
                            *puVar19 = &
                                       ___7__TBaseRawMethodDelegateInstance__0A_VFTestIdentityInterface____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            puVar19[4] = FTestIdentityInterface::OnLoginComplete;
                            puVar19[3] = pFVar14;
                          }
                          if (local_498.bDestroyed == false) {
                            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                                      (local_498.Accessor,&local_498);
                          }
                          pFVar1 = &(pFVar14->UserId).SharedReferenceCount;
                          (pFVar14->UserId).Object = (FUniqueNetId *)0x0;
                          pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
                          *(undefined4 *)
                           &(((FString *)&pFVar14->World)->Data).AllocatorInstance.Data = 0;
                          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::
                          GetWriteAccessScope((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>
                                               *)&pFVar14->UserId,(FWriteAccessScope *)&local_478);
                          local_460 = pFVar1;
                          puVar19 = UE::Core::Private::DelegateAllocate
                                              (0x28,(FDelegateAllocation *)pFVar1);
                          if (puVar19 != (undefined8 *)0x0) {
                            *puVar19 = &
                                       ___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            uVar20 = FDelegateHandle::GenerateNewID();
                            puVar19[2] = uVar20;
                            *puVar19 = &
                                       ___7__TBaseRawMethodDelegateInstance__0A_VFTestIdentityInterface____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            puVar19[4] = FTestIdentityInterface::OnLogoutComplete;
                            puVar19[3] = pFVar14;
                          }
                          if (local_478.bDestroyed == false) {
                            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                                      (local_478.Accessor,&local_478);
                          }
                          (pFVar14->FriendsCache).AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          (pFVar14->FriendsCache).ArrayNum = 0;
                          (pFVar14->FriendsCache).ArrayMax = 0;
                          *(undefined2 *)&(pFVar14->Identity).Object = 1;
                          (pFVar14->Identity).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          (pFVar14->SessionInt).Object = (IOnlineSession *)0x0;
                          *(undefined4 *)
                           &(pFVar14->SessionInt).SharedReferenceCount.ReferenceController = 0;
                          *(undefined1 *)
                           ((longlong)
                            &(pFVar14->SessionInt).SharedReferenceCount.ReferenceController + 4) = 0
                          ;
                          (pFVar14->Friends).Object = (IOnlineFriends *)0x0;
                          (pFVar14->Friends).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          *(undefined8 *)&pFVar14->OnSessionUserInviteAcceptedDelegate = 0;
                          *(undefined8 *)
                           &((TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
                              *)&pFVar14->OnSessionUserInviteAcceptedDelegate)->field_0x8 = 0;
                          *(undefined8 *)
                           &((TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
                              *)&pFVar14->OnSessionUserInviteAcceptedDelegate)->field_0x10 = 0;
                          *(undefined8 *)&pFVar14->OnCreateSessionCompleteDelegate = 0;
                          this = pFVar14;
                        }
                        FString::FString(&local_3f8.Type,&local_4b8);
                        FString::FString(&local_3f8.Id,&local_5e8);
                        FString::FString(&local_3f8.Token,&local_4a8);
                        FTestIdentityInterface::Test
                                  ((FTestIdentityInterface *)this,param_1,&local_3f8,bVar4);
                        if (local_3f8.Token.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_3f8.Token.Data.AllocatorInstance.Data);
                        }
                        if (local_3f8.Id.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_3f8.Id.Data.AllocatorInstance.Data);
                        }
                        if (local_3f8.Type.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_3f8.Type.Data.AllocatorInstance.Data);
                        }
                        cVar5 = '\x01';
                        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
                        }
                        if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
                        }
                        if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
                        }
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"UNIQUEIDREPL",true);
                      if (bVar4) {
                        TestUniqueIdRepl(param_1);
                        cVar5 = '\x01';
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"KEYVALUEPAIR",true);
                      if (bVar4) {
                        TestKeyValuePairs();
                        cVar5 = '\x01';
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"TITLEFILE",true);
                      if (bVar4) {
                        this_04 = operator_new(0x68);
                        if (this_04 != (FTestTitleFileInterface *)0x0) {
                          this = (FTestSessionInterface *)
                                 FTestTitleFileInterface::FTestTitleFileInterface
                                           (this_04,&local_738);
                        }
                        FTestTitleFileInterface::Test((FTestTitleFileInterface *)this,param_1);
                        cVar5 = '\x01';
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"ENTITLEMENTS",true);
                      if (bVar4) {
                        this_05 = operator_new(0x70);
                        if (this_05 == (FTestEntitlementsInterface *)0x0) {
                          FTestEntitlementsInterface::Test
                                    ((FTestEntitlementsInterface *)0x0,param_1);
                          cVar5 = '\x01';
                        }
                        else {
                          (this_05->SubsystemName).Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                                    ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)this_05,
                                     (wchar_t *)local_738.Data.AllocatorInstance.Data,
                                     local_738.Data.ArrayNum,0);
                          (this_05->IdentityOSS).Object = (IOnlineIdentity *)0x0;
                          puVar2 = &(this_05->OnQueryEntitlementsCompleteDelegate).field_0x8;
                          (this_05->IdentityOSS).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          *(undefined8 *)puVar2 = 0;
                          *(undefined4 *)&(this_05->OnQueryEntitlementsCompleteDelegate).field_0x10
                               = 0;
                          (this_05->EntitlementsOSS).Object = (IOnlineEntitlements *)0x0;
                          (this_05->EntitlementsOSS).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          *(undefined8 *)&this_05->OnQueryEntitlementsCompleteDelegate = 0;
                          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::
                          GetWriteAccessScope((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>
                                               *)&this_05->OnQueryEntitlementsCompleteDelegate,
                                              (FWriteAccessScope *)&local_458);
                          local_440 = puVar2;
                          puVar19 = UE::Core::Private::DelegateAllocate
                                              (0x28,(FDelegateAllocation *)puVar2);
                          if (puVar19 != (undefined8 *)0x0) {
                            *puVar19 = &
                                       ___7__TCommonDelegateInstanceState___A6AX_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            uVar20 = FDelegateHandle::GenerateNewID();
                            puVar19[2] = uVar20;
                            *puVar19 = &
                                       ___7__TBaseRawMethodDelegateInstance__0A_VFTestEntitlementsInterface____A6AX_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            puVar19[4] = FTestEntitlementsInterface::OnQueryEntitlementsComplete;
                            puVar19[3] = this_05;
                          }
                          if (local_458.bDestroyed == false) {
                            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                                      (local_458.Accessor,&local_458);
                          }
                          (this_05->OnQueryEntitlementsCompleteDelegateHandle).ID = 0;
                          this_05->bQueryEntitlements = true;
                          (this_05->UserId).Object = (FUniqueNetId *)0x0;
                          (this_05->UserId).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          this_05->LocalUserIdx = 0;
                          FTestEntitlementsInterface::Test(this_05,param_1);
                          cVar5 = '\x01';
                        }
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"ACHIEVEMENTS",true);
                      if (bVar4) {
                        this_06 = operator_new(0x78);
                        if (this_06 == (FTestAchievementsInterface *)0x0) {
                          FTestAchievementsInterface::Test
                                    ((FTestAchievementsInterface *)0x0,param_1);
                          cVar5 = '\x01';
                        }
                        else {
                          (this_06->SubsystemName).Data.AllocatorInstance.Data =
                               (FScriptContainerElement *)0x0;
                          TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                                    ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)this_06,
                                     (wchar_t *)local_738.Data.AllocatorInstance.Data,
                                     local_738.Data.ArrayNum,0);
                          (this_06->OnlineAchievements).Object = (IOnlineAchievements *)0x0;
                          puVar2 = &(this_06->OnAchievementsWrittenDelegate).field_0x8;
                          (this_06->OnlineAchievements).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          *(undefined8 *)puVar2 = 0;
                          *(undefined4 *)&(this_06->OnAchievementsWrittenDelegate).field_0x10 = 0;
                          *(undefined8 *)&this_06->OnAchievementsWrittenDelegate = 0;
                          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::
                          GetWriteAccessScope((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>
                                               *)&this_06->OnAchievementsWrittenDelegate,
                                              (FWriteAccessScope *)&local_438);
                          local_420 = puVar2;
                          puVar19 = UE::Core::Private::DelegateAllocate
                                              (0x28,(FDelegateAllocation *)puVar2);
                          if (puVar19 != (undefined8 *)0x0) {
                            *puVar19 = &
                                       ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            uVar20 = FDelegateHandle::GenerateNewID();
                            puVar19[2] = uVar20;
                            *puVar19 = &
                                       ___7__TBaseRawMethodDelegateInstance__0A_VFTestAchievementsInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            puVar19[4] = FTestAchievementsInterface::OnAchievementsWritten;
                            puVar19[3] = this_06;
                          }
                          if (local_438.bDestroyed == false) {
                            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                                      (local_438.Accessor,&local_438);
                          }
                          puVar2 = &(this_06->OnAchievementUnlockedDelegate).field_0x8;
                          *(undefined8 *)&this_06->OnAchievementUnlockedDelegate = 0;
                          *(undefined8 *)puVar2 = 0;
                          *(undefined4 *)&(this_06->OnAchievementUnlockedDelegate).field_0x10 = 0;
                          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::
                          GetWriteAccessScope((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>
                                               *)&this_06->OnAchievementUnlockedDelegate,
                                              (FWriteAccessScope *)&local_418);
                          local_400 = puVar2;
                          puVar19 = UE::Core::Private::DelegateAllocate
                                              (0x28,(FDelegateAllocation *)puVar2);
                          if (puVar19 != (undefined8 *)0x0) {
                            *puVar19 = &
                                       ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            uVar20 = FDelegateHandle::GenerateNewID();
                            puVar19[2] = uVar20;
                            *puVar19 = &
                                       ___7__TBaseRawMethodDelegateInstance__0A_VFTestAchievementsInterface____A6AXAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
                            ;
                            puVar19[4] = FTestAchievementsInterface::OnAchievementsUnlocked;
                            puVar19[3] = this_06;
                          }
                          if (local_418.bDestroyed == false) {
                            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                                      (local_418.Accessor,&local_418);
                          }
                          (this_06->UserId).Object = (FUniqueNetId *)0x0;
                          (this_06->UserId).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          (this_06->WriteObject).Object = (FOnlineAchievementsWrite *)0x0;
                          (this_06->WriteObject).SharedReferenceCount.ReferenceController =
                               (TReferenceControllerBase<1> *)0x0;
                          (this_06->OnAchievementUnlockedDelegateHandle).ID = 0;
                          FTestAchievementsInterface::Test(this_06,param_1);
                          cVar5 = '\x01';
                        }
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"SHARING",true);
                      if (bVar4) {
                        bVar4 = FParse::Command(&local_748,L"IMG",true);
                        this_07 = operator_new(0x208);
                        if (this_07 != (FTestSharingInterface *)0x0) {
                          this = (FTestSessionInterface *)
                                 FTestSharingInterface::FTestSharingInterface(this_07,&local_738);
                        }
                        FTestSharingInterface::Test((FTestSharingInterface *)this,param_1,bVar4);
                        cVar5 = '\x01';
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"USER",true);
                      if (bVar4) {
                        local_700.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_700.ArrayNum = 0;
                        local_700.ArrayMax = 0;
                        FParse::Token(&local_6c0,&local_748,false);
                        while (1 < local_6c0.Data.ArrayNum) {
                          if (((local_700.AllocatorInstance.Data <=
                                (FScriptContainerElement *)&local_6c0) &&
                              ((FScriptContainerElement *)&local_6c0 <
                               local_700.AllocatorInstance.Data +
                               (longlong)local_700.ArrayMax * 0x10)) &&
                             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar4)) {
                            pcVar3 = (code *)swi(3);
                            uVar6 = (*pcVar3)();
                            return (bool)uVar6;
                          }
                          iVar10 = local_700.ArrayNum;
                          if (local_700.ArrayNum == local_700.ArrayMax) {
                            iVar10 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_700.AllocatorInstance,
                                                &local_700.ArrayMax);
                          }
                          local_700.ArrayNum = iVar10 + 1;
                          FString::FString((FString *)
                                           (local_700.AllocatorInstance.Data +
                                           (longlong)iVar10 * 0x10),&local_6c0);
                          pFVar13 = FParse::Token(&local_388,&local_748,false);
                          if (&local_6c0 != pFVar13) {
                            if (local_6c0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
                            }
                            local_6c0.Data.AllocatorInstance.Data =
                                 (pFVar13->Data).AllocatorInstance.Data;
                            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_6c0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                            local_6c0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                            (pFVar13->Data).ArrayNum = 0;
                            (pFVar13->Data).ArrayMax = 0;
                          }
                          if (local_388.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_388.Data.AllocatorInstance.Data);
                          }
                        }
                        if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
                        }
                        this_08 = operator_new(0x50);
                        if (this_08 != (FTestUserInterface *)0x0) {
                          this = (FTestSessionInterface *)
                                 FTestUserInterface::FTestUserInterface(this_08,&local_738);
                        }
                        FTestUserInterface::Test((FTestUserInterface *)this,param_1,&local_700);
                        cVar5 = '\x01';
                        DestructItems<FString,int>
                                  ((FString *)local_700.AllocatorInstance.Data,local_700.ArrayNum);
                        if (local_700.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_700.AllocatorInstance.Data);
                        }
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"MESSAGE",true);
                      if (bVar4) {
                        local_6f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_6f0.ArrayNum = 0;
                        local_6f0.ArrayMax = 0;
                        FParse::Token(&local_6b0,&local_748,false);
                        while (1 < local_6b0.Data.ArrayNum) {
                          if (((local_6f0.AllocatorInstance.Data <=
                                (FScriptContainerElement *)&local_6b0) &&
                              ((FScriptContainerElement *)&local_6b0 <
                               local_6f0.AllocatorInstance.Data +
                               (longlong)local_6f0.ArrayMax * 0x10)) &&
                             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar4)) {
                            pcVar3 = (code *)swi(3);
                            uVar6 = (*pcVar3)();
                            return (bool)uVar6;
                          }
                          iVar10 = local_6f0.ArrayNum;
                          if (local_6f0.ArrayNum == local_6f0.ArrayMax) {
                            iVar10 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_6f0.AllocatorInstance,
                                                &local_6f0.ArrayMax);
                          }
                          local_6f0.ArrayNum = iVar10 + 1;
                          FString::FString((FString *)
                                           (local_6f0.AllocatorInstance.Data +
                                           (longlong)iVar10 * 0x10),&local_6b0);
                          pFVar13 = FParse::Token(&local_368,&local_748,false);
                          if (&local_6b0 != pFVar13) {
                            if (local_6b0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
                            }
                            local_6b0.Data.AllocatorInstance.Data =
                                 (pFVar13->Data).AllocatorInstance.Data;
                            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_6b0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                            local_6b0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                            (pFVar13->Data).ArrayNum = 0;
                            (pFVar13->Data).ArrayMax = 0;
                          }
                          if (local_368.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_368.Data.AllocatorInstance.Data);
                          }
                        }
                        if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
                        }
                        this_09 = operator_new(0xd0);
                        if (this_09 != (FTestMessageInterface *)0x0) {
                          this = (FTestSessionInterface *)
                                 FTestMessageInterface::FTestMessageInterface(this_09,&local_738);
                        }
                        FTestMessageInterface::Test
                                  ((FTestMessageInterface *)this,param_1,&local_6f0);
                        cVar5 = '\x01';
                        DestructItems<FString,int>
                                  ((FString *)local_6f0.AllocatorInstance.Data,local_6f0.ArrayNum);
                        if (local_6f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_6f0.AllocatorInstance.Data);
                        }
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"EXTERNALUI",true);
                      if (!bVar4) {
                        bVar4 = FParse::Command(&local_748,L"STORE",true);
                        if (bVar4) {
                          local_720.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_720.ArrayNum = 0;
                          local_720.ArrayMax = 0;
                          FParse::Token(&local_6a0,&local_748,false);
                          while (1 < local_6a0.Data.ArrayNum) {
                            if (((local_720.AllocatorInstance.Data <=
                                  (FScriptContainerElement *)&local_6a0) &&
                                ((FScriptContainerElement *)&local_6a0 <
                                 local_720.AllocatorInstance.Data +
                                 (longlong)local_720.ArrayMax * 0x10)) &&
                               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar4)) {
                              pcVar3 = (code *)swi(3);
                              uVar6 = (*pcVar3)();
                              return (bool)uVar6;
                            }
                            iVar10 = local_720.ArrayNum;
                            if (local_720.ArrayNum == local_720.ArrayMax) {
                              iVar10 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x810,&local_720.AllocatorInstance,
                                                  &local_720.ArrayMax);
                            }
                            local_720.ArrayNum = iVar10 + 1;
                            FString::FString((FString *)
                                             (local_720.AllocatorInstance.Data +
                                             (longlong)iVar10 * 0x10),&local_6a0);
                            pFVar13 = FParse::Token(&local_348,&local_748,false);
                            if (&local_6a0 != pFVar13) {
                              if (local_6a0.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
                              }
                              local_6a0.Data.AllocatorInstance.Data =
                                   (pFVar13->Data).AllocatorInstance.Data;
                              (pFVar13->Data).AllocatorInstance.Data =
                                   (FScriptContainerElement *)0x0;
                              local_6a0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                              local_6a0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                              (pFVar13->Data).ArrayNum = 0;
                              (pFVar13->Data).ArrayMax = 0;
                            }
                            if (local_348.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_348.Data.AllocatorInstance.Data);
                            }
                          }
                          if (local_6a0.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
                          }
                          this_10 = operator_new(0x38);
                          if (this_10 != (FTestStoreInterface *)0x0) {
                            this = (FTestSessionInterface *)
                                   FTestStoreInterface::FTestStoreInterface(this_10,&local_738);
                          }
                          FTestStoreInterface::Test((FTestStoreInterface *)this,param_1,&local_720);
                          cVar5 = '\x01';
                          DestructItems<FString,int>
                                    ((FString *)local_720.AllocatorInstance.Data,local_720.ArrayNum)
                          ;
                          if (local_720.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_720.AllocatorInstance.Data);
                          }
                        }
                        else {
                          bVar4 = FParse::Command(&local_748,L"PURCHASE",true);
                          if (bVar4) {
                            FParse::Token(&local_4d8,&local_748,false);
                            local_6e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_6e0.ArrayNum = 0;
                            local_6e0.ArrayMax = 0;
                            FParse::Token(&local_690,&local_748,false);
                            while (1 < local_690.Data.ArrayNum) {
                              if (((local_6e0.AllocatorInstance.Data <=
                                    (FScriptContainerElement *)&local_690) &&
                                  ((FScriptContainerElement *)&local_690 <
                                   local_6e0.AllocatorInstance.Data +
                                   (longlong)local_6e0.ArrayMax * 0x10)) &&
                                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                                    (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar4)) {
                                pcVar3 = (code *)swi(3);
                                uVar6 = (*pcVar3)();
                                return (bool)uVar6;
                              }
                              iVar10 = local_6e0.ArrayNum;
                              if (local_6e0.ArrayNum == local_6e0.ArrayMax) {
                                iVar10 = UE::Core::Private::
                                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x810,&local_6e0.AllocatorInstance,
                                                    &local_6e0.ArrayMax);
                              }
                              local_6e0.ArrayNum = iVar10 + 1;
                              FString::FString((FString *)
                                               (local_6e0.AllocatorInstance.Data +
                                               (longlong)iVar10 * 0x10),&local_690);
                              pFVar13 = FParse::Token(&local_378,&local_748,false);
                              if (&local_690 != pFVar13) {
                                if (local_690.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_690.Data.AllocatorInstance.Data);
                                }
                                local_690.Data.AllocatorInstance.Data =
                                     (pFVar13->Data).AllocatorInstance.Data;
                                (pFVar13->Data).AllocatorInstance.Data =
                                     (FScriptContainerElement *)0x0;
                                local_690.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                                local_690.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                                (pFVar13->Data).ArrayNum = 0;
                                (pFVar13->Data).ArrayMax = 0;
                              }
                              if (local_378.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_378.Data.AllocatorInstance.Data);
                              }
                            }
                            if (local_690.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_690.Data.AllocatorInstance.Data);
                            }
                            this_11 = operator_new(0x98);
                            if (this_11 != (FTestPurchaseInterface *)0x0) {
                              this = (FTestSessionInterface *)
                                     FTestPurchaseInterface::FTestPurchaseInterface
                                               (this_11,&local_738);
                            }
                            FTestPurchaseInterface::Test
                                      ((FTestPurchaseInterface *)this,param_1,&local_4d8,&local_6e0)
                            ;
                            cVar5 = '\x01';
                            DestructItems<FString,int>
                                      ((FString *)local_6e0.AllocatorInstance.Data,
                                       local_6e0.ArrayNum);
                            if (local_6e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                            {
                              FMemory::Free(local_6e0.AllocatorInstance.Data);
                            }
                            if (local_4d8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
                            }
                          }
                        }
                        goto LAB_14ec8d372;
                      }
                      bVar4 = FParse::Command(&local_748,L"ACHIEVEMENTS",true);
                      bVar7 = FParse::Command(&local_748,L"FRIENDS",true);
                      bVar8 = FParse::Command(&local_748,L"INVITE",true);
                      bVar9 = FParse::Command(&local_748,L"LOGIN",true);
                      local_728 = FParse::Command(&local_748,L"PROFILE",true);
                      local_740[0] = FParse::Command(&local_748,L"WEBURL",true);
                      pFVar14 = operator_new(0x58);
                      if (pFVar14 != (FTestSessionInterface *)0x0) {
                        pFVar14->_padding_ = 0;
                        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                                  ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)pFVar14,
                                   (wchar_t *)local_738.Data.AllocatorInstance.Data,
                                   local_738.Data.ArrayNum,0);
                        *(Type *)((longlong)&pFVar14->_padding_ + 4) = local_740[0];
                        *(undefined1 *)((longlong)&pFVar14->_padding_ + 5) = local_728;
                        *(bool *)&pFVar14->_padding_ = bVar9;
                        *(bool *)((longlong)&pFVar14->_padding_ + 1) = bVar7;
                        *(bool *)((longlong)&pFVar14->_padding_ + 2) = bVar8;
                        *(bool *)((longlong)&pFVar14->_padding_ + 3) = bVar4;
                        (((FString *)&pFVar14->_padding_)->Data).AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        (pFVar14->Subsystem).Data.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        (pFVar14->Subsystem).Data.ArrayNum = 0;
                        (pFVar14->Subsystem).Data.ArrayMax = 0;
                        *(undefined8 *)&pFVar14->bOverallSuccess = 0;
                        (pFVar14->UserId).Object = (FUniqueNetId *)0x0;
                        *(undefined4 *)&(pFVar14->UserId).SharedReferenceCount.ReferenceController =
                             0;
                        (((FString *)&pFVar14->World)->Data).AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        *(int *)&(pFVar14->FriendsCache).AllocatorInstance.Data = 0;
                        *(undefined1 *)
                         ((longlong)&(pFVar14->FriendsCache).AllocatorInstance.Data + 4) = 0;
                        this = pFVar14;
                      }
                      bVar4 = FParse::Command(&local_748,L"STORE",true);
                      if (bVar4) {
                        FParse::Token(&local_508,&local_748,false);
                        pFVar13 = FParse::Token(&local_358,&local_748,false);
                        if ((pFVar13->Data).ArrayNum != 0) {
                          pwVar24 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                        }
                        bVar4 = FToBoolHelper::FromCStringWide(pwVar24);
                        if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_358.Data.AllocatorInstance.Data);
                        }
                        FTestExternalUIInterface::TestStorePage
                                  ((FTestExternalUIInterface *)this,&local_508,bVar4);
                        if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_508.Data.AllocatorInstance.Data);
                          cVar5 = '\x01';
                          goto LAB_14ec8d372;
                        }
                      }
                      else {
                        bVar4 = FParse::Command(&local_748,L"MESSAGE",true);
                        if (bVar4) {
                          FParse::Token(&local_4e8,&local_748,false);
                          FParse::Token(&local_4f8,&local_748,false);
                          FTestExternalUIInterface::TestSendMessage
                                    ((FTestExternalUIInterface *)this,&local_4e8,&local_4f8);
                          if (local_4f8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
                          }
                          if (local_4e8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
                            cVar5 = '\x01';
                            goto LAB_14ec8d372;
                          }
                        }
                        else {
                          FTestExternalUIInterface::Test((FTestExternalUIInterface *)this);
                        }
                      }
                    }
                    cVar5 = '\x01';
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar4 = FParse::Command(&local_748,L"VOICE",true);
      if (bVar4) {
        cVar5 = HandleVoiceCommands(pIVar12,param_1,local_748,param_3);
      }
      else {
        bVar4 = FParse::Command(&local_748,L"BEACON",true);
        if (bVar4) {
          cVar5 = HandleBeaconCommands(pIVar12,param_1,local_748,param_3);
        }
      }
    }
  }
LAB_14ec8d372:
  if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.Data.AllocatorInstance.Data);
  }
  return (bool)cVar5;
}

// PurchaseStatusFromOnlineError @ 14ec8efc0

EInAppPurchaseStatus __cdecl PurchaseStatusFromOnlineError(FOnlineError *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  bool bVar3;
  FString local_18;
  
  if (param_1->bSucceeded != false) {
    return Purchased;
  }
  FString::FString(&local_18,L"com.epicgames.purchase.failure");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->ErrorCode).Data.ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar3 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->ErrorCode).Data.AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
  }
  else {
    bVar3 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar3) {
    return Failed;
  }
  FString::FString(&local_18,L"com.epicgames.catalog_helper.user_cancelled");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->ErrorCode).Data.ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar3 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->ErrorCode).Data.AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
  }
  else {
    bVar3 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar3) {
    return Canceled;
  }
  FString::FString(&local_18,L"com.epicgames.purchase.deferred");
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = (param_1->ErrorCode).Data.ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar3 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->ErrorCode).Data.AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
  }
  else {
    bVar3 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (bVar3) {
    return Deferred;
  }
  FString::FString(&local_18,L"com.epicgames.purchase.invalid");
  iVar2 = (param_1->ErrorCode).Data.ArrayNum;
  if (iVar2 == local_18.Data.ArrayNum) {
    if (iVar2 < 2) {
      bVar3 = true;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->ErrorCode).Data.AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
  }
  else {
    bVar3 = iVar2 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return !bVar3;
}

// Z_Construct_UClass_AOnlineBeaconHost_NoRegister @ 14eca0940

UClass * __cdecl Z_Construct_UClass_AOnlineBeaconHost_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconHost",
               &Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton,
               AOnlineBeaconHost::StaticRegisterNativesAOnlineBeaconHost,0x400,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconHost>,
               InternalVTableHelperCtorCaller<AOnlineBeaconHost>,local_res8,
               AOnlineBeacon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton;
}

// Z_Construct_UClass_AOnlineBeacon_NoRegister @ 14eca0a00

UClass * __cdecl Z_Construct_UClass_AOnlineBeacon_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeacon",
               &Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton,
               AOnlineBeacon::StaticRegisterNativesAOnlineBeacon,0x2f0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeacon>,InternalVTableHelperCtorCaller<AOnlineBeacon>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton;
}

// Z_Construct_UClass_APartyBeaconClient_NoRegister @ 14eca0ac0

UClass * __cdecl Z_Construct_UClass_APartyBeaconClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconClient",
               &Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton,
               APartyBeaconClient::StaticRegisterNativesAPartyBeaconClient,0x438,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APartyBeaconClient>,
               InternalVTableHelperCtorCaller<APartyBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton;
}

// Z_Construct_UClass_UAchievementBlueprintLibrary_NoRegister @ 14eca0b80

UClass * __cdecl Z_Construct_UClass_UAchievementBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"AchievementBlueprintLibrary",
               &Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton,
               UAchievementBlueprintLibrary::StaticRegisterNativesUAchievementBlueprintLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAchievementBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAchievementBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAchievementBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UIpConnection_NoRegister @ 14eca0c40

UClass * __cdecl Z_Construct_UClass_UIpConnection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIpConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"IpConnection",
               &Z_Registration_Info_UClass_UIpConnection.InnerSingleton,
               UIpConnection::StaticRegisterNativesUIpConnection,0x2020,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UIpConnection>,InternalVTableHelperCtorCaller<UIpConnection>,
               local_res8,UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIpConnection.InnerSingleton;
}

// Z_Construct_UClass_UIpNetDriver_NoRegister @ 14eca0d00

UClass * __cdecl Z_Construct_UClass_UIpNetDriver_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"IpNetDriver",
               &Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton,
               UIpNetDriver::StaticRegisterNativesUIpNetDriver,0xb08,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UIpNetDriver>,InternalVTableHelperCtorCaller<UIpNetDriver>,
               local_res8,UNetDriver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton;
}

// Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister @ 14eca0dc0

UClass * __cdecl Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"LeaderboardBlueprintLibrary",
               &Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton,
               ULeaderboardBlueprintLibrary::StaticRegisterNativesULeaderboardBlueprintLibrary,0x28,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULeaderboardBlueprintLibrary>,
               InternalVTableHelperCtorCaller<ULeaderboardBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister @ 14eca0e80

UClass * __cdecl Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineEngineInterfaceImpl",
               &Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton,
               UOnlineEngineInterfaceImpl::StaticRegisterNativesUOnlineEngineInterfaceImpl,0x198,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnlineEngineInterfaceImpl>,
               InternalVTableHelperCtorCaller<UOnlineEngineInterfaceImpl>,local_res8,
               UOnlineEngineInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.InnerSingleton;
}

// Z_Construct_UClass_UOnlinePIEConfig_NoRegister @ 14eca0f40

UClass * __cdecl Z_Construct_UClass_UOnlinePIEConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlinePIEConfig",
               &Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton,
               UOnlinePIEConfig::StaticRegisterNativesUOnlinePIEConfig,0x38,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Editor",
               InternalConstructor<UOnlinePIEConfig>,
               InternalVTableHelperCtorCaller<UOnlinePIEConfig>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlinePIEConfig.InnerSingleton;
}

// Z_Construct_UClass_UOnlinePIESettings_NoRegister @ 14eca0ff0

UClass * __cdecl Z_Construct_UClass_UOnlinePIESettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlinePIESettings",
               &Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton,
               UOnlinePIESettings::StaticRegisterNativesUOnlinePIESettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UOnlinePIESettings>,
               InternalVTableHelperCtorCaller<UOnlinePIESettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlinePIESettings.InnerSingleton;
}

// Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister @ 14eca10b0

UClass * __cdecl Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineServicesEngineInterfaceImpl",
               &Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton,
               UOnlineServicesEngineInterfaceImpl::
               StaticRegisterNativesUOnlineServicesEngineInterfaceImpl,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOnlineServicesEngineInterfaceImpl>,
               InternalVTableHelperCtorCaller<UOnlineServicesEngineInterfaceImpl>,local_res8,
               UOnlineEngineInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.InnerSingleton;
}

// Z_Construct_UClass_UOnlineSessionClient_NoRegister @ 14eca1170

UClass * __cdecl Z_Construct_UClass_UOnlineSessionClient_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineSessionClient",
               &Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton,
               UOnlineSessionClient::StaticRegisterNativesUOnlineSessionClient,0x208,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Game",InternalConstructor<UOnlineSessionClient>,
               InternalVTableHelperCtorCaller<UOnlineSessionClient>,local_res8,
               UOnlineSession::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton;
}

// Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature @ 14eca1230

UFunction * __cdecl
Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_OnlineSubsystemUtils_AchievementWriteDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2 @ 14eca1270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseProductInfo2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInAppPurchaseProductInfo2.InnerSingleton,
               &Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInAppPurchaseProductInfo2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInAppPurchaseProductInfo2.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPlayerReservation @ 14eca12f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlayerReservation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPlayerReservation.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPlayerReservation.InnerSingleton,
               &Z_Construct_UScriptStruct_FPlayerReservation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPlayerReservation.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPlayerReservation.InnerSingleton;
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

// IMPLEMENT_MODULE_OnlineSubsystemUtils @ 14eca7490

void __cdecl IMPLEMENT_MODULE_OnlineSubsystemUtils(void)

{
  return;
}

// OnNetworkProcessingCausingSlowFrame'' @ 1504702a0

void __cdecl
`dynamic_atexit_destructor_for_'UIpNetDriver::OnNetworkProcessingCausingSlowFrame__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UIpNetDriver::OnNetworkProcessingCausingSlowFrame._8_8_,
             UIpNetDriver::OnNetworkProcessingCausingSlowFrame._16_4_);
  if (UIpNetDriver::OnNetworkProcessingCausingSlowFrame._8_8_ != 0) {
    FMemory::Free((void *)UIpNetDriver::OnNetworkProcessingCausingSlowFrame._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UIpNetDriver::OnNetworkProcessingCausingSlowFrame);
  return;
}

// `dynamic_atexit_destructor_for_'AuthErrorText'' @ 1504702e0

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l151::_dynamic_atexit_destructor_for__AuthErrorText__
          (void)

{
  if (AuthErrorText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504702ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*AuthErrorText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AuthErrorText'' @ 150470300

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l154::_dynamic_atexit_destructor_for__AuthErrorText__
          (void)

{
  if (AuthErrorText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047030f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*AuthErrorText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'AwayText'' @ 150470320

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__AwayText__(void)

{
  if (AwayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047032f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*AwayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysPlayVoipComponent'' @ 150470340

void __cdecl _dynamic_atexit_destructor_for__CVarAlwaysPlayVoipComponent__(void)

{
  CVarAlwaysPlayVoipComponent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAlwaysPlayVoipComponent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayCancellationResponse'' @ 150470360

void __cdecl
BeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayCancellationResponse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayCancellationResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayFinishHandshake'' @ 150470380

void __cdecl
BeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayFinishHandshake__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayFinishHandshake);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayFinishHandshakeType'' @ 1504703a0

void __cdecl
BeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayFinishHandshakeType__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayFinishHandshakeType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayFullResponse'' @ 1504703c0

void __cdecl BeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayFullResponse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayFullResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayReservationResponse'' @ 1504703e0

void __cdecl
BeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayReservationResponse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayReservationResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDelayUpdateResponse'' @ 150470400

void __cdecl BeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarDelayUpdateResponse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDelayUpdateResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxAggregateIPLogs'' @ 150470420

void __cdecl IPNetDriverInternal::_dynamic_atexit_destructor_for__CVarMaxAggregateIPLogs__(void)

{
  CVarMaxAggregateIPLogs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxAggregateIPLogs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxIPHitLogs'' @ 150470440

void __cdecl IPNetDriverInternal::_dynamic_atexit_destructor_for__CVarMaxIPHitLogs__(void)

{
  CVarMaxIPHitLogs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxIPHitLogs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetBlockSend'' @ 150470460

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetBlockSend__(void)

{
  CVarNetBlockSend._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetBlockSend);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDebugAddResolverAddress'' @ 150470480

void __cdecl _dynamic_atexit_destructor_for__CVarNetDebugAddResolverAddress__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDebugAddResolverAddress);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDebugDualIPs'' @ 1504704a0

void __cdecl _dynamic_atexit_destructor_for__CVarNetDebugDualIPs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDebugDualIPs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDebugInitialConnect'' @ 1504704c0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetDebugInitialConnect__(void)

{
  CVarNetDebugInitialConnect._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetDebugInitialConnect);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetDebugInitialConnectLogFrequency'' @ 1504704e0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetDebugInitialConnectLogFrequency__(void)

{
  CVarNetDebugInitialConnectLogFrequency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetDebugInitialConnectLogFrequency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetIpConnectionDisableResolution'' @ 150470500

void __cdecl _dynamic_atexit_destructor_for__CVarNetIpConnectionDisableResolution__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetIpConnectionDisableResolution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetIpConnectionUseSendTasks'' @ 150470520

void __cdecl _dynamic_atexit_destructor_for__CVarNetIpConnectionUseSendTasks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetIpConnectionUseSendTasks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetIpNetDriverReceiveThreadPollTimeMS'' @ 150470540

void __cdecl _dynamic_atexit_destructor_for__CVarNetIpNetDriverReceiveThreadPollTimeMS__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetIpNetDriverReceiveThreadPollTimeMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetIpNetDriverReceiveThreadQueueMaxPackets'' @ 150470560

void __cdecl _dynamic_atexit_destructor_for__CVarNetIpNetDriverReceiveThreadQueueMaxPackets__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetIpNetDriverReceiveThreadQueueMaxPackets);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetIpNetDriverUseReceiveThread'' @ 150470580

void __cdecl _dynamic_atexit_destructor_for__CVarNetIpNetDriverUseReceiveThread__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetIpNetDriverUseReceiveThread)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetRecreateSocketCooldown'' @ 1504705a0

void __cdecl UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetRecreateSocketCooldown__(void)

{
  CVarNetRecreateSocketCooldown._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetRecreateSocketCooldown);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetRecreateSocketTimeoutThreshold'' @ 1504705c0

void __cdecl
UE::Net::Private::_dynamic_atexit_destructor_for__CVarNetRecreateSocketTimeoutThreshold__(void)

{
  CVarNetRecreateSocketTimeoutThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNetRecreateSocketTimeoutThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetUseRecvMulti'' @ 1504705e0

void __cdecl _dynamic_atexit_destructor_for__CVarNetUseRecvMulti__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetUseRecvMulti);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNetUseRecvTimestamps'' @ 150470600

void __cdecl _dynamic_atexit_destructor_for__CVarNetUseRecvTimestamps__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNetUseRecvTimestamps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRcvThreadShouldSleepForLongRecvErrors'' @ 150470620

void __cdecl _dynamic_atexit_destructor_for__CVarRcvThreadShouldSleepForLongRecvErrors__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRcvThreadShouldSleepForLongRecvErrors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRcvThreadSleepTimeForWaitableErrorsInSeconds'' @ 150470640

void __cdecl
_dynamic_atexit_destructor_for__CVarRcvThreadSleepTimeForWaitableErrorsInSeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRcvThreadSleepTimeForWaitableErrorsInSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecvMultiCapacity'' @ 150470660

void __cdecl _dynamic_atexit_destructor_for__CVarRecvMultiCapacity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecvMultiCapacity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRequireInitiatorIsPartyLeader'' @ 150470680

void __cdecl
BeaconConsoleVariables::_dynamic_atexit_destructor_for__CVarRequireInitiatorIsPartyLeader__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRequireInitiatorIsPartyLeader);
  return;
}

// `dynamic_atexit_destructor_for_'ChatText'' @ 1504706a0

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__ChatText__(void)

{
  if (ChatText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504706af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ChatText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DoNotDisturbText'' @ 1504706c0

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__DoNotDisturbText__(void)

{
  if (DoNotDisturbText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504706cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DoNotDisturbText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyId'' @ 1504706e0

/* WARNING: Control flow encountered bad instruction data */

void __cdecl
`AOnlineBeaconClient::GetUniqueId'::__l2::_dynamic_atexit_destructor_for__EmptyId__(void)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  
  EmptyId._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (EmptyId.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyId.ReplicationBytes.AllocatorInstance.Data);
  }
  bVar2 = (byte)EmptyId._padding_;
  if (1 < (byte)EmptyId._padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)EmptyId._padding_);
    return;
  case 1:
    return;
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 150470760

void __cdecl
`AOnlineBeaconHost::FinishHandshake'::__l5::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047076f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 150470780

void __cdecl
`AOnlineBeaconHost::FinishHandshake'::__l8::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047078f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 1504707a0

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l266::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504707af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 1504707c0

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l79::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504707cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 1504707e0

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l89::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504707ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 150470800

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l113::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047080f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 150470820

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l195::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047082f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 150470840

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l198::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047084f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 150470860

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l203::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047086f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorTxt'' @ 150470880

void __cdecl
`AOnlineBeaconHost::HandleControlMessage'::__l206::_dynamic_atexit_destructor_for__ErrorTxt__(void)

{
  if (ErrorTxt.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047088f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ErrorTxt.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Error_Authentication'' @ 1504708a0

void __cdecl _dynamic_atexit_destructor_for__Error_Authentication__(void)

{
  if (Error_Authentication.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504708af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Error_Authentication.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Error_ControlFlow'' @ 1504708c0

void __cdecl _dynamic_atexit_destructor_for__Error_ControlFlow__(void)

{
  if (Error_ControlFlow.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504708cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Error_ControlFlow.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Error_UnableToParsePacket'' @ 1504708e0

void __cdecl _dynamic_atexit_destructor_for__Error_UnableToParsePacket__(void)

{
  if (Error_UnableToParsePacket.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504708ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Error_UnableToParsePacket.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCurrentDuplicateIP'' @ 150470900

void __cdecl _dynamic_atexit_destructor_for__GCurrentDuplicateIP__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GCurrentDuplicateIP.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'GIpNetDriverLongFramePrintoutThresholdSecsCVar'' @ 150470920

void __cdecl _dynamic_atexit_destructor_for__GIpNetDriverLongFramePrintoutThresholdSecsCVar__(void)

{
  GIpNetDriverLongFramePrintoutThresholdSecsCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GIpNetDriverLongFramePrintoutThresholdSecsCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecsCVar'' @ 150470940

void __cdecl
_dynamic_atexit_destructor_for__GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecsCVar__(void)

{
  GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecsCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GIpNetDriverMaxDesiredTimeSliceBeforeAlarmSecsCVar);
  return;
}

// `dynamic_atexit_destructor_for_'GSendLocalTalkersToEndpointCommand'' @ 150470960

void __cdecl _dynamic_atexit_destructor_for__GSendLocalTalkersToEndpointCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GSendLocalTalkersToEndpointCommand)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'GSendRemoteTalkersToEndpointCommand'' @ 150470980

void __cdecl _dynamic_atexit_destructor_for__GSendRemoteTalkersToEndpointCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&GSendRemoteTalkersToEndpointCommand);
  return;
}

// `dynamic_atexit_destructor_for_'InvalidName'' @ 1504709a0

void __cdecl
`UOnlineEngineInterfaceImpl::GetPlayerNickname'::__l2::_dynamic_atexit_destructor_for__InvalidName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidName.Data.AllocatorInstance.Data;
  if (InvalidName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InvalidName'' @ 1504709c0

void __cdecl
`UOnlineServicesEngineInterfaceImpl::GetPlayerNickname'::__l2::
_dynamic_atexit_destructor_for__InvalidName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidName.Data.AllocatorInstance.Data;
  if (InvalidName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogBeacon'' @ 1504709e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBeacon__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBeacon);
  return;
}

// `dynamic_atexit_destructor_for_'OfflineText'' @ 150470a00

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__OfflineText__(void)

{
  if (OfflineText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OfflineText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OnlineExecRegistration'' @ 150470a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__OnlineExecRegistration__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&OnlineExecRegistration);
  return;
}

// `dynamic_atexit_destructor_for_'OnlineText'' @ 150470a40

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__OnlineText__(void)

{
  if (OnlineText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OnlineText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

