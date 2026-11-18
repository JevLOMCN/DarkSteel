// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Start @ 1420db190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCycleCounter::Start
          (FCycleCounter *this,TStatId param_1,EStatFlags param_2,bool param_3,
          FSourceLocation *param_4)

{
  FName FVar1;
  uint uVar2;
  FColor_u_0 FVar3;
  FColor_u_0 local_res10;
  uint uStackX_14;
  
  FVar1 = *(FName *)&(param_1.StatIdPtr)->Name;
  FVar3.Bits = (uint)FVar1.ComparisonIndex.Value;
  uVar2 = FVar1.Number;
  if ((FVar3.Bits != 0) || (uVar2 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) &&
       ((GShouldEmitVerboseNamedEvents || ((param_2 & Verbose) == None)))) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,((param_1.StatIdPtr)->StatDescriptionAnsi).Ptr);
      this->EmittedEvent = this->EmittedEvent | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar3.Bits;
        uStackX_14 = uVar2;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,((param_1.StatIdPtr)->StatDescriptionWide).Ptr,
                   (param_4->Impl)._File,(param_4->Impl)._Line);
        this->EmittedEvent = this->EmittedEvent | 2;
      }
    }
    if (((param_3) && (FThreadStats::bPrimaryDisableForever == false)) ||
       (FThreadStats::bPrimaryEnable != false)) {
      this->StatId = FVar1;
      local_res10.Bits = FVar3.Bits;
      uStackX_14 = uVar2;
      FThreadStats::AddMessage(FVar1,CycleScopeStart);
      this->EmittedEvent = this->EmittedEvent | 4;
    }
  }
  return;
}

