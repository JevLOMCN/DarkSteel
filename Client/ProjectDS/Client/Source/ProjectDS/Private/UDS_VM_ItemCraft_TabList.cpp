// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetTabWidgetSwitcherIndex_WrapperImpl @ 14b687c10

void __cdecl
UDS_VM_ItemCraft_TabList::SetTabWidgetSwitcherIndex_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b687c20

UClass * __cdecl UDS_VM_ItemCraft_TabList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_TabList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_TabList",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_TabList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_TabList,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemCraft_TabList>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_TabList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_TabList.InnerSingleton;
}

// UDS_VM_ItemCraft_TabList @ 14b68d280

UDS_VM_ItemCraft_TabList * __thiscall
UDS_VM_ItemCraft_TabList::UDS_VM_ItemCraft_TabList
          (UDS_VM_ItemCraft_TabList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_TabList__6B_;
  (this->VM_ItemCraftTab).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Tab *)0x0;
  (this->VM_ItemCraftingTab).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Tab *)0x0;
  (this->VM_ItemInventoryTab).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Tab *)0x0;
  this->CurrentCraftTab = Craft;
  return this;
}

// UDS_VM_ItemCraft_TabList @ 14b68d2e0

UDS_VM_ItemCraft_TabList * __thiscall
UDS_VM_ItemCraft_TabList::UDS_VM_ItemCraft_TabList
          (UDS_VM_ItemCraft_TabList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_TabList__6B_;
  (this->VM_ItemCraftTab).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Tab *)0x0;
  (this->VM_ItemCraftingTab).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Tab *)0x0;
  (this->VM_ItemInventoryTab).field0_0x0.DebugPtr = (UDS_VM_ItemCraft_Tab *)0x0;
  this->CurrentCraftTab = Craft;
  return this;
}

// ~UDS_VM_ItemCraft_TabList @ 14b68e100

void __thiscall UDS_VM_ItemCraft_TabList::~UDS_VM_ItemCraft_TabList(UDS_VM_ItemCraft_TabList *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_TabList__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68ffd0

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_TabList::GetFieldNotificationDescriptor(UDS_VM_ItemCraft_TabList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_TabList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690a60

UClass * __cdecl UDS_VM_ItemCraft_TabList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_TabList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_TabList",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_TabList.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_TabList,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemCraft_TabList>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_TabList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_TabList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_TabList @ 14b691130

void __cdecl UDS_VM_ItemCraft_TabList::StaticRegisterNativesUDS_VM_ItemCraft_TabList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemCraft_TabList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnItemCraftEvent @ 14b6921f0

void __cdecl
UDS_VM_ItemCraft_TabList::execOnItemCraftEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnItemCraftEvent((UDS_VM_ItemCraft_TabList *)param_1);
  return;
}

// BindModel @ 14be77820

void __thiscall UDS_VM_ItemCraft_TabList::BindModel(UDS_VM_ItemCraft_TabList *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectCraftTabEvent,
               this);
    TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_TabList>
              ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSelectCraftTabEvent,(UDS_VM_ItemCraft_TabList *)&stack0x00000010,
               (pmf_fee87dca *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_TabList>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,
               (UDS_VM_ItemCraft_TabList *)&stack0x00000010,(pmf_3fe34ac8 *)this);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_ItemCraft_TabList>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FDS_ItemCraftService::ItemCraftDelegate,(UDS_VM_ItemCraft_TabList *)&stack0x00000010,
             (pmf_3fe34ac8 *)this);
  return;
}

// InitViewModel @ 14be8d8e0

void __thiscall UDS_VM_ItemCraft_TabList::InitViewModel(UDS_VM_ItemCraft_TabList *this)

{
  UDS_VM_ItemCraft_Tab *pUVar1;
  
  if ((this->VM_ItemCraftTab).field0_0x0.DebugPtr == (UDS_VM_ItemCraft_Tab *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_ItemCraft_Tab>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_ItemCraft_Tab *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_ItemCraftTab).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_ItemCraftingTab).field0_0x0.DebugPtr == (UDS_VM_ItemCraft_Tab *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_ItemCraft_Tab>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_ItemCraft_Tab *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_ItemCraftingTab).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_ItemInventoryTab).field0_0x0.DebugPtr == (UDS_VM_ItemCraft_Tab *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_ItemCraft_Tab>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_ItemCraft_Tab *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_ItemInventoryTab).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnChangeCraftManager_ItemCraftListTID @ 14be90920

void __thiscall
UDS_VM_ItemCraft_TabList::OnChangeCraftManager_ItemCraftListTID(UDS_VM_ItemCraft_TabList *this)

{
  FName local_18;
  int local_10;
  
  this->CurrentCraftTab = Craft;
  this->TabWidgetSwitcherIndex = 0;
  local_10 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnItemCraftEvent @ 14be99a00

void __thiscall UDS_VM_ItemCraft_TabList::OnItemCraftEvent(UDS_VM_ItemCraft_TabList *this)

{
  FName local_18;
  int local_10;
  
  this->CurrentCraftTab = Crafting;
  this->TabWidgetSwitcherIndex = 1;
  local_10 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSelectCraftTabEvent @ 14be9c670

void __thiscall
UDS_VM_ItemCraft_TabList::OnSelectCraftTabEvent(UDS_VM_ItemCraft_TabList *this,int *param_1)

{
  int iVar1;
  FName local_18;
  int local_10;
  
  iVar1 = *param_1;
  this->CurrentCraftTab = (EDS_CraftTab)iVar1;
  this->TabWidgetSwitcherIndex = (uint)(EDS_CraftTab)iVar1;
  local_10 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bea4460

void __thiscall
UDS_VM_ItemCraft_TabList::OnSetViewModel
          (UDS_VM_ItemCraft_TabList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_ItemCraft_Tab *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_ItemCraft_Tab *pFVar4;
  bool bVar5;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext_ItemCraft_Tab,1> local_68;
  TSharedPtr<FDS_ViewModelContext_ItemCraft_Tab,1> local_58;
  TSharedPtr<FDS_ViewModelContext_ItemCraft_Tab,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((this->VM_ItemCraftTab).field0_0x0.DebugPtr != (UDS_VM_ItemCraft_Tab *)0x0) {
    MakeContext<FDS_ViewModelContext_ItemCraft_Tab>(&local_68);
    pFVar4 = local_68.Object;
    if (local_68.Object == (FDS_ViewModelContext_ItemCraft_Tab *)0x0) {
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
    *(undefined4 *)&pFVar4->_padding_ = 0x139;
    pFVar4->TabIndex = 0;
    pUVar2 = (this->VM_ItemCraftTab).field0_0x0.DebugPtr;
    local_38.Object = (FDS_ViewModelContext *)local_68.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_ItemCraftingTab).field0_0x0.DebugPtr != (UDS_VM_ItemCraft_Tab *)0x0) {
    MakeContext<FDS_ViewModelContext_ItemCraft_Tab>(&local_58);
    pFVar4 = local_58.Object;
    if (local_58.Object == (FDS_ViewModelContext_ItemCraft_Tab *)0x0) {
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
    *(undefined4 *)&pFVar4->_padding_ = 0x139;
    pFVar4->TabIndex = 1;
    pUVar2 = (this->VM_ItemCraftingTab).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_58.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_ItemInventoryTab).field0_0x0.DebugPtr != (UDS_VM_ItemCraft_Tab *)0x0) {
    MakeContext<FDS_ViewModelContext_ItemCraft_Tab>(&local_48);
    pFVar4 = local_48.Object;
    if (local_48.Object == (FDS_ViewModelContext_ItemCraft_Tab *)0x0) {
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
    *(undefined4 *)&pFVar4->_padding_ = 0x139;
    pFVar4->TabIndex = 2;
    pUVar2 = (this->VM_ItemInventoryTab).field0_0x0.DebugPtr;
    local_18.Object = (FDS_ViewModelContext *)local_48.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  this->CurrentCraftTab = Craft;
  this->TabWidgetSwitcherIndex = 0;
  local_70 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTabSelected @ 14beb4870

void __thiscall
UDS_VM_ItemCraft_TabList::SetTabSelected(UDS_VM_ItemCraft_TabList *this,EDS_CraftTab *param_1)

{
  EDS_CraftTab EVar1;
  FName local_18;
  int local_10;
  
  EVar1 = *param_1;
  this->CurrentCraftTab = EVar1;
  this->TabWidgetSwitcherIndex = (uint)EVar1;
  local_10 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTabWidgetSwitcherIndex @ 14beb48c0

void __thiscall
UDS_VM_ItemCraft_TabList::SetTabWidgetSwitcherIndex(UDS_VM_ItemCraft_TabList *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->TabWidgetSwitcherIndex = *param_1;
  local_10 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabWidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebca20

void __thiscall UDS_VM_ItemCraft_TabList::UnbindModel(UDS_VM_ItemCraft_TabList *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectCraftTabEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_ItemCraftService::ItemCraftDelegate,this);
  return;
}

