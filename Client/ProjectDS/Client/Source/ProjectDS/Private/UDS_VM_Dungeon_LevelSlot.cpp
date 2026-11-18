// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetCheckStateChangeEventField_WrapperImpl @ 14b635040

void __cdecl
UDS_VM_Dungeon_LevelSlot::SetCheckStateChangeEventField_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  bool bVar3;
  UDS_DungeonManager *this;
  FDS_RaidPartyRepo *pFVar4;
  FDS_DungeonBaseTableRow *pFVar5;
  FDS_DungeonBaseTableRow *pFVar6;
  FName FStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long64 lStack_68;
  int iStack_60;
  FString FStack_58;
  undefined1 uStack_48;
  ForAnyElementType FStack_40;
  int iStack_38;
  int iStack_34;
  long64 lStack_30;
  undefined1 uStack_28;
  int iStack_24;
  int iStack_20;
  
  this = UDS_DungeonManager::GetInst();
  if (this == (UDS_DungeonManager *)0x0) {
    return;
  }
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    lStack_68 = (pFVar4->RaidPartyInfo).RaidPartyUID;
    iStack_60 = (pFVar4->RaidPartyInfo).DungeonId;
    ::FString::FString(&FStack_58,&(pFVar4->RaidPartyInfo).PartyName);
    uStack_48 = (pFVar4->RaidPartyInfo).IsPassword;
    FStack_40.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar4->RaidPartyInfo).Members.ArrayNum;
    pFVar2 = (FDS_RaidPartyMemberInfo *)(pFVar4->RaidPartyInfo).Members.AllocatorInstance.Data;
    iStack_38 = iVar1;
    if (iVar1 == 0) {
      iStack_34 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,8,iVar1,0,&FStack_40,iVar1,&iStack_34);
      ConstructItems<FDS_RaidPartyMemberInfo,FDS_RaidPartyMemberInfo,int>
                (FStack_40.Data,pFVar2,iVar1);
    }
    lStack_30 = (pFVar4->RaidPartyInfo).LeaderUID;
    uStack_28 = (pFVar4->RaidPartyInfo).IsPublic;
    iStack_24 = (pFVar4->RaidPartyInfo).MemberCount;
    iStack_20 = (pFVar4->RaidPartyInfo).State;
    if (*(int *)((longlong)param_1 + 0xf8) == iStack_60) {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
    }
    else {
      pFVar5 = FDS_DungeonBaseTableRow::GetRef((longlong)*(int *)((longlong)param_1 + 0xf8),true);
      pFVar6 = FDS_DungeonBaseTableRow::GetRef((longlong)iStack_60,true);
      if (pFVar5->DungeonType != pFVar6->DungeonType) {
        DestructItems<FDS_RaidPartyMemberInfo,int>
                  ((FDS_RaidPartyMemberInfo *)FStack_40.Data,iStack_38);
        if ((FDS_RaidPartyMemberInfo *)FStack_40.Data != (FDS_RaidPartyMemberInfo *)0x0) {
          FMemory::Free(FStack_40.Data);
        }
        if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14be932b6;
      }
      FStack_88.ComparisonIndex.Value = 0;
      FStack_88.Number = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x34840,Complete_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&FStack_88);
      *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    }
    uStack_80._0_4_ = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    FStack_88 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_88);
    DestructItems<FDS_RaidPartyMemberInfo,int>((FDS_RaidPartyMemberInfo *)FStack_40.Data,iStack_38);
    if ((FDS_RaidPartyMemberInfo *)FStack_40.Data != (FDS_RaidPartyMemberInfo *)0x0) {
      FMemory::Free(FStack_40.Data);
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_14be932b6:
    FDS_DungeonBaseTableRow::GetRef((longlong)*(int *)((longlong)param_1 + 0xf8),true);
    UDS_DungeonManager::SetSelectedDungeonID(this,*(int *)((longlong)param_1 + 0xf8));
    *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
    uStack_80._0_4_ = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    FStack_88 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_88);
  }
  return;
}

// SetbIsSelected_WrapperImpl @ 14b635050

void __cdecl UDS_VM_Dungeon_LevelSlot::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b635060

UClass * __cdecl UDS_VM_Dungeon_LevelSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_LevelSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_LevelSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_LevelSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_LevelSlot,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_LevelSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_LevelSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_LevelSlot.InnerSingleton;
}

// UDS_VM_Dungeon_LevelSlot @ 14b63b150

UDS_VM_Dungeon_LevelSlot * __thiscall
UDS_VM_Dungeon_LevelSlot::UDS_VM_Dungeon_LevelSlot
          (UDS_VM_Dungeon_LevelSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_LevelSlot__6B_;
  (this->LevelText).StringTableID = 0;
  (this->LevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LevelText).StringEnumTableNameID.Number = 0;
  (this->LevelText).DateTime.Ticks = 0;
  (this->LevelText).TimeSpan.Ticks = 0;
  (this->LevelText).TimeExpressionType = None;
  (this->LevelText).IsExpression = false;
  (this->LevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelText).UniqueString.Data.ArrayNum = 0;
  (this->LevelText).UniqueString.Data.ArrayMax = 0;
  (this->LevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelText).FormatArgs.ArrayNum = 0;
  (this->LevelText).FormatArgs.ArrayMax = 0;
  this->DungeonId = 0;
  this->CheckStateChangeEventField = false;
  this->bIsSelected = false;
  (this->LevelText).StringTableType = None;
  return this;
}

// UDS_VM_Dungeon_LevelSlot @ 14b63b1f0

UDS_VM_Dungeon_LevelSlot * __thiscall
UDS_VM_Dungeon_LevelSlot::UDS_VM_Dungeon_LevelSlot
          (UDS_VM_Dungeon_LevelSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_LevelSlot__6B_;
  (this->LevelText).StringTableID = 0;
  (this->LevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LevelText).StringEnumTableNameID.Number = 0;
  (this->LevelText).DateTime.Ticks = 0;
  (this->LevelText).TimeSpan.Ticks = 0;
  (this->LevelText).TimeExpressionType = None;
  (this->LevelText).IsExpression = false;
  (this->LevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelText).UniqueString.Data.ArrayNum = 0;
  (this->LevelText).UniqueString.Data.ArrayMax = 0;
  (this->LevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelText).FormatArgs.ArrayNum = 0;
  (this->LevelText).FormatArgs.ArrayMax = 0;
  this->DungeonId = 0;
  this->CheckStateChangeEventField = false;
  this->bIsSelected = false;
  (this->LevelText).StringTableType = None;
  return this;
}

// ~UDS_VM_Dungeon_LevelSlot @ 14b63ce30

void __thiscall UDS_VM_Dungeon_LevelSlot::~UDS_VM_Dungeon_LevelSlot(UDS_VM_Dungeon_LevelSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_LevelSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->LevelText).FormatArgs.AllocatorInstance.Data,
             (this->LevelText).FormatArgs.ArrayNum);
  pFVar1 = (this->LevelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LevelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f7d0

IClassDescriptor * __thiscall
UDS_VM_Dungeon_LevelSlot::GetFieldNotificationDescriptor(UDS_VM_Dungeon_LevelSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_LevelSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640450

UClass * __cdecl UDS_VM_Dungeon_LevelSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_LevelSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_LevelSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_LevelSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_LevelSlot,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_LevelSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_LevelSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_LevelSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_LevelSlot @ 14b640ba0

void __cdecl UDS_VM_Dungeon_LevelSlot::StaticRegisterNativesUDS_VM_Dungeon_LevelSlot(void)

{
  return;
}

// BindModel @ 14be74f20

void __thiscall UDS_VM_Dungeon_LevelSlot::BindModel(UDS_VM_Dungeon_LevelSlot *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonID,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_LevelSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedDungeonID,(UDS_VM_Dungeon_LevelSlot *)&stack0x00000010,
               (pmf_1476a04e *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftRaidParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_LevelSlot>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftRaidParty,(UDS_VM_Dungeon_LevelSlot *)&stack0x00000010,
               (pmf_bde57ecc *)this);
  }
  return;
}

// OnCheckStateChangeEventField @ 14be930e0

void __thiscall
UDS_VM_Dungeon_LevelSlot::OnCheckStateChangeEventField
          (UDS_VM_Dungeon_LevelSlot *this,FDS_WidgetEventField *param_1)

{
  int iVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  bool bVar3;
  UDS_DungeonManager *this_00;
  FDS_RaidPartyRepo *pFVar4;
  FDS_DungeonBaseTableRow *pFVar5;
  FDS_DungeonBaseTableRow *pFVar6;
  FName local_88;
  undefined8 local_80;
  undefined4 local_78;
  long64 local_68;
  int local_60;
  FString local_58;
  undefined1 local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34;
  long64 local_30;
  undefined1 local_28;
  int local_24;
  int local_20;
  
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    return;
  }
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    local_68 = (pFVar4->RaidPartyInfo).RaidPartyUID;
    local_60 = (pFVar4->RaidPartyInfo).DungeonId;
    ::FString::FString(&local_58,&(pFVar4->RaidPartyInfo).PartyName);
    local_48 = (pFVar4->RaidPartyInfo).IsPassword;
    local_40.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar4->RaidPartyInfo).Members.ArrayNum;
    pFVar2 = (FDS_RaidPartyMemberInfo *)(pFVar4->RaidPartyInfo).Members.AllocatorInstance.Data;
    local_38 = iVar1;
    if (iVar1 == 0) {
      local_34 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,8,iVar1,0,&local_40,iVar1,&local_34);
      ConstructItems<FDS_RaidPartyMemberInfo,FDS_RaidPartyMemberInfo,int>
                (local_40.Data,pFVar2,iVar1);
    }
    local_30 = (pFVar4->RaidPartyInfo).LeaderUID;
    local_28 = (pFVar4->RaidPartyInfo).IsPublic;
    local_24 = (pFVar4->RaidPartyInfo).MemberCount;
    local_20 = (pFVar4->RaidPartyInfo).State;
    if (this->DungeonId == local_60) {
      this->bIsSelected = true;
    }
    else {
      pFVar5 = FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonId,true);
      pFVar6 = FDS_DungeonBaseTableRow::GetRef((longlong)local_60,true);
      if (pFVar5->DungeonType != pFVar6->DungeonType) {
        DestructItems<FDS_RaidPartyMemberInfo,int>
                  ((FDS_RaidPartyMemberInfo *)local_40.Data,local_38);
        if ((FDS_RaidPartyMemberInfo *)local_40.Data != (FDS_RaidPartyMemberInfo *)0x0) {
          FMemory::Free(local_40.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        goto LAB_14be932b6;
      }
      local_88.ComparisonIndex.Value = 0;
      local_88.Number = 0;
      local_80 = 0;
      local_78 = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x34840,Complete_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&local_88);
      this->bIsSelected = false;
    }
    local_80._0_4_ = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    DestructItems<FDS_RaidPartyMemberInfo,int>((FDS_RaidPartyMemberInfo *)local_40.Data,local_38);
    if ((FDS_RaidPartyMemberInfo *)local_40.Data != (FDS_RaidPartyMemberInfo *)0x0) {
      FMemory::Free(local_40.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_14be932b6:
    FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonId,true);
    UDS_DungeonManager::SetSelectedDungeonID(this_00,this->DungeonId);
    this->bIsSelected = true;
    local_80._0_4_ = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  return;
}

// OnLeftRaidParty @ 14be99f90

void __thiscall UDS_VM_Dungeon_LevelSlot::OnLeftRaidParty(UDS_VM_Dungeon_LevelSlot *this)

{
  UDS_DungeonManager *pUVar1;
  FName local_18;
  int local_10;
  
  pUVar1 = UDS_DungeonManager::GetInst();
  if (pUVar1 != (UDS_DungeonManager *)0x0) {
    this->bIsSelected = this->DungeonId == pUVar1->SelectedDungeonID;
    local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSelectedDungeon @ 14be9ca20

void __thiscall
UDS_VM_Dungeon_LevelSlot::OnSelectedDungeon(UDS_VM_Dungeon_LevelSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = this->DungeonId == param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14be9e130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_LevelSlot::OnSetViewModel
          (UDS_VM_Dungeon_LevelSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  ForAnyElementType FVar4;
  undefined1 auStackY_218 [32];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_1e8;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  TSharedPtr<FDS_ViewModelContext_DungeonLevelInfo,1> local_1b8;
  FDS_Text local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_DungeonLevelInfo>(&local_1b8,&local_158);
  if (local_1b8.Object == (FDS_ViewModelContext_DungeonLevelInfo *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14be9e360;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Dungeon_LevelSlot::OnSetViewModel",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x18,L"LevelContect is nullptr.");
    FVar4.Data = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    this->DungeonId = (int)(local_1b8.Object)->DungeonId;
    this->bIsSelected = (local_1b8.Object)->bIsSelected;
    local_1d0 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    local_1d8 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    local_1a8.StringTableType = None;
    local_1a8.StringTableID = 0;
    local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1a8.StringEnumTableNameID.Number = 0;
    local_1a8.TimeExpressionType = None;
    local_1a8.IsExpression = false;
    local_1a8.DateTime.Ticks = 0;
    local_1a8.TimeSpan.Ticks = 0;
    local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.UniqueString.Data.ArrayNum = 0;
    local_1a8.UniqueString.Data.ArrayMax = 0;
    local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.FormatArgs.ArrayNum = 0;
    local_1a8.FormatArgs.ArrayMax = 0;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
    local_1e8.ArrayNum = iVar2 + 1;
    FDS_TextFormatArg::FDS_TextFormatArg<__int64_&>
              ((FDS_TextFormatArg *)(local_1e8.AllocatorInstance.Data + (longlong)iVar2 * 0x28),
               &(local_1b8.Object)->DungeonOpenLevel);
    FDS_Text::SetTextFormatFromStringTable(&local_1a8,StringUi,0x9e3a,&local_1e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
    if ((FDS_TextFormatArg *)local_1e8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    FDS_Text::operator=(&this->LevelText,&local_1a8);
    local_1c0 = FFieldNotificationClassDescriptor::LevelText.BitNumber;
    local_1c8 = FFieldNotificationClassDescriptor::LevelText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data,
               local_1a8.FormatArgs.ArrayNum);
    FVar4.Data = local_1a8.UniqueString.Data.AllocatorInstance.Data;
    if ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1a8.FormatArgs.AllocatorInstance.Data);
      FVar4.Data = local_1a8.UniqueString.Data.AllocatorInstance.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
LAB_14be9e360:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsSelected @ 14beb1af0

void __thiscall
UDS_VM_Dungeon_LevelSlot::SetIsSelected(UDS_VM_Dungeon_LevelSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetLevelText @ 14beb2410

void __thiscall
UDS_VM_Dungeon_LevelSlot::SetLevelText(UDS_VM_Dungeon_LevelSlot *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->LevelText,param_1);
  local_10 = FFieldNotificationClassDescriptor::LevelText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LevelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebbc60

void __thiscall UDS_VM_Dungeon_LevelSlot::UnbindModel(UDS_VM_Dungeon_LevelSlot *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftRaidParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedDungeonID,
               this);
  }
  return;
}

