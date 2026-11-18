// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 17

// FDownloadConnectionCount @ 14327f640

FDownloadConnectionCount * __thiscall
BuildPatchServices::FDownloadConnectionCount::FDownloadConnectionCount
          (FDownloadConnectionCount *this,FDownloadConnectionCountConfig *param_1,
          IDownloadServiceStatistics *param_2)

{
  uint uVar1;
  
  this->DownloadStatistics = param_2;
  this->_padding_ = (longlong)&___7FDownloadConnectionCount_BuildPatchServices__6B_;
  (this->Configuration).MaxLimit = param_1->MaxLimit;
  (this->Configuration).MinLimit = param_1->MinLimit;
  (this->Configuration).NegativeHysteresis = param_1->NegativeHysteresis;
  (this->Configuration).AverageSpeedMinCount = param_1->AverageSpeedMinCount;
  (this->Configuration).PositiveHysteresis = param_1->PositiveHysteresis;
  (this->Configuration).HighBandwidthFactor = param_1->HighBandwidthFactor;
  (this->Configuration).LowBandwidthFactor = param_1->LowBandwidthFactor;
  (this->Configuration).bDisableConnectionScaling = param_1->bDisableConnectionScaling;
  uVar1 = param_1->FallbackCount;
  (this->Configuration).FallbackCount = uVar1;
  (this->Configuration).HealthHysteresis = param_1->HealthHysteresis;
  this->ConsecutiveDecreases = 0;
  this->ConsecutiveIncreases = 0;
  this->ConsecutiveFailedHealth = 0;
  this->HighBandwidthLevel = 0.0;
  this->LowBandwidthLevel = 0.0;
  this->AveragesSeen = 0;
  this->RequestAllowance = uVar1;
  this->MinimumAveragesBeforeHighSet = 4;
  this->MaximumAllowanceExcess = 0x10;
  return this;
}

// ~FDownloadConnectionCount @ 1432880e0

void __thiscall
BuildPatchServices::FDownloadConnectionCount::~FDownloadConnectionCount
          (FDownloadConnectionCount *this)

{
  this->_padding_ = (longlong)&___7IDownloadConnectionCount_BuildPatchServices__6B_;
  return;
}

// GetAdjustedCount @ 1432d3100

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
BuildPatchServices::FDownloadConnectionCount::GetAdjustedCount
          (FDownloadConnectionCount *this,uint param_1,EBuildPatchDownloadHealth param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  IDownloadServiceStatistics *pIVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  double local_28;
  uint local_20;
  
  if ((this->Configuration).bDisableConnectionScaling != false) {
    return (this->Configuration).FallbackCount;
  }
  uVar3 = this->RequestAllowance;
  if (this->MaximumAllowanceExcess <= uVar3 - param_1) {
    uVar7 = (this->Configuration).MinLimit;
    uVar8 = uVar3 - (uVar7 < uVar3);
    uVar6 = (this->Configuration).MaxLimit;
    if (uVar8 < uVar6) {
      uVar6 = uVar8;
    }
    if (uVar7 < uVar6) {
      uVar7 = uVar6;
    }
    this->RequestAllowance = uVar7;
    goto LAB_1432d3308;
  }
  uVar8 = (this->Configuration).MaxLimit;
  if ((param_1 < uVar8) &&
     ((((param_2 == Good || (param_2 == Excellent)) ||
       (this->ConsecutiveFailedHealth % (this->Configuration).HealthHysteresis != 0)) ||
      (this->ConsecutiveFailedHealth == 0)))) {
    bVar5 = true;
  }
  else {
    uVar6 = (this->Configuration).MinLimit;
    bVar5 = false;
    uVar7 = uVar3 - (uVar6 < uVar3);
    if (uVar7 < uVar8) {
      uVar8 = uVar7;
    }
    if (uVar6 < uVar8) {
      uVar6 = uVar8;
    }
    this->RequestAllowance = uVar6;
  }
  if ((param_2 == Good) || (param_2 == Excellent)) {
    this->ConsecutiveFailedHealth = 0;
  }
  else {
    this->ConsecutiveFailedHealth = this->ConsecutiveFailedHealth + 1;
  }
  pIVar4 = this->DownloadStatistics;
  if (!bVar5) goto LAB_1432d3308;
  if (pIVar4 == (IDownloadServiceStatistics *)0x0) {
    uVar8 = (this->Configuration).MaxLimit;
    uVar6 = this->RequestAllowance + 1;
    uVar7 = (this->Configuration).MinLimit;
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    if (uVar7 < uVar8) {
      uVar7 = uVar8;
    }
    this->RequestAllowance = uVar7;
    goto LAB_1432d3308;
  }
  (**(code **)((longlong)*pIVar4 + 0x48))
            (pIVar4,&local_28,(this->Configuration).AverageSpeedMinCount);
  if (local_20 < (this->Configuration).AverageSpeedMinCount) goto LAB_1432d3308;
  if (this->AveragesSeen < this->MinimumAveragesBeforeHighSet) {
    this->AveragesSeen = this->AveragesSeen + 1;
    goto LAB_1432d3308;
  }
  puVar1 = &this->ConsecutiveIncreases;
  puVar2 = &this->ConsecutiveDecreases;
  if (local_28 <= this->HighBandwidthLevel * (this->Configuration).HighBandwidthFactor) {
    if (local_28 < this->LowBandwidthLevel) {
      iVar9 = 4;
      if (*puVar2 < (this->Configuration).NegativeHysteresis) {
        iVar9 = 1;
      }
      goto LAB_1432d3240;
    }
LAB_1432d32a6:
    *puVar2 = 0;
  }
  else {
    iVar9 = 3;
    if (*puVar1 < (this->Configuration).PositiveHysteresis) {
      iVar9 = 0;
    }
LAB_1432d3240:
    if (iVar9 == 3) {
      uVar8 = (this->Configuration).MaxLimit;
      uVar6 = this->RequestAllowance + 1;
      uVar7 = (this->Configuration).MinLimit;
      if (uVar6 < uVar8) {
        uVar8 = uVar6;
      }
      if (uVar7 < uVar8) {
        uVar7 = uVar8;
      }
      this->RequestAllowance = uVar7;
LAB_1432d3286:
      UpdateTrackingSpeed(this,local_28);
    }
    else if (iVar9 == 4) {
      uVar7 = (this->Configuration).MinLimit;
      uVar8 = this->RequestAllowance - (uint)(uVar7 < this->RequestAllowance);
      uVar6 = (this->Configuration).MaxLimit;
      if (uVar8 < uVar6) {
        uVar6 = uVar8;
      }
      if (uVar7 < uVar6) {
        uVar7 = uVar6;
      }
      this->RequestAllowance = uVar7;
      goto LAB_1432d3286;
    }
    if (iVar9 == 0) {
      *puVar1 = *puVar1 + 1;
      *puVar2 = 0;
      goto LAB_1432d3308;
    }
    if (iVar9 != 1) {
      if (((iVar9 != 2) && (iVar9 != 3)) && (iVar9 != 4)) goto LAB_1432d3308;
      goto LAB_1432d32a6;
    }
    *puVar2 = *puVar2 + 1;
  }
  *puVar1 = 0;
LAB_1432d3308:
  if ((uVar3 != this->RequestAllowance) && (5 < (byte)LogDownloadConnectionCount._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDownloadConnectionCount)
    ;
  }
  return this->RequestAllowance;
}

// GetAllowance @ 1432d34b0

uint __thiscall
BuildPatchServices::FDownloadConnectionCount::GetAllowance(FDownloadConnectionCount *this)

{
  return this->RequestAllowance;
}

// GetSpeedDecreaseStatus @ 1432d95f0

EDownloadSpeedStatus __thiscall
BuildPatchServices::FDownloadConnectionCount::GetSpeedDecreaseStatus(FDownloadConnectionCount *this)

{
  EDownloadSpeedStatus EVar1;
  
  EVar1 = TransientDecrease;
  if ((this->Configuration).NegativeHysteresis <= this->ConsecutiveDecreases) {
    EVar1 = Saturated;
  }
  return EVar1;
}

// GetSpeedIncreaseStatus @ 1432d9610

EDownloadSpeedStatus __thiscall
BuildPatchServices::FDownloadConnectionCount::GetSpeedIncreaseStatus(FDownloadConnectionCount *this)

{
  EDownloadSpeedStatus EVar1;
  
  EVar1 = TransientIncrease;
  if ((this->Configuration).PositiveHysteresis <= this->ConsecutiveIncreases) {
    EVar1 = Headroom;
  }
  return EVar1;
}

// GetSpeedStatus @ 1432d9630

EDownloadSpeedStatus __thiscall
BuildPatchServices::FDownloadConnectionCount::GetSpeedStatus
          (FDownloadConnectionCount *this,double param_1)

{
  EDownloadSpeedStatus EVar1;
  
  if (this->HighBandwidthLevel * (this->Configuration).HighBandwidthFactor < param_1) {
    EVar1 = Headroom;
    if (this->ConsecutiveIncreases < (this->Configuration).PositiveHysteresis) {
      EVar1 = TransientIncrease;
    }
    return EVar1;
  }
  if (param_1 < this->LowBandwidthLevel) {
    EVar1 = Saturated;
    if (this->ConsecutiveDecreases < (this->Configuration).NegativeHysteresis) {
      EVar1 = TransientDecrease;
    }
    return EVar1;
  }
  return Steady;
}

// IsCountAcceptable @ 1432dbad0

bool __thiscall
BuildPatchServices::FDownloadConnectionCount::IsCountAcceptable
          (FDownloadConnectionCount *this,uint param_1)

{
  return param_1 < (this->Configuration).MaxLimit;
}

// IsHealthAcceptable @ 1432dbe20

bool __thiscall
BuildPatchServices::FDownloadConnectionCount::IsHealthAcceptable
          (FDownloadConnectionCount *this,EBuildPatchDownloadHealth param_1)

{
  if ((((param_1 != Good) && (param_1 != Excellent)) &&
      (this->ConsecutiveFailedHealth % (this->Configuration).HealthHysteresis == 0)) &&
     (this->ConsecutiveFailedHealth != 0)) {
    return false;
  }
  return true;
}

// IsSpeedDecreasing @ 1432dc530

bool __thiscall
BuildPatchServices::FDownloadConnectionCount::IsSpeedDecreasing
          (FDownloadConnectionCount *this,double param_1)

{
  return param_1 < this->LowBandwidthLevel;
}

// IsSpeedIncreasing @ 1432dc540

bool __thiscall
BuildPatchServices::FDownloadConnectionCount::IsSpeedIncreasing
          (FDownloadConnectionCount *this,double param_1)

{
  return this->HighBandwidthLevel * (this->Configuration).HighBandwidthFactor < param_1;
}

// ShouldDecreaseAllowance @ 1432ee2b0

bool __thiscall
BuildPatchServices::FDownloadConnectionCount::ShouldDecreaseAllowance
          (FDownloadConnectionCount *this,EDownloadSpeedStatus param_1)

{
  return param_1 == Saturated;
}

// ShouldIncreaseAllowance @ 1432ee2c0

bool __thiscall
BuildPatchServices::FDownloadConnectionCount::ShouldIncreaseAllowance
          (FDownloadConnectionCount *this,EDownloadSpeedStatus param_1)

{
  return param_1 == Headroom;
}

// UpdateAllowance @ 1432f63e0

void __thiscall
BuildPatchServices::FDownloadConnectionCount::UpdateAllowance
          (FDownloadConnectionCount *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 < 0) && (this->RequestAllowance <= (this->Configuration).MinLimit)) {
    param_1 = 0;
  }
  uVar1 = (this->Configuration).MinLimit;
  uVar2 = this->RequestAllowance + param_1;
  uVar3 = (this->Configuration).MaxLimit;
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  this->RequestAllowance = uVar1;
  return;
}

// UpdateHealth @ 1432f6420

void __thiscall
BuildPatchServices::FDownloadConnectionCount::UpdateHealth
          (FDownloadConnectionCount *this,EBuildPatchDownloadHealth param_1)

{
  if ((param_1 != Good) && (param_1 != Excellent)) {
    this->ConsecutiveFailedHealth = this->ConsecutiveFailedHealth + 1;
    return;
  }
  this->ConsecutiveFailedHealth = 0;
  return;
}

// UpdateSpeedStatus @ 1432f6440

void __thiscall
BuildPatchServices::FDownloadConnectionCount::UpdateSpeedStatus
          (FDownloadConnectionCount *this,EDownloadSpeedStatus param_1)

{
  if (param_1 == TransientIncrease) {
    this->ConsecutiveIncreases = this->ConsecutiveIncreases + 1;
    this->ConsecutiveDecreases = 0;
  }
  else {
    if (param_1 == TransientDecrease) {
      this->ConsecutiveDecreases = this->ConsecutiveDecreases + 1;
      this->ConsecutiveIncreases = 0;
      return;
    }
    if (((param_1 == Steady) || (param_1 == Headroom)) || (param_1 == Saturated)) {
      this->ConsecutiveIncreases = 0;
      this->ConsecutiveDecreases = 0;
      return;
    }
  }
  return;
}

// UpdateTrackingSpeed @ 1432f64f0

void __thiscall
BuildPatchServices::FDownloadConnectionCount::UpdateTrackingSpeed
          (FDownloadConnectionCount *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (this->HighBandwidthLevel <= param_1 && param_1 != this->HighBandwidthLevel) {
    this->HighBandwidthLevel = param_1;
    this->LowBandwidthLevel = param_1 * (this->Configuration).LowBandwidthFactor;
    return;
  }
  if (param_1 < this->LowBandwidthLevel) {
    this->LowBandwidthLevel = param_1;
    dVar3 = param_1 / (this->Configuration).LowBandwidthFactor;
    this->HighBandwidthLevel = dVar3;
    if (dVar3 <= param_1) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2708458487695802667>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\DownloadConnectionCount.cpp"
                         ,299,"HighBandwidthLevel > LowBandwidthLevel");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->LowBandwidthLevel = this->HighBandwidthLevel * __real_3fe3333333333333;
    }
  }
  return;
}

