// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticStruct @ 149317160

UScriptStruct * __cdecl FNiagaraPerfBaselineStats::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPerfBaselineStats.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraPerfBaselineStats.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats,(UObject *)pUVar1,
                         L"NiagaraPerfBaselineStats");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraPerfBaselineStats.OuterSingleton;
}

// FNiagaraPerfBaselineStats @ 149333290

FNiagaraPerfBaselineStats * __thiscall
FNiagaraPerfBaselineStats::FNiagaraPerfBaselineStats
          (FNiagaraPerfBaselineStats *this,FAccumulatedParticlePerfStats *param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FNiagaraPerfBaselineStats *pFVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = 0;
  this->PerInstanceAvg_GT = 0.0;
  this->PerInstanceAvg_RT = 0.0;
  this->PerInstanceMax_GT = 0.0;
  this->PerInstanceMax_RT = 0.0;
  if (param_2) {
    FlushRenderingCommands();
  }
  uVar1 = (param_1->GameThreadStats).NumFrames;
  uVar9 = 5;
  uVar10 = 5;
  if (uVar1 < 10) {
    uVar9 = uVar1 >> 1;
  }
  bVar4 = IsInGameThread();
  if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<392709136413884568>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                         ,0x98,"IsInRenderingThread()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FNiagaraPerfBaselineStats *)(*pcVar2)();
    return pFVar5;
  }
  if ((param_1->RenderThreadStats).NumFrames < 10) {
    bVar4 = IsInGameThread();
    if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<392709136413884568>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                           ,0x98,"IsInRenderingThread()"), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraPerfBaselineStats *)(*pcVar2)();
      return pFVar5;
    }
    uVar10 = (param_1->RenderThreadStats).NumFrames >> 1;
  }
  dVar3 = __real_412e848000000000;
  uVar8 = uVar7;
  if ((param_1->GameThreadStats).AccumulatedStats.NumInstances != 0) {
    uVar8 = ((longlong)(param_1->GameThreadStats).AccumulatedStats.EndOfFrameCycles +
             (longlong)(param_1->GameThreadStats).AccumulatedStats.ActivationCycles +
             (param_1->GameThreadStats).AccumulatedStats.WaitCycles +
             (param_1->GameThreadStats).AccumulatedStats.FinalizeCycles +
             (param_1->GameThreadStats).AccumulatedStats.TickGameThreadCycles +
            (longlong)(param_1->GameThreadStats).AccumulatedStats.TickConcurrentCycles) /
            (param_1->GameThreadStats).AccumulatedStats.NumInstances;
  }
  this->PerInstanceAvg_GT =
       (float)((double)uVar8 * FGenericPlatformTime::SecondsPerCycle64 * __real_412e848000000000);
  uVar6 = FAccumulatedParticlePerfStats_GT::GetPerInstanceMaxCycles(&param_1->GameThreadStats,uVar9)
  ;
  this->PerInstanceMax_GT = (float)((double)uVar6 * FGenericPlatformTime::SecondsPerCycle64 * dVar3)
  ;
  bVar4 = IsInGameThread();
  if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<392709136413884568>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                         ,0x98,"IsInRenderingThread()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FNiagaraPerfBaselineStats *)(*pcVar2)();
    return pFVar5;
  }
  uVar8 = (param_1->RenderThreadStats).AccumulatedStats.NumInstances;
  if (uVar8 != 0) {
    uVar7 = ((param_1->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles +
            (param_1->RenderThreadStats).AccumulatedStats.RenderUpdateCycles) / uVar8;
  }
  this->PerInstanceAvg_RT = (float)((double)uVar7 * FGenericPlatformTime::SecondsPerCycle64 * dVar3)
  ;
  bVar4 = IsInGameThread();
  if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<392709136413884568>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                         ,0x98,"IsInRenderingThread()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FNiagaraPerfBaselineStats *)(*pcVar2)();
    return pFVar5;
  }
  uVar6 = FAccumulatedParticlePerfStats_RT::GetPerInstanceMaxCycles
                    (&param_1->RenderThreadStats,uVar10);
  this->PerInstanceMax_RT = (float)((double)uVar6 * FGenericPlatformTime::SecondsPerCycle64 * dVar3)
  ;
  return this;
}

// Compare @ 14933fd30

EComparisonResult __cdecl
FNiagaraPerfBaselineStats::Compare
          (FNiagaraPerfBaselineStats *param_1,FNiagaraPerfBaselineStats *param_2,
          FNiagaraPerfBaselineStats *param_3)

{
  EComparisonResult EVar1;
  EComparisonResult local_res20 [2];
  
  EVar1 = Compare(param_1,param_2,param_3,local_res20,local_res20,local_res20,local_res20);
  return EVar1;
}

// Compare @ 14933fd70

EComparisonResult __cdecl
FNiagaraPerfBaselineStats::Compare
          (FNiagaraPerfBaselineStats *param_1,FNiagaraPerfBaselineStats *param_2,
          FNiagaraPerfBaselineStats *param_3,EComparisonResult *param_4,EComparisonResult *param_5,
          EComparisonResult *param_6,EComparisonResult *param_7)

{
  EComparisonResult EVar1;
  EComparisonResult EVar2;
  float fVar3;
  
  if (((((0.0 < param_1->PerInstanceAvg_GT) && (0.0 < param_1->PerInstanceAvg_RT)) &&
       (0.0 < param_1->PerInstanceMax_GT)) &&
      ((0.0 < param_1->PerInstanceMax_RT && (0.0 < param_2->PerInstanceAvg_GT)))) &&
     ((0.0 < param_2->PerInstanceAvg_RT &&
      ((0.0 < param_2->PerInstanceMax_GT && (0.0 < param_2->PerInstanceMax_RT)))))) {
    fVar3 = param_1->PerInstanceAvg_GT / param_2->PerInstanceAvg_GT;
    param_3->PerInstanceAvg_GT = fVar3;
    EVar2 = Bad;
    if (fVar3 < GPerfBaselineThreshold_Bad) {
      EVar1 = (EComparisonResult)(GPerfBaselineThreshold_Poor <= fVar3);
    }
    else {
      EVar1 = Bad;
    }
    *param_4 = EVar1;
    if ((param_1->PerInstanceMax_GT <= 0.0) || (param_2->PerInstanceMax_GT <= 0.0)) {
      param_3->PerInstanceMax_GT = 0.0;
      EVar1 = Unknown;
    }
    else {
      fVar3 = param_1->PerInstanceMax_GT / param_2->PerInstanceMax_GT;
      param_3->PerInstanceMax_GT = fVar3;
      if (fVar3 < GPerfBaselineThreshold_Bad) {
        EVar1 = (EComparisonResult)(GPerfBaselineThreshold_Poor <= fVar3);
      }
      else {
        EVar1 = Bad;
      }
    }
    *param_5 = EVar1;
    if ((param_1->PerInstanceAvg_RT <= 0.0) || (param_2->PerInstanceAvg_RT <= 0.0)) {
      param_3->PerInstanceAvg_RT = 0.0;
      EVar1 = Unknown;
    }
    else {
      fVar3 = param_1->PerInstanceAvg_RT / param_2->PerInstanceAvg_RT;
      param_3->PerInstanceAvg_RT = fVar3;
      if (fVar3 < GPerfBaselineThreshold_Bad) {
        EVar1 = (EComparisonResult)(GPerfBaselineThreshold_Poor <= fVar3);
      }
      else {
        EVar1 = Bad;
      }
    }
    *param_6 = EVar1;
    if ((param_1->PerInstanceMax_RT <= 0.0) || (param_2->PerInstanceMax_RT <= 0.0)) {
      param_3->PerInstanceMax_RT = 0.0;
      EVar2 = Unknown;
    }
    else {
      fVar3 = param_1->PerInstanceMax_RT / param_2->PerInstanceMax_RT;
      param_3->PerInstanceMax_RT = fVar3;
      if (fVar3 < GPerfBaselineThreshold_Bad) {
        EVar2 = (EComparisonResult)(GPerfBaselineThreshold_Poor <= fVar3);
      }
    }
    *param_7 = EVar2;
    EVar1 = *param_5;
    if ((int)*param_5 < (int)*param_4) {
      EVar1 = *param_4;
    }
    if ((int)EVar2 < (int)*param_6) {
      EVar2 = *param_6;
    }
    if ((int)EVar2 < (int)EVar1) {
      EVar2 = EVar1;
    }
    return EVar2;
  }
  param_3->PerInstanceAvg_GT = 0.0;
  param_3->PerInstanceAvg_RT = 0.0;
  param_3->PerInstanceMax_GT = 0.0;
  param_3->PerInstanceMax_RT = 0.0;
  *param_4 = Unknown;
  *param_5 = Unknown;
  *param_6 = Unknown;
  *param_7 = Unknown;
  return Unknown;
}

// Compare @ 14933ff40

EComparisonResult __cdecl
FNiagaraPerfBaselineStats::Compare(float param_1,float param_2,float *param_3)

{
  float fVar1;
  
  if ((0.0 < param_1) && (0.0 < param_2)) {
    fVar1 = param_1 / param_2;
    *param_3 = fVar1;
    if (GPerfBaselineThreshold_Bad <= fVar1) {
      return Bad;
    }
    return (EComparisonResult)(GPerfBaselineThreshold_Poor <= fVar1);
  }
  *param_3 = 0.0;
  return Unknown;
}

// GetComparisonResultColor @ 14934ee40

FLinearColor * __cdecl
FNiagaraPerfBaselineStats::GetComparisonResultColor
          (FLinearColor *__return_storage_ptr__,EComparisonResult param_1)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  
  if (param_1 == Good) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Green;
    return __return_storage_ptr__;
  }
  if (param_1 == Poor) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Yellow;
    return __return_storage_ptr__;
  }
  if (param_1 == Bad) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red;
    return __return_storage_ptr__;
  }
  if (param_1 != Unknown) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                       ,0xa9,L"Invalid result in GetComparisonResultColor()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinearColor *)(*pcVar1)();
      return pFVar3;
    }
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Blue;
  return __return_storage_ptr__;
}

// GetComparisonResultText @ 14934eef0

FText * __cdecl
FNiagaraPerfBaselineStats::GetComparisonResultText
          (FText *__return_storage_ptr__,EComparisonResult param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  if (param_1 == Good) {
    pwVar5 = L"Good";
    pwVar4 = L"BaselineResultName_Good";
  }
  else if (param_1 == Poor) {
    pwVar5 = L"Poor";
    pwVar4 = L"BaselineResultName_Poor";
  }
  else if (param_1 == Bad) {
    pwVar5 = L"Bad";
    pwVar4 = L"BaselineResultName_Bad";
  }
  else if (param_1 == Unknown) {
    pwVar5 = L"Unknown";
    pwVar4 = L"BaselineResultName_Unknown";
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                       ,0xb6,L"Invalid result in GetComparisonResultText()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
    pwVar5 = L"Invalid";
    pwVar4 = L"BaselineResultName_Invalid";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"NiagaraPerformanceBaselines",pwVar4,pwVar5);
  return __return_storage_ptr__;
}

