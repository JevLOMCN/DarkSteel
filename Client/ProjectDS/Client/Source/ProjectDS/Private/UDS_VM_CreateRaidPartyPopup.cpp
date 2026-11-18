// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// SetClickOk_WrapperImpl @ 14b6271a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_CreateRaidPartyPopup::SetClickOk_WrapperImpl(void *param_1,void *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FDS_RaidPartyRepo *pFVar6;
  UDS_DungeonManager *pUVar7;
  FString *pFVar8;
  UDS_WindowManager *this;
  int iVar9;
  longlong lVar10;
  float afStackX_8 [2];
  uint auStackX_18 [4];
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  
  pFVar5 = FText::ToString((FText *)((longlong)param_1 + 0xe0));
  FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar10 = (longlong)FStack_58.Data.ArrayNum;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (FStack_58.Data.ArrayNum == 0) {
    FStack_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_58.Data.ArrayNum,0,(ForAnyElementType *)&FStack_58,FStack_58.Data.ArrayNum
               ,&FStack_58.Data.ArrayMax);
    memcpy(FStack_58.Data.AllocatorInstance.Data,pFVar2,lVar10 * 2);
  }
  iVar9 = FStack_58.Data.ArrayNum + -1;
  if (FStack_58.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  iVar4 = DS_CommonDataHelper::RecruitmentMessageMaxLength();
  if (iVar4 < iVar9) goto LAB_14be961ff;
  iVar9 = FStack_58.Data.ArrayNum + -1;
  if (FStack_58.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  iVar4 = DS_CommonDataHelper::RecruitmentMessageMinLength();
  if (iVar9 < iVar4) goto LAB_14be961ff;
  pFVar5 = FText::ToString((FText *)((longlong)param_1 + 0x140));
  FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar10 = (longlong)FStack_68.Data.ArrayNum;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (FStack_68.Data.ArrayNum == 0) {
    FStack_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_68.Data.ArrayNum,0,(ForAnyElementType *)&FStack_68,FStack_68.Data.ArrayNum
               ,&FStack_68.Data.ArrayMax);
    memcpy(FStack_68.Data.AllocatorInstance.Data,pFVar2,lVar10 * 2);
  }
  pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar6);
  if (bVar3) {
    FDS_RaidPartyService::RequestRaidPartyChangeSetting
              (&FStack_58,&FStack_68,*(bool *)((longlong)param_1 + 0x1f1));
LAB_14be9615b:
    pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    iVar9 = FStack_68.Data.ArrayNum;
    _Src.Data = FStack_68.Data.AllocatorInstance.Data;
    pFVar5 = &pFVar6->Password;
    if (pFVar5 != &FStack_68) {
      lVar10 = (longlong)FStack_68.Data.ArrayNum;
      piVar1 = &(pFVar6->Password).Data.ArrayMax;
      (pFVar6->Password).Data.ArrayNum = FStack_68.Data.ArrayNum;
      if ((FStack_68.Data.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,FStack_68.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar5,
                   FStack_68.Data.ArrayNum,piVar1);
        if (iVar9 != 0) {
          memcpy((pFVar5->Data).AllocatorInstance.Data,_Src.Data,lVar10 * 2);
        }
      }
    }
    this = UDS_WindowManager::GetInst();
    if (this != (UDS_WindowManager *)0x0) {
      afStackX_8[0] = 0.0;
      auStackX_18[0] = 0;
      UDS_WindowManager::CloseWindow(this,PartyCreate,auStackX_18,afStackX_8);
    }
  }
  else {
    pUVar7 = UDS_DungeonManager::GetInst();
    if (pUVar7 != (UDS_DungeonManager *)0x0) {
      bVar3 = *(bool *)((longlong)param_1 + 0x1f1);
      pFVar5 = ::FString::FString(&FStack_48,&FStack_68);
      pFVar8 = ::FString::FString(&FStack_38,&FStack_58);
      FDS_RaidPartyService::RequestRaidPartyCreate(pUVar7->SelectedDungeonID,pFVar8,pFVar5,bVar3);
      goto LAB_14be9615b;
    }
  }
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
LAB_14be961ff:
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  return;
}

// SetClickCancel_WrapperImpl @ 14b6271b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_CreateRaidPartyPopup::SetClickCancel_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,PartyCreate,auStackX_20,afStackX_18);
  }
  return;
}

// SetRaidPartyName_WrapperImpl @ 14b6271c0

void __cdecl UDS_VM_CreateRaidPartyPopup::SetRaidPartyName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xe0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xe0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xe0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xe8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetHintRaidPartyName_WrapperImpl @ 14b6271d0

void __cdecl
UDS_VM_CreateRaidPartyPopup::SetHintRaidPartyName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::HintRaidPartyName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::HintRaidPartyName.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xf0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetRaidPartyPassword_WrapperImpl @ 14b6271e0

void __cdecl
UDS_VM_CreateRaidPartyPopup::SetRaidPartyPassword_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyPassword.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyPassword.FieldName;
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

// SetHintPassword_WrapperImpl @ 14b6271f0

void __cdecl UDS_VM_CreateRaidPartyPopup::SetHintPassword_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::HintPassword.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::HintPassword.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x150),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetDungeonTitleText_WrapperImpl @ 14b627200

void __cdecl
UDS_VM_CreateRaidPartyPopup::SetDungeonTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DungeonTitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DungeonTitleText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1a0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetIsNumericEditableText_WrapperImpl @ 14b627210

void __cdecl
UDS_VM_CreateRaidPartyPopup::SetIsNumericEditableText_WrapperImpl(void *param_1,void *param_2)

{
  SetIsNumericEditableText(param_1,*(bool *)param_2);
  return;
}

// SetIsPublic_WrapperImpl @ 14b627220

void __cdecl UDS_VM_CreateRaidPartyPopup::SetIsPublic_WrapperImpl(void *param_1,void *param_2)

{
  SetIsPublic(param_1,*(bool *)param_2);
  return;
}

// SetMaxPasswordLen_WrapperImpl @ 14b627230

void __cdecl UDS_VM_CreateRaidPartyPopup::SetMaxPasswordLen_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxPasswordLen(param_1,*(int *)param_2);
  return;
}

// SetMaxRecruitmentMessageLen_WrapperImpl @ 14b627240

void __cdecl
UDS_VM_CreateRaidPartyPopup::SetMaxRecruitmentMessageLen_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxRecruitmentMessageLen(param_1,*(int *)param_2);
  return;
}

// SetRaidPartyNameTextCommittedEventField_WrapperImpl @ 14b627250

void __cdecl
UDS_VM_CreateRaidPartyPopup::SetRaidPartyNameTextCommittedEventField_WrapperImpl
          (void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStackX_8 [8];
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xe0);
  if (plVar2 == plVar1) {
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  else {
    *(longlong **)((longlong)param_1 + 0xe0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  *(undefined4 *)((longlong)param_1 + 0xe8) = uVar3;
  return;
}

// SetRaidPartyPasswordTextCommittedEventField_WrapperImpl @ 14b627260

void __cdecl
UDS_VM_CreateRaidPartyPopup::SetRaidPartyPasswordTextCommittedEventField_WrapperImpl
          (void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStackX_8 [8];
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0x140);
  if (plVar2 == plVar1) {
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  else {
    *(longlong **)((longlong)param_1 + 0x140) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  *(undefined4 *)((longlong)param_1 + 0x148) = uVar3;
  return;
}

// SetPublicCheckButtonChangedEvent_WrapperImpl @ 14b627270

void __cdecl
UDS_VM_CreateRaidPartyPopup::SetPublicCheckButtonChangedEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsPublic.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsPublic.FieldName;
  if (*(char *)((longlong)param_1 + 0x1f1) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1f1) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b627280

UClass * __cdecl UDS_VM_CreateRaidPartyPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CreateRaidPartyPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CreateRaidPartyPopup",
               &Z_Registration_Info_UClass_UDS_VM_CreateRaidPartyPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CreateRaidPartyPopup,0x468,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_CreateRaidPartyPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_CreateRaidPartyPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CreateRaidPartyPopup.InnerSingleton;
}

// UDS_VM_CreateRaidPartyPopup @ 14b62dd70

UDS_VM_CreateRaidPartyPopup * __thiscall
UDS_VM_CreateRaidPartyPopup::UDS_VM_CreateRaidPartyPopup
          (UDS_VM_CreateRaidPartyPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CreateRaidPartyPopup__6B_;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  FText::FText(&this->RaidPartyName);
  (this->HintRaidPartyName).StringTableType = None;
  (this->HintRaidPartyName).StringTableID = 0;
  (this->HintRaidPartyName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->HintRaidPartyName).StringEnumTableNameID.Number = 0;
  (this->HintRaidPartyName).DateTime.Ticks = 0;
  (this->HintRaidPartyName).TimeSpan.Ticks = 0;
  (this->HintRaidPartyName).TimeExpressionType = None;
  (this->HintRaidPartyName).IsExpression = false;
  (this->HintRaidPartyName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HintRaidPartyName).UniqueString.Data.ArrayNum = 0;
  (this->HintRaidPartyName).UniqueString.Data.ArrayMax = 0;
  (this->HintRaidPartyName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintRaidPartyName).FormatArgs.ArrayNum = 0;
  (this->HintRaidPartyName).FormatArgs.ArrayMax = 0;
  FText::FText(&this->RaidPartyPassword);
  (this->HintPassword).StringTableType = None;
  (this->HintPassword).StringTableID = 0;
  (this->HintPassword).StringEnumTableNameID.ComparisonIndex = 0;
  (this->HintPassword).StringEnumTableNameID.Number = 0;
  (this->HintPassword).DateTime.Ticks = 0;
  (this->HintPassword).TimeSpan.Ticks = 0;
  (this->HintPassword).TimeExpressionType = None;
  (this->HintPassword).IsExpression = false;
  (this->HintPassword).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintPassword).UniqueString.Data.ArrayNum = 0;
  (this->HintPassword).UniqueString.Data.ArrayMax = 0;
  (this->HintPassword).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintPassword).FormatArgs.ArrayNum = 0;
  (this->HintPassword).FormatArgs.ArrayMax = 0;
  (this->DungeonTitleText).StringTableType = None;
  (this->DungeonTitleText).StringTableID = 0;
  (this->DungeonTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DungeonTitleText).StringEnumTableNameID.Number = 0;
  (this->DungeonTitleText).DateTime.Ticks = 0;
  (this->DungeonTitleText).TimeSpan.Ticks = 0;
  (this->DungeonTitleText).TimeExpressionType = None;
  (this->DungeonTitleText).IsExpression = false;
  (this->DungeonTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DungeonTitleText).UniqueString.Data.ArrayNum = 0;
  (this->DungeonTitleText).UniqueString.Data.ArrayMax = 0;
  (this->DungeonTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonTitleText).FormatArgs.ArrayNum = 0;
  (this->DungeonTitleText).FormatArgs.ArrayMax = 0;
  this->IsPublic = false;
  FText::FText(&(this->RaidPartyNameTextCommittedEventField).NewText);
  FText::FText(&(this->RaidPartyPasswordTextCommittedEventField).NewText);
  (this->PublicCheckButtonChangedEvent).bIsActivate = false;
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
  (this->FixedText_Place).StringTableType = StringUi;
  (this->FixedText_Place).StringTableID = 0x33455;
  (this->FixedText_Place).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Place).StringEnumTableNameID.Number = 0;
  (this->FixedText_Place).DateTime.Ticks = 0;
  (this->FixedText_Place).TimeSpan.Ticks = 0;
  (this->FixedText_Place).TimeExpressionType = None;
  (this->FixedText_Place).IsExpression = false;
  (this->FixedText_Place).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Place).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Place).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Place).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Place).FormatArgs.ArrayNum = 0;
  (this->FixedText_Place).FormatArgs.ArrayMax = 0;
  (this->FixedText_Difficulty).StringTableType = StringUi;
  (this->FixedText_Difficulty).StringTableID = 0x33456;
  (this->FixedText_Difficulty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Difficulty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Difficulty).DateTime.Ticks = 0;
  (this->FixedText_Difficulty).TimeSpan.Ticks = 0;
  (this->FixedText_Difficulty).TimeExpressionType = None;
  (this->FixedText_Difficulty).IsExpression = false;
  (this->FixedText_Difficulty).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Difficulty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Difficulty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Difficulty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Difficulty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Difficulty).FormatArgs.ArrayMax = 0;
  (this->FixedText_Registration).StringTableType = StringUi;
  (this->FixedText_Registration).StringTableID = 0x33458;
  (this->FixedText_Registration).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Registration).StringEnumTableNameID.Number = 0;
  (this->FixedText_Registration).DateTime.Ticks = 0;
  (this->FixedText_Registration).TimeSpan.Ticks = 0;
  (this->FixedText_Registration).TimeExpressionType = None;
  (this->FixedText_Registration).IsExpression = false;
  (this->FixedText_Registration).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Registration).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Registration).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Registration).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Registration).FormatArgs.ArrayNum = 0;
  (this->FixedText_Registration).FormatArgs.ArrayMax = 0;
  (this->FixedText_Password).StringTableType = StringUi;
  (this->FixedText_Password).StringTableID = 0x33457;
  (this->FixedText_Password).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Password).StringEnumTableNameID.Number = 0;
  (this->FixedText_Password).DateTime.Ticks = 0;
  (this->FixedText_Password).TimeSpan.Ticks = 0;
  (this->FixedText_Password).TimeExpressionType = None;
  (this->FixedText_Password).IsExpression = false;
  (this->FixedText_Password).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Password).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Password).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Password).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Password).FormatArgs.ArrayNum = 0;
  (this->FixedText_Password).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_CreateRaidPartyPopup @ 14b62e150

UDS_VM_CreateRaidPartyPopup * __thiscall
UDS_VM_CreateRaidPartyPopup::UDS_VM_CreateRaidPartyPopup
          (UDS_VM_CreateRaidPartyPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CreateRaidPartyPopup__6B_;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  FText::FText(&this->RaidPartyName);
  (this->HintRaidPartyName).StringTableType = None;
  (this->HintRaidPartyName).StringTableID = 0;
  (this->HintRaidPartyName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->HintRaidPartyName).StringEnumTableNameID.Number = 0;
  (this->HintRaidPartyName).DateTime.Ticks = 0;
  (this->HintRaidPartyName).TimeSpan.Ticks = 0;
  (this->HintRaidPartyName).TimeExpressionType = None;
  (this->HintRaidPartyName).IsExpression = false;
  (this->HintRaidPartyName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HintRaidPartyName).UniqueString.Data.ArrayNum = 0;
  (this->HintRaidPartyName).UniqueString.Data.ArrayMax = 0;
  (this->HintRaidPartyName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintRaidPartyName).FormatArgs.ArrayNum = 0;
  (this->HintRaidPartyName).FormatArgs.ArrayMax = 0;
  FText::FText(&this->RaidPartyPassword);
  (this->HintPassword).StringTableType = None;
  (this->HintPassword).StringTableID = 0;
  (this->HintPassword).StringEnumTableNameID.ComparisonIndex = 0;
  (this->HintPassword).StringEnumTableNameID.Number = 0;
  (this->HintPassword).DateTime.Ticks = 0;
  (this->HintPassword).TimeSpan.Ticks = 0;
  (this->HintPassword).TimeExpressionType = None;
  (this->HintPassword).IsExpression = false;
  (this->HintPassword).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintPassword).UniqueString.Data.ArrayNum = 0;
  (this->HintPassword).UniqueString.Data.ArrayMax = 0;
  (this->HintPassword).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HintPassword).FormatArgs.ArrayNum = 0;
  (this->HintPassword).FormatArgs.ArrayMax = 0;
  (this->DungeonTitleText).StringTableType = None;
  (this->DungeonTitleText).StringTableID = 0;
  (this->DungeonTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DungeonTitleText).StringEnumTableNameID.Number = 0;
  (this->DungeonTitleText).DateTime.Ticks = 0;
  (this->DungeonTitleText).TimeSpan.Ticks = 0;
  (this->DungeonTitleText).TimeExpressionType = None;
  (this->DungeonTitleText).IsExpression = false;
  (this->DungeonTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DungeonTitleText).UniqueString.Data.ArrayNum = 0;
  (this->DungeonTitleText).UniqueString.Data.ArrayMax = 0;
  (this->DungeonTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonTitleText).FormatArgs.ArrayNum = 0;
  (this->DungeonTitleText).FormatArgs.ArrayMax = 0;
  this->IsPublic = false;
  FText::FText(&(this->RaidPartyNameTextCommittedEventField).NewText);
  FText::FText(&(this->RaidPartyPasswordTextCommittedEventField).NewText);
  (this->PublicCheckButtonChangedEvent).bIsActivate = false;
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
  (this->FixedText_Place).StringTableType = StringUi;
  (this->FixedText_Place).StringTableID = 0x33455;
  (this->FixedText_Place).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Place).StringEnumTableNameID.Number = 0;
  (this->FixedText_Place).DateTime.Ticks = 0;
  (this->FixedText_Place).TimeSpan.Ticks = 0;
  (this->FixedText_Place).TimeExpressionType = None;
  (this->FixedText_Place).IsExpression = false;
  (this->FixedText_Place).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Place).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Place).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Place).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Place).FormatArgs.ArrayNum = 0;
  (this->FixedText_Place).FormatArgs.ArrayMax = 0;
  (this->FixedText_Difficulty).StringTableType = StringUi;
  (this->FixedText_Difficulty).StringTableID = 0x33456;
  (this->FixedText_Difficulty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Difficulty).StringEnumTableNameID.Number = 0;
  (this->FixedText_Difficulty).DateTime.Ticks = 0;
  (this->FixedText_Difficulty).TimeSpan.Ticks = 0;
  (this->FixedText_Difficulty).TimeExpressionType = None;
  (this->FixedText_Difficulty).IsExpression = false;
  (this->FixedText_Difficulty).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Difficulty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Difficulty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Difficulty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Difficulty).FormatArgs.ArrayNum = 0;
  (this->FixedText_Difficulty).FormatArgs.ArrayMax = 0;
  (this->FixedText_Registration).StringTableType = StringUi;
  (this->FixedText_Registration).StringTableID = 0x33458;
  (this->FixedText_Registration).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Registration).StringEnumTableNameID.Number = 0;
  (this->FixedText_Registration).DateTime.Ticks = 0;
  (this->FixedText_Registration).TimeSpan.Ticks = 0;
  (this->FixedText_Registration).TimeExpressionType = None;
  (this->FixedText_Registration).IsExpression = false;
  (this->FixedText_Registration).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Registration).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Registration).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Registration).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Registration).FormatArgs.ArrayNum = 0;
  (this->FixedText_Registration).FormatArgs.ArrayMax = 0;
  (this->FixedText_Password).StringTableType = StringUi;
  (this->FixedText_Password).StringTableID = 0x33457;
  (this->FixedText_Password).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Password).StringEnumTableNameID.Number = 0;
  (this->FixedText_Password).DateTime.Ticks = 0;
  (this->FixedText_Password).TimeSpan.Ticks = 0;
  (this->FixedText_Password).TimeExpressionType = None;
  (this->FixedText_Password).IsExpression = false;
  (this->FixedText_Password).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Password).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Password).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Password).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Password).FormatArgs.ArrayNum = 0;
  (this->FixedText_Password).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_CreateRaidPartyPopup @ 14b62f590

void __thiscall
UDS_VM_CreateRaidPartyPopup::~UDS_VM_CreateRaidPartyPopup(UDS_VM_CreateRaidPartyPopup *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CreateRaidPartyPopup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_OK).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Password).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Password).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Password).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Password).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Registration).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Registration).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Registration).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Registration).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Difficulty).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Difficulty).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Difficulty).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Difficulty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Place).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Place).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Place).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Place).UniqueString.Data.AllocatorInstance.Data;
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
  pIVar2 = (this->RaidPartyPasswordTextCommittedEventField).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->RaidPartyNameTextCommittedEventField).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DungeonTitleText).FormatArgs.AllocatorInstance.Data,
             (this->DungeonTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->DungeonTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->HintPassword).FormatArgs.AllocatorInstance.Data,
             (this->HintPassword).FormatArgs.ArrayNum);
  pFVar1 = (this->HintPassword).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HintPassword).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->RaidPartyPassword).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->HintRaidPartyName).FormatArgs.AllocatorInstance.Data,
             (this->HintRaidPartyName).FormatArgs.ArrayNum);
  pFVar1 = (this->HintRaidPartyName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HintRaidPartyName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->RaidPartyName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancel).Delegate);
  pvVar3 = *(void **)&(this->ClickCancel).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancel).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOk).Delegate);
  pvVar3 = *(void **)&(this->ClickOk).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOk).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631de0

IClassDescriptor * __thiscall
UDS_VM_CreateRaidPartyPopup::GetFieldNotificationDescriptor(UDS_VM_CreateRaidPartyPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CreateRaidPartyPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632c60

UClass * __cdecl UDS_VM_CreateRaidPartyPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CreateRaidPartyPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CreateRaidPartyPopup",
               &Z_Registration_Info_UClass_UDS_VM_CreateRaidPartyPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CreateRaidPartyPopup,0x468,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_CreateRaidPartyPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_CreateRaidPartyPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CreateRaidPartyPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CreateRaidPartyPopup @ 14b633160

void __cdecl UDS_VM_CreateRaidPartyPopup::StaticRegisterNativesUDS_VM_CreateRaidPartyPopup(void)

{
  return;
}

// CreateRaidParty @ 14be816b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_VM_CreateRaidPartyPopup::CreateRaidParty(UDS_VM_CreateRaidPartyPopup *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  bool bVar4;
  UDS_DungeonManager *pUVar5;
  FDS_DungeonBaseTableRow *pFVar6;
  UObject *pUVar7;
  FString *pFVar8;
  undefined1 auStackY_118 [32];
  FString local_e8;
  FString local_d8;
  FWeakObjectPtr local_c8;
  TPairInitializer<wchar_t_const_(&)[2],FString_&> local_c0;
  FString *local_b0;
  FText local_a8;
  FString local_98;
  undefined1 local_88 [24];
  FDateTime local_70;
  FTimespan FStack_68;
  EDS_TimeExpression local_60;
  uint local_5c;
  ForAnyElementType local_58;
  ForElementType<FSetElementId> local_50;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar5 = UDS_DungeonManager::GetInst();
  if (pUVar5 != (UDS_DungeonManager *)0x0) {
    UDS_PlayerData::GetData((ulong64)&local_c8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar4) {
      pFVar6 = FDS_DungeonBaseTableRow::GetRef((longlong)pUVar5->SelectedDungeonID,true);
      pUVar7 = FWeakObjectPtr::Get(&local_c8);
      pFVar8 = ::FString::FString(&local_98,(FString *)&pUVar7[7].field_0x20);
      ::FString::FString(&local_e8,L"{1}\'s Party");
      if (local_e8.Data.ArrayNum < 2) {
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
      }
      else {
        local_88._0_8_ = (FScriptContainerElement *)0x0;
        local_c0.Value = (FString *)&u_1;
        local_88._8_8_ = 0;
        FStack_68.Ticks = 0;
        local_60 = None;
        local_5c = 0x80;
        local_58.Data = (FScriptContainerElement *)&DAT_ffffffff;
        local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_40 = local_40 & 0xffffffff00000000;
        local_b0 = pFVar8;
        TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<wchar_t_const_(&)[2],FString_&>_>
                  ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                    *)local_88,&local_c0,(bool *)&local_c0.Value);
        ::FString::FormatImpl
                  (&local_d8,(wchar_t *)local_e8.Data.AllocatorInstance.Data,
                   (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                    *)local_88);
        local_40 = local_40 & 0xffffffff00000000;
        if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_50.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_88,0,local_88._8_4_);
        iVar2 = SUB84(local_88._8_8_,4);
        local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
        if (iVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
        }
        local_58.Data = (FScriptContainerElement *)&DAT_ffffffff;
        local_60 = None;
        if (0x80 < local_5c) {
          local_5c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
        }
        if ((void *)FStack_68.Ticks != (void *)0x0) {
          FMemory::Free((void *)FStack_68.Ticks);
        }
        if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_88._0_8_);
        }
      }
      pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      FText::FromString(&local_a8,&local_d8);
      local_88._0_8_ = local_88._0_8_ & 0xffffffffffffff00;
      local_88._8_8_ = 0;
      local_88._16_4_ = 0;
      local_88._20_4_ = 0;
      local_70.Ticks = 0;
      FStack_68.Ticks = 0;
      local_60 = None;
      local_5c = local_5c & 0xffffff00;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50.InlineData[0] = '\0';
      local_50.InlineData[1] = '\0';
      local_50.InlineData[2] = '\0';
      local_50.InlineData[3] = '\0';
      local_50._padding_ = 0;
      local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_40._0_4_ = 0;
      local_40._4_4_ = 0;
      FDS_Text::SetTextFromUniqueString((FDS_Text *)local_88,&local_d8);
      iVar2 = FFieldNotificationClassDescriptor::HintRaidPartyName.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::HintRaidPartyName.FieldName;
      FDS_Text::operator=(&this->HintRaidPartyName,(FDS_Text *)local_88);
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
      local_e8.Data.ArrayNum = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_50.SecondaryData,(int)local_40);
      if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50.SecondaryData);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      SetRaidPartyName(this,&local_a8);
      local_88._0_8_ = local_88._0_8_ & 0xffffffffffffff00;
      local_88._8_8_ = 0;
      local_88._16_4_ = 0;
      local_88._20_4_ = 0;
      local_60 = None;
      local_70.Ticks = 0;
      FStack_68.Ticks = 0;
      local_5c = local_5c & 0xffffff00;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50.InlineData[0] = '\0';
      local_50.InlineData[1] = '\0';
      local_50.InlineData[2] = '\0';
      local_50.InlineData[3] = '\0';
      local_50._padding_ = 0;
      local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_40._0_4_ = 0;
      local_40._4_4_ = 0;
      FDS_Text::SetTextFromStringTable((FDS_Text *)local_88,StringUi,0x33457);
      iVar2 = FFieldNotificationClassDescriptor::HintPassword.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::HintPassword.FieldName;
      FDS_Text::operator=(&this->HintPassword,(FDS_Text *)local_88);
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
      local_e8.Data.ArrayNum = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_50.SecondaryData,(int)local_40);
      if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50.SecondaryData);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      iVar2 = FFieldNotificationClassDescriptor::IsNumericEditableText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::IsNumericEditableText.FieldName;
      if (this->IsNumericEditableText != true) {
        this->IsNumericEditableText = true;
        local_e8.Data.ArrayNum = iVar2;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
      }
      iVar2 = FFieldNotificationClassDescriptor::IsPublic.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::IsPublic.FieldName;
      if (this->IsPublic != true) {
        this->IsPublic = true;
        local_e8.Data.ArrayNum = iVar2;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
      }
      local_88._0_8_ = local_88._0_8_ & 0xffffffffffffff00;
      local_88._8_8_ = 0;
      local_88._16_4_ = 0;
      local_88._20_4_ = 0;
      local_70.Ticks = 0;
      FStack_68.Ticks = 0;
      local_60 = None;
      local_5c = local_5c & 0xffffff00;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50.InlineData[0] = '\0';
      local_50.InlineData[1] = '\0';
      local_50.InlineData[2] = '\0';
      local_50.InlineData[3] = '\0';
      local_50._padding_ = 0;
      local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_40._0_4_ = 0;
      local_40._4_4_ = 0;
      FDS_Text::SetTextFromStringID((FDS_Text *)local_88,&pFVar6->ID_Name);
      iVar2 = FFieldNotificationClassDescriptor::DungeonTitleText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::DungeonTitleText.FieldName;
      FDS_Text::operator=(&this->DungeonTitleText,(FDS_Text *)local_88);
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar3;
      local_e8.Data.ArrayNum = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_50.SecondaryData,(int)local_40);
      if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50.SecondaryData);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// EditRaidParty @ 14be82150

void __thiscall UDS_VM_CreateRaidPartyPopup::EditRaidParty(UDS_VM_CreateRaidPartyPopup *this)

{
  ITextData *pIVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  FDS_RaidPartyRepo *pFVar5;
  FDS_DungeonBaseTableRow *pFVar6;
  undefined1 local_res8 [8];
  FName local_b8;
  int local_b0;
  FText local_a8;
  FText local_98;
  FDS_Text local_88;
  
  pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar6 = FDS_DungeonBaseTableRow::GetRef((longlong)(pFVar5->RaidPartyInfo).DungeonId,true);
  pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FText::FromString(&local_98,&(pFVar5->RaidPartyInfo).PartyName);
  pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  FText::FromString(&local_a8,&pFVar5->Password);
  SetRaidPartyName(this,&local_98);
  local_88.StringTableType = None;
  local_88.StringTableID = 0;
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
  FDS_Text::SetTextFromStringTable(&local_88,StringUi,0x33457);
  iVar3 = FFieldNotificationClassDescriptor::HintPassword.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::HintPassword.FieldName;
  FDS_Text::operator=(&this->HintPassword,&local_88);
  local_b8 = FVar2;
  local_b0 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
             local_88.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
  }
  if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
  }
  iVar3 = FFieldNotificationClassDescriptor::RaidPartyPassword.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::RaidPartyPassword.FieldName;
  bVar4 = FText::IdenticalTo(&this->RaidPartyPassword,&local_a8,None);
  if (!bVar4) {
    pIVar1 = (this->RaidPartyPassword).TextData.Reference;
    if (pIVar1 != local_a8.TextData.Reference) {
      (this->RaidPartyPassword).TextData.Reference = local_a8.TextData.Reference;
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                  (local_a8.TextData.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this->RaidPartyPassword).Flags = local_a8.Flags;
    local_b8 = FVar2;
    local_b0 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  }
  iVar3 = FFieldNotificationClassDescriptor::IsNumericEditableText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsNumericEditableText.FieldName;
  if (this->IsNumericEditableText != true) {
    this->IsNumericEditableText = true;
    local_b0 = iVar3;
    local_b8 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  }
  pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  iVar3 = FFieldNotificationClassDescriptor::IsPublic.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsPublic.FieldName;
  bVar4 = (pFVar5->RaidPartyInfo).IsPublic;
  if (this->IsPublic != bVar4) {
    this->IsPublic = bVar4;
    local_b0 = iVar3;
    local_b8 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  }
  local_88.StringTableType = None;
  local_88.StringTableID = 0;
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
  FDS_Text::SetTextFromStringID(&local_88,&pFVar6->ID_Name);
  iVar3 = FFieldNotificationClassDescriptor::DungeonTitleText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::DungeonTitleText.FieldName;
  FDS_Text::operator=(&this->DungeonTitleText,&local_88);
  local_b8 = FVar2;
  local_b0 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
             local_88.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
  }
  if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return;
}

// OnClickCancel @ 14be94040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CreateRaidPartyPopup::OnClickCancel
          (UDS_VM_CreateRaidPartyPopup *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PartyCreate,local_res20,local_res18);
  }
  return;
}

// OnClickOk @ 14be95fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CreateRaidPartyPopup::OnClickOk
          (UDS_VM_CreateRaidPartyPopup *this,FDS_ButtonEventField *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FDS_RaidPartyRepo *pFVar6;
  UDS_DungeonManager *pUVar7;
  FString *pFVar8;
  UDS_WindowManager *this_00;
  int iVar9;
  longlong lVar10;
  float local_res8 [2];
  uint local_res18 [4];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar5 = FText::ToString(&this->RaidPartyName);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar10 = (longlong)local_58.Data.ArrayNum;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pFVar2,lVar10 * 2);
  }
  iVar9 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  iVar4 = DS_CommonDataHelper::RecruitmentMessageMaxLength();
  if (iVar4 < iVar9) goto LAB_14be961ff;
  iVar9 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  iVar4 = DS_CommonDataHelper::RecruitmentMessageMinLength();
  if (iVar9 < iVar4) goto LAB_14be961ff;
  pFVar5 = FText::ToString(&this->RaidPartyPassword);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar10 = (longlong)local_68.Data.ArrayNum;
  pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,pFVar2,lVar10 * 2);
  }
  pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar6);
  if (bVar3) {
    FDS_RaidPartyService::RequestRaidPartyChangeSetting(&local_58,&local_68,this->IsPublic);
LAB_14be9615b:
    pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    iVar9 = local_68.Data.ArrayNum;
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    pFVar5 = &pFVar6->Password;
    if (pFVar5 != &local_68) {
      lVar10 = (longlong)local_68.Data.ArrayNum;
      piVar1 = &(pFVar6->Password).Data.ArrayMax;
      (pFVar6->Password).Data.ArrayNum = local_68.Data.ArrayNum;
      if ((local_68.Data.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_68.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar5,
                   local_68.Data.ArrayNum,piVar1);
        if (iVar9 != 0) {
          memcpy((pFVar5->Data).AllocatorInstance.Data,_Src.Data,lVar10 * 2);
        }
      }
    }
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_res8[0] = 0.0;
      local_res18[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,PartyCreate,local_res18,local_res8);
    }
  }
  else {
    pUVar7 = UDS_DungeonManager::GetInst();
    if (pUVar7 != (UDS_DungeonManager *)0x0) {
      bVar3 = this->IsPublic;
      pFVar5 = ::FString::FString(&local_48,&local_68);
      pFVar8 = ::FString::FString(&local_38,&local_58);
      FDS_RaidPartyService::RequestRaidPartyCreate(pUVar7->SelectedDungeonID,pFVar8,pFVar5,bVar3);
      goto LAB_14be9615b;
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14be961ff:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// OnPublicCheckButtonChangedEvent @ 14be9b6c0

void __thiscall
UDS_VM_CreateRaidPartyPopup::OnPublicCheckButtonChangedEvent
          (UDS_VM_CreateRaidPartyPopup *this,FDS_WidgetEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsPublic.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPublic.FieldName;
  if (this->IsPublic != param_1->bIsActivate) {
    this->IsPublic = param_1->bIsActivate;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnRaidPartyNameTextCommittedEventField @ 14be9b860

void __thiscall
UDS_VM_CreateRaidPartyPopup::OnRaidPartyNameTextCommittedEventField
          (UDS_VM_CreateRaidPartyPopup *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->NewText).TextData.Reference;
  pIVar2 = (this->RaidPartyName).TextData.Reference;
  if (pIVar2 == pIVar1) {
    uVar3 = (param_1->NewText).Flags;
  }
  else {
    (this->RaidPartyName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    uVar3 = (param_1->NewText).Flags;
  }
  (this->RaidPartyName).Flags = uVar3;
  return;
}

// OnRaidPartyPasswordTextCommittedEventField @ 14be9b8d0

void __thiscall
UDS_VM_CreateRaidPartyPopup::OnRaidPartyPasswordTextCommittedEventField
          (UDS_VM_CreateRaidPartyPopup *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->NewText).TextData.Reference;
  pIVar2 = (this->RaidPartyPassword).TextData.Reference;
  if (pIVar2 == pIVar1) {
    uVar3 = (param_1->NewText).Flags;
  }
  else {
    (this->RaidPartyPassword).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    uVar3 = (param_1->NewText).Flags;
  }
  (this->RaidPartyPassword).Flags = uVar3;
  return;
}

// OnSetViewModel @ 14be9d2d0

void __thiscall
UDS_VM_CreateRaidPartyPopup::OnSetViewModel
          (UDS_VM_CreateRaidPartyPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FDS_RaidPartyRepo *this_00;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    iVar5 = DS_CommonDataHelper::RaidPartyPasswordMaxLength();
    iVar3 = FFieldNotificationClassDescriptor::MaxPasswordLen.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::MaxPasswordLen.FieldName;
    if (this->MaxPasswordLen != iVar5) {
      this->MaxPasswordLen = iVar5;
      local_10 = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar5 = DS_CommonDataHelper::RecruitmentMessageMaxLength();
    iVar3 = FFieldNotificationClassDescriptor::MaxRecruitmentMessageLen.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::MaxRecruitmentMessageLen.FieldName;
    if (this->MaxRecruitmentMessageLen != iVar5) {
      this->MaxRecruitmentMessageLen = iVar5;
      local_10 = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
    if (!bVar4) {
      CreateRaidParty(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    EditRaidParty(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDungeonTitleText @ 14beaee90

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetDungeonTitleText
          (UDS_VM_CreateRaidPartyPopup *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DungeonTitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DungeonTitleText.FieldName;
  FDS_Text::operator=(&this->DungeonTitleText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetHintPassword @ 14beafcf0

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetHintPassword(UDS_VM_CreateRaidPartyPopup *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::HintPassword.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::HintPassword.FieldName;
  FDS_Text::operator=(&this->HintPassword,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetHintRaidPartyName @ 14beafd50

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetHintRaidPartyName
          (UDS_VM_CreateRaidPartyPopup *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::HintRaidPartyName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::HintRaidPartyName.FieldName;
  FDS_Text::operator=(&this->HintRaidPartyName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsNumericEditableText @ 14beb17f0

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetIsNumericEditableText
          (UDS_VM_CreateRaidPartyPopup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsNumericEditableText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsNumericEditableText.FieldName;
  if (this->IsNumericEditableText != param_1) {
    this->IsNumericEditableText = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsPublic @ 14beb19b0

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetIsPublic(UDS_VM_CreateRaidPartyPopup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsPublic.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPublic.FieldName;
  if (this->IsPublic != param_1) {
    this->IsPublic = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMaxPasswordLen @ 14beb2dd0

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetMaxPasswordLen(UDS_VM_CreateRaidPartyPopup *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MaxPasswordLen.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxPasswordLen.FieldName;
  if (this->MaxPasswordLen != param_1) {
    this->MaxPasswordLen = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMaxRecruitmentMessageLen @ 14beb2e20

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetMaxRecruitmentMessageLen
          (UDS_VM_CreateRaidPartyPopup *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MaxRecruitmentMessageLen.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxRecruitmentMessageLen.FieldName;
  if (this->MaxRecruitmentMessageLen != param_1) {
    this->MaxRecruitmentMessageLen = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRaidPartyName @ 14beb3c80

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetRaidPartyName(UDS_VM_CreateRaidPartyPopup *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyName.FieldName;
  bVar5 = FText::IdenticalTo(&this->RaidPartyName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->RaidPartyName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->RaidPartyName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->RaidPartyName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetRaidPartyPassword @ 14beb3d40

void __thiscall
UDS_VM_CreateRaidPartyPopup::SetRaidPartyPassword(UDS_VM_CreateRaidPartyPopup *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RaidPartyPassword.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RaidPartyPassword.FieldName;
  bVar5 = FText::IdenticalTo(&this->RaidPartyPassword,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->RaidPartyPassword).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->RaidPartyPassword).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->RaidPartyPassword).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

