// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// FDS_RotateStepInfo @ 14ba31810

FDS_RotateStepInfo * __thiscall
FDS_RotateStepInfo::FDS_RotateStepInfo(FDS_RotateStepInfo *this,FDS_RotateStepInfo *param_1)

{
  double dVar1;
  
  this->SkillID = param_1->SkillID;
  this->AttackLinkID = param_1->AttackLinkID;
  this->ViewTarget = param_1->ViewTarget;
  this->StepIndex = param_1->StepIndex;
  this->bIsActivated = param_1->bIsActivated;
  this->LinkStartTime = param_1->LinkStartTime;
  dVar1 = (param_1->SourceRotatorOnStartStep).Yaw;
  (this->SourceRotatorOnStartStep).Pitch = (param_1->SourceRotatorOnStartStep).Pitch;
  (this->SourceRotatorOnStartStep).Yaw = dVar1;
  (this->SourceRotatorOnStartStep).Roll = (param_1->SourceRotatorOnStartStep).Roll;
  this->HasTargetOnStartStep = param_1->HasTargetOnStartStep;
  dVar1 = (param_1->SourceToTargetRotatorOnStartStep).Yaw;
  (this->SourceToTargetRotatorOnStartStep).Pitch = (param_1->SourceToTargetRotatorOnStartStep).Pitch
  ;
  (this->SourceToTargetRotatorOnStartStep).Yaw = dVar1;
  (this->SourceToTargetRotatorOnStartStep).Roll = (param_1->SourceToTargetRotatorOnStartStep).Roll;
  dVar1 = (param_1->DestToTargetRotatorOnStartStep).Yaw;
  (this->DestToTargetRotatorOnStartStep).Pitch = (param_1->DestToTargetRotatorOnStartStep).Pitch;
  (this->DestToTargetRotatorOnStartStep).Yaw = dVar1;
  (this->DestToTargetRotatorOnStartStep).Roll = (param_1->DestToTargetRotatorOnStartStep).Roll;
  this->DelayViewRotation = param_1->DelayViewRotation;
  this->ViewRotationTime = param_1->ViewRotationTime;
  dVar1 = (param_1->ViewRotation).Yaw;
  (this->ViewRotation).Pitch = (param_1->ViewRotation).Pitch;
  (this->ViewRotation).Yaw = dVar1;
  (this->ViewRotation).Roll = (param_1->ViewRotation).Roll;
  this->FirstImpactTime = param_1->FirstImpactTime;
  ::FString::FString(&this->AtkAttachSocket,&param_1->AtkAttachSocket);
  ::FString::FString(&this->DefAttachSocket,&param_1->DefAttachSocket);
  return this;
}

// FDS_RotateStepInfo @ 14ba318f0

FDS_RotateStepInfo * __thiscall
FDS_RotateStepInfo::FDS_RotateStepInfo(FDS_RotateStepInfo *this,int param_1)

{
  double dVar1;
  
  this->StepIndex = -1;
  this->SkillID = 0;
  this->AttackLinkID = 0;
  this->ViewTarget = TargetView;
  this->bIsActivated = false;
  this->LinkStartTime = 0.0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SourceRotatorOnStartStep).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SourceRotatorOnStartStep).Yaw = dVar1;
  (this->SourceRotatorOnStartStep).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->HasTargetOnStartStep = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SourceToTargetRotatorOnStartStep).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SourceToTargetRotatorOnStartStep).Yaw = dVar1;
  (this->SourceToTargetRotatorOnStartStep).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DestToTargetRotatorOnStartStep).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DestToTargetRotatorOnStartStep).Yaw = dVar1;
  (this->DestToTargetRotatorOnStartStep).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->DelayViewRotation = 0.0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->ViewRotationTime = 0.0;
  (this->ViewRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ViewRotation).Yaw = dVar1;
  (this->ViewRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->FirstImpactTime = 0.0;
  ::FString::FString(&this->AtkAttachSocket,"");
  ::FString::FString(&this->DefAttachSocket,"");
  this->StepIndex = param_1;
  return this;
}

// IsInterpolationStep @ 14ba5b7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_RotateStepInfo::IsInterpolationStep(FDS_RotateStepInfo *this)

{
  EDS_ViewTarget EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  EVar1 = this->ViewTarget;
  if ((EVar1 == TargetView) || (EVar1 == RotationView)) {
    if ((float)((uint)this->DelayViewRotation & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) {
      return __real_322bcc77 <
             (float)((uint)this->ViewRotationTime & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    return true;
  }
  if (((EVar1 != Stand) && (EVar1 != AttackStand)) && (EVar1 != AttachTargetView)) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_RotateStepInfo::IsInterpolationStep",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x52,
                 L"Need to define behavior according to ViewTarget.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7260423428253941843>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_RotateToTargetAbilityData.cpp"
                       ,0x53,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// IsRotateOnlyOnce @ 14ba5c7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ba5c891) */
/* WARNING: Removing unreachable block (ram,0x00014ba5c89a) */
/* WARNING: Removing unreachable block (ram,0x00014ba5c8a3) */
/* WARNING: Removing unreachable block (ram,0x00014ba5c8ac) */
/* WARNING: Removing unreachable block (ram,0x00014ba5c8b6) */
/* WARNING: Removing unreachable block (ram,0x00014ba5c926) */
/* WARNING: Removing unreachable block (ram,0x00014ba5c92b) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_RotateStepInfo::IsRotateOnlyOnce(FDS_RotateStepInfo *this)

{
  EDS_ViewTarget EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_288 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_288;
  EVar1 = this->ViewTarget;
  if ((EVar1 == TargetView) || (EVar1 == RotationView)) {
    if ((__real_322bcc77 <
         (float)((uint)this->DelayViewRotation & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_322bcc77 <
        (float)((uint)this->ViewRotationTime & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      return false;
    }
  }
  else if (EVar1 != Stand) {
    if (EVar1 == AttackStand) {
      return false;
    }
    if (EVar1 == AttachTargetView) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_258[0]._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (local_258,"FDS_RotateStepInfo::IsRotateOnlyOnce",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_258[0].Ptr,0x75,
                 L"Need to define behavior according to ViewTarget.");
      if ((void *)local_258[0]._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258[0]._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7260423428253941878>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Ability\\DS_RotateToTargetAbilityData.cpp"
                       ,0x76,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return true;
}

// IsValidData @ 14ba5daa0

bool __thiscall FDS_RotateStepInfo::IsValidData(FDS_RotateStepInfo *this)

{
  return this->StepIndex != -1;
}

// ResetData @ 14ba68180

void __thiscall FDS_RotateStepInfo::ResetData(FDS_RotateStepInfo *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  FString local_28;
  FString local_18;
  
  this->SkillID = 0;
  this->AttackLinkID = 0;
  this->ViewTarget = TargetView;
  this->bIsActivated = false;
  this->LinkStartTime = 0.0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SourceRotatorOnStartStep).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SourceRotatorOnStartStep).Yaw = dVar3;
  (this->SourceRotatorOnStartStep).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->HasTargetOnStartStep = false;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->SourceToTargetRotatorOnStartStep).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->SourceToTargetRotatorOnStartStep).Yaw = dVar3;
  (this->SourceToTargetRotatorOnStartStep).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DestToTargetRotatorOnStartStep).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DestToTargetRotatorOnStartStep).Yaw = dVar3;
  (this->DestToTargetRotatorOnStartStep).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->DelayViewRotation = 0.0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->ViewRotationTime = 0.0;
  (this->ViewRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ViewRotation).Yaw = dVar3;
  (this->ViewRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->FirstImpactTime = 0.0;
  ::FString::FString(&local_28,"");
  pFVar1 = &this->AtkAttachSocket;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->AtkAttachSocket).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->AtkAttachSocket).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  pFVar1 = &this->DefAttachSocket;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->DefAttachSocket).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->DefAttachSocket).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

