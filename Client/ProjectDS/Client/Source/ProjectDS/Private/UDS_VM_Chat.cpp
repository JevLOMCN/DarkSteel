// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetSimpleVisibility_WrapperImpl @ 14b607990

void __cdecl UDS_VM_Chat::SetSimpleVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetSimpleVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetNormalVisibility_WrapperImpl @ 14b6079a0

void __cdecl UDS_VM_Chat::SetNormalVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetNormalVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetExtendedVisibility_WrapperImpl @ 14b6079b0

void __cdecl UDS_VM_Chat::SetExtendedVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetExtendedVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b6079c0

UClass * __cdecl UDS_VM_Chat::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat",
               &Z_Registration_Info_UClass_UDS_VM_Chat.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat,0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Chat>,InternalVTableHelperCtorCaller<UDS_VM_Chat>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat.InnerSingleton;
}

// UDS_VM_Chat @ 14b60a8a0

UDS_VM_Chat * __thiscall UDS_VM_Chat::UDS_VM_Chat(UDS_VM_Chat *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SimpleVisibility = Collapsed;
  this->NormalVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat__6B_;
  (this->VM_ChatViewer).field0_0x0.DebugPtr = (UDS_VM_Chat_Viewer *)0x0;
  (this->VM_ChatMessageList).field0_0x0.DebugPtr = (UDS_VM_Chat_MessageList *)0x0;
  (this->VM_ChatInput).field0_0x0.DebugPtr = (UDS_VM_Chat_Input *)0x0;
  (this->VM_RecentWhispers).field0_0x0.DebugPtr = (UDS_VM_Chat_RecentWhispers *)0x0;
  (this->VM_ChatMacro).field0_0x0.DebugPtr = (UDS_VM_Chat_Macro *)0x0;
  (this->VM_ChatCommand).field0_0x0.DebugPtr = (UDS_VM_Chat_Command *)0x0;
  (this->VM_ChatTabs).field0_0x0.DebugPtr = (UDS_VM_Chat_Tabs *)0x0;
  (this->VM_ChatRoomInfo).field0_0x0.DebugPtr = (UDS_VM_Chat_ChatRoomInfo *)0x0;
  (this->VM_ChatFunctions).field0_0x0.DebugPtr = (UDS_VM_Chat_Functions *)0x0;
  (this->VM_ChatEmotePopup).field0_0x0.DebugPtr = (UDS_VM_Chat_EmotePopup *)0x0;
  (this->VM_GamePadGuide).field0_0x0.DebugPtr = (UDS_VM_Chat_GamePadGuide *)0x0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  this->ChattingTypeFlag = 0;
  this->ChatMode = Viewer;
  this->ExtendedVisibility = Collapsed;
  return this;
}

// UDS_VM_Chat @ 14b60a950

UDS_VM_Chat * __thiscall UDS_VM_Chat::UDS_VM_Chat(UDS_VM_Chat *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SimpleVisibility = Collapsed;
  this->NormalVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat__6B_;
  (this->VM_ChatViewer).field0_0x0.DebugPtr = (UDS_VM_Chat_Viewer *)0x0;
  (this->VM_ChatMessageList).field0_0x0.DebugPtr = (UDS_VM_Chat_MessageList *)0x0;
  (this->VM_ChatInput).field0_0x0.DebugPtr = (UDS_VM_Chat_Input *)0x0;
  (this->VM_RecentWhispers).field0_0x0.DebugPtr = (UDS_VM_Chat_RecentWhispers *)0x0;
  (this->VM_ChatMacro).field0_0x0.DebugPtr = (UDS_VM_Chat_Macro *)0x0;
  (this->VM_ChatCommand).field0_0x0.DebugPtr = (UDS_VM_Chat_Command *)0x0;
  (this->VM_ChatTabs).field0_0x0.DebugPtr = (UDS_VM_Chat_Tabs *)0x0;
  (this->VM_ChatRoomInfo).field0_0x0.DebugPtr = (UDS_VM_Chat_ChatRoomInfo *)0x0;
  (this->VM_ChatFunctions).field0_0x0.DebugPtr = (UDS_VM_Chat_Functions *)0x0;
  (this->VM_ChatEmotePopup).field0_0x0.DebugPtr = (UDS_VM_Chat_EmotePopup *)0x0;
  (this->VM_GamePadGuide).field0_0x0.DebugPtr = (UDS_VM_Chat_GamePadGuide *)0x0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  this->ChattingTypeFlag = 0;
  this->ChatMode = Viewer;
  this->ExtendedVisibility = Collapsed;
  return this;
}

// ~UDS_VM_Chat @ 14b60bfd0

void __thiscall UDS_VM_Chat::~UDS_VM_Chat(UDS_VM_Chat *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60dac0

IClassDescriptor * __thiscall UDS_VM_Chat::GetFieldNotificationDescriptor(UDS_VM_Chat *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e200

UClass * __cdecl UDS_VM_Chat::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat",
               &Z_Registration_Info_UClass_UDS_VM_Chat.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat,0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Chat>,InternalVTableHelperCtorCaller<UDS_VM_Chat>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat @ 14b60e8e0

void __cdecl UDS_VM_Chat::StaticRegisterNativesUDS_VM_Chat(void)

{
  return;
}

// BindModel @ 14bd46a80

void __thiscall UDS_VM_Chat::BindModel(UDS_VM_Chat *this)

{
  undefined1 *puVar1;
  UDS_ChatEvent *pUVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_InputEvent *pUVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  UDS_VM_Chat *local_res10;
  int local_res18 [2];
  UDS_VM_Chat **local_res20;
  ulonglong uStack_60;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedChatMode,this
              );
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat>
              (&pUVar2->OnChangedChatMode,(UDS_VM_Chat *)&local_res10,(pmf_ec74d1ee *)this);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar2->OnQueryChatMode);
    uStack_60 = uStack_60 & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar2->OnQueryChatMode,
               (FWriteAccessScope *)&local_58);
    local_40 = &(pUVar2->OnQueryChatMode).Delegate.field_0x8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_40);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6A_BW4EDS_ChatMode__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat____A6A_BW4EDS_ChatMode__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Chat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Chat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
      puVar3[4] = OnQueryChatMode;
      puVar3[5] = uStack_60;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnCommitInputText,this
              );
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnCommitInputText,(UDS_VM_Chat *)&local_res10,(pmf_d1bf8391 *)this);
  }
  pUVar5 = UDS_InputEvent::GetEvent();
  if (pUVar5 != (UDS_InputEvent *)0x0) {
    puVar1 = &(pUVar5->OnInputEvent).Subscriptions.field_0x40;
    local_res10._0_4_ = 0x15fa1;
    if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
      puVar6 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar6 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar7 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15fa1) * 4);
      if (iVar7 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar7 * 0x50 +
                          *(longlong *)&(pUVar5->OnInputEvent).Subscriptions);
          if (*piVar8 == 0x15fa1) {
            if ((iVar7 != -1) && (piVar8 != (int *)0x0)) goto LAB_14bd46cbc;
            break;
          }
          iVar7 = piVar8[0x12];
        } while (iVar7 != -1);
      }
    }
    local_res20 = &local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (&(pUVar5->OnInputEvent).Subscriptions,(uint)local_res18,
               (TKeyInitializer<EDS_KeyActionType_const_&> *)0x15fa1,(bool *)&local_res20);
    piVar8 = (int *)((longlong)local_res18[0] * 0x50 +
                    *(longlong *)&(pUVar5->OnInputEvent).Subscriptions);
LAB_14bd46cbc:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar8 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat>(piVar8 + 2,(UDS_VM_Chat *)local_res18,(pmf_756f7b36 *)this);
    local_res10._0_4_ = 0x4e28;
    if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
      puVar6 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar6 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar7 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x4e28) * 4);
      if (iVar7 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar7 * 0x50 +
                          *(longlong *)&(pUVar5->OnInputEvent).Subscriptions);
          if (*piVar8 == 0x4e28) {
            if (piVar8 != (int *)0x0) goto LAB_14bd46da4;
            break;
          }
          iVar7 = piVar8[0x12];
        } while (iVar7 != -1);
      }
    }
    local_res20 = &local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (&(pUVar5->OnInputEvent).Subscriptions,(uint)local_res18,
               (TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e28,(bool *)&local_res20);
    piVar8 = (int *)((longlong)local_res18[0] * 0x50 +
                    *(longlong *)&(pUVar5->OnInputEvent).Subscriptions);
LAB_14bd46da4:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar8 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat>(piVar8 + 2,(UDS_VM_Chat *)local_res18,(pmf_756f7b36 *)this);
    local_res10 = (UDS_VM_Chat *)CONCAT44(local_res10._4_4_,0x4e35);
    if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
      puVar6 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar6 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar7 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x4e35) * 4);
      if (iVar7 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar7 * 0x50 +
                          *(longlong *)&(pUVar5->OnInputEvent).Subscriptions);
          if (*piVar8 == 0x4e35) {
            if (piVar8 != (int *)0x0) goto LAB_14bd46e79;
            break;
          }
          iVar7 = piVar8[0x12];
        } while (iVar7 != -1);
      }
    }
    local_res20 = &local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (&(pUVar5->OnInputEvent).Subscriptions,(uint)local_res18,
               (TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e35,(bool *)&local_res20);
    piVar8 = (int *)((longlong)local_res18[0] * 0x50 +
                    *(longlong *)&(pUVar5->OnInputEvent).Subscriptions);
LAB_14bd46e79:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar8 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat>(piVar8 + 2,(UDS_VM_Chat *)local_res18,(pmf_756f7b36 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnChangeInputDeviceType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat>
              (&pUVar5->OnChangeInputDeviceType,(UDS_VM_Chat *)&local_res10,(pmf_a5ff1175 *)this);
  }
  return;
}

// Input_ChangeToViewer @ 14bd69cd0

void __thiscall
UDS_VM_Chat::Input_ChangeToViewer
          (UDS_VM_Chat *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_ChatEvent *pUVar1;
  
  if ((param_2 == Triggered) && ((this->ChatMode == Normal || (this->ChatMode == Extended)))) {
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar1->OnChangedChatMode,Simple);
      return;
    }
  }
  return;
}

// Input_ChatOpen @ 14bd69d20

void __thiscall
UDS_VM_Chat::Input_ChatOpen
          (UDS_VM_Chat *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_InputEvent *pUVar1;
  bool local_18 [4];
  EDS_KeyActionType local_14 [3];
  
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    if (param_2 == Triggered) {
      OnChatOpen(this);
    }
    else {
      if (param_2 == Started) {
        local_14[1] = 0x40f;
        local_14[0] = IA_ChatOpen;
        local_18[0] = true;
        FDS_EventDelegate<bool_const_&,enum_EDS_KeyActionType_const_&,enum_EDS_WindowWidget_const_&>
        ::Broadcast(&pUVar1->OnInputUIEvent,local_18,local_14,local_14 + 1);
        return;
      }
      if ((param_2 == Canceled) || (param_2 == Completed)) {
        local_14[0] = 0x40f;
        local_14[1] = 0x4e35;
        local_18[0] = false;
        FDS_EventDelegate<bool_const_&,enum_EDS_KeyActionType_const_&,enum_EDS_WindowWidget_const_&>
        ::Broadcast(&pUVar1->OnInputUIEvent,local_18,local_14 + 1,local_14);
        return;
      }
    }
  }
  return;
}

// OnChangeInputDeviceType @ 14bd6eeb0

void __thiscall UDS_VM_Chat::OnChangeInputDeviceType(UDS_VM_Chat *this,EDS_InputDeviceType *param_1)

{
  bool bVar1;
  ADS_PlayerController *this_00;
  FWeakObjectPtr local_res10 [3];
  
  if ((*param_1 == GamePad) && (this->ChatMode != Viewer)) {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res10);
      ADS_PlayerController::SetInputControlType(this_00,ActionMode,true);
    }
  }
  return;
}

// OnChangedChatMode @ 14bd6f2e0

void __thiscall UDS_VM_Chat::OnChangedChatMode(UDS_VM_Chat *this,EDS_ChatMode param_1)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  FName FVar1;
  bool bVar2;
  ADS_PlayerController *pAVar3;
  UObject *pUVar4;
  UDS_InputEvent *pUVar5;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  int local_res8 [2];
  undefined4 local_res10 [2];
  FWeakObjectPtr local_res18;
  undefined4 *local_res20;
  FName local_48;
  ulonglong uStack_40;
  
  this->ChatMode = param_1;
  iVar9 = FFieldNotificationClassDescriptor::SimpleVisibility.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SimpleVisibility.FieldName;
  if (param_1 == Viewer) {
    if (this->SimpleVisibility != Collapsed) {
      this->SimpleVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar9 = FFieldNotificationClassDescriptor::NormalVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::NormalVisibility.FieldName;
    if (this->NormalVisibility != Collapsed) {
      this->NormalVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar9 = FFieldNotificationClassDescriptor::ExtendedVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ExtendedVisibility.FieldName;
    if (this->ExtendedVisibility != Collapsed) {
      this->ExtendedVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    pUVar5 = UDS_InputEvent::GetEvent();
    if (pUVar5 != (UDS_InputEvent *)0x0) {
      puVar8 = &(pUVar5->OnInputEvent).Subscriptions.field_0x40;
      if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
        puVar7 = *(undefined1 **)puVar8;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar9 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x15f9b) * 4);
        if (iVar9 != -1) {
          do {
            piVar10 = (int *)((longlong)iVar9 * 0x50 +
                             *(longlong *)&(pUVar5->OnInputEvent).Subscriptions);
            if (*piVar10 == 0x15f9b) {
              if (iVar9 != -1) {
                pTVar6 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar10 + 2);
                if (piVar10 == (int *)0x0) {
                  pTVar6 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
                }
                if (pTVar6 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
                  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar6,this);
                }
              }
              break;
            }
            iVar9 = piVar10[0x12];
          } while (iVar9 != -1);
        }
      }
      if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
        puVar8 = *(undefined1 **)puVar8;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar9 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x15f99) * 4);
        if (iVar9 != -1) {
          do {
            piVar10 = (int *)((longlong)iVar9 * 0x50 +
                             *(longlong *)&(pUVar5->OnInputEvent).Subscriptions);
            if (*piVar10 == 0x15f99) {
              pTVar6 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar10 + 2);
              if (piVar10 == (int *)0x0) {
                pTVar6 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
              }
              if (pTVar6 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
                TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar6,this);
              }
              break;
            }
            iVar9 = piVar10[0x12];
          } while (iVar9 != -1);
        }
      }
    }
  }
  else if (param_1 == Simple) {
    if (this->SimpleVisibility != SelfHitTestInvisible) {
      this->SimpleVisibility = SelfHitTestInvisible;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar9 = FFieldNotificationClassDescriptor::NormalVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::NormalVisibility.FieldName;
    if (this->NormalVisibility != Collapsed) {
      this->NormalVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar9 = FFieldNotificationClassDescriptor::ExtendedVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ExtendedVisibility.FieldName;
    if (this->ExtendedVisibility != Collapsed) {
      this->ExtendedVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
  }
  else if (param_1 == Normal) {
    if (this->SimpleVisibility != Collapsed) {
      this->SimpleVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar9 = FFieldNotificationClassDescriptor::NormalVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::NormalVisibility.FieldName;
    if (this->NormalVisibility != SelfHitTestInvisible) {
      this->NormalVisibility = SelfHitTestInvisible;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar9 = FFieldNotificationClassDescriptor::ExtendedVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ExtendedVisibility.FieldName;
    if (this->ExtendedVisibility != Collapsed) {
      this->ExtendedVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
  }
  else if (param_1 == Extended) {
    if (this->SimpleVisibility != Collapsed) {
      this->SimpleVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar9 = FFieldNotificationClassDescriptor::NormalVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::NormalVisibility.FieldName;
    if (this->NormalVisibility != Collapsed) {
      this->NormalVisibility = Collapsed;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar9 = FFieldNotificationClassDescriptor::ExtendedVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ExtendedVisibility.FieldName;
    if (this->ExtendedVisibility != SelfHitTestInvisible) {
      this->ExtendedVisibility = SelfHitTestInvisible;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      local_48 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
  }
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    if (this->ChatMode == Viewer) {
      pAVar3 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
      ADS_PlayerController::SetInputControlType(pAVar3,ActionMode,true);
      pAVar3 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
      ADS_PlayerController::SetActionModeCursor(pAVar3,false);
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    if (pUVar4[0x36].field_0x8 == '\x02') {
      pAVar3 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
      ADS_PlayerController::SetInputControlType(pAVar3,ActionMode,true);
    }
    else {
      pAVar3 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res18);
      ADS_PlayerController::SetActionModeCursor(pAVar3,true);
    }
    pUVar5 = UDS_InputEvent::GetEvent();
    if (pUVar5 != (UDS_InputEvent *)0x0) {
      this_00 = &(pUVar5->OnInputEvent).Subscriptions;
      puVar8 = &(pUVar5->OnInputEvent).Subscriptions.field_0x40;
      local_res10[0] = 0x15f9b;
      local_48 = (FName)OnInputEvent;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
        puVar7 = *(undefined1 **)puVar8;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar9 = *(int *)(puVar7 + (ulonglong)
                                  (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x15f9b) * 4);
        if (iVar9 != -1) {
          do {
            piVar10 = (int *)((longlong)iVar9 * 0x50 + *(longlong *)this_00);
            if (*piVar10 == 0x15f9b) {
              if ((iVar9 != -1) && (piVar10 != (int *)0x0)) goto LAB_14bd6f7fa;
              break;
            }
            iVar9 = piVar10[0x12];
          } while (iVar9 != -1);
        }
      }
      local_res20 = local_res10;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_res8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f9b,
                 (bool *)&local_res20);
      piVar10 = (int *)((longlong)local_res8[0] * 0x50 + *(longlong *)this_00);
LAB_14bd6f7fa:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar10 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat>(piVar10 + 2,(UDS_VM_Chat *)local_res8,(pmf_756f7b36 *)this);
      local_48 = (FName)OnInputEvent;
      local_res10[0] = 0x15f99;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      if (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x34) {
        puVar8 = *(undefined1 **)puVar8;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &(pUVar5->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar9 = *(int *)(puVar8 + (ulonglong)
                                  (*(int *)&(pUVar5->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x15f99) * 4);
        if (iVar9 != -1) {
          do {
            piVar10 = (int *)((longlong)iVar9 * 0x50 + *(longlong *)this_00);
            if (*piVar10 == 0x15f99) {
              if (piVar10 != (int *)0x0) goto LAB_14bd6f8e1;
              break;
            }
            iVar9 = piVar10[0x12];
          } while (iVar9 != -1);
        }
      }
      local_res20 = local_res10;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_res8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f99,
                 (bool *)&local_res20);
      piVar10 = (int *)((longlong)local_res8[0] * 0x50 + *(longlong *)this_00);
LAB_14bd6f8e1:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar10 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat>(piVar10 + 2,(UDS_VM_Chat *)local_res8,(pmf_756f7b36 *)this);
    }
  }
  return;
}

// OnChatOpen @ 14bd70960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat::OnChatOpen(UDS_VM_Chat *this)

{
  EDS_ChatMode EVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  UDS_ChatEvent *pUVar4;
  undefined1 auStackY_168 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  EVar1 = this->ChatMode;
  if (EVar1 == Viewer) {
    this->ChatMode = Simple;
    this_00 = UDS_GameOptionManager::GetInst();
    if (this_00 != (UDS_GameOptionManager *)0x0) {
      this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatDefaultChatWindow);
      if (this_01 != (UDS_GameOptionData *)0x0) {
        iVar2 = UDS_GameOptionData::GetGameOptionValue(this_01,0);
        if ((char)iVar2 == '\x02') {
          this->ChatMode = Normal;
        }
        else if ((char)iVar2 == '\x03') {
          this->ChatMode = Extended;
        }
      }
    }
    goto LAB_14bd70b36;
  }
  if (EVar1 == Simple) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bd70b36;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat::OnChatOpen",0x17,Yes);
    pwVar6 = L"UDS_VM_Chat::OnInputAction() - EDS_ChatMode::Simple";
    uVar5 = 0xfe;
  }
  else if (EVar1 == Normal) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bd70b36;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat::OnChatOpen",0x17,Yes);
    pwVar6 = L"UDS_VM_Chat::OnInputAction() - EDS_ChatMode::Normal";
    uVar5 = 0x104;
  }
  else {
    if (EVar1 != Extended) goto LAB_14bd70b36;
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bd70b36;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat::OnChatOpen",0x17,Yes);
    pwVar6 = L"UDS_VM_Chat::OnInputAction() - EDS_ChatMode::Extended";
    uVar5 = 0x10a;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Display,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bd70b36:
  pUVar4 = UDS_ChatEvent::GetEvent();
  if (pUVar4 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast
              (&pUVar4->OnChangedChatMode,this->ChatMode);
  }
  return;
}

// OnCommitInputText @ 14bd76490

void __thiscall UDS_VM_Chat::OnCommitInputText(UDS_VM_Chat *this)

{
  uint uVar1;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  UDS_ChatEvent *pUVar2;
  
  uVar1 = 3;
  this_00 = UDS_GameOptionManager::GetInst();
  if (this_00 != (UDS_GameOptionManager *)0x0) {
    this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,GameOptionChatPostSendAction);
    if (this_01 != (UDS_GameOptionData *)0x0) {
      uVar1 = UDS_GameOptionData::GetGameOptionValue(this_01,0);
    }
  }
  if (((uVar1 & 0xff) != 1) && ((uVar1 & 0xff) != 2)) {
    pUVar2 = UDS_ChatEvent::GetEvent();
    if (pUVar2 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar2->OnChangedChatMode,Viewer);
      return;
    }
  }
  return;
}

// OnInputAction @ 14bd79ad0

void __thiscall
UDS_VM_Chat::OnInputAction
          (UDS_VM_Chat *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  ETriggerEvent EVar1;
  UDS_InputEvent *pUVar2;
  bool local_res10 [16];
  EDS_WindowWidget local_res20 [2];
  EDS_KeyActionType local_18 [4];
  
  if ((*param_1 == IA_ChatOpen) &&
     (pUVar2 = UDS_InputEvent::GetEvent(), pUVar2 != (UDS_InputEvent *)0x0)) {
    EVar1 = param_2->TriggerEvent;
    if (EVar1 != Triggered) {
      if (EVar1 == Started) {
        local_res10[0] = true;
      }
      else {
        if ((EVar1 != Canceled) && (EVar1 != Completed)) {
          return;
        }
        local_res10[0] = false;
      }
      local_18[0] = IA_ChatOpen;
      local_res20[0] = Chatting;
      FDS_EventDelegate<bool_const_&,enum_EDS_KeyActionType_const_&,enum_EDS_WindowWidget_const_&>::
      Broadcast(&pUVar2->OnInputUIEvent,local_res10,local_18,local_res20);
      return;
    }
    OnChatOpen(this);
  }
  return;
}

// OnInputEvent @ 14bd79b70

void __thiscall
UDS_VM_Chat::OnInputEvent
          (UDS_VM_Chat *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_ChatEvent *pUVar1;
  EDS_ChatMode EVar2;
  
  if (param_1 == IA_UI_Escape) {
    if (param_2 != Started) {
      return;
    }
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 == (UDS_ChatEvent *)0x0) {
      return;
    }
    FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar1->OnChangedChatMode,Viewer);
    return;
  }
  if (param_1 != IA_Chatting_ChangeMinToNormalSize) {
LAB_14bd79beb:
    if (param_1 != IA_Chatting_ChangeNormalToMinSize) {
      return;
    }
    if (param_2 != Triggered) {
      return;
    }
    EVar2 = this->ChatMode;
    if ((EVar2 != Normal) && (EVar2 != Extended)) {
      return;
    }
    if (EVar2 == Simple) {
      return;
    }
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 == (UDS_ChatEvent *)0x0) {
      return;
    }
    EVar2 = Simple;
    goto LAB_14bd79c20;
  }
  if (param_2 != Triggered) {
    return;
  }
  EVar2 = this->ChatMode;
  if (EVar2 == Simple) {
LAB_14bd79bd1:
    EVar2 = Normal;
  }
  else {
    if (EVar2 != Normal) {
      if (EVar2 != Extended) goto LAB_14bd79beb;
      goto LAB_14bd79bd1;
    }
    EVar2 = Extended;
  }
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 == (UDS_ChatEvent *)0x0) {
    return;
  }
LAB_14bd79c20:
  FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar1->OnChangedChatMode,EVar2);
  return;
}

// OnQueryChatMode @ 14bd7c0b0

EDS_ChatMode __thiscall UDS_VM_Chat::OnQueryChatMode(UDS_VM_Chat *this)

{
  return this->ChatMode;
}

// OnSetViewModel @ 14bd7ebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat::OnSetViewModel(UDS_VM_Chat *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  code *pcVar3;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_ChattingManager *this_00;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TVar7;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  UClass *pUVar10;
  longlong *plVar11;
  FDS_ViewModelContext_Chat *pFVar12;
  FDS_ViewModelContext_InputKey *pFVar13;
  UDS_VM_InputKey *pUVar14;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TVar15;
  longlong *plVar16;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TVar17;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TVar18;
  undefined1 auStackY_438 [32];
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_408;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_400;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3f8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3f0;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3e8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3e0;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3d8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3d0;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3c8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3c0;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3b8 [2];
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_3a8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_3a0;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_398;
  TSharedPtr<FDS_ViewModelContext,1> local_388;
  TSharedPtr<FDS_ViewModelContext,1> local_378;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_368;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_360;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_358;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_350;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_348;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_340;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_338;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_330;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_328;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_320;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_318;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_310;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_308;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_300;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_2f8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_2f0;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_2e8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_2e0;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_2d8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_2d0;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_2c8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_2c0;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 local_2b8;
  TObjectPtr<UDS_VM_Chat_Viewer>_u_0 TStack_2b0;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_378.Object = param_1->Object;
  local_378.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_378.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext>(&local_388,&local_378);
  if (local_388.Object == (FDS_ViewModelContext *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_298._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_298,"UDS_VM_Chat::OnSetViewModel",0x1b,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_298.Ptr,0x27,L"context.IsValid() == false");
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_388.SharedReferenceCount.ReferenceController);
  }
  else {
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 == (UDS_ChattingManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_VM_Chat::OnSetViewModel",0x1b,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_178.Ptr,0x2e,L"chattingManager == nullptr");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedReferenceCount.ReferenceController);
    }
    else {
      uVar2 = (this_00->ChatStateData).ChattingTypeFlag;
      this->ChattingTypeFlag = uVar2;
      UDS_ChattingManager::UpdateChattingDatas(this_00,uVar2,true,true);
      TVar7.DebugPtr = ::operator_new(0x38);
      TVar15.DebugPtr = (UDS_VM_Chat_Viewer *)0x0;
      TVar17.DebugPtr = TVar15.DebugPtr;
      if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
        (TVar7.DebugPtr)->_padding_ = 0;
        *(undefined2 *)((longlong)&(TVar7.DebugPtr)->_padding_ + 2) = 0;
        *(undefined4 *)((longlong)&(TVar7.DebugPtr)->_padding_ + 4) = 0;
        (TVar7.DebugPtr)->_padding_ = 0;
        (TVar7.DebugPtr)->_padding_ = 0;
        (TVar7.DebugPtr)->_padding_ = (longlong)&___7FDS_ViewModelContext_Chat__6B_;
        (TVar7.DebugPtr)->_padding_ = 0;
        *(undefined2 *)&(TVar7.DebugPtr)->_padding_ = 0x103;
        *(undefined4 *)((longlong)&(TVar7.DebugPtr)->_padding_ + 4) = 0xffffffff;
        *(undefined4 *)&(TVar7.DebugPtr)->_padding_ = 0x40a00000;
        TVar17.DebugPtr = TVar7.DebugPtr;
      }
      local_3a8 = TVar17;
      TVar8.DebugPtr = ::operator_new(0x20);
      TVar7.DebugPtr = TVar15.DebugPtr;
      if ((UDS_VM_Chat_Functions *)TVar8.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
        *(undefined4 *)&(TVar8.DebugPtr)->_padding_ = 1;
        (TVar8.DebugPtr)->_padding_ = (longlong)ViewModelContextDeleter;
        (TVar8.DebugPtr)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Chat__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)&(TVar8.DebugPtr)->_padding_ + 4) = 1;
        (TVar8.DebugPtr)->_padding_ = (longlong)TVar17;
        TVar7.DebugPtr = TVar8.DebugPtr;
      }
      TStack_3a0 = TVar7;
      if (((UDS_VM_Chat_Functions *)TVar17.DebugPtr == (UDS_VM_Chat_Functions *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar9 = FDS_ViewModelContext_Chat::StaticStruct();
      (TVar17.DebugPtr)->_padding_ = (longlong)pUVar9;
      this_01 = UDS_ViewModelContextManager::GetInst();
      TVar4 = TStack_3a0;
      TVar8 = local_3a8;
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        local_368 = local_3a8;
        TStack_360.DebugPtr = TStack_3a0.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)&(TVar7.DebugPtr)->_padding_ = (int)(TVar7.DebugPtr)->_padding_ + 1;
          UNLOCK();
        }
        UDS_ViewModelContextManager::RegisterContext
                  (this_01,(TSharedPtr<FDS_ViewModelContext,1> *)&local_368.ObjectPtr);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TStack_360.DebugPtr);
      }
      plVar16 = (longlong *)&DAT_00000008;
      (TVar17.DebugPtr)->_padding_ = this->ChattingTypeFlag;
      *(EDS_ChattingType *)&(TVar17.DebugPtr)->_padding_ =
           (this_00->ChatStateData).InputChattingType;
      *(EDS_ChattingTabType *)((longlong)&(TVar17.DebugPtr)->_padding_ + 1) =
           (this_00->ChatStateData).ChattingTabType;
      *(int *)((longlong)&(TVar17.DebugPtr)->_padding_ + 4) = (this_00->ChatStateData).SubTabIndex;
      *(float *)&(TVar17.DebugPtr)->_padding_ = this_00->ChattingCloseTime;
      if ((this->VM_ChatViewer).field0_0x0.DebugPtr == (UDS_VM_Chat_Viewer *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x11a;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_358 = TVar8;
        TStack_350.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_408.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_408.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_Viewer_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_408.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_408;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_ChatViewer).field0_0x0.DebugPtr = (UDS_VM_Chat_Viewer *)TVar18;
      }
      if ((this->VM_ChatMessageList).field0_0x0.DebugPtr == (UDS_VM_Chat_MessageList *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x11d;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_348 = TVar8;
        TStack_340.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_400.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_400.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_MessageList_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_400.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_400;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_ChatMessageList).field0_0x0.DebugPtr = (UDS_VM_Chat_MessageList *)TVar18;
      }
      if ((this->VM_ChatInput).field0_0x0.DebugPtr == (UDS_VM_Chat_Input *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x11b;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_338 = TVar8;
        TStack_330.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3f8.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_3f8.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_Input_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3f8.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_3f8;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_ChatInput).field0_0x0.DebugPtr = (UDS_VM_Chat_Input *)TVar18;
      }
      if ((this->VM_RecentWhispers).field0_0x0.DebugPtr == (UDS_VM_Chat_RecentWhispers *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x131;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_328 = TVar8;
        TStack_320.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3f0.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_3f0.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_RecentWhispers_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3f0.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_3f0;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_RecentWhispers).field0_0x0.DebugPtr = (UDS_VM_Chat_RecentWhispers *)TVar18;
      }
      if ((this->VM_ChatMacro).field0_0x0.DebugPtr == (UDS_VM_Chat_Macro *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x133;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_318 = TVar8;
        TStack_310.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3e8.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_3e8.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_Macro_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3e8.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_3e8;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_ChatMacro).field0_0x0.DebugPtr = (UDS_VM_Chat_Macro *)TVar18;
      }
      if ((this->VM_ChatCommand).field0_0x0.DebugPtr == (UDS_VM_Chat_Command *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x11f;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_308 = TVar8;
        TStack_300.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3e0.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_3e0.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_Command_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3e0.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_3e0;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_ChatCommand).field0_0x0.DebugPtr = (UDS_VM_Chat_Command *)TVar18;
      }
      if ((this->VM_ChatTabs).field0_0x0.DebugPtr == (UDS_VM_Chat_Tabs *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x121;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_2f8 = TVar8;
        TStack_2f0.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3d8.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_3d8.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_Tabs_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3d8.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_3d8;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_ChatTabs).field0_0x0.DebugPtr = (UDS_VM_Chat_Tabs *)TVar18;
      }
      if ((this->VM_ChatRoomInfo).field0_0x0.DebugPtr == (UDS_VM_Chat_ChatRoomInfo *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x125;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_2e8 = TVar8;
        TStack_2e0.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3d0.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_3d0.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_ChatRoomInfo_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3d0.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_3d0;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_ChatRoomInfo).field0_0x0.DebugPtr = (UDS_VM_Chat_ChatRoomInfo *)TVar18;
      }
      if ((this->VM_ChatFunctions).field0_0x0.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x128;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_2d8 = TVar8;
        TStack_2d0.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3c8.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar18.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_3c8.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_Functions_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3c8.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar18 = local_3c8;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar18.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
        }
        (this->VM_ChatFunctions).field0_0x0.DebugPtr = (UDS_VM_Chat_Functions *)TVar18;
      }
      if ((this->VM_ChatEmotePopup).field0_0x0.DebugPtr == (UDS_VM_Chat_EmotePopup *)0x0) {
        *(undefined4 *)&(TVar17.DebugPtr)->_padding_ = 0x129;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr == (UDS_VM_Chat_Functions *)0x0) {
          plVar11 = (longlong *)&DAT_00000008;
        }
        else {
          plVar11 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        local_2c8 = TVar8;
        TStack_2c0.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3c0.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        TVar17.DebugPtr = TVar15.DebugPtr;
        if ((UDS_VM_Chat_Functions *)local_3c0.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_EmotePopup_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3c0.ObjectPtr,pUVar10);
          if (bVar5) {
            TVar17 = local_3c0;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar17.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar17.DebugPtr);
        }
        (this->VM_ChatEmotePopup).field0_0x0.DebugPtr = (UDS_VM_Chat_EmotePopup *)TVar17;
      }
      if ((this->VM_GamePadGuide).field0_0x0.DebugPtr == (UDS_VM_Chat_GamePadGuide *)0x0) {
        pFVar12 = TSharedPtr<FDS_ViewModelContext_Chat,1>::operator->
                            ((TSharedPtr<FDS_ViewModelContext_Chat,1> *)&local_3a8.ObjectPtr);
        *(undefined4 *)&pFVar12->_padding_ = 0x135;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          plVar16 = &(TVar7.DebugPtr)->_padding_;
          LOCK();
          *(int *)plVar16 = (int)*plVar16 + 1;
          UNLOCK();
        }
        local_2b8 = TVar8;
        TStack_2b0.DebugPtr = TVar4.DebugPtr;
        if ((UDS_VM_Chat_Functions *)TVar7.DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          LOCK();
          *(int *)plVar16 = (int)*plVar16 + 1;
          UNLOCK();
        }
        DS_ViewModelTemplateUtil::CreateViewModel
                  ((UObject *)&local_3b8[0].ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
        if ((UDS_VM_Chat_Functions *)local_3b8[0].DebugPtr != (UDS_VM_Chat_Functions *)0x0) {
          pUVar10 = Z_Construct_UClass_UDS_VM_Chat_GamePadGuide_NoRegister();
          bVar5 = FObjectPtr::IsA(&local_3b8[0].ObjectPtr,pUVar10);
          if (bVar5) {
            TVar15 = local_3b8[0];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Chat_Functions *)TVar15.DebugPtr != (UDS_VM_Chat_Functions *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar15.DebugPtr);
        }
        (this->VM_GamePadGuide).field0_0x0.DebugPtr = (UDS_VM_Chat_GamePadGuide *)TVar15;
      }
      if ((this->VM_InputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
        MakeContext<FDS_ViewModelContext_InputKey>(&local_398);
        pFVar13 = TSharedPtr<FDS_ViewModelContext_InputKey,1>::operator->(&local_398);
        *(undefined4 *)&pFVar13->_padding_ = 0x15d;
        pFVar13 = TSharedPtr<FDS_ViewModelContext_InputKey,1>::operator->(&local_398);
        pFVar13->KeyActionType = IA_ChatOpen;
        pFVar13 = TSharedPtr<FDS_ViewModelContext_InputKey,1>::operator->(&local_398);
        local_2a8.Object = (FDS_ViewModelContext *)local_398.Object;
        local_2a8.SharedReferenceCount.ReferenceController =
             local_398.SharedReferenceCount.ReferenceController;
        pFVar13->ParentWindowWidget = Chatting;
        if (local_398.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_398.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pUVar14 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_2a8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar14 != (UDS_VM_InputKey *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar14);
        }
        (this->VM_InputKey).field0_0x0.DebugPtr = pUVar14;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_398.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PlayEndAnimation @ 14bd848a0

void __thiscall UDS_VM_Chat::PlayEndAnimation(UDS_VM_Chat *this)

{
  return;
}

// PlayOpenAnimation @ 14bd848b0

void __thiscall UDS_VM_Chat::PlayOpenAnimation(UDS_VM_Chat *this)

{
  return;
}

// SetExtendedVisibility @ 14bd886e0

void __thiscall UDS_VM_Chat::SetExtendedVisibility(UDS_VM_Chat *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExtendedVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExtendedVisibility.FieldName;
  if (this->ExtendedVisibility != param_1) {
    this->ExtendedVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetNormalVisibility @ 14bd8a460

void __thiscall UDS_VM_Chat::SetNormalVisibility(UDS_VM_Chat *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::NormalVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NormalVisibility.FieldName;
  if (this->NormalVisibility != param_1) {
    this->NormalVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSimpleVisibility @ 14bd8ac50

void __thiscall UDS_VM_Chat::SetSimpleVisibility(UDS_VM_Chat *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SimpleVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SimpleVisibility.FieldName;
  if (this->SimpleVisibility != param_1) {
    this->SimpleVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8bb50

void __thiscall UDS_VM_Chat::UnbindModel(UDS_VM_Chat *this)

{
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->OnQueryChatMode);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnCommitInputText,this
              );
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_Chat>(&pUVar2->OnInputEvent,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeInputDeviceType,this);
  }
  return;
}

