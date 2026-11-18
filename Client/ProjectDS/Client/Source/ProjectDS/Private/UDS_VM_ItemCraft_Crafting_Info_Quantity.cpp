// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b689660

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info_Quantity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Quantity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info_Quantity",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Quantity.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Quantity,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info_Quantity>
               ,InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info_Quantity>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Quantity.InnerSingleton;
}

// UDS_VM_ItemCraft_Crafting_Info_Quantity @ 14b68cc00

UDS_VM_ItemCraft_Crafting_Info_Quantity * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::UDS_VM_ItemCraft_Crafting_Info_Quantity
          (UDS_VM_ItemCraft_Crafting_Info_Quantity *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Quantity__6B_;
  (this->VM_QuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  return this;
}

// UDS_VM_ItemCraft_Crafting_Info_Quantity @ 14b68cc50

UDS_VM_ItemCraft_Crafting_Info_Quantity * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::UDS_VM_ItemCraft_Crafting_Info_Quantity
          (UDS_VM_ItemCraft_Crafting_Info_Quantity *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Quantity__6B_;
  (this->VM_QuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  return this;
}

// ~UDS_VM_ItemCraft_Crafting_Info_Quantity @ 14b68de40

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::~UDS_VM_ItemCraft_Crafting_Info_Quantity
          (UDS_VM_ItemCraft_Crafting_Info_Quantity *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Quantity__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fd30

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::GetFieldNotificationDescriptor
          (UDS_VM_ItemCraft_Crafting_Info_Quantity *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Crafting_Info_Quantity::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6905e0

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info_Quantity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Quantity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info_Quantity",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Quantity.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Quantity,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info_Quantity>
               ,InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info_Quantity>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Quantity.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Quantity @ 14b691040

void __cdecl
UDS_VM_ItemCraft_Crafting_Info_Quantity::
StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Quantity(void)

{
  return;
}

// BindModel @ 14be772b0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::BindModel(UDS_VM_ItemCraft_Crafting_Info_Quantity *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info_Quantity>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,
               (UDS_VM_ItemCraft_Crafting_Info_Quantity *)&stack0x00000010,(pmf_624df86a *)this);
  }
  return;
}

// InitViewModel @ 14be8d760

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::InitViewModel
          (UDS_VM_ItemCraft_Crafting_Info_Quantity *this)

{
  UDS_VM_W_CommonQuantityControl *pUVar1;
  
  if ((this->VM_QuantityControl).field0_0x0.DebugPtr == (UDS_VM_W_CommonQuantityControl *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_CommonQuantityControl>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_W_CommonQuantityControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_QuantityControl).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnChangeCraftManager_ItemCraftListTID @ 14be906c0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::OnChangeCraftManager_ItemCraftListTID
          (UDS_VM_ItemCraft_Crafting_Info_Quantity *this)

{
  UDS_VM_W_CommonQuantityControl *this_00;
  code *pcVar1;
  FDS_ViewModelContext_CommonQuantityControl *pFVar2;
  bool bVar3;
  int iVar4;
  UDS_CraftManager *this_01;
  TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> local_38;
  code *local_28;
  undefined8 uStack_20;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  this_01 = UDS_CraftManager::GetInst();
  if (this_01 != (UDS_CraftManager *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonQuantityControl>(&local_38);
    pFVar2 = local_38.Object;
    if (local_38.Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
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
    *(undefined4 *)&pFVar2->_padding_ = 0x15f;
    pFVar2->Min = 1.0;
    iVar4 = UDS_CraftManager::GetSelectedCraftMaxValue(this_01);
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    pFVar2->Max = (float)iVar4;
    local_28 = OnQuantityChangedEvent;
    pFVar2->InitialQuantity = 1.0;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info_Quantity>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pFVar2->OnQuantityChangeEvent,
               (UDS_VM_ItemCraft_Crafting_Info_Quantity *)&stack0x00000010,(pmf_43a450f3 *)this);
    this_00 = (this->VM_QuantityControl).field0_0x0.DebugPtr;
    if (this_00 != (UDS_VM_W_CommonQuantityControl *)0x0) {
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
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnQuantityChangedEvent @ 14be9b820

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::OnQuantityChangedEvent
          (UDS_VM_ItemCraft_Crafting_Info_Quantity *this,float param_1)

{
  UDS_CraftManager *pUVar1;
  UDS_ItemCraftEvent *pUVar2;
  
  pUVar1 = UDS_CraftManager::GetInst();
  if (pUVar1 != (UDS_CraftManager *)0x0) {
    pUVar2 = UDS_ItemCraftEvent::GetEvent();
    if (pUVar2 != (UDS_ItemCraftEvent *)0x0) {
      FDS_EventDelegate<int_const_>::Broadcast(&pUVar2->OnChangeCraftQuantityEvent,(int)param_1);
    }
  }
  return;
}

// OnSetViewModel @ 14bea3af0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::OnSetViewModel
          (UDS_VM_ItemCraft_Crafting_Info_Quantity *this,TSharedPtr<FDS_ViewModelContext,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_W_CommonQuantityControl *this_00;
  code *pcVar2;
  FDS_ViewModelContext_CommonQuantityControl *pFVar3;
  bool bVar4;
  int iVar5;
  UDS_CraftManager *this_01;
  TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> local_38;
  code *local_28;
  undefined8 uStack_20;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this_01 = UDS_CraftManager::GetInst();
  if ((this_01 != (UDS_CraftManager *)0x0) &&
     ((this->VM_QuantityControl).field0_0x0.DebugPtr != (UDS_VM_W_CommonQuantityControl *)0x0)) {
    MakeContext<FDS_ViewModelContext_CommonQuantityControl>(&local_38);
    pFVar3 = local_38.Object;
    if (local_38.Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15f;
    pFVar3->Min = 1.0;
    iVar5 = UDS_CraftManager::GetSelectedCraftMaxValue(this_01);
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    pFVar3->Max = (float)iVar5;
    local_28 = OnQuantityChangedEvent;
    pFVar3->InitialQuantity = 1.0;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info_Quantity>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pFVar3->OnQuantityChangeEvent,
               (UDS_VM_ItemCraft_Crafting_Info_Quantity *)&stack0x00000010,(pmf_43a450f3 *)this);
    this_00 = (this->VM_QuantityControl).field0_0x0.DebugPtr;
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
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bebc880

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Quantity::UnbindModel(UDS_VM_ItemCraft_Crafting_Info_Quantity *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeCraftManager_ItemCraftListTID,this);
    return;
  }
  return;
}

