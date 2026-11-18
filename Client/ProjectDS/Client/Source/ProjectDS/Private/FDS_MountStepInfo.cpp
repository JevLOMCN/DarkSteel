// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// Activate @ 14b9de620

void __thiscall FDS_MountStepInfo::Activate(FDS_MountStepInfo *this,double param_1)

{
  UDS_MountEvent *pUVar1;
  
  this->IsActive = true;
  this->ActivationStartTime = param_1;
  this->ActivationEndTime = (double)this->Duration + param_1;
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    FDS_EventDelegate<FDS_MountStepInfo_const_&>::Broadcast(&pUVar1->OnChangedMountStep,this);
    FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::Broadcast
              (&pUVar1->OnChangedMountStep_Filtered,&this->MountStep,this);
  }
  return;
}

// CheckCoolTime @ 14b9e2ab0

bool __thiscall FDS_MountStepInfo::CheckCoolTime(FDS_MountStepInfo *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return dVar1 < this->CoolTimeEndTime;
}

// CheckMountTime @ 14b9e2b10

bool __thiscall FDS_MountStepInfo::CheckMountTime(FDS_MountStepInfo *this)

{
  double dVar1;
  
  if (0.0 < this->Duration) {
    dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
    return dVar1 < this->ActivationEndTime || dVar1 == this->ActivationEndTime;
  }
  return true;
}

// CheckNextStepAvailable @ 14b9e2bb0

bool __thiscall FDS_MountStepInfo::CheckNextStepAvailable(FDS_MountStepInfo *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 !=
      *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->NextStepAvailableTimeMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar1 * 0x10) ==
            param_1) {
          return true;
        }
        iVar1 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  return false;
}

// CheckUnableTime @ 14b9e2c30

bool __thiscall FDS_MountStepInfo::CheckUnableTime(FDS_MountStepInfo *this,float param_1)

{
  if (0.0 < this->ActivationStartTime) {
    return param_1 < this->UnableTime;
  }
  return false;
}

// Deactivate @ 14b9e6c60

void __thiscall FDS_MountStepInfo::Deactivate(FDS_MountStepInfo *this,double param_1)

{
  UDS_MountEvent *pUVar1;
  
  this->IsActive = false;
  this->ActivationEndTime = 0.0;
  this->DeActivateTime = param_1;
  this->CoolTimeEndTime = (double)this->CoolTime + param_1;
  pUVar1 = UDS_MountEvent::GetEvent();
  if (pUVar1 != (UDS_MountEvent *)0x0) {
    FDS_EventDelegate<FDS_MountStepInfo_const_&>::Broadcast(&pUVar1->OnChangedMountStep,this);
    FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::Broadcast
              (&pUVar1->OnChangedMountStep_Filtered,&this->MountStep,this);
  }
  return;
}

// GetAdditionalAvailableTime @ 14b9ec800

float __thiscall FDS_MountStepInfo::GetAdditionalAvailableTime(FDS_MountStepInfo *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  float *pfVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 !=
      *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->NextStepAvailableTimeMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NextStepAvailableTimeMap;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pfVar3 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                   ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                  *)&this->NextStepAvailableTimeMap,param_1);
          return *pfVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetCurTime @ 14b9ee9f0

double __thiscall FDS_MountStepInfo::GetCurTime(FDS_MountStepInfo *this)

{
  double dVar1;
  longlong lVar2;
  bool bVar3;
  FDS_TimeInfo *pFVar4;
  longlong lStackX_8;
  FDateTime aFStackX_10 [3];
  FDS_TimeInfo FStack_38;
  
  bVar3 = UDS_GameInstance::GetIsCCSAIMode();
  if (!bVar3) {
    bVar3 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (!bVar3) {
      pFVar4 = UDS_TimeData::GetTime(&FStack_38,NTPTime);
      lVar2 = (pFVar4->ChronoTime)._MyDur._MyRep;
      dVar1 = pFVar4->Time;
      std::chrono::steady_clock::now();
      return ((double)(lStackX_8 - lVar2) * __real_3e112e0be826d695 + dVar1) -
             UDS_TimeUtilManager::DiffServerTime;
    }
  }
  FDateTime::UtcNow();
  FDateTime::FDateTime(aFStackX_10,0x7b2,1,1,0,0,0,0);
  return (double)(lStackX_8 - aFStackX_10[0].Ticks) * __real_3e7ad7f29abcaf48 -
         UDS_TimeUtilManager::DiffServerTime;
}

// GetElapsedTimeSinceStepStart @ 14b9efc30

float __thiscall FDS_MountStepInfo::GetElapsedTimeSinceStepStart(FDS_MountStepInfo *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return (float)(dVar1 - this->ActivationStartTime);
}

// GetRemainCoolTime @ 14b9f1250

float __thiscall FDS_MountStepInfo::GetRemainCoolTime(FDS_MountStepInfo *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar1 = this->CoolTimeEndTime - dVar1;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return (float)dVar1;
}

// InitMountStepInfo @ 14b9f80c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_MountStepInfo::InitMountStepInfo(FDS_MountStepInfo *this,FDS_ActionMountTableRow *param_1)

{
  FScriptContainerElement *pFVar1;
  EDS_MountStep EVar2;
  int iVar3;
  code *pcVar4;
  EDS_AbilityTagType EVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  UDS_LogManager *pUVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_1 == (FDS_ActionMountTableRow *)0x0) {
    bVar6 = false;
  }
  else {
    EVar2 = param_1->MountStep;
    this->MountStep = EVar2;
    EVar5 = UDS_MountManager::GetMountAbilityTagTypeFromStep(EVar2);
    this->MountAbilityTagType = EVar5;
    uVar11 = 0;
    this->KeyActionType = param_1->KeyActionType;
    this->UnableTime = (float)param_1->UnableTime;
    this->CoolTime = param_1->CoolTime;
    this->Duration = 0.0;
    this->UseCostStamina = param_1->UseCostStamina;
    this->CostStaminaPerSecond = param_1->CostStaminaPerSec;
    this->IconID = param_1->ID_MountStepIcon;
    this->IsToggleSkill = param_1->IsToggle;
    this->IsPressedSkill = param_1->IsPressed;
    this->UseMotionBlur = param_1->RideMotionBlur;
    pFVar10 = (param_1->NextUseStep).AllocatorInstance.Data;
    iVar3 = (param_1->NextUseStep).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar3 * 4;
    while( true ) {
      if ((param_1->NextUseStep).ArrayNum != iVar3) {
        local_178[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_178);
      }
      if (pFVar10 == pFVar1) break;
      if (((int)uVar11 < 0) || ((param_1->AvailableTime).ArrayNum <= (int)uVar11)) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_MountStepInfo::InitMountStepInfo",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_158.Ptr,0x5e,
                     L"InSwimBaseTableRow->AvailableTime.IsValidIndex(index) == false. index : %d");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        break;
      }
      uVar8 = 0;
      if ((int)uVar11 < (param_1->AvailableTime).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      local_168 = (param_1->AvailableTime).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
      local_170 = pFVar10;
      TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,float_const_&>_>
                ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                  *)&this->NextStepAvailableTimeMap,
                 (TPairInitializer<int_const_&,float_const_&> *)local_174,(bool *)(local_174 + 4));
      uVar11 = uVar11 + 1;
      pFVar10 = pFVar10 + 4;
    }
    bVar6 = true;
  }
  return bVar6;
}

// IsLockCheck @ 14b9f9380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_MountStepInfo::IsLockCheck(FDS_MountStepInfo *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  FDS_MountBaseTableRow *this_00;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  bool local_148 [4];
  EDS_SpecialBuffType local_144;
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->MountAbilityTagType == None) {
    return true;
  }
  iVar3 = UDS_MountManager::GetMountIdByMainPlayer();
  this_00 = FDS_MountBaseTableRow::GetRef((longlong)iVar3,true);
  bVar2 = FDS_MountBaseTableRow::IsValid(this_00);
  if (!bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_MountStepInfo::IsLockCheck",0x1e,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x73,L"mountBaseTableRow is invalid.");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return true;
    }
    FMemory::Free((void *)local_138._padding_);
    return true;
  }
  if ((this->MountAbilityTagType == AirWalk_Process) && (this_00->IsJump == false)) {
    return true;
  }
  if (this->MountStep == MountAirSprint) {
    cVar1 = this_00->IsAirSprint;
  }
  else {
    if (this->MountStep != MountSprint) goto LAB_14b9f9494;
    cVar1 = this_00->IsGroundSprint;
  }
  if (cVar1 == '\0') {
    return true;
  }
LAB_14b9f9494:
  if (this->MountAbilityTagType == Mount_Sprint) {
    local_148[0] = false;
    local_144 = ForbidMountSprint;
    local_140 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    bVar2 = UDS_CharBuffData::CheckForbidSpecialBuff(&local_140,&local_144,local_148);
    if (!bVar2) {
      return true;
    }
  }
  if (this->MountAbilityTagType != AirWalk_Process) {
    return false;
  }
  local_148[0] = false;
  local_144 = ForbidMountJump;
  local_140 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  bVar2 = UDS_CharBuffData::CheckForbidSpecialBuff(&local_140,&local_144,local_148);
  return !bVar2;
}

// IsNextStepPossible @ 14b9f9740

bool __thiscall FDS_MountStepInfo::IsNextStepPossible(FDS_MountStepInfo *this,int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FDS_ActionMountTableRow *pFVar3;
  float *pfVar4;
  undefined1 *puVar5;
  double dVar6;
  float fVar7;
  
  if (param_1 == 0) {
    return false;
  }
  if (this->MountStep == Ready) {
    return true;
  }
  pFVar3 = FDS_ActionMountTableRow::GetRef((longlong)param_1,true);
  if (pFVar3->MountStep == Ready) {
    return true;
  }
  if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 ==
      *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
    return false;
  }
  puVar1 = &(this->NextStepAvailableTimeMap).field_0x38;
  puVar5 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + (ulonglong)
                            (*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1U & param_1) *
                            4);
  if (iVar2 == -1) {
    return false;
  }
  while (*(int *)(*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar2 * 0x10) != param_1)
  {
    iVar2 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 + (longlong)iVar2 * 0x10);
    if (iVar2 == -1) {
      return false;
    }
  }
  dVar6 = UDS_TimeUtilManager::GetCurrentServerTime();
  if ((float)(dVar6 - this->ActivationStartTime) < this->UnableTime) {
    return false;
  }
  if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 !=
      *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = puVar1;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar2 * 0x10) ==
            param_1) {
          pfVar4 = TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                   ::FindChecked((TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
                                  *)&this->NextStepAvailableTimeMap,param_1);
          fVar7 = *pfVar4;
          goto LAB_14b9f9846;
        }
        iVar2 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  fVar7 = 0.0;
LAB_14b9f9846:
  if ((this->IsActive == false) &&
     (dVar6 = UDS_TimeUtilManager::GetCurrentServerTime(),
     (double)fVar7 < dVar6 - this->DeActivateTime)) {
    return false;
  }
  return true;
}

// IsStepPossible @ 14b9fa2a0

bool __thiscall FDS_MountStepInfo::IsStepPossible(FDS_MountStepInfo *this)

{
  bool bVar1;
  double dVar2;
  bool local_res8 [8];
  EDS_SpecialBuffType local_res10 [2];
  ulong64 local_res18 [2];
  
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  if ((this->CoolTimeEndTime <= dVar2) &&
     ((this->IsToggleSkill != false || (this->IsActive != true)))) {
    if (this->MountAbilityTagType == AirWalk_Jump) {
      local_res10[0] = ForbidMountJump;
    }
    else {
      if (this->MountAbilityTagType != Mount_Sprint) {
        return true;
      }
      local_res10[0] = ForbidMountSprint;
    }
    local_res8[0] = true;
    local_res18[0] = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff(local_res18,local_res10,local_res8);
    return bVar1;
  }
  return false;
}

// SetEnable @ 14ba1c0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_MountStepInfo::SetEnable(FDS_MountStepInfo *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  FDS_MountBaseTableRow *this_00;
  UDS_LogManager *pUVar3;
  UDS_MountEvent *pUVar4;
  bool bVar5;
  undefined1 auStackY_178 [32];
  bool local_148 [4];
  EDS_SpecialBuffType local_144;
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->MountAbilityTagType == None) {
    bVar1 = true;
  }
  else {
    iVar2 = UDS_MountManager::GetMountIdByMainPlayer();
    this_00 = FDS_MountBaseTableRow::GetRef((longlong)iVar2,true);
    bVar1 = FDS_MountBaseTableRow::IsValid(this_00);
    if (bVar1) {
      if ((this->MountAbilityTagType == AirWalk_Process) && (this_00->IsJump == false)) {
        bVar1 = true;
      }
      else {
        if (this->MountStep == MountAirSprint) {
          if (this_00->IsAirSprint == false) {
            bVar1 = true;
            goto LAB_14ba1c236;
          }
        }
        else if ((this->MountStep == MountSprint) && (this_00->IsGroundSprint == false)) {
          bVar1 = true;
          goto LAB_14ba1c236;
        }
        if (this->MountAbilityTagType == Mount_Sprint) {
          local_148[0] = false;
          local_144 = ForbidMountSprint;
          local_140 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
          bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff(&local_140,&local_144,local_148);
          if (!bVar1) {
            bVar1 = true;
            goto LAB_14ba1c236;
          }
        }
        if (this->MountAbilityTagType == AirWalk_Process) {
          local_148[0] = false;
          local_144 = ForbidMountJump;
          local_140 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
          bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff(&local_140,&local_144,local_148);
          if (!bVar1) {
            bVar1 = true;
            goto LAB_14ba1c236;
          }
        }
        bVar1 = false;
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_MountStepInfo::IsLockCheck",0x1e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x73,L"mountBaseTableRow is invalid.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar1 = true;
    }
  }
LAB_14ba1c236:
  bVar5 = false;
  if (!bVar1) {
    bVar5 = param_1;
  }
  this->IsEnable = bVar5;
  pUVar4 = UDS_MountEvent::GetEvent();
  if (pUVar4 != (UDS_MountEvent *)0x0) {
    FDS_EventDelegate<FDS_MountStepInfo_const_&>::Broadcast(&pUVar4->OnChangedMountStep,this);
    FDS_FilteredEventDelegate<enum_EDS_MountStep_const_,FDS_MountStepInfo_const_&>::Broadcast
              (&pUVar4->OnChangedMountStep_Filtered,&this->MountStep,this);
  }
  return;
}

