// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// SetPlayerName_WrapperImpl @ 14b6d4ca0

void __cdecl UDS_VM_RaidPartyMemberInfo::SetPlayerName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  ::FString::operator=((FString *)((longlong)param_1 + 0xa0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::PlayerName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PlayerName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbImpossibleState_WrapperImpl @ 14b6d4cb0

void __cdecl
UDS_VM_RaidPartyMemberInfo::SetbImpossibleState_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xb0) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bImpossibleState.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bImpossibleState.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbConnectReadyState_WrapperImpl @ 14b6d4cc0

void __cdecl
UDS_VM_RaidPartyMemberInfo::SetbConnectReadyState_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bConnectReadyState.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bConnectReadyState.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbIsLeader_WrapperImpl @ 14b6d4cd0

void __cdecl UDS_VM_RaidPartyMemberInfo::SetbIsLeader_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbIsValid_WrapperImpl @ 14b6d4ce0

void __cdecl UDS_VM_RaidPartyMemberInfo::SetbIsValid_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xb3) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsValid.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsValid.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetMainCharID_WrapperImpl @ 14b6d4cf0

void __cdecl UDS_VM_RaidPartyMemberInfo::SetMainCharID_WrapperImpl(void *param_1,void *param_2)

{
  SetMainCharID(param_1,*(int *)param_2);
  return;
}

// SetMainCharLevel_WrapperImpl @ 14b6d4d00

void __cdecl UDS_VM_RaidPartyMemberInfo::SetMainCharLevel_WrapperImpl(void *param_1,void *param_2)

{
  SetMainCharLevel(param_1,*(int *)param_2);
  return;
}

// StaticClass @ 14b6d4dd0

UClass * __cdecl UDS_VM_RaidPartyMemberInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyMemberInfo",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyMemberInfo,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_RaidPartyMemberInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyMemberInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberInfo.InnerSingleton;
}

// UDS_VM_RaidPartyMemberInfo @ 14b6d7900

UDS_VM_RaidPartyMemberInfo * __thiscall
UDS_VM_RaidPartyMemberInfo::UDS_VM_RaidPartyMemberInfo
          (UDS_VM_RaidPartyMemberInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->PartyMemberSlotIdx = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyMemberInfo__6B_;
  (this->PlayerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerName).Data.ArrayNum = 0;
  (this->PlayerName).Data.ArrayMax = 0;
  this->bIsLeader = false;
  this->bIsValid = false;
  (this->FixedText_Lv).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Lv).StringEnumTableNameID.Number = 0;
  (this->FixedText_Lv).DateTime.Ticks = 0;
  (this->FixedText_Lv).TimeSpan.Ticks = 0;
  (this->FixedText_Lv).TimeExpressionType = None;
  (this->FixedText_Lv).IsExpression = false;
  (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Lv).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).FormatArgs.ArrayNum = 0;
  (this->FixedText_Lv).FormatArgs.ArrayMax = 0;
  this->PartyMemberUID = 0;
  this->bUsePartyMemberUID = false;
  this->RaidPartyUID = 0;
  (this->FixedText_Lv).StringTableType = StringUi;
  (this->FixedText_Lv).StringTableID = 0x27d9;
  return this;
}

// UDS_VM_RaidPartyMemberInfo @ 14b6d79d0

UDS_VM_RaidPartyMemberInfo * __thiscall
UDS_VM_RaidPartyMemberInfo::UDS_VM_RaidPartyMemberInfo
          (UDS_VM_RaidPartyMemberInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->PartyMemberSlotIdx = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyMemberInfo__6B_;
  (this->PlayerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerName).Data.ArrayNum = 0;
  (this->PlayerName).Data.ArrayMax = 0;
  this->bIsLeader = false;
  this->bIsValid = false;
  (this->FixedText_Lv).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Lv).StringEnumTableNameID.Number = 0;
  (this->FixedText_Lv).DateTime.Ticks = 0;
  (this->FixedText_Lv).TimeSpan.Ticks = 0;
  (this->FixedText_Lv).TimeExpressionType = None;
  (this->FixedText_Lv).IsExpression = false;
  (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Lv).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).FormatArgs.ArrayNum = 0;
  (this->FixedText_Lv).FormatArgs.ArrayMax = 0;
  this->PartyMemberUID = 0;
  this->bUsePartyMemberUID = false;
  this->RaidPartyUID = 0;
  (this->FixedText_Lv).StringTableType = StringUi;
  (this->FixedText_Lv).StringTableID = 0x27d9;
  return this;
}

// ~UDS_VM_RaidPartyMemberInfo @ 14b6d9eb0

void __thiscall
UDS_VM_RaidPartyMemberInfo::~UDS_VM_RaidPartyMemberInfo(UDS_VM_RaidPartyMemberInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyMemberInfo__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Lv).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Lv).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dca60

IClassDescriptor * __thiscall
UDS_VM_RaidPartyMemberInfo::GetFieldNotificationDescriptor(UDS_VM_RaidPartyMemberInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RaidPartyMemberInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd380

UClass * __cdecl UDS_VM_RaidPartyMemberInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyMemberInfo",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyMemberInfo,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_RaidPartyMemberInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyMemberInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyMemberInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RaidPartyMemberInfo @ 14b6dde80

void __cdecl UDS_VM_RaidPartyMemberInfo::StaticRegisterNativesUDS_VM_RaidPartyMemberInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_RaidPartyMemberInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsValidCharInfo @ 14b6df2c0

void __cdecl
UDS_VM_RaidPartyMemberInfo::execIsValidCharInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsValidCharInfo((UDS_VM_RaidPartyMemberInfo *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// BindModel @ 14be12de0

void __thiscall UDS_VM_RaidPartyMemberInfo::BindModel(UDS_VM_RaidPartyMemberInfo *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_RaidPartyMemberInfo>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyInfo,(UDS_VM_RaidPartyMemberInfo *)&stack0x00000010,
               (pmf_9e887b05 *)this);
  }
  return;
}

// GetRaidPartyMemberInfo @ 14be22140

FDS_RaidPartyMemberInfo * __thiscall
UDS_VM_RaidPartyMemberInfo::GetRaidPartyMemberInfo(UDS_VM_RaidPartyMemberInfo *this)

{
  FDS_RaidPartyRepo *pFVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  
  if (this->bUsePartyMemberUID == true) {
    pFVar1 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar2 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(pFVar1,this->PartyMemberUID);
    return pFVar2;
  }
  pFVar1 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar2 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(pFVar1,this->PartyMemberSlotIdx);
  return pFVar2;
}

// IsValidCharInfo @ 14be27d90

bool __thiscall UDS_VM_RaidPartyMemberInfo::IsValidCharInfo(UDS_VM_RaidPartyMemberInfo *this)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDS_RaidPartyMemberInfo *this_00;
  
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    this_00 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar2);
    if (0 < this_00->PlayerUID) {
      pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar2->RaidPartyInfo).DungeonId,true);
      bVar1 = FDS_RaidPartyMemberInfo::IsValidCharInfo(this_00);
      return bVar1;
    }
  }
  return false;
}

// OnChangedRaidPartyInfo @ 14be2afe0

void __thiscall UDS_VM_RaidPartyMemberInfo::OnChangedRaidPartyInfo(UDS_VM_RaidPartyMemberInfo *this)

{
  int *piVar1;
  FString *this_00;
  int iVar2;
  longlong lVar3;
  ForAnyElementType _Src;
  FDS_RaidPartyRepo *pFVar4;
  FDS_RaidPartyMemberInfo *pFVar5;
  FName local_38;
  int local_30;
  FString local_28;
  
  if (this->bUsePartyMemberUID == true) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar5 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(pFVar4,this->PartyMemberUID);
  }
  else {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar5 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(pFVar4,this->PartyMemberSlotIdx);
  }
  this_00 = &this->PlayerName;
  if (pFVar5->PlayerUID < 1) {
    ::FString::FString(&local_28,L"");
    _Src.Data = local_28.Data.AllocatorInstance.Data;
    if (this_00 != &local_28) {
      piVar1 = &(this->PlayerName).Data.ArrayMax;
      iVar2 = *piVar1;
      (this->PlayerName).Data.ArrayNum = local_28.Data.ArrayNum;
      if ((local_28.Data.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,iVar2,(ForAnyElementType *)this_00,
                   local_28.Data.ArrayNum,piVar1);
        if (local_28.Data.ArrayNum != 0) {
          memcpy((this_00->Data).AllocatorInstance.Data,_Src.Data,
                 (longlong)local_28.Data.ArrayNum * 2);
        }
      }
    }
    local_30 = FFieldNotificationClassDescriptor::PlayerName.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::PlayerName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this->bConnectReadyState = false;
    local_30 = FFieldNotificationClassDescriptor::bConnectReadyState.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::bConnectReadyState.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    this->bImpossibleState = false;
    local_30 = FFieldNotificationClassDescriptor::bImpossibleState.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::bImpossibleState.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    this->bIsLeader = false;
    local_30 = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    this->bIsValid = false;
    local_38 = FFieldNotificationClassDescriptor::bIsValid.FieldName;
    local_30 = FFieldNotificationClassDescriptor::bIsValid.BitNumber;
  }
  else {
    this->bIsValid = true;
    local_30 = FFieldNotificationClassDescriptor::bIsValid.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::bIsValid.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    lVar3 = pFVar5->PlayerUID;
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    this->bIsLeader = lVar3 == (pFVar4->RaidPartyInfo).LeaderUID;
    local_30 = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    ::FString::operator=(this_00,&pFVar5->NickName);
    local_30 = FFieldNotificationClassDescriptor::PlayerName.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::PlayerName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    switch(pFVar5->MemberState) {
    default:
      this->bConnectReadyState = false;
      local_30 = FFieldNotificationClassDescriptor::bConnectReadyState.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::bConnectReadyState.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      this->bImpossibleState = false;
      local_38 = FFieldNotificationClassDescriptor::bImpossibleState.FieldName;
      local_30 = FFieldNotificationClassDescriptor::bImpossibleState.BitNumber;
      break;
    case Ready:
      this->bImpossibleState = false;
      local_30 = FFieldNotificationClassDescriptor::bImpossibleState.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::bImpossibleState.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      this->bConnectReadyState = this->bIsLeader != true;
      local_38 = FFieldNotificationClassDescriptor::bConnectReadyState.FieldName;
      local_30 = FFieldNotificationClassDescriptor::bConnectReadyState.BitNumber;
      break;
    case OffLine:
      this->bImpossibleState = true;
      local_30 = FFieldNotificationClassDescriptor::bImpossibleState.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::bImpossibleState.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      this->bConnectReadyState = false;
      local_38 = FFieldNotificationClassDescriptor::bConnectReadyState.FieldName;
      local_30 = FFieldNotificationClassDescriptor::bConnectReadyState.BitNumber;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    local_38 = FFieldNotificationClassDescriptor::IsValidCharInfo.FieldName;
    local_30 = FFieldNotificationClassDescriptor::IsValidCharInfo.BitNumber;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// OnSetViewModel @ 14be3d940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidPartyMemberInfo::OnSetViewModel
          (UDS_VM_RaidPartyMemberInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ViewModelContext *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1b8 [32];
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext_RaidPartyMemberInfo,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = param_1->Object;
  if (pFVar2 == (FDS_ViewModelContext *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_RaidPartyMemberInfo::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x1e,L"InViewModelContext is nullptr.");
      if ((FDS_ViewModelContext_RaidPartyMemberInfo *)local_148._padding_ !=
          (FDS_ViewModelContext_RaidPartyMemberInfo *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_158.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158.Object = pFVar2;
    SafeCast<FDS_ViewModelContext_RaidPartyMemberInfo>(&local_168,&local_158);
    if (local_168.Object == (FDS_ViewModelContext_RaidPartyMemberInfo *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = (longlong)local_168.Object;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_RaidPartyMemberInfo::OnSetViewModel",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x25,L"context is nullptr.");
        if ((FDS_ViewModelContext_RaidPartyMemberInfo *)local_148._padding_ !=
            (FDS_ViewModelContext_RaidPartyMemberInfo *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      this->RaidPartyUID = (local_168.Object)->RaidPartyUID;
      this->bUsePartyMemberUID = (local_168.Object)->bUsePartyMemberUID;
      this->PartyMemberUID = (local_168.Object)->PartyMemberUID;
      this->PartyMemberSlotIdx = (local_168.Object)->PartyMemberSlotIndex;
      UpdateRaidPartyMemberInfo(this);
      this->MainCharID = (local_168.Object)->CharID;
      local_180 = FFieldNotificationClassDescriptor::MainCharID.BitNumber;
      local_188 = FFieldNotificationClassDescriptor::MainCharID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
      this->MainCharLevel = (local_168.Object)->CharLevel;
      local_170 = FFieldNotificationClassDescriptor::MainCharLevel.BitNumber;
      local_178 = FFieldNotificationClassDescriptor::MainCharLevel.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetConnectReadyState @ 14be4a050

void __thiscall
UDS_VM_RaidPartyMemberInfo::SetConnectReadyState(UDS_VM_RaidPartyMemberInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bConnectReadyState = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bConnectReadyState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bConnectReadyState.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetImpossibleState @ 14be4b680

void __thiscall
UDS_VM_RaidPartyMemberInfo::SetImpossibleState(UDS_VM_RaidPartyMemberInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bImpossibleState = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bImpossibleState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bImpossibleState.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsLeader @ 14be4c090

void __thiscall
UDS_VM_RaidPartyMemberInfo::SetIsLeader(UDS_VM_RaidPartyMemberInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsLeader = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsValid @ 14be4d0e0

void __thiscall
UDS_VM_RaidPartyMemberInfo::SetIsValid(UDS_VM_RaidPartyMemberInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsValid = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsValid.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsValid.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMainCharID @ 14be4d940

void __thiscall
UDS_VM_RaidPartyMemberInfo::SetMainCharID(UDS_VM_RaidPartyMemberInfo *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->MainCharID = param_1;
  local_10 = FFieldNotificationClassDescriptor::MainCharID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainCharID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMainCharLevel @ 14be4da70

void __thiscall
UDS_VM_RaidPartyMemberInfo::SetMainCharLevel(UDS_VM_RaidPartyMemberInfo *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->MainCharLevel = param_1;
  local_10 = FFieldNotificationClassDescriptor::MainCharLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainCharLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetPlayerName @ 14be4f1b0

void __thiscall
UDS_VM_RaidPartyMemberInfo::SetPlayerName(UDS_VM_RaidPartyMemberInfo *this,FString *param_1)

{
  FName local_18;
  int local_10;
  
  ::FString::operator=(&this->PlayerName,param_1);
  local_10 = FFieldNotificationClassDescriptor::PlayerName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14be55ad0

void __thiscall UDS_VM_RaidPartyMemberInfo::UnbindModel(UDS_VM_RaidPartyMemberInfo *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    return;
  }
  return;
}

// UpdateRaidPartyMemberInfo @ 14be59420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RaidPartyMemberInfo::UpdateRaidPartyMemberInfo(UDS_VM_RaidPartyMemberInfo *this)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UDS_DungeonManager *this_00;
  RaidPartyMemberInfo *pRVar5;
  undefined1 auStackY_3b8 [32];
  FName local_378;
  undefined8 local_370;
  undefined4 local_368;
  RaidPartyMemberInfo local_358;
  RaidPartyInfo local_318;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2b8;
  FDS_RaidPartyMemberInfo local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if (this->RaidPartyUID == 0) {
    (**(code **)(this->_padding_ + 0x2f0))();
    OnChangedRaidPartyInfo(this);
  }
  else if (this->PartyMemberUID == 0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_2b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_2b8,"UDS_VM_RaidPartyMemberInfo::UpdateRaidPartyMemberInfo",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_2b8.Ptr,0x95,L"PartyMemberUID is 0.");
      if ((void *)local_2b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2b8._padding_);
      }
    }
  }
  else {
    this_00 = UDS_DungeonManager::GetInst();
    if (this_00 == (UDS_DungeonManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_2b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_2b8,"UDS_VM_RaidPartyMemberInfo::UpdateRaidPartyMemberInfo",0x35,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_2b8.Ptr,0x9d,L"dungeonManager is nullptr.");
        if ((void *)local_2b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_2b8._padding_);
        }
      }
    }
    else {
      local_378.ComparisonIndex.Value = 0;
      local_378.Number = 0;
      local_370 = 0;
      local_368 = 0;
      UDS_DungeonManager::GetRaidPartyListDetailInfo
                (this_00,&local_318,this->RaidPartyUID,
                 (TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                  *)&local_378);
      pRVar5 = UDS_DungeonManager::GetRaidPartyListDetailMemberInfo
                         (this_00,&local_358,this->RaidPartyUID,this->PartyMemberUID);
      FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo(&local_198,pRVar5);
      ds_proto::RaidPartyMemberInfo::~RaidPartyMemberInfo(&local_358);
      if (local_198.PlayerUID < 1) {
        this->bIsValid = false;
        local_370._0_4_ = FFieldNotificationClassDescriptor::bIsValid.BitNumber;
        local_378 = FFieldNotificationClassDescriptor::bIsValid.FieldName;
        (**(code **)(this->_padding_ + 0x38))();
      }
      else {
        this->bIsValid = true;
        local_370._0_4_ = FFieldNotificationClassDescriptor::bIsValid.BitNumber;
        local_378 = FFieldNotificationClassDescriptor::bIsValid.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_378);
        pFVar2 = &this->PlayerName;
        if (pFVar2 != &local_198.NickName) {
          piVar1 = &(this->PlayerName).Data.ArrayMax;
          iVar3 = *piVar1;
          (this->PlayerName).Data.ArrayNum = local_198.NickName.Data.ArrayNum;
          if ((local_198.NickName.Data.ArrayNum == 0) && (iVar3 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_198.NickName.Data.ArrayNum,iVar3,(ForAnyElementType *)pFVar2,
                       local_198.NickName.Data.ArrayNum,piVar1);
            if (local_198.NickName.Data.ArrayNum != 0) {
              memcpy((pFVar2->Data).AllocatorInstance.Data,
                     local_198.NickName.Data.AllocatorInstance.Data,
                     (longlong)local_198.NickName.Data.ArrayNum * 2);
            }
          }
        }
        local_370._0_4_ = FFieldNotificationClassDescriptor::PlayerName.BitNumber;
        local_378 = FFieldNotificationClassDescriptor::PlayerName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_378);
        this->bIsLeader = local_318._impl_.leader_uid_ == local_198.PlayerUID;
        local_370._0_4_ = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
        local_378 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_378);
      }
      FDS_RaidPartyMemberInfo::~FDS_RaidPartyMemberInfo(&local_198);
      ds_proto::RaidPartyInfo::~RaidPartyInfo(&local_318);
    }
  }
  return;
}

