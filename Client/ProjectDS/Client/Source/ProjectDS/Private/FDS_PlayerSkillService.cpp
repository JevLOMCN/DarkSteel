// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// ProcessError @ 14bc02600

bool __cdecl FDS_PlayerSkillService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ProcessError_CampInstallCancelResponse @ 14bc02910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
FDS_PlayerSkillService::ProcessError_CampInstallCancelResponse
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  int iVar1;
  CampInstallCancelResponseDefaultTypeInternal *pCVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  ulong64 uVar5;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&param_2[1].field_0xc == 0x50dd) {
    pCVar2 = *(CampInstallCancelResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pCVar2 = &server_msg::_CampInstallCancelResponse_default_instance_;
  }
  iVar1 = (pCVar2->_instance)._impl_.error_code_;
  local_140 = (pCVar2->_instance)._impl_.install_entity_id_;
  pFVar3 = FDS_EntityBase::GetEntityBase(&local_140);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::ProcessError_CampInstallCancelResponse",0x3e,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x170,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148[0] = Success;
    UDS_PlayerSkillAbility_InstallCampCasting::Deactivate(&local_140,local_148);
    if (iVar1 != 0x2f45) {
      uVar5 = FDS_EntityBase::GetMainPlayerEntityID(true);
      return local_140 != uVar5;
    }
  }
  return true;
}

// ProcessError_CampInstallCastingResponse @ 14bc02a50

bool __cdecl
FDS_PlayerSkillService::ProcessError_CampInstallCastingResponse
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  CampInstallCastingResponseDefaultTypeInternal *pCVar3;
  
  if (*(int *)&param_2[1].field_0xc == 0x50dc) {
    pCVar3 = *(CampInstallCastingResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pCVar3 = &server_msg::_CampInstallCastingResponse_default_instance_;
  }
  uVar1 = (pCVar3->_instance)._impl_.installing_entity_id_;
  uVar2 = FDS_EntityBase::GetMainPlayerEntityID(true);
  return uVar1 != uVar2;
}

// ProcessError_CampSeatSitDownResponse @ 14bc02a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
FDS_PlayerSkillService::ProcessError_CampSeatSitDownResponse
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  CampSeatSitDownResponseDefaultTypeInternal *pCVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  ulong64 uVar4;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&param_2[1].field_0xc == 0x50de) {
    pCVar1 = *(CampSeatSitDownResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pCVar1 = &server_msg::_CampSeatSitDownResponse_default_instance_;
  }
  local_140 = (pCVar1->_instance)._impl_.sitting_entity_id_;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_140);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::ProcessError_CampSeatSitDownResponse",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x1d1,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return true;
  }
  local_148[0] = Cancel;
  UDS_InteractionAbility_NPCCamp::Deactivate(&local_140,local_148);
  uVar4 = FDS_EntityBase::GetMainPlayerEntityID(true);
  return local_140 != uVar4;
}

// ProcessError_CampSeatStandUpResponse @ 14bc02be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
FDS_PlayerSkillService::ProcessError_CampSeatStandUpResponse
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  CampSeatStandUpResponseDefaultTypeInternal *pCVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  ulong64 uVar4;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&param_2[1].field_0xc == 0x50df) {
    pCVar1 = *(CampSeatStandUpResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pCVar1 = &server_msg::_CampSeatStandUpResponse_default_instance_;
  }
  local_140 = (pCVar1->_instance)._impl_.standing_entity_id_;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_140);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::ProcessError_CampSeatStandUpResponse",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x200,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return true;
  }
  local_148[0] = Cancel;
  UDS_InteractionAbility_NPCCamp::Deactivate(&local_140,local_148);
  uVar4 = FDS_EntityBase::GetMainPlayerEntityID(true);
  return local_140 != uVar4;
}

// ProcessError_FlyModeCancelResponse @ 14bc02d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_PlayerSkillService::ProcessError_FlyModeCancelResponse
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FlyModeCancelResponseDefaultTypeInternal *pFVar4;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)&param_2[1].field_0xc == 0x24e) {
    pFVar4 = *(FlyModeCancelResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pFVar4 = &server_msg::_FlyModeCancelResponse_default_instance_;
  }
  iVar1 = (pFVar4->_instance)._impl_.error_code_;
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_168);
  if (bVar2) {
    UDS_AirWalkAbility::Deactivate((pFVar4->_instance)._impl_.entity_id_);
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    ::FString::FString(&local_160,"EDS_ErrorCode");
    DS_Util::GetEnumToString(&local_150,&local_160,(longlong)iVar1);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PlayerSkillService::ProcessError_FlyModeCancelResponse",0x3a,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_138.Ptr,0x248,L"FlyModeCancelResponse Error: %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// ProcessError_PlayerSkillDetectResponse @ 14bc02ea0

bool __cdecl
FDS_PlayerSkillService::ProcessError_PlayerSkillDetectResponse
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  ADS_PlayerController *this;
  Message *local_res10;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  
  local_res10 = param_2;
  ADS_PlayerController::GetPlayerController();
  bVar1 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_res18,(void *)0x0
                    );
  if (!bVar1) {
    this = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
    ADS_PlayerController::PlayDetectionEffect(this);
  }
  local_res10 = (Message *)CONCAT71(local_res10._1_7_,2);
  local_res20 = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_PlayerSkillAbility_Detection::Deactivate
            (&local_res20,(EDS_AbilityDeactivateType *)&local_res10);
  return false;
}

// ProcessError_SubMergeCancelResponse @ 14bc030b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_PlayerSkillService::ProcessError_SubMergeCancelResponse
          (FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  longlong lVar4;
  UDS_LogManager *pUVar5;
  SubMergeCancelResponseDefaultTypeInternal *pSVar6;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_188;
  FName local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*(int *)&param_2[1].field_0xc == 0x50e0) {
    pSVar6 = *(SubMergeCancelResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pSVar6 = &server_msg::_SubMergeCancelResponse_default_instance_;
  }
  iVar1 = (pSVar6->_instance)._impl_.error_code_;
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_188);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_188);
    lVar4 = (**(code **)(*(longlong *)pUVar3 + 0x510))(pUVar3);
    if (((lVar4 != 0) || ((DAT_00000304 & 1) != 0)) &&
       (pUVar5 = UDS_LogManager::GetInst(), pUVar5 != (UDS_LogManager *)0x0)) {
      pUVar5 = UDS_LogManager::GetInst();
      ::FString::FString(&local_168,"EDS_ErrorCode");
      DS_Util::GetEnumToString(&local_158,&local_168,(longlong)iVar1);
      local_180 = *(FName *)(lVar4 + 0x18);
      ::FName::ToString(&local_180,&local_178);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_PlayerSkillService::ProcessError_SubMergeCancelResponse",0x3b,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x227,L"physicsVolume uid (%s) ErrorID: %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
  }
  UDS_SwimServerFailForceUpAbility::TryActivate((pSVar6->_instance)._impl_.entity_id_);
  return true;
}

// ReceiveCampInstallCancelResponse @ 14bc033e0

void __cdecl FDS_PlayerSkillService::ReceiveCampInstallCancelResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveCampInstallCastingResponse @ 14bc033f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_PlayerSkillService::ReceiveCampInstallCastingResponse(ServerMessages *param_1)

{
  FDS_EntityBase *pFVar1;
  UDS_LogManager *pUVar2;
  FWeakObjectPtr *this;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar3;
  Vector *pVVar4;
  CampInstallCastingResponseDefaultTypeInternal *pCVar5;
  undefined1 auStackY_1d8 [32];
  EDS_AbilityDeactivateType local_198 [4];
  int local_194;
  ulong64 local_190;
  TVector<double>_u_0 local_188;
  FString local_170;
  TVector<double> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x50dc) {
    pCVar5 = *(CampInstallCastingResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar5 = &server_msg::_CampInstallCastingResponse_default_instance_;
  }
  local_190 = *(ulong64 *)((longlong)pCVar5 + 0x20);
  pFVar1 = FDS_EntityBase::GetEntityBase(&local_190);
  if (pFVar1 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)pFVar1;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_PlayerSkillService::ReceiveCampInstallCastingResponse",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x131,L"sourceEntity is nullptr. (%llu)");
      if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (pFVar1->EntityType == MainCharacter) {
      local_198[0] = Success;
      UDS_PlayerSkillAbility_InstallCamp::Deactivate(&local_190,local_198);
    }
    local_194 = *(int *)&((Message *)((longlong)pCVar5 + 0x20))->field_0xc;
    local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pVVar4 = &_Vector_default_instance_._instance;
    if (*(Vector **)&((Message *)((longlong)pCVar5 + 0x10))->field_0x8 != (Vector *)0x0) {
      pVVar4 = *(Vector **)&((Message *)((longlong)pCVar5 + 0x10))->field_0x8;
    }
    DS_Util::SetFVector((TVector<double> *)&local_188._s_0,pVVar4);
    if ((local_194 == 0) ||
       (((local_188._s_0.X == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X &&
         (local_188._s_0.Y == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) &&
        (local_188._s_0.Z == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)))) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        ::FString::PrintfImpl(&local_170,L"X=%3.3f Y=%3.3f Z=%3.3f");
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_PlayerSkillService::ReceiveCampInstallCastingResponse",0x39,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_148.Ptr,0x144,
                   L"Packet is invalid. (ItemTID: %d, InstallLocation: %s)");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      local_194 = 0x10b530f1;
      this = (FWeakObjectPtr *)(**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,&local_170);
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(this);
      pTVar3 = UDS_MovementCore::GetActorFootLocation(this_00,&local_160);
      local_188._s_0.X = (pTVar3->field0_0x0)._s_0.X;
      local_188._s_0.Y = (pTVar3->field0_0x0)._s_0.Y;
      local_188._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
    }
    UDS_PlayerSkillAbility_InstallCampCasting::TryActivate
              (&local_190,&local_194,(TVector<double> *)&local_188._s_0);
  }
  return;
}

// ReceiveCampSeatSitDownResponse @ 14bc036e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_PlayerSkillService::ReceiveCampSeatSitDownResponse(ServerMessages *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *pFVar4;
  UDS_NPCCampData *pUVar5;
  UObject *pUVar6;
  CampSeatSitDownResponseDefaultTypeInternal *pCVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  FWeakObjectPtr local_180;
  ulong64 local_178;
  ulong64 local_170;
  FWeakObjectPtr local_168;
  FDS_CampSeatInfo local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x50de) {
    pCVar7 = *(CampSeatSitDownResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar7 = &server_msg::_CampSeatSitDownResponse_default_instance_;
  }
  local_178 = *(ulong64 *)&((Message *)((longlong)pCVar7 + 0x10))->field_0x8;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_178);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PlayerSkillService::ReceiveCampSeatSitDownResponse",0x36,Yes);
    pwVar9 = L"sourceEntity is nullptr. (%llu)";
    uVar8 = 0x191;
  }
  else {
    local_170 = *(ulong64 *)&((Message *)((longlong)pCVar7 + 0x20))->field_0x8;
    pFVar4 = FDS_EntityBase::GetEntityBase(&local_170);
    if (pFVar4 == (FDS_EntityBase *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::ReceiveCampSeatSitDownResponse",0x36,Yes);
      pwVar9 = L"targetEntity is nullptr. (%llu)";
      uVar8 = 0x199;
    }
    else {
      UDS_NPCCampData::GetData((ulong64)&local_168);
      bVar1 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_168,(void *)0x0);
      if (bVar1) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_PlayerSkillService::ReceiveCampSeatSitDownResponse",0x36,Yes);
        pwVar9 = L"npcCampData is nullptr. (%llu)";
        uVar8 = 0x1a1;
      }
      else {
        local_160.Index = 0;
        local_160.Position.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_160.Position.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_160.OccupantEntityID = 0;
        local_160.Position.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pUVar5 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_168);
        local_180.ObjectIndex = *(int *)((longlong)pCVar7 + 0x20);
        bVar1 = UDS_NPCCampData::GetCampSeatInfoByIndex(pUVar5,&local_180.ObjectIndex,&local_160);
        if (bVar1) {
          pUVar5 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_168);
          local_180.ObjectIndex = *(int *)((longlong)pCVar7 + 0x20);
          bVar1 = UDS_NPCCampData::SetOccupantEntityID(pUVar5,&local_180.ObjectIndex,&local_178);
          if (bVar1) {
            if (pFVar2->EntityType != MainCharacter) {
              UDS_InteractionAbility_NPCCamp::TryActivate(&local_178,&local_170,&local_160,0);
              return;
            }
            UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCCamp>
                      ((ulong64 *)&local_180,(EDS_AbilityTagType *)&local_178);
            bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_InteractionAbilityData_NPCCamp,FWeakObjectPtr> *)
                               &local_180,(void *)0x0);
            if (!bVar1) {
              pUVar6 = FWeakObjectPtr::Get(&local_180);
              TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                        ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pUVar6[3].field_0x20);
              return;
            }
            pUVar3 = UDS_LogManager::GetInst();
            if (pUVar3 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar3 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"FDS_PlayerSkillService::ReceiveCampSeatSitDownResponse",0x36,Yes)
            ;
            pwVar9 = L"npcCampAbilityData is nullptr. (%llu)";
            uVar8 = 0x1b8;
          }
          else {
            pUVar3 = UDS_LogManager::GetInst();
            if (pUVar3 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar3 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"FDS_PlayerSkillService::ReceiveCampSeatSitDownResponse",0x36,Yes)
            ;
            pwVar9 = L"Failed to SetOccupantEntityID(). (%d)";
            uVar8 = 0x1ae;
          }
        }
        else {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"FDS_PlayerSkillService::ReceiveCampSeatSitDownResponse",0x36,Yes);
          pwVar9 = L"Couldn\'t find campSeatInfo. (%d)";
          uVar8 = 0x1a8;
        }
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar8,pwVar9);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ReceiveCampSeatStandUpResponse @ 14bc03ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_PlayerSkillService::ReceiveCampSeatStandUpResponse(ServerMessages *param_1)

{
  CampSeatStandUpResponseDefaultTypeInternal *pCVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0x50df) {
    pCVar1 = *(CampSeatStandUpResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pCVar1 = &server_msg::_CampSeatStandUpResponse_default_instance_;
  }
  local_140 = *(ulong64 *)&((Message *)((longlong)pCVar1 + 0x10))->field_0x8;
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_140);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::ReceiveCampSeatStandUpResponse",0x36,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x1ec,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148[0] = Success;
    UDS_InteractionAbility_NPCCamp::Deactivate(&local_140,local_148);
  }
  return;
}

// ReceiveFlyModeCancelResponse @ 14bc03ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PlayerSkillService::ReceiveFlyModeCancelResponse(ServerMessages *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PlayerSkillService::ReceiveFlyModeCancelResponse",0x34,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0x238,L"ReceiveSubMergeCancelResponse entity_id: %llu"
              );
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// ReceivePlayerSkillDetectResponse @ 14bc06520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_PlayerSkillService::ReceivePlayerSkillDetectResponse(ServerMessages *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  ADS_PlayerController *this;
  UDS_PlayerData *this_00;
  FDS_EntityBase *pFVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_148 [32];
  EDS_PlayerSkillType local_118;
  EDS_AbilityDeactivateType local_117;
  undefined1 local_116 [6];
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  ulong64 local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  ADS_PlayerController::GetPlayerController();
  bVar4 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_110,(void *)0x0);
  if (!bVar4) {
    this = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_110);
    ADS_PlayerController::PlayDetectionEffect(this);
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_108,(void *)0x0);
  if (!bVar4) {
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    uVar11 = 0;
    local_60 = 0;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_108);
    local_118 = Detection;
    UDS_PlayerData::GetPlayerSkillTargetInfoMap
              (this_00,&local_118,
               (TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
                *)local_88);
    uVar9 = local_60;
    uStack_f4 = 1;
    uStack_e4 = uVar11;
    iStack_f8 = 0;
    if (local_60 != 0) {
      puVar10 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar10 = local_68;
      }
      uVar12 = *puVar10;
      uVar11 = 0;
      while (uVar12 == 0) {
        lVar7 = (longlong)iStack_f8;
        uVar11 = uVar11 + 0x20;
        iStack_f8 = iStack_f8 + 1;
        uStack_e4 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
        goto LAB_14bc06691;
        uVar12 = (puVar10 + 1)[lVar7];
      }
      uStack_f4 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_f4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_d0 = (int)lVar7;
      uStack_e4 = local_d0 + -1 + uVar11;
      if ((int)local_60 < (int)uStack_e4) {
        uStack_e4 = local_60;
      }
    }
LAB_14bc06691:
    local_100 = (longlong *)local_88;
    local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    iStack_d8 = local_88._8_4_ - local_54;
    uVar12 = local_60 & 0xffffffe0;
    uStack_e8 = 0xffffffff;
    TStack_b8.CurrentBitIndex = uStack_e4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_f4,iStack_f8);
    iVar8 = (int)local_60 >> 5;
    TStack_b8._28_4_ = uStack_e4;
    TStack_b8.BaseBitIndex = uVar11;
    uStack_98 = CONCAT44(uStack_d4,iStack_d8);
    bVar6 = (byte)local_60;
    local_e0 = uVar11;
    uStack_dc = uStack_e4;
    local_c0 = local_100;
    TStack_b8.Array = local_f0;
    if (((int)local_60 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar9 != local_60) {
      puVar10 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar10 = local_68;
      }
      uVar11 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
      while (uVar11 == 0) {
        lVar7 = (longlong)iVar8;
        uVar12 = uVar12 + 0x20;
        iVar8 = iVar8 + 1;
        uVar9 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_14bc067c0;
        uVar11 = (puVar10 + 1)[lVar7];
      }
      uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar9 = (int)lVar7 + -1 + uVar12;
      if ((int)local_60 < (int)uVar9) {
        uVar9 = local_60;
      }
    }
LAB_14bc067c0:
    while( true ) {
      plVar3 = local_c0;
      if ((int)local_c0[1] - *(int *)((longlong)local_c0 + 0x34) != (int)uStack_98) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_116);
      }
      if (((TStack_b8.CurrentBitIndex == uVar9) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar3 == (longlong *)local_88)) break;
      pFVar5 = FDS_EntityBase::GetEntityBase
                         ((ulong64 *)(*plVar3 + ((longlong)TStack_b8.CurrentBitIndex * 9 + 1) * 8));
      if (pFVar5 != (FDS_EntityBase *)0x0) {
        (**(code **)(pFVar5->_padding_ + 0xd8))(pFVar5);
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    iVar8 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_54 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (uint *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  local_117 = Success;
  local_c8 = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_PlayerSkillAbility_Detection::Deactivate(&local_c8,&local_117);
  return;
}

// ReceivePlayerSkillLearnResponse @ 14bc06920

void __cdecl
FDS_PlayerSkillService::ReceivePlayerSkillLearnResponse
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ReceivePlayerSkillLevelUpResponse @ 14bc06990

void __cdecl
FDS_PlayerSkillService::ReceivePlayerSkillLevelUpResponse
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ReceivePlayerSkillPreservedListNotify @ 14bc06a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PlayerSkillService::ReceivePlayerSkillPreservedListNotify(ServerMessages *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_PlayerData *pUVar4;
  longlong lVar5;
  PlayerSkillPreservedListNotifyDefaultTypeInternal *pPVar6;
  longlong lVar7;
  PlayerSkillPreservedInfo *pPVar8;
  undefined1 auStackY_178 [32];
  EDS_PlayerSkillType local_148 [8];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  lVar7 = 0;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::ReceivePlayerSkillPreservedListNotify",0x3d,Yes
                );
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x28f,L"playerData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x4eeb) {
      pPVar6 = *(PlayerSkillPreservedListNotifyDefaultTypeInternal **)
                &(param_1->_impl_).ServerMessage_;
    }
    else {
      pPVar6 = &server_msg::_PlayerSkillPreservedListNotify_default_instance_;
    }
    local_148[0] = ((Message *)((longlong)pPVar6 + 0x40))->field_0x8;
    iVar1 = *(int *)((longlong)pPVar6 + 0x20);
    lVar5 = lVar7;
    if (0 < (longlong)iVar1) {
      do {
        pUVar4 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_140);
        pPVar8 = *(PlayerSkillPreservedInfo **)&((Message *)((longlong)pPVar6 + 0x10))->field_0x8;
        if (((ulonglong)pPVar8 & 1) != 0) {
          pPVar8 = *(PlayerSkillPreservedInfo **)
                    ((longlong)(&(pPVar8->_impl_)._has_bits_)[lVar5 * 2 + -3].has_bits_ + 3);
        }
        UDS_PlayerData::AddPlayerSkillTargetInfo(pUVar4,local_148,pPVar8);
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar1);
    }
    iVar1 = *(int *)&((Message *)((longlong)pPVar6 + 0x30))->field_0x8;
    if (0 < (longlong)iVar1) {
      do {
        pUVar4 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_140);
        pPVar8 = *(PlayerSkillPreservedInfo **)((longlong)pPVar6 + 0x30);
        if (((ulonglong)pPVar8 & 1) != 0) {
          pPVar8 = *(PlayerSkillPreservedInfo **)
                    ((longlong)(&(pPVar8->_impl_)._has_bits_)[lVar7 * 2 + -3].has_bits_ + 3);
        }
        UDS_PlayerData::RemovePlayerSkillTargetInfo(pUVar4,local_148,pPVar8);
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar1);
    }
  }
  return;
}

// ReceivePlayerSkillResetResponse @ 14bc06ba0

void __cdecl
FDS_PlayerSkillService::ReceivePlayerSkillResetResponse
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// ReceiveSubMergeCancelResponse @ 14bc0b270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PlayerSkillService::ReceiveSubMergeCancelResponse(ServerMessages *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PlayerSkillService::ReceiveSubMergeCancelResponse",0x35,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0x218,L"ReceiveSubMergeCancelResponse entity_id: %llu"
              );
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// SendCampInstallCastingRequest @ 14bc1b0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_PlayerSkillService::SendCampInstallCastingRequest(TVector<double> *param_1,int *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_LogManager *pUVar7;
  Vector *pVVar8;
  UDS_NetworkManager *this_00;
  Arena *pAVar9;
  void *pvVar10;
  undefined1 auStackY_2a8 [32];
  TSharedRef<client_msg::ClientMessages,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_278);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  if (this == (ClientMessages *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->_impl_)._oneof_case_[0] != 0x50dc) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x50dc;
    pAVar9 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::CampInstallCastingRequest>
                       (pAVar9);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  pMVar6 = (this->_impl_).ClientMessage_.joincontinentreq_;
  if (pMVar6 == (Message *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"FDS_PlayerSkillService::SendCampInstallCastingRequest",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_268.Ptr,0xd2,L"packet is nullptr.");
      pvVar10 = (void *)local_268._padding_;
LAB_14bc1b2d1:
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
    }
  }
  else {
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
    pVVar8 = *(Vector **)&pMVar6[1].field_0x8;
    if (pVVar8 == (Vector *)0x0) {
      pAVar9 = (Arena *)(*(ulonglong *)&pMVar6->field_0x8 & 0xfffffffffffffffe);
      if ((pMVar6->field_0x8 & 1) != 0) {
        pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
      }
      pVVar8 = google::protobuf::Arena::DefaultConstruct<Vector>(pAVar9);
      *(Vector **)&pMVar6[1].field_0x8 = pVVar8;
    }
    DS_Util::SetVector(pVVar8,param_1);
    *(int *)(pMVar6 + 2) = *param_2;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 2;
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1b2ed;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_PlayerSkillService::SendCampInstallCastingRequest",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0xde,L"netMng is nullptr.");
      pvVar10 = (void *)local_148._padding_;
      goto LAB_14bc1b2d1;
    }
  }
  bVar3 = false;
LAB_14bc1b2ed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// SendCampSeatSitDownRequest @ 14bc1b330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_PlayerSkillService::SendCampSeatSitDownRequest(ulong64 *param_1,int *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_LogManager *pUVar7;
  UDS_NetworkManager *this_00;
  Arena *pAVar8;
  void *pvVar9;
  undefined1 auStackY_298 [32];
  TSharedRef<client_msg::ClientMessages,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_268);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if (this == (ClientMessages *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->_impl_)._oneof_case_[0] != 0x50dd) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x50dd;
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::CampSeatSitDownRequest>(pAVar8);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  pMVar6 = (this->_impl_).ClientMessage_.joincontinentreq_;
  if (pMVar6 == (Message *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"FDS_PlayerSkillService::SendCampSeatSitDownRequest",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_258.Ptr,0xeb,L"packet is nullptr.");
      pvVar9 = (void *)local_258._padding_;
LAB_14bc1b508:
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
    }
  }
  else {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
    *(int *)(pMVar6 + 2) = *param_2;
    *(int *)&pMVar6[2].field_0x4 = param_3;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 6;
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1b524;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::SendCampSeatSitDownRequest",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,0xf6,L"netMng is nullptr.");
      pvVar9 = (void *)local_138._padding_;
      goto LAB_14bc1b508;
    }
  }
  bVar3 = false;
LAB_14bc1b524:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// SendCampSeatStandUpRequest @ 14bc1b570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_PlayerSkillService::SendCampSeatStandUpRequest(void)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_LogManager *pUVar7;
  UDS_NetworkManager *this_00;
  Arena *pAVar8;
  void *pvVar9;
  undefined1 auStackY_298 [32];
  TSharedRef<client_msg::ClientMessages,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_268);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if (this == (ClientMessages *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->_impl_)._oneof_case_[0] != 0x50de) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x50de;
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::CampSeatStandUpRequest>(pAVar8);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  if ((this->_impl_).ClientMessage_.joincontinentreq_ == (Message *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"FDS_PlayerSkillService::SendCampSeatStandUpRequest",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_258.Ptr,0x103,L"packet is nullptr.");
      pvVar9 = (void *)local_258._padding_;
LAB_14bc1b715:
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
    }
  }
  else {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1b731;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::SendCampSeatStandUpRequest",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,0x10a,L"netMng is nullptr.");
      pvVar9 = (void *)local_138._padding_;
      goto LAB_14bc1b715;
    }
  }
  bVar3 = false;
LAB_14bc1b731:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// SendPlayerSkillDetectRequest @ 14bc1d360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_PlayerSkillService::SendPlayerSkillDetectRequest(void)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_LogManager *pUVar7;
  UDS_NetworkManager *this_00;
  Arena *pAVar8;
  void *pvVar9;
  undefined1 auStackY_298 [32];
  TSharedRef<client_msg::ClientMessages,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_268);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if (this == (ClientMessages *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->_impl_)._oneof_case_[0] != 0x4fb0) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x4fb0;
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::PlayerSkillDetectRequest>(pAVar8)
    ;
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  if ((this->_impl_).ClientMessage_.joincontinentreq_ == (Message *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"FDS_PlayerSkillService::SendPlayerSkillDetectRequest",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_258.Ptr,0x8c,L"packet is nullptr.");
      pvVar9 = (void *)local_258._padding_;
LAB_14bc1d505:
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
    }
  }
  else {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1d521;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::SendPlayerSkillDetectRequest",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,0x93,L"netMng is nullptr.");
      pvVar9 = (void *)local_138._padding_;
      goto LAB_14bc1d505;
    }
  }
  bVar3 = false;
LAB_14bc1d521:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// SendPlayerSkillLearnRequest @ 14bc1d560

void __cdecl
FDS_PlayerSkillService::SendPlayerSkillLearnRequest
          (EDS_PlayerSkillType param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5460) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5460;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PlayerSkillLearnRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(uint *)&pMVar5[1].field_0x8 = (uint)param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_2);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ReceivePlayerSkillLearnResponse;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SendPlayerSkillLevelUpRequest @ 14bc1d7c0

void __cdecl
FDS_PlayerSkillService::SendPlayerSkillLevelUpRequest
          (EDS_PlayerSkillType param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5461) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5461;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PlayerSkillLevelUpRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(uint *)&pMVar5[1].field_0x8 = (uint)param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_2);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[5] = ReceivePlayerSkillLevelUpResponse;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SendPlayerSkillResetRequest @ 14bc1da20

void __cdecl
FDS_PlayerSkillService::SendPlayerSkillResetRequest
          (EDS_PlayerSkillType param_1,bool param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar5->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar3 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5462) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x5462;
    pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PlayerSkillResetRequest>
                       (pAVar9);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(uint *)&pMVar6[1].field_0x8 = (uint)param_1;
    uVar1 = *(uint *)(pMVar6 + 1);
    pMVar6[1].field_0xc = param_2;
    *(uint *)(pMVar6 + 1) = uVar1 | 3;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar3 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar3->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 1),param_3);
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[4] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar7[5] = ReceivePlayerSkillResetResponse;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar3 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar3->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// SendRemoveCampRequest @ 14bc1e110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_PlayerSkillService::SendRemoveCampRequest(ulong64 *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_LogManager *pUVar7;
  UDS_NetworkManager *this_00;
  Arena *pAVar8;
  void *pvVar9;
  undefined1 auStackY_298 [32];
  TSharedRef<client_msg::ClientMessages,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_268);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if (this == (ClientMessages *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->_impl_)._oneof_case_[0] != 0x50df) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x50df;
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::RemoveCampRequest>(pAVar8);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  pMVar6 = (this->_impl_).ClientMessage_.joincontinentreq_;
  if (pMVar6 == (Message *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"FDS_PlayerSkillService::SendRemoveCampRequest",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_258.Ptr,0x117,L"packet is nullptr.");
      pvVar9 = (void *)local_258._padding_;
LAB_14bc1e2ca:
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
    }
  }
  else {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1e2e6;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerSkillService::SendRemoveCampRequest",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,0x120,L"netMng is nullptr.");
      pvVar9 = (void *)local_138._padding_;
      goto LAB_14bc1e2ca;
    }
  }
  bVar3 = false;
LAB_14bc1e2e6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// TryEquipItemToPlayerSkill @ 14bc202b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_PlayerSkillService::TryEquipItemToPlayerSkill
          (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  long64 lVar4;
  bool bVar5;
  int iVar6;
  EDS_EquipSlotType EVar7;
  UObject *pUVar8;
  UDS_DataBase *this;
  TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> this_00;
  UClass *pUVar9;
  UDS_ItemDataSet *this_01;
  UDS_LogManager *pUVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FWeakObjectPtr local_res8;
  undefined1 auStackY_1d8 [32];
  uint uVar13;
  wchar_t *pwVar14;
  undefined1 local_1a8 [8];
  UObject *local_1a0;
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  TArray<FDS_PlayerSkillBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_188;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_res8 = param_1.WeakPtr;
  pUVar8 = FWeakObjectPtr::Get(&local_res8);
  lVar4 = *(long64 *)&pUVar8[8].field_0x8;
  pUVar8 = FWeakObjectPtr::Get(&local_res8);
  local_1a0 = (UObject *)CONCAT44(local_1a0._4_4_,*(undefined4 *)&pUVar8[0x13].field_0x20);
  iVar6 = FDS_EquipmentItemCharacterData::GetSlotNumberByItemType((EDS_ItemType *)&local_1a0);
  this = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res8);
  this_00 = UDS_DataBase::GetMyDataSet(this);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar8 == (UObject *)0x0) {
LAB_14bc20362:
    pUVar8 = (UObject *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_UDS_ItemDataSet_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar9->_padding_)) goto LAB_14bc20362;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_1a0 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_1a0);
  bVar5 = FWeakObjectPtr::IsValid(&local_198);
  if (!bVar5) {
    return;
  }
  this_01 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_198);
  bVar5 = UDS_ItemDataSet::IsEquippedItemByUID(this_01,lVar4);
  if (bVar5) {
    FDS_CharacterService::RequestEquipItem(EquipTool,iVar6,0);
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(&local_res8);
  local_1a0 = (UObject *)CONCAT44(local_1a0._4_4_,*(undefined4 *)&pUVar8[0x13].field_0x20);
  EVar7 = FDS_EquipmentItemCharacterData::GetEquipSlotTypeByItemType((EDS_ItemType *)&local_1a0);
  FDS_PlayerSkillBaseTableRow::GetAll(&local_188);
  iVar3 = local_188.ArrayNum;
  uVar11 = (ulonglong)local_188.ArrayNum;
  pFVar1 = local_188.AllocatorInstance.Data + uVar11 * 8;
  FVar12.Data = local_188.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar11 != iVar3) {
      `TCheckedPointerIterator<FDS_PlayerSkillBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1a8);
      uVar11 = (ulonglong)(uint)local_188.ArrayNum;
    }
    if (FVar12.Data == pFVar1) goto LAB_14bc20531;
    if (*(EDS_EquipSlotType *)(*(longlong *)FVar12.Data + 0x60) == EVar7) break;
    FVar12.Data = FVar12.Data + 8;
  }
  cVar2 = *(char *)(*(longlong *)FVar12.Data + 8);
  if ((cVar2 == '\0') || (cVar2 == '\r')) {
LAB_14bc20531:
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) goto LAB_14bc205a5;
    pUVar10 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_PlayerSkillService::TryEquipItemToPlayerSkill",0x31,Yes);
    pwVar14 = L"PlayerSkillType is Invalid.";
    uVar13 = 0x273;
  }
  else {
    UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&local_190);
    bVar5 = FWeakObjectPtr::IsValid(&local_190);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get(&local_190);
      if (*(int *)&pUVar8[2].field_0x14 < 1) {
        local_178._0_8_ = 0;
        local_178._8_8_ = 0;
        local_178._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x4bb0d,Alert_None_01,&local_178);
      }
      else {
        FDS_CharacterService::RequestEquipItem(EquipTool,iVar6,lVar4);
      }
      goto LAB_14bc205a5;
    }
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) goto LAB_14bc205a5;
    pUVar10 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_PlayerSkillService::TryEquipItemToPlayerSkill",0x31,Yes);
    pwVar14 = L"PlayerSkillData is Invalid.";
    uVar13 = 0x27a;
  }
  UDS_LogManager::PrintLog(pUVar10,1,Warning,local_158.Ptr,uVar13,pwVar14);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
LAB_14bc205a5:
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  return;
}

