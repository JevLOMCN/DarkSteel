// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// FNiagaraPerfBaselineStatsListener @ 149333580

FNiagaraPerfBaselineStatsListener * __thiscall
FNiagaraPerfBaselineStatsListener::FNiagaraPerfBaselineStatsListener
          (FNiagaraPerfBaselineStatsListener *this,UNiagaraBaselineController *param_1)

{
  UNiagaraBaselineController *local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNiagaraPerfBaselineStatsListener__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraBaselineController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Baseline).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraBaselineController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Baseline).WeakPtr,(FObjectPtr)&local_res8);
  FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(&this->AccumulatedStats);
  return this;
}

// AllowOrphaned @ 14933c2e0

bool __thiscall
FNiagaraPerfBaselineStatsListener::AllowOrphaned(FNiagaraPerfBaselineStatsListener *this)

{
  return true;
}

// Begin @ 14933dbb0

void __thiscall FNiagaraPerfBaselineStatsListener::Begin(FNiagaraPerfBaselineStatsListener *this)

{
  UObject *pUVar1;
  UFunction *this_00;
  UClass *pUVar2;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Baseline).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    pUVar1 = FWeakObjectPtr::Get(&(this->Baseline).WeakPtr);
    this_00 = UObject::FindFunctionChecked(pUVar1,NAME_UNiagaraBaselineController_OnBeginTest);
    pUVar2 = UField::GetOwnerClass((UField *)this_00);
    if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014933dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar1 + 0x260))(pUVar1,this_00,0);
      return;
    }
    (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1);
  }
  return;
}

// End @ 149345e40

void __thiscall FNiagaraPerfBaselineStatsListener::End(FNiagaraPerfBaselineStatsListener *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FNiagaraPerfBaselineStats *pFVar5;
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar6;
  FNiagaraPerfBaselineStats local_28 [2];
  
  pFVar5 = FNiagaraPerfBaselineStats::FNiagaraPerfBaselineStats
                     (local_28,&this->AccumulatedStats,true);
  fVar1 = pFVar5->PerInstanceAvg_GT;
  fVar2 = pFVar5->PerInstanceAvg_RT;
  fVar3 = pFVar5->PerInstanceMax_GT;
  fVar4 = pFVar5->PerInstanceMax_RT;
  this_00 = FWeakObjectPtr::Get(&(this->Baseline).WeakPtr);
  if (this_00 != (UObject *)0x0) {
    local_28[0].PerInstanceAvg_GT = fVar1;
    local_28[0].PerInstanceAvg_RT = fVar2;
    local_28[0].PerInstanceMax_GT = fVar3;
    local_28[0].PerInstanceMax_RT = fVar4;
    this_01 = UObject::FindFunctionChecked(this_00,NAME_UNiagaraBaselineController_OnEndTest);
    pUVar6 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar6->ClassFlags & CLASS_Native) == CLASS_None) {
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01,local_28);
      return;
    }
    (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00,local_28);
  }
  return;
}

// NeedsComponentStats @ 14935f700

bool __thiscall
FNiagaraPerfBaselineStatsListener::NeedsComponentStats(FNiagaraPerfBaselineStatsListener *this)

{
  return false;
}

// NeedsSystemStats @ 14935f8c0

bool __thiscall
FNiagaraPerfBaselineStatsListener::NeedsSystemStats(FNiagaraPerfBaselineStatsListener *this)

{
  return true;
}

// NeedsWorldStats @ 14935f8f0

bool __thiscall
FNiagaraPerfBaselineStatsListener::NeedsWorldStats(FNiagaraPerfBaselineStatsListener *this)

{
  return false;
}

// Tick @ 1493709b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FNiagaraPerfBaselineStatsListener::Tick(FNiagaraPerfBaselineStatsListener *this)

{
  undefined1 uVar1;
  UNiagaraBaselineController *this_00;
  UNiagaraSystem *pUVar2;
  FParticlePerfStats *pFVar3;
  UFunction *this_01;
  UClass *pUVar4;
  char local_res8 [8];
  
  this_00 = (UNiagaraBaselineController *)FWeakObjectPtr::Get(&(this->Baseline).WeakPtr);
  if (this_00 == (UNiagaraBaselineController *)0x0) {
    return false;
  }
  pUVar2 = UNiagaraBaselineController::GetSystem(this_00);
  pFVar3 = FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar2);
  if (pFVar3 != (FParticlePerfStats *)0x0) {
    FAccumulatedParticlePerfStats::Tick(&this->AccumulatedStats,pFVar3);
  }
  this_01 = UObject::FindFunctionChecked
                      ((UObject *)this_00,NAME_UNiagaraBaselineController_OnTickTest);
  pUVar4 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res8[0] = '\0';
    (**(code **)(this_00->_padding_ + 0x260))(this_00,this_01,local_res8);
    return local_res8[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000149370a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this_00->_padding_ + 0x2c0))(this_00);
  return (bool)uVar1;
}

// TickRT @ 1493730b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraPerfBaselineStatsListener::TickRT(FNiagaraPerfBaselineStatsListener *this)

{
  UNiagaraBaselineController *this_00;
  UNiagaraSystem *pUVar1;
  FParticlePerfStats *pFVar2;
  
  this_00 = (UNiagaraBaselineController *)FWeakObjectPtr::Get(&(this->Baseline).WeakPtr);
  if (this_00 != (UNiagaraBaselineController *)0x0) {
    pUVar1 = UNiagaraBaselineController::GetSystem(this_00);
    pFVar2 = FParticlePerfStatsManager::GetSystemPerfStats((UFXSystemAsset *)pUVar1);
    if (pFVar2 != (FParticlePerfStats *)0x0) {
      FAccumulatedParticlePerfStats::TickRT(&this->AccumulatedStats,pFVar2);
      return;
    }
  }
  return;
}

