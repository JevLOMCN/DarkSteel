// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetFocusLostEvent_WrapperImpl @ 14b612310

void __cdecl UDS_VM_Chat_Macro::SetFocusLostEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatEvent *pUVar1;
  
  if (*(char *)((longlong)param_2 + 1) == '\0') {
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                (&pUVar1->OnChatPopup,Chat_Macro,false);
      return;
    }
  }
  return;
}

// StaticClass @ 14b612320

UClass * __cdecl UDS_VM_Chat_Macro::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Macro.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Macro",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Macro.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Macro,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Macro>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Macro>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Macro.InnerSingleton;
}

// UDS_VM_Chat_Macro @ 14b616160

UDS_VM_Chat_Macro * __thiscall
UDS_VM_Chat_Macro::UDS_VM_Chat_Macro(UDS_VM_Chat_Macro *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SelectedItemIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Macro__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusLostEvent)._padding_ = '\0';
  (this->FocusLostEvent).bLostFocusByChild = false;
  (this->SetFocusEvent).bIsActivate = false;
  return this;
}

// UDS_VM_Chat_Macro @ 14b6161d0

UDS_VM_Chat_Macro * __thiscall
UDS_VM_Chat_Macro::UDS_VM_Chat_Macro(UDS_VM_Chat_Macro *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->SelectedItemIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Macro__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusLostEvent)._padding_ = '\0';
  (this->FocusLostEvent).bLostFocusByChild = false;
  (this->SetFocusEvent).bIsActivate = false;
  return this;
}

// ~UDS_VM_Chat_Macro @ 14b617740

void __thiscall UDS_VM_Chat_Macro::~UDS_VM_Chat_Macro(UDS_VM_Chat_Macro *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Macro__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619320

IClassDescriptor * __thiscall
UDS_VM_Chat_Macro::GetFieldNotificationDescriptor(UDS_VM_Chat_Macro *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_Macro::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619d40

UClass * __cdecl UDS_VM_Chat_Macro::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Macro.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Macro",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Macro.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Macro,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_Macro>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Macro>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Macro.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_Macro @ 14b61a260

void __cdecl UDS_VM_Chat_Macro::StaticRegisterNativesUDS_VM_Chat_Macro(void)

{
  return;
}

// BindModel @ 14bd486d0

void __thiscall UDS_VM_Chat_Macro::BindModel(UDS_VM_Chat_Macro *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ViewModelTemplateKey,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Macro>
              (&pUVar1->OnChatPopup,(UDS_VM_Chat_Macro *)local_res10,(pmf_72d3fccc *)this);
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar2->OnInputEvent).Subscriptions;
    local_res10[0] = 0x15f9f;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar3 = *(undefined1 **)&(pUVar2->OnInputEvent).Subscriptions.field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15f9f) * 4);
      if (iVar4 != -1) {
        do {
          piVar5 = (int *)((longlong)iVar4 * 0x50 + *(longlong *)this_00);
          if (*piVar5 == 0x15f9f) {
            if (piVar5 != (int *)0x0) goto LAB_14bd48800;
            break;
          }
          iVar4 = piVar5[0x12];
        } while (iVar4 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f9f,
               (bool *)&local_res20);
    piVar5 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bd48800:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar5 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Macro>
              (piVar5 + 2,(UDS_VM_Chat_Macro *)local_res18,(pmf_7a48fb43 *)this);
  }
  return;
}

// OnChatPopup @ 14bd70d10

void __thiscall
UDS_VM_Chat_Macro::OnChatPopup
          (UDS_VM_Chat_Macro *this,EDS_ViewModelTemplateKey param_1,bool param_2)

{
  if (param_1 == Chat_Macro) {
    SetShowMacro(this,param_2);
    return;
  }
  if ((param_1 == Chat_SubTabs) && (param_2)) {
    SetShowMacro(this,false);
    return;
  }
  return;
}

// OnFocusLostEvent @ 14bd78a40

void __thiscall
UDS_VM_Chat_Macro::OnFocusLostEvent(UDS_VM_Chat_Macro *this,FDS_FocusEventField *param_1)

{
  UDS_ChatEvent *pUVar1;
  
  if (param_1->bLostFocusByChild == false) {
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
                (&pUVar1->OnChatPopup,Chat_Macro,false);
      return;
    }
  }
  return;
}

// OnInput_ChatMacros @ 14bd79db0

void __thiscall
UDS_VM_Chat_Macro::OnInput_ChatMacros
          (UDS_VM_Chat_Macro *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  ESlateVisibility EVar1;
  UDS_ChatEvent *pUVar2;
  
  if ((param_2 == Started) && (pUVar2 = UDS_ChatEvent::GetEvent(), pUVar2 != (UDS_ChatEvent *)0x0))
  {
    EVar1 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar2->OnChatPopup,Chat_Macro,EVar1 == Collapsed);
  }
  return;
}

// OnInput_SelectMacro @ 14bd79fb0

void __thiscall
UDS_VM_Chat_Macro::OnInput_SelectMacro
          (UDS_VM_Chat_Macro *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar5;
  UDS_UserObjectListItem *this_00;
  UDS_ChatEvent *pUVar6;
  FWeakObjectPtr local_28;
  UObject *local_20;
  TSharedPtr<FDS_ViewModelContext_ChatMacro,1> local_18;
  
  if ((param_2 == Started) && (this->SelectedItemIndex != -1)) {
    pTVar5 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
    iVar1 = this->SelectedItemIndex;
    if ((-1 < iVar1) && (iVar1 < pTVar5->ArrayNum)) {
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = *(UObject **)((pTVar5->AllocatorInstance).Data + (longlong)iVar1 * 8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar2 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
      }
      local_28.ObjectIndex = 0;
      local_28.ObjectSerialNumber = 0;
      local_20 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
      bVar4 = FWeakObjectPtr::IsValid(&local_28);
      if (bVar4) {
        this_00 = (UDS_UserObjectListItem *)FWeakObjectPtr::Get(&local_28);
        UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_ChatMacro>(this_00,&local_18);
        if ((local_18.Object != (FDS_ViewModelContext_ChatMacro *)0x0) &&
           (pUVar6 = UDS_ChatEvent::GetEvent(), pUVar6 != (UDS_ChatEvent *)0x0)) {
          if ((local_18.Object == (FDS_ViewModelContext_ChatMacro *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FDS_EventDelegate<int_const_>::Broadcast
                    (&pUVar6->OnClickedMacroSlot,(local_18.Object)->ChatMacroIndex);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return;
}

// OnInput_SelectMacroSlot @ 14bd7a150

void __thiscall
UDS_VM_Chat_Macro::OnInput_SelectMacroSlot
          (UDS_VM_Chat_Macro *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar6;
  UDS_UserObjectListItem *this_00;
  UDS_ChatEvent *pUVar7;
  uint uVar8;
  int iVar10;
  FWeakObjectPtr local_28;
  UObject *local_20;
  TSharedPtr<FDS_ViewModelContext_ChatMacro,1> local_18;
  int iVar9;
  
  if ((param_2 == Started) && (UpdateSelectedItemIndex(this), this->SelectedItemIndex != -1)) {
    pTVar6 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
    iVar10 = 1;
    uVar5 = this->SelectedItemIndex;
    iVar1 = pTVar6->ArrayNum;
    if (1 < iVar1) {
      do {
        iVar9 = -iVar10;
        if (0.0 < (float)(param_3->Value).field0_0x0._s_0.X) {
          iVar9 = iVar10;
        }
        uVar8 = iVar9 + uVar5;
        iVar9 = iVar1;
        if (-1 < (int)uVar8) {
          if ((int)uVar8 < iVar1) goto LAB_14bd7a1fb;
          iVar9 = -iVar1;
        }
        uVar8 = uVar8 + iVar9;
        if ((-1 < (int)uVar8) && ((int)uVar8 < iVar1)) goto LAB_14bd7a1fb;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
    }
    uVar8 = uVar5;
    if (uVar5 != 0xffffffff) {
LAB_14bd7a1fb:
      if ((-1 < (int)uVar8) && ((int)uVar8 < iVar1)) {
        this->SelectedItemIndex = uVar8;
        uVar5 = 0;
        if ((int)uVar8 < pTVar6->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar2 = *(UObject **)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar8 * 8);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar2 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
        }
        local_28.ObjectIndex = 0;
        local_28.ObjectSerialNumber = 0;
        local_20 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
        bVar4 = FWeakObjectPtr::IsValid(&local_28);
        if (bVar4) {
          this_00 = (UDS_UserObjectListItem *)FWeakObjectPtr::Get(&local_28);
          UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_ChatMacro>(this_00,&local_18);
          if ((local_18.Object != (FDS_ViewModelContext_ChatMacro *)0x0) &&
             (pUVar7 = UDS_ChatEvent::GetEvent(), pUVar7 != (UDS_ChatEvent *)0x0)) {
            if ((local_18.Object == (FDS_ViewModelContext_ChatMacro *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FDS_EventDelegate<int_const_>::Broadcast
                      (&pUVar7->OnSelectedMacroSlot,(local_18.Object)->ChatMacroIndex);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bd81d50

void __thiscall
UDS_VM_Chat_Macro::OnSetViewModel
          (UDS_VM_Chat_Macro *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SetShowMacro(this,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetShowMacro @ 14bd8a870

void __thiscall UDS_VM_Chat_Macro::SetShowMacro(UDS_VM_Chat_Macro *this,bool param_1)

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
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  FName local_38;
  ulonglong uStack_30;
  
  if (param_1) {
    (this->SetFocusEvent).bIsActivate = param_1;
    uStack_30 = CONCAT44(uStack_30._4_4_,FFieldNotificationClassDescriptor::SetFocusEvent.BitNumber)
    ;
    local_38 = FFieldNotificationClassDescriptor::SetFocusEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    UpdateChatMacros(this);
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<bool_const_,enum_EDS_KeyActionType_const_>::Broadcast
                (&pUVar1->OnAddedKeyActionType,true,IA_Chatting_SelectQuickMessage);
    }
    pUVar2 = UDS_InputEvent::GetEvent();
    if (pUVar2 != (UDS_InputEvent *)0x0) {
      this_00 = &(pUVar2->OnInputEvent).Subscriptions;
      local_38 = (FName)OnInput_SelectMacroSlot;
      puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x40;
      local_res10[0] = 0x15f93;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
        puVar3 = *(undefined1 **)puVar4;
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar6 = *(int *)(puVar3 + (ulonglong)
                                  (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                  0x15f93) * 4);
        if (iVar6 != -1) {
          do {
            piVar7 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)this_00);
            if (*piVar7 == 0x15f93) {
              if ((iVar6 != -1) && (piVar7 != (int *)0x0)) goto LAB_14bd8a9bb;
              break;
            }
            iVar6 = piVar7[0x12];
          } while (iVar6 != -1);
        }
      }
      local_res20 = local_res10;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f93,
                 (bool *)&local_res20);
      piVar7 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bd8a9bb:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat_Macro>
                (piVar7 + 2,(UDS_VM_Chat_Macro *)local_res18,(pmf_7a48fb43 *)this);
      local_res10[0] = 0x4e2e;
      local_38 = (FName)OnInput_SelectMacro;
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
              if (piVar7 != (int *)0x0) goto LAB_14bd8aac2;
              break;
            }
            iVar6 = piVar7[0x12];
          } while (iVar6 != -1);
        }
      }
      local_res20 = local_res10;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e2e,
                 (bool *)&local_res20);
      piVar7 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bd8aac2:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_VM_Chat_Macro>
                (piVar7 + 2,(UDS_VM_Chat_Macro *)local_res18,(pmf_7a48fb43 *)this);
      return;
    }
  }
  else {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<bool_const_,enum_EDS_KeyActionType_const_>::Broadcast
                (&pUVar1->OnAddedKeyActionType,false,IA_Chatting_SelectQuickMessage);
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
                                  0x15f93) * 4);
        if (iVar6 != -1) {
          do {
            piVar7 = (int *)((longlong)iVar6 * 0x50 +
                            *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
            if (*piVar7 == 0x15f93) {
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
          while (piVar7 = (int *)((longlong)iVar6 * 0x50 +
                                 *(longlong *)&(pUVar2->OnInputEvent).Subscriptions),
                *piVar7 != 0x4e2e) {
            iVar6 = piVar7[0x12];
            if (iVar6 == -1) {
              return;
            }
          }
          pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2);
          if (piVar7 == (int *)0x0) {
            pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
          }
          if (pTVar5 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar5,this);
          }
        }
      }
    }
  }
  return;
}

// UnbindModel @ 14bd8c330

void __thiscall UDS_VM_Chat_Macro::UnbindModel(UDS_VM_Chat_Macro *this)

{
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_Chat_Macro>(&pUVar2->OnInputEvent,this);
    return;
  }
  return;
}

// UpdateChatMacros @ 14bd8d720

void __thiscall UDS_VM_Chat_Macro::UpdateChatMacros(UDS_VM_Chat_Macro *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_ChattingManager *pUVar4;
  UObject *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar9;
  uint uVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  UDS_UserObjectListItem *local_res10;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  this->SelectedItemIndex = -1;
  pUVar4 = UDS_ChattingManager::GetInst();
  if (pUVar4 != (UDS_ChattingManager *)0x0) {
    iVar3 = DS_CommonDataHelper::ChattingMaxMacroCount();
    pFVar12 = (FDS_ViewModelContext *)0x0;
    pFVar11 = pFVar12;
    if (0 < iVar3) {
      do {
        pUVar5 = GetTransientPackageAsObject();
        this_00 = NewObject<UDS_UserObjectListItem>(pUVar5);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar6 = ::operator_new(0x28);
        pFVar9 = pFVar12;
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
          *(undefined2 *)((longlong)&pFVar6[1]._padding_ + 5) = 0;
          *(undefined1 *)((longlong)&pFVar6[1]._padding_ + 7) = 0;
          *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
          (pFVar6->ViewModelName).ComparisonIndex = 0;
          (pFVar6->ViewModelName).Number = 0;
          pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatMacro__6B_;
          *(undefined4 *)&pFVar6[1]._padding_ = 0xffffffff;
          *(undefined1 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
          pFVar9 = pFVar6;
        }
        pFVar7 = ::operator_new(0x20);
        pFVar6 = pFVar12;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar7->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatMacro__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar9;
          pFVar6 = pFVar7;
        }
        if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar8 = FDS_ViewModelContext_ChatMacro::StaticStruct();
        *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar8;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar6->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_58.Object = pFVar9;
          local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
        }
        pFVar9->ViewModelTemplateKey = Chat_MacroSlot;
        *(int *)&pFVar9[1]._padding_ = (int)pFVar11;
        if (pFVar6 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar6->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_48.Object = pFVar9;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        UDS_UserObjectListItem::AddContext(this_00,&local_48);
        local_res10 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar6);
        uVar10 = (int)pFVar11 + 1;
        pFVar11 = (FDS_ViewModelContext *)(ulonglong)uVar10;
      } while ((int)uVar10 < iVar3);
    }
  }
  UpdateSelectedItemIndex(this);
  local_60 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// UpdateSelectedItemIndex @ 14bd93130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_Macro::UpdateSelectedItemIndex(UDS_VM_Chat_Macro *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar7;
  UDS_UserObjectListItem *this_00;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  UObject *local_178;
  TSharedPtr<FDS_ViewModelContext_ChatMacro,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->SelectedItemIndex == -1) {
    ADS_PlayerController::GetPlayerController();
    bVar3 = FWeakObjectPtr::IsValid(&local_180);
    if (bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&local_180);
      if (pUVar6[0x36].field_0x8 == '\x02') {
        pTVar7 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
        uVar8 = 0;
        iVar1 = pTVar7->ArrayNum;
        uVar10 = uVar8;
        if (0 < iVar1) {
          do {
            uVar9 = (uint)uVar10;
            uVar4 = 0;
            if ((int)uVar9 < pTVar7->ArrayNum) {
              uVar4 = ~uVar9 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pUVar6 = *(UObject **)((pTVar7->AllocatorInstance).Data + uVar8 * 8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar6 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
            }
            local_188.ObjectIndex = 0;
            local_188.ObjectSerialNumber = 0;
            local_178 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_178);
            bVar3 = FWeakObjectPtr::IsValid(&local_188);
            if (bVar3) {
              this_00 = (UDS_UserObjectListItem *)FWeakObjectPtr::Get(&local_188);
              UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_ChatMacro>(this_00,&local_170)
              ;
              if (local_170.Object != (FDS_ViewModelContext_ChatMacro *)0x0) {
                (local_170.Object)->IsSelected = true;
                this->SelectedItemIndex = uVar9;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_170.SharedReferenceCount.ReferenceController);
                return;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_170.SharedReferenceCount.ReferenceController);
            }
            uVar8 = uVar8 + 1;
            uVar10 = (ulonglong)(uVar9 + 1);
          } while ((longlong)uVar8 < (longlong)iVar1);
        }
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Chat_Macro::UpdateSelectedItemIndex",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_158.Ptr,0x66,L"playerController.IsValid() == false");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

