// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// ProcessError @ 14bc027d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_WarpService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_140 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  local_148[0] = Cancel;
  UDS_WarpRequestAbility::Deactivate(&local_140,local_148);
  local_148[0] = Cancel;
  UDS_WarpActionAbility::Deactivate(&local_140,local_148);
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_WarpService::ProcessError",0x1d,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0x214,L"!!!! MainCharacterEntityID: %llu, Error: %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// ProcessError_PrepareWarp @ 14bc02f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_WarpService::ProcessError_PrepareWarp(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  PrepareWarpResponseDefaultTypeInternal *pPVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&param_2[1].field_0xc == 0x4fbd) {
    pPVar1 = *(PrepareWarpResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pPVar1 = &server_msg::_PrepareWarpResponse_default_instance_;
  }
  local_140 = (pPVar1->_instance)._impl_.entity_id_;
  local_148[0] = Cancel;
  UDS_WarpActionAbility::Deactivate(&local_140,local_148);
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_WarpService::ProcessError_PrepareWarp",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x225,L"!!!! EntityID: %llu, Error: %d")
    ;
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return true;
}

// ProcessError_WarpArrive @ 14bc032b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_WarpService::ProcessError_WarpArrive(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  WarpArriveResponseDefaultTypeInternal *pWVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&param_2[1].field_0xc == 0x4fc0) {
    pWVar1 = *(WarpArriveResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pWVar1 = &server_msg::_WarpArriveResponse_default_instance_;
  }
  local_140 = (pWVar1->_instance)._impl_.entity_id_;
  local_148[0] = Cancel;
  UDS_WarpActionAbility::Deactivate(&local_140,local_148);
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_WarpService::ProcessError_WarpArrive",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x236,L"!!!! EntityID: %llu, Error: %d")
    ;
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return true;
}

// ReceiveGameServerChange @ 14bc03fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_WarpService::ReceiveGameServerChange(ServerMessages *param_1)

{
  Message *pMVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  ADS_MainCharacter *this;
  Vector *pVVar4;
  ServerChangeTypeDefaultTypeInternal *pSVar5;
  PlayerEntityDefaultTypeInternal *pPVar6;
  GameServerChangeResponseDefaultTypeInternal *pGVar7;
  undefined1 auStackY_1d8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  uint local_198 [2];
  FWeakObjectPtr local_190;
  TRotator<double> local_188;
  TVector<double>_u_0 local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1->_impl_)._oneof_case_[0] == 0xac) {
    pGVar7 = *(GameServerChangeResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar7 = &server_msg::_GameServerChangeResponse_default_instance_;
  }
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_190,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_WarpService::ReceiveGameServerChange",0x28,Yes);
    pwVar9 = L"mainCharacter is nullptr.";
    uVar8 = 0x1b7;
  }
  else {
    pPVar6 = &messages::_PlayerEntity_default_instance_;
    if (*(PlayerEntityDefaultTypeInternal **)((longlong)pGVar7 + 0x20) !=
        (PlayerEntityDefaultTypeInternal *)0x0) {
      pPVar6 = *(PlayerEntityDefaultTypeInternal **)((longlong)pGVar7 + 0x20);
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_WarpService::ReceiveGameServerChange",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Display,local_158.Ptr,0x1be,L"[PlayerEntityID] Old: %llu, New: %llu");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    UDS_PlayerData::ChangeMainPlayerDataKey((pPVar6->_instance)._impl_.bits_);
    local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_198[0] = 0;
    local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_188.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_188.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_188.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    pSVar5 = &messages::_ServerChangeType_default_instance_;
    if (*(ServerChangeTypeDefaultTypeInternal **)&((Message *)((longlong)pGVar7 + 0x20))->field_0x8
        != (ServerChangeTypeDefaultTypeInternal *)0x0) {
      pSVar5 = *(ServerChangeTypeDefaultTypeInternal **)
                &((Message *)((longlong)pGVar7 + 0x20))->field_0x8;
    }
    uVar8 = (pSVar5->_instance)._impl_._oneof_case_[0];
    if ((uVar8 == 1) || (uVar8 == 2)) {
      pMVar1 = (pSVar5->_instance)._impl_.item_.zone_island_;
      pVVar4 = &_Vector_default_instance_._instance;
      if (*(Vector **)&pMVar1[1].field_0x8 != (Vector *)0x0) {
        pVVar4 = *(Vector **)&pMVar1[1].field_0x8;
      }
      DS_Util::SetFVector((TVector<double> *)&local_170._s_0,pVVar4);
      local_188.Yaw = (double)*(float *)&pMVar1[2].field_0x4;
      local_188.Pitch = 0.0;
      local_188.Roll = 0.0;
      local_198[0] = *(uint *)(pMVar1 + 2);
      this = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_190);
      ADS_MainCharacter::OnTeleport(this,(TVector<double> *)&local_170._s_0,&local_188,local_198);
      DS_Util::DS_SyncLog(L"");
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_WarpService::ReceiveGameServerChange",0x28,Yes);
    pwVar9 = L"isInit is false.";
    uVar8 = 0x204;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar8,pwVar9);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// ReceivePrepareWarp @ 14bc06c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_WarpService::ReceivePrepareWarp(ServerMessages *param_1)

{
  UDS_LogManager *pUVar1;
  ulong64 uVar2;
  PrepareWarpResponseDefaultTypeInternal *pPVar3;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [8];
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4fbd) {
    pPVar3 = *(PrepareWarpResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar3 = &server_msg::_PrepareWarpResponse_default_instance_;
  }
  local_140 = *(ulong64 *)((longlong)pPVar3 + 0x20);
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_WarpService::ReceivePrepareWarp",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,299,L"!!!! EntityID: %llu");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  uVar2 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  if (local_140 == uVar2) {
    local_148[0] = Success;
    UDS_WarpRequestAbility::Deactivate(&local_140,local_148);
  }
  UDS_WarpActionAbility::TryActivate_PrepareWarp(&local_140,&pPVar3->_instance);
  return;
}

// ReceiveWarpArrive @ 14bc0b540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_WarpService::ReceiveWarpArrive(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  WarpArriveResponseDefaultTypeInternal *pWVar4;
  undefined1 auStackY_198 [32];
  ulong64 local_150;
  FWeakObjectPtr local_148;
  ulong64 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4fc0) {
    pWVar4 = *(WarpArriveResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pWVar4 = &server_msg::_WarpArriveResponse_default_instance_;
  }
  local_150 = *(ulong64 *)&((Message *)((longlong)pWVar4 + 0x10))->field_0x8;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_WarpService::ReceiveWarpArrive",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x153,L"!!!! EntityID: %llu");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  local_140 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  if (local_150 == local_140) {
    UDS_AbilityDataSet::GetAbilityData<UDS_WarpActionAbilityData>
              ((ulong64 *)&local_148,(EDS_AbilityTagType *)&local_140);
    bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *)&local_148,
                       (void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_WarpService::ReceiveWarpArrive",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x15c,L"warpActionAbilityData is nullptr. (%llu)")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(&local_148);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pUVar3 + 4));
    }
  }
  else {
    UDS_WarpActionAbility::TryActivate_WarpArrive(&local_150,&pWVar4->_instance);
  }
  return;
}

// ReceiveWarpCancel @ 14bc0b730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_WarpService::ReceiveWarpCancel(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_WarpBaseTableRow *this;
  FDS_CommonActionCastingTableRow *this_00;
  FString *pFVar3;
  WarpCancelResponseDefaultTypeInternal *pWVar4;
  undefined1 auStackY_1c8 [32];
  EDS_AbilityDeactivateType local_188 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_180;
  ulong64 local_170;
  FStringFormatArg local_168;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_170 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  if ((param_1->_impl_)._oneof_case_[0] == 0x4fc1) {
    pWVar4 = *(WarpCancelResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pWVar4 = &server_msg::_WarpCancelResponse_default_instance_;
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_WarpService::ReceiveWarpCancel",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,local_138.Ptr,0xe2,L"!!!! MainCharacterEntityID: %llu");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  local_188[0] = Success;
  UDS_WarpRequestAbility::Deactivate(&local_170,local_188);
  this = FDS_WarpBaseTableRow::GetRef
                   ((ulonglong)(byte)((Message *)((longlong)pWVar4 + 0x10))->field_0x8,true);
  bVar1 = FDS_WarpBaseTableRow::IsValid(this);
  if ((bVar1) && (this->CastingInfo != None)) {
    this_00 = FDS_CommonActionCastingTableRow::GetRef((ulonglong)this->CastingInfo,true);
    bVar1 = FDS_CommonActionCastingTableRow::IsValid(this_00);
    if (bVar1) {
      pFVar3 = (FString *)(**(code **)((this_00->ID_Name)._padding_ + 8))(&this_00->ID_Name);
      pFVar3 = ::FString::FString(&local_148,pFVar3);
      FStringFormatArg::FStringFormatArg(&local_168,pFVar3);
      local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_180.AllocatorInstance,1,&local_180.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_180.AllocatorInstance.Data,&local_168,1);
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x6a5,Alert_None_01,&local_180,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
      if ((FStringFormatArg *)local_180.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      if (local_168.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.StringValue.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ReceiveWarpCasting @ 14bc0b960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_WarpService::ReceiveWarpCasting(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_160;
  ulong64 local_158;
  FReadAccessScope local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_WarpService::ReceiveWarpCasting",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,local_138.Ptr,0xce,L"!!!! MainCharacterEntityID: %llu");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  UDS_AbilityDataSet::GetAbilityData<UDS_WarpRequestAbilityData>
            ((ulong64 *)&local_160,(EDS_AbilityTagType *)&local_158);
  bVar1 = TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WarpRequestAbilityData,FWeakObjectPtr> *)&local_160,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_WarpService::ReceiveWarpCasting",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xd4,L"warpRequestAbilityData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&local_160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 3),&local_150);
    if ((*(int *)&pUVar3[3].field_0x10 != 0) &&
       (*(longlong **)&pUVar3[3].field_0x8 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&pUVar3[3].field_0x8 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_150);
  }
  return;
}

// ReceiveWarpFail @ 14bc0bb30

void __cdecl FDS_WarpService::ReceiveWarpFail(ServerMessages *param_1)

{
  return;
}

// ReceiveWarpStart @ 14bc0bb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_WarpService::ReceiveWarpStart(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_160;
  ulong64 local_158;
  FReadAccessScope local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_WarpService::ReceiveWarpStart",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,local_138.Ptr,0x140,L"!!!! MainCharacterEntityID: %llu");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  UDS_AbilityDataSet::GetAbilityData<UDS_WarpActionAbilityData>
            ((ulong64 *)&local_160,(EDS_AbilityTagType *)&local_158);
  bVar1 = TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WarpActionAbilityData,FWeakObjectPtr> *)&local_160,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_WarpService::ReceiveWarpStart",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x146,L"warpActionAbilityData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&local_160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[3].field_0x10,
               &local_150);
    if ((*(int *)&pUVar3[3].field_0x20 != 0) &&
       (*(longlong **)&pUVar3[3].field_0x18 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&pUVar3[3].field_0x18 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_150);
  }
  return;
}

// RequestPortalWarp @ 14bc131e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_WarpService::RequestPortalWarp(ulong64 *param_1)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  UDS_LogManager *pUVar9;
  Arena *pAVar10;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_198;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  FDestructionSentinel local_168;
  undefined1 *local_150;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_148);
  local_198.Object = pTVar5->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pFVar2 = local_198.Object;
  if (((local_198.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5019) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_198.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5019;
    pAVar10 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PortalWarpRequest>
                       (pAVar10);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->SuccessDel,(FWriteAccessScope *)&local_188);
    local_170 = &(pFVar2->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_170);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ResponsePortalWarp;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->FailDel,(FWriteAccessScope *)&local_168);
    local_150 = &(pFVar2->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
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
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_WarpService::RequestPortalWarp",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Display,local_138.Ptr,0x94,L"!!!!");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_198);
      goto LAB_14bc13489;
    }
  }
  bVar3 = false;
LAB_14bc13489:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// RequestResurrectWarp @ 14bc17340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_WarpService::RequestResurrectWarp(EDS_ResurrectType *param_1)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  UDS_LogManager *pUVar9;
  Arena *pAVar10;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_198;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  FDestructionSentinel local_168;
  undefined1 *local_150;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_148);
  local_198.Object = pTVar5->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pFVar2 = local_198.Object;
  if (((local_198.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5017) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_198.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5017;
    pAVar10 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ResurrectWarpRequest>
                       (pAVar10);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(uint *)&pMVar6[1].field_0x8 = (uint)*param_1;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->SuccessDel,(FWriteAccessScope *)&local_188);
    local_170 = &(pFVar2->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_170);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ResponseResurrectWarp;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->FailDel,(FWriteAccessScope *)&local_168);
    local_150 = &(pFVar2->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
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
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_WarpService::RequestResurrectWarp",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Display,local_138.Ptr,0x5f,L"!!!!");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_198);
      goto LAB_14bc175e8;
    }
  }
  bVar3 = false;
LAB_14bc175e8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// RequestReturnHomeSave @ 14bc17620

bool __cdecl
FDS_WarpService::RequestReturnHomeSave
          (ulong64 *param_1,int param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
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
  if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5015) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5015;
    pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ReturnHomeSaveRequest>
                       (pAVar9);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(int *)(pMVar6 + 2) = param_2;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 3;
    if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
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
      puVar7[5] = ResponseReturnHomeSave;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
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
    if (this != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
      if (*(void **)&param_3->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&param_3->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)param_3);
      return bVar3;
    }
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
  return false;
}

// RequestReturnHomeWarp @ 14bc178c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_WarpService::RequestReturnHomeWarp(void)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  UDS_LogManager *pUVar9;
  Arena *pAVar10;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_198;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  FDestructionSentinel local_168;
  undefined1 *local_150;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_148);
  local_198.Object = pTVar5->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pFVar2 = local_198.Object;
  if (((local_198.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5016) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_198.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5016;
    pAVar10 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ReturnHomeWarpRequest>
                       (pAVar10);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  if ((pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ != (Message *)0x0) {
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->SuccessDel,(FWriteAccessScope *)&local_188);
    local_170 = &(pFVar2->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_170);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ResponseReturnHomeWarp;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->FailDel,(FWriteAccessScope *)&local_168);
    local_150 = &(pFVar2->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
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
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_WarpService::RequestReturnHomeWarp",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Display,local_138.Ptr,0x45,L"!!!!");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_198);
      goto LAB_14bc17b5c;
    }
  }
  bVar3 = false;
LAB_14bc17b5c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// RequestWarpDeviceActivate @ 14bc18410

bool __cdecl FDS_WarpService::RequestWarpDeviceActivate(ulong64 *param_1,int param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
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
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5014) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5014;
    pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::WarpDeviceActivateRequest>
                       (pAVar9);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(int *)(pMVar6 + 2) = param_2;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 3;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
      ;
      puVar7[1] = *param_1;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
      ;
      puVar7[3] = ResponseWarpDeviceActivate;
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
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
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
    if (this != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      goto LAB_14bc18638;
    }
  }
  bVar3 = false;
LAB_14bc18638:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// RequestWarpDeviceWarp @ 14bc18660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_WarpService::RequestWarpDeviceWarp(int *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  UDS_LogManager *pUVar10;
  Arena *pAVar11;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_198;
  FDestructionSentinel local_188;
  undefined1 *local_170;
  FDestructionSentinel local_168;
  undefined1 *local_150;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_148);
  local_198.Object = pTVar6->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar3 = local_198.Object;
  if (((local_198.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5018) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_198.Object)->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x5018;
    pAVar11 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
    }
    pMVar7 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::WarpDeviceWarpRequest>
                       (pAVar11);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
  }
  pMVar7 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar7 != (Message *)0x0) {
    *(int *)&pMVar7[1].field_0x8 = *param_1;
    uVar1 = *(uint *)(pMVar7 + 1);
    *(int *)&pMVar7[1].field_0xc = param_2;
    *(uint *)(pMVar7 + 1) = uVar1 | 3;
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pFVar3 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->SuccessDel,(FWriteAccessScope *)&local_188);
    local_170 = &(pFVar3->SuccessDel).field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_170);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[3] = ResponseWarpDeviceWarp;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    if (local_198.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pFVar3 = local_198.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_198.Object)->FailDel,(FWriteAccessScope *)&local_168);
    local_150 = &(pFVar3->FailDel).field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[3] = ProcessError;
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_WarpService::RequestWarpDeviceWarp",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar10,1,Display,local_138.Ptr,0x7a,L"!!!!");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar4 = UDS_NetworkManager::SendTwoWayPacket(this,&local_198);
      goto LAB_14bc1891a;
    }
  }
  bVar4 = false;
LAB_14bc1891a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// ResponsePortalWarp @ 14bc1ab70

void __cdecl FDS_WarpService::ResponsePortalWarp(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponseResurrectWarp @ 14bc1abb0

void __cdecl FDS_WarpService::ResponseResurrectWarp(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponseReturnHomeSave @ 14bc1abc0

void __cdecl
FDS_WarpService::ResponseReturnHomeSave
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

// ResponseReturnHomeWarp @ 14bc1ac30

void __cdecl FDS_WarpService::ResponseReturnHomeWarp(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponseWarpDeviceActivate @ 14bc1aed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_WarpService::ResponseWarpDeviceActivate(ServerMessagesTwoway *param_1,ulong64 param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffWarpDeviceData *this;
  WarpDeviceActivateResponseDefaultTypeInternal *pWVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5014) {
    pWVar3 = (WarpDeviceActivateResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pWVar3 = &server_msg_twoway::_WarpDeviceActivateResponse_default_instance_;
  }
  UDS_StuffWarpDeviceData::GetData((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> *)local_148,(void *)0x0
                    );
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_WarpService::ResponseWarpDeviceActivate",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x1a2,L"stuffWarpDeviceData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this = (UDS_StuffWarpDeviceData *)FWeakObjectPtr::Get(local_148);
    UDS_StuffWarpDeviceData::SetDataByWarpDeviceActivateResponse(this,&pWVar3->_instance);
  }
  return;
}

// ResponseWarpDeviceWarp @ 14bc1aff0

void __cdecl FDS_WarpService::ResponseWarpDeviceWarp(ServerMessagesTwoway *param_1)

{
  return;
}

// SendWarpArrive @ 14bc1e370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_WarpService::SendWarpArrive(void)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this_00;
  UDS_LogManager *pUVar7;
  Arena *pAVar8;
  undefined1 auStackY_178 [32];
  TSharedRef<client_msg::ClientMessages,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_148);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
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
  if ((this->_impl_)._oneof_case_[0] != 0x4ef7) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x4ef7;
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::WarpArriveRequest>(pAVar8);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  if ((this->_impl_).ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_WarpService::SendWarpArrive",0x1f,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Display,local_138.Ptr,0x11f,L"!!!!");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1e4c7;
    }
  }
  bVar3 = false;
LAB_14bc1e4c7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// SendWarpCancel @ 14bc1e510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_WarpService::SendWarpCancel(void)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this_00;
  UDS_LogManager *pUVar7;
  Arena *pAVar8;
  undefined1 auStackY_178 [32];
  TSharedRef<client_msg::ClientMessages,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_148);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
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
  if ((this->_impl_)._oneof_case_[0] != 0x4ef8) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x4ef8;
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::WarpCancelRequest>(pAVar8);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  if ((this->_impl_).ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_WarpService::SendWarpCancel",0x1f,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Display,local_138.Ptr,0xa9,L"!!!!");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1e667;
    }
  }
  bVar3 = false;
LAB_14bc1e667:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// SendWarpLoading @ 14bc1e6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_WarpService::SendWarpLoading(void)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this_00;
  UDS_LogManager *pUVar7;
  Arena *pAVar8;
  undefined1 auStackY_178 [32];
  TSharedRef<client_msg::ClientMessages,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_148);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
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
  if ((this->_impl_)._oneof_case_[0] != 0x4ef6) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x4ef6;
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::WarpLoadingRequest>(pAVar8);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  if ((this->_impl_).ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_WarpService::SendWarpLoading",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Display,local_138.Ptr,0x10a,L"!!!!");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1e807;
    }
  }
  bVar3 = false;
LAB_14bc1e807:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

