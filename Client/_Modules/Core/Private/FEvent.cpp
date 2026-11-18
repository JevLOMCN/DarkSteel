// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ~FEvent @ 141620af0

void __thiscall FEvent::~FEvent(FEvent *this)

{
  this->_padding_ = (longlong)&___7FEvent__6B_;
  return;
}

// AdvanceStats @ 1416dfe50

void __thiscall FEvent::AdvanceStats(FEvent *this)

{
  TAtomic<unsigned_int> TVar1;
  
  LOCK();
  UNLOCK();
  TVar1 = (TAtomic<unsigned_int>)((int)EventUniqueId + 1);
  this->EventId = (uint)EventUniqueId;
  EventUniqueId = TVar1;
  LOCK();
  this->EventStartCycles = (TAtomic<unsigned_int>)0x0;
  UNLOCK();
  return;
}

// ResetForStats @ 14170dc40

void __thiscall FEvent::ResetForStats(FEvent *this)

{
  TAtomic<unsigned_int> TVar1;
  
  LOCK();
  UNLOCK();
  TVar1 = (TAtomic<unsigned_int>)((int)EventUniqueId + 1);
  this->EventId = (uint)EventUniqueId;
  EventUniqueId = TVar1;
  LOCK();
  this->EventStartCycles = (TAtomic<unsigned_int>)0x0;
  UNLOCK();
  return;
}

// TriggerForStats @ 141716e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FEvent::TriggerForStats(FEvent *this)

{
  TAtomic<unsigned_int> TVar1;
  uint uVar2;
  FName FVar3;
  int iVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_EventTriggerWithId> FVar6;
  LARGE_INTEGER local_res8;
  
  TVar1 = this->EventStartCycles;
  if ((TVar1 != (TAtomic<unsigned_int>)0x0) && (FThreadStats::bPrimaryEnable)) {
    QueryPerformanceCounter(&local_res8);
    iVar4 = local_res8.s.LowPart - (int)TVar1;
    uVar2 = this->EventId;
    FVar6 = StatPtr_STAT_EventTriggerWithId;
    if (StatPtr_STAT_EventTriggerWithId == (FThreadSafeStaticStat<FStat_STAT_EventTriggerWithId>)0x0
       ) {
      pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_EventTriggerWithId");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_EventTriggerWithId>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EventTriggerWithId,*pFVar5,
                         L"CPU Stall - Trigger For Event with ID","STATGROUP_CPUStalls",
                         "STATCAT_Advanced",L"CPU Stalls",true,true,ST_int64,true,false,MCR_Invalid)
      ;
    }
    FVar3 = *(FName *)FVar6;
    local_res8.s.LowPart = (DWORD)FVar3.ComparisonIndex.Value;
    local_res8.s.HighPart = FVar3.Number;
    FThreadStats::AddMessage<unsigned___int64>
              (FVar3,SpecialMessageMarker,(longlong)iVar4 | (ulonglong)uVar2 << 0x20,false);
    LOCK();
    UNLOCK();
    TVar1 = (TAtomic<unsigned_int>)((int)EventUniqueId + 1);
    this->EventId = (uint)EventUniqueId;
    EventUniqueId = TVar1;
    LOCK();
    this->EventStartCycles = (TAtomic<unsigned_int>)0x0;
    UNLOCK();
  }
  return;
}

// WaitForStats @ 14171ab60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FEvent::WaitForStats(FEvent *this)

{
  uint uVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_EventWaitWithId> FVar4;
  LARGE_INTEGER local_res10 [3];
  
  if ((FThreadStats::bPrimaryEnable) && (this->EventStartCycles == (TAtomic<unsigned_int>)0x0)) {
    uVar1 = this->EventId;
    FVar4 = StatPtr_STAT_EventWaitWithId;
    if (StatPtr_STAT_EventWaitWithId == (FThreadSafeStaticStat<FStat_STAT_EventWaitWithId>)0x0) {
      pFVar3 = ::FName::FName((FName *)&local_res10[0].s,"STAT_EventWaitWithId");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_EventWaitWithId>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EventWaitWithId,*pFVar3,
                         L"CPU Stall - Wait For Event with ID","STATGROUP_CPUStalls",
                         "STATCAT_Advanced",L"CPU Stalls",true,true,ST_int64,true,false,MCR_Invalid)
      ;
    }
    FVar2 = *(FName *)FVar4;
    local_res10[0]._0_4_ = FVar2.ComparisonIndex.Value;
    local_res10[0]._4_4_ = FVar2.Number;
    FThreadStats::AddMessage<unsigned___int64>
              (FVar2,SpecialMessageMarker,(ulonglong)uVar1 << 0x20,false);
    QueryPerformanceCounter(local_res10);
    LOCK();
    this->EventStartCycles = (TAtomic<unsigned_int>)local_res10[0]._0_4_;
    UNLOCK();
  }
  return;
}

// Wait @ 141a99780

bool __thiscall FEvent::Wait(FEvent *this,FTimespan *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_1->Ticks < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WaitTime.GetTicks() >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\Event.h"
                       ,0x58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar5 = param_1->Ticks / 10000;
  uVar4 = 0xffffffff;
  if ((longlong)uVar5 < 0xffffffff) {
    uVar4 = uVar5;
  }
  uVar5 = 0;
  if (0 < (longlong)uVar4) {
    uVar5 = uVar4 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a9980d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->_padding_ + 0x20))(this,uVar5,param_2);
  return (bool)uVar3;
}

