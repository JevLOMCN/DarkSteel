// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// Activate @ 14ba346d0

void __thiscall FDS_SwimStepInfo::Activate(FDS_SwimStepInfo *this,double param_1)

{
  UDS_SwimEvent *pUVar1;
  
  this->IsActive = true;
  this->ActivationStartTime = param_1;
  this->ActivationEndTime = (double)this->Duration + param_1;
  pUVar1 = UDS_SwimEvent::GetEvent();
  if (pUVar1 != (UDS_SwimEvent *)0x0) {
    FDS_EventDelegate<FDS_SwimStepInfo_const_&>::Broadcast(&pUVar1->OnChangedSwimStep,this);
    FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::Broadcast
              (&pUVar1->OnChangedSwimStep_Filtered,&this->SwimStep,this);
  }
  return;
}

// CheckCoolTime @ 14ba38440

bool __thiscall FDS_SwimStepInfo::CheckCoolTime(FDS_SwimStepInfo *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return dVar1 < this->CoolTimeEndTime;
}

// CheckNextStepAvailable @ 14ba38bc0

bool __thiscall
FDS_SwimStepInfo::CheckNextStepAvailable(FDS_SwimStepInfo *this,EDS_SwimStep param_1)

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
        if (*(EDS_SwimStep *)(*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar1 * 0x10)
            == param_1) {
          return true;
        }
        iVar1 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  return false;
}

// CheckSwimTime @ 14ba394f0

bool __thiscall FDS_SwimStepInfo::CheckSwimTime(FDS_SwimStepInfo *this)

{
  double dVar1;
  
  if (0.0 < this->Duration) {
    dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
    return dVar1 < this->ActivationEndTime || dVar1 == this->ActivationEndTime;
  }
  return true;
}

// CheckUnableTime @ 14ba39560

bool __thiscall FDS_SwimStepInfo::CheckUnableTime(FDS_SwimStepInfo *this,float param_1)

{
  if (0.0 < this->ActivationStartTime) {
    return param_1 < this->UnableTime;
  }
  return false;
}

// Deactivate @ 14ba3c620

void __thiscall FDS_SwimStepInfo::Deactivate(FDS_SwimStepInfo *this,double param_1)

{
  UDS_SwimEvent *pUVar1;
  
  this->IsActive = false;
  this->ActivationEndTime = 0.0;
  this->DeActivateTime = param_1;
  this->CoolTimeEndTime = (double)this->CoolTime + param_1;
  pUVar1 = UDS_SwimEvent::GetEvent();
  if (pUVar1 != (UDS_SwimEvent *)0x0) {
    FDS_EventDelegate<FDS_SwimStepInfo_const_&>::Broadcast(&pUVar1->OnChangedSwimStep,this);
    FDS_FilteredEventDelegate<enum_EDS_SwimStep_const_,FDS_SwimStepInfo_const_&>::Broadcast
              (&pUVar1->OnChangedSwimStep_Filtered,&this->SwimStep,this);
  }
  return;
}

// GetAdditionalAvailableTime @ 14ba43c50

float __thiscall
FDS_SwimStepInfo::GetAdditionalAvailableTime(FDS_SwimStepInfo *this,EDS_SwimStep param_1)

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
        if (*(EDS_SwimStep *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pfVar3 = TMapBase<enum_EDS_SwimStep,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,float,0>_>
                   ::FindChecked(&this->NextStepAvailableTimeMap,param_1);
          return *pfVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetCurTime @ 14ba466a0

double __thiscall FDS_SwimStepInfo::GetCurTime(FDS_SwimStepInfo *this)

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

// GetElapsedTimeSinceStepStart @ 14ba4a610

float __thiscall FDS_SwimStepInfo::GetElapsedTimeSinceStepStart(FDS_SwimStepInfo *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return (float)(dVar1 - this->ActivationStartTime);
}

// GetRemainCoolTime @ 14ba4e9f0

float __thiscall FDS_SwimStepInfo::GetRemainCoolTime(FDS_SwimStepInfo *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  dVar1 = this->CoolTimeEndTime - dVar1;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return (float)dVar1;
}

// InitSwimStepInfo @ 14ba594d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_SwimStepInfo::InitSwimStepInfo(FDS_SwimStepInfo *this,FDS_ActionSwimTableRow *param_1)

{
  FScriptContainerElement *pFVar1;
  EDS_SwimStep EVar2;
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
  undefined1 local_178;
  FScriptContainerElement local_177 [3];
  undefined1 local_174 [4];
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (param_1 == (FDS_ActionSwimTableRow *)0x0) {
    bVar6 = false;
  }
  else {
    EVar2 = param_1->SwimStep;
    this->SwimStep = EVar2;
    if (EVar2 == Swim) {
      EVar5 = Swim;
    }
    else if (EVar2 == SwimSurfaceSprint) {
      EVar5 = SwimSurfaceSprint;
    }
    else if (EVar2 == SwimDown) {
      EVar5 = SwimDown;
    }
    else if (EVar2 == SwimSubmergeSprint) {
      EVar5 = SwimSubmergeSprint;
    }
    else if (EVar2 == SwimUp) {
      EVar5 = SwimUp;
    }
    else {
      EVar5 = None;
    }
    this->SwimAbilityTagType = EVar5;
    uVar11 = 0;
    this->KeyActionType = param_1->KeyActionType;
    this->UnableTime = (float)param_1->UnableTime;
    this->CoolTime = param_1->CoolTime;
    this->Duration = param_1->Duration;
    this->SwimSpeed = param_1->StandardSpeed;
    this->UseCostStamina = param_1->UseCostStamina;
    this->CostStaminaPerSecond = param_1->CostStaminaPerSec;
    this->IconID = param_1->ID_SwimStepIcon;
    this->IsToggleSkill = param_1->IsToggle;
    this->UseMotionBlur = param_1->SwimMotionBlur;
    pFVar10 = (param_1->NextUseStep).AllocatorInstance.Data;
    iVar3 = (param_1->NextUseStep).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar3 * 4;
    while( true ) {
      if ((param_1->NextUseStep).ArrayNum != iVar3) {
        local_178 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_178);
      }
      if (pFVar10 == pFVar1) break;
      if (((int)uVar11 < 0) || ((param_1->AvailableTime).ArrayNum <= (int)uVar11)) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_SwimStepInfo::InitSwimStepInfo",0x22,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_158.Ptr,0x11d,
                     L"InActionSwimTableRow->AvailableTime.IsValidIndex(index) == false. index : %d"
                    );
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
      local_177[0] = *pFVar10;
      local_170 = local_177;
      local_168 = (param_1->AvailableTime).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
      TSet<TTuple<enum_EDS_SwimStep,float>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,float,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_SwimStep_&&,float_const_&>_>
                (&this->NextStepAvailableTimeMap,
                 (TPairInitializer<EDS_SwimStep_&&,float_const_&> *)local_174,
                 (bool *)(local_174 + 4));
      uVar11 = uVar11 + 1;
      pFVar10 = pFVar10 + 4;
    }
    bVar6 = true;
  }
  return bVar6;
}

// IsNextStepPossible @ 14ba5bb40

bool __thiscall FDS_SwimStepInfo::IsNextStepPossible(FDS_SwimStepInfo *this,EDS_SwimStep param_1)

{
  undefined1 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined1 *puVar4;
  double dVar5;
  float fVar6;
  
  if ((this->SwimStep == Ready) || (param_1 == Ready)) {
    return true;
  }
  if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 !=
      *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
    puVar1 = &(this->NextStepAvailableTimeMap).field_0x38;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = puVar1;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1)
                              & (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      while (*(EDS_SwimStep *)
              (*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar2 * 0x10) != param_1) {
        iVar2 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 + (longlong)iVar2 * 0x10);
        if (iVar2 == -1) {
          return false;
        }
      }
      dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
      if (this->UnableTime <= (float)(dVar5 - this->ActivationStartTime)) {
        if (*(int *)&(this->NextStepAvailableTimeMap).field_0x8 !=
            *(int *)&(this->NextStepAvailableTimeMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->NextStepAvailableTimeMap).field_0x40;
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = puVar1;
          }
          iVar2 = *(int *)(puVar4 + ((ulonglong)
                                     (*(int *)&(this->NextStepAvailableTimeMap).field_0x48 - 1) &
                                    (ulonglong)param_1) * 4);
          if (iVar2 != -1) {
            do {
              if (*(EDS_SwimStep *)
                   (*(longlong *)&this->NextStepAvailableTimeMap + (longlong)iVar2 * 0x10) ==
                  param_1) {
                pfVar3 = TMapBase<enum_EDS_SwimStep,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,float,0>_>
                         ::FindChecked(&this->NextStepAvailableTimeMap,param_1);
                fVar6 = *pfVar3;
                goto LAB_14ba5bc26;
              }
              iVar2 = *(int *)(*(longlong *)&this->NextStepAvailableTimeMap + 8 +
                              (longlong)iVar2 * 0x10);
            } while (iVar2 != -1);
          }
        }
        fVar6 = 0.0;
LAB_14ba5bc26:
        if (this->IsActive != false) {
          return true;
        }
        dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
        if (dVar5 - this->DeActivateTime <= (double)fVar6) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsStepPossible @ 14ba5d2a0

bool __thiscall FDS_SwimStepInfo::IsStepPossible(FDS_SwimStepInfo *this)

{
  double dVar1;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  return this->CoolTimeEndTime <= dVar1;
}

