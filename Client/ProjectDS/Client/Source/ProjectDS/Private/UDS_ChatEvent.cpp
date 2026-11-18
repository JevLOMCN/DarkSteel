// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4485a0

UClass * __cdecl UDS_ChatEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChatEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChatEvent",
               &Z_Registration_Info_UClass_UDS_ChatEvent.InnerSingleton,
               StaticRegisterNativesUDS_ChatEvent,0x4d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ChatEvent>,InternalVTableHelperCtorCaller<UDS_ChatEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChatEvent.InnerSingleton;
}

// UDS_ChatEvent @ 14b44d750

UDS_ChatEvent * __thiscall UDS_ChatEvent::UDS_ChatEvent(UDS_ChatEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *pUVar1;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ChatEvent__6B_;
  (this->OnTranslateChatMessage)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBU__TWeakObjectPtr_VUDS_ChattingData__UFWeakObjectPtr______V__6B_
  ;
  *(undefined8 *)&(this->OnChangeChattingType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeChattingType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeChattingType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeChattingType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickChattingTab).Delegate = 0;
  *(undefined8 *)&(this->OnClickChattingTab).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickChattingTab).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickChattingTab).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickChattingType).Delegate = 0;
  *(undefined8 *)&(this->OnClickChattingType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickChattingType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickChattingType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedChatType).Delegate = 0;
  *(undefined8 *)&(this->OnChangedChatType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedChatType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedChatType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeInputChattingType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeInputChattingType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeInputChattingType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeInputChattingType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedChattingCommand).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedChattingCommand).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedChattingCommand).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedChattingCommand).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedChattingCommand).Delegate = 0;
  *(undefined8 *)&(this->OnClickedChattingCommand).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedChattingCommand).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedChattingCommand).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedChattingTabType).Delegate = 0;
  *(undefined8 *)&(this->OnClickedChattingTabType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedChattingTabType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedChattingTabType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedSubTabIndex).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedSubTabIndex).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedSubTabIndex).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedSubTabIndex).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedSubTabIndex).Delegate = 0;
  *(undefined8 *)&(this->OnClickedSubTabIndex).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedSubTabIndex).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedSubTabIndex).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeChattingTabType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeChattingTabType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeChattingTabType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeChattingTabType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateChattingTabs).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateChattingTabs).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateChattingTabs).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateChattingTabs).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateMarkMessageAsRead).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateMarkMessageAsRead).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateMarkMessageAsRead).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateMarkMessageAsRead).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnAddChatMessage).Delegate = 0;
  *(undefined8 *)&(this->OnAddChatMessage).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnAddChatMessage).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnAddChatMessage).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnTranslateChatMessage).Subscriptions = 0;
  *(undefined8 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnTranslateChatMessage);
  }
  *(undefined8 *)&(this->OnChangedChatMode).Delegate = 0;
  *(undefined8 *)&(this->OnRefreshUserInfo).Subscriptions = 0;
  (this->OnRefreshUserInfo)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_J__V__6B_;
  *(undefined8 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x20 = 0;
  *(undefined8 *)&(this->OnChangedChatMode).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedChatMode).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedChatMode).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnQueryChatMode).Delegate = 0;
  *(undefined8 *)&(this->OnQueryChatMode).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnQueryChatMode).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCommitInputText).Delegate = 0;
  *(undefined8 *)&(this->OnCommitInputText).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCommitInputText).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCommitInputText).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInsertLinkText).Delegate = 0;
  *(undefined8 *)&(this->OnInsertLinkText).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInsertLinkText).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInsertLinkText).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInviteGroup).Delegate = 0;
  *(undefined8 *)&(this->OnInviteGroup).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInviteGroup).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInviteGroup).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChatPopup).Delegate = 0;
  *(undefined8 *)&(this->OnChatPopup).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChatPopup).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChatPopup).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRefreshChatRoom).Delegate = 0;
  *(undefined8 *)&(this->OnRefreshChatRoom).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRefreshChatRoom).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRefreshChatRoom).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedGroupOwner).Delegate = 0;
  *(undefined8 *)&(this->OnChangedGroupOwner).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedGroupOwner).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedGroupOwner).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedGroupMember).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedGroupMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedGroupMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedGroupMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRefreshRecentWhispers).Delegate = 0;
  *(undefined8 *)&(this->OnRefreshRecentWhispers).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRefreshRecentWhispers).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRefreshRecentWhispers).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedWhisper).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedWhisper).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedWhisper).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedWhisper).Delegate.field_0x18 = 2;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnRefreshUserInfo);
  }
  *(undefined8 *)&(this->OnRecvCustomData).Delegate = 0;
  *(undefined8 *)&(this->OnRecvCustomData).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRecvCustomData).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedCustomFilter).Delegate = 0;
  *(undefined8 *)&(this->OnChangedCustomFilter).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedCustomFilter).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedMacroSlot).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedMacroSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedMacroSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedMacroSlot).Delegate = 0;
  *(undefined8 *)&(this->OnClickedMacroSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedMacroSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedMacro).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedMacro).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedMacro).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedChatOption).Delegate = 0;
  *(undefined8 *)&(this->OnChangedChatOption).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedChatOption).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnAddedKeyActionType).Delegate = 0;
  *(undefined8 *)&(this->OnAddedKeyActionType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnAddedKeyActionType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRecvCustomData).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedCustomFilter).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedMacroSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedMacroSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedMacro).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedChatOption).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnAddedKeyActionType).Delegate.field_0x18 = 2;
  return this;
}

// UDS_ChatEvent @ 14b44dc00

UDS_ChatEvent * __thiscall
UDS_ChatEvent::UDS_ChatEvent(UDS_ChatEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *pUVar1;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ChatEvent__6B_;
  (this->OnTranslateChatMessage)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBU__TWeakObjectPtr_VUDS_ChattingData__UFWeakObjectPtr______V__6B_
  ;
  *(undefined8 *)&(this->OnChangeChattingType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeChattingType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeChattingType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeChattingType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickChattingTab).Delegate = 0;
  *(undefined8 *)&(this->OnClickChattingTab).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickChattingTab).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickChattingTab).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickChattingType).Delegate = 0;
  *(undefined8 *)&(this->OnClickChattingType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickChattingType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickChattingType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedChatType).Delegate = 0;
  *(undefined8 *)&(this->OnChangedChatType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedChatType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedChatType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeInputChattingType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeInputChattingType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeInputChattingType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeInputChattingType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedChattingCommand).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedChattingCommand).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedChattingCommand).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedChattingCommand).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedChattingCommand).Delegate = 0;
  *(undefined8 *)&(this->OnClickedChattingCommand).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedChattingCommand).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedChattingCommand).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedChattingTabType).Delegate = 0;
  *(undefined8 *)&(this->OnClickedChattingTabType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedChattingTabType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedChattingTabType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedSubTabIndex).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedSubTabIndex).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedSubTabIndex).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedSubTabIndex).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedSubTabIndex).Delegate = 0;
  *(undefined8 *)&(this->OnClickedSubTabIndex).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedSubTabIndex).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedSubTabIndex).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeChattingTabType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeChattingTabType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeChattingTabType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeChattingTabType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateChattingTabs).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateChattingTabs).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateChattingTabs).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateChattingTabs).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateMarkMessageAsRead).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateMarkMessageAsRead).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateMarkMessageAsRead).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateMarkMessageAsRead).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnAddChatMessage).Delegate = 0;
  *(undefined8 *)&(this->OnAddChatMessage).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnAddChatMessage).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnAddChatMessage).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnTranslateChatMessage).Subscriptions = 0;
  *(undefined8 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnTranslateChatMessage);
  }
  *(undefined8 *)&(this->OnChangedChatMode).Delegate = 0;
  *(undefined8 *)&(this->OnRefreshUserInfo).Subscriptions = 0;
  (this->OnRefreshUserInfo)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_J__V__6B_;
  *(undefined8 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x20 = 0;
  *(undefined8 *)&(this->OnChangedChatMode).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedChatMode).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedChatMode).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnQueryChatMode).Delegate = 0;
  *(undefined8 *)&(this->OnQueryChatMode).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnQueryChatMode).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCommitInputText).Delegate = 0;
  *(undefined8 *)&(this->OnCommitInputText).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCommitInputText).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCommitInputText).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInsertLinkText).Delegate = 0;
  *(undefined8 *)&(this->OnInsertLinkText).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInsertLinkText).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInsertLinkText).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInviteGroup).Delegate = 0;
  *(undefined8 *)&(this->OnInviteGroup).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInviteGroup).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInviteGroup).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChatPopup).Delegate = 0;
  *(undefined8 *)&(this->OnChatPopup).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChatPopup).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChatPopup).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRefreshChatRoom).Delegate = 0;
  *(undefined8 *)&(this->OnRefreshChatRoom).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRefreshChatRoom).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRefreshChatRoom).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedGroupOwner).Delegate = 0;
  *(undefined8 *)&(this->OnChangedGroupOwner).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedGroupOwner).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedGroupOwner).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedGroupMember).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedGroupMember).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedGroupMember).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedGroupMember).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRefreshRecentWhispers).Delegate = 0;
  *(undefined8 *)&(this->OnRefreshRecentWhispers).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRefreshRecentWhispers).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRefreshRecentWhispers).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedWhisper).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedWhisper).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedWhisper).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedWhisper).Delegate.field_0x18 = 2;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x48 = 0;
  pUVar1 = UDS_EventManager::GetInst();
  if (pUVar1 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (pUVar1,(FDS_IDelegateCleanable *)&this->OnRefreshUserInfo);
  }
  *(undefined8 *)&(this->OnRecvCustomData).Delegate = 0;
  *(undefined8 *)&(this->OnRecvCustomData).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRecvCustomData).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedCustomFilter).Delegate = 0;
  *(undefined8 *)&(this->OnChangedCustomFilter).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedCustomFilter).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedMacroSlot).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedMacroSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedMacroSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickedMacroSlot).Delegate = 0;
  *(undefined8 *)&(this->OnClickedMacroSlot).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickedMacroSlot).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedMacro).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedMacro).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedMacro).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedChatOption).Delegate = 0;
  *(undefined8 *)&(this->OnChangedChatOption).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedChatOption).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnAddedKeyActionType).Delegate = 0;
  *(undefined8 *)&(this->OnAddedKeyActionType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnAddedKeyActionType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRecvCustomData).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedCustomFilter).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedMacroSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickedMacroSlot).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedMacro).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedChatOption).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnAddedKeyActionType).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_ChatEvent @ 14b4501d0

void __thiscall UDS_ChatEvent::~UDS_ChatEvent(UDS_ChatEvent *this)

{
  void *pvVar1;
  UDS_EventManager *pUVar2;
  
  this->_padding_ = (longlong)&___7UDS_ChatEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAddedKeyActionType).Delegate.field_0x8,
             *(int *)&(this->OnAddedKeyActionType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnAddedKeyActionType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddedKeyActionType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedChatOption).Delegate.field_0x8,
             *(int *)&(this->OnChangedChatOption).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedChatOption).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedChatOption);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedMacro).Delegate.field_0x8,
             *(int *)&(this->OnSelectedMacro).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedMacro).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedMacro);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickedMacroSlot).Delegate.field_0x8,
             *(int *)&(this->OnClickedMacroSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickedMacroSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickedMacroSlot);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedMacroSlot).Delegate.field_0x8,
             *(int *)&(this->OnSelectedMacroSlot).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedMacroSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedMacroSlot);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedCustomFilter).Delegate.field_0x8,
             *(int *)&(this->OnChangedCustomFilter).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedCustomFilter).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedCustomFilter);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRecvCustomData).Delegate.field_0x8,
             *(int *)&(this->OnRecvCustomData).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRecvCustomData).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRecvCustomData);
  (this->OnRefreshUserInfo)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CB_J__V__6B_;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnRefreshUserInfo);
  }
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnRefreshUserInfo).Subscriptions);
  *(undefined4 *)&(this->OnRefreshUserInfo).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnRefreshUserInfo).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnRefreshUserInfo).Subscriptions);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedWhisper).Delegate.field_0x8,
             *(int *)&(this->OnSelectedWhisper).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedWhisper).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedWhisper);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRefreshRecentWhispers).Delegate.field_0x8,
             *(int *)&(this->OnRefreshRecentWhispers).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRefreshRecentWhispers).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRefreshRecentWhispers);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedGroupMember).Delegate.field_0x8,
             *(int *)&(this->OnSelectedGroupMember).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedGroupMember).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedGroupMember);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedGroupOwner).Delegate.field_0x8,
             *(int *)&(this->OnChangedGroupOwner).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedGroupOwner).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedGroupOwner);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRefreshChatRoom).Delegate.field_0x8,
             *(int *)&(this->OnRefreshChatRoom).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRefreshChatRoom).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRefreshChatRoom);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChatPopup).Delegate.field_0x8,
             *(int *)&(this->OnChatPopup).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChatPopup).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChatPopup);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInviteGroup).Delegate.field_0x8,
             *(int *)&(this->OnInviteGroup).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnInviteGroup).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInviteGroup);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInsertLinkText).Delegate.field_0x8,
             *(int *)&(this->OnInsertLinkText).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnInsertLinkText).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInsertLinkText);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCommitInputText).Delegate.field_0x8,
             *(int *)&(this->OnCommitInputText).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnCommitInputText).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCommitInputText);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryChatMode);
  pvVar1 = *(void **)&(this->OnQueryChatMode).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryChatMode);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedChatMode).Delegate.field_0x8,
             *(int *)&(this->OnChangedChatMode).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedChatMode).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedChatMode);
  (this->OnTranslateChatMessage)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBU__TWeakObjectPtr_VUDS_ChattingData__UFWeakObjectPtr______V__6B_
  ;
  pUVar2 = UDS_EventManager::GetInst();
  if (pUVar2 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (pUVar2,(FDS_IDelegateCleanable *)&this->OnTranslateChatMessage);
  }
  TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnTranslateChatMessage).Subscriptions);
  *(undefined4 *)&(this->OnTranslateChatMessage).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnTranslateChatMessage).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnTranslateChatMessage).Subscriptions);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAddChatMessage).Delegate.field_0x8,
             *(int *)&(this->OnAddChatMessage).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnAddChatMessage).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddChatMessage);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateMarkMessageAsRead).Delegate.field_0x8,
             *(int *)&(this->OnUpdateMarkMessageAsRead).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateMarkMessageAsRead).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateMarkMessageAsRead);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateChattingTabs).Delegate.field_0x8,
             *(int *)&(this->OnUpdateChattingTabs).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateChattingTabs).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateChattingTabs);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeChattingTabType).Delegate.field_0x8,
             *(int *)&(this->OnChangeChattingTabType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeChattingTabType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeChattingTabType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickedSubTabIndex).Delegate.field_0x8,
             *(int *)&(this->OnClickedSubTabIndex).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickedSubTabIndex).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickedSubTabIndex);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedSubTabIndex).Delegate.field_0x8,
             *(int *)&(this->OnSelectedSubTabIndex).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedSubTabIndex).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedSubTabIndex);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickedChattingTabType).Delegate.field_0x8,
             *(int *)&(this->OnClickedChattingTabType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickedChattingTabType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickedChattingTabType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickedChattingCommand).Delegate.field_0x8,
             *(int *)&(this->OnClickedChattingCommand).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickedChattingCommand).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickedChattingCommand);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedChattingCommand).Delegate.field_0x8,
             *(int *)&(this->OnSelectedChattingCommand).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedChattingCommand).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedChattingCommand);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeInputChattingType).Delegate.field_0x8,
             *(int *)&(this->OnChangeInputChattingType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeInputChattingType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeInputChattingType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedChatType).Delegate.field_0x8,
             *(int *)&(this->OnChangedChatType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedChatType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedChatType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickChattingType).Delegate.field_0x8,
             *(int *)&(this->OnClickChattingType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickChattingType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickChattingType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickChattingTab).Delegate.field_0x8,
             *(int *)&(this->OnClickChattingTab).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickChattingTab).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickChattingTab);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeChattingType).Delegate.field_0x8,
             *(int *)&(this->OnChangeChattingType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeChattingType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeChattingType);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4542f0

UClass * __cdecl UDS_ChatEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChatEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChatEvent",
               &Z_Registration_Info_UClass_UDS_ChatEvent.InnerSingleton,
               StaticRegisterNativesUDS_ChatEvent,0x4d0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ChatEvent>,InternalVTableHelperCtorCaller<UDS_ChatEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChatEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_ChatEvent @ 14b455160

void __cdecl UDS_ChatEvent::StaticRegisterNativesUDS_ChatEvent(void)

{
  return;
}

// GetEvent @ 14b8c4ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ChatEvent * __cdecl UDS_ChatEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_ChatEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_ChatEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_ChatEvent *)0x0;
}

