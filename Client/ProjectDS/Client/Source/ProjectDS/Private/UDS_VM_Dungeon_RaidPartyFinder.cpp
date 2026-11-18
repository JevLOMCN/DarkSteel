// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetClickFilter_WrapperImpl @ 14b6357a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Dungeon_RaidPartyFinder::SetClickFilter_WrapperImpl(void *param_1,void *param_2)

{
  UDS_DungeonManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_DungeonManager::GetInst();
  if (this == (UDS_DungeonManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Dungeon_RaidPartyFinder::OnClickFilter",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x7c,L"dungeonManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    UDS_DungeonManager::OnRaidPartyFinderFilter
              (this,*(EDS_DungeonType *)((longlong)param_1 + 0x338));
  }
  return;
}

// SetClickRefresh_WrapperImpl @ 14b6357b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder::SetClickRefresh_WrapperImpl(void *param_1,void *param_2)

{
  UDS_DungeonManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_DungeonManager::GetInst();
  if (this == (UDS_DungeonManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Dungeon_RaidPartyFinder::OnClickRefresh",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x88,L"dungeonManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    UDS_DungeonManager::RequestFindRaidPartyList
              (this,(EDS_DungeonType *)((longlong)param_1 + 0x338));
  }
  return;
}

// SetClickTextClear_WrapperImpl @ 14b6357c0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder::SetClickTextClear_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  
  pFVar1 = FText::GetEmpty();
  SetSearchText(param_1,pFVar1);
  return;
}

// SetTextCommittedEventField_WrapperImpl @ 14b6357d0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder::SetTextCommittedEventField_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FScriptContainerElement *_Src;
  int iVar3;
  FString *pFVar4;
  FText *pFVar5;
  longlong lVar6;
  undefined1 auStackX_10 [8];
  ForAnyElementType FStack_48;
  int iStack_40;
  int iStack_3c;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_38;
  
  if (*(int *)((longlong)param_2 + 0x10) == 1) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x140);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x140) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x148) = *(undefined4 *)((longlong)param_2 + 8);
    pFVar4 = FText::ToString((FText *)((longlong)param_1 + 0x140));
    FStack_48.Data = (FScriptContainerElement *)0x0;
    iStack_40 = (pFVar4->Data).ArrayNum;
    lVar6 = (longlong)iStack_40;
    _Src = (pFVar4->Data).AllocatorInstance.Data;
    if (iStack_40 == 0) {
      iStack_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_40,0,&FStack_48,iStack_40,&iStack_3c);
      memcpy(FStack_48.Data,_Src,lVar6 * 2);
    }
    iVar3 = iStack_40 + -1;
    if (iStack_40 == 0) {
      iVar3 = 0;
    }
    if (iVar3 < 2) {
      TStack_38._0_8_ = 0;
      TStack_38._8_8_ = 0;
      TStack_38._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x28492,Alert_None_01,&TStack_38);
      pFVar5 = FText::GetEmpty();
      SetSearchText(param_1,pFVar5);
    }
    else {
      pFVar4 = FText::ToString((FText *)((longlong)param_1 + 0x140));
      FDS_RaidPartyService::RequestGetRaidPartyInfoSearch(pFVar4);
    }
    if (FStack_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data);
    }
  }
  return;
}

// SetSearchText_WrapperImpl @ 14b6357e0

void __cdecl UDS_VM_Dungeon_RaidPartyFinder::SetSearchText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::SearchText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::SearchText.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0x140),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x140);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x140) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x148) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetTextMaxLength_WrapperImpl @ 14b6357f0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder::SetTextMaxLength_WrapperImpl(void *param_1,void *param_2)

{
  SetTextMaxLength(param_1,*(int *)param_2);
  return;
}

// SetbIsEmptyPartyList_WrapperImpl @ 14b635800

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder::SetbIsEmptyPartyList_WrapperImpl(void *param_1,void *param_2)

{
  SetIsEmptyPartyList(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b635810

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder,0x340,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder.InnerSingleton;
}

// UDS_VM_Dungeon_RaidPartyFinder @ 14b63b350

UDS_VM_Dungeon_RaidPartyFinder * __thiscall
UDS_VM_Dungeon_RaidPartyFinder::UDS_VM_Dungeon_RaidPartyFinder
          (UDS_VM_Dungeon_RaidPartyFinder *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr =
       (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder__6B_;
  (this->RaidPartySimpleInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_RaidPartySimpleInfo *)0x0;
  (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Info *)0x0;
  (this->RaidPartyEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RaidPartyEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->RaidPartyEntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickFilter)._padding_ = '\0';
  (this->ClickFilter).bIsCustomSelected = false;
  (this->ClickFilter).bIsLacked = false;
  (this->ClickFilter).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFilter).Delegate = 0;
  *(undefined8 *)&(this->ClickFilter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFilter).Delegate.field_0x10 = 0;
  (this->ClickRefresh)._padding_ = '\0';
  (this->ClickRefresh).bIsCustomSelected = false;
  (this->ClickRefresh).bIsLacked = false;
  (this->ClickRefresh).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRefresh).Delegate = 0;
  *(undefined8 *)&(this->ClickRefresh).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRefresh).Delegate.field_0x10 = 0;
  (this->ClickTextClear)._padding_ = '\0';
  (this->ClickTextClear).bIsCustomSelected = false;
  (this->ClickTextClear).bIsLacked = false;
  (this->ClickTextClear).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTextClear).Delegate = 0;
  *(undefined8 *)&(this->ClickTextClear).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTextClear).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextCommittedEventField).NewText);
  FText::FText(&this->SearchText);
  (this->FixedText_EmptyDesc).StringTableType = StringUi;
  (this->FixedText_EmptyDesc).StringTableID = 0x3347c;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_EmptyDesc).DateTime.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeSpan.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeExpressionType = None;
  (this->FixedText_EmptyDesc).IsExpression = false;
  (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_Message).StringTableType = StringUi;
  (this->FixedText_Message).StringTableID = 0x33454;
  (this->FixedText_Message).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Message).StringEnumTableNameID.Number = 0;
  (this->FixedText_Message).DateTime.Ticks = 0;
  (this->FixedText_Message).TimeSpan.Ticks = 0;
  (this->FixedText_Message).TimeExpressionType = None;
  (this->FixedText_Message).IsExpression = false;
  (this->FixedText_Message).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Message).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Message).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Message).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Message).FormatArgs.ArrayNum = 0;
  (this->FixedText_Message).FormatArgs.ArrayMax = 0;
  (this->FixedText_Dungeon).StringTableType = StringUi;
  (this->FixedText_Dungeon).StringTableID = 0x2bf28;
  (this->FixedText_Dungeon).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Dungeon).StringEnumTableNameID.Number = 0;
  (this->FixedText_Dungeon).DateTime.Ticks = 0;
  (this->FixedText_Dungeon).TimeSpan.Ticks = 0;
  (this->FixedText_Dungeon).TimeExpressionType = None;
  (this->FixedText_Dungeon).IsExpression = false;
  (this->FixedText_Dungeon).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Dungeon).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Dungeon).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Dungeon).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Dungeon).FormatArgs.ArrayNum = 0;
  (this->FixedText_Dungeon).FormatArgs.ArrayMax = 0;
  (this->FixedText_Level).StringTableType = StringUi;
  (this->FixedText_Level).StringTableID = 0xbbc;
  (this->FixedText_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Level).StringEnumTableNameID.Number = 0;
  (this->FixedText_Level).DateTime.Ticks = 0;
  (this->FixedText_Level).TimeSpan.Ticks = 0;
  (this->FixedText_Level).TimeExpressionType = None;
  (this->FixedText_Level).IsExpression = false;
  (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).FormatArgs.ArrayNum = 0;
  (this->FixedText_Level).FormatArgs.ArrayMax = 0;
  (this->FixedText_Members).StringTableType = StringUi;
  (this->FixedText_Members).StringTableID = 0x33499;
  (this->FixedText_Members).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Members).StringEnumTableNameID.Number = 0;
  (this->FixedText_Members).DateTime.Ticks = 0;
  (this->FixedText_Members).TimeSpan.Ticks = 0;
  (this->FixedText_Members).TimeExpressionType = None;
  (this->FixedText_Members).IsExpression = false;
  (this->FixedText_Members).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Members).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Members).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Members).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Members).FormatArgs.ArrayNum = 0;
  (this->FixedText_Members).FormatArgs.ArrayMax = 0;
  (this->FixedText_Leader).StringTableType = StringUi;
  (this->FixedText_Leader).StringTableID = 0x3349a;
  (this->FixedText_Leader).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Leader).StringEnumTableNameID.Number = 0;
  (this->FixedText_Leader).DateTime.Ticks = 0;
  (this->FixedText_Leader).TimeSpan.Ticks = 0;
  (this->FixedText_Leader).TimeExpressionType = None;
  (this->FixedText_Leader).IsExpression = false;
  (this->FixedText_Leader).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Leader).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Leader).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Leader).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Leader).FormatArgs.ArrayNum = 0;
  (this->FixedText_Leader).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_Dungeon_RaidPartyFinder @ 14b63b610

UDS_VM_Dungeon_RaidPartyFinder * __thiscall
UDS_VM_Dungeon_RaidPartyFinder::UDS_VM_Dungeon_RaidPartyFinder
          (UDS_VM_Dungeon_RaidPartyFinder *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr =
       (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder__6B_;
  (this->RaidPartySimpleInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_RaidPartySimpleInfo *)0x0;
  (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_Dungeon_Info *)0x0;
  (this->RaidPartyEntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RaidPartyEntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->RaidPartyEntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickFilter)._padding_ = '\0';
  (this->ClickFilter).bIsCustomSelected = false;
  (this->ClickFilter).bIsLacked = false;
  (this->ClickFilter).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickFilter).Delegate = 0;
  *(undefined8 *)&(this->ClickFilter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickFilter).Delegate.field_0x10 = 0;
  (this->ClickRefresh)._padding_ = '\0';
  (this->ClickRefresh).bIsCustomSelected = false;
  (this->ClickRefresh).bIsLacked = false;
  (this->ClickRefresh).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRefresh).Delegate = 0;
  *(undefined8 *)&(this->ClickRefresh).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRefresh).Delegate.field_0x10 = 0;
  (this->ClickTextClear)._padding_ = '\0';
  (this->ClickTextClear).bIsCustomSelected = false;
  (this->ClickTextClear).bIsLacked = false;
  (this->ClickTextClear).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTextClear).Delegate = 0;
  *(undefined8 *)&(this->ClickTextClear).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTextClear).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextCommittedEventField).NewText);
  FText::FText(&this->SearchText);
  (this->FixedText_EmptyDesc).StringTableType = StringUi;
  (this->FixedText_EmptyDesc).StringTableID = 0x3347c;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_EmptyDesc).StringEnumTableNameID.Number = 0;
  (this->FixedText_EmptyDesc).DateTime.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeSpan.Ticks = 0;
  (this->FixedText_EmptyDesc).TimeExpressionType = None;
  (this->FixedText_EmptyDesc).IsExpression = false;
  (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_EmptyDesc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayNum = 0;
  (this->FixedText_EmptyDesc).FormatArgs.ArrayMax = 0;
  (this->FixedText_Message).StringTableType = StringUi;
  (this->FixedText_Message).StringTableID = 0x33454;
  (this->FixedText_Message).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Message).StringEnumTableNameID.Number = 0;
  (this->FixedText_Message).DateTime.Ticks = 0;
  (this->FixedText_Message).TimeSpan.Ticks = 0;
  (this->FixedText_Message).TimeExpressionType = None;
  (this->FixedText_Message).IsExpression = false;
  (this->FixedText_Message).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Message).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Message).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Message).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Message).FormatArgs.ArrayNum = 0;
  (this->FixedText_Message).FormatArgs.ArrayMax = 0;
  (this->FixedText_Dungeon).StringTableType = StringUi;
  (this->FixedText_Dungeon).StringTableID = 0x2bf28;
  (this->FixedText_Dungeon).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Dungeon).StringEnumTableNameID.Number = 0;
  (this->FixedText_Dungeon).DateTime.Ticks = 0;
  (this->FixedText_Dungeon).TimeSpan.Ticks = 0;
  (this->FixedText_Dungeon).TimeExpressionType = None;
  (this->FixedText_Dungeon).IsExpression = false;
  (this->FixedText_Dungeon).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Dungeon).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Dungeon).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Dungeon).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Dungeon).FormatArgs.ArrayNum = 0;
  (this->FixedText_Dungeon).FormatArgs.ArrayMax = 0;
  (this->FixedText_Level).StringTableType = StringUi;
  (this->FixedText_Level).StringTableID = 0xbbc;
  (this->FixedText_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Level).StringEnumTableNameID.Number = 0;
  (this->FixedText_Level).DateTime.Ticks = 0;
  (this->FixedText_Level).TimeSpan.Ticks = 0;
  (this->FixedText_Level).TimeExpressionType = None;
  (this->FixedText_Level).IsExpression = false;
  (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).FormatArgs.ArrayNum = 0;
  (this->FixedText_Level).FormatArgs.ArrayMax = 0;
  (this->FixedText_Members).StringTableType = StringUi;
  (this->FixedText_Members).StringTableID = 0x33499;
  (this->FixedText_Members).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Members).StringEnumTableNameID.Number = 0;
  (this->FixedText_Members).DateTime.Ticks = 0;
  (this->FixedText_Members).TimeSpan.Ticks = 0;
  (this->FixedText_Members).TimeExpressionType = None;
  (this->FixedText_Members).IsExpression = false;
  (this->FixedText_Members).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Members).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Members).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Members).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Members).FormatArgs.ArrayNum = 0;
  (this->FixedText_Members).FormatArgs.ArrayMax = 0;
  (this->FixedText_Leader).StringTableType = StringUi;
  (this->FixedText_Leader).StringTableID = 0x3349a;
  (this->FixedText_Leader).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Leader).StringEnumTableNameID.Number = 0;
  (this->FixedText_Leader).DateTime.Ticks = 0;
  (this->FixedText_Leader).TimeSpan.Ticks = 0;
  (this->FixedText_Leader).TimeExpressionType = None;
  (this->FixedText_Leader).IsExpression = false;
  (this->FixedText_Leader).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Leader).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Leader).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Leader).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Leader).FormatArgs.ArrayNum = 0;
  (this->FixedText_Leader).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_Dungeon_RaidPartyFinder @ 14b63ced0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::~UDS_VM_Dungeon_RaidPartyFinder
          (UDS_VM_Dungeon_RaidPartyFinder *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Leader).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Leader).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Leader).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Leader).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Members).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Members).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Members).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Members).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Level).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Level).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Level).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Dungeon).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Dungeon).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Dungeon).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Dungeon).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Message).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Message).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Message).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Message).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_EmptyDesc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_EmptyDesc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_EmptyDesc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SearchText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->TextCommittedEventField).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTextClear).Delegate);
  pvVar3 = *(void **)&(this->ClickTextClear).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTextClear).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRefresh).Delegate);
  pvVar3 = *(void **)&(this->ClickRefresh).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRefresh).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickFilter).Delegate);
  pvVar3 = *(void **)&(this->ClickFilter).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickFilter).Delegate);
  pFVar1 = (this->RaidPartyEntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f8b0

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidPartyFinder::GetFieldNotificationDescriptor(UDS_VM_Dungeon_RaidPartyFinder *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidPartyFinder::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6405d0

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder,0x340,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder @ 14b640bf0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder::StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder(void)

{
  return;
}

// BindModel @ 14be110d0

void __thiscall UDS_VM_Dungeon_RaidPartyFinder::BindModel(UDS_VM_Dungeon_RaidPartyFinder *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedDungeonList,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_RaidPartyFinder>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedDungeonList,(UDS_VM_Dungeon_RaidPartyFinder *)&stack0x00000010,
               (pmf_926efcac *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftRaidParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_RaidPartyFinder>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftRaidParty,(UDS_VM_Dungeon_RaidPartyFinder *)&stack0x00000010,
               (pmf_926efcac *)this);
  }
  return;
}

// InitViewModel @ 14be24a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_RaidPartyFinder::InitViewModel(UDS_VM_Dungeon_RaidPartyFinder *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *pUVar3;
  UDS_VM_RaidPartySimpleInfo *pUVar4;
  UDS_VM_Dungeon_Info *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr ==
      (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_RaidPartyFinder_ListSlot_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar3 = (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->RaidPartySimpleInfo_ViewModel).field0_0x0.DebugPtr == (UDS_VM_RaidPartySimpleInfo *)0x0
     ) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_RaidPartySimpleInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_RaidPartySimpleInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar4 = (UDS_VM_RaidPartySimpleInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_RaidPartySimpleInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_RaidPartySimpleInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RaidPartySimpleInfo_ViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->DungeonInfo_ViewModel).field0_0x0.DebugPtr == (UDS_VM_Dungeon_Info *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Dungeon_Info_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Dungeon_Info_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_Dungeon_Info *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_Dungeon_Info *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_Dungeon_Info *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// InitializeEmptySlot @ 14be25910

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::InitializeEmptySlot(UDS_VM_Dungeon_RaidPartyFinder *this)

{
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this_00;
  code *pcVar1;
  FDS_ViewModelContext_RaidPartyInfo *pFVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  MakeContext<FDS_ViewModelContext_RaidPartyInfo>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
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
  *(undefined4 *)&pFVar2->_padding_ = 0xd6;
  this_00 = (this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// OnChangedDungeonList @ 14be29cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::OnChangedDungeonList(UDS_VM_Dungeon_RaidPartyFinder *this)

{
  code *pcVar1;
  UDS_UserObjectListItem *this_00;
  UDS_VM_Dungeon_RaidPartyFinder *pUVar2;
  bool bVar3;
  int iVar4;
  UDS_DungeonManager *pUVar5;
  UDS_LogManager *pUVar6;
  FDS_RaidPartyRepo *pFVar7;
  UObject *pUVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *pUVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  FDS_ViewModelContext *pFVar15;
  FDS_ViewModelContext *pFVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FDS_ViewModelContext *pFVar19;
  FScriptContainerElement *pFVar20;
  FDS_ViewModelContext *pFVar21;
  long64 lVar22;
  undefined1 auStackY_258 [32];
  undefined1 local_228 [4];
  uint local_224;
  FScriptContainerElement *local_220;
  UDS_UserObjectListItem *local_218;
  UDS_UserObjectListItem *local_210;
  FDS_EntryBindingEventField *local_208;
  UDS_DungeonManager *local_200;
  long64 local_1f8;
  FScriptContainerElement *local_1f0;
  UDS_VM_Dungeon_RaidPartyFinder *local_1e8;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1e8 = this;
  pUVar5 = UDS_DungeonManager::GetInst();
  local_200 = pUVar5;
  if (pUVar5 == (UDS_DungeonManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Dungeon_RaidPartyFinder::OnChangedDungeonList",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xda,L"dungeonManager is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    local_208 = &this->RaidPartyEntryBindingEventField;
    lVar22 = (pFVar7->RaidPartyInfo).RaidPartyUID;
    local_1f8 = lVar22;
    FDS_EntryBindingEventField::Reset(local_208);
    local_224 = (pUVar5->RaidPartySimpleInfoList).ArrayNum;
    uVar17 = (ulonglong)(int)local_224;
    pFVar18 = (pUVar5->RaidPartySimpleInfoList).AllocatorInstance.Data;
    pFVar19 = (FDS_ViewModelContext *)0x0;
    pFVar20 = pFVar18 + uVar17 * 0x48;
    local_1f0 = pFVar20;
    while( true ) {
      local_220 = pFVar18;
      if ((pUVar5->RaidPartySimpleInfoList).ArrayNum != (int)uVar17) {
        local_228[0] = 0;
        `TCheckedPointerIterator<FDS_RaidPartySimpleInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_228);
      }
      pUVar2 = local_1e8;
      if (pFVar18 == pFVar20) break;
      if (*(longlong *)pFVar18 != lVar22) {
        pUVar8 = GetTransientPackageAsObject();
        local_218 = NewObject<UDS_UserObjectListItem>(pUVar8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_218 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_218);
        }
        pFVar9 = ::operator_new(0x30);
        pFVar21 = pFVar19;
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar9->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
          (pFVar9->ViewModelName).ComparisonIndex = 0;
          (pFVar9->ViewModelName).Number = 0;
          pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartyInfo__6B_;
          pFVar9[1]._padding_ = 0;
          *(undefined8 *)&pFVar9[1].DerivedStaticStruct = 0;
          pFVar21 = pFVar9;
        }
        pFVar10 = ::operator_new(0x20);
        pFVar9 = pFVar19;
        if (pFVar10 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar10->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartyInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar21;
          pFVar9 = pFVar10;
        }
        if ((pFVar21 == (FDS_ViewModelContext *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar11 = FDS_ViewModelContext_RaidPartyInfo::StaticStruct();
        *(UScriptStruct **)&pFVar21->DerivedStaticStruct = pUVar11;
        pUVar12 = UDS_ViewModelContextManager::GetInst();
        if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar9 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar9->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_1b8.Object = pFVar21;
          local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9
          ;
          UDS_ViewModelContextManager::RegisterContext(pUVar12,&local_1b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.SharedReferenceCount.ReferenceController);
        }
        pFVar21->ViewModelTemplateKey = RaidPartyFinderList;
        pFVar21[1]._padding_ = *(longlong *)pFVar18;
        *(longlong *)&pFVar21[1].DerivedStaticStruct = (longlong)*(int *)(pFVar18 + 8);
        pFVar13 = ::operator_new(0x30);
        pFVar10 = pFVar19;
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar13->DerivedStaticStruct = 0;
          (pFVar13->ViewModelName).ComparisonIndex = 0;
          (pFVar13->ViewModelName).Number = 0;
          pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartyInfo__6B_;
          pFVar13[1]._padding_ = 0;
          *(undefined8 *)&pFVar13[1].DerivedStaticStruct = 0;
          pFVar10 = pFVar13;
        }
        pFVar14 = ::operator_new(0x20);
        pFVar13 = pFVar19;
        if (pFVar14 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar14->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar14->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          ((atomic<int> *)&pFVar14->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar14->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartyInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar14->ViewModelTemplateKey = pFVar10;
          pFVar13 = pFVar14;
        }
        if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar11 = FDS_ViewModelContext_RaidPartyInfo::StaticStruct();
        *(UScriptStruct **)&pFVar10->DerivedStaticStruct = pUVar11;
        pUVar12 = UDS_ViewModelContextManager::GetInst();
        if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar13 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar13->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_1a8.Object = pFVar10;
          local_1a8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar13;
          UDS_ViewModelContextManager::RegisterContext(pUVar12,&local_1a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a8.SharedReferenceCount.ReferenceController);
        }
        pFVar10->ViewModelTemplateKey = RaidPartySimpleInfo;
        pFVar10[1]._padding_ = *(longlong *)pFVar18;
        pFVar15 = ::operator_new(0x28);
        pFVar14 = pFVar19;
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar15->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar15->DerivedStaticStruct = 0;
          (pFVar15->ViewModelName).ComparisonIndex = 0;
          (pFVar15->ViewModelName).Number = 0;
          pFVar15->_padding_ = (longlong)&___7FDS_ViewModelContext_Dungeon__6B_;
          pFVar15[1]._padding_ = 0;
          pFVar14 = pFVar15;
        }
        pFVar16 = ::operator_new(0x20);
        pFVar15 = pFVar19;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar16->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar16->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar16->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Dungeon__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar16->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar16->ViewModelTemplateKey = pFVar14;
          pFVar15 = pFVar16;
        }
        if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar11 = FDS_ViewModelContext_Dungeon::StaticStruct();
        *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar11;
        pUVar12 = UDS_ViewModelContextManager::GetInst();
        if (pUVar12 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar15 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar15->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_198.Object = pFVar14;
          local_198.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar15;
          UDS_ViewModelContextManager::RegisterContext(pUVar12,&local_198);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_198.SharedReferenceCount.ReferenceController);
        }
        this_00 = local_218;
        pFVar14->ViewModelTemplateKey = DungeonInfo;
        pFVar14[1]._padding_ = (longlong)*(int *)(local_220 + 8);
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar9->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_188.Object = pFVar21;
        local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        UDS_UserObjectListItem::AddContext(local_218,&local_188);
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar13->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_178.Object = pFVar10;
        local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
        UDS_UserObjectListItem::AddContext(this_00,&local_178);
        if (pFVar15 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar15->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_168.Object = pFVar14;
        local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar15;
        UDS_UserObjectListItem::AddContext(this_00,&local_168);
        local_210 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add(local_208,(TObjectPtr<UDS_UserObjectListItem>)&local_210);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar13);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar9);
        pFVar18 = local_220;
        pUVar5 = local_200;
        pFVar20 = local_1f0;
        lVar22 = local_1f8;
      }
      uVar17 = (ulonglong)local_224;
      pFVar18 = pFVar18 + 0x48;
    }
    local_1d0 = FFieldNotificationClassDescriptor::RaidPartyEntryBindingEventField.BitNumber;
    local_1d8 = FFieldNotificationClassDescriptor::RaidPartyEntryBindingEventField.FieldName;
    (**(code **)(local_1e8->_padding_ + 0x38))(&local_1e8->_padding_,&local_1d8);
    iVar4 = FDS_EntryBindingEventField::Num(&pUVar2->RaidPartyEntryBindingEventField);
    local_1c0 = FFieldNotificationClassDescriptor::bIsEmptyPartyList.BitNumber;
    local_1c8 = FFieldNotificationClassDescriptor::bIsEmptyPartyList.FieldName;
    if (pUVar2->bIsEmptyPartyList != (iVar4 == 0)) {
      pUVar2->bIsEmptyPartyList = iVar4 == 0;
      (**(code **)(pUVar2->_padding_ + 0x38))(&pUVar2->_padding_,&local_1c8);
    }
  }
  return;
}

// OnClickFilter @ 14be2c3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::OnClickFilter
          (UDS_VM_Dungeon_RaidPartyFinder *this,FDS_ButtonEventField *param_1)

{
  UDS_DungeonManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyFinder::OnClickFilter",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x7c,L"dungeonManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_DungeonManager::OnRaidPartyFinderFilter(this_00,this->CurrentDungeonType);
  }
  return;
}

// OnClickRefresh @ 14be2c970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::OnClickRefresh
          (UDS_VM_Dungeon_RaidPartyFinder *this,FDS_ButtonEventField *param_1)

{
  UDS_DungeonManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_RaidPartyFinder::OnClickRefresh",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x88,L"dungeonManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_DungeonManager::RequestFindRaidPartyList(this_00,&this->CurrentDungeonType);
  }
  return;
}

// OnClickTextClear @ 14be2cb50

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::OnClickTextClear
          (UDS_VM_Dungeon_RaidPartyFinder *this,FDS_ButtonEventField *param_1)

{
  FText *pFVar1;
  
  pFVar1 = FText::GetEmpty();
  SetSearchText(this,pFVar1);
  return;
}

// OnSetViewModel @ 14be33170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::OnSetViewModel
          (UDS_VM_Dungeon_RaidPartyFinder *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_ContentsTabFrameType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this_00;
  UDS_VM_RaidPartySimpleInfo *this_01;
  UDS_VM_Dungeon_Info *this_02;
  code *pcVar3;
  FName FVar4;
  FDS_ViewModelContext_RaidPartyInfo *pFVar5;
  FDS_ViewModelContext_Dungeon *pFVar6;
  bool bVar7;
  int iVar8;
  UDS_LogManager *pUVar9;
  FDS_RaidPartyRepo *pFVar10;
  UDS_DungeonManager *this_03;
  undefined1 auStackY_328 [32];
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_2f8;
  FName local_2e8;
  int local_2e0;
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_2d8;
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_2c8;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_2b8;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TSharedPtr<FDS_ViewModelContext,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_2a8.Object = param_1->Object;
  local_2a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsOpen>(&local_2f8,&local_2a8);
  if (local_2f8.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_Dungeon_RaidPartyFinder::OnSetViewModel",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_268.Ptr,0x1d,L"context is nullptr.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
  }
  else {
    EVar1 = (local_2f8.Object)->TabFrameID;
    if (EVar1 == FindDungeon_Normal) {
      this->CurrentDungeonType = Normal;
    }
    else if (EVar1 == FindDungeon_Heroic) {
      this->CurrentDungeonType = Heroic;
    }
    else if (EVar1 == FindDungeon_Raid) {
      this->CurrentDungeonType = Raid;
    }
    iVar8 = DS_CommonDataHelper::RecruitmentMessageMaxLength();
    FVar4 = FFieldNotificationClassDescriptor::TextMaxLength.FieldName;
    if (this->TextMaxLength != iVar8) {
      local_2e0 = FFieldNotificationClassDescriptor::TextMaxLength.BitNumber;
      this->TextMaxLength = iVar8;
      local_2e8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
    }
    pFVar10 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar7 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar10);
    if (bVar7) {
      pFVar10 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      if ((this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr !=
          (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0) {
        MakeContext<FDS_ViewModelContext_RaidPartyInfo>(&local_2d8);
        pFVar5 = local_2d8.Object;
        if ((local_2d8.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar5->_padding_ = 0xd6;
        pFVar5->RaidPartyUID = (pFVar10->RaidPartyInfo).RaidPartyUID;
        pFVar5->DungeonId = (longlong)(pFVar10->RaidPartyInfo).DungeonId;
        this_00 = (this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr;
        local_298.Object = (FDS_ViewModelContext *)local_2d8.Object;
        local_298.SharedReferenceCount.ReferenceController =
             local_2d8.SharedReferenceCount.ReferenceController;
        if (local_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_298);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2d8.SharedReferenceCount.ReferenceController);
      }
      if ((this->RaidPartySimpleInfo_ViewModel).field0_0x0.DebugPtr !=
          (UDS_VM_RaidPartySimpleInfo *)0x0) {
        MakeContext<FDS_ViewModelContext_RaidPartyInfo>(&local_2c8);
        pFVar5 = local_2c8.Object;
        if ((local_2c8.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar5->_padding_ = 0xf6;
        pFVar5->RaidPartyUID = (pFVar10->RaidPartyInfo).RaidPartyUID;
        this_01 = (this->RaidPartySimpleInfo_ViewModel).field0_0x0.DebugPtr;
        local_288.Object = (FDS_ViewModelContext *)local_2c8.Object;
        local_288.SharedReferenceCount.ReferenceController =
             local_2c8.SharedReferenceCount.ReferenceController;
        if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_288);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c8.SharedReferenceCount.ReferenceController);
      }
      if ((this->DungeonInfo_ViewModel).field0_0x0.DebugPtr != (UDS_VM_Dungeon_Info *)0x0) {
        MakeContext<FDS_ViewModelContext_Dungeon>(&local_2b8);
        pFVar6 = local_2b8.Object;
        if ((local_2b8.Object == (FDS_ViewModelContext_Dungeon *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar6->_padding_ = 0xcc;
        pFVar6->DungeonId = (longlong)(pFVar10->RaidPartyInfo).DungeonId;
        this_02 = (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr;
        local_278.Object = (FDS_ViewModelContext *)local_2b8.Object;
        local_278.SharedReferenceCount.ReferenceController =
             local_2b8.SharedReferenceCount.ReferenceController;
        if (local_2b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_278);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2b8.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      InitializeEmptySlot(this);
    }
    this_03 = UDS_DungeonManager::GetInst();
    if (this_03 == (UDS_DungeonManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_Dungeon_RaidPartyFinder::OnSetViewModel",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_148.Ptr,0x47,L"dungeonManager is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      UDS_DungeonManager::RequestFindRaidPartyList(this_03,&this->CurrentDungeonType);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextCommittedEventField @ 14be42a70

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::OnTextCommittedEventField
          (UDS_VM_Dungeon_RaidPartyFinder *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FScriptContainerElement *_Src;
  int iVar3;
  FString *pFVar4;
  FText *pFVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  
  if (param_1->CommitType == OnEnter) {
    pIVar1 = (param_1->NewText).TextData.Reference;
    pIVar2 = (this->SearchText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->SearchText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->SearchText).Flags = (param_1->NewText).Flags;
    pFVar4 = FText::ToString(&this->SearchText);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (pFVar4->Data).ArrayNum;
    lVar6 = (longlong)local_40;
    _Src = (pFVar4->Data).AllocatorInstance.Data;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar6 * 2);
    }
    iVar3 = local_40 + -1;
    if (local_40 == 0) {
      iVar3 = 0;
    }
    if (iVar3 < 2) {
      local_38._0_8_ = 0;
      local_38._8_8_ = 0;
      local_38._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x28492,Alert_None_01,&local_38);
      pFVar5 = FText::GetEmpty();
      SetSearchText(this,pFVar5);
    }
    else {
      pFVar4 = FText::ToString(&this->SearchText);
      FDS_RaidPartyService::RequestGetRaidPartyInfoSearch(pFVar4);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// SetIsEmptyPartyList @ 14be4bdc0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::SetIsEmptyPartyList
          (UDS_VM_Dungeon_RaidPartyFinder *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsEmptyPartyList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsEmptyPartyList.FieldName;
  if (this->bIsEmptyPartyList != param_1) {
    this->bIsEmptyPartyList = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSearchText @ 14be51480

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::SetSearchText(UDS_VM_Dungeon_RaidPartyFinder *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::SearchText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::SearchText.FieldName;
  bVar5 = FText::IdenticalTo(&this->SearchText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->SearchText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->SearchText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->SearchText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTextMaxLength @ 14be520b0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::SetTextMaxLength(UDS_VM_Dungeon_RaidPartyFinder *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TextMaxLength.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TextMaxLength.FieldName;
  if (this->TextMaxLength != param_1) {
    this->TextMaxLength = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be551a0

void __thiscall UDS_VM_Dungeon_RaidPartyFinder::UnbindModel(UDS_VM_Dungeon_RaidPartyFinder *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedDungeonList,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftRaidParty,this);
  }
  return;
}

// UpdateMyDungeonSlot @ 14be58780

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder::UpdateMyDungeonSlot
          (UDS_VM_Dungeon_RaidPartyFinder *this,FDS_RaidPartyInfo *param_1)

{
  UDS_VM_Dungeon_RaidPartyFinder_ListSlot *this_00;
  UDS_VM_RaidPartySimpleInfo *this_01;
  UDS_VM_Dungeon_Info *this_02;
  code *pcVar1;
  FDS_ViewModelContext_RaidPartyInfo *pFVar2;
  FDS_ViewModelContext_Dungeon *pFVar3;
  bool bVar4;
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_68;
  TSharedPtr<FDS_ViewModelContext_RaidPartyInfo,1> local_58;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr !=
      (UDS_VM_Dungeon_RaidPartyFinder_ListSlot *)0x0) {
    MakeContext<FDS_ViewModelContext_RaidPartyInfo>(&local_68);
    pFVar2 = local_68.Object;
    if (local_68.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xd6;
    pFVar2->RaidPartyUID = param_1->RaidPartyUID;
    pFVar2->DungeonId = (longlong)param_1->DungeonId;
    this_00 = (this->DungeonRaidPartyFinderListSlot_ViewModel).field0_0x0.DebugPtr;
    local_38.Object = (FDS_ViewModelContext *)local_68.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  if ((this->RaidPartySimpleInfo_ViewModel).field0_0x0.DebugPtr != (UDS_VM_RaidPartySimpleInfo *)0x0
     ) {
    MakeContext<FDS_ViewModelContext_RaidPartyInfo>(&local_58);
    pFVar2 = local_58.Object;
    if (local_58.Object == (FDS_ViewModelContext_RaidPartyInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0xf6;
    pFVar2->RaidPartyUID = param_1->RaidPartyUID;
    this_01 = (this->RaidPartySimpleInfo_ViewModel).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_58.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if ((this->DungeonInfo_ViewModel).field0_0x0.DebugPtr != (UDS_VM_Dungeon_Info *)0x0) {
    MakeContext<FDS_ViewModelContext_Dungeon>(&local_48);
    pFVar3 = local_48.Object;
    if (local_48.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0xcc;
    pFVar3->DungeonId = (longlong)param_1->DungeonId;
    this_02 = (this->DungeonInfo_ViewModel).field0_0x0.DebugPtr;
    local_18.Object = (FDS_ViewModelContext *)local_48.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

