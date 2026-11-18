// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// Activate @ 14b9de5f0

void __thiscall FDS_AirWalkStepInfo::Activate(FDS_AirWalkStepInfo *this,double param_1)

{
  this->IsActive = true;
  this->ActivationStartTime = param_1;
  this->ActivationEndTime = (double)this->AirWalkTime + param_1;
  return;
}

// CheckAirWalkTime @ 14b9e2630

bool __thiscall FDS_AirWalkStepInfo::CheckAirWalkTime(FDS_AirWalkStepInfo *this,double param_1)

{
  return param_1 < this->ActivationEndTime || param_1 == this->ActivationEndTime;
}

// CheckNextStepAvailable @ 14b9e2b50

bool __thiscall
FDS_AirWalkStepInfo::CheckNextStepAvailable(FDS_AirWalkStepInfo *this,EDS_AirWalkStep param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 !=
      *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->NextStepAvailableTimeMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + ((ulonglong)(*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1)
                              & (ulonglong)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(EDS_AirWalkStep *)
             (*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar1 * 0x10) == param_1) {
          return true;
        }
        iVar1 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  return false;
}

// CheckUnableTime @ 14b9e2c10

bool __thiscall FDS_AirWalkStepInfo::CheckUnableTime(FDS_AirWalkStepInfo *this,float param_1)

{
  if (0.0 < this->ActivationStartTime) {
    return param_1 < this->UnableTime;
  }
  return false;
}

// Deactivate @ 14b9e6c50

void __thiscall FDS_AirWalkStepInfo::Deactivate(FDS_AirWalkStepInfo *this,double param_1)

{
  this->DeActivateTime = param_1;
  this->IsActive = false;
  return;
}

// GetAdditionalAvailableTime @ 14b9ec780

float __thiscall
FDS_AirWalkStepInfo::GetAdditionalAvailableTime(FDS_AirWalkStepInfo *this,EDS_AirWalkStep param_1)

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
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1)
                              & (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NextStepAvailableTimeMap;
      do {
        if (*(EDS_AirWalkStep *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pfVar3 = TMapBase<enum_EDS_AirWalkStep,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,float,0>_>
                   ::FindChecked(&this->NextStepAvailableTimeMap,param_1);
          return *pfVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetCurTime @ 14b9ee9e0

double __thiscall FDS_AirWalkStepInfo::GetCurTime(FDS_AirWalkStepInfo *this)

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

// GetElapsedTimeSinceStepStart @ 14b9efc00

float __thiscall FDS_AirWalkStepInfo::GetElapsedTimeSinceStepStart(FDS_AirWalkStepInfo *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return (float)(dVar1 - this->ActivationStartTime);
}

// InitAirWalkInfo @ 14b9f67c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_AirWalkStepInfo::InitAirWalkInfo(FDS_AirWalkStepInfo *this,FDS_ActionAirWalkTableRow *param_1)

{
  FScriptContainerElement *pFVar1;
  EDS_AirWalkStep EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FName *pFVar8;
  FName FVar9;
  UDS_LogManager *pUVar10;
  EDS_AbilityTagType *pEVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined1 auStackY_1b8 [32];
  EDS_AbilityTagType local_178 [5];
  FScriptContainerElement local_173 [3];
  undefined1 local_170 [8];
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_1 == (FDS_ActionAirWalkTableRow *)0x0) {
    return false;
  }
  EVar2 = param_1->AirStep;
  this->AirWalkStep = EVar2;
  if ((EVar2 == Jump1) || (EVar2 == Jump2)) {
    local_178[3] = 0x2a;
    pEVar11 = local_178 + 3;
  }
  else if (EVar2 == Hovering) {
    local_178[2] = 0x2b;
    pEVar11 = local_178 + 2;
  }
  else if (EVar2 == AirDash) {
    local_178[1] = 0x2c;
    pEVar11 = local_178 + 1;
  }
  else {
    FVar9 = FGameplayTag::EmptyTag.TagName;
    if (EVar2 != PowerJumpCharging) goto LAB_14b9f686f;
    local_178[0] = AirWalk_PowerJump;
    pEVar11 = local_178;
  }
  pFVar8 = &FDS_GameplayTags::GetAbilityTag(pEVar11)->TagName;
  FVar9 = *pFVar8;
LAB_14b9f686f:
  (this->AirWalkTag).TagName = FVar9;
  uVar13 = 0;
  this->UnableTime = param_1->UnableTime;
  this->AirCoolTime = param_1->AirCoolTime;
  this->AirWalkTime = param_1->AirWalkTime;
  this->AirWalkSpeed = (float)param_1->StandardSpeed;
  this->AirMoveHeight = (float)param_1->AirMoveHeight;
  this->StopSpeedDown = (float)param_1->HovStopSpeedDown;
  this->ChargingTimeMin = param_1->ChargingTimeMin;
  this->ChargingTimeMax = param_1->ChargingTimeMax;
  this->PowerJumpDefaultSpeed = (float)param_1->PowerJumpDefaultSpeed;
  this->UseCostStamina = param_1->UseCostStamina;
  this->CostStaminaPerSecond = param_1->CostStaminaPerSecond;
  this->bToggleStep = param_1->IsAirKeyType;
  this->IconID = param_1->ID_AirStepIcon;
  this->StopIconID = param_1->ID_AirStopIcon;
  pFVar12 = (param_1->NextUseAirStep).AllocatorInstance.Data;
  iVar3 = (param_1->NextUseAirStep).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar3 * 4;
  while( true ) {
    if ((param_1->NextUseAirStep).ArrayNum != iVar3) {
      local_178[4] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_178 + 4);
    }
    if (pFVar12 == pFVar1) {
      return true;
    }
    if (((int)uVar13 < 0) || ((param_1->AvailableTime).ArrayNum <= (int)uVar13)) break;
    uVar7 = 0;
    if ((int)uVar13 < (param_1->AvailableTime).ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_173[0] = *pFVar12;
    local_168 = local_173;
    local_160 = (param_1->AvailableTime).AllocatorInstance.Data + (longlong)(int)uVar13 * 4;
    TSet<TTuple<enum_EDS_AirWalkStep,float>,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_AirWalkStep_&&,float_const_&>_>
              (&this->NextStepAvailableTimeMap,
               (TPairInitializer<EDS_AirWalkStep_&&,float_const_&> *)local_170,
               (bool *)(local_170 + 8));
    uVar13 = uVar13 + 1;
    pFVar12 = pFVar12 + 4;
  }
  pUVar10 = UDS_LogManager::GetInst();
  if (pUVar10 == (UDS_LogManager *)0x0) {
    return true;
  }
  pUVar10 = UDS_LogManager::GetInst();
  local_158._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_158,"FDS_AirWalkStepInfo::InitAirWalkInfo",0x24,Yes);
  UDS_LogManager::PrintLog
            (pUVar10,1,Warning,local_158.Ptr,0x2c7,
             L"InAirWalkBaseRow->AvailableTime.IsValidIndex(index) == false. index : %d");
  if ((void *)local_158._padding_ == (void *)0x0) {
    return true;
  }
  FMemory::Free((void *)local_158._padding_);
  return true;
}

// IsNextSkillPossible @ 14b9f9560

bool __thiscall FDS_AirWalkStepInfo::IsNextSkillPossible(FDS_AirWalkStepInfo *this,float param_1)

{
  if (this->UnableTime <= param_1) {
    return param_1 < this->AirWalkTime || param_1 == this->AirWalkTime;
  }
  return false;
}

// IsNextStepPossible @ 14b9f9600

bool __thiscall
FDS_AirWalkStepInfo::IsNextStepPossible
          (FDS_AirWalkStepInfo *this,EDS_AirWalkStep param_1,float param_2,bool param_3)

{
  float *pfVar1;
  undefined1 *puVar2;
  int iVar3;
  double dVar4;
  float fVar5;
  
  if (this->AirWalkStep == Ready) {
LAB_14b9f968f:
    if (this->UnableTime <= param_2) {
      if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 !=
          *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
        puVar2 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &(this->NextStepAvailableTimeMap).field_0x38;
        }
        iVar3 = *(int *)(puVar2 + ((ulonglong)
                                   (*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1) &
                                  (ulonglong)param_1) * 4);
        if (iVar3 != -1) {
          do {
            if (*(EDS_AirWalkStep *)
                 (*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar3 * 0x10) == param_1)
            {
              pfVar1 = TMapBase<enum_EDS_AirWalkStep,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,float,0>_>
                       ::FindChecked(&this->NextStepAvailableTimeMap,param_1);
              fVar5 = *pfVar1;
              goto LAB_14b9f96e7;
            }
            iVar3 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 +
                            (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
        }
      }
      fVar5 = 0.0;
LAB_14b9f96e7:
      if (((this->AirWalkStep != Ready) && (this->IsActive == false)) &&
         (dVar4 = UDS_TimeUtilManager::GetCurrentServerTime(),
         (double)fVar5 < dVar4 - this->DeActivateTime)) {
        return false;
      }
      return param_2 <= fVar5 + this->AirWalkTime;
    }
  }
  else if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 !=
           *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->NextStepAvailableTimeMap).field_0x38;
    }
    iVar3 = *(int *)(puVar2 + ((ulonglong)(*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1)
                              & (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(EDS_AirWalkStep *)
             (*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar3 * 0x10) == param_1) {
          if (iVar3 == -1) {
            return false;
          }
          goto LAB_14b9f968f;
        }
        iVar3 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsStepPossible @ 14b9fa1f0

bool __thiscall
FDS_AirWalkStepInfo::IsStepPossible
          (FDS_AirWalkStepInfo *this,EDS_AirWalkStep param_1,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_2)

{
  EDS_AirWalkStep EVar1;
  bool bVar2;
  UDS_CharStateData *pUVar3;
  EDS_CharState local_res8 [2];
  FWeakObjectPtr local_res18;
  EDS_CharState local_res20;
  
  EVar1 = this->AirWalkStep;
  local_res20 = Warp|Battle|Skill|Avoid;
  if (((EVar1 == PowerJumpCharging) || (EVar1 == PowerJump)) || (EVar1 == Jump1)) {
    local_res20 = Warp|Skill|Avoid;
  }
  local_res18 = param_2.WeakPtr;
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
  bVar2 = UDS_CharStateData::HasCharState(pUVar3,&local_res20);
  if (!bVar2) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
    local_res8[0] = Swim;
    bVar2 = UDS_CharStateData::HasCharState(pUVar3,local_res8);
    if (bVar2) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
      local_res8[0] = CONCAT44(local_res8[0]._4_4_,6);
      bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)local_res8);
      return !bVar2;
    }
    return true;
  }
  return false;
}

