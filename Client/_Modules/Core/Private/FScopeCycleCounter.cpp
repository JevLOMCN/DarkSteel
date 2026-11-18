// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FScopeCycleCounter @ 14161e2f0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopeCycleCounter * __thiscall
FScopeCycleCounter::FScopeCycleCounter
          (FScopeCycleCounter *this,TStatId param_1,EStatFlags param_2,bool param_3,
          FSourceLocation *param_4)

{
  FName FVar1;
  char *pcVar2;
  FSourceLocation *pFVar3;
  bool bVar4;
  uint uVar5;
  FNameEntryId FVar6;
  
  pFVar3 = param_4;
  *(undefined8 *)this = 0;
  this->field_0x8 = 0;
  FVar1 = *(FName *)&(param_1.StatIdPtr)->Name;
  FVar6 = FVar1.ComparisonIndex.Value;
  uVar5 = FVar1.Number;
  if ((FVar6.Value != 0) || (uVar5 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) &&
       ((GShouldEmitVerboseNamedEvents != false || ((param_2 & Verbose) == None)))) {
      pcVar2 = ((param_1.StatIdPtr)->StatDescriptionAnsi).Ptr;
      param_4._0_4_ = 0;
      bVar4 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar4) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,&param_4,pcVar2);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      this->field_0x8 = this->field_0x8 | 1;
      if (-1 < CpuChannel->Enabled) {
        param_4._0_4_ = FVar6.Value;
        param_4._4_4_ = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&param_4,((param_1.StatIdPtr)->StatDescriptionWide).Ptr,
                   (pFVar3->Impl)._File,(pFVar3->Impl)._Line);
        this->field_0x8 = this->field_0x8 | 2;
      }
    }
    if (((param_3) && (FThreadStats::bPrimaryDisableForever == false)) ||
       (FThreadStats::bPrimaryEnable != false)) {
      *(uint *)&this->field_0x0 = FVar1.ComparisonIndex.Value;
      *(uint *)&this->field_0x4 = FVar1.Number;
      param_4._0_4_ = FVar6.Value;
      param_4._4_4_ = uVar5;
      FThreadStats::AddMessage(FVar1,CycleScopeStart);
      this->field_0x8 = this->field_0x8 | 4;
    }
  }
  return this;
}

