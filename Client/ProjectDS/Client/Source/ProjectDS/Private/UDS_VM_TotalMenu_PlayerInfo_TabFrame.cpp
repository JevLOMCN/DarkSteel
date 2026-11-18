// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetLeft_Category_WrapperImpl @ 14b6eef30

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_TabFrame::SetLeft_Category_WrapperImpl(void *param_1,void *param_2)

{
  UDS_TotalMenuEvent *pUVar1;
  int aiStackX_8 [8];
  
  aiStackX_8[0] = *(int *)((longlong)param_1 + 0xf0) + -1;
  if (aiStackX_8[0] < 0) {
    aiStackX_8[0] = 0;
  }
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    FDS_EventDelegate<FDS_ButtonEventField_const_&,int_const_&>::Broadcast
              (&pUVar1->OnClickPlayerInfoTab,param_2,aiStackX_8);
  }
  return;
}

// SetRight_Category_WrapperImpl @ 14b6eef40

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_TabFrame::SetRight_Category_WrapperImpl(void *param_1,void *param_2)

{
  UDS_TotalMenuEvent *pUVar1;
  int aiStackX_8 [8];
  
  aiStackX_8[0] = *(int *)((longlong)param_1 + 0xf0) + 1;
  if (aiStackX_8[0] == 2) {
    aiStackX_8[0] = 1;
  }
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    FDS_EventDelegate<FDS_ButtonEventField_const_&,int_const_&>::Broadcast
              (&pUVar1->OnClickPlayerInfoTab,param_2,aiStackX_8);
  }
  return;
}

// StaticClass @ 14b6eef50

UClass * __cdecl UDS_VM_TotalMenu_PlayerInfo_TabFrame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_PlayerInfo_TabFrame",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_TabFrame,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_PlayerInfo_TabFrame>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_PlayerInfo_TabFrame>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame.InnerSingleton;
}

// UDS_VM_TotalMenu_PlayerInfo_TabFrame @ 14b6f2f30

UDS_VM_TotalMenu_PlayerInfo_TabFrame * __thiscall
UDS_VM_TotalMenu_PlayerInfo_TabFrame::UDS_VM_TotalMenu_PlayerInfo_TabFrame
          (UDS_VM_TotalMenu_PlayerInfo_TabFrame *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_TabFrame__6B_;
  (this->VM_PlayerInfo_Tab_Status).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0;
  (this->VM_PlayerInfo_Tab_Coin).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0;
  (this->Left_Category)._padding_ = '\0';
  (this->Left_Category).bIsCustomSelected = false;
  (this->Left_Category).bIsLacked = false;
  (this->Left_Category).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Left_Category).Delegate = 0;
  *(undefined8 *)&(this->Left_Category).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Left_Category).Delegate.field_0x10 = 0;
  (this->Right_Category)._padding_ = '\0';
  (this->Right_Category).bIsCustomSelected = false;
  (this->Right_Category).bIsLacked = false;
  (this->Right_Category).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Right_Category).Delegate = 0;
  *(undefined8 *)&(this->Right_Category).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Right_Category).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_TotalMenu_PlayerInfo_TabFrame @ 14b6f2fc0

UDS_VM_TotalMenu_PlayerInfo_TabFrame * __thiscall
UDS_VM_TotalMenu_PlayerInfo_TabFrame::UDS_VM_TotalMenu_PlayerInfo_TabFrame
          (UDS_VM_TotalMenu_PlayerInfo_TabFrame *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_TabFrame__6B_;
  (this->VM_PlayerInfo_Tab_Status).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0;
  (this->VM_PlayerInfo_Tab_Coin).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0;
  (this->Left_Category)._padding_ = '\0';
  (this->Left_Category).bIsCustomSelected = false;
  (this->Left_Category).bIsLacked = false;
  (this->Left_Category).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Left_Category).Delegate = 0;
  *(undefined8 *)&(this->Left_Category).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Left_Category).Delegate.field_0x10 = 0;
  (this->Right_Category)._padding_ = '\0';
  (this->Right_Category).bIsCustomSelected = false;
  (this->Right_Category).bIsLacked = false;
  (this->Right_Category).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Right_Category).Delegate = 0;
  *(undefined8 *)&(this->Right_Category).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Right_Category).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_TotalMenu_PlayerInfo_TabFrame @ 14b6f4780

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_TabFrame::~UDS_VM_TotalMenu_PlayerInfo_TabFrame
          (UDS_VM_TotalMenu_PlayerInfo_TabFrame *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_PlayerInfo_TabFrame__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Right_Category).Delegate);
  pvVar1 = *(void **)&(this->Right_Category).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Right_Category).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Left_Category).Delegate);
  pvVar1 = *(void **)&(this->Left_Category).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Left_Category).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f7030

IClassDescriptor * __thiscall
UDS_VM_TotalMenu_PlayerInfo_TabFrame::GetFieldNotificationDescriptor
          (UDS_VM_TotalMenu_PlayerInfo_TabFrame *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TotalMenu_PlayerInfo_TabFrame::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7c60

UClass * __cdecl UDS_VM_TotalMenu_PlayerInfo_TabFrame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_PlayerInfo_TabFrame",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_TabFrame,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_PlayerInfo_TabFrame>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_PlayerInfo_TabFrame>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_PlayerInfo_TabFrame.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_TabFrame @ 14b6f84e0

void __cdecl
UDS_VM_TotalMenu_PlayerInfo_TabFrame::StaticRegisterNativesUDS_VM_TotalMenu_PlayerInfo_TabFrame
          (void)

{
  return;
}

// InitViewModel @ 14bf5be40

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_TabFrame::InitViewModel(UDS_VM_TotalMenu_PlayerInfo_TabFrame *this)

{
  UDS_VM_TotalMenu_PlayerInfo_Tab *pUVar1;
  
  if ((this->VM_PlayerInfo_Tab_Status).field0_0x0.DebugPtr == (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0
     ) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_TotalMenu_PlayerInfo_Tab>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_PlayerInfo_Tab_Status).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_PlayerInfo_Tab_Coin).field0_0x0.DebugPtr == (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0)
  {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_TotalMenu_PlayerInfo_Tab>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_PlayerInfo_Tab_Coin).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnClickLeftCategory @ 14bf622d0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_TabFrame::OnClickLeftCategory
          (UDS_VM_TotalMenu_PlayerInfo_TabFrame *this,FDS_ButtonEventField *param_1)

{
  UDS_TotalMenuEvent *pUVar1;
  int local_res8 [8];
  
  local_res8[0] = this->SelectedTabType - Coin;
  if (local_res8[0] < 0) {
    local_res8[0] = 0;
  }
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    FDS_EventDelegate<FDS_ButtonEventField_const_&,int_const_&>::Broadcast
              (&pUVar1->OnClickPlayerInfoTab,param_1,local_res8);
  }
  return;
}

// OnClickRightCategory @ 14bf62760

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_TabFrame::OnClickRightCategory
          (UDS_VM_TotalMenu_PlayerInfo_TabFrame *this,FDS_ButtonEventField *param_1)

{
  UDS_TotalMenuEvent *pUVar1;
  int local_res8 [8];
  
  local_res8[0] = this->SelectedTabType + Coin;
  if (local_res8[0] == 2) {
    local_res8[0] = 1;
  }
  pUVar1 = UDS_TotalMenuEvent::GetEvent();
  if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
    FDS_EventDelegate<FDS_ButtonEventField_const_&,int_const_&>::Broadcast
              (&pUVar1->OnClickPlayerInfoTab,param_1,local_res8);
  }
  return;
}

// OnSetViewModel @ 14bf6f3e0

void __thiscall
UDS_VM_TotalMenu_PlayerInfo_TabFrame::OnSetViewModel
          (UDS_VM_TotalMenu_PlayerInfo_TabFrame *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_TotalMenu_PlayerInfo_Tab *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_TotalMenuPlayerInfoTab *pFVar4;
  bool bVar5;
  UObject *pUVar6;
  int iVar7;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> local_48;
  TSharedPtr<FDS_ViewModelContext_TotalMenuPlayerInfoTab,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar7 = 0;
  UDS_TotalMenuLocalSave::GetInst();
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    iVar7 = *(int *)(pUVar6 + 1);
  }
  if ((this->VM_PlayerInfo_Tab_Status).field0_0x0.DebugPtr != (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0
     ) {
    MakeContext<FDS_ViewModelContext_TotalMenuPlayerInfoTab>(&local_48);
    pFVar4 = local_48.Object;
    if (local_48.Object == (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x38;
    pFVar4->TabIndex = 0;
    pFVar4->IsSelected = iVar7 == 0;
    pFVar4->TabNameStringUiID = 0x2335;
    pUVar2 = (this->VM_PlayerInfo_Tab_Status).field0_0x0.DebugPtr;
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
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_PlayerInfo_Tab_Coin).field0_0x0.DebugPtr != (UDS_VM_TotalMenu_PlayerInfo_Tab *)0x0)
  {
    MakeContext<FDS_ViewModelContext_TotalMenuPlayerInfoTab>(&local_38);
    pFVar4 = local_38.Object;
    if (local_38.Object == (FDS_ViewModelContext_TotalMenuPlayerInfoTab *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x38;
    pFVar4->TabIndex = 1;
    pFVar4->IsSelected = iVar7 == 1;
    pFVar4->TabNameStringUiID = 0x2339;
    pUVar2 = (this->VM_PlayerInfo_Tab_Coin).field0_0x0.DebugPtr;
    local_18.Object = (FDS_ViewModelContext *)local_38.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  this->SelectedTabType = Status;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

