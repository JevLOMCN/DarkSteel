// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b667e10

UClass * __cdecl UDS_VM_HUD_MyPartyGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_MyPartyGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_MyPartyGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_MyPartyGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_MyPartyGroup,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_MyPartyGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_MyPartyGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_MyPartyGroup.InnerSingleton;
}

// UDS_VM_HUD_MyPartyGroup @ 14b66e340

UDS_VM_HUD_MyPartyGroup * __thiscall
UDS_VM_HUD_MyPartyGroup::UDS_VM_HUD_MyPartyGroup
          (UDS_VM_HUD_MyPartyGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_MyParty = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_MyPartyGroup__6B_;
  (this->VM_PartyMemeberSlot1).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_PartyMemeberSlot2).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_PartyMemeberSlot3).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_SlotInputKey1).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_SlotInputKey2).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_SlotInputKey3).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  return this;
}

// UDS_VM_HUD_MyPartyGroup @ 14b66e3b0

UDS_VM_HUD_MyPartyGroup * __thiscall
UDS_VM_HUD_MyPartyGroup::UDS_VM_HUD_MyPartyGroup
          (UDS_VM_HUD_MyPartyGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_MyParty = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_MyPartyGroup__6B_;
  (this->VM_PartyMemeberSlot1).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_PartyMemeberSlot2).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_PartyMemeberSlot3).field0_0x0.DebugPtr = (UDS_VM_HUD_PartyMemberSlot *)0x0;
  (this->VM_SlotInputKey1).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_SlotInputKey2).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_SlotInputKey3).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  return this;
}

// ~UDS_VM_HUD_MyPartyGroup @ 14b66f710

void __thiscall UDS_VM_HUD_MyPartyGroup::~UDS_VM_HUD_MyPartyGroup(UDS_VM_HUD_MyPartyGroup *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_MyPartyGroup__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671c00

IClassDescriptor * __thiscall
UDS_VM_HUD_MyPartyGroup::GetFieldNotificationDescriptor(UDS_VM_HUD_MyPartyGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_MyPartyGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6728e0

UClass * __cdecl UDS_VM_HUD_MyPartyGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_MyPartyGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_MyPartyGroup",
               &Z_Registration_Info_UClass_UDS_VM_HUD_MyPartyGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_MyPartyGroup,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_MyPartyGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_MyPartyGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_MyPartyGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_MyPartyGroup @ 14b672c60

void __cdecl UDS_VM_HUD_MyPartyGroup::StaticRegisterNativesUDS_VM_HUD_MyPartyGroup(void)

{
  return;
}

// BindModel @ 14bed70f0

void __thiscall UDS_VM_HUD_MyPartyGroup::BindModel(UDS_VM_HUD_MyPartyGroup *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  undefined1 *puVar1;
  UDS_DungeonEvent *pUVar2;
  UDS_PartyEvent *pUVar3;
  UDS_InputEvent *pUVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  pUVar2 = UDS_DungeonEvent::GetEvent();
  if (pUVar2 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_MyPartyGroup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedRaidPartyInfo,(UDS_VM_HUD_MyPartyGroup *)local_res10,
               (pmf_4011db46 *)this);
  }
  pUVar3 = UDS_PartyEvent::GetEvent();
  if (pUVar3 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnJoinedParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_MyPartyGroup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnJoinedParty,(UDS_VM_HUD_MyPartyGroup *)local_res10,(pmf_4011db46 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_MyPartyGroup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnLeftParty,(UDS_VM_HUD_MyPartyGroup *)local_res10,(pmf_4011db46 *)this);
  }
  pUVar4 = UDS_InputEvent::GetEvent();
  if (pUVar4 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar4->OnInputEvent).Subscriptions;
    puVar1 = &(pUVar4->OnInputEvent).Subscriptions.field_0x40;
    local_res10[0] = 0x2ee1;
    if (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x34) {
      puVar5 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar5 = &(pUVar4->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar6 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x2ee1) * 4);
      if (iVar6 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)this_00);
          if (*piVar7 == 0x2ee1) {
            if ((iVar6 != -1) && (piVar7 != (int *)0x0)) goto LAB_14bed727b;
            break;
          }
          iVar6 = piVar7[0x12];
        } while (iVar6 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2ee1,
               (bool *)&local_res20);
    piVar7 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bed727b:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_MyPartyGroup>
              (piVar7 + 2,(UDS_VM_HUD_MyPartyGroup *)local_res18,(pmf_d81f8d6b *)this);
    local_res10[0] = 0x2ee2;
    if (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x34) {
      puVar5 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar5 = &(pUVar4->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar6 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x2ee2) * 4);
      if (iVar6 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)this_00);
          if (*piVar7 == 0x2ee2) {
            if (piVar7 != (int *)0x0) goto LAB_14bed7361;
            break;
          }
          iVar6 = piVar7[0x12];
        } while (iVar6 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2ee2,
               (bool *)&local_res20);
    piVar7 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bed7361:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_MyPartyGroup>
              (piVar7 + 2,(UDS_VM_HUD_MyPartyGroup *)local_res18,(pmf_d81f8d6b *)this);
    local_res10[0] = 0x2ee3;
    if (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x34) {
      puVar5 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar5 = &(pUVar4->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar6 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x2ee3) * 4);
      if (iVar6 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)this_00);
          if (*piVar7 == 0x2ee3) {
            if (piVar7 != (int *)0x0) goto LAB_14bed7427;
            break;
          }
          iVar6 = piVar7[0x12];
        } while (iVar6 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2ee3,
               (bool *)&local_res20);
    piVar7 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bed7427:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_MyPartyGroup>
              (piVar7 + 2,(UDS_VM_HUD_MyPartyGroup *)local_res18,(pmf_d81f8d6b *)this);
  }
  return;
}

// GetPartySlotContext @ 14beefa30

TSharedPtr<FDS_ViewModelContext_PartyMember,1> * __thiscall
UDS_VM_HUD_MyPartyGroup::GetPartySlotContext
          (UDS_VM_HUD_MyPartyGroup *this,
          TSharedPtr<FDS_ViewModelContext_PartyMember,1> *__return_storage_ptr__,
          EDS_PartyType param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> *pTVar3;
  
  MakeContext<FDS_ViewModelContext_PartyMember>(__return_storage_ptr__);
  if (__return_storage_ptr__->Object == (FDS_ViewModelContext_PartyMember *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FDS_ViewModelContext_PartyMember,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object->PartyType = param_1;
  if (__return_storage_ptr__->Object == (FDS_ViewModelContext_PartyMember *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FDS_ViewModelContext_PartyMember,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object->SlotIndex = param_2;
  return __return_storage_ptr__;
}

// InitViewModel @ 14bef2800

void __thiscall UDS_VM_HUD_MyPartyGroup::InitViewModel(UDS_VM_HUD_MyPartyGroup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_HUD_PartyMemberSlot *pUVar4;
  UDS_VM_InputKey *pUVar5;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_68;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_58;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_PartyMemeberSlot1).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyMemberSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_HUD_PartyMemberSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_PartyMemeberSlot1).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_PartyMemeberSlot2).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyMemberSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_HUD_PartyMemberSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_PartyMemeberSlot2).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_PartyMemeberSlot3).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_HUD_PartyMemberSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_HUD_PartyMemberSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_PartyMemeberSlot3).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_SlotInputKey1).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_68);
    pFVar2 = local_68.Object;
    if (local_68.Object == (FDS_ViewModelContext_InputKey *)0x0) {
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
    local_38.Object = (FDS_ViewModelContext *)local_68.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_38);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_SlotInputKey1).field0_0x0.DebugPtr = pUVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_SlotInputKey2).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_58);
    pFVar2 = local_58.Object;
    if (local_58.Object == (FDS_ViewModelContext_InputKey *)0x0) {
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
    local_28.Object = (FDS_ViewModelContext *)local_58.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_28);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_SlotInputKey2).field0_0x0.DebugPtr = pUVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_SlotInputKey3).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_48);
    pFVar2 = local_48.Object;
    if (local_48.Object == (FDS_ViewModelContext_InputKey *)0x0) {
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
    local_18.Object = (FDS_ViewModelContext *)local_48.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_SlotInputKey3).field0_0x0.DebugPtr = pUVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnInput_PartyMemberSelect @ 14befe330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_MyPartyGroup::OnInput_PartyMemberSelect
          (UDS_VM_HUD_MyPartyGroup *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2 == Started) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_MyPartyGroup::OnInput_PartyMemberSelect",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Display,local_138.Ptr,0xd5,
                 L"OnInput_PartyMemberSelect() - member slot index : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnPartyInfoChanged @ 14bf01900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_MyPartyGroup::OnPartyInfoChanged(UDS_VM_HUD_MyPartyGroup *this)

{
  FScriptContainerElement *pFVar1;
  UDS_VM_HUD_PartyMemberSlot *pUVar2;
  code *pcVar3;
  uint uVar4;
  FDS_RaidPartyMemberInfo *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FDS_RaidPartyRepo *pFVar11;
  UDS_LogManager *pUVar12;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> *pTVar13;
  FDS_PartyRepo *pFVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ESlateVisibility EVar19;
  undefined1 auStackY_3c8 [32];
  undefined1 local_388 [8];
  ForAnyElementType local_380;
  undefined8 local_378;
  ForAnyElementType local_370;
  uint local_368;
  int local_364;
  FDS_RaidPartyMemberInfo *local_360;
  FName local_358;
  int local_350;
  TSharedPtr<FDS_ViewModelContext,1> local_348;
  TSharedPtr<FDS_ViewModelContext,1> local_338;
  TSharedPtr<FDS_ViewModelContext,1> local_328;
  TSharedPtr<FDS_ViewModelContext,1> local_318;
  TSharedPtr<FDS_ViewModelContext,1> local_308;
  TSharedPtr<FDS_ViewModelContext,1> local_2f8;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_2e8;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_2d8;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_2c8;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_2b8;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext_PartyMember,1> local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  int local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if ((((this->VM_PartyMemeberSlot1).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0) ||
      ((this->VM_PartyMemeberSlot2).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0)) ||
     ((this->VM_PartyMemeberSlot3).field0_0x0.DebugPtr == (UDS_VM_HUD_PartyMemberSlot *)0x0)) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_HUD_MyPartyGroup::OnPartyInfoChanged",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar12,1,Warning,local_158.Ptr,0x74,L"VM_PartyMemeberSlot is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar6 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar11);
    if (bVar6) {
      pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      local_360 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar11);
      iVar7 = FDS_RaidPartyService::GetMyRaidPartyNumber(local_360->SlotIndex);
      if (iVar7 << 2 < 0) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar12 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_HUD_MyPartyGroup::OnPartyInfoChanged",0x2b,Yes);
        UDS_LogManager::PrintLog(pUVar12,1,Warning,local_278.Ptr,0x7e,L"MyPartyNum is invalid.");
        if ((void *)local_278._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_278._padding_);
        return;
      }
      local_288 = 1;
      uStack_284 = 2;
      local_280 = 3;
      local_370.Data = (FScriptContainerElement *)0x0;
      local_368 = 3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,3,0,&local_370,3,&local_364);
      pFVar5 = local_360;
      uVar4 = local_368;
      *(ulonglong *)local_370.Data = CONCAT44(uStack_284,local_288);
      *(int *)(local_370.Data + 8) = local_280;
      uVar17 = (ulonglong)(int)local_368;
      pFVar1 = local_370.Data + uVar17 * 4;
      FVar18.Data = local_370.Data;
      while( true ) {
        uVar15 = (uint)uVar17;
        if ((uint)uVar17 != uVar4) {
          local_388[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_388);
          uVar15 = local_368;
        }
        if (FVar18.Data == pFVar1) break;
        iVar8 = *(int *)FVar18.Data + iVar7 * 4;
        iVar10 = iVar8 + 1;
        if (*(int *)FVar18.Data < (int)(pFVar5->SlotIndex + iVar7 * -4)) {
          iVar10 = iVar8;
        }
        *(int *)FVar18.Data = iVar10;
        FVar18.Data = FVar18.Data + 4;
        uVar17 = (ulonglong)local_368;
      }
      pUVar2 = (this->VM_PartyMemeberSlot1).field0_0x0.DebugPtr;
      if (((int)uVar15 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar13 = GetPartySlotContext(this,&local_2e8,RaidParty,*(int *)local_370.Data);
      local_348.Object = (FDS_ViewModelContext *)pTVar13->Object;
      local_348.SharedReferenceCount.ReferenceController =
           (pTVar13->SharedReferenceCount).ReferenceController;
      if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_348);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
      pUVar2 = (this->VM_PartyMemeberSlot2).field0_0x0.DebugPtr;
      if (((int)local_368 < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar13 = GetPartySlotContext(this,&local_2d8,RaidParty,*(int *)(local_370.Data + 4));
      local_338.Object = (FDS_ViewModelContext *)pTVar13->Object;
      local_338.SharedReferenceCount.ReferenceController =
           (pTVar13->SharedReferenceCount).ReferenceController;
      if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_338);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.SharedReferenceCount.ReferenceController);
      pUVar2 = (this->VM_PartyMemeberSlot3).field0_0x0.DebugPtr;
      if (((int)local_368 < 3) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar13 = GetPartySlotContext(this,&local_2c8,RaidParty,*(int *)(local_370.Data + 8));
      local_328.Object = (FDS_ViewModelContext *)pTVar13->Object;
      local_328.SharedReferenceCount.ReferenceController =
           (pTVar13->SharedReferenceCount).ReferenceController;
      if (local_328.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_328);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
      bVar6 = UDS_GameInstance::GetIsDungeonPlayBuild();
      if (bVar6) {
        EVar19 = SelfHitTestInvisible;
        if (local_360->MemberState == None) {
          EVar19 = Collapsed;
        }
      }
      else {
        EVar19 = Collapsed;
        if (local_360->MemberState == DungeonInPlay) {
          EVar19 = SelfHitTestInvisible;
        }
      }
      this->Vis_MyParty = EVar19;
      if (local_370.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data);
      }
    }
    else {
      pFVar14 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      bVar6 = FDS_PartyInfo::IsValid(&pFVar14->PartyInfo);
      if (bVar6) {
        pFVar14 = TDS_Singleton<FDS_PartyRepo>::GetInst();
        iVar8 = FDS_PartyInfo::GetMyPartyGroupNumber(&pFVar14->PartyInfo);
        iVar8 = iVar8 * 4;
        iVar9 = FDS_PartyInfo::GetMySlotIndex(&pFVar14->PartyInfo);
        iVar7 = 0;
        local_380.Data = (FScriptContainerElement *)0x0;
        local_378 = 0;
        iVar10 = 0;
        if (iVar8 + -4 != iVar9) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_380,(int *)((longlong)&local_378 + 4));
          iVar7 = iVar10 + 1;
          local_378 = CONCAT44(local_378._4_4_,iVar7);
          *(int *)(local_380.Data + (longlong)iVar10 * 4) = iVar8 + -4;
          iVar10 = local_378._4_4_;
        }
        iVar16 = iVar7;
        if (iVar8 + -3 != iVar9) {
          if (iVar7 == iVar10) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_380,(int *)((longlong)&local_378 + 4));
          }
          iVar16 = iVar7 + 1;
          local_378 = CONCAT44(local_378._4_4_,iVar16);
          *(int *)(local_380.Data + (longlong)iVar7 * 4) = iVar8 + -3;
          iVar10 = local_378._4_4_;
        }
        iVar7 = iVar16;
        if (iVar8 + -2 != iVar9) {
          if (iVar16 == iVar10) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_380,(int *)((longlong)&local_378 + 4));
          }
          iVar7 = iVar16 + 1;
          local_378 = CONCAT44(local_378._4_4_,iVar7);
          *(int *)(local_380.Data + (longlong)iVar16 * 4) = iVar8 + -2;
          iVar10 = local_378._4_4_;
        }
        iVar16 = iVar7;
        if (iVar8 + -1 != iVar9) {
          if (iVar7 == iVar10) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_380,(int *)((longlong)&local_378 + 4));
          }
          iVar16 = iVar7 + 1;
          local_378 = CONCAT44(local_378._4_4_,iVar16);
          *(int *)(local_380.Data + (longlong)iVar7 * 4) = iVar8 + -1;
        }
        pUVar2 = (this->VM_PartyMemeberSlot1).field0_0x0.DebugPtr;
        if ((iVar16 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar13 = GetPartySlotContext(this,&local_2b8,Party,*(int *)local_380.Data);
        local_318.Object = (FDS_ViewModelContext *)pTVar13->Object;
        local_318.SharedReferenceCount.ReferenceController =
             (pTVar13->SharedReferenceCount).ReferenceController;
        if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_318);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2b8.SharedReferenceCount.ReferenceController);
        pUVar2 = (this->VM_PartyMemeberSlot2).field0_0x0.DebugPtr;
        if (((int)local_378 < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar13 = GetPartySlotContext(this,&local_2a8,Party,*(int *)(local_380.Data + 4));
        local_308.Object = (FDS_ViewModelContext *)pTVar13->Object;
        local_308.SharedReferenceCount.ReferenceController =
             (pTVar13->SharedReferenceCount).ReferenceController;
        if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_308);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a8.SharedReferenceCount.ReferenceController);
        pUVar2 = (this->VM_PartyMemeberSlot3).field0_0x0.DebugPtr;
        if (((int)local_378 < 3) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar13 = GetPartySlotContext(this,&local_298,Party,*(int *)(local_380.Data + 8));
        local_2f8.Object = (FDS_ViewModelContext *)pTVar13->Object;
        local_2f8.SharedReferenceCount.ReferenceController =
             (pTVar13->SharedReferenceCount).ReferenceController;
        if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_2f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_298.SharedReferenceCount.ReferenceController);
        this->Vis_MyParty = SelfHitTestInvisible;
        if (local_380.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data);
        }
      }
      else {
        this->Vis_MyParty = Collapsed;
      }
    }
    local_350 = FFieldNotificationClassDescriptor::Vis_MyParty.BitNumber;
    local_358 = FFieldNotificationClassDescriptor::Vis_MyParty.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_358);
  }
  return;
}

// OnSetViewModel @ 14bf04970

void __thiscall
UDS_VM_HUD_MyPartyGroup::OnSetViewModel
          (UDS_VM_HUD_MyPartyGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  OnPartyInfoChanged(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bf1dcc0

void __thiscall UDS_VM_HUD_MyPartyGroup::UnbindModel(UDS_VM_HUD_MyPartyGroup *this)

{
  UDS_DungeonEvent *pUVar1;
  UDS_PartyEvent *pUVar2;
  UDS_InputEvent *pUVar3;
  
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
  }
  pUVar2 = UDS_PartyEvent::GetEvent();
  if (pUVar2 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLeftParty,this);
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_HUD_MyPartyGroup>(&pUVar3->OnInputEvent,this);
  }
  return;
}

