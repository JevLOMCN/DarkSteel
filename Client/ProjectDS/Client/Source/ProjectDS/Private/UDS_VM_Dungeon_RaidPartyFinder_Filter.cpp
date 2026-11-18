// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 37

// SetClickApply_WrapperImpl @ 14b636430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetClickApply_WrapperImpl(void *param_1,void *param_2)

{
  FWeakObjectPtr *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FDS_DungeonBaseTableRow *this_00;
  UDS_LogManager *pUVar6;
  UDS_DungeonFilterData *this_01;
  UObject *pUVar7;
  UDS_DungeonManager *this_02;
  UDS_WindowManager *this_03;
  int *piVar8;
  undefined1 auStackY_1a8 [32];
  undefined1 auStack_178 [8];
  TArray<int,TSizedDefaultAllocator<32>_> TStack_170;
  float fStack_160;
  uint uStack_15c;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  piVar8 = *(int **)((longlong)param_1 + 0x360);
  iVar2 = *(int *)((longlong)param_1 + 0x368);
  TStack_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = piVar8 + iVar2;
  TStack_170.ArrayNum = 0;
  TStack_170.ArrayMax = 0;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x368) != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStack_178);
    }
    if (piVar8 == piVar1) break;
    iVar3 = *piVar8;
    this_00 = FDS_DungeonBaseTableRow::GetRef((longlong)iVar3,true);
    bVar4 = FDS_DungeonBaseTableRow::IsValid(this_00);
    if ((bVar4) &&
       ((*(int *)((longlong)param_1 + 0x35c) == 0 ||
        (this_00->OpenPlayerLevel == *(int *)((longlong)param_1 + 0x35c))))) {
      iVar5 = TStack_170.ArrayNum;
      if (TStack_170.ArrayNum == TStack_170.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&TStack_170.AllocatorInstance,&TStack_170.ArrayMax);
      }
      TStack_170.ArrayNum = iVar5 + 1;
      *(int *)(TStack_170.AllocatorInstance.Data + (longlong)iVar5 * 4) = iVar3;
    }
    piVar8 = piVar8 + 1;
  }
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x380);
  bVar4 = TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> *)this,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_VM_Dungeon_RaidPartyFinder_Filter::OnClickApply",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,TStack_158.Ptr,0x61,L"DungeonFilterData is nullptr.");
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
  }
  else {
    this_01 = (UDS_DungeonFilterData *)FWeakObjectPtr::Get(this);
    UDS_DungeonFilterData::SetFilteredDungeonList
              (this_01,&TStack_170,*(int *)((longlong)param_1 + 0x35c));
    pUVar7 = FWeakObjectPtr::Get(this);
    pUVar7[1].field_0x18 = *(undefined1 *)((longlong)param_1 + 0x122);
    this_02 = UDS_DungeonManager::GetInst();
    if (this_02 != (UDS_DungeonManager *)0x0) {
      pUVar7 = FWeakObjectPtr::Get(this);
      UDS_DungeonManager::RequestFindRaidPartyList(this_02,(EDS_DungeonType *)(pUVar7 + 1));
      this_03 = UDS_WindowManager::GetInst();
      if (this_03 != (UDS_WindowManager *)0x0) {
        fStack_160 = 0.0;
        uStack_15c = 0;
        UDS_WindowManager::CloseWindow(this_03,RaidPartyFindFilter,&uStack_15c,&fStack_160);
      }
    }
  }
  if (TStack_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_170.AllocatorInstance.Data);
  }
  return;
}

// SetClickCancel_WrapperImpl @ 14b636440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetClickCancel_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,RaidPartyFindFilter,auStackX_20,afStackX_18);
  }
  return;
}

// SetClickReset_WrapperImpl @ 14b636450

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetClickReset_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  UObject *pUVar3;
  FName FStack_18;
  int iStack_10;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x380));
  iVar2 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.FieldName;
  if (*(char *)((longlong)param_1 + 0x122) != pUVar3[1].field_0x18) {
    *(undefined1 *)((longlong)param_1 + 0x122) = pUVar3[1].field_0x18;
    iStack_10 = iVar2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x380));
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x360),
             (TArray<int,TSizedDefaultAllocator<32>_> *)&pUVar3[1].field_0x8);
  RefreshFilterSlot(param_1);
  return;
}

// SetChangedAllCheck_WrapperImpl @ 14b636460

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetChangedAllCheck_WrapperImpl(void *param_1,void *param_2)

{
  if (*(char *)param_2 != '\0') {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x360),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x370));
    RefreshFilterSlot(param_1);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x368) = 0;
  if (*(int *)((longlong)param_1 + 0x36c) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)param_1 + 0x360),0,
               (int *)((longlong)param_1 + 0x36c));
  }
  RefreshFilterSlot(param_1);
  return;
}

// SetChangedShowPlayableDungeonOnlyCheck_WrapperImpl @ 14b636470

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetChangedShowPlayableDungeonOnlyCheck_WrapperImpl
          (void *param_1,void *param_2)

{
  FName FVar1;
  FName FStack_18;
  int iStack_10;
  
  FVar1 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.FieldName;
  if (*(char *)((longlong)param_1 + 0x122) != *(char *)param_2) {
    iStack_10 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.BitNumber;
    *(char *)((longlong)param_1 + 0x122) = *(char *)param_2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  RefreshFilterSlot(param_1);
  return;
}

// SetShowPlayableDungeonOnly_WrapperImpl @ 14b636480

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetShowPlayableDungeonOnly_WrapperImpl
          (void *param_1,void *param_2)

{
  SetShowPlayableDungeonOnly(param_1,*(bool *)param_2);
  return;
}

// SetIsAllSelected_WrapperImpl @ 14b636490

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetIsAllSelected_WrapperImpl(void *param_1,void *param_2)

{
  SetIsAllSelected(param_1,*(bool *)param_2);
  return;
}

// SetIsInstanceDungeon_WrapperImpl @ 14b6364a0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetIsInstanceDungeon_WrapperImpl(void *param_1,void *param_2)

{
  SetIsInstanceDungeon(param_1,*(bool *)param_2);
  return;
}

// SetLevelTitleText_WrapperImpl @ 14b6364b0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetLevelTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::LevelTitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::LevelTitleText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x128),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6364c0

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_Filter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Filter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_Filter",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Filter.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_Filter,0x388,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_Filter>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_Filter>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Filter.InnerSingleton;
}

// UDS_VM_Dungeon_RaidPartyFinder_Filter @ 14b63b9b0

UDS_VM_Dungeon_RaidPartyFinder_Filter * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::UDS_VM_Dungeon_RaidPartyFinder_Filter
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_Filter__6B_;
  (this->FilterSlotEntryEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FilterSlotEntryEventField).UserObjectList.ArrayNum = 0;
  (this->FilterSlotEntryEventField).UserObjectList.ArrayMax = 0;
  (this->DungeonLevelSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DungeonLevelSlotEventField).UserObjectList.ArrayNum = 0;
  (this->DungeonLevelSlotEventField).UserObjectList.ArrayMax = 0;
  (this->ClickApply)._padding_ = '\0';
  (this->ClickApply).bIsCustomSelected = false;
  (this->ClickApply).bIsLacked = false;
  (this->ClickApply).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickApply).Delegate = 0;
  *(undefined8 *)&(this->ClickApply).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickApply).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->ClickReset)._padding_ = '\0';
  (this->ClickReset).bIsCustomSelected = false;
  (this->ClickReset).bIsLacked = false;
  (this->ClickReset).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickReset).Delegate = 0;
  *(undefined8 *)&(this->ClickReset).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickReset).Delegate.field_0x10 = 0;
  this->ChangedAllCheck = false;
  this->ChangedShowPlayableDungeonOnlyCheck = false;
  (this->LevelTitleText).StringTableType = None;
  (this->LevelTitleText).StringTableID = 0;
  (this->LevelTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LevelTitleText).StringEnumTableNameID.Number = 0;
  (this->LevelTitleText).DateTime.Ticks = 0;
  (this->LevelTitleText).TimeSpan.Ticks = 0;
  (this->LevelTitleText).TimeExpressionType = None;
  (this->LevelTitleText).IsExpression = false;
  (this->LevelTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelTitleText).UniqueString.Data.ArrayNum = 0;
  (this->LevelTitleText).UniqueString.Data.ArrayMax = 0;
  (this->LevelTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelTitleText).FormatArgs.ArrayNum = 0;
  (this->LevelTitleText).FormatArgs.ArrayMax = 0;
  (this->FixedText_DifficultyTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DifficultyTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_DifficultyTitle).DateTime.Ticks = 0;
  (this->FixedText_DifficultyTitle).TimeSpan.Ticks = 0;
  (this->FixedText_DifficultyTitle).TimeExpressionType = None;
  (this->FixedText_DifficultyTitle).IsExpression = false;
  (this->FixedText_DifficultyTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DifficultyTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DifficultyTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DifficultyTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DifficultyTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_DifficultyTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_DungeonListTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DungeonListTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_DungeonListTitle).DateTime.Ticks = 0;
  (this->FixedText_DungeonListTitle).TimeSpan.Ticks = 0;
  (this->FixedText_DungeonListTitle).TimeExpressionType = None;
  (this->FixedText_DungeonListTitle).IsExpression = false;
  (this->FixedText_DungeonListTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DungeonListTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DungeonListTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DungeonListTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DungeonListTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_DungeonListTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_SelectAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SelectAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_SelectAll).DateTime.Ticks = 0;
  (this->FixedText_SelectAll).TimeSpan.Ticks = 0;
  (this->FixedText_SelectAll).TimeExpressionType = None;
  (this->FixedText_SelectAll).IsExpression = false;
  (this->FixedText_SelectAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SelectAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SelectAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SelectAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_SelectAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_SelectAll).FormatArgs.ArrayMax = 0;
  (this->FixedText_CanEnter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CanEnter).StringEnumTableNameID.Number = 0;
  (this->FixedText_CanEnter).DateTime.Ticks = 0;
  (this->FixedText_CanEnter).TimeSpan.Ticks = 0;
  (this->FixedText_CanEnter).TimeExpressionType = None;
  (this->FixedText_CanEnter).IsExpression = false;
  (this->FixedText_CanEnter).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CanEnter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CanEnter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CanEnter).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CanEnter).FormatArgs.ArrayNum = 0;
  (this->FixedText_CanEnter).FormatArgs.ArrayMax = 0;
  (this->FixedText_DifficultyTitle).StringTableType = StringUi;
  (this->FixedText_DifficultyTitle).StringTableID = 0x33456;
  (this->FixedText_DungeonListTitle).StringTableType = StringUi;
  (this->FixedText_DungeonListTitle).StringTableID = 0x3347d;
  (this->FixedText_SelectAll).StringTableType = StringUi;
  (this->FixedText_SelectAll).StringTableID = 0x334af;
  (this->FixedText_CanEnter).StringTableType = StringUi;
  (this->FixedText_CanEnter).StringTableID = 0x33480;
  (this->FixedText_Btn_Apply).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Apply).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Apply).DateTime.Ticks = 0;
  (this->FixedText_Btn_Apply).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Apply).TimeExpressionType = None;
  (this->FixedText_Btn_Apply).IsExpression = false;
  (this->FixedText_Btn_Apply).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Apply).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Apply).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Apply).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Apply).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Apply).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Reset).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Reset).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Reset).DateTime.Ticks = 0;
  (this->FixedText_Btn_Reset).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Reset).TimeExpressionType = None;
  (this->FixedText_Btn_Reset).IsExpression = false;
  (this->FixedText_Btn_Reset).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Reset).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Reset).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Reset).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Reset).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Reset).FormatArgs.ArrayMax = 0;
  this->DungeonOpenLevel = 0;
  (this->DungeonFilterList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonFilterList).ArrayNum = 0;
  (this->DungeonFilterList).ArrayMax = 0;
  (this->DungeonList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonList).ArrayNum = 0;
  (this->DungeonList).ArrayMax = 0;
  (this->DungeonFilterData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedText_Btn_Apply).StringTableType = StringUi;
  (this->FixedText_Btn_Apply).StringTableID = 0x6e;
  (this->FixedText_Btn_Reset).StringTableType = StringUi;
  (this->FixedText_Btn_Reset).StringTableID = 0x31129;
  return this;
}

// UDS_VM_Dungeon_RaidPartyFinder_Filter @ 14b63bcb0

UDS_VM_Dungeon_RaidPartyFinder_Filter * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::UDS_VM_Dungeon_RaidPartyFinder_Filter
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_Filter__6B_;
  (this->FilterSlotEntryEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FilterSlotEntryEventField).UserObjectList.ArrayNum = 0;
  (this->FilterSlotEntryEventField).UserObjectList.ArrayMax = 0;
  (this->DungeonLevelSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DungeonLevelSlotEventField).UserObjectList.ArrayNum = 0;
  (this->DungeonLevelSlotEventField).UserObjectList.ArrayMax = 0;
  (this->ClickApply)._padding_ = '\0';
  (this->ClickApply).bIsCustomSelected = false;
  (this->ClickApply).bIsLacked = false;
  (this->ClickApply).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickApply).Delegate = 0;
  *(undefined8 *)&(this->ClickApply).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickApply).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->ClickReset)._padding_ = '\0';
  (this->ClickReset).bIsCustomSelected = false;
  (this->ClickReset).bIsLacked = false;
  (this->ClickReset).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickReset).Delegate = 0;
  *(undefined8 *)&(this->ClickReset).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickReset).Delegate.field_0x10 = 0;
  this->ChangedAllCheck = false;
  this->ChangedShowPlayableDungeonOnlyCheck = false;
  (this->LevelTitleText).StringTableType = None;
  (this->LevelTitleText).StringTableID = 0;
  (this->LevelTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LevelTitleText).StringEnumTableNameID.Number = 0;
  (this->LevelTitleText).DateTime.Ticks = 0;
  (this->LevelTitleText).TimeSpan.Ticks = 0;
  (this->LevelTitleText).TimeExpressionType = None;
  (this->LevelTitleText).IsExpression = false;
  (this->LevelTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelTitleText).UniqueString.Data.ArrayNum = 0;
  (this->LevelTitleText).UniqueString.Data.ArrayMax = 0;
  (this->LevelTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelTitleText).FormatArgs.ArrayNum = 0;
  (this->LevelTitleText).FormatArgs.ArrayMax = 0;
  (this->FixedText_DifficultyTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DifficultyTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_DifficultyTitle).DateTime.Ticks = 0;
  (this->FixedText_DifficultyTitle).TimeSpan.Ticks = 0;
  (this->FixedText_DifficultyTitle).TimeExpressionType = None;
  (this->FixedText_DifficultyTitle).IsExpression = false;
  (this->FixedText_DifficultyTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DifficultyTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DifficultyTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DifficultyTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DifficultyTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_DifficultyTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_DungeonListTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_DungeonListTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_DungeonListTitle).DateTime.Ticks = 0;
  (this->FixedText_DungeonListTitle).TimeSpan.Ticks = 0;
  (this->FixedText_DungeonListTitle).TimeExpressionType = None;
  (this->FixedText_DungeonListTitle).IsExpression = false;
  (this->FixedText_DungeonListTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DungeonListTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_DungeonListTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_DungeonListTitle).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_DungeonListTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_DungeonListTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_SelectAll).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SelectAll).StringEnumTableNameID.Number = 0;
  (this->FixedText_SelectAll).DateTime.Ticks = 0;
  (this->FixedText_SelectAll).TimeSpan.Ticks = 0;
  (this->FixedText_SelectAll).TimeExpressionType = None;
  (this->FixedText_SelectAll).IsExpression = false;
  (this->FixedText_SelectAll).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SelectAll).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SelectAll).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SelectAll).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_SelectAll).FormatArgs.ArrayNum = 0;
  (this->FixedText_SelectAll).FormatArgs.ArrayMax = 0;
  (this->FixedText_CanEnter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CanEnter).StringEnumTableNameID.Number = 0;
  (this->FixedText_CanEnter).DateTime.Ticks = 0;
  (this->FixedText_CanEnter).TimeSpan.Ticks = 0;
  (this->FixedText_CanEnter).TimeExpressionType = None;
  (this->FixedText_CanEnter).IsExpression = false;
  (this->FixedText_CanEnter).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CanEnter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CanEnter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CanEnter).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CanEnter).FormatArgs.ArrayNum = 0;
  (this->FixedText_CanEnter).FormatArgs.ArrayMax = 0;
  (this->FixedText_DifficultyTitle).StringTableType = StringUi;
  (this->FixedText_DifficultyTitle).StringTableID = 0x33456;
  (this->FixedText_DungeonListTitle).StringTableType = StringUi;
  (this->FixedText_DungeonListTitle).StringTableID = 0x3347d;
  (this->FixedText_SelectAll).StringTableType = StringUi;
  (this->FixedText_SelectAll).StringTableID = 0x334af;
  (this->FixedText_CanEnter).StringTableType = StringUi;
  (this->FixedText_CanEnter).StringTableID = 0x33480;
  (this->FixedText_Btn_Apply).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Apply).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Apply).DateTime.Ticks = 0;
  (this->FixedText_Btn_Apply).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Apply).TimeExpressionType = None;
  (this->FixedText_Btn_Apply).IsExpression = false;
  (this->FixedText_Btn_Apply).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Apply).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Apply).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Apply).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Apply).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Apply).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Reset).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Reset).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Reset).DateTime.Ticks = 0;
  (this->FixedText_Btn_Reset).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Reset).TimeExpressionType = None;
  (this->FixedText_Btn_Reset).IsExpression = false;
  (this->FixedText_Btn_Reset).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Reset).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Reset).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Reset).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Reset).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Reset).FormatArgs.ArrayMax = 0;
  this->DungeonOpenLevel = 0;
  (this->DungeonFilterList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonFilterList).ArrayNum = 0;
  (this->DungeonFilterList).ArrayMax = 0;
  (this->DungeonList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonList).ArrayNum = 0;
  (this->DungeonList).ArrayMax = 0;
  (this->DungeonFilterData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedText_Btn_Apply).StringTableType = StringUi;
  (this->FixedText_Btn_Apply).StringTableID = 0x6e;
  (this->FixedText_Btn_Reset).StringTableType = StringUi;
  (this->FixedText_Btn_Reset).StringTableID = 0x31129;
  return this;
}

// ~UDS_VM_Dungeon_RaidPartyFinder_Filter @ 14b63d170

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::~UDS_VM_Dungeon_RaidPartyFinder_Filter
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_Filter__6B_;
  pFVar1 = (this->DungeonList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonFilterList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Reset).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Reset).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Reset).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Reset).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Apply).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Apply).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Apply).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Apply).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_CanEnter).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_CanEnter).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_CanEnter).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_CanEnter).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_SelectAll).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SelectAll).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SelectAll).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SelectAll).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_DungeonListTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_DungeonListTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_DungeonListTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_DungeonListTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_DifficultyTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_DifficultyTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_DifficultyTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_DifficultyTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->LevelTitleText).FormatArgs.AllocatorInstance.Data,
             (this->LevelTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->LevelTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LevelTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickReset).Delegate);
  pvVar2 = *(void **)&(this->ClickReset).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickReset).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancel).Delegate);
  pvVar2 = *(void **)&(this->ClickCancel).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancel).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickApply).Delegate);
  pvVar2 = *(void **)&(this->ClickApply).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickApply).Delegate);
  pFVar1 = (this->DungeonLevelSlotEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilterSlotEntryEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f990

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::GetFieldNotificationDescriptor
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidPartyFinder_Filter::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b640750

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_Filter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Filter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_Filter",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Filter.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_Filter,0x388,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_Filter>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_Filter>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_Filter.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_Filter @ 14b640c10

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_Filter
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Dungeon_RaidPartyFinder_Filter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execLevelVisibility @ 14b641c50

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_Filter::execLevelVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = LevelVisibility((UDS_VM_Dungeon_RaidPartyFinder_Filter *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// BindModel @ 14be111b0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::BindModel(UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickedFinderDungeon
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_RaidPartyFinder_Filter>
              ((TMulticastDelegateRegistration<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickedFinderDungeon,
               (UDS_VM_Dungeon_RaidPartyFinder_Filter *)&stack0x00000010,(pmf_29985255 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedFinderLevel,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_RaidPartyFinder_Filter>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedFinderLevel,
               (UDS_VM_Dungeon_RaidPartyFinder_Filter *)&stack0x00000010,(pmf_ec6d2263 *)this);
  }
  return;
}

// InitViewModel @ 14be24c90

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::InitViewModel(UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  return;
}

// LevelVisibility @ 14be28960

ESlateVisibility __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::LevelVisibility(UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  ESlateVisibility EVar1;
  
  EVar1 = Collapsed;
  if (this->DungeonType == Normal) {
    EVar1 = SelfHitTestInvisible;
  }
  return EVar1;
}

// OnChangedAllCheck @ 14be298f0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnChangedAllCheck
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,FDS_WidgetEventField *param_1)

{
  int *piVar1;
  
  if (param_1->bIsActivate != false) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->DungeonFilterList,&this->DungeonList);
    RefreshFilterSlot(this);
    return;
  }
  piVar1 = &(this->DungeonFilterList).ArrayMax;
  (this->DungeonFilterList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DungeonFilterList).AllocatorInstance,0,piVar1);
  }
  RefreshFilterSlot(this);
  return;
}

// OnChangedShowPlayableDungeonOnlyCheck @ 14be2b570

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnChangedShowPlayableDungeonOnlyCheck
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,FDS_WidgetEventField *param_1)

{
  FName FVar1;
  FName local_18;
  int local_10;
  
  FVar1 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.FieldName;
  if (this->ShowPlayableDungeonOnly != param_1->bIsActivate) {
    local_10 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.BitNumber;
    this->ShowPlayableDungeonOnly = param_1->bIsActivate;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  RefreshFilterSlot(this);
  return;
}

// OnClickApply @ 14be2bed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnClickApply
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,FDS_ButtonEventField *param_1)

{
  TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FDS_DungeonBaseTableRow *this_01;
  UDS_LogManager *pUVar6;
  UDS_DungeonFilterData *this_02;
  UObject *pUVar7;
  UDS_DungeonManager *this_03;
  UDS_WindowManager *this_04;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  float local_160;
  uint local_15c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar8 = (this->DungeonFilterList).AllocatorInstance.Data;
  iVar2 = (this->DungeonFilterList).ArrayNum;
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  while( true ) {
    if ((this->DungeonFilterList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (pFVar8 == pFVar1) break;
    iVar3 = *(int *)pFVar8;
    this_01 = FDS_DungeonBaseTableRow::GetRef((longlong)iVar3,true);
    bVar4 = FDS_DungeonBaseTableRow::IsValid(this_01);
    if ((bVar4) &&
       ((this->DungeonOpenLevel == 0 || (this_01->OpenPlayerLevel == this->DungeonOpenLevel)))) {
      iVar5 = local_170.ArrayNum;
      if (local_170.ArrayNum == local_170.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_170.AllocatorInstance,&local_170.ArrayMax);
      }
      local_170.ArrayNum = iVar5 + 1;
      *(int *)(local_170.AllocatorInstance.Data + (longlong)iVar5 * 4) = iVar3;
    }
    pFVar8 = pFVar8 + 4;
  }
  this_00 = &this->DungeonFilterData;
  bVar4 = TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Dungeon_RaidPartyFinder_Filter::OnClickApply",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x61,L"DungeonFilterData is nullptr.")
      ;
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    this_02 = (UDS_DungeonFilterData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_DungeonFilterData::SetFilteredDungeonList(this_02,&local_170,this->DungeonOpenLevel);
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar7[1].field_0x18 = this->ShowPlayableDungeonOnly;
    this_03 = UDS_DungeonManager::GetInst();
    if (this_03 != (UDS_DungeonManager *)0x0) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_DungeonManager::RequestFindRaidPartyList(this_03,(EDS_DungeonType *)(pUVar7 + 1));
      this_04 = UDS_WindowManager::GetInst();
      if (this_04 != (UDS_WindowManager *)0x0) {
        local_160 = 0.0;
        local_15c = 0;
        UDS_WindowManager::CloseWindow(this_04,RaidPartyFindFilter,&local_15c,&local_160);
      }
    }
  }
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
}

// OnClickCancel @ 14be2c160

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnClickCancel
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,RaidPartyFindFilter,local_res20,local_res18);
  }
  return;
}

// OnClickFliterSlotEvent @ 14be2c520

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnClickFliterSlotEvent
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,int param_1,bool param_2)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int local_res10 [6];
  
  this_00 = &this->DungeonFilterList;
  local_res10[0] = param_1;
  if (param_2) {
    iVar3 = (this->DungeonFilterList).ArrayNum;
    piVar1 = &(this->DungeonFilterList).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&this_00->AllocatorInstance,piVar1);
    }
    (this->DungeonFilterList).ArrayNum = iVar3 + 1;
    *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar3 * 4) = local_res10[0];
    RefreshFilterSlot(this);
    return;
  }
  pFVar4 = (this_00->AllocatorInstance).Data;
  pFVar2 = pFVar4 + (longlong)(this->DungeonFilterList).ArrayNum * 4;
  if (pFVar4 != pFVar2) {
    while (*(int *)pFVar4 != param_1) {
      pFVar4 = pFVar4 + 4;
      if (pFVar4 == pFVar2) {
        RefreshFilterSlot(this);
        return;
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::Remove(this_00,local_res10);
  }
  RefreshFilterSlot(this);
  return;
}

// OnClickReset @ 14be2ca50

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnClickReset
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  UObject *pUVar3;
  FName local_18;
  int local_10;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
  iVar2 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.FieldName;
  if (this->ShowPlayableDungeonOnly != (bool)pUVar3[1].field_0x18) {
    this->ShowPlayableDungeonOnly = (bool)pUVar3[1].field_0x18;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->DungeonFilterList,
             (TArray<int,TSizedDefaultAllocator<32>_> *)&pUVar3[1].field_0x8);
  RefreshFilterSlot(this);
  return;
}

// OnClickedFinderDungeon @ 14be2cea0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnClickedFinderDungeon
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,int param_1,bool param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  if (param_2) {
    pTVar1 = &this->DungeonFilterList;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    iVar3 = (this->DungeonFilterList).ArrayNum;
    pFVar2 = pFVar4 + (longlong)iVar3 * 4;
    while( true ) {
      if (pFVar4 == pFVar2) {
        if (iVar3 == (this->DungeonFilterList).ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar1->AllocatorInstance,&(this->DungeonFilterList).ArrayMax);
        }
        (this->DungeonFilterList).ArrayNum = iVar3 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 4) = local_res10[0];
        RefreshFilterSlot(this);
        return;
      }
      if (*(int *)pFVar4 == param_1) break;
      pFVar4 = pFVar4 + 4;
    }
  }
  else {
    pFVar4 = (this->DungeonFilterList).AllocatorInstance.Data;
    pFVar2 = pFVar4 + (longlong)(this->DungeonFilterList).ArrayNum * 4;
    if (pFVar4 != pFVar2) {
      while (*(int *)pFVar4 != param_1) {
        pFVar4 = pFVar4 + 4;
        if (pFVar4 == pFVar2) {
          RefreshFilterSlot(this);
          return;
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::Remove(&this->DungeonFilterList,local_res10);
    }
  }
  RefreshFilterSlot(this);
  return;
}

// OnSelectedFinderLevel @ 14be33010

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnSelectedFinderLevel
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,int param_1)

{
  if (this->DungeonOpenLevel != param_1) {
    this->DungeonOpenLevel = param_1;
    RefreshFilterSlot(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14be33630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::OnSetViewModel
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_DungeonManager *this_00;
  TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> TVar7;
  UObject *pUVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_238 [32];
  FName local_208;
  int local_200;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  TSharedPtr<FDS_ViewModelContext_RaidPartyFinderFilter,1> local_1d8;
  FDS_Text local_1c8;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  undefined1 local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RaidPartyFinderFilter>(&local_1d8,&local_178);
  if (local_1d8.Object == (FDS_ViewModelContext_RaidPartyFinderFilter *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14be338cb;
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Dungeon_RaidPartyFinder_Filter::OnSetViewModel",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x16,L"filterContext is nullptr.");
    FVar9.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    this->DungeonType = (local_1d8.Object)->DungeonType;
    this_00 = UDS_DungeonManager::GetInst();
    if (this_00 != (UDS_DungeonManager *)0x0) {
      TVar7 = UDS_DungeonManager::GetDungeonFilterData(this_00,(EDS_DungeonType)local_168);
                    /* WARNING: Load size is inaccurate */
      (this->DungeonFilterData).WeakPtr = *TVar7.WeakPtr;
      bVar5 = TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals
                        (&this->DungeonFilterData,(void *)0x0);
      if (!bVar5) {
        pUVar8 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
        this->DungeonOpenLevel = *(int *)&pUVar8[1].field_0x1c;
        pUVar8 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
        iVar3 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.FieldName;
        if (this->ShowPlayableDungeonOnly != (bool)pUVar8[1].field_0x18) {
          this->ShowPlayableDungeonOnly = (bool)pUVar8[1].field_0x18;
          local_200 = iVar3;
          local_208 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
        }
        pUVar8 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  (&this->DungeonFilterList,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)&pUVar8[1].field_0x8);
      }
    }
    SetDungeonLevelList(this);
    RefreshFilterSlot(this);
    FVar2 = FFieldNotificationClassDescriptor::IsInstanceDungeon.FieldName;
    bVar5 = this->DungeonType == Normal;
    if (this->IsInstanceDungeon != bVar5) {
      local_1f0 = FFieldNotificationClassDescriptor::IsInstanceDungeon.BitNumber;
      this->IsInstanceDungeon = bVar5;
      local_1f8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
    }
    iVar3 = FFieldNotificationClassDescriptor::LevelTitleText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::LevelTitleText.FieldName;
    local_1c8.StringTableType = StringUi;
    local_1c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1c8.StringEnumTableNameID.Number = 0;
    local_1c8.DateTime.Ticks = 0;
    local_1c8.TimeSpan.Ticks = 0;
    local_1c8.TimeExpressionType = None;
    local_1c8.IsExpression = false;
    local_1c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.UniqueString.Data.ArrayNum = 0;
    local_1c8.UniqueString.Data.ArrayMax = 0;
    local_1c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.FormatArgs.ArrayNum = 0;
    local_1c8.FormatArgs.ArrayMax = 0;
    local_1c8.StringTableID = 0x334ab;
    FDS_Text::operator=(&this->LevelTitleText,&local_1c8);
    local_1e8 = FVar2;
    local_1e0 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
    FVar4.Data = local_1c8.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1c8.FormatArgs.AllocatorInstance.Data,
               local_1c8.FormatArgs.ArrayNum);
    FVar9.Data = local_1c8.UniqueString.Data.AllocatorInstance.Data;
    if ((FDS_TextFormatArg *)FVar4.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar4.Data);
      FVar9.Data = local_1c8.UniqueString.Data.AllocatorInstance.Data;
    }
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
LAB_14be338cb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshFilterSlot @ 14be476d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::RefreshFilterSlot
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_01;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FDS_ViewModelContext *pFVar16;
  FDS_ViewModelContext *pFVar17;
  FScriptContainerElement *pFVar18;
  FDS_ViewModelContext *pFVar19;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [8];
  FDS_DungeonFilterOption local_1e0;
  uint local_1d0;
  FWeakObjectPtr local_1c8;
  UDS_UserObjectListItem *local_1c0;
  FScriptContainerElement *local_1b8;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  bVar7 = TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals
                    (&this->DungeonFilterData,(void *)0x0);
  if (!bVar7) {
    UDS_PlayerData::GetData((ulong64)&local_1c8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar7 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_1c8,(void *)0x0);
    if (bVar7) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Dungeon_RaidPartyFinder_Filter::RefreshFilterSlot",0x38,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_158.Ptr,0xce,L"playerData is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      pFVar17 = (FDS_ViewModelContext *)0x0;
      pTVar2 = &this->DungeonList;
      piVar1 = &(this->DungeonList).ArrayMax;
      (this->DungeonList).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
      local_1e0.OpenMaxLevel = this->DungeonOpenLevel;
      local_1e0.UseLevelGroup = false;
      local_1e0.OpenMinLevel = local_1e0.OpenMaxLevel;
      if (this->ShowPlayableDungeonOnly == true) {
        pUVar10 = FWeakObjectPtr::Get(&local_1c8);
        local_1e0.OpenMaxLevel = this->DungeonOpenLevel;
        if (*(int *)&pUVar10[6].field_0x10 < local_1e0.OpenMaxLevel) {
          pUVar10 = FWeakObjectPtr::Get(&local_1c8);
          local_1e0.OpenMaxLevel = *(int *)&pUVar10[6].field_0x10;
        }
      }
      pUVar10 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
      local_1e0.DungeonType = *(EDS_DungeonType *)(pUVar10 + 1);
      local_1e0.UseIsVisible = true;
      UDS_DungeonManager::GetFilteredDungeonList(pTVar2,&local_1e0);
      FDS_EntryBindingEventField::Reset(&this->FilterSlotEntryEventField);
      local_1d0 = (this->DungeonList).ArrayNum;
      uVar15 = (ulonglong)(int)local_1d0;
      pFVar19 = (FDS_ViewModelContext *)&DAT_00000001;
      pFVar18 = (pTVar2->AllocatorInstance).Data;
      local_1b8 = pFVar18 + uVar15 * 4;
      while( true ) {
        pFVar3 = local_1b8;
        if ((this->DungeonList).ArrayNum != (int)uVar15) {
          local_1e8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1e8);
        }
        iVar6 = FFieldNotificationClassDescriptor::IsAllSelected.BitNumber;
        FVar5 = FFieldNotificationClassDescriptor::IsAllSelected.FieldName;
        if (pFVar18 == pFVar3) break;
        pUVar10 = GetTransientPackageAsObject();
        this_00 = NewObject<UDS_UserObjectListItem>(pUVar10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar11 = ::operator_new(0x30);
        pFVar16 = pFVar17;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
          *(undefined4 *)&((atomic<int> *)&pFVar11[1].DerivedStaticStruct)->field_0x1 = 0;
          *(undefined2 *)&((atomic<int> *)&pFVar11[1].DerivedStaticStruct)[1].field_0x1 = 0;
          ((atomic<int> *)&pFVar11[1].DerivedStaticStruct)[1].field_0x3 = 0;
          *(undefined8 *)&pFVar11->DerivedStaticStruct = 0;
          (pFVar11->ViewModelName).ComparisonIndex = 0;
          (pFVar11->ViewModelName).Number = 0;
          pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartyFinderSlot__6B_;
          pFVar11[1]._padding_ = 0;
          *(undefined1 *)&pFVar11[1].DerivedStaticStruct = 0;
          pFVar16 = pFVar11;
        }
        pFVar12 = ::operator_new(0x20);
        pFVar11 = pFVar17;
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartyFinderSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar16;
          pFVar11 = pFVar12;
        }
        if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar13 = FDS_ViewModelContext_RaidPartyFinderSlot::StaticStruct();
        *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar13;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar11 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_178.Object = pFVar16;
          local_178.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar11;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_178);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_178.SharedReferenceCount.ReferenceController);
        }
        pFVar16->ViewModelTemplateKey = RaidPartyFinderFilterSlot;
        pFVar16[1]._padding_ = (longlong)*(int *)pFVar18;
        pFVar14 = (this->DungeonFilterList).AllocatorInstance.Data;
        pFVar3 = pFVar14 + (longlong)(this->DungeonFilterList).ArrayNum * 4;
        if (pFVar14 != pFVar3) {
          do {
            if (*(int *)pFVar14 == *(int *)pFVar18) {
              uVar8 = 1;
              goto LAB_14be47a05;
            }
            pFVar14 = pFVar14 + 4;
          } while (pFVar14 != pFVar3);
        }
        uVar8 = 0;
LAB_14be47a05:
        *(undefined1 *)&pFVar16[1].DerivedStaticStruct = uVar8;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar11->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_168.Object = pFVar16;
        local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
        UDS_UserObjectListItem::AddContext(this_00,&local_168);
        local_1c0 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (&this->FilterSlotEntryEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_1c0);
        if (*(char *)&pFVar16[1].DerivedStaticStruct == '\0') {
          pFVar19 = pFVar17;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        uVar15 = (ulonglong)local_1d0;
        pFVar18 = pFVar18 + 4;
      }
      if (this->IsAllSelected != SUB81(pFVar19,0)) {
        this->IsAllSelected = SUB81(pFVar19,0);
        local_1a0 = iVar6;
        local_1a8 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
      }
      local_190 = FFieldNotificationClassDescriptor::FilterSlotEntryEventField.BitNumber;
      local_198 = FFieldNotificationClassDescriptor::FilterSlotEntryEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
      local_180 = FFieldNotificationClassDescriptor::LevelVisibility.BitNumber;
      local_188 = FFieldNotificationClassDescriptor::LevelVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
  }
  return;
}

// SetDungeonFilterData @ 14be4acd0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetDungeonFilterData
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_DungeonManager *this_00;
  TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  undefined1 local_res10 [24];
  FName local_18;
  int local_10;
  
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 != (UDS_DungeonManager *)0x0) {
    TVar4 = UDS_DungeonManager::GetDungeonFilterData(this_00,(EDS_DungeonType)local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->DungeonFilterData).WeakPtr = *TVar4.WeakPtr;
    bVar3 = TWeakObjectPtr<UDS_DungeonFilterData,FWeakObjectPtr>::UEOpEquals
                      (&this->DungeonFilterData,(void *)0x0);
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
      this->DungeonOpenLevel = *(int *)&pUVar5[1].field_0x1c;
      pUVar5 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
      iVar2 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.FieldName;
      if (this->ShowPlayableDungeonOnly != (bool)pUVar5[1].field_0x18) {
        this->ShowPlayableDungeonOnly = (bool)pUVar5[1].field_0x18;
        local_10 = iVar2;
        local_18 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      pUVar5 = FWeakObjectPtr::Get(&(this->DungeonFilterData).WeakPtr);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&this->DungeonFilterList,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&pUVar5[1].field_0x8);
    }
  }
  return;
}

// SetDungeonLevelList @ 14be4ae50

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetDungeonLevelList
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DungeonManager *pUVar4;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FDS_ViewModelContext *pFVar11;
  ForAnyElementType FVar12;
  undefined1 local_res10 [8];
  UDS_UserObjectListItem *local_res18 [2];
  FName local_78;
  int local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  pUVar4 = UDS_DungeonManager::GetInst();
  if (pUVar4 != (UDS_DungeonManager *)0x0) {
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = (pUVar4->DungeonLevelList).ArrayNum;
    lVar10 = (longlong)local_60;
    pFVar1 = (pUVar4->DungeonLevelList).AllocatorInstance.Data;
    if (local_60 == 0) {
      local_5c = 0;
      iVar8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,pFVar1,lVar10 << 2);
      iVar8 = local_60;
    }
    pFVar1 = local_68.Data + (longlong)iVar8 * 4;
    FVar12.Data = local_68.Data;
    iVar9 = iVar8;
    while( true ) {
      pFVar11 = (FDS_ViewModelContext *)0x0;
      if (iVar9 != iVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar12.Data == pFVar1) break;
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar5 = ::operator_new(0x38);
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar5[1].ViewModelName.ComparisonIndex.Value + 1) = 0;
        *(undefined2 *)((longlong)&pFVar5[1].ViewModelName.Number + 1) = 0;
        *(undefined1 *)((longlong)&pFVar5[1].ViewModelName.Number + 3) = 0;
        pFVar5->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_DungeonLevelInfo__6B_;
        pFVar5[1]._padding_ = 0;
        pFVar5[1].DerivedStaticStruct = (UStruct *)0x0;
        *(undefined1 *)&pFVar5[1].ViewModelName.ComparisonIndex.Value = 0;
        pFVar11 = pFVar5;
      }
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_DungeonLevelInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar6[1].SharedReferenceCount = pFVar11;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar7 = FDS_ViewModelContext_DungeonLevelInfo::StaticStruct();
      pFVar11->DerivedStaticStruct = (UStruct *)pUVar7;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.Object = pFVar11;
        local_58.SharedReferenceCount.ReferenceController = pTVar6;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = RaidPartyFinderLevelSlot;
      pFVar11[1].DerivedStaticStruct = (UStruct *)(longlong)*(int *)FVar12.Data;
      *(bool *)&pFVar11[1].ViewModelName.ComparisonIndex.Value =
           *(int *)FVar12.Data == this->DungeonOpenLevel;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pFVar11;
      local_48.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_UserObjectListItem::AddContext(this_00,&local_48);
      local_res18[0] = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->DungeonLevelSlotEventField,(TObjectPtr<UDS_UserObjectListItem>)local_res18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      FVar12.Data = FVar12.Data + 4;
      iVar9 = local_60;
    }
    local_70 = FFieldNotificationClassDescriptor::DungeonLevelSlotEventField.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::DungeonLevelSlotEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  return;
}

// SetIsAllSelected @ 14be4b6c0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetIsAllSelected
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsAllSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsAllSelected.FieldName;
  if (this->IsAllSelected != param_1) {
    this->IsAllSelected = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsInstanceDungeon @ 14be4c040

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetIsInstanceDungeon
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsInstanceDungeon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsInstanceDungeon.FieldName;
  if (this->IsInstanceDungeon != param_1) {
    this->IsInstanceDungeon = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLevelTitleText @ 14be4d640

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetLevelTitleText
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::LevelTitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::LevelTitleText.FieldName;
  FDS_Text::operator=(&this->LevelTitleText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetShowPlayableDungeonOnly @ 14be51ad0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::SetShowPlayableDungeonOnly
          (UDS_VM_Dungeon_RaidPartyFinder_Filter *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ShowPlayableDungeonOnly.FieldName;
  if (this->ShowPlayableDungeonOnly != param_1) {
    this->ShowPlayableDungeonOnly = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be55200

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_Filter::UnbindModel(UDS_VM_Dungeon_RaidPartyFinder_Filter *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickedFinderDungeon
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedFinderLevel,
               this);
  }
  return;
}

