// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FScopeCycleCounterEmitter<FParticleEmitterInstance> @ 14814fb00

/* WARNING: Enum "Type": Some values do not have unique names */

FScopeCycleCounterEmitter * __thiscall
FScopeCycleCounterEmitter::FScopeCycleCounterEmitter<FParticleEmitterInstance>
          (FScopeCycleCounterEmitter *this,FParticleEmitterInstance *param_1)

{
  UParticleEmitter *this_00;
  TAtomic<FMinimalName> TVar1;
  FName FVar2;
  uint uVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester> FVar5;
  TStatIdData *pTVar6;
  FNameEntryId FVar7;
  FName local_res8;
  
  *(undefined8 *)this = 0;
  this->field_0x8 = 0;
  if (param_1 == (FParticleEmitterInstance *)0x0) {
    return this;
  }
  this_00 = param_1->SpriteTemplate;
  FVar5 = StatPtr_STAT_EmittersStatGroupTester;
  if (StatPtr_STAT_EmittersStatGroupTester ==
      (FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_EmittersStatGroupTester");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_EmittersStatGroupTester>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EmittersStatGroupTester,*pFVar4,
                       L"STAT_EmittersStatGroupTester","STATGROUP_Emitters","STATCAT_Advanced",
                       L"Emitters",true,true,ST_int64,false,false,MCR_Invalid);
  }
  if ((((int)*(undefined8 *)FVar5 == 0) && ((int)((ulonglong)*(undefined8 *)FVar5 >> 0x20) == 0)) ||
     (FThreadStats::bPrimaryEnable == false)) {
    pTVar6 = &TStatId::TStatId_NAME_None;
  }
  else {
    TVar1 = ((this_00->StatID).StatIdPtr)->Name;
    if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
      UParticleEmitter::CreateStatID(this_00);
    }
    pTVar6 = (this_00->StatID).StatIdPtr;
  }
  if (((SUB84(pTVar6->Name,0) != 0) || (SUB84(pTVar6->Name,4) != 0)) &&
     (FThreadStats::bPrimaryEnable != false)) {
    FVar2 = *(FName *)&pTVar6->Name;
    FVar7 = FVar2.ComparisonIndex.Value;
    uVar3 = FVar2.Number;
    if ((FVar7.Value != 0) || (uVar3 != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8.ComparisonIndex.Value = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8,(pTVar6->StatDescriptionAnsi).Ptr);
        this->field_0x8 = this->field_0x8 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_res8.ComparisonIndex.Value = FVar7.Value;
          local_res8.Number = uVar3;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_res8,(pTVar6->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleEmitterInstances.h"
                     ,0x31c);
          this->field_0x8 = this->field_0x8 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        *(uint *)&this->field_0x0 = FVar2.ComparisonIndex.Value;
        *(uint *)&this->field_0x4 = FVar2.Number;
        local_res8.ComparisonIndex.Value = FVar7.Value;
        local_res8.Number = uVar3;
        FThreadStats::AddMessage(FVar2,CycleScopeStart);
        this->field_0x8 = this->field_0x8 | 4;
      }
    }
    return this;
  }
  return this;
}

