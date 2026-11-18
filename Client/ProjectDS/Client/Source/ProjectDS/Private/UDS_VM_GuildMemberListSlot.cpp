// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b65c7d0

UClass * __cdecl UDS_VM_GuildMemberListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberListSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberListSlot,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_GuildMemberListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberListSlot.InnerSingleton;
}

// UDS_VM_GuildMemberListSlot @ 14b65fad0

UDS_VM_GuildMemberListSlot * __thiscall
UDS_VM_GuildMemberListSlot::UDS_VM_GuildMemberListSlot
          (UDS_VM_GuildMemberListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberListSlot__6B_;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_GuildMemberListSlot @ 14b65fb20

UDS_VM_GuildMemberListSlot * __thiscall
UDS_VM_GuildMemberListSlot::UDS_VM_GuildMemberListSlot
          (UDS_VM_GuildMemberListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberListSlot__6B_;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_GuildMemberListSlot @ 14b662280

void __thiscall
UDS_VM_GuildMemberListSlot::~UDS_VM_GuildMemberListSlot(UDS_VM_GuildMemberListSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberListSlot__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664730

IClassDescriptor * __thiscall
UDS_VM_GuildMemberListSlot::GetFieldNotificationDescriptor(UDS_VM_GuildMemberListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMemberListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b665020

UClass * __cdecl UDS_VM_GuildMemberListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberListSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberListSlot,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_GuildMemberListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMemberListSlot @ 14b665470

void __cdecl UDS_VM_GuildMemberListSlot::StaticRegisterNativesUDS_VM_GuildMemberListSlot(void)

{
  return;
}

// BindModel @ 14be75f50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberListSlot::BindModel(UDS_VM_GuildMemberListSlot *this)

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

// InitViewModel @ 14be8cce0

void __thiscall UDS_VM_GuildMemberListSlot::InitViewModel(UDS_VM_GuildMemberListSlot *this)

{
  return;
}

// OnSetViewModel @ 14bea0a20

void __thiscall
UDS_VM_GuildMemberListSlot::OnSetViewModel
          (UDS_VM_GuildMemberListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  FDS_ViewModelContext_GuildMemberData *pFVar4;
  bool bVar5;
  uint uVar6;
  UDS_VM_GuildMemberData *pUVar7;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext_GuildMemberListSlot,1> local_48;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildMemberListSlot>(&local_48,&local_28);
  if (local_48.Object == (FDS_ViewModelContext_GuildMemberListSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    goto LAB_14bea0c1a;
  }
  if ((local_48.Object == (FDS_ViewModelContext_GuildMemberListSlot *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->MemberData).WeakPtr = ((local_48.Object)->MemberData).WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr);
  if (bVar5) {
    if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
      pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UDS_VM_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar7;
      if (pUVar7 != (UDS_VM_GuildMemberData *)0x0) goto LAB_14bea0b22;
    }
    else {
LAB_14bea0b22:
      MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_38);
      pFVar4 = local_38.Object;
      if (local_38.Object != (FDS_ViewModelContext_GuildMemberData *)0x0) {
        if ((local_38.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar4->_padding_ = 0x212;
        (pFVar4->MemberData).WeakPtr = (this->MemberData).WeakPtr;
        pUVar7 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
        local_18.Object = (FDS_ViewModelContext *)local_38.Object;
        local_18.SharedReferenceCount.ReferenceController =
             local_38.SharedReferenceCount.ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    FVar3 = FFieldNotificationClassDescriptor::OnlineStateWidgetIndex.FieldName;
    pUVar7 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
    uVar6 = 0;
    if (pUVar7 != (UDS_VM_GuildMemberData *)0x0) {
      uVar6 = (uint)(pUVar7->IsOnline != true);
    }
    if (this->OnlineStateWidgetIndex != uVar6) {
      local_50 = FFieldNotificationClassDescriptor::OnlineStateWidgetIndex.BitNumber;
      this->OnlineStateWidgetIndex = uVar6;
      local_58 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
LAB_14bea0c1a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetOnlineStateWidgetIndex @ 14beb3900

void __thiscall
UDS_VM_GuildMemberListSlot::SetOnlineStateWidgetIndex(UDS_VM_GuildMemberListSlot *this)

{
  UDS_VM_GuildMemberData *pUVar1;
  uint uVar2;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::OnlineStateWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OnlineStateWidgetIndex.FieldName;
  pUVar1 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
  uVar2 = 0;
  if (pUVar1 != (UDS_VM_GuildMemberData *)0x0) {
    uVar2 = (uint)(pUVar1->IsOnline != true);
  }
  if (this->OnlineStateWidgetIndex != uVar2) {
    this->OnlineStateWidgetIndex = uVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_GuildMemberData @ 14beb8350

void __thiscall UDS_VM_GuildMemberListSlot::SetVM_GuildMemberData(UDS_VM_GuildMemberListSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMemberData *pFVar2;
  bool bVar3;
  UDS_VM_GuildMemberData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_GuildMemberData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMemberData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x212;
  (pFVar2->MemberData).WeakPtr = (this->MemberData).WeakPtr;
  pUVar4 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebc100

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberListSlot::UnbindModel(UDS_VM_GuildMemberListSlot *this)

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

