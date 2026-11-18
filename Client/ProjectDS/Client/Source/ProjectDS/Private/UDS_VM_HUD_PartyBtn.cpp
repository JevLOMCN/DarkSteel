// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetClickEventField_WrapperImpl @ 14b676a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_HUD_PartyBtn::SetClickEventField_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_PartyRepo *pFVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar2);
    if (pFVar3->MemberState == DungeonInPlay) {
      FDS_PartyService::OpenPartyMenuPopup(RaidParty,PartyMenu,0);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_PartyBtn::OnPartyInformation",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Display,TStack_138.Ptr,0x4a,
                 L"[Party] State != EDS_RaidMemberState::DungeonInPlay");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar1 = FDS_PartyInfo::IsValid(&pFVar5->PartyInfo);
    if (bVar1) {
      FDS_PartyService::OpenPartyMenuPopup(Party,PartyMenu,0);
      return;
    }
  }
  FDS_PartyService::OpenPartyCreatePopup();
  return;
}

// StaticClass @ 14b676a40

UClass * __cdecl UDS_VM_HUD_PartyBtn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PartyBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PartyBtn",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PartyBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PartyBtn,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_PartyBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PartyBtn>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PartyBtn.InnerSingleton;
}

// UDS_VM_HUD_PartyBtn @ 14b6798f0

UDS_VM_HUD_PartyBtn * __thiscall
UDS_VM_HUD_PartyBtn::UDS_VM_HUD_PartyBtn(UDS_VM_HUD_PartyBtn *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyBtn__6B_;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_HUD_PartyBtn @ 14b679960

UDS_VM_HUD_PartyBtn * __thiscall
UDS_VM_HUD_PartyBtn::UDS_VM_HUD_PartyBtn(UDS_VM_HUD_PartyBtn *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyBtn__6B_;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_HUD_PartyBtn @ 14b67b470

void __thiscall UDS_VM_HUD_PartyBtn::~UDS_VM_HUD_PartyBtn(UDS_VM_HUD_PartyBtn *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_PartyBtn__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEventField).Delegate);
  pvVar1 = *(void **)&(this->ClickEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEventField).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67dcd0

IClassDescriptor * __thiscall
UDS_VM_HUD_PartyBtn::GetFieldNotificationDescriptor(UDS_VM_HUD_PartyBtn *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_PartyBtn::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e5f0

UClass * __cdecl UDS_VM_HUD_PartyBtn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_PartyBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_PartyBtn",
               &Z_Registration_Info_UClass_UDS_VM_HUD_PartyBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_PartyBtn,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_PartyBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_PartyBtn>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_PartyBtn.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_PartyBtn @ 14b67f1e0

void __cdecl UDS_VM_HUD_PartyBtn::StaticRegisterNativesUDS_VM_HUD_PartyBtn(void)

{
  return;
}

// BindModel @ 14bed75f0

void __thiscall UDS_VM_HUD_PartyBtn::BindModel(UDS_VM_HUD_PartyBtn *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_InputEvent *pUVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar1->OnInputEvent).Subscriptions;
    local_res10[0] = 0x2f45;
    if (*(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x34) {
      puVar2 = *(undefined1 **)&(pUVar1->OnInputEvent).Subscriptions.field_0x40;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &(pUVar1->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar3 = *(int *)(puVar2 + (ulonglong)
                                (*(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x2f45) * 4);
      if (iVar3 != -1) {
        do {
          piVar4 = (int *)((longlong)iVar3 * 0x50 + *(longlong *)this_00);
          if (*piVar4 == 0x2f45) {
            if (piVar4 != (int *)0x0) goto LAB_14bed76cc;
            break;
          }
          iVar3 = piVar4[0x12];
        } while (iVar3 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2f45,
               (bool *)&local_res20);
    piVar4 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bed76cc:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar4 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_PartyBtn>
              (piVar4 + 2,(UDS_VM_HUD_PartyBtn *)local_res18,(pmf_ec1db49c *)this);
  }
  return;
}

// InitViewModel @ 14bef2b40

void __thiscall UDS_VM_HUD_PartyBtn::InitViewModel(UDS_VM_HUD_PartyBtn *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_InputKey *pUVar4;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_InputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
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
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    pFVar2->KeyActionType = IA_PartyCreate;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_InputKey).field0_0x0.DebugPtr = pUVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnClickEventField @ 14bef9590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_PartyBtn::OnClickEventField(UDS_VM_HUD_PartyBtn *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_PartyRepo *pFVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar2);
    if (pFVar3->MemberState == DungeonInPlay) {
      FDS_PartyService::OpenPartyMenuPopup(RaidParty,PartyMenu,0);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_PartyBtn::OnPartyInformation",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Display,TStack_138.Ptr,0x4a,
                 L"[Party] State != EDS_RaidMemberState::DungeonInPlay");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar1 = FDS_PartyInfo::IsValid(&pFVar5->PartyInfo);
    if (bVar1) {
      FDS_PartyService::OpenPartyMenuPopup(Party,PartyMenu,0);
      return;
    }
  }
  FDS_PartyService::OpenPartyCreatePopup();
  return;
}

// OnInput_PartyInformation @ 14befe310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_PartyBtn::OnInput_PartyInformation
          (UDS_VM_HUD_PartyBtn *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_PartyRepo *pFVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (param_2 != Started) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar2);
    if (pFVar3->MemberState == DungeonInPlay) {
      FDS_PartyService::OpenPartyMenuPopup(RaidParty,PartyMenu,0);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_PartyBtn::OnPartyInformation",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Display,TStack_138.Ptr,0x4a,
                 L"[Party] State != EDS_RaidMemberState::DungeonInPlay");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar1 = FDS_PartyInfo::IsValid(&pFVar5->PartyInfo);
    if (bVar1) {
      FDS_PartyService::OpenPartyMenuPopup(Party,PartyMenu,0);
      return;
    }
  }
  FDS_PartyService::OpenPartyCreatePopup();
  return;
}

// OnPartyInformation @ 14bf02810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_PartyBtn::OnPartyInformation(UDS_VM_HUD_PartyBtn *this)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_PartyRepo *pFVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if (bVar1) {
    pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar3 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar2);
    if (pFVar3->MemberState == DungeonInPlay) {
      FDS_PartyService::OpenPartyMenuPopup(RaidParty,PartyMenu,0);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_PartyBtn::OnPartyInformation",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Display,local_138.Ptr,0x4a,
                 L"[Party] State != EDS_RaidMemberState::DungeonInPlay");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar1 = FDS_PartyInfo::IsValid(&pFVar5->PartyInfo);
    if (bVar1) {
      FDS_PartyService::OpenPartyMenuPopup(Party,PartyMenu,0);
      return;
    }
  }
  FDS_PartyService::OpenPartyCreatePopup();
  return;
}

// OnSetViewModel @ 14bf04a10

void __thiscall
UDS_VM_HUD_PartyBtn::OnSetViewModel
          (UDS_VM_HUD_PartyBtn *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bf1ddc0

void __thiscall UDS_VM_HUD_PartyBtn::UnbindModel(UDS_VM_HUD_PartyBtn *this)

{
  UDS_InputEvent *pUVar1;
  int *piVar2;
  int iVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  undefined1 *puVar4;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if ((pUVar1 != (UDS_InputEvent *)0x0) &&
     (*(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x8 !=
      *(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x34)) {
    puVar4 = *(undefined1 **)&(pUVar1->OnInputEvent).Subscriptions.field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(pUVar1->OnInputEvent).Subscriptions.field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(pUVar1->OnInputEvent).Subscriptions.field_0x48 - 1U &
                              0x2f45) * 4);
    if (iVar3 != -1) {
      while (piVar2 = (int *)((longlong)iVar3 * 0x50 +
                             *(longlong *)&(pUVar1->OnInputEvent).Subscriptions), *piVar2 != 0x2f45)
      {
        iVar3 = piVar2[0x12];
        if (iVar3 == -1) {
          return;
        }
      }
      this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar2 + 2);
      if (piVar2 == (int *)0x0) {
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
      }
      if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
        return;
      }
    }
  }
  return;
}

