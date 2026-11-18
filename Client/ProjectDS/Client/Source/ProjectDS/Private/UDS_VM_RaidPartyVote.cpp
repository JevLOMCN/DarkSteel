// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetVotePlayerName_WrapperImpl @ 14b6d29d0

void __cdecl UDS_VM_RaidPartyVote::SetVotePlayerName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::VotePlayerName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VotePlayerName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xa0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xa0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xa0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetAgreeCount_WrapperImpl @ 14b6d2ad0

void __cdecl UDS_VM_RaidPartyVote::SetAgreeCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::AgreeCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::AgreeCount.FieldName;
  if (*(int *)((longlong)param_1 + 0xb0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xb0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetRejectCount_WrapperImpl @ 14b6d2ae0

void __cdecl UDS_VM_RaidPartyVote::SetRejectCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::RejectCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::RejectCount.FieldName;
  if (*(int *)((longlong)param_1 + 0xb4) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xb4) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVoteableState_WrapperImpl @ 14b6d2af0

void __cdecl UDS_VM_RaidPartyVote::SetVoteableState_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VoteableState.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VoteableState.FieldName;
  if (*(char *)((longlong)param_1 + 0xb8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xb8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVoteText_WrapperImpl @ 14b6d2b00

void __cdecl UDS_VM_RaidPartyVote::SetVoteText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::VoteText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xc0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickAgree_WrapperImpl @ 14b6d2b10

void __cdecl UDS_VM_RaidPartyVote::SetClickAgree_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FDS_RaidPartyRepo *pFVar4;
  FName FStack_78;
  int iStack_70;
  FDS_Text FStack_68;
  
  FDS_RaidPartyService::RequestRaidPartyKickVoteRes(true);
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar4->bIsVoteable = false;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  iVar2 = FFieldNotificationClassDescriptor::VoteableState.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteableState.FieldName;
  if ((bool)*(char *)((longlong)param_1 + 0xb8) != pFVar4->bIsVoteable) {
    *(bool *)((longlong)param_1 + 0xb8) = pFVar4->bIsVoteable;
    iStack_70 = iVar2;
    FStack_78 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_78);
  }
  iVar2 = FFieldNotificationClassDescriptor::VoteText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteText.FieldName;
  FStack_68.StringTableType = StringUi;
  FStack_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_68.StringEnumTableNameID.Number = 0;
  FStack_68.DateTime.Ticks = 0;
  FStack_68.TimeSpan.Ticks = 0;
  FStack_68.TimeExpressionType = None;
  FStack_68.IsExpression = false;
  FStack_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.UniqueString.Data.ArrayNum = 0;
  FStack_68.UniqueString.Data.ArrayMax = 0;
  FStack_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.FormatArgs.ArrayNum = 0;
  FStack_68.FormatArgs.ArrayMax = 0;
  FStack_68.StringTableID = 0x3349d;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xc0),&FStack_68);
  FStack_78 = FVar1;
  iStack_70 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_78)
  ;
  FVar3.Data = FStack_68.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_68.FormatArgs.AllocatorInstance.Data,
             FStack_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar3.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FStack_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// SetClickReject_WrapperImpl @ 14b6d2b50

void __cdecl UDS_VM_RaidPartyVote::SetClickReject_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FDS_RaidPartyRepo *pFVar4;
  FName FStack_78;
  int iStack_70;
  FDS_Text FStack_68;
  
  FDS_RaidPartyService::RequestRaidPartyKickVoteRes(false);
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar4->bIsVoteable = false;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  iVar2 = FFieldNotificationClassDescriptor::VoteableState.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteableState.FieldName;
  if ((bool)*(char *)((longlong)param_1 + 0xb8) != pFVar4->bIsVoteable) {
    *(bool *)((longlong)param_1 + 0xb8) = pFVar4->bIsVoteable;
    iStack_70 = iVar2;
    FStack_78 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_78);
  }
  iVar2 = FFieldNotificationClassDescriptor::VoteText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteText.FieldName;
  FStack_68.StringTableType = StringUi;
  FStack_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  FStack_68.StringEnumTableNameID.Number = 0;
  FStack_68.DateTime.Ticks = 0;
  FStack_68.TimeSpan.Ticks = 0;
  FStack_68.TimeExpressionType = None;
  FStack_68.IsExpression = false;
  FStack_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.UniqueString.Data.ArrayNum = 0;
  FStack_68.UniqueString.Data.ArrayMax = 0;
  FStack_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.FormatArgs.ArrayNum = 0;
  FStack_68.FormatArgs.ArrayMax = 0;
  FStack_68.StringTableID = 0x3349e;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xc0),&FStack_68);
  FStack_78 = FVar1;
  iStack_70 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))((longlong)param_1 + 0x28,&FStack_78)
  ;
  FVar3.Data = FStack_68.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)FStack_68.FormatArgs.AllocatorInstance.Data,
             FStack_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar3.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (FStack_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticClass @ 14b6d2b60

UClass * __cdecl UDS_VM_RaidPartyVote::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyVote.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyVote",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyVote.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyVote,600,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RaidPartyVote>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyVote>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyVote.InnerSingleton;
}

// UDS_VM_RaidPartyVote @ 14b6d7c60

UDS_VM_RaidPartyVote * __thiscall
UDS_VM_RaidPartyVote::UDS_VM_RaidPartyVote(UDS_VM_RaidPartyVote *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyVote__6B_;
  FText::FText(&this->VotePlayerName);
  (this->VoteText).StringTableType = None;
  (this->VoteText).StringTableID = 0;
  (this->VoteText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->VoteText).StringEnumTableNameID.Number = 0;
  (this->VoteText).DateTime.Ticks = 0;
  (this->VoteText).TimeSpan.Ticks = 0;
  (this->VoteText).TimeExpressionType = None;
  (this->VoteText).IsExpression = false;
  (this->VoteText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoteText).UniqueString.Data.ArrayNum = 0;
  (this->VoteText).UniqueString.Data.ArrayMax = 0;
  (this->VoteText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoteText).FormatArgs.ArrayNum = 0;
  (this->VoteText).FormatArgs.ArrayMax = 0;
  (this->ClickAgree)._padding_ = '\0';
  (this->ClickAgree).bIsCustomSelected = false;
  (this->ClickAgree).bIsLacked = false;
  (this->ClickAgree).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAgree).Delegate = 0;
  *(undefined8 *)&(this->ClickAgree).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAgree).Delegate.field_0x10 = 0;
  (this->ClickReject)._padding_ = '\0';
  (this->ClickReject).bIsCustomSelected = false;
  (this->ClickReject).bIsLacked = false;
  (this->ClickReject).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickReject).Delegate = 0;
  *(undefined8 *)&(this->ClickReject).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickReject).Delegate.field_0x10 = 0;
  (this->ProgressVM).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Agree).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Agree).StringEnumTableNameID.Number = 0;
  (this->FixedText_Agree).DateTime.Ticks = 0;
  (this->FixedText_Agree).TimeSpan.Ticks = 0;
  (this->FixedText_Agree).TimeExpressionType = None;
  (this->FixedText_Agree).IsExpression = false;
  (this->FixedText_Agree).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Agree).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Agree).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Agree).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Agree).FormatArgs.ArrayNum = 0;
  (this->FixedText_Agree).FormatArgs.ArrayMax = 0;
  (this->FixedText_Disagree).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Disagree).StringEnumTableNameID.Number = 0;
  (this->FixedText_Disagree).DateTime.Ticks = 0;
  (this->FixedText_Disagree).TimeSpan.Ticks = 0;
  (this->FixedText_Disagree).TimeExpressionType = None;
  (this->FixedText_Disagree).IsExpression = false;
  (this->FixedText_Disagree).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Disagree).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Disagree).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Disagree).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Disagree).FormatArgs.ArrayNum = 0;
  (this->FixedText_Disagree).FormatArgs.ArrayMax = 0;
  (this->EndTimerHandle).Handle = 0;
  this->IsHudOpen = false;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x334a0;
  (this->FixedText_Agree).StringTableType = StringUi;
  (this->FixedText_Agree).StringTableID = 0x334a1;
  (this->FixedText_Disagree).StringTableType = StringUi;
  (this->FixedText_Disagree).StringTableID = 0x334a2;
  return this;
}

// UDS_VM_RaidPartyVote @ 14b6d7e30

UDS_VM_RaidPartyVote * __thiscall
UDS_VM_RaidPartyVote::UDS_VM_RaidPartyVote(UDS_VM_RaidPartyVote *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyVote__6B_;
  FText::FText(&this->VotePlayerName);
  (this->VoteText).StringTableType = None;
  (this->VoteText).StringTableID = 0;
  (this->VoteText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->VoteText).StringEnumTableNameID.Number = 0;
  (this->VoteText).DateTime.Ticks = 0;
  (this->VoteText).TimeSpan.Ticks = 0;
  (this->VoteText).TimeExpressionType = None;
  (this->VoteText).IsExpression = false;
  (this->VoteText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoteText).UniqueString.Data.ArrayNum = 0;
  (this->VoteText).UniqueString.Data.ArrayMax = 0;
  (this->VoteText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoteText).FormatArgs.ArrayNum = 0;
  (this->VoteText).FormatArgs.ArrayMax = 0;
  (this->ClickAgree)._padding_ = '\0';
  (this->ClickAgree).bIsCustomSelected = false;
  (this->ClickAgree).bIsLacked = false;
  (this->ClickAgree).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAgree).Delegate = 0;
  *(undefined8 *)&(this->ClickAgree).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAgree).Delegate.field_0x10 = 0;
  (this->ClickReject)._padding_ = '\0';
  (this->ClickReject).bIsCustomSelected = false;
  (this->ClickReject).bIsLacked = false;
  (this->ClickReject).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickReject).Delegate = 0;
  *(undefined8 *)&(this->ClickReject).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickReject).Delegate.field_0x10 = 0;
  (this->ProgressVM).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Agree).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Agree).StringEnumTableNameID.Number = 0;
  (this->FixedText_Agree).DateTime.Ticks = 0;
  (this->FixedText_Agree).TimeSpan.Ticks = 0;
  (this->FixedText_Agree).TimeExpressionType = None;
  (this->FixedText_Agree).IsExpression = false;
  (this->FixedText_Agree).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Agree).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Agree).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Agree).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Agree).FormatArgs.ArrayNum = 0;
  (this->FixedText_Agree).FormatArgs.ArrayMax = 0;
  (this->FixedText_Disagree).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Disagree).StringEnumTableNameID.Number = 0;
  (this->FixedText_Disagree).DateTime.Ticks = 0;
  (this->FixedText_Disagree).TimeSpan.Ticks = 0;
  (this->FixedText_Disagree).TimeExpressionType = None;
  (this->FixedText_Disagree).IsExpression = false;
  (this->FixedText_Disagree).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Disagree).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Disagree).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Disagree).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Disagree).FormatArgs.ArrayNum = 0;
  (this->FixedText_Disagree).FormatArgs.ArrayMax = 0;
  (this->EndTimerHandle).Handle = 0;
  this->IsHudOpen = false;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x334a0;
  (this->FixedText_Agree).StringTableType = StringUi;
  (this->FixedText_Agree).StringTableID = 0x334a1;
  (this->FixedText_Disagree).StringTableType = StringUi;
  (this->FixedText_Disagree).StringTableID = 0x334a2;
  return this;
}

// ~UDS_VM_RaidPartyVote @ 14b6d9fd0

void __thiscall UDS_VM_RaidPartyVote::~UDS_VM_RaidPartyVote(UDS_VM_RaidPartyVote *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyVote__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Disagree).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Disagree).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Disagree).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Disagree).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Agree).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Agree).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Agree).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Agree).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickReject).Delegate);
  pvVar2 = *(void **)&(this->ClickReject).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickReject).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAgree).Delegate);
  pvVar2 = *(void **)&(this->ClickAgree).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAgree).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->VoteText).FormatArgs.AllocatorInstance.Data,
             (this->VoteText).FormatArgs.ArrayNum);
  pFVar1 = (this->VoteText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VoteText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->VotePlayerName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcbb0

IClassDescriptor * __thiscall
UDS_VM_RaidPartyVote::GetFieldNotificationDescriptor(UDS_VM_RaidPartyVote *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RaidPartyVote::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd5c0

UClass * __cdecl UDS_VM_RaidPartyVote::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyVote.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyVote",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyVote.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyVote,600,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RaidPartyVote>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyVote>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyVote.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RaidPartyVote @ 14b6ddee0

void __cdecl UDS_VM_RaidPartyVote::StaticRegisterNativesUDS_VM_RaidPartyVote(void)

{
  return;
}

// BindModel @ 14be77fa0

void __thiscall UDS_VM_RaidPartyVote::BindModel(UDS_VM_RaidPartyVote *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyVoteData,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_RaidPartyVote>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyVoteData,(UDS_VM_RaidPartyVote *)&stack0x00000010,
               (pmf_e4fb1803 *)this);
  }
  return;
}

// InitViewModel @ 14be8e420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_RaidPartyVote::InitViewModel(UDS_VM_RaidPartyVote *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Progress *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  if ((this->ProgressVM).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_Progress_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_Progress_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_Progress *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_Progress *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->ProgressVM).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnClickAgree @ 14be93490

void __thiscall
UDS_VM_RaidPartyVote::OnClickAgree(UDS_VM_RaidPartyVote *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FDS_RaidPartyRepo *pFVar4;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  FDS_RaidPartyService::RequestRaidPartyKickVoteRes(true);
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar4->bIsVoteable = false;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  iVar2 = FFieldNotificationClassDescriptor::VoteableState.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteableState.FieldName;
  if (this->VoteableState != pFVar4->bIsVoteable) {
    this->VoteableState = pFVar4->bIsVoteable;
    local_70 = iVar2;
    local_78 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  iVar2 = FFieldNotificationClassDescriptor::VoteText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteText.FieldName;
  local_68.StringTableType = StringUi;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  local_68.StringTableID = 0x3349d;
  FDS_Text::operator=(&this->VoteText,&local_68);
  local_78 = FVar1;
  local_70 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  FVar3.Data = local_68.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar3.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnClickReject @ 14be96780

void __thiscall
UDS_VM_RaidPartyVote::OnClickReject(UDS_VM_RaidPartyVote *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FDS_RaidPartyRepo *pFVar4;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  FDS_RaidPartyService::RequestRaidPartyKickVoteRes(false);
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar4->bIsVoteable = false;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  iVar2 = FFieldNotificationClassDescriptor::VoteableState.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteableState.FieldName;
  if (this->VoteableState != pFVar4->bIsVoteable) {
    this->VoteableState = pFVar4->bIsVoteable;
    local_70 = iVar2;
    local_78 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  iVar2 = FFieldNotificationClassDescriptor::VoteText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteText.FieldName;
  local_68.StringTableType = StringUi;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  local_68.StringTableID = 0x3349e;
  FDS_Text::operator=(&this->VoteText,&local_68);
  local_78 = FVar1;
  local_70 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  FVar3.Data = local_68.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar3.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnRaidPartyVoteChangedEvent @ 14be9b940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_RaidPartyVote::OnRaidPartyVoteChangedEvent(UDS_VM_RaidPartyVote *this)

{
  longlong lVar1;
  UDS_VM_Progress *pUVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  FDS_RaidPartyRepo *pFVar8;
  UDS_WindowManager *this_00;
  FDateTime FVar9;
  FDS_RaidPartyRepo *pFVar10;
  FDS_RaidPartyMemberInfo *pFVar11;
  FText *pFVar12;
  FTimerManager *pFVar13;
  FTimerData *pFVar14;
  ForAnyElementType FVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  uint local_res10 [6];
  FName local_128;
  int iStack_120;
  uint uStack_11c;
  FDS_Text local_118;
  FDS_Text local_c8;
  FString local_78;
  code *local_68;
  longlong lStack_60;
  FText local_58 [3];
  
  if ((this->ProgressVM).field0_0x0.DebugPtr != (UDS_VM_Progress *)0x0) {
    pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    lVar1 = (pFVar8->RaidPartyVoteData).VoteProposerUID;
    if ((pFVar8->RaidPartyVoteData).RaidPartyUID < 1) {
      if (((lVar1 < 1) && ((pFVar8->RaidPartyVoteData).PlayerUID < 1)) && (this->IsHudOpen == true))
      {
        this_00 = UDS_WindowManager::GetInst();
        if (this_00 != (UDS_WindowManager *)0x0) {
          local_res8[0] = 0.0;
          local_res10[0] = 0;
          UDS_WindowManager::CloseWindow(this_00,RaidPartyVote,local_res10,local_res8);
          return;
        }
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4842712695826284691>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Dungeon\\DS_VM_RaidPartyVote.cpp"
                           ,0x93,"false");
        if (!bVar7) {
          return;
        }
        goto code_r0x00014be9bda5;
      }
    }
    else if ((0 < lVar1) && (0 < (pFVar8->RaidPartyVoteData).PlayerUID)) {
      if (((this->ProgressVM).field0_0x0.DebugPtr)->IncreaseType == None) {
        if ((this->EndTimerHandle).Handle != 0) {
          pFVar13 = FDS_TimerManager::Get((UObject *)0x0);
          FTimerManager::ClearTimer(pFVar13,&this->EndTimerHandle);
        }
        FVar9 = UDS_TimeUtilManager::GetCurrentServerDateTime();
        fVar17 = (float)((double)(*(longlong *)FVar9.Ticks -
                                 (pFVar8->RaidPartyVoteData).VoteStartTime.Ticks) *
                        __real_3e7ad7f29abcaf48);
        fVar16 = DS_CommonDataHelper::VoteDuration();
        pFVar13 = FDS_TimerManager::Get((UObject *)0x0);
        local_128 = (FName)OnTimerEnd;
        iStack_120 = 0;
        lStack_60 = (ulonglong)uStack_11c << 0x20;
        local_68 = OnTimerEnd;
        FTimerManager::SetTimer<UDS_VM_RaidPartyVote>
                  (pFVar13,&this->EndTimerHandle,this,(pmf_e4fb1803 *)&local_68,fVar16 - fVar17,
                   false,__real_bf800000);
        UDS_VM_Progress::SetIncreaseType((this->ProgressVM).field0_0x0.DebugPtr,DeltaTime);
        pUVar2 = (this->ProgressVM).field0_0x0.DebugPtr;
        fVar16 = DS_CommonDataHelper::VoteDuration();
        UDS_VM_Progress::SetTargetValue(pUVar2,fVar16);
        UDS_VM_Progress::SetCurrentValue((this->ProgressVM).field0_0x0.DebugPtr,fVar17);
      }
      pFVar10 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar11 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID
                          (pFVar10,(pFVar8->RaidPartyVoteData).PlayerUID);
      ::FString::FString(&local_78,&pFVar11->NickName);
      pFVar10 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar11 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar10);
      if ((pFVar8->RaidPartyVoteData).PlayerUID == pFVar11->PlayerUID) {
        local_118.StringTableType = StringUi;
        local_118.StringTableID = 0x3349f;
        local_118.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_118.StringEnumTableNameID.Number = 0;
        local_118.DateTime.Ticks = 0;
        local_118.TimeSpan.Ticks = 0;
        local_118.TimeExpressionType = None;
        local_118.IsExpression = false;
        local_118.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.UniqueString.Data.ArrayNum = 0;
        local_118.UniqueString.Data.ArrayMax = 0;
        local_118.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.FormatArgs.ArrayNum = 0;
        local_118.FormatArgs.ArrayMax = 0;
        SetVoteText(this,&local_118);
        FVar6.Data = local_118.FormatArgs.AllocatorInstance.Data;
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_118.FormatArgs.AllocatorInstance.Data,
                   local_118.FormatArgs.ArrayNum);
        FVar15.Data = local_118.UniqueString.Data.AllocatorInstance.Data;
        if ((FDS_TextFormatArg *)FVar6.Data != (FDS_TextFormatArg *)0x0) {
          FMemory::Free(FVar6.Data);
          FVar15.Data = local_118.UniqueString.Data.AllocatorInstance.Data;
        }
      }
      else {
        if ((pFVar8->RaidPartyVoteData).VoteProposerUID != pFVar11->PlayerUID) goto LAB_14be9bc71;
        local_c8.StringTableType = StringUi;
        local_c8.StringTableID = 0x3349d;
        local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_c8.StringEnumTableNameID.Number = 0;
        local_c8.DateTime.Ticks = 0;
        local_c8.TimeSpan.Ticks = 0;
        local_c8.TimeExpressionType = None;
        local_c8.IsExpression = false;
        local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.UniqueString.Data.ArrayNum = 0;
        local_c8.UniqueString.Data.ArrayMax = 0;
        local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.FormatArgs.ArrayNum = 0;
        local_c8.FormatArgs.ArrayMax = 0;
        SetVoteText(this,&local_c8);
        FVar6.Data = local_c8.FormatArgs.AllocatorInstance.Data;
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data,
                   local_c8.FormatArgs.ArrayNum);
        FVar15.Data = local_c8.UniqueString.Data.AllocatorInstance.Data;
        if ((FDS_TextFormatArg *)FVar6.Data != (FDS_TextFormatArg *)0x0) {
          FMemory::Free(FVar6.Data);
          FVar15.Data = local_c8.UniqueString.Data.AllocatorInstance.Data;
        }
      }
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
LAB_14be9bc71:
      pFVar10 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      iVar5 = FFieldNotificationClassDescriptor::VoteableState.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::VoteableState.FieldName;
      if (this->VoteableState != pFVar10->bIsVoteable) {
        this->VoteableState = pFVar10->bIsVoteable;
        iStack_120 = iVar5;
        local_128 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_128);
      }
      pFVar12 = FText::FromString(local_58,&local_78);
      SetVotePlayerName(this,pFVar12);
      if (local_58[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58[0].TextData.Reference + 0x10))();
      }
      SetAgreeCount(this,&(pFVar8->RaidPartyVoteData).AgreementCount);
      SetRejectCount(this,&(pFVar8->RaidPartyVoteData).RejectCount);
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
      if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      return;
    }
    if ((this->EndTimerHandle).Handle != 0) {
      pFVar13 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar14 = FTimerManager::FindTimer(pFVar13,&this->EndTimerHandle);
      if (pFVar14 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(pFVar13,(FTimerHandle)(this->EndTimerHandle).Handle);
      }
      (this->EndTimerHandle).Handle = 0;
    }
    ResetVoteInfo(this);
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    pUVar2 = (this->ProgressVM).field0_0x0.DebugPtr;
    if (pUVar2 == (UDS_VM_Progress *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4842712695826284711>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Dungeon\\DS_VM_RaidPartyVote.cpp"
                         ,0xa7,"false");
      if (bVar7) goto code_r0x00014be9bda5;
    }
    else {
      UDS_VM_Progress::SetIncreaseType(pUVar2,None);
    }
    return;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4842712695826284680>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Dungeon\\DS_VM_RaidPartyVote.cpp"
                     ,0x88,"false");
  if (!bVar7) {
    return;
  }
code_r0x00014be9bda5:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnSetViewModel @ 14bea5540

void __thiscall
UDS_VM_RaidPartyVote::OnSetViewModel
          (UDS_VM_RaidPartyVote *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_Progress *pUVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  TSharedPtr<FDS_ViewModelContext_OpenRiadPartyVote,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  bVar4 = false;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_OpenRiadPartyVote>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_OpenRiadPartyVote *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_OpenRiadPartyVote *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = (local_28.Object)->bIsHudOpen;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pUVar2 = (this->ProgressVM).field0_0x0.DebugPtr;
  this->IsHudOpen = bVar4;
  if (pUVar2 != (UDS_VM_Progress *)0x0) {
    UDS_VM_Progress::SetIncreaseType(pUVar2,None);
    UDS_VM_Progress::SetMinValue((this->ProgressVM).field0_0x0.DebugPtr,0.0);
    pUVar2 = (this->ProgressVM).field0_0x0.DebugPtr;
    fVar5 = DS_CommonDataHelper::VoteDuration();
    UDS_VM_Progress::SetMaxValue(pUVar2,fVar5);
    UDS_VM_Progress::SetTimeExpression((this->ProgressVM).field0_0x0.DebugPtr,Seconds);
  }
  ResetVoteInfo(this);
  OnRaidPartyVoteChangedEvent(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTimerEnd @ 14bea7250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_RaidPartyVote::OnTimerEnd(UDS_VM_RaidPartyVote *this)

{
  UDS_VM_Progress *this_00;
  code *pcVar1;
  bool bVar2;
  FTimerManager *this_01;
  FTimerData *pFVar3;
  UDS_WindowManager *this_02;
  float local_res8 [2];
  uint local_res10 [2];
  
  if ((this->EndTimerHandle).Handle != 0) {
    this_01 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(this_01,&this->EndTimerHandle);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->EndTimerHandle).Handle);
    }
    (this->EndTimerHandle).Handle = 0;
  }
  ResetVoteInfo(this);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  this_00 = (this->ProgressVM).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_Progress *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4842712695826284768>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Dungeon\\DS_VM_RaidPartyVote.cpp"
                       ,0xe0,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bea7342:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UDS_VM_Progress::SetIncreaseType(this_00,None);
  if (this->IsHudOpen == true) {
    this_02 = UDS_WindowManager::GetInst();
    if (this_02 == (UDS_WindowManager *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4842712695826284779>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Dungeon\\DS_VM_RaidPartyVote.cpp"
                         ,0xeb,"false");
      if (bVar2) goto code_r0x00014bea7342;
    }
    else {
      local_res8[0] = 0.0;
      local_res10[0] = 0;
      UDS_WindowManager::CloseWindow(this_02,RaidPartyVote,local_res10,local_res8);
    }
  }
  return;
}

// ResetVoteInfo @ 14bead280

void __thiscall UDS_VM_RaidPartyVote::ResetVoteInfo(UDS_VM_RaidPartyVote *this)

{
  FName FVar1;
  int iVar2;
  FText *pFVar3;
  FText local_18;
  
  pFVar3 = FText::FText(&local_18);
  SetVotePlayerName(this,pFVar3);
  if ((FName)local_18.TextData.Reference != (FName)0x0) {
    (**(code **)(*(longlong *)local_18.TextData.Reference + 0x10))();
  }
  iVar2 = FFieldNotificationClassDescriptor::AgreeCount.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::AgreeCount.FieldName;
  if (this->AgreeCount != 0) {
    this->AgreeCount = 0;
    local_18.Flags = iVar2;
    local_18.TextData.Reference = (ITextData *)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar2 = FFieldNotificationClassDescriptor::RejectCount.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::RejectCount.FieldName;
  if (this->RejectCount != 0) {
    this->RejectCount = 0;
    local_18.Flags = iVar2;
    local_18.TextData.Reference = (ITextData *)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}

// SetAgreeCount @ 14bead500

void __thiscall UDS_VM_RaidPartyVote::SetAgreeCount(UDS_VM_RaidPartyVote *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::AgreeCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AgreeCount.FieldName;
  if (this->AgreeCount != *param_1) {
    this->AgreeCount = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRejectCount @ 14beb3ee0

void __thiscall UDS_VM_RaidPartyVote::SetRejectCount(UDS_VM_RaidPartyVote *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RejectCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RejectCount.FieldName;
  if (this->RejectCount != *param_1) {
    this->RejectCount = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVotePlayerName @ 14bebad90

void __thiscall UDS_VM_RaidPartyVote::SetVotePlayerName(UDS_VM_RaidPartyVote *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::VotePlayerName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VotePlayerName.FieldName;
  bVar5 = FText::IdenticalTo(&this->VotePlayerName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->VotePlayerName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->VotePlayerName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->VotePlayerName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetVoteText @ 14bebae50

void __thiscall UDS_VM_RaidPartyVote::SetVoteText(UDS_VM_RaidPartyVote *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::VoteText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::VoteText.FieldName;
  FDS_Text::operator=(&this->VoteText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVoteableState @ 14bebaeb0

void __thiscall UDS_VM_RaidPartyVote::SetVoteableState(UDS_VM_RaidPartyVote *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VoteableState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VoteableState.FieldName;
  if (this->VoteableState != *param_1) {
    this->VoteableState = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bebcba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_RaidPartyVote::UnbindModel(UDS_VM_RaidPartyVote *this)

{
  UDS_DungeonEvent *pUVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyVoteData,this);
  }
  if ((this->EndTimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,&this->EndTimerHandle);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->EndTimerHandle).Handle);
    }
    (this->EndTimerHandle).Handle = 0;
  }
  return;
}

