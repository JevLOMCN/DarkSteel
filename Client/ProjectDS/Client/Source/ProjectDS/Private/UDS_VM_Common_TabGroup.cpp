// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetSelectedIndex_WrapperImpl @ 14b6291c0

void __cdecl UDS_VM_Common_TabGroup::SetSelectedIndex_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectedIndex(param_1,*(int *)param_2);
  return;
}

// SetClickLeftEventField_WrapperImpl @ 14b6291d0

void __cdecl UDS_VM_Common_TabGroup::SetClickLeftEventField_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = GetValidTabIndex(param_1,-1);
  UpdateTabGroup(param_1,iVar1);
  return;
}

// SetClickRightEventField_WrapperImpl @ 14b6291e0

void __cdecl
UDS_VM_Common_TabGroup::SetClickRightEventField_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = GetValidTabIndex(param_1,1);
  UpdateTabGroup(param_1,iVar1);
  return;
}

// StaticClass @ 14b6291f0

UClass * __cdecl UDS_VM_Common_TabGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_TabGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_TabGroup",
               &Z_Registration_Info_UClass_UDS_VM_Common_TabGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_TabGroup,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_TabGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_TabGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_TabGroup.InnerSingleton;
}

// UDS_VM_Common_TabGroup @ 14b62ccf0

UDS_VM_Common_TabGroup * __thiscall
UDS_VM_Common_TabGroup::UDS_VM_Common_TabGroup(UDS_VM_Common_TabGroup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->LeftKeyActionType = IA_UI_Category_Left;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_TabGroup__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->SelectedIndex = 0;
  (this->VM_LeftButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_RightButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_LeftInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_RightInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->ClickLeftEventField)._padding_ = '\0';
  (this->ClickLeftEventField).bIsCustomSelected = false;
  (this->ClickLeftEventField).bIsLacked = false;
  (this->ClickLeftEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickLeftEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickLeftEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickLeftEventField).Delegate.field_0x10 = 0;
  (this->ClickRightEventField)._padding_ = '\0';
  (this->ClickRightEventField).bIsCustomSelected = false;
  (this->ClickRightEventField).bIsLacked = false;
  (this->ClickRightEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRightEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickRightEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRightEventField).Delegate.field_0x10 = 0;
  this->ParentWindowWidget = None;
  this->bIsApplyLeftInputKey = false;
  this->bIsApplyRightInputKey = false;
  (this->TabInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabInfos).ArrayNum = 0;
  (this->TabInfos).ArrayMax = 0;
  this->RightKeyActionType = IA_UI_Category_Right;
  return this;
}

// UDS_VM_Common_TabGroup @ 14b62cdd0

UDS_VM_Common_TabGroup * __thiscall
UDS_VM_Common_TabGroup::UDS_VM_Common_TabGroup
          (UDS_VM_Common_TabGroup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->LeftKeyActionType = IA_UI_Category_Left;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_TabGroup__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->SelectedIndex = 0;
  (this->VM_LeftButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_RightButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_LeftInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_RightInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->ClickLeftEventField)._padding_ = '\0';
  (this->ClickLeftEventField).bIsCustomSelected = false;
  (this->ClickLeftEventField).bIsLacked = false;
  (this->ClickLeftEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickLeftEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickLeftEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickLeftEventField).Delegate.field_0x10 = 0;
  (this->ClickRightEventField)._padding_ = '\0';
  (this->ClickRightEventField).bIsCustomSelected = false;
  (this->ClickRightEventField).bIsLacked = false;
  (this->ClickRightEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRightEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickRightEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRightEventField).Delegate.field_0x10 = 0;
  this->ParentWindowWidget = None;
  this->bIsApplyLeftInputKey = false;
  this->bIsApplyRightInputKey = false;
  (this->TabInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabInfos).ArrayNum = 0;
  (this->TabInfos).ArrayMax = 0;
  this->RightKeyActionType = IA_UI_Category_Right;
  return this;
}

// ~UDS_VM_Common_TabGroup @ 14b62eeb0

void __thiscall UDS_VM_Common_TabGroup::~UDS_VM_Common_TabGroup(UDS_VM_Common_TabGroup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_TabGroup__6B_;
  DestructItems<FDS_TabInfo,int>
            ((FDS_TabInfo *)(this->TabInfos).AllocatorInstance.Data,(this->TabInfos).ArrayNum);
  pFVar1 = (this->TabInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRightEventField).Delegate);
  pvVar2 = *(void **)&(this->ClickRightEventField).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRightEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickLeftEventField).Delegate);
  pvVar2 = *(void **)&(this->ClickLeftEventField).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickLeftEventField).Delegate);
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631980

IClassDescriptor * __thiscall
UDS_VM_Common_TabGroup::GetFieldNotificationDescriptor(UDS_VM_Common_TabGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_TabGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6324e0

UClass * __cdecl UDS_VM_Common_TabGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_TabGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_TabGroup",
               &Z_Registration_Info_UClass_UDS_VM_Common_TabGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_TabGroup,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_TabGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_TabGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_TabGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_TabGroup @ 14b633000

void __cdecl UDS_VM_Common_TabGroup::StaticRegisterNativesUDS_VM_Common_TabGroup(void)

{
  return;
}

// ApplyLeftInputKey @ 14bdae6d0

void __thiscall UDS_VM_Common_TabGroup::ApplyLeftInputKey(UDS_VM_Common_TabGroup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_CommonIconTextButton *pFVar2;
  FDS_ViewModelContext_InputKey *pFVar3;
  bool bVar4;
  UDS_VM_CommonIconTextButton *pUVar5;
  UDS_VM_InputKey *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_48;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_LeftButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_LeftButton).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_LeftInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar6 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_LeftInputKey).field0_0x0.DebugPtr = pUVar6;
  }
  if ((this->VM_LeftButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_48);
    pFVar2 = local_48.Object;
    if (local_48.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15b;
    pFVar2->KeyActionType = this->LeftKeyActionType;
    pUVar5 = (this->VM_LeftButton).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_48.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_LeftInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_38);
    pFVar3 = local_38.Object;
    if (local_38.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15d;
    local_18.Object = (FDS_ViewModelContext *)local_38.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    pFVar3->KeyActionType = this->LeftKeyActionType;
    pUVar6 = (this->VM_LeftInputKey).field0_0x0.DebugPtr;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ApplyRightInputKey @ 14bdae880

void __thiscall UDS_VM_Common_TabGroup::ApplyRightInputKey(UDS_VM_Common_TabGroup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_CommonIconTextButton *pFVar2;
  FDS_ViewModelContext_InputKey *pFVar3;
  bool bVar4;
  UDS_VM_CommonIconTextButton *pUVar5;
  UDS_VM_InputKey *pUVar6;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_48;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_RightButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_RightButton).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_RightInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar6 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_RightInputKey).field0_0x0.DebugPtr = pUVar6;
  }
  if ((this->VM_RightButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_48);
    pFVar2 = local_48.Object;
    if (local_48.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15b;
    pFVar2->KeyActionType = this->RightKeyActionType;
    pUVar5 = (this->VM_RightButton).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_48.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_RightInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_38);
    pFVar3 = local_38.Object;
    if (local_38.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15d;
    local_18.Object = (FDS_ViewModelContext *)local_38.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    pFVar3->KeyActionType = this->RightKeyActionType;
    pUVar6 = (this->VM_RightInputKey).field0_0x0.DebugPtr;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// BindModel @ 14bdb1440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Common_TabGroup::BindModel(UDS_VM_Common_TabGroup *this)

{
  bool bVar1;
  UDS_UIEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  UDS_WindowManager *this_01;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  UDS_VM_Common_TabGroup *local_res10;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar2->OnClickTabIndex).Subscriptions,
                         local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Common_TabGroup>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               this_00,(UDS_VM_Common_TabGroup *)&local_res10,(pmf_bb1ff7ad *)this);
  }
  if (this->ParentWindowWidget != None) {
    this_01 = UDS_WindowManager::GetInst();
    if (this_01 != (UDS_WindowManager *)0x0) {
      UDS_WindowManager::GetWindowInfo(this_01,(EDS_WindowWidget)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_Common_TabGroup>
                  (&pUVar3[5].field_0x18,(UDS_VM_Common_TabGroup *)&local_res10,(pmf_26d651aa *)this
                  );
      }
    }
  }
  return;
}

// GetValidTabIndex @ 14bdc4980

int __thiscall UDS_VM_Common_TabGroup::GetValidTabIndex(UDS_VM_Common_TabGroup *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = this->SelectedIndex;
  if (param_1 == 0) {
    return uVar1;
  }
  iVar6 = (this->TabInfos).ArrayNum;
  iVar7 = 0;
  uVar3 = uVar1;
  if (iVar6 < 1) {
    return uVar1;
  }
  while( true ) {
    uVar3 = uVar3 + param_1;
    if ((-1 < (int)uVar3) && ((int)uVar3 < (this->TabInfos).ArrayNum)) {
      uVar5 = 0;
      if ((int)uVar3 < (this->TabInfos).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      if ((this->TabInfos).AllocatorInstance.Data[(longlong)(int)uVar3 * 0x60 + 0x59] ==
          (FScriptContainerElement)0x0) {
        return uVar3;
      }
    }
    if (uVar3 == 0) {
      return uVar1;
    }
    if (iVar6 <= (int)uVar3) break;
    iVar7 = iVar7 + 1;
    if (iVar6 <= iVar7) {
      return uVar1;
    }
  }
  return uVar1;
}

// OnClickLeftEventField @ 14bdcd120

void __thiscall
UDS_VM_Common_TabGroup::OnClickLeftEventField
          (UDS_VM_Common_TabGroup *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  
  iVar1 = GetValidTabIndex(this,-1);
  UpdateTabGroup(this,iVar1);
  return;
}

// OnClickRightEventField @ 14bdcd3c0

void __thiscall
UDS_VM_Common_TabGroup::OnClickRightEventField
          (UDS_VM_Common_TabGroup *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  
  iVar1 = GetValidTabIndex(this,1);
  UpdateTabGroup(this,iVar1);
  return;
}

// OnClickTabIndex @ 14bdcd430

void __thiscall UDS_VM_Common_TabGroup::OnClickTabIndex(UDS_VM_Common_TabGroup *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UDS_UIEvent *pUVar6;
  FWeakObjectPtr local_res8;
  UDS_VM_Common_TabGroup *local_res18 [2];
  
  if ((-1 < param_1) && (param_1 < (this->TabInfos).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->TabInfos).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->TabInfos).AllocatorInstance.Data;
    if (pFVar2[(longlong)param_1 * 0x60 + 0x59] == (FScriptContainerElement)0x1) {
      pUVar6 = UDS_UIEvent::GetEvent();
      if (pUVar6 != (UDS_UIEvent *)0x0) {
        iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0x60 + 4);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res18[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
        FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,enum_EDS_TabErrorType_const_,int_const_,int_const_>
        ::Broadcast(&pUVar6->OnErrorTab,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8,
                    DisabledTab,param_1,iVar1);
      }
      return;
    }
  }
  UpdateTabGroup(this,param_1);
  return;
}

// OnInputAction @ 14bdcf080

void __thiscall
UDS_VM_Common_TabGroup::OnInputAction
          (UDS_VM_Common_TabGroup *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  int iVar1;
  
  if ((param_2->TriggerEvent & Started) == None) {
    return;
  }
  if ((this->bIsApplyLeftInputKey == true) && (*param_1 == this->LeftKeyActionType)) {
    iVar1 = -1;
  }
  else {
    if (this->bIsApplyRightInputKey != true) {
      return;
    }
    if (*param_1 != this->RightKeyActionType) {
      return;
    }
    iVar1 = 1;
  }
  iVar1 = GetValidTabIndex(this,iVar1);
  UpdateTabGroup(this,iVar1);
  return;
}

// OnSetViewModel @ 14bdd8870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_TabGroup::OnSetViewModel
          (UDS_VM_Common_TabGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_KeyActionType EVar1;
  EDS_KeyActionType EVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FDS_ViewModelContext_CommonIconTextButton *pFVar5;
  FDS_ViewModelContext_InputKey *pFVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  UDS_VM_CommonIconTextButton *pUVar9;
  UDS_VM_InputKey *pUVar10;
  undefined1 auStackY_238 [32];
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> local_208;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_1c8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_1b8;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_198.Object = param_1->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_TabGroup>(&local_208,&local_198);
  if (local_208.Object == (FDS_ViewModelContext_TabGroup *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_208.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Common_TabGroup::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_148.Ptr,0x17,L"tabGroupContext.IsValid() == false");
      if ((FDS_ViewModelContext_TabGroup *)local_148._padding_ !=
          (FDS_ViewModelContext_TabGroup *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (local_208.Object == (FDS_ViewModelContext_TabGroup *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this->SelectedIndex = (local_208.Object)->SelectedIndex;
    SetTabInfos(this,&(local_208.Object)->TabInfos);
    this->ParentWindowWidget = (local_208.Object)->ParentWindowWidget;
    EVar1 = (local_208.Object)->LeftKeyActionType;
    this->LeftKeyActionType = EVar1;
    EVar2 = (local_208.Object)->RightKeyActionType;
    this->bIsApplyLeftInputKey = EVar1 != None;
    this->RightKeyActionType = EVar2;
    this->bIsApplyRightInputKey = EVar2 != None;
    if (EVar1 != None) {
      if ((this->VM_LeftButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
        pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar9 != (UDS_VM_CommonIconTextButton *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        (this->VM_LeftButton).field0_0x0.DebugPtr = pUVar9;
      }
      if ((this->VM_LeftInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
        pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_VM_InputKey *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        (this->VM_LeftInputKey).field0_0x0.DebugPtr = pUVar10;
      }
      if ((this->VM_LeftButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
        MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_1d8);
        pFVar5 = local_1d8.Object;
        if (local_1d8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(undefined4 *)&pFVar5->_padding_ = 0x15b;
        pFVar5->KeyActionType = this->LeftKeyActionType;
        pUVar9 = (this->VM_LeftButton).field0_0x0.DebugPtr;
        local_188.Object = (FDS_ViewModelContext *)local_1d8.Object;
        local_188.SharedReferenceCount.ReferenceController =
             local_1d8.SharedReferenceCount.ReferenceController;
        if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d8.SharedReferenceCount.ReferenceController);
      }
      if ((this->VM_LeftInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
        MakeContext<FDS_ViewModelContext_InputKey>(&local_1c8);
        pFVar6 = local_1c8.Object;
        if (local_1c8.Object == (FDS_ViewModelContext_InputKey *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x15d;
        pFVar6->KeyActionType = this->LeftKeyActionType;
        pUVar10 = (this->VM_LeftInputKey).field0_0x0.DebugPtr;
        local_178.Object = (FDS_ViewModelContext *)local_1c8.Object;
        local_178.SharedReferenceCount.ReferenceController =
             local_1c8.SharedReferenceCount.ReferenceController;
        if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_178);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c8.SharedReferenceCount.ReferenceController);
      }
    }
    if (this->bIsApplyRightInputKey == true) {
      if ((this->VM_RightButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
        pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar9 != (UDS_VM_CommonIconTextButton *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        (this->VM_RightButton).field0_0x0.DebugPtr = pUVar9;
      }
      if ((this->VM_RightInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
        pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_VM_InputKey *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        (this->VM_RightInputKey).field0_0x0.DebugPtr = pUVar10;
      }
      if ((this->VM_RightButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
        MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_1b8);
        pFVar5 = local_1b8.Object;
        if (local_1b8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(undefined4 *)&pFVar5->_padding_ = 0x15b;
        pFVar5->KeyActionType = this->RightKeyActionType;
        pUVar9 = (this->VM_RightButton).field0_0x0.DebugPtr;
        local_168.Object = (FDS_ViewModelContext *)local_1b8.Object;
        local_168.SharedReferenceCount.ReferenceController =
             local_1b8.SharedReferenceCount.ReferenceController;
        if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_168);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b8.SharedReferenceCount.ReferenceController);
      }
      if ((this->VM_RightInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
        MakeContext<FDS_ViewModelContext_InputKey>(&local_1a8);
        pFVar6 = local_1a8.Object;
        if (local_1a8.Object == (FDS_ViewModelContext_InputKey *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x15d;
        pFVar6->KeyActionType = this->RightKeyActionType;
        pUVar10 = (this->VM_RightInputKey).field0_0x0.DebugPtr;
        local_158.Object = (FDS_ViewModelContext *)local_1a8.Object;
        local_158.SharedReferenceCount.ReferenceController =
             local_1a8.SharedReferenceCount.ReferenceController;
        if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_158);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
      }
    }
    local_1f0 = FFieldNotificationClassDescriptor::bIsApplyLeftInputKey.BitNumber;
    local_1f8 = FFieldNotificationClassDescriptor::bIsApplyLeftInputKey.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
    local_1e0 = FFieldNotificationClassDescriptor::bIsApplyRightInputKey.BitNumber;
    local_1e8 = FFieldNotificationClassDescriptor::bIsApplyRightInputKey.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsDisabled @ 14bde66e0

void __thiscall
UDS_VM_Common_TabGroup::SetIsDisabled(UDS_VM_Common_TabGroup *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->TabInfos).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->TabInfos).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->TabInfos).AllocatorInstance.Data[(longlong)param_1 * 0x60 + 0x59] =
         (FScriptContainerElement)param_2;
    UpdateTabContexts(this);
  }
  return;
}

// SetIsReddot @ 14bde6a40

void __thiscall
UDS_VM_Common_TabGroup::SetIsReddot(UDS_VM_Common_TabGroup *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  UDS_UIEvent *pUVar9;
  longlong lVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  uint uVar11;
  FWeakObjectPtr local_res8;
  UDS_VM_Common_TabGroup *local_res20;
  FWeakObjectPtr local_48 [2];
  
  if ((-1 < param_1) && (param_1 < (this->TabInfos).ArrayNum)) {
    uVar11 = 0;
    if (param_1 < (this->TabInfos).ArrayNum) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->TabInfos).AllocatorInstance.Data[(longlong)param_1 * 0x60 + 0x5a] =
         (FScriptContainerElement)param_2;
    UpdateTabContexts(this);
    pUVar9 = UDS_UIEvent::GetEvent();
    if (pUVar9 != (UDS_UIEvent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      local_48[0] = local_res8;
      iVar7 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
                          *)&(pUVar9->OnChangedTabReddot).Subscriptions,
                         local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_48);
      if (iVar7 != -1) {
        lVar10 = (longlong)iVar7 * 0x50 + *(longlong *)&(pUVar9->OnChangedTabReddot).Subscriptions;
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(lVar10 + 8);
        if (lVar10 == 0) {
          this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
        }
        if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)this_00);
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
          bVar4 = false;
          uVar11 = (this_00->InvocationList).ArrayNum - 1;
          if (-1 < (int)uVar11) {
            lVar10 = (longlong)(int)uVar11 << 4;
            bVar4 = false;
            do {
              uVar8 = 0;
              if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
              if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                  (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2), cVar6 == '\0')) {
                bVar4 = true;
              }
              lVar10 = lVar10 + -0x10;
              uVar11 = uVar11 - 1;
            } while (-1 < (int)uVar11);
          }
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
          if (bVar4) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      (this_00,false);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
        }
      }
    }
  }
  return;
}

// SetSelectedIndex @ 14bde8e40

void __thiscall UDS_VM_Common_TabGroup::SetSelectedIndex(UDS_VM_Common_TabGroup *this,int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UDS_UIEvent *pUVar7;
  longlong lVar8;
  TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *this_00;
  uint uVar9;
  FWeakObjectPtr aFStackX_8 [2];
  UDS_VM_Common_TabGroup *pUStackX_18;
  FWeakObjectPtr FStackX_20;
  FName FStack_38;
  int iStack_30;
  
  iStack_30 = FFieldNotificationClassDescriptor::SelectedIndex.BitNumber;
  FStack_38 = FFieldNotificationClassDescriptor::SelectedIndex.FieldName;
  uVar5 = 0;
  uVar9 = uVar5;
  if (((-1 < param_1) && (iVar1 = (this->TabInfos).ArrayNum, iVar1 != 0)) &&
     (uVar9 = param_1, iVar1 <= param_1)) {
    uVar9 = iVar1 - 1;
  }
  if (this->SelectedIndex != uVar9) {
    this->SelectedIndex = uVar9;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
    UpdateTabContexts(this);
    pUVar7 = UDS_UIEvent::GetEvent();
    if (pUVar7 != (UDS_UIEvent *)0x0) {
      uVar9 = this->SelectedIndex;
      if ((int)uVar9 < (this->TabInfos).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = this->SelectedIndex;
      iVar2 = *(int *)((this->TabInfos).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x60 + 4);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      aFStackX_8[0].ObjectIndex = 0;
      aFStackX_8[0].ObjectSerialNumber = 0;
      pUStackX_18 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(aFStackX_8,(FObjectPtr)&pUStackX_18);
      FStackX_20 = aFStackX_8[0];
      iVar6 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
                          *)&(pUVar7->OnSelectedTabIndex).Subscriptions,
                         aFStackX_8[0].ObjectSerialNumber ^ aFStackX_8[0].ObjectIndex,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&FStackX_20);
      if (iVar6 != -1) {
        lVar8 = (longlong)iVar6 * 0x50 + *(longlong *)&(pUVar7->OnSelectedTabIndex).Subscriptions;
        this_00 = (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)
                  (lVar8 + 8);
        if (lVar8 == 0) {
          this_00 = (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)0x0;
        }
        if (this_00 != (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)0x0
           ) {
          TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::Broadcast
                    (this_00,iVar1,iVar2);
        }
      }
    }
  }
  return;
}

// SetTabInfos @ 14bde9090

void __thiscall
UDS_VM_Common_TabGroup::SetTabInfos
          (UDS_VM_Common_TabGroup *this,TArray<FDS_TabInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  FDS_TabInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UDS_UserObjectListItem *pUVar12;
  FDS_ViewModelContext *pFVar13;
  FDS_ViewModelContext *pFVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_00;
  atomic<int> *paVar16;
  FDS_ViewModelContext *pFVar17;
  int *piVar18;
  TArray<FDS_TabInfo,TSizedDefaultAllocator<32>_> *pTVar19;
  FDS_ViewModelContext *pFVar20;
  atomic<int> aVar21;
  atomic<int> local_res18;
  longlong local_res20;
  longlong local_f8;
  FDS_Text local_e0;
  FScriptContainerElement local_90;
  FScriptContainerElement local_8f;
  FScriptContainerElement local_8e;
  UDS_VM_Common_TabGroup *local_88;
  UDS_UserObjectListItem *local_80;
  FDS_EntryBindingEventField *local_78;
  TArray<FDS_TabInfo,TSizedDefaultAllocator<32>_> *local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  pTVar19 = &this->TabInfos;
  piVar18 = &(this->TabInfos).ArrayMax;
  iVar10 = (this->TabInfos).ArrayNum;
  pFVar4 = (FDS_TabInfo *)(pTVar19->AllocatorInstance).Data;
  local_70 = pTVar19;
  if ((this->TabInfos).ArrayMax < 0) {
    DestructItems<FDS_TabInfo,int>(pFVar4,iVar10);
    (this->TabInfos).ArrayNum = 0;
    if (*piVar18 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&pTVar19->AllocatorInstance,0,piVar18);
    }
  }
  else {
    DestructItems<FDS_TabInfo,int>(pFVar4,iVar10);
    (this->TabInfos).ArrayNum = 0;
  }
  pFVar20 = (FDS_ViewModelContext *)0x0;
  local_78 = &this->EntryBindingEventField;
  FDS_EntryBindingEventField::Reset(local_78);
  local_f8 = (longlong)param_1->ArrayNum;
  local_res18 = (atomic<int>)0x0;
  if (0 < local_f8) {
    local_res20 = 0;
    pFVar17 = pFVar20;
    do {
      aVar21 = SUB84(pFVar17,0);
      uVar9 = 0;
      if ((int)aVar21 < param_1->ArrayNum) {
        uVar9 = ~(uint)aVar21 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      aVar3 = *(atomic<int> *)(pFVar5 + local_res20 + 4);
      FDS_Text::FDS_Text(&local_e0,(FDS_Text *)(pFVar5 + local_res20 + 8));
      local_90 = (FScriptContainerElement)((atomic<int>)this->SelectedIndex == aVar21);
      local_8f = pFVar5[local_res20 + 0x59];
      local_8e = pFVar5[local_res20 + 0x5a];
      iVar10 = pTVar19->ArrayNum;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&pTVar19->AllocatorInstance,piVar18);
      }
      pTVar19->ArrayNum = iVar10 + 1;
      paVar16 = (atomic<int> *)((pTVar19->AllocatorInstance).Data + (longlong)iVar10 * 0x60);
      *paVar16 = aVar21;
      paVar16[1] = aVar3;
      FDS_Text::FDS_Text((FDS_Text *)(paVar16 + 2),&local_e0);
      *(FScriptContainerElement *)(paVar16 + 0x16) = local_90;
      paVar16[0x16].field_0x1 = local_8f;
      paVar16[0x16].field_0x2 = local_8e;
      pUVar11 = GetTransientPackageAsObject();
      pUVar12 = NewObject<UDS_UserObjectListItem>(pUVar11);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      pFVar13 = ::operator_new(0x88);
      pFVar17 = pFVar20;
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        pFVar13->_padding_ = 0;
        *(undefined8 *)&pFVar13->DerivedStaticStruct = 0;
        (pFVar13->ViewModelName).ComparisonIndex = 0;
        (pFVar13->ViewModelName).Number = 0;
        *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
        pFVar13[1]._padding_ = 0;
        *(undefined8 *)&pFVar13[1].DerivedStaticStruct = 0;
        pFVar13[1].ViewModelName.ComparisonIndex = 0;
        pFVar13[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar13[1].ViewModelTemplateKey = 0;
        pFVar13[2]._padding_ = 0;
        *(undefined8 *)&pFVar13[2].DerivedStaticStruct = 0;
        pFVar13[2].ViewModelName.ComparisonIndex = 0;
        pFVar13[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar13[2].ViewModelTemplateKey = 0;
        pFVar13[3]._padding_ = 0;
        *(undefined8 *)&pFVar13[3].DerivedStaticStruct = 0;
        pFVar13[3].ViewModelName.ComparisonIndex = 0;
        pFVar13[3].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar13[3].ViewModelTemplateKey = 0;
        pFVar13[4]._padding_ = 0;
        pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_Tab__6B_;
        *(atomic<int> *)&pFVar13[1].DerivedStaticStruct = (atomic<int>)0xffffffff;
        pFVar17 = pFVar13;
      }
      pFVar14 = ::operator_new(0x20);
      pFVar13 = pFVar20;
      if (pFVar14 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar14->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar14->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar14->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Tab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar14->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar14->ViewModelTemplateKey = pFVar17;
        pFVar13 = pFVar14;
      }
      if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar15 = FDS_ViewModelContext_Tab::StaticStruct();
      *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar15;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar13->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_58.Object = pFVar17;
        local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      pFVar17->ViewModelTemplateKey = CommonTab;
      local_88 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar17 + 1),(FObjectPtr)&local_88);
      *(atomic<int> *)&pFVar17[1].DerivedStaticStruct = aVar21;
      *(EDS_StringTableType *)&pFVar17[1].ViewModelName.ComparisonIndex.Value =
           local_e0.StringTableType;
      *(long64 *)&pFVar17[1].ViewModelTemplateKey = local_e0.StringTableID;
      pFVar17[2]._padding_ = (longlong)local_e0.StringEnumTableNameID;
      *(long64 *)&pFVar17[2].DerivedStaticStruct = local_e0.DateTime.Ticks;
      pFVar17[2].ViewModelName.ComparisonIndex = (FNameEntryId)(undefined4)local_e0.TimeSpan.Ticks;
      pFVar17[2].ViewModelName.Number = local_e0.TimeSpan.Ticks._4_4_;
      pFVar17[2].ViewModelTemplateKey = local_e0.TimeExpressionType;
      pFVar17[2].field_0x1c = local_e0.IsExpression;
      ::FString::operator=((FString *)(pFVar17 + 3),&local_e0.UniqueString);
      pFVar1 = &pFVar17[3].ViewModelName;
      if ((TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)pFVar1 != &local_e0.FormatArgs) {
        DestructItems<FDS_TextFormatArg,int>
                  (*(FDS_TextFormatArg **)&pFVar1->ComparisonIndex,pFVar17[3].ViewModelTemplateKey);
        iVar10 = local_e0.FormatArgs.ArrayNum;
        FVar7.Data = local_e0.FormatArgs.AllocatorInstance.Data;
        puVar2 = &pFVar17[3].field_0x1c;
        pFVar17[3].ViewModelTemplateKey = local_e0.FormatArgs.ArrayNum;
        aVar21 = local_res18;
        if ((local_e0.FormatArgs.ArrayNum == None) && (*(int *)puVar2 == 0)) {
          *(undefined4 *)puVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_e0.FormatArgs.ArrayNum,*(int *)puVar2,(ForAnyElementType *)pFVar1,
                     local_e0.FormatArgs.ArrayNum,(int *)puVar2);
          ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                    (*(void **)&pFVar1->ComparisonIndex,(FDS_TextFormatArg *)FVar7.Data,iVar10);
        }
      }
      *(FScriptContainerElement *)&pFVar17[4]._padding_ = local_90;
      *(FScriptContainerElement *)((longlong)&pFVar17[4]._padding_ + 1) = local_8f;
      *(FScriptContainerElement *)((longlong)&pFVar17[4]._padding_ + 2) = local_8e;
      if (pFVar13 == (FDS_ViewModelContext *)0x0) {
        paVar16 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar16 = (atomic<int> *)&pFVar13->DerivedStaticStruct;
        LOCK();
        *paVar16 = (atomic<int>)((int)*paVar16 + 1);
        UNLOCK();
      }
      iVar10 = (pUVar12->ViewModelContextArray).ArrayNum;
      piVar18 = &(pUVar12->ViewModelContextArray).ArrayMax;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pUVar12->ViewModelContextArray).AllocatorInstance,piVar18);
      }
      (pUVar12->ViewModelContextArray).ArrayNum = iVar10 + 1;
      pFVar5 = (pUVar12->ViewModelContextArray).AllocatorInstance.Data;
      *(FDS_ViewModelContext **)(pFVar5 + (longlong)iVar10 * 0x10) = pFVar17;
      *(FDS_ViewModelContext **)(pFVar5 + (longlong)iVar10 * 0x10 + 8) = pFVar13;
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *paVar16 = (atomic<int>)((int)*paVar16 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
      local_80 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      FDS_EntryBindingEventField::Add(local_78,(TObjectPtr<UDS_UserObjectListItem>)&local_80);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_e0.FormatArgs.AllocatorInstance.Data,
                 local_e0.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_e0.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_e0.FormatArgs.AllocatorInstance.Data);
      }
      if (local_e0.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.UniqueString.Data.AllocatorInstance.Data);
      }
      local_res18 = (atomic<int>)((int)aVar21 + 1);
      pFVar17 = (FDS_ViewModelContext *)(ulonglong)(uint)local_res18;
      local_res20 = local_res20 + 0x60;
      local_f8 = local_f8 + -1;
      piVar18 = &local_70->ArrayMax;
      pTVar19 = local_70;
    } while (local_f8 != 0);
  }
  local_60 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// SetTabText @ 14bde9620

void __thiscall
UDS_VM_Common_TabGroup::SetTabText(UDS_VM_Common_TabGroup *this,int param_1,FDS_Text *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  UDS_UIEvent *pUVar9;
  longlong lVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  uint uVar11;
  FWeakObjectPtr local_res8;
  UDS_VM_Common_TabGroup *local_res20;
  FWeakObjectPtr local_48 [2];
  
  if ((-1 < param_1) && (param_1 < (this->TabInfos).ArrayNum)) {
    uVar11 = 0;
    if (param_1 < (this->TabInfos).ArrayNum) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FDS_Text::operator=((FDS_Text *)
                        ((this->TabInfos).AllocatorInstance.Data + (longlong)param_1 * 0x60 + 8),
                        param_2);
    UpdateTabContexts(this);
    pUVar9 = UDS_UIEvent::GetEvent();
    if (pUVar9 != (UDS_UIEvent *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      local_48[0] = local_res8;
      iVar7 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
                          *)&(pUVar9->OnChangedTabText).Subscriptions,
                         local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_48);
      if (iVar7 != -1) {
        lVar10 = (longlong)iVar7 * 0x50 + *(longlong *)&(pUVar9->OnChangedTabText).Subscriptions;
        this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(lVar10 + 8);
        if (lVar10 == 0) {
          this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
        }
        if (this_00 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)this_00);
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
          bVar4 = false;
          uVar11 = (this_00->InvocationList).ArrayNum - 1;
          if (-1 < (int)uVar11) {
            lVar10 = (longlong)(int)uVar11 << 4;
            bVar4 = false;
            do {
              uVar8 = 0;
              if ((int)uVar11 < (this_00->InvocationList).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
              if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                  (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2), cVar6 == '\0')) {
                bVar4 = true;
              }
              lVar10 = lVar10 + -0x10;
              uVar11 = uVar11 - 1;
            } while (-1 < (int)uVar11);
          }
          this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
          if (bVar4) {
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      (this_00,false);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
        }
      }
    }
  }
  return;
}

// UnbindModel @ 14bdeca00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Common_TabGroup::UnbindModel(UDS_VM_Common_TabGroup *this)

{
  bool bVar1;
  UDS_LanguageManager *pUVar2;
  UDS_UIEvent *pUVar3;
  UDS_WindowManager *this_00;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  
  pUVar2 = UDS_LanguageManager::GetInst();
  if (pUVar2 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLanguageChanged,this
              );
  }
  pUVar3 = UDS_UIEvent::GetEvent();
  if (pUVar3 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_>::
    Remove<UDS_VM_Common_TabGroup>(&pUVar3->OnClickTabIndex,this);
  }
  if (this->ParentWindowWidget != None) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res8);
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[5].field_0x18,this)
        ;
      }
    }
    this->ParentWindowWidget = None;
  }
  return;
}

// UpdateTabContexts @ 14bdf8af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Common_TabGroup::UpdateTabContexts(UDS_VM_Common_TabGroup *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FDS_ViewModelContext_Tab *pFVar4;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  UDS_LogManager *pUVar8;
  void *pvVar9;
  undefined8 *puVar10;
  FSharedReferencer<1> FVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8 [8];
  longlong local_2d0;
  TSharedPtr<FDS_ViewModelContext_Tab,1> local_2c8;
  UDS_VM_Common_TabGroup *local_2b8;
  longlong local_2b0;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *local_2a8;
  FName local_298;
  int local_290;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2b8 = this;
  local_2a8 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
  uVar14 = 0;
  local_2b0 = (longlong)local_2a8->ArrayNum;
  if (0 < local_2b0) {
    local_2d0 = 0;
    uVar16 = uVar14;
    do {
      pTVar5 = local_2a8;
      lVar17 = local_2d0;
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < local_2a8->ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pTVar5->AllocatorInstance).Data;
      if (*(longlong *)(pFVar2 + uVar16 * 8) == 0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_VM_Common_TabGroup::UpdateTabContexts",0x29,Yes);
          UDS_LogManager::PrintLog(pUVar8,1,Warning,local_278.Ptr,0xdc,L"item == nullptr");
          pvVar9 = (void *)local_278._padding_;
LAB_14bdf8e38:
          if (pvVar9 != (void *)0x0) {
            FMemory::Free(pvVar9);
          }
        }
      }
      else if (((int)uVar13 < 0) || ((this->TabInfos).ArrayNum <= (int)uVar13)) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_VM_Common_TabGroup::UpdateTabContexts",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_158.Ptr,0xe2,L"TabInfos.IsValidIndex(index) == false");
          pvVar9 = (void *)local_158._padding_;
          goto LAB_14bdf8e38;
        }
      }
      else {
        uVar7 = 0;
        if ((int)uVar13 < (this->TabInfos).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar15 = (this->TabInfos).AllocatorInstance.Data + lVar17;
        pFVar15[0x58] = (FScriptContainerElement)(this->SelectedIndex == uVar13);
        lVar17 = *(longlong *)(pFVar2 + uVar16 * 8);
        iVar1 = *(int *)(lVar17 + 0xa0);
        puVar10 = *(undefined8 **)(lVar17 + 0x98);
        puVar12 = puVar10 + (longlong)iVar1 * 2;
        while( true ) {
          if (*(int *)(lVar17 + 0xa0) != iVar1) {
            local_2d8[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_2d8);
          }
          if (puVar10 == puVar12) {
            FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14bdf8dac;
          }
          local_288.Object = (FDS_ViewModelContext *)*puVar10;
          local_288.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar10[1];
          if (local_288.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SafeCast<FDS_ViewModelContext_Tab>(&local_2c8,&local_288);
          FVar11.ReferenceController = local_2c8.SharedReferenceCount.ReferenceController;
          pFVar4 = local_2c8.Object;
          if (local_2c8.Object != (FDS_ViewModelContext_Tab *)0x0) break;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2c8.SharedReferenceCount.ReferenceController);
          puVar10 = puVar10 + 2;
        }
        local_2c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_2c8.Object = (FDS_ViewModelContext_Tab *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pFVar4 != (FDS_ViewModelContext_Tab *)0x0) {
          pFVar4->TabIndex = *(int *)pFVar15;
          FDS_Text::operator=(&pFVar4->TabText,(FDS_Text *)(pFVar15 + 8));
          pFVar4->IsSelected = (bool)pFVar15[0x58];
          pFVar4->IsDisabled = (bool)pFVar15[0x59];
          pFVar4->IsReddot = (bool)pFVar15[0x5a];
        }
LAB_14bdf8dac:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
        this = local_2b8;
        lVar17 = local_2d0;
      }
      local_2d0 = lVar17 + 0x60;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 1;
    } while ((longlong)uVar16 < local_2b0);
  }
  local_290 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_298 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
  return;
}

// UpdateTabGroup @ 14bdf8ed0

void __thiscall UDS_VM_Common_TabGroup::UpdateTabGroup(UDS_VM_Common_TabGroup *this,int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UDS_UIEvent *pUVar7;
  longlong lVar8;
  TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *this_00;
  uint uVar9;
  FWeakObjectPtr local_res8 [2];
  UDS_VM_Common_TabGroup *local_res18;
  FWeakObjectPtr local_res20;
  FName local_38;
  int local_30;
  
  local_30 = FFieldNotificationClassDescriptor::SelectedIndex.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::SelectedIndex.FieldName;
  uVar5 = 0;
  uVar9 = uVar5;
  if (((-1 < param_1) && (iVar1 = (this->TabInfos).ArrayNum, iVar1 != 0)) &&
     (uVar9 = param_1, iVar1 <= param_1)) {
    uVar9 = iVar1 - 1;
  }
  if (this->SelectedIndex != uVar9) {
    this->SelectedIndex = uVar9;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    UpdateTabContexts(this);
    pUVar7 = UDS_UIEvent::GetEvent();
    if (pUVar7 != (UDS_UIEvent *)0x0) {
      uVar9 = this->SelectedIndex;
      if ((int)uVar9 < (this->TabInfos).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = this->SelectedIndex;
      iVar2 = *(int *)((this->TabInfos).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x60 + 4);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res8[0].ObjectIndex = 0;
      local_res8[0].ObjectSerialNumber = 0;
      local_res18 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res18);
      local_res20 = local_res8[0];
      iVar6 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
                          *)&(pUVar7->OnSelectedTabIndex).Subscriptions,
                         local_res8[0].ObjectSerialNumber ^ local_res8[0].ObjectIndex,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20);
      if (iVar6 != -1) {
        lVar8 = (longlong)iVar6 * 0x50 + *(longlong *)&(pUVar7->OnSelectedTabIndex).Subscriptions;
        this_00 = (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)
                  (lVar8 + 8);
        if (lVar8 == 0) {
          this_00 = (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)0x0;
        }
        if (this_00 != (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)0x0
           ) {
          TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::Broadcast
                    (this_00,iVar1,iVar2);
        }
      }
    }
  }
  return;
}

