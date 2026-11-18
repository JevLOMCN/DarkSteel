// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// FDS_AuthData @ 14b863fd0

FDS_AuthData * __thiscall FDS_AuthData::FDS_AuthData(FDS_AuthData *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)&(this->OnStateChangedLogoutDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnStateChangedLogoutDelegate = 0;
  this->_padding_ = (longlong)&___7FDS_AuthData__6B_;
  *(undefined8 *)&(this->OnStateChangedLogoutDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnStateChangedLogoutDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnStateChangedServerChangeDelegate = 0;
  *(undefined8 *)&(this->OnStateChangedServerChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnStateChangedServerChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnStateChangedServerChangeDelegate).field_0x18 = 2;
  ::FString::FString(&this->SessionUID,"");
  ::FString::FString(&this->AccountID,"");
  this->PlayerUID = 0;
  this->CharSlotNum = 0;
  ::FString::FString(&this->CharName,L"");
  ::FString::FString(&this->JwtKey,L"");
  this->CharLevel = 0;
  this->Exp = 0;
  this->IslandID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CreateDT).Ticks = 0;
  (this->HealthTime).Ticks = 0;
  this->Direction = 0.0;
  ::FString::FString(&this->GameServerAddr,"");
  this->GameServerPort = 0;
  this->IsReceiveLoginData = false;
  this->WorldId = 1;
  this->GameServerIndex = 0xbb9;
  this->RegionIndex = 1;
  this->AccountAuthority = None;
  this->CharId = 0;
  return this;
}

// ~FDS_AuthData @ 14b865790

void __thiscall FDS_AuthData::~FDS_AuthData(FDS_AuthData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FDS_AuthData__6B_;
  pFVar1 = (this->GameServerAddr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JwtKey).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccountID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionUID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStateChangedServerChangeDelegate).field_0x8,
             *(int *)&(this->OnStateChangedServerChangeDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnStateChangedServerChangeDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStateChangedServerChangeDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStateChangedLogoutDelegate).field_0x8,
             *(int *)&(this->OnStateChangedLogoutDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnStateChangedLogoutDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStateChangedLogoutDelegate);
  return;
}

// CheckServerDataConnection @ 14ba38da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_AuthData::CheckServerDataConnection(FDS_AuthData *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->GameServerAddr).Data.ArrayNum < 2) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_AuthData::CheckServerDataConnection",0x27,Yes);
    pwVar3 = L"GameServerAddr Empty";
    uVar2 = 0x51;
  }
  else {
    if (this->GameServerPort != 0) {
      return true;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_AuthData::CheckServerDataConnection",0x27,Yes);
    pwVar3 = L"GameServerPort Value <= 0";
    uVar2 = 0x56;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar2,pwVar3);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// GetAccountAuthority @ 14ba431b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_AccountAuthority __thiscall FDS_AuthData::GetAccountAuthority(FDS_AuthData *this)

{
  bool bVar1;
  UDS_DungeonPlayBuildManager *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar1) {
    pUVar2 = UDS_DungeonPlayBuildManager::GetInst();
    if (pUVar2 != (UDS_DungeonPlayBuildManager *)0x0) {
      return pUVar2->AccountAuthority;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_AuthData::GetAccountAuthority",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x46,L"dungeonPlayBuildMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return this->AccountAuthority;
}

// ResetData @ 14ba67f70

void __thiscall FDS_AuthData::ResetData(FDS_AuthData *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_48,"");
  pFVar1 = &this->SessionUID;
  if (pFVar1 != &local_48) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->SessionUID).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->SessionUID).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this->PlayerUID = 0;
  this->CharSlotNum = 0;
  ::FString::FString(&local_38,"");
  pFVar1 = &this->CharName;
  if (pFVar1 != &local_38) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (this->CharName).Data.ArrayNum = local_38.Data.ArrayNum;
    (this->CharName).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,"");
  pFVar1 = &this->JwtKey;
  if (pFVar1 != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->JwtKey).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->JwtKey).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->CharLevel = 0;
  this->Exp = 0;
  this->IslandID = 0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar3;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Direction = 0.0;
  (this->CreateDT).Ticks = 0;
  (this->HealthTime).Ticks = 0;
  ::FString::FString(&local_18,"");
  pFVar1 = &this->GameServerAddr;
  if (pFVar1 != &local_18) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->GameServerAddr).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->GameServerAddr).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->GameServerPort = 0;
  this->IsReceiveLoginData = false;
  this->WorldId = 1;
  this->GameServerIndex = 0xbb9;
  return;
}

// SetDataBySqlCharacterLevelTable @ 14ba70960

void __thiscall
FDS_AuthData::SetDataBySqlCharacterLevelTable(FDS_AuthData *this,SqlCharacterLevelTable *param_1)

{
  this->CharLevel = (param_1->_impl_).char_level_;
  this->Exp = (param_1->_impl_).exp_;
  return;
}

// SetDataBySqlPlayerTable @ 14ba70980

void __thiscall FDS_AuthData::SetDataBySqlPlayerTable(FDS_AuthData *this,SqlGPlayerTable *param_1)

{
  this->PlayerUID = (param_1->_impl_).player_uid_;
  this->CharSlotNum = 1;
  return;
}

// SetDataBySqlPositionTable @ 14ba709a0

void __thiscall
FDS_AuthData::SetDataBySqlPositionTable(FDS_AuthData *this,SqlPositionTable *param_1)

{
  Vector *pVVar1;
  Vector *pVVar2;
  
  this->IslandID = (param_1->_impl_).island_id_;
  pVVar1 = (param_1->_impl_).position_;
  pVVar2 = &_Vector_default_instance_._instance;
  if (pVVar1 != (Vector *)0x0) {
    pVVar2 = pVVar1;
  }
  DS_Util::SetFVector(&this->Position,pVVar2);
  this->Direction = (param_1->_impl_).direction_;
  return;
}

