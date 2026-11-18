// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetClickChatCommand_WrapperImpl @ 14b606130

void __cdecl UDS_VM_Chat_Command::SetClickChatCommand_WrapperImpl(void *param_1,void *param_2)

{
  ESlateVisibility EVar1;
  
  EVar1 = SelfHitTestInvisible;
  if (*(char *)((longlong)param_1 + 0xd0) != '\x01') {
    EVar1 = Collapsed;
  }
  SetChatCommandListVisibility(param_1,EVar1);
  return;
}

// SetChatCommandListVisibility_WrapperImpl @ 14b606140

void __cdecl
UDS_VM_Chat_Command::SetChatCommandListVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChatCommandListVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChatCommandIconID_WrapperImpl @ 14b606150

void __cdecl UDS_VM_Chat_Command::SetChatCommandIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetChatCommandIconID(param_1,*(int *)param_2);
  return;
}

// SetChatCommandColor_WrapperImpl @ 14b606160

void __cdecl UDS_VM_Chat_Command::SetChatCommandColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0xd8)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0xdc))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0xe0))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0xe4))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ChatCommandColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChatCommandColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0xd8) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xe0) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b606170

UClass * __cdecl UDS_VM_Chat_Command::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Command.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Command",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Command.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Command,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Command>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Command>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Command.InnerSingleton;
}

// UDS_VM_Chat_Command @ 14b60ace0

UDS_VM_Chat_Command * __thiscall
UDS_VM_Chat_Command::UDS_VM_Chat_Command(UDS_VM_Chat_Command *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatCommandListVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Command__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickChatCommand)._padding_ = '\0';
  (this->ClickChatCommand).bIsCustomSelected = false;
  (this->ClickChatCommand).bIsLacked = false;
  (this->ClickChatCommand).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatCommand).Delegate = 0;
  *(undefined8 *)&(this->ClickChatCommand).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatCommand).Delegate.field_0x10 = 0;
  (this->ChatCommandName).StringTableType = None;
  (this->ChatCommandName).StringTableID = 0;
  (this->ChatCommandName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatCommandName).StringEnumTableNameID.Number = 0;
  (this->ChatCommandName).DateTime.Ticks = 0;
  (this->ChatCommandName).TimeSpan.Ticks = 0;
  (this->ChatCommandName).TimeExpressionType = None;
  (this->ChatCommandName).IsExpression = false;
  (this->ChatCommandName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommandName).UniqueString.Data.ArrayNum = 0;
  (this->ChatCommandName).UniqueString.Data.ArrayMax = 0;
  (this->ChatCommandName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommandName).FormatArgs.ArrayNum = 0;
  (this->ChatCommandName).FormatArgs.ArrayMax = 0;
  (this->ChattingCommandDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingCommandDatas).ArrayNum = 0;
  (this->ChattingCommandDatas).ArrayMax = 0;
  this->SelectedIndexOffset = 0;
  this->InputChattingType = Zone;
  return this;
}

// UDS_VM_Chat_Command @ 14b60adc0

UDS_VM_Chat_Command * __thiscall
UDS_VM_Chat_Command::UDS_VM_Chat_Command(UDS_VM_Chat_Command *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatCommandListVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Command__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickChatCommand)._padding_ = '\0';
  (this->ClickChatCommand).bIsCustomSelected = false;
  (this->ClickChatCommand).bIsLacked = false;
  (this->ClickChatCommand).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatCommand).Delegate = 0;
  *(undefined8 *)&(this->ClickChatCommand).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatCommand).Delegate.field_0x10 = 0;
  (this->ChatCommandName).StringTableType = None;
  (this->ChatCommandName).StringTableID = 0;
  (this->ChatCommandName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatCommandName).StringEnumTableNameID.Number = 0;
  (this->ChatCommandName).DateTime.Ticks = 0;
  (this->ChatCommandName).TimeSpan.Ticks = 0;
  (this->ChatCommandName).TimeExpressionType = None;
  (this->ChatCommandName).IsExpression = false;
  (this->ChatCommandName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommandName).UniqueString.Data.ArrayNum = 0;
  (this->ChatCommandName).UniqueString.Data.ArrayMax = 0;
  (this->ChatCommandName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommandName).FormatArgs.ArrayNum = 0;
  (this->ChatCommandName).FormatArgs.ArrayMax = 0;
  (this->ChattingCommandDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingCommandDatas).ArrayNum = 0;
  (this->ChattingCommandDatas).ArrayMax = 0;
  this->SelectedIndexOffset = 0;
  this->InputChattingType = Zone;
  return this;
}

// ~UDS_VM_Chat_Command @ 14b60c1a0

void __thiscall UDS_VM_Chat_Command::~UDS_VM_Chat_Command(UDS_VM_Chat_Command *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Command__6B_;
  pFVar1 = (this->ChattingCommandDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatCommandName).FormatArgs.AllocatorInstance.Data,
             (this->ChatCommandName).FormatArgs.ArrayNum);
  pFVar1 = (this->ChatCommandName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChatCommandName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChatCommand).Delegate);
  pvVar2 = *(void **)&(this->ClickChatCommand).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChatCommand).Delegate);
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60dba0

IClassDescriptor * __thiscall
UDS_VM_Chat_Command::GetFieldNotificationDescriptor(UDS_VM_Chat_Command *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_Command::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e380

UClass * __cdecl UDS_VM_Chat_Command::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Command.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Command",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Command.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Command,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Command>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Command>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Command.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_Command @ 14b60e900

void __cdecl UDS_VM_Chat_Command::StaticRegisterNativesUDS_VM_Chat_Command(void)

{
  return;
}

// BindModel @ 14bd471a0

void __thiscall UDS_VM_Chat_Command::BindModel(UDS_VM_Chat_Command *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_ChatEvent *pUVar1;
  UDS_PartyEvent *pUVar2;
  UDS_DungeonEvent *pUVar3;
  UDS_InputEvent *pUVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputChattingType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Command>
              (&pUVar1->OnChangeInputChattingType,(UDS_VM_Chat_Command *)local_res10,
               (pmf_b2fb37ee *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdateChattingTabs,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Command>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateChattingTabs,(UDS_VM_Chat_Command *)local_res10,(pmf_46775efd *)this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Command>
              (&pUVar1->OnChangedChatMode,(UDS_VM_Chat_Command *)local_res10,(pmf_73064eaa *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ViewModelTemplateKey,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Command>
              (&pUVar1->OnChatPopup,(UDS_VM_Chat_Command *)local_res10,(pmf_10919cab *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatOption,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Command>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedChatOption,(UDS_VM_Chat_Command *)local_res10,(pmf_46775efd *)this)
    ;
  }
  pUVar2 = UDS_PartyEvent::GetEvent();
  if (pUVar2 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnJoinedParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Command>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnJoinedParty,(UDS_VM_Chat_Command *)local_res10,(pmf_46775efd *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Command>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnLeftParty,(UDS_VM_Chat_Command *)local_res10,(pmf_46775efd *)this);
  }
  pUVar3 = UDS_DungeonEvent::GetEvent();
  if (pUVar3 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnJoinedRaidParty,this
              );
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Command>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnJoinedRaidParty,(UDS_VM_Chat_Command *)local_res10,(pmf_46775efd *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLeftRaidParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Command>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnLeftRaidParty,(UDS_VM_Chat_Command *)local_res10,(pmf_46775efd *)this);
  }
  pUVar4 = UDS_InputEvent::GetEvent();
  if (pUVar4 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar4->OnInputEvent).Subscriptions;
    local_res10[0] = 0x15f9e;
    if (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x34) {
      puVar6 = *(undefined1 **)&(pUVar4->OnInputEvent).Subscriptions.field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(pUVar4->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar7 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15f9e) * 4);
      if (iVar7 != -1) {
        do {
          piVar5 = (int *)((longlong)iVar7 * 0x50 + *(longlong *)this_00);
          if (*piVar5 == 0x15f9e) {
            if (piVar5 != (int *)0x0) goto LAB_14bd474b7;
            break;
          }
          iVar7 = piVar5[0x12];
        } while (iVar7 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f9e,
               (bool *)&local_res20);
    piVar5 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bd474b7:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar5 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Command>
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar5 + 2),
               (UDS_VM_Chat_Command *)local_res18,(pmf_a7023ea2 *)this);
  }
  return;
}

// GetCommandDataIndex @ 14bd5a8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_Chat_Command::GetCommandDataIndex(UDS_VM_Chat_Command *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar5 = (this->ChattingCommandDatas).ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->ChattingCommandDatas).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if ((this->ChattingCommandDatas).AllocatorInstance.Data[lVar9 + 4] ==
          (FScriptContainerElement)this->InputChattingType) {
        if (uVar7 != 0xffffffff) {
          iVar1 = param_1 % iVar5 + uVar7;
          if (iVar1 < 0) {
            return iVar1 + iVar5;
          }
          if (iVar1 < iVar5) {
            return iVar1;
          }
          return iVar1 - iVar5;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x40;
    } while (lVar8 < iVar5);
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Chat_Command::GetCommandDataIndex",0x28,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_158.Ptr,200,
               L"ChattingCommandDatas - foundIndex == INDEX_NONE (InputChattingType : %d)");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return -1;
}

// OnChangeInputChattingType @ 14bd6eb50

void __thiscall
UDS_VM_Chat_Command::OnChangeInputChattingType(UDS_VM_Chat_Command *this,EDS_ChattingType param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName FVar4;
  int iVar5;
  int iVar6;
  UDS_ChattingManager *this_00;
  FLinearColor *pFVar7;
  FName local_38;
  int local_30;
  FDS_StringBaseID local_28;
  FLinearColor local_18;
  
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    UDS_ChattingManager::GetChattingChannelName(this_00,&local_28,param_1);
    FDS_Text::SetTextFromStringID(&this->ChatCommandName,&local_28);
    local_30 = FFieldNotificationClassDescriptor::ChatCommandName.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::ChatCommandName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    iVar6 = UDS_ChattingManager::GetChatIconID(this_00,param_1);
    iVar5 = FFieldNotificationClassDescriptor::ChatCommandIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::ChatCommandIconID.FieldName;
    if (this->ChatCommandIconID != iVar6) {
      this->ChatCommandIconID = iVar6;
      local_30 = iVar5;
      local_38 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    pFVar7 = UDS_ChattingManager::GetChattingColor(this_00,&local_18,param_1);
    if (((((pFVar7->field0_0x0)._s_0.R != (this->ChatCommandColor).field0_0x0._s_0.R) ||
         ((pFVar7->field0_0x0)._s_0.G != (this->ChatCommandColor).field0_0x0._s_0.G)) ||
        ((pFVar7->field0_0x0)._s_0.B != (this->ChatCommandColor).field0_0x0._s_0.B)) ||
       ((pFVar7->field0_0x0)._s_0.A != (this->ChatCommandColor).field0_0x0._s_0.A)) {
      fVar1 = (pFVar7->field0_0x0)._s_0.G;
      fVar2 = (pFVar7->field0_0x0)._s_0.B;
      fVar3 = (pFVar7->field0_0x0)._s_0.A;
      local_30 = FFieldNotificationClassDescriptor::ChatCommandColor.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::ChatCommandColor.FieldName;
      (this->ChatCommandColor).field0_0x0._s_0.R = (pFVar7->field0_0x0)._s_0.R;
      (this->ChatCommandColor).field0_0x0._s_0.G = fVar1;
      (this->ChatCommandColor).field0_0x0._s_0.B = fVar2;
      (this->ChatCommandColor).field0_0x0._s_0.A = fVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
  }
  this->InputChattingType = param_1;
  SetChatCommandListVisibility(this,Collapsed);
  return;
}

// OnChangedChatMode @ 14bd6f930

void __thiscall
UDS_VM_Chat_Command::OnChangedChatMode(UDS_VM_Chat_Command *this,EDS_ChatMode param_1)

{
  if (param_1 == Viewer) {
    SetChatCommandListVisibility(this,Collapsed);
    return;
  }
  return;
}

// OnChangedChatOption @ 14bd6ff10

void __thiscall UDS_VM_Chat_Command::OnChangedChatOption(UDS_VM_Chat_Command *this)

{
  OnChangeInputChattingType(this,this->InputChattingType);
  return;
}

// OnChatPopup @ 14bd70b80

void __thiscall
UDS_VM_Chat_Command::OnChatPopup
          (UDS_VM_Chat_Command *this,EDS_ViewModelTemplateKey param_1,bool param_2)

{
  if (((param_1 - Chat_SubTabs < 0x11) && ((0x14001U >> (param_1 - Chat_SubTabs & 0x1f) & 1) != 0))
     && (param_2)) {
    SetChatCommandListVisibility(this,Collapsed);
    return;
  }
  return;
}

// OnClickChatCommand @ 14bd72620

void __thiscall
UDS_VM_Chat_Command::OnClickChatCommand(UDS_VM_Chat_Command *this,FDS_ButtonEventField *param_1)

{
  ESlateVisibility EVar1;
  
  EVar1 = SelfHitTestInvisible;
  if (this->ChatCommandListVisibility != Collapsed) {
    EVar1 = Collapsed;
  }
  SetChatCommandListVisibility(this,EVar1);
  return;
}

// OnInput_ChangeChattingType @ 14bd79c90

void __thiscall
UDS_VM_Chat_Command::OnInput_ChangeChattingType
          (UDS_VM_Chat_Command *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UDS_ChattingManager *this_00;
  uint uVar4;
  
  if (param_2 == Started) {
    uVar3 = GetCommandDataIndex(this,(int)(param_3->Value).field0_0x0._s_0.X);
    if (((-1 < (int)uVar3) && ((int)uVar3 < (this->ChattingCommandDatas).ArrayNum)) &&
       (this_00 = UDS_ChattingManager::GetInst(), this_00 != (UDS_ChattingManager *)0x0)) {
      uVar4 = 0;
      if ((int)uVar3 < (this->ChattingCommandDatas).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UDS_ChattingManager::SetInputChattingType
                (this_00,(EDS_ChattingType)
                         (this->ChattingCommandDatas).AllocatorInstance.Data
                         [(longlong)(int)uVar3 * 0x40 + 4]);
    }
  }
  return;
}

// OnInput_SelectCommand @ 14bd79e00

void __thiscall
UDS_VM_Chat_Command::OnInput_SelectCommand
          (UDS_VM_Chat_Command *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UDS_ChatEvent *pUVar4;
  uint uVar5;
  
  if (param_2 == Started) {
    uVar3 = GetCommandDataIndex(this,this->SelectedIndexOffset);
    if (((-1 < (int)uVar3) && ((int)uVar3 < (this->ChattingCommandDatas).ArrayNum)) &&
       (pUVar4 = UDS_ChatEvent::GetEvent(), pUVar4 != (UDS_ChatEvent *)0x0)) {
      uVar5 = 0;
      if ((int)uVar3 < (this->ChattingCommandDatas).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FDS_EventDelegate<enum_EDS_ChattingType_const_>::Broadcast
                (&pUVar4->OnClickedChattingCommand,
                 (EDS_ChattingType)
                 (this->ChattingCommandDatas).AllocatorInstance.Data
                 [(longlong)(int)uVar3 * 0x40 + 4]);
    }
  }
  return;
}

// OnInput_SelectCommandSlot @ 14bd79ed0

void __thiscall
UDS_VM_Chat_Command::OnInput_SelectCommandSlot
          (UDS_VM_Chat_Command *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UDS_ChatEvent *pUVar4;
  uint uVar5;
  
  if (param_2 == Started) {
    this->SelectedIndexOffset = this->SelectedIndexOffset + (int)(param_3->Value).field0_0x0._s_0.X;
    uVar3 = GetCommandDataIndex(this,this->SelectedIndexOffset);
    if (((-1 < (int)uVar3) && ((int)uVar3 < (this->ChattingCommandDatas).ArrayNum)) &&
       (pUVar4 = UDS_ChatEvent::GetEvent(), pUVar4 != (UDS_ChatEvent *)0x0)) {
      uVar5 = 0;
      if ((int)uVar3 < (this->ChattingCommandDatas).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FDS_EventDelegate<enum_EDS_ChattingType_const_>::Broadcast
                (&pUVar4->OnSelectedChattingCommand,
                 (EDS_ChattingType)
                 (this->ChattingCommandDatas).AllocatorInstance.Data
                 [(longlong)(int)uVar3 * 0x40 + 4]);
    }
  }
  return;
}

// OnSetViewModel @ 14bd7f800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_Command::OnSetViewModel
          (UDS_VM_Chat_Command *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_Chat,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_Chat>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_Chat *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_Command::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x16,L"chatContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_Chat *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->InputChattingType = (local_158.Object)->InputChattingType;
    UpdateChatCommandList(this);
    OnChangeInputChattingType(this,this->InputChattingType);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChatCommandColor @ 14bd87160

void __thiscall
UDS_VM_Chat_Command::SetChatCommandColor(UDS_VM_Chat_Command *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ChatCommandColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ChatCommandColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ChatCommandColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ChatCommandColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ChatCommandColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatCommandColor.FieldName;
    (this->ChatCommandColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ChatCommandColor).field0_0x0._s_0.G = fVar1;
    (this->ChatCommandColor).field0_0x0._s_0.B = fVar2;
    (this->ChatCommandColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatCommandIconID @ 14bd87260

void __thiscall UDS_VM_Chat_Command::SetChatCommandIconID(UDS_VM_Chat_Command *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatCommandIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatCommandIconID.FieldName;
  if (this->ChatCommandIconID != param_1) {
    this->ChatCommandIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatCommandListVisibility @ 14bd872b0

void __thiscall
UDS_VM_Chat_Command::SetChatCommandListVisibility
          (UDS_VM_Chat_Command *this,ESlateVisibility param_1)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar5;
  int iVar6;
  int *piVar7;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  FName local_38;
  ulonglong uStack_30;
  
  if (param_1 == SelfHitTestInvisible) {
    UpdateChatCommandList(this);
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<bool_const_,enum_EDS_KeyActionType_const_>::Broadcast
                (&pUVar1->OnAddedKeyActionType,true,IA_Chatting_SelectChattingType);
    }
    pUVar2 = UDS_InputEvent::GetEvent();
    if (pUVar2 != (UDS_InputEvent *)0x0) {
      this_00 = &(pUVar2->OnInputEvent).Subscriptions;
      local_38 = (FName)OnInput_SelectCommandSlot;
      puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x40;
      local_res10[0] = 0x15f92;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
        puVar3 = *(undefined1 **)puVar4;
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar6 = *(int *)(puVar3 + (ulonglong)
                                  (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x15f92) * 4);
        if (iVar6 != -1) {
          do {
            piVar7 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)this_00);
            if (*piVar7 == 0x15f92) {
              if ((iVar6 != -1) && (piVar7 != (int *)0x0)) goto LAB_14bd873d5;
              break;
            }
            iVar6 = piVar7[0x12];
          } while (iVar6 != -1);
        }
      }
      local_res18 = local_res10;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_res8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f92,
                 (bool *)&local_res18);
      piVar7 = (int *)((longlong)local_res8[0] * 0x50 + *(longlong *)this_00);
LAB_14bd873d5:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat_Command>
                (piVar7 + 2,(UDS_VM_Chat_Command *)local_res8,(pmf_a7023ea2 *)this);
      local_res10[0] = 0x4e2e;
      local_38 = (FName)OnInput_SelectCommand;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
        puVar4 = *(undefined1 **)puVar4;
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar6 = *(int *)(puVar4 + (ulonglong)
                                  (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x4e2e) * 4);
        if (iVar6 != -1) {
          do {
            piVar7 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)this_00);
            if (*piVar7 == 0x4e2e) {
              if (piVar7 != (int *)0x0) goto LAB_14bd874cc;
              break;
            }
            iVar6 = piVar7[0x12];
          } while (iVar6 != -1);
        }
      }
      local_res18 = local_res10;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_res8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e2e,
                 (bool *)&local_res18);
      piVar7 = (int *)((longlong)local_res8[0] * 0x50 + *(longlong *)this_00);
LAB_14bd874cc:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat_Command>
                (piVar7 + 2,(UDS_VM_Chat_Command *)local_res8,(pmf_a7023ea2 *)this);
    }
  }
  else {
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<bool_const_,enum_EDS_KeyActionType_const_>::Broadcast
                (&pUVar1->OnAddedKeyActionType,false,IA_Chatting_SelectChattingType);
    }
    pUVar2 = UDS_InputEvent::GetEvent();
    if (pUVar2 != (UDS_InputEvent *)0x0) {
      puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x40;
      if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
        puVar3 = *(undefined1 **)puVar4;
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar6 = *(int *)(puVar3 + (ulonglong)
                                  (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x15f92) * 4);
        if (iVar6 != -1) {
          do {
            piVar7 = (int *)((longlong)iVar6 * 0x50 +
                            *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
            if (*piVar7 == 0x15f92) {
              if (iVar6 != -1) {
                pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2);
                if (piVar7 == (int *)0x0) {
                  pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
                }
                if (pTVar5 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
                  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar5,this);
                }
              }
              break;
            }
            iVar6 = piVar7[0x12];
          } while (iVar6 != -1);
        }
      }
      if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
        puVar4 = *(undefined1 **)puVar4;
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar6 = *(int *)(puVar4 + (ulonglong)
                                  (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x4e2e) * 4);
        if (iVar6 != -1) {
          do {
            piVar7 = (int *)((longlong)iVar6 * 0x50 +
                            *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
            if (*piVar7 == 0x4e2e) {
              pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2);
              if (piVar7 == (int *)0x0) {
                pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
              }
              if (pTVar5 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
                TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar5,this);
              }
              break;
            }
            iVar6 = piVar7[0x12];
          } while (iVar6 != -1);
        }
      }
    }
  }
  iVar6 = FFieldNotificationClassDescriptor::ChatCommandListVisibility.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::ChatCommandListVisibility.FieldName;
  if (this->ChatCommandListVisibility != param_1) {
    this->ChatCommandListVisibility = param_1;
    uStack_30 = CONCAT44(uStack_30._4_4_,iVar6);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  return;
}

// SetChatCommandName @ 14bd87680

void __thiscall
UDS_VM_Chat_Command::SetChatCommandName(UDS_VM_Chat_Command *this,FDS_StringBaseID *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringID(&this->ChatCommandName,param_1);
  local_10 = FFieldNotificationClassDescriptor::ChatCommandName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatCommandName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bd8bc60

void __thiscall UDS_VM_Chat_Command::UnbindModel(UDS_VM_Chat_Command *this)

{
  UDS_ChatEvent *pUVar1;
  UDS_PartyEvent *pUVar2;
  UDS_DungeonEvent *pUVar3;
  UDS_InputEvent *pUVar4;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputChattingType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdateChattingTabs,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatOption,
               this);
  }
  pUVar2 = UDS_PartyEvent::GetEvent();
  if (pUVar2 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLeftParty,this);
  }
  pUVar3 = UDS_DungeonEvent::GetEvent();
  if (pUVar3 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnJoinedRaidParty,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLeftRaidParty,this);
  }
  pUVar4 = UDS_InputEvent::GetEvent();
  if (pUVar4 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_Chat_Command>(&pUVar4->OnInputEvent,this);
  }
  return;
}

// UpdateChatCommandList @ 14bd8d100

void __thiscall UDS_VM_Chat_Command::UpdateChatCommandList(UDS_VM_Chat_Command *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FDS_ChattingCommandData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  UDS_ChattingManager *this_00;
  TArray<FDS_ChattingCommandData,TSizedDefaultAllocator<32>_> *pTVar9;
  UObject *pUVar10;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_02;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TArray<FDS_ChattingCommandData,TSizedDefaultAllocator<32>_> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  pTVar3 = &this->ChattingCommandDatas;
  piVar1 = &(this->ChattingCommandDatas).ArrayMax;
  (this->ChattingCommandDatas).ArrayNum = 0;
  piVar2 = &(this->ChattingCommandDatas).ArrayNum;
  if ((this->ChattingCommandDatas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  this->SelectedIndexOffset = 0;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    pTVar9 = UDS_ChattingManager::GetChattingCommandDatas(this_00,&local_48);
    if ((pTVar3 == pTVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar4 = pTVar9->ArrayNum;
    if (iVar4 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,8,iVar4,&pTVar3->AllocatorInstance,piVar2,piVar1);
      memmove((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x40,
              (pTVar9->AllocatorInstance).Data,(longlong)iVar4 << 6);
      pTVar9->ArrayNum = 0;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    iVar4 = *piVar2;
    pFVar15 = (pTVar3->AllocatorInstance).Data;
    pFVar14 = pFVar15 + (longlong)iVar4 * 0x40;
    while( true ) {
      if (*piVar2 != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDS_ChattingCommandData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar15 == pFVar14) break;
      pUVar10 = GetTransientPackageAsObject();
      this_01 = NewObject<UDS_UserObjectListItem>(pUVar10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pFVar11 = ::operator_new(0x68);
      if (pFVar11 == (FDS_ViewModelContext *)0x0) {
        pFVar11 = (FDS_ViewModelContext *)0x0;
      }
      else {
        pFVar11->_padding_ = 0;
        pFVar11->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar11->ViewModelName).ComparisonIndex = 0;
        (pFVar11->ViewModelName).Number = 0;
        *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
        pFVar11[1]._padding_ = 0;
        pFVar11[1].DerivedStaticStruct = (UStruct *)0x0;
        pFVar11[1].ViewModelName.ComparisonIndex = 0;
        pFVar11[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar11[1].ViewModelTemplateKey = 0;
        pFVar11[2]._padding_ = 0;
        pFVar11[2].DerivedStaticStruct = (UStruct *)0x0;
        pFVar11[2].ViewModelName.ComparisonIndex = 0;
        pFVar11[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar11[2].ViewModelTemplateKey = 0;
        pFVar11[3]._padding_ = 0;
        pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatCommand__6B_;
        *(undefined1 *)&pFVar11[1]._padding_ = 3;
        pFVar11[1].ViewModelName = (FName)&___7FDS_StringBaseID__6B_;
        pFVar11[2]._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
      }
      pTVar12 = ::operator_new(0x20);
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar12->SharedReferenceCount = (atomic<int>)0x1;
        pTVar12[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar12->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatCommand__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar12->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar12[1].SharedReferenceCount = pFVar11;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar13 = FDS_ViewModelContext_ChatCommand::StaticStruct();
      pFVar11->DerivedStaticStruct = (UStruct *)pUVar13;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = pFVar11;
        local_68.SharedReferenceCount.ReferenceController = pTVar12;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = Chat_CommandSlot;
      *(EDS_ChattingType *)&pFVar11[1]._padding_ = this->InputChattingType;
      *(undefined4 *)&pFVar11[1].DerivedStaticStruct = *(undefined4 *)pFVar15;
      *(FScriptContainerElement *)((longlong)&pFVar11[1].DerivedStaticStruct + 4) = pFVar15[4];
      *(undefined8 *)&pFVar11[1].ViewModelTemplateKey = *(undefined8 *)(pFVar15 + 0x10);
      pFVar11[2].DerivedStaticStruct = *(UStruct **)(pFVar15 + 0x20);
      pFVar11[2].ViewModelName.ComparisonIndex.Value = *(uint *)(pFVar15 + 0x28);
      uVar6 = *(undefined8 *)(pFVar15 + 0x34);
      *(undefined8 *)&pFVar11[2].ViewModelName.Number = *(undefined8 *)(pFVar15 + 0x2c);
      *(undefined8 *)&pFVar11[2].field_0x1c = uVar6;
      *(undefined4 *)((longlong)&pFVar11[3]._padding_ + 4) = *(undefined4 *)(pFVar15 + 0x3c);
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar11;
      local_58.SharedReferenceCount.ReferenceController = pTVar12;
      UDS_UserObjectListItem::AddContext(this_01,&local_58);
      local_res10 = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      pFVar15 = pFVar15 + 0x40;
    }
  }
  local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  return;
}

