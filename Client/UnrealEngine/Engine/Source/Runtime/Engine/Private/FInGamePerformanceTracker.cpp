// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FInGamePerformanceTracker @ 147cc4280

FInGamePerformanceTracker * __thiscall
FInGamePerformanceTracker::FInGamePerformanceTracker(FInGamePerformanceTracker *this,uint param_1)

{
  FInGameCycleHistory::FInGameCycleHistory(&this->History,param_1);
  this->DirectSectionTime_EntryCount = 0;
  this->DirectSectionTime_BeginCycles = 0;
  return this;
}

// FInGamePerformanceTracker @ 147cc42b0

FInGamePerformanceTracker * __thiscall
FInGamePerformanceTracker::FInGamePerformanceTracker(FInGamePerformanceTracker *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)HistorySize + 200))();
  FInGameCycleHistory::FInGameCycleHistory(&this->History,iVar1);
  this->DirectSectionTime_EntryCount = 0;
  this->DirectSectionTime_BeginCycles = 0;
  return this;
}

// ~FInGamePerformanceTracker @ 147cc88e0

void __thiscall
FInGamePerformanceTracker::~FInGamePerformanceTracker(FInGamePerformanceTracker *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->History).FrameCycles.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// EnterTimedSection @ 147cf2b50

void __thiscall FInGamePerformanceTracker::EnterTimedSection(FInGamePerformanceTracker *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  LARGE_INTEGER local_res8 [4];
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                       ,0x3c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->DirectSectionTime_EntryCount;
  this->DirectSectionTime_EntryCount = uVar1 + 1;
  if ((uVar1 == 0) && (CachedEnabled != 0)) {
    QueryPerformanceCounter(local_res8);
    this->DirectSectionTime_BeginCycles = local_res8[0].s.LowPart;
  }
  return;
}

// ExitTimedSection @ 147cf3870

void __thiscall FInGamePerformanceTracker::ExitTimedSection(FInGamePerformanceTracker *this)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  LARGE_INTEGER local_res10 [3];
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->DirectSectionTime_EntryCount == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirectSectionTime_EntryCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                       ,0x46,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = &this->DirectSectionTime_EntryCount;
  *puVar1 = *puVar1 - 1;
  if ((*puVar1 == 0) && (CachedEnabled != 0)) {
    QueryPerformanceCounter(local_res10);
    LOCK();
    (this->History).CurrFrameCycles =
         (TAtomic<unsigned___int64>)
         ((longlong)(this->History).CurrFrameCycles +
         (ulonglong)(local_res10[0].s.LowPart - this->DirectSectionTime_BeginCycles));
    UNLOCK();
    this->DirectSectionTime_BeginCycles = 0;
  }
  return;
}

// Tick @ 147d337d0

void __thiscall FInGamePerformanceTracker::Tick(FInGamePerformanceTracker *this)

{
  ulong64 *puVar1;
  uint uVar2;
  int iVar3;
  TAtomic<unsigned___int64> TVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  if (this->DirectSectionTime_EntryCount != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DirectSectionTime_EntryCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                       ,0x30,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  CachedEnabled = (**(code **)(*(longlong *)Enabled + 200))();
  if (CachedEnabled != 0) {
    if ((this->History).FrameCycles.ArrayNum <= (this->History).FrameIdx) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameIdx < FrameCycles.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InGamePerformanceTracker.cpp"
                         ,0xd,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar1 = &(this->History).TotalCycles;
    *puVar1 = *puVar1 + (longlong)(this->History).CurrFrameCycles;
    uVar2 = (this->History).FrameIdx;
    uVar7 = 0;
    if ((int)uVar2 < (this->History).FrameCycles.ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar1 = &(this->History).TotalCycles;
    *puVar1 = *puVar1 - *(longlong *)
                         ((this->History).FrameCycles.AllocatorInstance.Data +
                         (longlong)(int)uVar2 * 8);
    TVar4 = (this->History).CurrFrameCycles;
    uVar2 = (this->History).FrameIdx;
    uVar7 = 0;
    if ((int)uVar2 < (this->History).FrameCycles.ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(TAtomic<unsigned___int64> *)
     ((this->History).FrameCycles.AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = TVar4;
    LOCK();
    (this->History).CurrFrameCycles = (TAtomic<unsigned___int64>)0x0;
    UNLOCK();
    iVar3 = (this->History).FrameCycles.ArrayNum;
    (this->History).FrameIdx = ((this->History).FrameIdx + 1) % iVar3;
    LOCK();
    (this->History).CachedAverageCycles =
         (TAtomic<unsigned___int64>)((this->History).TotalCycles / (ulonglong)(longlong)iVar3);
    UNLOCK();
  }
  return;
}

