// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// SetPlayerUID_WrapperImpl @ 14b6bbda0

void __cdecl UDS_VM_PlayerSearchInfo::SetPlayerUID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xa0) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 0xa0) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetNickName_WrapperImpl @ 14b6bbdb0

void __cdecl UDS_VM_PlayerSearchInfo::SetNickName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::NickName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NickName.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0xb0);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0xa8),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 0xa8),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetWorldID_WrapperImpl @ 14b6bbdc0

void __cdecl UDS_VM_PlayerSearchInfo::SetWorldID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::WorldID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::WorldID.FieldName;
  if (*(int *)((longlong)param_1 + 0xb8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xb8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetPlayerGrade_WrapperImpl @ 14b6bbdd0

void __cdecl UDS_VM_PlayerSearchInfo::SetPlayerGrade_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::PlayerGrade.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PlayerGrade.FieldName;
  if (*(int *)((longlong)param_1 + 0xbc) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xbc) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetGuildUID_WrapperImpl @ 14b6bbde0

void __cdecl UDS_VM_PlayerSearchInfo::SetGuildUID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::GuildUID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::GuildUID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xc0) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 0xc0) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetGuildName_WrapperImpl @ 14b6bbdf0

void __cdecl UDS_VM_PlayerSearchInfo::SetGuildName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::GuildName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::GuildName.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0xd0);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 200),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 200),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetGuildIcon_WrapperImpl @ 14b6bbe00

void __cdecl UDS_VM_PlayerSearchInfo::SetGuildIcon_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::GuildIcon.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::GuildIcon.FieldName;
  if (*(int *)((longlong)param_1 + 0xd8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xd8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMainCharId_WrapperImpl @ 14b6bbe10

void __cdecl UDS_VM_PlayerSearchInfo::SetMainCharId_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MainCharId.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MainCharId.FieldName;
  if (*(int *)((longlong)param_1 + 0xdc) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xdc) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMainCharLevel_WrapperImpl @ 14b6bbe20

void __cdecl UDS_VM_PlayerSearchInfo::SetMainCharLevel_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MainCharLevel.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MainCharLevel.FieldName;
  if (*(int *)((longlong)param_1 + 0xe0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xe0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMainCharSkin_WrapperImpl @ 14b6bbe30

void __cdecl UDS_VM_PlayerSearchInfo::SetMainCharSkin_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MainCharSkin.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MainCharSkin.FieldName;
  if (*(int *)((longlong)param_1 + 0xe4) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xe4) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMainCharCombatPower_WrapperImpl @ 14b6bbe40

void __cdecl
UDS_VM_PlayerSearchInfo::SetMainCharCombatPower_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MainCharCombatPower.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MainCharCombatPower.FieldName;
  if (*(float *)param_2 != *(float *)((longlong)param_1 + 0xe8)) {
    *(float *)((longlong)param_1 + 0xe8) = *(float *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetMainCharIcon_WrapperImpl @ 14b6bbe50

void __cdecl UDS_VM_PlayerSearchInfo::SetMainCharIcon_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MainCharIcon.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MainCharIcon.FieldName;
  if (*(int *)((longlong)param_1 + 0xec) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xec) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMainCharName_WrapperImpl @ 14b6bbe60

void __cdecl UDS_VM_PlayerSearchInfo::SetMainCharName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MainCharName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MainCharName.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0xf8);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0xf0),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 0xf0),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetbIsLogout_WrapperImpl @ 14b6bbe70

void __cdecl UDS_VM_PlayerSearchInfo::SetbIsLogout_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bIsLogout.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsLogout.FieldName;
  if (*(char *)((longlong)param_1 + 0x100) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x100) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6bbe80

UClass * __cdecl UDS_VM_PlayerSearchInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerSearchInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerSearchInfo",
               &Z_Registration_Info_UClass_UDS_VM_PlayerSearchInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerSearchInfo,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerSearchInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerSearchInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerSearchInfo.InnerSingleton;
}

// UDS_VM_PlayerSearchInfo @ 14b6bdaf0

UDS_VM_PlayerSearchInfo * __thiscall
UDS_VM_PlayerSearchInfo::UDS_VM_PlayerSearchInfo
          (UDS_VM_PlayerSearchInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSearchInfo__6B_;
  (this->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = 0;
  (this->NickName).Data.ArrayMax = 0;
  (this->GuildName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildName).Data.ArrayNum = 0;
  (this->GuildName).Data.ArrayMax = 0;
  (this->MainCharName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MainCharName).Data.ArrayNum = 0;
  (this->MainCharName).Data.ArrayMax = 0;
  (this->LoginDateTime).Ticks = 0;
  (this->LogoutDateTime).Ticks = 0;
  return this;
}

// UDS_VM_PlayerSearchInfo @ 14b6bdb70

UDS_VM_PlayerSearchInfo * __thiscall
UDS_VM_PlayerSearchInfo::UDS_VM_PlayerSearchInfo
          (UDS_VM_PlayerSearchInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSearchInfo__6B_;
  (this->NickName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NickName).Data.ArrayNum = 0;
  (this->NickName).Data.ArrayMax = 0;
  (this->GuildName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildName).Data.ArrayNum = 0;
  (this->GuildName).Data.ArrayMax = 0;
  (this->MainCharName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MainCharName).Data.ArrayNum = 0;
  (this->MainCharName).Data.ArrayMax = 0;
  (this->LoginDateTime).Ticks = 0;
  (this->LogoutDateTime).Ticks = 0;
  return this;
}

// ~UDS_VM_PlayerSearchInfo @ 14b6bf340

void __thiscall UDS_VM_PlayerSearchInfo::~UDS_VM_PlayerSearchInfo(UDS_VM_PlayerSearchInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSearchInfo__6B_;
  pFVar1 = (this->MainCharName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GuildName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NickName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0d90

IClassDescriptor * __thiscall
UDS_VM_PlayerSearchInfo::GetFieldNotificationDescriptor(UDS_VM_PlayerSearchInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PlayerSearchInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c13a0

UClass * __cdecl UDS_VM_PlayerSearchInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerSearchInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerSearchInfo",
               &Z_Registration_Info_UClass_UDS_VM_PlayerSearchInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerSearchInfo,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerSearchInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerSearchInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerSearchInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PlayerSearchInfo @ 14b6c19c0

void __cdecl UDS_VM_PlayerSearchInfo::StaticRegisterNativesUDS_VM_PlayerSearchInfo(void)

{
  return;
}

// OnSetViewModel @ 14be3c3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PlayerSearchInfo::OnSetViewModel
          (UDS_VM_PlayerSearchInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TSharedPtr<FDS_ViewModelContext_Player,1> local_168;
  FName local_158;
  int local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  ResetPlayerInfo(this);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Player>(&local_168,&local_148);
  iVar3 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
  if (local_168.Object == (FDS_ViewModelContext_Player *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14be3c540;
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_PlayerSearchInfo::OnSetViewModel",0x27,Yes);
    pwVar6 = L"playerContext is nullptr";
    uVar5 = 0x14;
  }
  else {
    if (this->PlayerUID != (local_168.Object)->PlayerUID) {
      this->PlayerUID = (local_168.Object)->PlayerUID;
      local_150 = iVar3;
      local_158 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    if (0 < this->PlayerUID) {
      UpdatePlayerInfo(this);
      goto LAB_14be3c540;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14be3c540;
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_PlayerSearchInfo::OnSetViewModel",0x27,Yes);
    pwVar6 = L"PlayerUID is invalid";
    uVar5 = 0x1b;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14be3c540:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ResetPlayerInfo @ 14be481f0

void __thiscall UDS_VM_PlayerSearchInfo::ResetPlayerInfo(UDS_VM_PlayerSearchInfo *this)

{
  int iVar1;
  FString local_18;
  
  iVar1 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::PlayerUID.FieldName;
  if (this->PlayerUID != 0) {
    this->PlayerUID = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  SetNickName(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::WorldID.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::WorldID.FieldName;
  if (this->WorldID != 0) {
    this->WorldID = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar1 = FFieldNotificationClassDescriptor::PlayerGrade.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::PlayerGrade.FieldName;
  if (this->PlayerGrade != 0) {
    this->PlayerGrade = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar1 = FFieldNotificationClassDescriptor::GuildUID.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::GuildUID.FieldName;
  if (this->GuildUID != 0) {
    this->GuildUID = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  SetGuildName(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::GuildIcon.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::GuildIcon.FieldName;
  if (this->GuildIcon != 0) {
    this->GuildIcon = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar1 = FFieldNotificationClassDescriptor::MainCharId.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::MainCharId.FieldName;
  if (this->MainCharId != 0) {
    this->MainCharId = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar1 = FFieldNotificationClassDescriptor::MainCharLevel.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::MainCharLevel.FieldName;
  if (this->MainCharLevel != 0) {
    this->MainCharLevel = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar1 = FFieldNotificationClassDescriptor::MainCharSkin.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::MainCharSkin.FieldName;
  if (this->MainCharSkin != 0) {
    this->MainCharSkin = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar1 = FFieldNotificationClassDescriptor::MainCharCombatPower.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::MainCharCombatPower.FieldName;
  if (this->MainCharCombatPower != 0.0) {
    this->MainCharCombatPower = 0.0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar1 = FFieldNotificationClassDescriptor::MainCharIcon.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::MainCharIcon.FieldName;
  if (this->MainCharIcon != 0) {
    this->MainCharIcon = 0;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  SetMainCharName(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::bIsLogout.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::bIsLogout.FieldName;
  if (this->bIsLogout != false) {
    this->bIsLogout = false;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildIcon @ 14be4b460

void __thiscall UDS_VM_PlayerSearchInfo::SetGuildIcon(UDS_VM_PlayerSearchInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GuildIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GuildIcon.FieldName;
  if (this->GuildIcon != *param_1) {
    this->GuildIcon = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildName @ 14be4b4b0

void __thiscall
UDS_VM_PlayerSearchInfo::SetGuildName(UDS_VM_PlayerSearchInfo *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::GuildName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::GuildName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->GuildName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->GuildName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->GuildName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGuildUID @ 14be4b560

void __thiscall UDS_VM_PlayerSearchInfo::SetGuildUID(UDS_VM_PlayerSearchInfo *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GuildUID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GuildUID.FieldName;
  if (this->GuildUID != *param_1) {
    this->GuildUID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsLogout @ 14be4c0d0

void __thiscall UDS_VM_PlayerSearchInfo::SetIsLogout(UDS_VM_PlayerSearchInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsLogout.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsLogout.FieldName;
  if (this->bIsLogout != *param_1) {
    this->bIsLogout = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainCharCombatPower @ 14be4d8f0

void __thiscall
UDS_VM_PlayerSearchInfo::SetMainCharCombatPower(UDS_VM_PlayerSearchInfo *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MainCharCombatPower.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainCharCombatPower.FieldName;
  if (*param_1 != this->MainCharCombatPower) {
    this->MainCharCombatPower = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainCharIcon @ 14be4d980

void __thiscall UDS_VM_PlayerSearchInfo::SetMainCharIcon(UDS_VM_PlayerSearchInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MainCharIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainCharIcon.FieldName;
  if (this->MainCharIcon != *param_1) {
    this->MainCharIcon = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainCharId @ 14be4d9d0

void __thiscall UDS_VM_PlayerSearchInfo::SetMainCharId(UDS_VM_PlayerSearchInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MainCharId.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainCharId.FieldName;
  if (this->MainCharId != *param_1) {
    this->MainCharId = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainCharLevel @ 14be4da20

void __thiscall
UDS_VM_PlayerSearchInfo::SetMainCharLevel(UDS_VM_PlayerSearchInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MainCharLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainCharLevel.FieldName;
  if (this->MainCharLevel != *param_1) {
    this->MainCharLevel = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainCharName @ 14be4dab0

void __thiscall
UDS_VM_PlayerSearchInfo::SetMainCharName(UDS_VM_PlayerSearchInfo *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::MainCharName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::MainCharName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->MainCharName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->MainCharName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->MainCharName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainCharSkin @ 14be4db60

void __thiscall UDS_VM_PlayerSearchInfo::SetMainCharSkin(UDS_VM_PlayerSearchInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MainCharSkin.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainCharSkin.FieldName;
  if (this->MainCharSkin != *param_1) {
    this->MainCharSkin = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetNickName @ 14be4e530

void __thiscall UDS_VM_PlayerSearchInfo::SetNickName(UDS_VM_PlayerSearchInfo *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::NickName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::NickName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->NickName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->NickName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->NickName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPlayerGrade @ 14be4f160

void __thiscall UDS_VM_PlayerSearchInfo::SetPlayerGrade(UDS_VM_PlayerSearchInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PlayerGrade.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerGrade.FieldName;
  if (this->PlayerGrade != *param_1) {
    this->PlayerGrade = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPlayerUID @ 14be4f200

void __thiscall UDS_VM_PlayerSearchInfo::SetPlayerUID(UDS_VM_PlayerSearchInfo *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
  if (this->PlayerUID != *param_1) {
    this->PlayerUID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetWorldID @ 14be52ed0

void __thiscall UDS_VM_PlayerSearchInfo::SetWorldID(UDS_VM_PlayerSearchInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::WorldID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WorldID.FieldName;
  if (this->WorldID != *param_1) {
    this->WorldID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdatePlayerInfo @ 14be58af0

void __thiscall UDS_VM_PlayerSearchInfo::UpdatePlayerInfo(UDS_VM_PlayerSearchInfo *this)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FName FVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FDS_PlayerRepo *pFVar10;
  UDS_DataManager *pUVar11;
  Player *pPVar12;
  FDS_CharacterBaseTableRow *pFVar13;
  FString *pFVar14;
  FDS_CharacterSkinTableRow *pFVar15;
  FDateTime FVar16;
  FDS_PlayerRepo *pFVar17;
  char *pcVar18;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FString local_38;
  FString local_28;
  
  pFVar17 = TDS_Singleton<FDS_PlayerRepo>::Inst;
  if (TDS_Singleton<FDS_PlayerRepo>::Inst == (FDS_PlayerRepo *)0x0) {
    pFVar10 = ::operator_new(0x28);
    pFVar17 = (FDS_PlayerRepo *)0x0;
    if (pFVar10 != (FDS_PlayerRepo *)0x0) {
      (pFVar10->SearchedPlayerNameList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar10->_padding_ = (longlong)&___7FDS_PlayerRepo__6B_;
      (pFVar10->SearchedPlayerNameList).ArrayNum = 0;
      (pFVar10->SearchedPlayerNameList).ArrayMax = 0;
      (pFVar10->PlayerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->PlayerList).ArrayNum = 0;
      (pFVar10->PlayerList).ArrayMax = 0;
      pFVar17 = pFVar10;
    }
    TDS_Singleton<FDS_PlayerRepo>::Inst = pFVar17;
    pUVar11 = UDS_DataManager::GetInst();
    pFVar10 = TDS_Singleton<FDS_PlayerRepo>::Inst;
    if (pUVar11 == (UDS_DataManager *)0x0) {
      if (TDS_Singleton<FDS_PlayerRepo>::Inst != (FDS_PlayerRepo *)0x0) {
        DestructItems<misc::Player,int>
                  ((Player *)
                   (TDS_Singleton<FDS_PlayerRepo>::Inst->PlayerList).AllocatorInstance.Data,
                   (TDS_Singleton<FDS_PlayerRepo>::Inst->PlayerList).ArrayNum);
        pFVar3 = (pFVar10->PlayerList).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        DestructItems<FString,int>
                  ((FString *)(pFVar10->SearchedPlayerNameList).AllocatorInstance.Data,
                   (pFVar10->SearchedPlayerNameList).ArrayNum);
        pFVar3 = (pFVar10->SearchedPlayerNameList).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::operator_delete(pFVar10,0x28);
      }
      TDS_Singleton<FDS_PlayerRepo>::Inst = (FDS_PlayerRepo *)0x0;
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4219184397653377064>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                         ,0x28,"false");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = &TDS_Singleton<FDS_PlayerRepo>::Empty;
    }
    else {
      iVar9 = (pUVar11->RepoArray).ArrayNum;
      piVar1 = &(pUVar11->RepoArray).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pUVar11->RepoArray).AllocatorInstance,piVar1);
      }
      (pUVar11->RepoArray).ArrayNum = iVar9 + 1;
      *(FDS_PlayerRepo **)((pUVar11->RepoArray).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           pFVar17;
      pFVar17 = TDS_Singleton<FDS_PlayerRepo>::Inst;
    }
  }
  pPVar12 = FDS_PlayerRepo::FindCharTableByPlayerUID(pFVar17,this->PlayerUID);
  iVar9 = FFieldNotificationClassDescriptor::PlayerUID.BitNumber;
  FVar6 = FFieldNotificationClassDescriptor::PlayerUID.FieldName;
  lVar4 = (pPVar12->_impl_).player_uid_;
  if (lVar4 < 1) {
    ResetPlayerInfo(this);
  }
  else {
    if (this->PlayerUID != lVar4) {
      this->PlayerUID = lVar4;
      local_e0 = iVar9;
      local_e8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
    }
    pcVar18 = (char *)((ulonglong)(pPVar12->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    if (0xf < *(ulonglong *)(pcVar18 + 0x18)) {
      pcVar18 = *(char **)pcVar18;
    }
    ::FString::FString(&local_38,pcVar18);
    SetNickName(this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    iVar7 = FFieldNotificationClassDescriptor::WorldID.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::WorldID.FieldName;
    iVar9 = (pPVar12->_impl_).world_id_;
    if (this->WorldID != iVar9) {
      this->WorldID = iVar9;
      local_d0 = iVar7;
      local_d8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
    }
    iVar7 = FFieldNotificationClassDescriptor::PlayerGrade.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::PlayerGrade.FieldName;
    iVar9 = (pPVar12->_impl_).player_grade_;
    if (this->PlayerGrade != iVar9) {
      this->PlayerGrade = iVar9;
      local_c0 = iVar7;
      local_c8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    }
    iVar9 = FFieldNotificationClassDescriptor::GuildUID.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::GuildUID.FieldName;
    lVar4 = (pPVar12->_impl_).guild_uid_;
    if (this->GuildUID != lVar4) {
      this->GuildUID = lVar4;
      local_b0 = iVar9;
      local_b8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    }
    pcVar18 = (char *)((ulonglong)(pPVar12->_impl_).guild_name_.tagged_ptr_.ptr_ &
                      0xfffffffffffffffc);
    if (0xf < *(ulonglong *)(pcVar18 + 0x18)) {
      pcVar18 = *(char **)pcVar18;
    }
    ::FString::FString(&local_28,pcVar18);
    SetGuildName(this,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar7 = FFieldNotificationClassDescriptor::GuildIcon.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::GuildIcon.FieldName;
    iVar9 = (pPVar12->_impl_).guild_icon_;
    if (this->GuildIcon != iVar9) {
      this->GuildIcon = iVar9;
      local_a0 = iVar7;
      local_a8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    }
    iVar7 = FFieldNotificationClassDescriptor::MainCharId.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::MainCharId.FieldName;
    iVar9 = (pPVar12->_impl_).main_char_id_;
    if (this->MainCharId != iVar9) {
      this->MainCharId = iVar9;
      local_90 = iVar7;
      local_98 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    iVar7 = FFieldNotificationClassDescriptor::MainCharLevel.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::MainCharLevel.FieldName;
    iVar9 = (pPVar12->_impl_).main_char_level_;
    if (this->MainCharLevel != iVar9) {
      this->MainCharLevel = iVar9;
      local_80 = iVar7;
      local_88 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    iVar7 = FFieldNotificationClassDescriptor::MainCharSkin.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::MainCharSkin.FieldName;
    iVar9 = (pPVar12->_impl_).main_char_skin_;
    if (this->MainCharSkin != iVar9) {
      this->MainCharSkin = iVar9;
      local_70 = iVar7;
      local_78 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    iVar9 = FFieldNotificationClassDescriptor::MainCharCombatPower.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::MainCharCombatPower.FieldName;
    fVar2 = (pPVar12->_impl_).main_char_combat_power_;
    if (fVar2 != this->MainCharCombatPower) {
      this->MainCharCombatPower = fVar2;
      local_60 = iVar9;
      local_68 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
    pFVar13 = FDS_CharacterBaseTableRow::GetRef((longlong)(pPVar12->_impl_).main_char_id_,true);
    pFVar14 = (FString *)(**(code **)((pFVar13->ID_Name)._padding_ + 8))(&pFVar13->ID_Name);
    SetMainCharName(this,pFVar14);
    pFVar15 = FDS_CharacterSkinTableRow::GetRef((longlong)(pPVar12->_impl_).main_char_skin_,true);
    iVar9 = FFieldNotificationClassDescriptor::MainCharIcon.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::MainCharIcon.FieldName;
    if (this->MainCharIcon != pFVar15->ID_CardImg) {
      this->MainCharIcon = pFVar15->ID_CardImg;
      local_50 = iVar9;
      local_58 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    FVar16 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    (this->LoginDateTime).Ticks = *FVar16.Ticks;
    FVar16 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0x00000010);
    lVar4 = *(longlong *)FVar16.Ticks;
    (this->LogoutDateTime).Ticks = lVar4;
    local_40 = FFieldNotificationClassDescriptor::bIsLogout.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::bIsLogout.FieldName;
    bVar8 = (this->LoginDateTime).Ticks <= lVar4;
    if (this->bIsLogout != bVar8) {
      this->bIsLogout = bVar8;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
  }
  return;
}

