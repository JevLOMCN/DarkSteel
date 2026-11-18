// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickEntry_WrapperImpl @ 14b64d910

void __cdecl
UDS_VM_GuildInvitePopupHistoryDropBox::SetClickEntry_WrapperImpl(void *param_1,void *param_2)

{
  UDS_PlayerEvent *pUVar1;
  
  pUVar1 = UDS_PlayerEvent::GetEvent();
  if (pUVar1 != (UDS_PlayerEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar1->OnClickSearchedNameEntry,*(int *)((longlong)param_1 + 0xf8));
    return;
  }
  return;
}

// SetClickRemove_WrapperImpl @ 14b64d920

void __cdecl
UDS_VM_GuildInvitePopupHistoryDropBox::SetClickRemove_WrapperImpl(void *param_1,void *param_2)

{
  FDS_PlayerRepo *this;
  
  this = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  FDS_PlayerRepo::RemoveSearchedPlayerNameByIndex(this,(int *)((longlong)param_1 + 0xf8));
  return;
}

// StaticClass @ 14b64d930

UClass * __cdecl UDS_VM_GuildInvitePopupHistoryDropBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupHistoryDropBox.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitePopupHistoryDropBox",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupHistoryDropBox.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitePopupHistoryDropBox,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildInvitePopupHistoryDropBox>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitePopupHistoryDropBox>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupHistoryDropBox.InnerSingleton;
}

// UDS_VM_GuildInvitePopupHistoryDropBox @ 14b6531c0

UDS_VM_GuildInvitePopupHistoryDropBox * __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::UDS_VM_GuildInvitePopupHistoryDropBox
          (UDS_VM_GuildInvitePopupHistoryDropBox *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickEntry)._padding_ = '\0';
  (this->ClickEntry).bIsCustomSelected = false;
  (this->ClickEntry).bIsLacked = false;
  (this->ClickEntry).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopupHistoryDropBox__6B_;
  *(undefined8 *)&(this->ClickEntry).Delegate = 0;
  *(undefined8 *)&(this->ClickEntry).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEntry).Delegate.field_0x10 = 0;
  (this->ClickRemove)._padding_ = '\0';
  (this->ClickRemove).bIsCustomSelected = false;
  (this->ClickRemove).bIsLacked = false;
  (this->ClickRemove).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRemove).Delegate = 0;
  *(undefined8 *)&(this->ClickRemove).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRemove).Delegate.field_0x10 = 0;
  FText::FText(&this->SearchName);
  (this->VM_EntryButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->EntryIndex = 0;
  return this;
}

// UDS_VM_GuildInvitePopupHistoryDropBox @ 14b653260

UDS_VM_GuildInvitePopupHistoryDropBox * __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::UDS_VM_GuildInvitePopupHistoryDropBox
          (UDS_VM_GuildInvitePopupHistoryDropBox *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickEntry)._padding_ = '\0';
  (this->ClickEntry).bIsCustomSelected = false;
  (this->ClickEntry).bIsLacked = false;
  (this->ClickEntry).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopupHistoryDropBox__6B_;
  *(undefined8 *)&(this->ClickEntry).Delegate = 0;
  *(undefined8 *)&(this->ClickEntry).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEntry).Delegate.field_0x10 = 0;
  (this->ClickRemove)._padding_ = '\0';
  (this->ClickRemove).bIsCustomSelected = false;
  (this->ClickRemove).bIsLacked = false;
  (this->ClickRemove).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRemove).Delegate = 0;
  *(undefined8 *)&(this->ClickRemove).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRemove).Delegate.field_0x10 = 0;
  FText::FText(&this->SearchName);
  (this->VM_EntryButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->EntryIndex = 0;
  return this;
}

// ~UDS_VM_GuildInvitePopupHistoryDropBox @ 14b655380

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::~UDS_VM_GuildInvitePopupHistoryDropBox
          (UDS_VM_GuildInvitePopupHistoryDropBox *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopupHistoryDropBox__6B_;
  pIVar1 = (this->SearchName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRemove).Delegate);
  pvVar2 = *(void **)&(this->ClickRemove).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRemove).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEntry).Delegate);
  pvVar2 = *(void **)&(this->ClickEntry).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEntry).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6573c0

IClassDescriptor * __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::GetFieldNotificationDescriptor
          (UDS_VM_GuildInvitePopupHistoryDropBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildInvitePopupHistoryDropBox::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657cd0

UClass * __cdecl UDS_VM_GuildInvitePopupHistoryDropBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupHistoryDropBox.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitePopupHistoryDropBox",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupHistoryDropBox.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitePopupHistoryDropBox,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildInvitePopupHistoryDropBox>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitePopupHistoryDropBox>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitePopupHistoryDropBox.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildInvitePopupHistoryDropBox @ 14b658320

void __cdecl
UDS_VM_GuildInvitePopupHistoryDropBox::StaticRegisterNativesUDS_VM_GuildInvitePopupHistoryDropBox
          (void)

{
  return;
}

// BindModel @ 14be75ad0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::BindModel(UDS_VM_GuildInvitePopupHistoryDropBox *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14be8cbe0

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::InitViewModel(UDS_VM_GuildInvitePopupHistoryDropBox *this)

{
  return;
}

// OnClickEntry @ 14be94670

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::OnClickEntry
          (UDS_VM_GuildInvitePopupHistoryDropBox *this,FDS_ButtonEventField *param_1)

{
  UDS_PlayerEvent *pUVar1;
  
  pUVar1 = UDS_PlayerEvent::GetEvent();
  if (pUVar1 != (UDS_PlayerEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->OnClickSearchedNameEntry,this->EntryIndex);
    return;
  }
  return;
}

// OnClickRemove @ 14be969d0

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::OnClickRemove
          (UDS_VM_GuildInvitePopupHistoryDropBox *this,FDS_ButtonEventField *param_1)

{
  FDS_PlayerRepo *this_00;
  
  this_00 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  FDS_PlayerRepo::RemoveSearchedPlayerNameByIndex(this_00,&this->EntryIndex);
  return;
}

// OnSetViewModel @ 14be9eda0

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::OnSetViewModel
          (UDS_VM_GuildInvitePopupHistoryDropBox *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_GuildInvitePopupHistoryDropBox,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildInvitePopupHistoryDropBox>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_GuildInvitePopupHistoryDropBox *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_GuildInvitePopupHistoryDropBox *)0x0) {
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
    this->EntryIndex = (local_28.Object)->EntryIndex;
    SetVM_EntryButton(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSearchName @ 14beb40e0

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::SetSearchName
          (UDS_VM_GuildInvitePopupHistoryDropBox *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::SearchName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::SearchName.FieldName;
  bVar5 = FText::IdenticalTo(&this->SearchName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->SearchName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->SearchName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->SearchName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetVM_EntryButton @ 14beb71f0

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::SetVM_EntryButton
          (UDS_VM_GuildInvitePopupHistoryDropBox *this)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_CommonIconTextButton *pFVar3;
  bool bVar4;
  UDS_VM_CommonIconTextButton *pUVar5;
  FDS_PlayerRepo *pFVar6;
  FText *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FScriptContainerElement *pFVar10;
  UDS_VM_GuildInvitePopupHistoryDropBox *local_res8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_68;
  FText local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  FText local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  if ((this->VM_EntryButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_EntryButton).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_CommonIconTextButton *)0x0) {
      return;
    }
  }
  pFVar6 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  iVar1 = this->EntryIndex;
  if ((iVar1 < 0) || ((pFVar6->SearchedPlayerNameList).ArrayNum <= iVar1)) {
    pFVar7 = FText::FText(&local_38);
    SetSearchName(this,pFVar7);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar10 = (pFVar6->SearchedPlayerNameList).AllocatorInstance.Data + (longlong)iVar1 * 0x10;
    pFVar7 = FText::FromString(&local_58,(FString *)pFVar10);
    SetSearchName(this,pFVar7);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_68);
    pFVar3 = local_68.Object;
    if ((local_68.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FDS_Text::SetTextFromUniqueString(&pFVar3->DSText,(FString *)pFVar10);
    if ((pFVar3 == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_58.Flags = 0;
    local_58.TextData.Reference = (ITextData *)OnClickEntry;
    local_58._12_4_ = local_38._12_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
               (FWriteAccessScope *)&local_28);
    local_10 = &(pFVar3->OnClickDelegate).field_0x8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildInvitePopupHistoryDropBox____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar8[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
      puVar8[4] = local_58.TextData.Reference;
      puVar8[5] = CONCAT44(local_58._12_4_,local_58.Flags);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    pUVar5 = (this->VM_EntryButton).field0_0x0.DebugPtr;
    local_48.Object = (FDS_ViewModelContext *)local_68.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UnbindModel @ 14bebbeb0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_GuildInvitePopupHistoryDropBox::UnbindModel(UDS_VM_GuildInvitePopupHistoryDropBox *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

