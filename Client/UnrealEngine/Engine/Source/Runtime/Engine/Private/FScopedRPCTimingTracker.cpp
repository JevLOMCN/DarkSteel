// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FScopedRPCTimingTracker @ 147a29fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FScopedRPCTimingTracker::~FScopedRPCTimingTracker(FScopedRPCTimingTracker *this)

{
  FRPCDoSDetection *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FTickScope *pFVar5;
  FSequentialRPCScope *pFVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  LARGE_INTEGER local_res8;
  
  this_00 = this->RPCDoS;
  if (((this_00 != (FRPCDoSDetection *)0x0) && (this_00->bRPCDoSDetection != false)) &&
     (this_00->bHitchSuspendDetection == false)) {
    pFVar5 = FRPCDoSDetection::GetTickScope(this_00);
    if (((UE::Net::GRPCDoSScopeDebugging != 0) && ((this_00->PacketScopePrivate)._padding_ == '\0'))
       && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1192164650855169024>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                              ,0x400,"GRPCDoSScopeDebugging == 0 || PacketScopePrivate.IsActive()"),
          bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = FRPCDoSDetection::GetSequentialRPCScope(this_00);
    (pFVar5->FrameCounter).RPCCounter = (pFVar5->FrameCounter).RPCCounter + 1;
    this_00->RPCIntervalCounter = this_00->RPCIntervalCounter + 1;
    pFVar6->ReceivedPacketRPCCount = pFVar6->ReceivedPacketRPCCount + 1;
    (this_00->PacketScopePrivate).bPacketContainsRPC = true;
    if ((this_00->RPCIntervalCounter & 0x3f) == 0) {
      pFVar5 = FRPCDoSDetection::GetTickScope(this_00);
      bVar2 = FRPCDoSState::HasHitQuota_Count
                        ((FRPCDoSState *)this_00,&this_00->CounterPerPeriodHistory,
                         &pFVar5->FrameCounter);
      if (bVar2) {
        FRPCDoSDetection::UpdateSeverity_Private(this_00,Escalate,CountLimit);
      }
    }
  }
  FVar8.Data = ActiveTrackers.AllocatorInstance.Data;
  do {
    if (FVar8.Data == ActiveTrackers.AllocatorInstance.Data + (longlong)ActiveTrackers.ArrayNum * 8)
    {
LAB_147a2a171:
      if (GReceiveRPCTimingEnabled != false) {
        QueryPerformanceCounter(&local_res8);
        UNetDriver::NotifyRPCProcessed
                  ((this->Connection->Driver).field0_0x0.DebugPtr,this->Function,this->Connection,
                   ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                   __real_4170000000000000) - this->StartTime);
        return;
      }
      return;
    }
    if (*(FScopedRPCTimingTracker **)FVar8.Data == this) {
      uVar7 = (uint)((longlong)FVar8.Data - (longlong)ActiveTrackers.AllocatorInstance.Data >> 3);
      if (uVar7 != 0xffffffff) {
        uVar3 = 0;
        if ((int)(uVar7 + 1) <= ActiveTrackers.ArrayNum) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = (ActiveTrackers.ArrayNum - uVar7) + -1;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(ActiveTrackers.AllocatorInstance.Data + (longlong)(int)uVar7 * 8,
                  ActiveTrackers.AllocatorInstance.Data +
                  (longlong)(ActiveTrackers.ArrayNum - iVar4) * 8,(longlong)iVar4 << 3);
        }
        ActiveTrackers.ArrayNum = ActiveTrackers.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&ActiveTrackers.AllocatorInstance,ActiveTrackers.ArrayNum,
                   &ActiveTrackers.ArrayMax);
      }
      goto LAB_147a2a171;
    }
    FVar8.Data = FVar8.Data + 8;
  } while( true );
}

