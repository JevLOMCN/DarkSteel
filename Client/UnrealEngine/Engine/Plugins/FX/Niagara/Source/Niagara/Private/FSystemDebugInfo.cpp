// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FSystemDebugInfo @ 149276fe0

FSystemDebugInfo * __thiscall
FNiagaraDebugHud::FSystemDebugInfo::FSystemDebugInfo
          (FSystemDebugInfo *this,FSystemDebugInfo *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (this->SystemName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemName).Data.AllocatorInstance.Data = (param_1->SystemName).Data.AllocatorInstance.Data
  ;
  (param_1->SystemName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemName).Data.ArrayNum = (param_1->SystemName).Data.ArrayNum;
  (this->SystemName).Data.ArrayMax = (param_1->SystemName).Data.ArrayMax;
  (param_1->SystemName).Data.ArrayNum = 0;
  (param_1->SystemName).Data.ArrayMax = 0;
  (this->SystemPrettyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemPrettyName).Data.AllocatorInstance.Data =
       (param_1->SystemPrettyName).Data.AllocatorInstance.Data;
  (param_1->SystemPrettyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemPrettyName).Data.ArrayNum = (param_1->SystemPrettyName).Data.ArrayNum;
  (this->SystemPrettyName).Data.ArrayMax = (param_1->SystemPrettyName).Data.ArrayMax;
  (param_1->SystemPrettyName).Data.ArrayNum = 0;
  (param_1->SystemPrettyName).Data.ArrayMax = 0;
  (this->PerfStats).Object = (param_1->PerfStats).Object;
  (this->PerfStats).SharedReferenceCount.ReferenceController =
       (param_1->PerfStats).SharedReferenceCount.ReferenceController;
  (param_1->PerfStats).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (param_1->PerfStats).Object = (FNiagaraDebugHUDPerfStats *)0x0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->UniqueColor).field0_0x0 + 8);
  *(undefined8 *)&(this->UniqueColor).field0_0x0 = *(undefined8 *)&(param_1->UniqueColor).field0_0x0
  ;
  *(undefined8 *)((longlong)&(this->UniqueColor).field0_0x0 + 8) = uVar1;
  this->FramesSinceVisible = param_1->FramesSinceVisible;
  this->bShowInWorld = param_1->bShowInWorld;
  this->bPassesSystemFilter = param_1->bPassesSystemFilter;
  this->TotalRegistered = param_1->TotalRegistered;
  this->TotalActive = param_1->TotalActive;
  this->TotalScalability = param_1->TotalScalability;
  this->TotalEmitters = param_1->TotalEmitters;
  this->TotalParticles = param_1->TotalParticles;
  this->TotalBytes = param_1->TotalBytes;
  this->TotalCulled = param_1->TotalCulled;
  this->TotalCulledByDistance = param_1->TotalCulledByDistance;
  this->TotalCulledByVisibility = param_1->TotalCulledByVisibility;
  this->TotalCulledByInstanceCount = param_1->TotalCulledByInstanceCount;
  this->TotalCulledByBudget = param_1->TotalCulledByBudget;
  this->TotalPlayerSystems = param_1->TotalPlayerSystems;
  iVar2 = (param_1->ScalabilityKillCounts).Distance;
  iVar3 = (param_1->ScalabilityKillCounts).InstanceCounts;
  iVar4 = (param_1->ScalabilityKillCounts).Visibility;
  (this->ScalabilityKillCounts).Total = (param_1->ScalabilityKillCounts).Total;
  (this->ScalabilityKillCounts).Distance = iVar2;
  (this->ScalabilityKillCounts).InstanceCounts = iVar3;
  (this->ScalabilityKillCounts).Visibility = iVar4;
  (this->ScalabilityKillCounts).GlobalBudget = (param_1->ScalabilityKillCounts).GlobalBudget;
  return this;
}

