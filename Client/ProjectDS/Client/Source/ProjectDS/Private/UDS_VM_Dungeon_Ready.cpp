// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 37

// SetClickCreateParty_WrapperImpl @ 14b643e80

void __cdecl UDS_VM_Dungeon_Ready::SetClickCreateParty_WrapperImpl(void *param_1,void *param_2)

{
  UDS_DungeonManager *this;
  
  this = UDS_DungeonManager::GetInst();
  if (this != (UDS_DungeonManager *)0x0) {
    UDS_DungeonManager::OnCreateRaidParty(this);
    return;
  }
  return;
}

// SetClickReady_WrapperImpl @ 14b643e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Dungeon_Ready::SetClickReady_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  FDS_RaidPartyMemberInfo *pFVar6;
  UDS_LogManager *pUVar7;
  UDS_ContentManager *this;
  FDS_RaidPartyMemberInfo *pFVar8;
  undefined1 auStackY_318 [32];
  undefined1 auStack_2e8 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_2e0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_2c8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_2b0;
  FDS_RaidPartyMemberInfo FStack_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar6 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar5);
  FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo(&FStack_298,pFVar6);
  if (FStack_298.PlayerUID < 1) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Dungeon_Ready::OnClickReady",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_138.Ptr,0x71,L"myMemberInfo is not valid.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    bVar4 = FDS_RaidPartyService::IsRaidPlaying();
    if (!bVar4) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      cVar1 = (char)(pFVar5->RaidPartyInfo).State;
      if (cVar1 == '\0') {
        if (*(char *)((longlong)param_1 + 0x120) == '\0') {
          if (*(char *)((longlong)param_1 + 0x122) == '\0') {
            TStack_2e0._0_8_ = 0;
            TStack_2e0._8_8_ = 0;
            TStack_2e0._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x34804,Alert_None_01,&TStack_2e0);
          }
          else if (FStack_298.MemberState == Waiting) {
            FDS_RaidPartyService::RequestRaidPartyMemberUpdateState(Ready);
          }
          else if (FStack_298.MemberState == Ready) {
            FDS_RaidPartyService::RequestRaidPartyMemberUpdateState(Waiting);
          }
        }
        else {
          FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar5->RaidPartyInfo).DungeonId,true);
          iVar2 = (pFVar5->RaidPartyInfo).Members.ArrayNum;
          pFVar6 = (FDS_RaidPartyMemberInfo *)(pFVar5->RaidPartyInfo).Members.AllocatorInstance.Data
          ;
          pFVar8 = pFVar6 + iVar2;
          while( true ) {
            if ((pFVar5->RaidPartyInfo).Members.ArrayNum != iVar2) {
              `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(auStack_2e8);
            }
            if (pFVar6 == pFVar8) {
              FDS_RaidPartyService::RequestRaidPartyDungeonStart();
              goto LAB_14be9670f;
            }
            bVar4 = FDS_RaidPartyMemberInfo::IsValidCharInfo(pFVar6);
            if (!bVar4) {
              TStack_2b0._0_8_ = 0;
              TStack_2b0._8_8_ = 0;
              TStack_2b0._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x34804,Alert_None_01,&TStack_2b0);
              goto LAB_14be9670f;
            }
            if ((pFVar6->PlayerUID != FStack_298.PlayerUID) && (pFVar6->MemberState != Ready))
            break;
            pFVar6 = pFVar6 + 1;
          }
          if (pFVar6->MemberState == OffLine) {
            TStack_2c8._0_8_ = 0;
            TStack_2c8._8_8_ = 0;
            TStack_2c8._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x347e4,Alert_None_01,&TStack_2c8);
          }
        }
      }
      else if (((cVar1 == '\x01') || (cVar1 == '\x02')) && (FStack_298.MemberState != DungeonInPlay)
              ) {
        FDS_RaidPartyService::RequestRaidPartyInDungeon();
        this = UDS_ContentManager::GetInst();
        if (this == (UDS_ContentManager *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7588663915848924981>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Dungeon\\DS_VM_Dungeon_Ready.cpp"
                             ,0xcb,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          UDS_ContentManager::CloseContent(this);
        }
      }
    }
  }
LAB_14be9670f:
  FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData(&FStack_298.RaidPartyMemberSyncData);
  if (FStack_298.NickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.NickName.Data.AllocatorInstance.Data);
  }
  return;
}

// SetClickSecession_WrapperImpl @ 14b643ea0

void __cdecl UDS_VM_Dungeon_Ready::SetClickSecession_WrapperImpl(void *param_1,void *param_2)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> TStack_28;
  
  TStack_28._0_8_ = 0;
  TStack_28._8_8_ = 0;
  TStack_28._16_4_ = 0;
  FDS_RaidPartyService::RequestRaidPartyLeave(&TStack_28);
  return;
}

// SetClickManagement_WrapperImpl @ 14b643eb0

void __cdecl UDS_VM_Dungeon_Ready::SetClickManagement_WrapperImpl(void *param_1,void *param_2)

{
  UDS_DungeonManager *this;
  
  this = UDS_DungeonManager::GetInst();
  if (this != (UDS_DungeonManager *)0x0) {
    UDS_DungeonManager::OnManagementRaidParty(this);
    return;
  }
  return;
}

// SetbIsLeader_WrapperImpl @ 14b643ec0

void __cdecl UDS_VM_Dungeon_Ready::SetbIsLeader_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x120) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbIsCanStartRaid_WrapperImpl @ 14b643ed0

void __cdecl UDS_VM_Dungeon_Ready::SetbIsCanStartRaid_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x121) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsCanStartRaid.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsCanStartRaid.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbIsHaveRaidParty_WrapperImpl @ 14b643ee0

void __cdecl UDS_VM_Dungeon_Ready::SetbIsHaveRaidParty_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x122) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsHaveRaidParty.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsHaveRaidParty.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetReadyBtnText_WrapperImpl @ 14b643ef0

void __cdecl UDS_VM_Dungeon_Ready::SetReadyBtnText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x128),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::ReadyBtnText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ReadyBtnText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b643f00

UClass * __cdecl UDS_VM_Dungeon_Ready::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Ready.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Ready",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Ready.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Ready,0x268,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Ready>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Ready>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Ready.InnerSingleton;
}

// UDS_VM_Dungeon_Ready @ 14b6471e0

UDS_VM_Dungeon_Ready * __thiscall
UDS_VM_Dungeon_Ready::UDS_VM_Dungeon_Ready(UDS_VM_Dungeon_Ready *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Ready__6B_;
  *(undefined8 *)&(this->ClickCreateParty).Delegate = 0;
  *(undefined8 *)&(this->ClickCreateParty).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCreateParty).Delegate.field_0x10 = 0;
  (this->ClickReady)._padding_ = '\0';
  (this->ClickReady).bIsCustomSelected = false;
  (this->ClickReady).bIsLacked = false;
  (this->ClickReady).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickReady).Delegate = 0;
  *(undefined8 *)&(this->ClickReady).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickReady).Delegate.field_0x10 = 0;
  (this->ClickSecession)._padding_ = '\0';
  (this->ClickSecession).bIsCustomSelected = false;
  (this->ClickSecession).bIsLacked = false;
  (this->ClickSecession).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSecession).Delegate = 0;
  *(undefined8 *)&(this->ClickSecession).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSecession).Delegate.field_0x10 = 0;
  (this->ClickManagement)._padding_ = '\0';
  (this->ClickManagement).bIsCustomSelected = false;
  (this->ClickManagement).bIsLacked = false;
  (this->ClickManagement).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickManagement).Delegate = 0;
  *(undefined8 *)&(this->ClickManagement).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickManagement).Delegate.field_0x10 = 0;
  this->bIsLeader = false;
  (this->ReadyBtnText).StringTableType = None;
  (this->ReadyBtnText).StringTableID = 0;
  (this->ReadyBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ReadyBtnText).StringEnumTableNameID.Number = 0;
  (this->ReadyBtnText).DateTime.Ticks = 0;
  (this->ReadyBtnText).TimeSpan.Ticks = 0;
  (this->ReadyBtnText).TimeExpressionType = None;
  (this->ReadyBtnText).IsExpression = false;
  (this->ReadyBtnText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadyBtnText).UniqueString.Data.ArrayNum = 0;
  (this->ReadyBtnText).UniqueString.Data.ArrayMax = 0;
  (this->ReadyBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadyBtnText).FormatArgs.ArrayNum = 0;
  (this->ReadyBtnText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Create).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Create).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Create).DateTime.Ticks = 0;
  (this->FixedText_Btn_Create).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Create).TimeExpressionType = None;
  (this->FixedText_Btn_Create).IsExpression = false;
  (this->FixedText_Btn_Create).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Create).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Create).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Create).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Create).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Create).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Management).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Management).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Management).DateTime.Ticks = 0;
  (this->FixedText_Btn_Management).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Management).TimeExpressionType = None;
  (this->FixedText_Btn_Management).IsExpression = false;
  (this->FixedText_Btn_Management).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Management).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Management).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Management).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Management).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Management).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Leave).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Leave).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Leave).DateTime.Ticks = 0;
  (this->FixedText_Btn_Leave).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Leave).TimeExpressionType = None;
  (this->FixedText_Btn_Leave).IsExpression = false;
  (this->FixedText_Btn_Leave).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Leave).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Leave).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Leave).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Leave).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Leave).FormatArgs.ArrayMax = 0;
  (this->ClickCreateParty)._padding_ = '\0';
  (this->ClickCreateParty).bIsCustomSelected = false;
  (this->ClickCreateParty).bIsLacked = false;
  (this->ClickCreateParty).bIsCustomDisabled = false;
  (this->FixedText_Btn_Create).StringTableType = StringUi;
  (this->FixedText_Btn_Create).StringTableID = 0x33459;
  (this->FixedText_Btn_Management).StringTableType = StringUi;
  (this->FixedText_Btn_Management).StringTableID = 0x334a3;
  (this->FixedText_Btn_Leave).StringTableType = StringUi;
  (this->FixedText_Btn_Leave).StringTableID = 0x33467;
  return this;
}

// UDS_VM_Dungeon_Ready @ 14b6473d0

UDS_VM_Dungeon_Ready * __thiscall
UDS_VM_Dungeon_Ready::UDS_VM_Dungeon_Ready(UDS_VM_Dungeon_Ready *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Ready__6B_;
  *(undefined8 *)&(this->ClickCreateParty).Delegate = 0;
  *(undefined8 *)&(this->ClickCreateParty).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCreateParty).Delegate.field_0x10 = 0;
  (this->ClickReady)._padding_ = '\0';
  (this->ClickReady).bIsCustomSelected = false;
  (this->ClickReady).bIsLacked = false;
  (this->ClickReady).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickReady).Delegate = 0;
  *(undefined8 *)&(this->ClickReady).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickReady).Delegate.field_0x10 = 0;
  (this->ClickSecession)._padding_ = '\0';
  (this->ClickSecession).bIsCustomSelected = false;
  (this->ClickSecession).bIsLacked = false;
  (this->ClickSecession).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSecession).Delegate = 0;
  *(undefined8 *)&(this->ClickSecession).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSecession).Delegate.field_0x10 = 0;
  (this->ClickManagement)._padding_ = '\0';
  (this->ClickManagement).bIsCustomSelected = false;
  (this->ClickManagement).bIsLacked = false;
  (this->ClickManagement).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickManagement).Delegate = 0;
  *(undefined8 *)&(this->ClickManagement).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickManagement).Delegate.field_0x10 = 0;
  this->bIsLeader = false;
  (this->ReadyBtnText).StringTableType = None;
  (this->ReadyBtnText).StringTableID = 0;
  (this->ReadyBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ReadyBtnText).StringEnumTableNameID.Number = 0;
  (this->ReadyBtnText).DateTime.Ticks = 0;
  (this->ReadyBtnText).TimeSpan.Ticks = 0;
  (this->ReadyBtnText).TimeExpressionType = None;
  (this->ReadyBtnText).IsExpression = false;
  (this->ReadyBtnText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadyBtnText).UniqueString.Data.ArrayNum = 0;
  (this->ReadyBtnText).UniqueString.Data.ArrayMax = 0;
  (this->ReadyBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadyBtnText).FormatArgs.ArrayNum = 0;
  (this->ReadyBtnText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Create).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Create).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Create).DateTime.Ticks = 0;
  (this->FixedText_Btn_Create).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Create).TimeExpressionType = None;
  (this->FixedText_Btn_Create).IsExpression = false;
  (this->FixedText_Btn_Create).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Create).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Create).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Create).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Create).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Create).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Management).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Management).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Management).DateTime.Ticks = 0;
  (this->FixedText_Btn_Management).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Management).TimeExpressionType = None;
  (this->FixedText_Btn_Management).IsExpression = false;
  (this->FixedText_Btn_Management).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Management).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Management).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Management).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Management).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Management).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Leave).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Leave).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Leave).DateTime.Ticks = 0;
  (this->FixedText_Btn_Leave).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Leave).TimeExpressionType = None;
  (this->FixedText_Btn_Leave).IsExpression = false;
  (this->FixedText_Btn_Leave).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Leave).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Leave).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Leave).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Leave).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Leave).FormatArgs.ArrayMax = 0;
  (this->ClickCreateParty)._padding_ = '\0';
  (this->ClickCreateParty).bIsCustomSelected = false;
  (this->ClickCreateParty).bIsLacked = false;
  (this->ClickCreateParty).bIsCustomDisabled = false;
  (this->FixedText_Btn_Create).StringTableType = StringUi;
  (this->FixedText_Btn_Create).StringTableID = 0x33459;
  (this->FixedText_Btn_Management).StringTableType = StringUi;
  (this->FixedText_Btn_Management).StringTableID = 0x334a3;
  (this->FixedText_Btn_Leave).StringTableType = StringUi;
  (this->FixedText_Btn_Leave).StringTableID = 0x33467;
  return this;
}

// ~UDS_VM_Dungeon_Ready @ 14b648f10

void __thiscall UDS_VM_Dungeon_Ready::~UDS_VM_Dungeon_Ready(UDS_VM_Dungeon_Ready *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Ready__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Leave).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Leave).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Leave).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Leave).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Management).FormatArgs.AllocatorInstance.Data
             ,(this->FixedText_Btn_Management).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Management).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Management).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Create).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Create).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Create).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Create).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ReadyBtnText).FormatArgs.AllocatorInstance.Data,
             (this->ReadyBtnText).FormatArgs.ArrayNum);
  pFVar1 = (this->ReadyBtnText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReadyBtnText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickManagement).Delegate);
  pvVar2 = *(void **)&(this->ClickManagement).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickManagement).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSecession).Delegate);
  pvVar2 = *(void **)&(this->ClickSecession).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSecession).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickReady).Delegate);
  pvVar2 = *(void **)&(this->ClickReady).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickReady).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCreateParty).Delegate);
  pvVar2 = *(void **)&(this->ClickCreateParty).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCreateParty).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64ae50

IClassDescriptor * __thiscall
UDS_VM_Dungeon_Ready::GetFieldNotificationDescriptor(UDS_VM_Dungeon_Ready *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_Ready::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b510

UClass * __cdecl UDS_VM_Dungeon_Ready::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Ready.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Ready",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Ready.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Ready,0x268,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Ready>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Ready>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Ready.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_Ready @ 14b64be30

void __cdecl UDS_VM_Dungeon_Ready::StaticRegisterNativesUDS_VM_Dungeon_Ready(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Dungeon_Ready_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDungeonReadySwitcher @ 14b64d0e0

void __cdecl
UDS_VM_Dungeon_Ready::execDungeonReadySwitcher(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = DungeonReadySwitcher((UDS_VM_Dungeon_Ready *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execIsManagementState @ 14b64d1a0

void __cdecl
UDS_VM_Dungeon_Ready::execIsManagementState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsManagementState((UDS_VM_Dungeon_Ready *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsRaidPlay @ 14b64d1e0

void __cdecl UDS_VM_Dungeon_Ready::execIsRaidPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRaidPlay((UDS_VM_Dungeon_Ready *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsReady @ 14b64d220

void __cdecl UDS_VM_Dungeon_Ready::execIsReady(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsReady((UDS_VM_Dungeon_Ready *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// BindModel @ 14be75070

void __thiscall UDS_VM_Dungeon_Ready::BindModel(UDS_VM_Dungeon_Ready *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_Ready>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyInfo,(UDS_VM_Dungeon_Ready *)&stack0x00000010,
               (pmf_c5fd92cb *)this);
  }
  return;
}

// DungeonReadySwitcher @ 14be81f60

int __thiscall UDS_VM_Dungeon_Ready::DungeonReadySwitcher(UDS_VM_Dungeon_Ready *this)

{
  int iVar1;
  bool bVar2;
  FDS_RaidPartyRepo *pFVar3;
  UDS_DungeonManager *pUVar4;
  
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar3);
  if (bVar2) {
    pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    iVar1 = (pFVar3->RaidPartyInfo).DungeonId;
    pUVar4 = UDS_DungeonManager::GetInst();
    if (pUVar4 != (UDS_DungeonManager *)0x0) {
      return (int)(iVar1 == pUVar4->SelectedDungeonID);
    }
  }
  return 0;
}

// IsManagementState @ 14be8f4c0

bool __thiscall UDS_VM_Dungeon_Ready::IsManagementState(UDS_VM_Dungeon_Ready *this)

{
  bool bVar1;
  
  bVar1 = FDS_RaidPartyService::IsRaidPlaying();
  if (bVar1) {
    return false;
  }
  return this->bIsLeader;
}

// IsRaidPlay @ 14be8f4f0

bool __thiscall UDS_VM_Dungeon_Ready::IsRaidPlay(UDS_VM_Dungeon_Ready *this)

{
  bool bVar1;
  
  bVar1 = FDS_RaidPartyService::IsRaidPlaying();
  return bVar1;
}

// IsReady @ 14be8f510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_Dungeon_Ready::IsReady(UDS_VM_Dungeon_Ready *this)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(this_00);
  if (pFVar1->PlayerUID < 1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_Ready::IsReady",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x49,L"myMemberInfo is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  return pFVar1->MemberState == Ready;
}

// OnChangedRaidPartyInfo @ 14be91690

void __thiscall UDS_VM_Dungeon_Ready::OnChangedRaidPartyInfo(UDS_VM_Dungeon_Ready *this)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_RaidPartyRepo *pFVar4;
  bool bVar5;
  FWeakObjectPtr FStackX_8;
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::DungeonReadySwitcher.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DungeonReadySwitcher.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  bVar5 = false;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&FStackX_8,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&FStackX_8);
    lVar1 = *(longlong *)&pUVar3[6].field_0x8;
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar5 = lVar1 == (pFVar4->RaidPartyInfo).LeaderUID;
  }
  this->bIsLeader = bVar5;
  iStack_10 = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::IsReady.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsReady.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::IsRaidPlay.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsRaidPlay.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  iStack_10 = FFieldNotificationClassDescriptor::IsManagementState.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsManagementState.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
  this->bIsHaveRaidParty = bVar2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsHaveRaidParty.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsHaveRaidParty.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  UpdateReadyState(this);
  return;
}

// OnClickCreateParty @ 14be94510

void __thiscall
UDS_VM_Dungeon_Ready::OnClickCreateParty(UDS_VM_Dungeon_Ready *this,FDS_ButtonEventField *param_1)

{
  UDS_DungeonManager *this_00;
  
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 != (UDS_DungeonManager *)0x0) {
    UDS_DungeonManager::OnCreateRaidParty(this_00);
    return;
  }
  return;
}

// OnClickManagement @ 14be95f30

void __thiscall
UDS_VM_Dungeon_Ready::OnClickManagement(UDS_VM_Dungeon_Ready *this,FDS_ButtonEventField *param_1)

{
  UDS_DungeonManager *this_00;
  
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 != (UDS_DungeonManager *)0x0) {
    UDS_DungeonManager::OnManagementRaidParty(this_00);
    return;
  }
  return;
}

// OnClickReady @ 14be96470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_Ready::OnClickReady(UDS_VM_Dungeon_Ready *this,FDS_ButtonEventField *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  FDS_RaidPartyMemberInfo *pFVar6;
  UDS_LogManager *pUVar7;
  UDS_ContentManager *this_00;
  FDS_RaidPartyMemberInfo *pFVar8;
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2e0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2c8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2b0;
  FDS_RaidPartyMemberInfo local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar6 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar5);
  FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo(&local_298,pFVar6);
  if (local_298.PlayerUID < 1) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_Ready::OnClickReady",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,0x71,L"myMemberInfo is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar4 = FDS_RaidPartyService::IsRaidPlaying();
    if (!bVar4) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      cVar1 = (char)(pFVar5->RaidPartyInfo).State;
      if (cVar1 == '\0') {
        if (this->bIsLeader == false) {
          if (this->bIsHaveRaidParty == false) {
            local_2e0._0_8_ = 0;
            local_2e0._8_8_ = 0;
            local_2e0._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x34804,Alert_None_01,&local_2e0);
          }
          else if (local_298.MemberState == Waiting) {
            FDS_RaidPartyService::RequestRaidPartyMemberUpdateState(Ready);
          }
          else if (local_298.MemberState == Ready) {
            FDS_RaidPartyService::RequestRaidPartyMemberUpdateState(Waiting);
          }
        }
        else {
          FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar5->RaidPartyInfo).DungeonId,true);
          iVar2 = (pFVar5->RaidPartyInfo).Members.ArrayNum;
          pFVar6 = (FDS_RaidPartyMemberInfo *)(pFVar5->RaidPartyInfo).Members.AllocatorInstance.Data
          ;
          pFVar8 = pFVar6 + iVar2;
          while( true ) {
            if ((pFVar5->RaidPartyInfo).Members.ArrayNum != iVar2) {
              `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_2e8);
            }
            if (pFVar6 == pFVar8) {
              FDS_RaidPartyService::RequestRaidPartyDungeonStart();
              goto LAB_14be9670f;
            }
            bVar4 = FDS_RaidPartyMemberInfo::IsValidCharInfo(pFVar6);
            if (!bVar4) {
              local_2b0._0_8_ = 0;
              local_2b0._8_8_ = 0;
              local_2b0._16_4_ = 0;
              UDS_UIMessageManager::OpenMsgByStringUi(0x34804,Alert_None_01,&local_2b0);
              goto LAB_14be9670f;
            }
            if ((pFVar6->PlayerUID != local_298.PlayerUID) && (pFVar6->MemberState != Ready)) break;
            pFVar6 = pFVar6 + 1;
          }
          if (pFVar6->MemberState == OffLine) {
            local_2c8._0_8_ = 0;
            local_2c8._8_8_ = 0;
            local_2c8._16_4_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi(0x347e4,Alert_None_01,&local_2c8);
          }
        }
      }
      else if (((cVar1 == '\x01') || (cVar1 == '\x02')) && (local_298.MemberState != DungeonInPlay))
      {
        FDS_RaidPartyService::RequestRaidPartyInDungeon();
        this_00 = UDS_ContentManager::GetInst();
        if (this_00 == (UDS_ContentManager *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7588663915848924981>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Dungeon\\DS_VM_Dungeon_Ready.cpp"
                             ,0xcb,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          UDS_ContentManager::CloseContent(this_00);
        }
      }
    }
  }
LAB_14be9670f:
  FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData(&local_298.RaidPartyMemberSyncData);
  if (local_298.NickName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.NickName.Data.AllocatorInstance.Data);
  }
  return;
}

// OnClickSecession @ 14be97160

void __thiscall
UDS_VM_Dungeon_Ready::OnClickSecession(UDS_VM_Dungeon_Ready *this,FDS_ButtonEventField *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  FDS_RaidPartyService::RequestRaidPartyLeave(&local_28);
  return;
}

// OnSetViewModel @ 14be9e480

void __thiscall
UDS_VM_Dungeon_Ready::OnSetViewModel
          (UDS_VM_Dungeon_Ready *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UpdateDungeonReady(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsCanStartRaid @ 14beb12f0

void __thiscall UDS_VM_Dungeon_Ready::SetIsCanStartRaid(UDS_VM_Dungeon_Ready *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsCanStartRaid = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsCanStartRaid.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsCanStartRaid.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsHaveRaidParty @ 14beb1380

void __thiscall UDS_VM_Dungeon_Ready::SetIsHaveRaidParty(UDS_VM_Dungeon_Ready *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsHaveRaidParty = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsHaveRaidParty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsHaveRaidParty.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsLeader @ 14beb15b0

void __thiscall UDS_VM_Dungeon_Ready::SetIsLeader(UDS_VM_Dungeon_Ready *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsLeader = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetReadyBtnText @ 14beb3e50

void __thiscall UDS_VM_Dungeon_Ready::SetReadyBtnText(UDS_VM_Dungeon_Ready *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->ReadyBtnText,param_1);
  local_10 = FFieldNotificationClassDescriptor::ReadyBtnText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ReadyBtnText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebbcf0

void __thiscall UDS_VM_Dungeon_Ready::UnbindModel(UDS_VM_Dungeon_Ready *this)

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

// UpdateDungeonReady @ 14bebdc40

void __thiscall UDS_VM_Dungeon_Ready::UpdateDungeonReady(UDS_VM_Dungeon_Ready *this)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_RaidPartyRepo *pFVar4;
  bool bVar5;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DungeonReadySwitcher.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DungeonReadySwitcher.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  bVar5 = false;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    lVar1 = *(longlong *)&pUVar3[6].field_0x8;
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar5 = lVar1 == (pFVar4->RaidPartyInfo).LeaderUID;
  }
  this->bIsLeader = bVar5;
  local_10 = FFieldNotificationClassDescriptor::bIsLeader.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsLeader.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsReady.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsReady.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsRaidPlay.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRaidPlay.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsManagementState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsManagementState.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
  this->bIsHaveRaidParty = bVar2;
  local_10 = FFieldNotificationClassDescriptor::bIsHaveRaidParty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsHaveRaidParty.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  UpdateReadyState(this);
  return;
}

// UpdateReadyState @ 14bec1500

void __thiscall UDS_VM_Dungeon_Ready::UpdateReadyState(UDS_VM_Dungeon_Ready *this)

{
  char cVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  FDS_RaidPartyRepo *pFVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  FWeakObjectPtr local_res20;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FDS_Text local_88;
  
  bVar6 = FDS_RaidPartyService::IsRaidPlaying();
  if (bVar6) {
    local_88.StringTableType = StringUi;
    local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_88.StringEnumTableNameID.Number = 0;
    local_88.TimeExpressionType = None;
    local_88.IsExpression = false;
    local_88.DateTime.Ticks = 0;
    local_88.TimeSpan.Ticks = 0;
    local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.UniqueString.Data.ArrayNum = 0;
    local_88.UniqueString.Data.ArrayMax = 0;
    local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.FormatArgs.ArrayNum = 0;
    local_88.FormatArgs.ArrayMax = 0;
    local_88.StringTableID = 0x3345a;
    FDS_Text::operator=(&this->ReadyBtnText,&local_88);
    local_a0 = FFieldNotificationClassDescriptor::ReadyBtnText.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::ReadyBtnText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    FVar5.Data = local_88.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
               local_88.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar5.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar5.Data);
    }
    if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
    }
    this->bIsCanStartRaid = false;
    local_a0 = FFieldNotificationClassDescriptor::bIsCanStartRaid.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::bIsCanStartRaid.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    return;
  }
  pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  UDS_PlayerData::GetMainPlayerData();
  bVar6 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar6) {
    pUVar8 = FWeakObjectPtr::Get(&local_res20);
    lVar4 = *(longlong *)&pUVar8[6].field_0x8;
    if (lVar4 != 0) {
      cVar1 = (char)(pFVar7->RaidPartyInfo).State;
      if (cVar1 == '\0') {
        if (this->bIsLeader == true) {
          local_88.StringTableType = StringUi;
          local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_88.StringEnumTableNameID.Number = 0;
          local_88.TimeExpressionType = None;
          local_88.IsExpression = false;
          local_88.DateTime.Ticks = 0;
          local_88.TimeSpan.Ticks = 0;
          local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.UniqueString.Data.ArrayNum = 0;
          local_88.UniqueString.Data.ArrayMax = 0;
          local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.FormatArgs.ArrayNum = 0;
          local_88.FormatArgs.ArrayMax = 0;
          local_88.StringTableID = 0x3347f;
          SetReadyBtnText(this,&local_88);
          FVar5.Data = local_88.FormatArgs.AllocatorInstance.Data;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
                     local_88.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)FVar5.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(FVar5.Data);
          }
          if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
          }
          iVar3 = (pFVar7->RaidPartyInfo).Members.ArrayNum;
          pFVar11 = (pFVar7->RaidPartyInfo).Members.AllocatorInstance.Data;
          pFVar12 = pFVar11 + (longlong)iVar3 * 0x160;
          while( true ) {
            if ((pFVar7->RaidPartyInfo).Members.ArrayNum != iVar3) {
              `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar11 == pFVar12) {
              this->bIsCanStartRaid = true;
              goto LAB_14bec1820;
            }
            if ((*(longlong *)(pFVar11 + 8) != lVar4) &&
               (pFVar11[0x2c] != (FScriptContainerElement)0x2)) break;
            pFVar11 = pFVar11 + 0x160;
          }
          this->bIsCanStartRaid = false;
LAB_14bec1820:
          local_a0 = FFieldNotificationClassDescriptor::bIsCanStartRaid.BitNumber;
          local_a8 = FFieldNotificationClassDescriptor::bIsCanStartRaid.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
        }
        else {
          local_res18 = (pFVar7->RaidPartyInfo).Members.ArrayNum;
          uVar9 = (ulonglong)(int)local_res18;
          pFVar11 = (pFVar7->RaidPartyInfo).Members.AllocatorInstance.Data;
          pFVar12 = pFVar11 + uVar9 * 0x160;
          while( true ) {
            if ((pFVar7->RaidPartyInfo).Members.ArrayNum != (int)uVar9) {
              `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar11 == pFVar12) break;
            if (*(longlong *)(pFVar11 + 8) == lVar4) {
              FVar2 = pFVar11[0x2c];
              if (FVar2 == (FScriptContainerElement)0x2) {
                local_88.StringTableID = 0x334aa;
                local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
                local_88.StringEnumTableNameID.Number = 0;
                local_88.DateTime.Ticks = 0;
                local_88.TimeSpan.Ticks = 0;
                local_88.TimeExpressionType = None;
                local_88.IsExpression = false;
                local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_88.UniqueString.Data.ArrayNum = 0;
                local_88.UniqueString.Data.ArrayMax = 0;
                local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_88.FormatArgs.ArrayNum = 0;
                local_88.FormatArgs.ArrayMax = 0;
                local_88.StringTableType = (EDS_StringTableType)FVar2;
                FDS_Text::operator=(&this->ReadyBtnText,&local_88);
                pFVar10 = &local_a8;
                local_a8 = FFieldNotificationClassDescriptor::ReadyBtnText.FieldName;
                local_a0 = FFieldNotificationClassDescriptor::ReadyBtnText.BitNumber;
              }
              else {
                if (FVar2 != (FScriptContainerElement)0x1) goto LAB_14bec1989;
                local_88.StringTableType = StringUi;
                local_88.StringTableID = 0x3345b;
                local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
                local_88.StringEnumTableNameID.Number = 0;
                local_88.DateTime.Ticks = 0;
                local_88.TimeSpan.Ticks = 0;
                local_88.TimeExpressionType = None;
                local_88.IsExpression = false;
                local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_88.UniqueString.Data.ArrayNum = 0;
                local_88.UniqueString.Data.ArrayMax = 0;
                local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_88.FormatArgs.ArrayNum = 0;
                local_88.FormatArgs.ArrayMax = 0;
                FDS_Text::operator=(&this->ReadyBtnText,&local_88);
                pFVar10 = &local_98;
                local_98 = FFieldNotificationClassDescriptor::ReadyBtnText.FieldName;
                local_90 = FFieldNotificationClassDescriptor::ReadyBtnText.BitNumber;
              }
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar10);
              FVar5.Data = local_88.FormatArgs.AllocatorInstance.Data;
              DestructItems<FDS_TextFormatArg,int>
                        ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
                         local_88.FormatArgs.ArrayNum);
              if ((FDS_TextFormatArg *)FVar5.Data != (FDS_TextFormatArg *)0x0) {
                FMemory::Free(FVar5.Data);
              }
              if (local_88.UniqueString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
              }
            }
LAB_14bec1989:
            uVar9 = (ulonglong)local_res18;
            pFVar11 = pFVar11 + 0x160;
          }
          this->bIsCanStartRaid = true;
          local_90 = FFieldNotificationClassDescriptor::bIsCanStartRaid.BitNumber;
          local_98 = FFieldNotificationClassDescriptor::bIsCanStartRaid.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
        }
      }
      else {
        if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
          local_88.StringTableType = StringUi;
          local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_88.StringEnumTableNameID.Number = 0;
          local_88.TimeExpressionType = None;
          local_88.IsExpression = false;
          local_88.DateTime.Ticks = 0;
          local_88.TimeSpan.Ticks = 0;
          local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.UniqueString.Data.ArrayNum = 0;
          local_88.UniqueString.Data.ArrayMax = 0;
          local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.FormatArgs.ArrayNum = 0;
          local_88.FormatArgs.ArrayMax = 0;
          local_88.StringTableID = 0x3345a;
          SetReadyBtnText(this,&local_88);
          FVar5.Data = local_88.FormatArgs.AllocatorInstance.Data;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
                     local_88.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)FVar5.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(FVar5.Data);
          }
          if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
          }
          this->bIsCanStartRaid = true;
        }
        else {
          if ((cVar1 != '\x03') && (cVar1 != '\x04')) {
            return;
          }
          local_88.StringTableType = StringUi;
          local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
          local_88.StringEnumTableNameID.Number = 0;
          local_88.TimeExpressionType = None;
          local_88.IsExpression = false;
          local_88.DateTime.Ticks = 0;
          local_88.TimeSpan.Ticks = 0;
          local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.UniqueString.Data.ArrayNum = 0;
          local_88.UniqueString.Data.ArrayMax = 0;
          local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.FormatArgs.ArrayNum = 0;
          local_88.FormatArgs.ArrayMax = 0;
          local_88.StringTableID = 0x3345a;
          SetReadyBtnText(this,&local_88);
          FVar5.Data = local_88.FormatArgs.AllocatorInstance.Data;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
                     local_88.FormatArgs.ArrayNum);
          if ((FDS_TextFormatArg *)FVar5.Data != (FDS_TextFormatArg *)0x0) {
            FMemory::Free(FVar5.Data);
          }
          if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
          }
          this->bIsCanStartRaid = false;
        }
        local_a0 = FFieldNotificationClassDescriptor::bIsCanStartRaid.BitNumber;
        local_a8 = FFieldNotificationClassDescriptor::bIsCanStartRaid.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
      }
    }
  }
  return;
}

