// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedNetDriverStats @ 148014980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedNetDriverStats * __thiscall
FScopedNetDriverStats::FScopedNetDriverStats(FScopedNetDriverStats *this,UNetDriver *param_1)

{
  UNetworkMetricsDatabase *pUVar1;
  UNetDriver *pUVar2;
  FNetworkObjectList *pFVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  FCsvProfiler *pFVar7;
  FOutputDeviceRedirector *this_00;
  FScopedNetDriverStats *pFVar8;
  undefined8 local_res8;
  LARGE_INTEGER local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  undefined1 local_28 [16];
  
  this->NetDriver = param_1;
  if (GReplicationAutoCapture.CaptureFrames == -1) {
    GReplicationAutoCapture.CaptureFrames = 0;
    pwVar6 = FCommandLine::Get();
    FParse::Value(pwVar6,L"ReplicationCSVCaptureFrames=",&GReplicationAutoCapture.CaptureFrames);
  }
  if (GReplicationAutoCapture.CaptureFrames < 1) {
    if ((0 < GReplicationAutoCapture.KillProcessFrames) &&
       (GReplicationAutoCapture.KillProcessFrames = GReplicationAutoCapture.KillProcessFrames + -1,
       GReplicationAutoCapture.KillProcessFrames == 0)) {
      this_00 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(this_00);
    }
  }
  else {
    if (GReplicationAutoCapture.StartedCapture == false) {
      GReplicationAutoCapture.StartedCapture = true;
      pFVar7 = FCsvProfiler::Get();
      ::FString::FString(&local_38,L"Replication");
      FCsvProfiler::EnableCategoryByString(pFVar7,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar7 = FCsvProfiler::Get();
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FCsvProfiler::BeginCapture(pFVar7,-1,&local_58,&local_48,None);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    GReplicationAutoCapture.CaptureFrames = GReplicationAutoCapture.CaptureFrames + -1;
    if (GReplicationAutoCapture.CaptureFrames < 1) {
      pFVar7 = FCsvProfiler::Get();
      local_res8 = 0;
      FCsvProfiler::EndCapture
                (pFVar7,(TSharedFuture<FString> *)local_28,(FBaseGraphTask *)&local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_28._8_8_);
      GReplicationAutoCapture.KillProcessFrames = 0x3c;
    }
  }
  GReplicateActorTimeSeconds = 0.0;
  GReplicationGatherPrioritizeTimeSeconds = 0.0;
  GServerReplicateActorTimeSeconds = 0.0;
  GReplicateActorTimingEnabled = true;
  GNumReplicateActorCalls = 0;
  GNumSaturatedConnections = 0;
  GNumSkippedObjectEmptyUpdates = 0;
  GNumReplicationViewers = 0;
  pUVar1 = (param_1->NetworkMetricsDatabase).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UNetworkMetricsDatabase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  UNetworkMetricsDatabase::SetInt
            (pUVar1,UE::Net::Metric::SharedSerializationRPCHit,(longlong)GNumSharedSerializationHit)
  ;
  pUVar1 = (param_1->NetworkMetricsDatabase).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UNetworkMetricsDatabase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  UNetworkMetricsDatabase::SetInt
            (pUVar1,UE::Net::Metric::SharedSerializationRPCMiss,
             (longlong)GNumSharedSerializationMiss);
  pUVar2 = this->NetDriver;
  if (((pUVar2->NetworkObjects).Object == (FNetworkObjectList *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FScopedNetDriverStats *)(*pcVar4)();
    return pFVar8;
  }
  pFVar3 = (pUVar2->NetworkObjects).Object;
  pUVar1 = (param_1->NetworkMetricsDatabase).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UNetworkMetricsDatabase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  UNetworkMetricsDatabase::SetInt
            (pUVar1,UE::Net::Metric::NumberOfActiveActors,
             (longlong)
             (*(int *)&(pFVar3->ActiveNetworkObjects).Elements.field_0x8 -
             *(int *)&(pFVar3->ActiveNetworkObjects).Elements.field_0x34));
  pUVar1 = (param_1->NetworkMetricsDatabase).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UNetworkMetricsDatabase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  UNetworkMetricsDatabase::SetInt
            (pUVar1,UE::Net::Metric::NumberOfFullyDormantActors,
             (longlong)
             (*(int *)&(pFVar3->ObjectsDormantOnAllConnections).Elements.field_0x8 -
             *(int *)&(pFVar3->ObjectsDormantOnAllConnections).Elements.field_0x34));
  QueryPerformanceCounter(&local_res10);
  this->StartTime =
       (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  this->StartOutBytes = GNetOutBytes;
  return this;
}

// ~FScopedNetDriverStats @ 148018000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FScopedNetDriverStats::~FScopedNetDriverStats(FScopedNetDriverStats *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UNetworkMetricsDatabase *pUVar3;
  UNetDriver *pUVar4;
  double dVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  LARGE_INTEGER local_res10;
  
  if (GReplicateActorTimingEnabled) {
    QueryPerformanceCounter(&local_res10);
    GServerReplicateActorTimeSeconds =
         ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000) - this->StartTime;
    GReplicationGatherPrioritizeTimeSeconds =
         GServerReplicateActorTimeSeconds - GReplicateActorTimeSeconds;
    uVar9 = GNetOutBytes - this->StartOutBytes;
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    dVar5 = __real_408f400000000000;
    UNetworkMetricsDatabase::SetFloat
              (pUVar3,UE::Net::Metric::ServerReplicateActorTimeMS,
               (float)(GServerReplicateActorTimeSeconds * __real_408f400000000000));
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetInt
              (pUVar3,UE::Net::Metric::NumReplicatedActors,(longlong)GNumReplicateActorCalls);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetInt
              (pUVar3,UE::Net::Metric::SatConnections,(longlong)GNumSaturatedConnections);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetInt
              (pUVar3,UE::Net::Metric::NumSkippedObjectEmptyUpdates,
               (longlong)GNumSkippedObjectEmptyUpdates);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetFloat
              (pUVar3,UE::Net::Metric::GatherPrioritizeTimeMS,
               (float)(GReplicationGatherPrioritizeTimeSeconds * dVar5));
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetFloat
              (pUVar3,UE::Net::Metric::ReplicateActorTimeMS,
               (float)(GReplicateActorTimeSeconds * dVar5));
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetFloat
              (pUVar3,UE::Net::Metric::NumReplicateActorCallsPerConAvg,
               (float)GNumReplicateActorCalls / (float)GNumClientConnections);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    fVar6 = __real_3a800000;
    UNetworkMetricsDatabase::SetFloat
              (pUVar3,UE::Net::Metric::OutKBytes,(float)uVar9 * __real_3a800000);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetFloat
              (pUVar3,UE::Net::Metric::OutNetGUIDKBytesSec,
               (float)this->NetDriver->NetGUIDOutBytes * fVar6);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetFloat
              (pUVar3,UE::Net::Metric::NumClientUpdateLevelVisibility,
               (float)GNumClientUpdateLevelVisibility);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetInt
              (pUVar3,UE::Net::Metric::SharedSerializationPropertyHit,
               (longlong)GNumSharedSerializationHit);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetInt
              (pUVar3,UE::Net::Metric::SharedSerializationPropertyMiss,
               (longlong)GNumSharedSerializationMiss);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetInt
              (pUVar3,UE::Net::Metric::NumReplicationViewers,(longlong)GNumReplicationViewers);
    pUVar4 = this->NetDriver;
    iVar8 = 0;
    iVar10 = 0;
    pFVar7 = (pUVar4->ClientConnections).AllocatorInstance.Data;
    iVar2 = (pUVar4->ClientConnections).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar4->ClientConnections).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UNetConnection>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar7 == pFVar1) break;
      iVar8 = iVar8 + *(int *)(*(longlong *)pFVar7 + 0x78);
      iVar10 = iVar10 + *(int *)(*(longlong *)pFVar7 + 0x1858);
      pFVar7 = pFVar7 + 8;
    }
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetInt(pUVar3,UE::Net::Metric::NumOpenChannels,(longlong)iVar8);
    pUVar3 = (this->NetDriver->NetworkMetricsDatabase).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNetworkMetricsDatabase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    UNetworkMetricsDatabase::SetInt(pUVar3,UE::Net::Metric::NumTickingChannels,(longlong)iVar10);
    GNumSharedSerializationHit = 0;
    GNumSharedSerializationMiss = 0;
    GNumClientUpdateLevelVisibility = 0;
  }
  return;
}

