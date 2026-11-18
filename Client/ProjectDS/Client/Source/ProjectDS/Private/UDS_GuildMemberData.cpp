// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b4a3770

UClass * __cdecl UDS_GuildMemberData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildMemberData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildMemberData",
               &Z_Registration_Info_UClass_UDS_GuildMemberData.InnerSingleton,
               StaticRegisterNativesUDS_GuildMemberData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GuildMemberData>,
               InternalVTableHelperCtorCaller<UDS_GuildMemberData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildMemberData.InnerSingleton;
}

// UDS_GuildMemberData @ 14b4a7700

UDS_GuildMemberData * __thiscall
UDS_GuildMemberData::UDS_GuildMemberData(UDS_GuildMemberData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IsMembershipPermission = false;
  this->IsGuildSettingPermission = false;
  this->_padding_ = (longlong)&___7UDS_GuildMemberData__6B_;
  (this->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = 0;
  (this->NickName).Data.ArrayMax = 0;
  this->LastLogoutTime = 0.0;
  this->PendingLeftTime = 0.0;
  this->IsGuildMoneyPermission = false;
  return this;
}

// ~UDS_GuildMemberData @ 14b4a7c10

void __thiscall UDS_GuildMemberData::~UDS_GuildMemberData(UDS_GuildMemberData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_GuildMemberData__6B_;
  pFVar1 = (this->NickName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a9370

UClass * __cdecl UDS_GuildMemberData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildMemberData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildMemberData",
               &Z_Registration_Info_UClass_UDS_GuildMemberData.InnerSingleton,
               StaticRegisterNativesUDS_GuildMemberData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GuildMemberData>,
               InternalVTableHelperCtorCaller<UDS_GuildMemberData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildMemberData.InnerSingleton;
}

// StaticRegisterNativesUDS_GuildMemberData @ 14b4a9630

void __cdecl UDS_GuildMemberData::StaticRegisterNativesUDS_GuildMemberData(void)

{
  return;
}

// UDS_GuildMemberData @ 14ba91320

UDS_GuildMemberData * __thiscall
UDS_GuildMemberData::UDS_GuildMemberData(UDS_GuildMemberData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IsOnline = false;
  this->IsMembershipPermission = false;
  this->IsGuildSettingPermission = false;
  this->IsGuildMoneyPermission = false;
  this->_padding_ = (longlong)&___7UDS_GuildMemberData__6B_;
  (this->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = 0;
  (this->NickName).Data.ArrayMax = 0;
  this->LastLogoutTime = 0.0;
  this->PendingLeftTime = 0.0;
  this->PlyaerUID = 0;
  ::FString::Empty(&this->NickName);
  this->Grade = GuildMemberGradeType_None;
  this->Level = 0;
  this->ZoneID = 0;
  this->LastLogoutTime = 0.0;
  this->PendingLeftTime = 0.0;
  return this;
}

// HasPendingLeftTime @ 14bab28b0

bool __thiscall UDS_GuildMemberData::HasPendingLeftTime(UDS_GuildMemberData *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->PendingLeftTime;
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  return 0.0 < dVar1 - dVar2;
}

// ResetData @ 14bac9970

void __thiscall UDS_GuildMemberData::ResetData(UDS_GuildMemberData *this)

{
  this->IsOnline = false;
  this->IsMembershipPermission = false;
  this->IsGuildSettingPermission = false;
  this->IsGuildMoneyPermission = false;
  this->PlyaerUID = 0;
  ::FString::Empty(&this->NickName);
  this->Grade = GuildMemberGradeType_None;
  this->Level = 0;
  this->ZoneID = 0;
  this->LastLogoutTime = 0.0;
  this->PendingLeftTime = 0.0;
  return;
}

// SetMemberData @ 14bacd4e0

void __thiscall
UDS_GuildMemberData::SetMemberData(UDS_GuildMemberData *this,ChangeGuildMemberGradeInfo *param_1)

{
  this->Grade = (param_1->_impl_).new_grade_;
  return;
}

// SetMemberData @ 14bacd4f0

void __thiscall
UDS_GuildMemberData::SetMemberData(UDS_GuildMemberData *this,GuildMemberRes *param_1)

{
  SqlGuildMemberTable *pSVar1;
  SqlGuildMemberTable *pSVar2;
  SqlGuildMemberTable local_48;
  
  this->IsOnline = false;
  this->IsMembershipPermission = false;
  this->IsGuildSettingPermission = false;
  this->IsGuildMoneyPermission = false;
  this->PlyaerUID = 0;
  ::FString::Empty(&this->NickName);
  this->Grade = GuildMemberGradeType_None;
  this->Level = 0;
  this->ZoneID = 0;
  this->LastLogoutTime = 0.0;
  this->PendingLeftTime = 0.0;
  pSVar1 = (param_1->_impl_).guild_member_;
  pSVar2 = &ds_guild::_SqlGuildMemberTable_default_instance_._instance;
  if (pSVar1 != (SqlGuildMemberTable *)0x0) {
    pSVar2 = pSVar1;
  }
  ds_guild::SqlGuildMemberTable::SqlGuildMemberTable(&local_48,(Arena *)0x0,pSVar2);
  local_48._padding_ = (longlong)&___7SqlGuildMemberTable_ds_guild__6B_;
  this->PlyaerUID = local_48._impl_.player_uid_;
  this->Grade = local_48._impl_.grade_;
  this->IsMembershipPermission = (param_1->_impl_).invite_permission_ != 0;
  this->IsGuildSettingPermission = (param_1->_impl_).setting_permission_ != 0;
  this->IsGuildMoneyPermission = (param_1->_impl_).guild_money_permission_ != 0;
  ds_guild::SqlGuildMemberTable::~SqlGuildMemberTable(&local_48);
  return;
}

// SetMemberPendingData @ 14bacd5a0

void __thiscall
UDS_GuildMemberData::SetMemberPendingData(UDS_GuildMemberData *this,GuildPendingInfo *param_1)

{
  Timestamp *pTVar1;
  Timestamp *pTVar2;
  
  this->IsOnline = false;
  this->IsMembershipPermission = false;
  this->IsGuildSettingPermission = false;
  this->IsGuildMoneyPermission = false;
  this->PlyaerUID = 0;
  ::FString::Empty(&this->NickName);
  this->PendingLeftTime = 0.0;
  this->Grade = GuildMemberGradeType_None;
  this->Level = 0;
  this->ZoneID = 0;
  this->LastLogoutTime = 0.0;
  this->PlyaerUID = (param_1->_impl_).player_uid_;
  pTVar1 = (param_1->_impl_).expired_time_;
  pTVar2 = (Timestamp *)&google::protobuf::_Timestamp_default_instance_;
  if (pTVar1 != (Timestamp *)0x0) {
    pTVar2 = pTVar1;
  }
  this->PendingLeftTime = (double)(pTVar2->_impl_).seconds_;
  return;
}

