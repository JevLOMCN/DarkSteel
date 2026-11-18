// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FInGameScopedCycleCounter @ 147cc42f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInGameScopedCycleCounter * __thiscall
FInGameScopedCycleCounter::FInGameScopedCycleCounter
          (FInGameScopedCycleCounter *this,UWorld *param_1,EInGamePerfTrackers param_2,
          EInGamePerfTrackerThreads param_3,bool param_4)

{
  int iVar1;
  FWorldInGamePerformanceTrackers *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FInGameScopedCycleCounter *pFVar6;
  FInGamePerformanceTracker *pFVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  if (((param_1 == (UWorld *)0x0) || (!param_4)) ||
     (pFVar2 = param_1->PerfTrackers, pFVar2 == (FWorldInGamePerformanceTrackers *)0x0)) {
    *(undefined8 *)this = 0;
    *(undefined4 *)&this->field_0x8 = 0;
  }
  else {
    if (param_2 != VFXSignificance) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tracker >= 0 && Tracker < (int32)EInGamePerfTrackers::Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InGamePerformanceTracker.h"
                         ,0xc0,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FInGameScopedCycleCounter *)(*pcVar4)();
        return pFVar6;
      }
    }
    if (OtherThread < param_3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread >= 0 && Thread < (int32)EInGamePerfTrackerThreads::Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InGamePerformanceTracker.h"
                         ,0xc1,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FInGameScopedCycleCounter *)(*pcVar4)();
        return pFVar6;
      }
    }
    *(undefined4 *)&this->field_0x8 = 0;
    pFVar7 = pFVar2[param_2].InGamePerformanceTrackers[0] + param_3;
    *(FInGamePerformanceTracker **)this = pFVar7;
    if ((pFVar7 != (FInGamePerformanceTracker *)0x0) &&
       (FInGamePerformanceTracker::CachedEnabled != 0)) {
      bVar5 = IsInGameThread();
      if (!bVar5) {
        QueryPerformanceCounter(&local_res10);
        *(DWORD *)&this->field_0x8 = local_res10.s.LowPart;
        return this;
      }
      lVar3 = *(longlong *)this;
      bVar5 = IsInGameThread();
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                           ,0x3c,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FInGameScopedCycleCounter *)(*pcVar4)();
          return pFVar6;
        }
      }
      iVar1 = *(int *)(lVar3 + 0x30);
      *(int *)(lVar3 + 0x30) = iVar1 + 1;
      if ((iVar1 == 0) && (FInGamePerformanceTracker::CachedEnabled != 0)) {
        QueryPerformanceCounter(&local_res8);
        *(DWORD *)(lVar3 + 0x34) = local_res8.s.LowPart;
        return this;
      }
    }
  }
  return this;
}

// ~FInGameScopedCycleCounter @ 147cc8900

void __thiscall
FInGameScopedCycleCounter::~FInGameScopedCycleCounter(FInGameScopedCycleCounter *this)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if ((*(longlong *)this != 0) && (FInGamePerformanceTracker::CachedEnabled != 0)) {
    bVar4 = IsInGameThread();
    if (bVar4) {
      plVar2 = *(longlong **)this;
      bVar4 = IsInGameThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                           ,0x45,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((int)plVar2[6] == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirectSectionTime_EntryCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                           ,0x46,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar1 = plVar2 + 6;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if (((int)*plVar1 == 0) && (FInGamePerformanceTracker::CachedEnabled != 0)) {
        QueryPerformanceCounter(local_res10);
        LOCK();
        *plVar2 = *plVar2 + (ulonglong)
                            (uint)(local_res10[0].s.LowPart - *(int *)((longlong)plVar2 + 0x34));
        UNLOCK();
        *(undefined4 *)((longlong)plVar2 + 0x34) = 0;
        return;
      }
    }
    else {
      QueryPerformanceCounter(&local_res8);
      LOCK();
      **(longlong **)this =
           **(longlong **)this + (ulonglong)(local_res8.s.LowPart - *(int *)&this->field_0x8);
      UNLOCK();
      *(undefined4 *)&this->field_0x8 = 0;
    }
  }
  return;
}

